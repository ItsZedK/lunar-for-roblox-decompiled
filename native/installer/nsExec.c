// Program: 04-nsExec.dll

// ===== Exec @ 10001000 (size 45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Exec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x1000  1  Exec */
  DAT_10003cc4 = param_1;
  DAT_10003cc8 = param_2;
  DAT_10003ccc = param_4;
  _DAT_10003cd0 = param_3;
  FUN_1000111a(0);
  return;
}



// ===== ExecToLog @ 1000102d (size 45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ExecToLog(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x102d  2  ExecToLog */
  DAT_10003cc4 = param_1;
  DAT_10003cc8 = param_2;
  DAT_10003ccc = param_4;
  _DAT_10003cd0 = param_3;
  FUN_1000111a(1);
  return;
}



// ===== ExecToStack @ 1000105a (size 45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ExecToStack(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x105a  3  ExecToStack */
  DAT_10003cc4 = param_1;
  DAT_10003cc8 = param_2;
  DAT_10003ccc = param_4;
  _DAT_10003cd0 = param_3;
  FUN_1000111a(2);
  return;
}



// ===== entry @ 10001087 (size 15) =====

undefined4 entry(undefined4 param_1)

{
  DAT_10003cbc = param_1;
  return 1;
}



// ===== FUN_10001096 @ 10001096 (size 61) =====

undefined4 FUN_10001096(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  int iVar3;
  char *lpProcName;
  undefined4 *puVar4;
  undefined4 local_8;
  
  lpProcName = s_IsWow64Process_10003014;
  hModule = GetModuleHandleW(u_kernel32_10003000);
  pFVar1 = GetProcAddress(hModule,lpProcName);
  if (pFVar1 != (FARPROC)0x0) {
    puVar4 = &local_8;
    pvVar2 = GetCurrentProcess();
    iVar3 = (*pFVar1)(pvVar2,puVar4);
    if (iVar3 != 0) {
      return local_8;
    }
  }
  return 0;
}



// ===== FUN_100010d3 @ 100010d3 (size 71) =====

bool __cdecl FUN_100010d3(LPCWSTR param_1,int param_2,LPWSTR param_3,int param_4,int param_5)

{
  int iVar1;
  
  *param_3 = L'\0';
  iVar1 = lstrlenA((LPCSTR)param_1);
  if (iVar1 != param_2) {
    lstrcpynW(param_3,param_1,param_4);
  }
  else {
    MultiByteToWideChar((uint)(param_5 != 0),0,(LPCSTR)param_1,-1,param_3,param_4);
  }
  return iVar1 == param_2;
}



// ===== FUN_1000111a @ 1000111a (size 1742) =====

void __cdecl FUN_1000111a(uint param_1)

{
  DWORD DVar1;
  LPWSTR pWVar2;
  WCHAR *pWVar3;
  BOOL BVar4;
  HANDLE hFileMappingObject;
  LPVOID lpBaseAddress;
  HWND hWndParent;
  SIZE_T SVar5;
  int iVar6;
  int iMaxLength;
  LPCWSTR pWVar7;
  undefined4 *puVar8;
  LPWSTR *ppWVar9;
  LPWSTR pWVar10;
  HWND hWndChildAfter;
  wchar_t *lpszClass;
  LPCWSTR pWVar11;
  WCHAR local_3bc [260];
  WCHAR local_1b4;
  undefined4 local_1b2 [63];
  _STARTUPINFOW local_b4;
  undefined1 local_70;
  undefined4 local_6f;
  undefined4 uStack_6b;
  undefined4 uStack_67;
  undefined4 uStack_63;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  _PROCESS_INFORMATION local_5c;
  _SECURITY_ATTRIBUTES local_4c;
  HANDLE local_40;
  DWORD local_3c;
  int local_38;
  HANDLE local_34;
  DWORD local_30;
  HANDLE local_2c;
  LPWSTR local_28;
  DWORD local_24;
  int local_20;
  HANDLE local_1c;
  LPWSTR local_18;
  DWORD local_14;
  LPCWSTR local_10;
  HGLOBAL local_c;
  LPWSTR local_8;
  
  local_1b4 = DAT_10003cb8;
  puVar8 = local_1b2;
  for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  iVar6 = FUN_10001096();
  if (iVar6 == 0) {
    DVar1 = GetModuleFileNameW(DAT_10003cbc,local_3bc,0x104);
    pWVar2 = GlobalAlloc(0x40,(DAT_10003cc8 + DVar1 + 2) * 2 + 4);
    pWVar3 = local_3bc + DVar1;
    local_18 = pWVar2;
    *pWVar2 = L'\"';
    local_10 = pWVar2 + 1;
    do {
      if (*pWVar3 == L'\\') break;
      pWVar3 = CharPrevW(local_3bc,pWVar3);
    } while (local_3bc < pWVar3);
    pWVar11 = local_10;
    if (pWVar3 == local_3bc) {
      FUN_10001a7e(u_error_100030ac);
      goto LAB_100011ca;
    }
    *pWVar3 = L'\0';
    GetTempFileNameW(local_3bc,(LPCWSTR)&DAT_100030a4,0,pWVar11);
    pWVar11 = local_10;
    *pWVar3 = L'\\';
    BVar4 = CopyFileW(local_3bc,pWVar11,0);
    if (BVar4 != 0) {
      local_28 = CreateFileW(local_10,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      hFileMappingObject =
           CreateFileMappingW(local_28,(LPSECURITY_ATTRIBUTES)0x0,4,0,0,(LPCWSTR)0x0);
      lpBaseAddress = MapViewOfFile(hFileMappingObject,2,0,0,0);
      if (lpBaseAddress != (LPVOID)0x0) {
        iVar6 = *(int *)((int)lpBaseAddress + 0x3c);
        *(undefined2 *)((int)lpBaseAddress + iVar6 + 0x16) = 0x10e;
        *(undefined2 *)((int)lpBaseAddress + iVar6 + 0x5c) = 3;
        *(int *)((int)lpBaseAddress + iVar6 + 0x28) = (int)FUN_1000195a - (int)DAT_10003cbc;
        UnmapViewOfFile(lpBaseAddress);
      }
      CloseHandle(hFileMappingObject);
      CloseHandle(local_28);
    }
    lstrcatW(pWVar2,(LPCWSTR)&DAT_100030a0);
    iVar6 = lstrlenW(pWVar2);
    pWVar2[iVar6] = L' ';
    pWVar10 = pWVar2 + iVar6 + 1;
  }
  else {
    local_10 = (LPCWSTR)0x0;
    pWVar2 = GlobalAlloc(0x40,DAT_10003cc8 * 2 + 2);
    pWVar10 = pWVar2;
    local_18 = pWVar2;
  }
  local_38 = 0;
  local_20 = 0;
  DAT_10003cc0 = (HWND)0x0;
  local_28 = pWVar10;
  if (DAT_10003cc4 != (HWND)0x0) {
    pWVar11 = (LPCWSTR)0x0;
    lpszClass = u_SysListView32_10003084;
    hWndChildAfter = (HWND)0x0;
    hWndParent = FindWindowExW(DAT_10003cc4,(HWND)0x0,u__32770_10003074,(LPCWSTR)0x0);
    DAT_10003cc0 = FindWindowExW(hWndParent,hWndChildAfter,lpszClass,pWVar11);
    pWVar2 = local_18;
  }
  do {
    FUN_10001a3e(pWVar10);
    pWVar11 = FUN_10001854(pWVar10,u__TIMEOUT__10003060);
    if (pWVar11 == pWVar10) {
      local_38 = FUN_100018ba((ushort *)(pWVar10 + 9));
    }
    else {
      iVar6 = lstrcmpiW(pWVar10,u__OEM_10003054);
      if (iVar6 != 0) break;
      local_20 = 1;
    }
    *pWVar10 = L'\0';
  } while( true );
  if (*pWVar10 == L'\0') {
    FUN_10001a7e(u_error_100030ac);
    if (pWVar2 <= pWVar10 + -2) {
      pWVar10[-2] = L'\0';
    }
    if (local_10 != (LPCWSTR)0x0) {
      DeleteFileW(local_10);
    }
LAB_100011ca:
    GlobalFree(pWVar2);
    return;
  }
  local_b4.cb = 0x44;
  local_4c.nLength = 0xc;
  ppWVar9 = &local_b4.lpReserved;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppWVar9 = (LPWSTR)0x0;
    ppWVar9 = ppWVar9 + 1;
  }
  local_70 = 0;
  local_4c.lpSecurityDescriptor = (undefined1 *)0x0;
  local_4c.bInheritHandle = 0;
  local_6f = 0;
  uStack_6b = 0;
  uStack_67 = 0;
  uStack_63 = 0;
  uStack_5f = 0;
  uStack_5d = 0;
  local_5c.hProcess = (HANDLE)0x0;
  local_5c.hThread = (HANDLE)0x0;
  local_5c.dwProcessId = 0;
  local_5c.dwThreadId = 0;
  DVar1 = GetVersion();
  local_2c = (HANDLE)0x0;
  local_1c = (HANDLE)0x0;
  local_34 = (HANDLE)0x0;
  local_40 = (HANDLE)0x0;
  local_14 = 1;
  local_30 = 0;
  local_24 = 0x102;
  local_c = (HGLOBAL)0x0;
  local_8 = (LPWSTR)0x0;
  if (param_1 == 0) {
LAB_10001404:
    local_4c.bInheritHandle = 1;
    local_4c.lpSecurityDescriptor = (undefined1 *)0x0;
    if (DVar1 < 0x80000000) {
      InitializeSecurityDescriptor(&local_70,1);
      SetSecurityDescriptorDacl(&local_70,1,(PACL)0x0,0);
      local_4c.lpSecurityDescriptor = &local_70;
    }
    BVar4 = CreatePipe(&local_1c,&local_2c,&local_4c,0);
    if ((BVar4 != 0) && (BVar4 = CreatePipe(&local_40,&local_34,&local_4c,0), BVar4 != 0)) {
      GetStartupInfoW(&local_b4);
      local_b4.dwFlags = 0x101;
      local_b4.hStdInput = local_34;
      local_b4.hStdOutput = local_2c;
      local_b4.hStdError = local_2c;
      local_b4.wShowWindow = 0;
      BVar4 = CreateProcessW((LPCWSTR)0x0,local_18,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,1,0x10,(LPVOID)0x0,(LPCWSTR)0x0,&local_b4,
                             &local_5c);
      if (BVar4 != 0) {
        local_3c = GetTickCount();
        while ((local_24 != 0 || (local_14 != 0))) {
          PeekNamedPipe(local_1c,(LPVOID)0x0,0,(LPDWORD)0x0,&local_14,(LPDWORD)0x0);
          iVar6 = local_38;
          if (local_14 == 0) {
            if ((local_38 == 0) || (DVar1 = GetTickCount(), DVar1 <= local_3c + iVar6)) {
              Sleep(100);
            }
            else {
              TerminateProcess(local_5c.hProcess,0xffffffff);
              lstrcpyW(&local_1b4,u_timeout_1000302c);
            }
          }
          else {
            local_3c = GetTickCount();
            ReadFile(local_1c,&DAT_100030b8,0x3ff,&local_14,(LPOVERLAPPED)0x0);
            (&DAT_100030b8)[local_14] = 0;
            FUN_100010d3((LPCWSTR)&DAT_100030b8,local_14,(LPWSTR)&DAT_100034b8,0x400,local_20);
            if (param_1 != 0) {
              DVar1 = lstrlenW(local_8);
              pWVar2 = local_8;
              if ((param_1 & 2) == 0) {
                local_24 = DVar1;
                iVar6 = lstrlenW((LPCWSTR)&DAT_100034b8);
                iVar6 = local_24 + 1 + iVar6;
                SVar5 = GlobalSize(local_c);
                if (SVar5 < (uint)(iVar6 * 2)) {
                  GlobalUnlock(local_c);
                  local_c = GlobalReAlloc(local_c,iVar6 * 2 + 0x800,0x42);
                  if (local_c == (HGLOBAL)0x0) goto LAB_10001703;
                  local_8 = GlobalLock(local_c);
                }
                lstrcatW(local_8,(LPCWSTR)&DAT_100034b8);
                pWVar2 = local_8;
                while (pWVar11 = FUN_10001854(pWVar2,(LPCWSTR)&DAT_10003050),
                      pWVar11 != (LPCWSTR)0x0) {
                  SVar5 = GlobalSize(local_c);
                  if ((int)((SVar5 >> 1) - 0x12) < (int)pWVar11 - (int)local_8 >> 1) {
                    *pWVar11 = L' ';
                    pWVar2 = pWVar11 + 1;
                  }
                  else {
                    iVar6 = lstrlenW(pWVar11);
                    pWVar7 = pWVar11 + iVar6 + 0x11;
                    pWVar3 = pWVar11 + iVar6;
                    if (0 < iVar6) {
                      do {
                        *pWVar7 = *pWVar3;
                        pWVar7 = pWVar7 + -1;
                        pWVar3 = pWVar3 + -1;
                        iVar6 = iVar6 + -1;
                      } while (iVar6 != 0);
                    }
                    lstrcpyW(pWVar11,u__1000303c);
                    pWVar2 = pWVar11 + 0x11;
                    *pWVar2 = L' ';
                  }
                }
                pWVar2 = local_8;
                pWVar10 = local_8;
                if (*local_8 != L'\0') {
                  do {
                    if (*pWVar2 == L'\r') {
                      *pWVar2 = L'\0';
                      pWVar2 = pWVar2 + 1;
                    }
                    else if (*pWVar2 == L'\n') {
                      *pWVar2 = L'\0';
                      for (; (*pWVar10 == L'\0' && (pWVar10 != pWVar2)); pWVar10 = pWVar10 + 1) {
                      }
                      FUN_100017e8(pWVar10);
                      pWVar2 = pWVar2 + 1;
                      pWVar10 = pWVar2;
                    }
                    else {
                      pWVar2 = CharNextW(pWVar2);
                    }
                  } while (*pWVar2 != L'\0');
                  pWVar2 = local_8;
                  if (pWVar10 != local_8) {
                    for (; *pWVar10 != L'\0'; pWVar10 = pWVar10 + 1) {
                      *pWVar2 = *pWVar10;
                      pWVar2 = pWVar2 + 1;
                    }
                    *pWVar2 = L'\0';
                  }
                }
              }
              else {
                iMaxLength = DAT_10003cc8 - DVar1;
                pWVar11 = (LPCWSTR)&DAT_100034b8;
                iVar6 = lstrlenW(local_8);
                lstrcpynW(pWVar2 + iVar6,pWVar11,iMaxLength);
              }
            }
          }
          local_24 = WaitForSingleObject(local_5c.hProcess,0);
          GetExitCodeProcess(local_5c.hProcess,&local_30);
          PeekNamedPipe(local_1c,(LPVOID)0x0,0,(LPDWORD)0x0,&local_14,(LPDWORD)0x0);
        }
        goto LAB_10001715;
      }
    }
  }
  else {
    if ((param_1 & 2) == 0) {
      SVar5 = 0x2000;
    }
    else {
      SVar5 = DAT_10003cc8 * 2;
    }
    local_c = GlobalAlloc(0x42,SVar5);
    if (local_c != (HGLOBAL)0x0) {
      local_8 = GlobalLock(local_c);
      goto LAB_10001404;
    }
  }
LAB_10001703:
  lstrcpyW(&local_1b4,u_error_100030ac);
LAB_10001715:
  if ((param_1 & 2) != 0) {
    FUN_10001a7e(local_8);
  }
  if (((param_1 & 1) != 0) && (*local_8 != L'\0')) {
    FUN_100017e8(local_8);
  }
  if (local_30 == 0xc000001d) {
    lstrcpyW(&local_1b4,u_error_100030ac);
  }
  if (local_1b4 == L'\0') {
    wsprintfW(&local_1b4,(LPCWSTR)&DAT_10003024,local_30);
  }
  FUN_10001a7e(&local_1b4);
  CloseHandle(local_5c.hThread);
  CloseHandle(local_5c.hProcess);
  CloseHandle(local_2c);
  CloseHandle(local_1c);
  CloseHandle(local_34);
  CloseHandle(local_40);
  if (local_18 <= local_28 + -2) {
    local_28[-2] = L'\0';
  }
  if (local_10 != (LPCWSTR)0x0) {
    DeleteFileW(local_10);
  }
  GlobalFree(local_18);
  if (param_1 == 0) {
    return;
  }
  GlobalUnlock(local_c);
  GlobalFree(local_c);
  return;
}



// ===== FUN_100017e8 @ 100017e8 (size 108) =====

void __cdecl FUN_100017e8(undefined4 param_1)

{
  int iVar1;
  WPARAM *pWVar2;
  undefined4 local_2c;
  WPARAM local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  local_2c = 0;
  pWVar2 = local_28;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pWVar2 = 0;
    pWVar2 = pWVar2 + 1;
  }
  if (DAT_10003cc0 != (HWND)0x0) {
    local_28[0] = SendMessageW(DAT_10003cc0,0x1004,0,0);
    local_2c = 1;
    local_18 = param_1;
    local_14 = 0;
    SendMessageW(DAT_10003cc0,0x104d,0,(LPARAM)&local_2c);
    SendMessageW(DAT_10003cc0,0x1013,local_28[0],0);
  }
  return;
}



// ===== FUN_10001854 @ 10001854 (size 102) =====

LPCWSTR __cdecl FUN_10001854(LPCWSTR param_1,LPCWSTR param_2)

{
  WCHAR WVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = lstrlenW(param_2);
  iVar3 = lstrlenW(param_1);
  while( true ) {
    if (iVar3 < iVar2) {
      return (LPCWSTR)0x0;
    }
    WVar1 = param_1[iVar2];
    param_1[iVar2] = L'\0';
    iVar3 = lstrcmpiW(param_1,param_2);
    param_1[iVar2] = WVar1;
    if (iVar3 == 0) break;
    param_1 = CharNextW(param_1);
    iVar3 = lstrlenW(param_1);
  }
  return param_1;
}



// ===== FUN_100018ba @ 100018ba (size 160) =====

int __cdecl FUN_100018ba(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  
  uVar1 = *param_1;
  iVar3 = 0;
  if (uVar1 == 0x30) {
    puVar6 = param_1 + 1;
    uVar2 = *puVar6;
    if ((uVar2 == 0x78) || (uVar2 == 0x58)) {
      puVar6 = param_1 + 2;
      do {
        uVar4 = (uint)*puVar6;
        puVar6 = puVar6 + 1;
        if ((uVar4 < 0x30) || (0x39 < uVar4)) {
          if ((uVar4 < 0x61) || (0x66 < uVar4)) {
            if (uVar4 < 0x41) {
              return iVar3;
            }
            if (0x46 < uVar4) {
              return iVar3;
            }
            iVar5 = uVar4 - 0x37;
          }
          else {
            iVar5 = uVar4 - 0x57;
          }
        }
        else {
          iVar5 = uVar4 - 0x30;
        }
        iVar3 = iVar3 * 0x10 + iVar5;
      } while( true );
    }
    if ((uVar2 < 0x38) && (0x2f < uVar2)) {
      while( true ) {
        uVar4 = (uint)*puVar6;
        puVar6 = puVar6 + 1;
        if (uVar4 < 0x30) {
          return iVar3;
        }
        if (0x37 < uVar4) break;
        iVar3 = (uVar4 - 0x30) + iVar3 * 8;
      }
      return iVar3;
    }
  }
  while( true ) {
    iVar5 = uVar1 - 0x30;
    param_1 = param_1 + 1;
    if ((iVar5 < 0) || (9 < iVar5)) break;
    iVar3 = iVar5 + iVar3 * 10;
    uVar1 = *param_1;
  }
  return iVar3;
}



// ===== FUN_1000195a @ 1000195a (size 228) =====

void FUN_1000195a(void)

{
  LPWSTR pWVar1;
  LPCWSTR lpsz;
  int iVar2;
  WCHAR WVar3;
  LPWSTR *ppWVar4;
  WCHAR local_85c;
  WCHAR local_85a [1023];
  _STARTUPINFOW local_5c;
  _PROCESS_INFORMATION local_18;
  UINT local_8;
  
  ppWVar4 = &local_5c.lpReserved;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppWVar4 = (LPWSTR)0x0;
    ppWVar4 = ppWVar4 + 1;
  }
  local_18.hProcess = (HANDLE)0x0;
  local_18.hThread = (HANDLE)0x0;
  local_18.dwProcessId = 0;
  local_18.dwThreadId = 0;
  local_5c.cb = 0x44;
  WVar3 = L' ';
  iVar2 = 0x400;
  pWVar1 = GetCommandLineW();
  lstrcpynW(&local_85c,pWVar1,iVar2);
  lpsz = &local_85c;
  if (local_85c == L'\"') {
    lpsz = local_85a;
    WVar3 = L'\"';
  }
  for (; (*lpsz != L'\0' && (*lpsz != WVar3)); lpsz = CharNextW(lpsz)) {
  }
  for (pWVar1 = CharNextW(lpsz); (*pWVar1 != L'\0' && (*pWVar1 == L' ')); pWVar1 = pWVar1 + 1) {
  }
  local_8 = CreateProcessW((LPCWSTR)0x0,pWVar1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                           ,1,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_5c,&local_18);
  if (local_8 == 0) {
                    /* WARNING: Subroutine does not return */
    ExitProcess(0xc000001d);
  }
  WaitForSingleObject(local_18.hProcess,0xffffffff);
  GetExitCodeProcess(local_18.hProcess,&local_8);
  CloseHandle(local_18.hProcess);
  CloseHandle(local_18.hThread);
                    /* WARNING: Subroutine does not return */
  ExitProcess(local_8);
}



// ===== FUN_10001a3e @ 10001a3e (size 64) =====

undefined4 FUN_10001a3e(LPWSTR param_1)

{
  undefined4 *hMem;
  undefined4 uVar1;
  
  if ((DAT_10003ccc == (undefined4 *)0x0) ||
     (hMem = (undefined4 *)*DAT_10003ccc, hMem == (undefined4 *)0x0)) {
    uVar1 = 1;
  }
  else {
    if (param_1 != (LPWSTR)0x0) {
      lstrcpyW(param_1,(LPCWSTR)(hMem + 1));
    }
    *DAT_10003ccc = *hMem;
    GlobalFree(hMem);
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_10001a7e @ 10001a7e (size 70) =====

void FUN_10001a7e(LPCWSTR param_1)

{
  undefined4 *puVar1;
  
  if (DAT_10003ccc != (undefined4 *)0x0) {
    puVar1 = GlobalAlloc(0x40,DAT_10003cc8 * 2 + 8);
    lstrcpynW((LPWSTR)(puVar1 + 1),param_1,DAT_10003cc8);
    *puVar1 = *DAT_10003ccc;
    *DAT_10003ccc = puVar1;
  }
  return;
}



// decompiled 13 ok, 0 failed, 13 total
