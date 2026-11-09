# owutility.dll - deep dive

File: `lunar-extracted/owutility.dll` (3,107,984 B, x86-64, Overwolf Ltd. signed)
Version info: FileDescription "Overwolf Electron Utility", ProductName "Overwolf Utility".
SHA-256: `8A209E4A0381171F621166284BEB0A726CB44A0C6969CC6CBA750134438A891F`
4,660 functions identified in the binary. This is a stock
Overwolf runtime component shipped next to the Electron exe - **no Lunar-authored
code**; no Lunar JS references it (loaded by the `@overwolf/ow-electron` runtime,
which is not in `app.asar`). Lunar only sees its effects via
`OverwolfService`/`OverwolfController` (`overwolf:isOverwolf`, `overwolf:getMuid`,
CMP channels) in `decompiled/clean-src/main/index.js:5890`.

## Composition

- Sections: `.text` 0x2717a0 (entropy 6.95), `.rdata`, `.data`, `.pdata`, `.rsrc`, `.reloc` - normal MSVC build, not packed.
- 373 exports, ~371 of them mangled JsonCpp (`Json::Value`, `Json::Reader`,
  `Json::CharReaderBuilder`, ...) + `base::CriticalSection`. Statically linked:
  JsonCpp, SQLite (`sqlite_db::SQLiteDB/SQLiteStatement`), OpenSSL (error-string
  tables in `.rdata`), MSVC CRT.
- Imports: KERNEL32 (170), ADVAPI32 (registry + CryptoAPI hashing),
  CRYPT32 `CryptProtectData`/`CryptUnprotectData` (DPAPI), PSAPI process
  enumeration, USER32 `GetLastInputInfo`, VERSION file-version queries, OLE/COM.

## Real entry points

Only two unmangled C exports (`decompiled/native/owutility-RunSync.c:1858`):

```c
undefined8 RunSync (longlong appName, undefined8 arg2);                 // mode hardcoded 0x12
undefined8 RunSync2(longlong appName, undefined8 arg2, undefined4 mode);
```

Both: `if (!appName) return 1;` build a `std::wstring` from `appName`
(`FUN_1801534b0`, wstring assign) and call the worker
`FUN_180158420(wstring, arg2, mode)` at RVA 0x158420 (3,188 B).

## Worker FUN_180158420 = ElectronCookieSyncer::Sync

1. `SetErrorMode(0x8003)`; empty app name -> logs `"invalid electron app name"`, returns 4.
2. Reads config/flags from registry key built as
   `Software\OverwolfElectron\` + appName (line 1628); checks a `force_sync`
   flag (`u_force_sync_180274110`, line 1505) via registry-query helpers
   `FUN_180171d00`/`FUN_180171b00`. Remote config URL referenced:
   `https://content.overwolf.com/ow-electron/config/utility-setting.json`.
3. Gate `FUN_180157ba0` (2,155 B) decides whether sync is needed; if it returns
   0 or `force_sync` is set, constructs `ElectronCookieSyncer` (vftable set at
   lines 1620/1702/1833) and calls its sync method `FUN_180005bd0`
   (line 1730) with `(syncer, config, arg2, mode)`.
4. `FUN_180005bd0` (686 B, line 113): syncs from a bitmask of source browsers -
   loop `uVar6 = 1,2,4,...,0x100` calling vtable `+0x68` per source, log string
   `"try to cs with more"` (cs = cookie sync). Return codes 0,8,9,10,11,13,14
   are normalized to 0 (success) by the caller (lines 1741-1750).
5. On failure it builds a JsonCpp object `{bid, sbid, error, avid (if error==3)}`
   and emits a `cs_error` telemetry event via `FUN_1801572b0` (lines 1781-1808).
   Telemetry endpoints in the binary:
   `https://tracking.overwolf.com/tracking/InsertStats?Stats=true`,
   `https://analyticsnew.overwolf.com/analytics/Counter`.

## cookie_manager subsystem (RTTI)

`cookie_manager::CookieJar{Chromium, ElectronClient, OverwolfClient,
OverwolfClientOld, OverwolfStore, Opera, SQLite, RunTime}`,
`CookieSyncerBase`, `ElectronCookieSyncer`, `TimeConverter`, plus embedded
Chromium `cookies` SQLite schema (CREATE/SELECT/INSERT/UPDATE with
`encrypted_value` BLOB). Purpose: migrate/sync browser cookies (DPAPI-decrypted
via Crypt32) from the legacy Overwolf client/store and other Chromium browsers
into the Electron app's cookie store. Registry roots referenced:
`Software\OverwolfElectron\`, `Software\Overwolf\Overwolf\`,
`SOFTWARE\Microsoft\Windows\Shell\Associations\UrlAssociations\`.

## Files here

- `owutility-RunSync.c` - decompilation of RunSync/RunSync2 + 2 levels
  of callees (42 functions, complete).
- `owutility-custom.c` - **complete** decompilation of all 2,228 non-library
  functions at RVA <= 0x1a0000 (2,228 ok, 0 failed). This covers the entire
  Overwolf custom code (cookie_manager, ElectronCookieSyncer, config/registry,
  telemetry). The remaining ~2,400 functions at RVA > 0x1a0000 are
  statically-linked OpenSSL/SQLite/CRT library code (dependencies, skipped).
- `integrity.c` - `integrity.dll` decompilation (complete; single `entry`
  returning 1 - the DLL is just a signed Overwolf public-key JWT in `.rsrc`).
