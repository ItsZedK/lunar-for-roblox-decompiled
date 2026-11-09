# Rebuilding the portable exe

The repo has no binaries in it (`.gitignore` blocks them), so bring your own
copy of the app. You need one of:

- `lunar-for-roblox-1.0.16-x64.nsis.7z` - the package the official installer
  used to download. The download servers are dead, so this means a local copy.
  SHA-512 of the real 1.0.16 package:
  `97C042A7F202992D6448DF2D586A9298E9ACA94B650757A68278E428A54F4AB4F6125594AF6EABF96DAEAE2797EB0AA89FE7D5DCD640D60DD8F06F64A184F923`
- or an extracted app folder (the result of unpacking that `.7z`, i.e. a
  folder containing `LunarForRoblox.exe` and `resources/app.asar`).

If you only have the official `lunar-for-roblox-1.0.16-setup.exe`, note it
can't fetch the package anymore, but it will use a local package file: put
the `.7z` next to it / pass it as the package file and it installs offline.
The setup's embedded files can also be pulled out with
`tools/extract_nsis.py`.

## Build

Windows only, no downloads and no extra tooling: `tar.exe` and the .NET
Framework compiler (`csc.exe`) both ship with Windows.

```powershell
cd build

# from the downloaded package:
.\build-portable.ps1 -Package ..\lunar-for-roblox-1.0.16-x64.nsis.7z

# or from an already-extracted app folder:
.\build-portable.ps1 -AppDir ..\lunar-extracted
```

This produces `LunarForRoblox-Portable-1.0.16.exe` in the repo root
(~174 MB). It:

1. extracts the `.7z` if given one (`build-portable.ps1`),
2. zips the app folder,
3. compiles `build/PortableLauncher.cs` with that zip embedded.

The launcher extracts the app to
`%LOCALAPPDATA%\LunarForRoblox\portable-1.0.16\` on first run and starts
`LunarForRoblox.exe` from there; later runs skip extraction. Any arguments
are forwarded to the app. Test just the extraction with:

```powershell
.\LunarForRoblox-Portable-1.0.16.exe --extract-only
```

## Notes

- The output exe is **unsigned** (that's partly why AVs flag it - see the
  findings in `docs/`). Signing it with your own certificate will change
  that picture a lot.
- Building the portable exe only removes the *installer/package* download.
  The app itself still does its normal network activity at runtime
  (update checks, Overwolf packages, analytics).
- To rebuild from source instead: unpack the `.7z`, extract
  `resources/app.asar` (`npx @electron/asar extract`), the cleaned bundles
  in `src/` are exactly that output run through Prettier.
