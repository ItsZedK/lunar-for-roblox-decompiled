<#
Builds LunarForRoblox-Portable-<Version>.exe: a self-extracting launcher
with the full app embedded. Nothing is downloaded by this script - you
supply the app files yourself (see BUILDING.md).

Examples:
  .\build-portable.ps1 -Download
  .\build-portable.ps1 -Package ..\lunar-for-roblox-1.0.16-x64.nsis.7z
  .\build-portable.ps1 -AppDir  ..\lunar-extracted
#>
param(
    [string]$Package,
    [string]$AppDir,
    [switch]$Download,
    [string]$Version = "1.0.16",
    [string]$OutFile
)

$ReleasePackageUrl = "https://github.com/chiikabu/lunar-for-roblox-decompiled/releases/download/v1.0.16/lunar-for-roblox-1.0.16-x64.nsis.7z"
$ReleasePackageSha512 = "97C042A7F202992D6448DF2D586A9298E9ACA94B650757A68278E428A54F4AB4F6125594AF6EABF96DAEAE2797EB0AA89FE7D5DCD640D60DD8F06F64A184F923"

$ErrorActionPreference = "Stop"
$root = Split-Path -Parent $PSScriptRoot
if (-not $OutFile) { $OutFile = Join-Path $root "LunarForRoblox-Portable-$Version.exe" }

$csc = "$env:WINDIR\Microsoft.NET\Framework64\v4.0.30319\csc.exe"
if (-not (Test-Path $csc)) { throw "csc.exe not found at $csc (.NET Framework 4.x is required)" }
if (-not (Get-Command tar.exe -ErrorAction SilentlyContinue)) { throw "tar.exe not found (ships with Windows 10+)" }
if ($Package -and $AppDir) { throw "Pass either -Package or -AppDir, not both" }
if (-not $Package -and -not $AppDir -and -not $Download) { throw "Pass -Package <nsis.7z>, -AppDir <folder containing LunarForRoblox.exe>, or -Download" }

$work = Join-Path $PSScriptRoot "work"
if (Test-Path $work) { Remove-Item $work -Recurse -Force }
New-Item -ItemType Directory -Force $work | Out-Null

try {
    # 0. -Download: grab the original package from this repo's GitHub Release
    #    (the official download servers are gone) and verify its SHA-512.
    if ($Download) {
        $Package = Join-Path $root "lunar-for-roblox-1.0.16-x64.nsis.7z"
        if (-not (Test-Path $Package)) {
            Write-Host "Downloading package from GitHub Release ..."
            curl.exe -L --fail -o $Package $ReleasePackageUrl
            if ($LASTEXITCODE -ne 0) { throw "download failed" }
        }
        $actual = (Get-FileHash $Package -Algorithm SHA512).Hash
        if ($actual -ne $ReleasePackageSha512) { throw "SHA-512 mismatch on package: $actual" }
        Write-Host "Package SHA-512 verified."
    }

    # 1. Get the app files into $appFiles
    if ($Package) {
        $appFiles = Join-Path $work "app"
        New-Item -ItemType Directory -Force $appFiles | Out-Null
        Write-Host "Extracting $Package ..."
        tar.exe -xf $Package -C $appFiles
        if ($LASTEXITCODE -ne 0) { throw "tar failed to extract the package" }
    } else {
        $appFiles = (Resolve-Path $AppDir).Path
    }
    if (-not (Test-Path (Join-Path $appFiles "LunarForRoblox.exe"))) {
        throw "LunarForRoblox.exe not found in $appFiles - wrong folder/package?"
    }
    if (-not (Test-Path (Join-Path $appFiles "resources\app.asar"))) {
        throw "resources\app.asar not found in $appFiles - incomplete app folder"
    }

    # 2. Zip the app (this is what gets embedded in the launcher)
    $zip = Join-Path $work "app.zip"
    Write-Host "Compressing app ..."
    tar.exe -a -cf $zip -C $appFiles .
    if ($LASTEXITCODE -ne 0) { throw "tar failed to create app.zip" }
    Write-Host ("app.zip: {0:N1} MB" -f ((Get-Item $zip).Length / 1MB))

    # 3. Compile the launcher with the zip embedded
    $launcherSrc = Join-Path $work "PortableLauncher.cs"
    (Get-Content (Join-Path $PSScriptRoot "PortableLauncher.cs") -Raw).Replace("__VERSION__", $Version) |
        Set-Content $launcherSrc -Encoding ASCII
    Write-Host "Compiling $OutFile ..."
    & $csc /nologo /target:winexe /out:$OutFile `
        /reference:System.IO.Compression.dll `
        /reference:System.IO.Compression.FileSystem.dll `
        /reference:System.Windows.Forms.dll `
        "/resource:$zip,app.zip" $launcherSrc
    if ($LASTEXITCODE -ne 0) { throw "csc failed" }

    $out = Get-Item $OutFile
    Write-Host ("Done: {0} ({1:N1} MB)" -f $out.FullName, ($out.Length / 1MB))
    Write-Host "Test extraction with:  `"$OutFile`" --extract-only"
    Write-Host "Note: the output is unsigned, Windows SmartScreen will warn on first run."
}
finally {
    if (Test-Path $work) { Remove-Item $work -Recurse -Force }
}
