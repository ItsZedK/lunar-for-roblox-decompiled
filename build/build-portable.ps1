<#
Builds LunarForRoblox-Portable-<Version>.exe: a self-extracting launcher
with the full app embedded. Nothing is downloaded by this script - you
supply the app files yourself (see BUILDING.md).

Examples:
  .\build-portable.ps1 -Package ..\lunar-for-roblox-1.0.16-x64.nsis.7z
  .\build-portable.ps1 -AppDir  ..\lunar-extracted
#>
param(
    [string]$Package,
    [string]$AppDir,
    [string]$Version = "1.0.16",
    [string]$OutFile
)

$ErrorActionPreference = "Stop"
$root = Split-Path -Parent $PSScriptRoot
if (-not $OutFile) { $OutFile = Join-Path $root "LunarForRoblox-Portable-$Version.exe" }

$csc = "$env:WINDIR\Microsoft.NET\Framework64\v4.0.30319\csc.exe"
if (-not (Test-Path $csc)) { throw "csc.exe not found at $csc (.NET Framework 4.x is required)" }
if (-not (Get-Command tar.exe -ErrorAction SilentlyContinue)) { throw "tar.exe not found (ships with Windows 10+)" }
if ($Package -and $AppDir) { throw "Pass either -Package or -AppDir, not both" }
if (-not $Package -and -not $AppDir) { throw "Pass -Package <nsis.7z> or -AppDir <folder containing LunarForRoblox.exe>" }

$work = Join-Path $PSScriptRoot "work"
if (Test-Path $work) { Remove-Item $work -Recurse -Force }
New-Item -ItemType Directory -Force $work | Out-Null

try {
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
