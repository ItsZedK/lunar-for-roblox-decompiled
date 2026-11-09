// Program: 05-inetc.dll

// ===== FUN_10001000 @ 10001000 (size 21) =====

undefined1 * __cdecl FUN_10001000(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}



// ===== FUN_10001015 @ 10001015 (size 133) =====

short * __cdecl FUN_10001015(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  short *local_8;
  
  if (*param_2 != 0) {
    local_8 = param_1;
    psVar4 = param_1;
    if (param_2[1] != 0) {
      do {
        psVar4 = psVar4 + 1;
      } while (*(short *)(((int)(param_2 + 1) - (int)param_1) + (int)psVar4) != 0);
    }
    if (*psVar4 != 0) {
      iVar3 = (int)param_1 - (int)param_2;
      do {
        sVar1 = *local_8;
        psVar2 = param_2;
        while (sVar1 != 0) {
          if (*psVar2 == 0) {
            return local_8;
          }
          if (sVar1 != *psVar2) break;
          psVar2 = psVar2 + 1;
          sVar1 = *(short *)(iVar3 + (int)psVar2);
        }
        if (*psVar2 == 0) {
          return local_8;
        }
        local_8 = local_8 + 1;
        psVar4 = psVar4 + 1;
        iVar3 = iVar3 + 2;
      } while (*psVar4 != 0);
    }
    param_1 = (short *)0x0;
  }
  return param_1;
}



// ===== FUN_1000109a @ 1000109a (size 25) =====

void __cdecl FUN_1000109a(char *param_1,int param_2)

{
  for (; (*param_1 != '\0' && (*param_1 != param_2)); param_1 = param_1 + 1) {
  }
  return;
}



// ===== FUN_100010b3 @ 100010b3 (size 27) =====

void __cdecl FUN_100010b3(short *param_1,short param_2)

{
  for (; (*param_1 != 0 && (*param_1 != param_2)); param_1 = param_1 + 1) {
  }
  return;
}



// ===== FUN_100010ce @ 100010ce (size 29) =====

char * __cdecl FUN_100010ce(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}



// ===== FUN_100010eb @ 100010eb (size 29) =====

short * __cdecl FUN_100010eb(short *param_1,short param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)0x0;
  do {
    sVar1 = *param_1;
    if (sVar1 == param_2) {
      psVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  return psVar2;
}



// ===== FUN_10001108 @ 10001108 (size 43) =====

int FUN_10001108(void)

{
  byte in_AL;
  
  if (in_AL < 0x1a) {
    return in_AL + 0x41;
  }
  if (in_AL < 0x34) {
    return in_AL + 0x47;
  }
  if (in_AL < 0x3e) {
    return in_AL - 4;
  }
  if (in_AL == 0x3e) {
    return 0x2b;
  }
  return 0x2f;
}



// ===== FUN_10001133 @ 10001133 (size 244) =====

undefined4 __cdecl FUN_10001133(int param_1,LPCWSTR param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined2 *puVar3;
  undefined2 *extraout_ECX_02;
  int local_10;
  int local_c;
  
  if (param_2 == (LPCWSTR)0x0) {
    param_3 = 0;
  }
  else {
    if (param_1 == 0) {
      param_1 = lstrlenW(param_2);
    }
    if (0 < param_1) {
      local_c = 2;
      local_10 = (param_1 - 1U) / 3 + 1;
      do {
        iVar2 = FUN_10001108();
        *extraout_ECX = (short)iVar2;
        iVar2 = FUN_10001108();
        *(short *)(extraout_ECX_00 + 2) = (short)iVar2;
        if (local_c + -1 < param_1) {
          iVar2 = FUN_10001108();
          uVar1 = (undefined2)iVar2;
          iVar2 = extraout_ECX_01;
        }
        else {
          uVar1 = 0x3d;
          iVar2 = extraout_ECX_00;
        }
        *(undefined2 *)(iVar2 + 4) = uVar1;
        puVar3 = (undefined2 *)(iVar2 + 6);
        if (local_c < param_1) {
          iVar2 = FUN_10001108();
          uVar1 = (undefined2)iVar2;
          puVar3 = extraout_ECX_02;
        }
        else {
          uVar1 = 0x3d;
        }
        local_c = local_c + 3;
        *puVar3 = uVar1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  return param_3;
}



// ===== FUN_10001227 @ 10001227 (size 373) =====

void __thiscall FUN_10001227(void *this,HANDLE param_1,undefined4 param_2)

{
  BOOL BVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  void *local_8;
  
  local_8 = (void *)0x0;
  DAT_10007e98 = 2;
  local_c = this;
  do {
    pvVar3 = (void *)0x0;
    if (DAT_1000845e == '\0') {
      iVar2 = InternetReadFile(param_2,&DAT_10008848,0x2000,&local_8);
      if (iVar2 == 0) {
        DAT_10007e98 = 0xb;
        return;
      }
      if (local_8 == (void *)0x0) {
        if (DAT_1000857c == 0xffffffff) {
          DAT_10007e98 = 0;
          return;
        }
        if (DAT_10008574 < DAT_1000857c) {
          DAT_10007e98 = 0xb;
          return;
        }
        DAT_10007e98 = 0;
        return;
      }
      if (DAT_10008570 == 0) {
        BVar1 = WriteFile(param_1,&DAT_10008848,(DWORD)local_8,(LPDWORD)&local_c,(LPOVERLAPPED)0x0);
        if ((BVar1 == 0) || (local_8 != local_c)) {
          DAT_10007e98 = 0xd;
          return;
        }
      }
      else if (DAT_10008578 < DAT_1000c84c) {
        do {
          if (local_8 <= pvVar3) break;
          if (DAT_10007e93 == '\0') {
            *(ushort *)(DAT_10008570 + DAT_10008578 * 2) =
                 (ushort)*(byte *)((int)pvVar3 + 0x10008848);
          }
          else {
            *(undefined1 *)(DAT_10008578 + DAT_10008570) = *(undefined1 *)((int)pvVar3 + 0x10008848)
            ;
          }
          pvVar3 = (void *)((int)pvVar3 + 1);
          DAT_10008578 = DAT_10008578 + 1;
        } while (DAT_10008578 < DAT_1000c84c);
      }
      DAT_10008574 = DAT_10008574 + (int)local_8;
    }
    else {
      local_8 = (void *)0x2000;
      BVar1 = ReadFile(param_1,&DAT_10008848,0x2000,(LPDWORD)&local_c,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        DAT_10007e98 = 0xe;
        return;
      }
      if (local_c == (void *)0x0) {
        DAT_10007e98 = 0;
        return;
      }
      for (; local_c != (void *)0x0; local_c = (void *)((int)local_c - (int)local_8)) {
        iVar2 = InternetWriteFile(param_2,&DAT_10008848,local_c,&local_8);
        if ((iVar2 == 0) || (local_8 == (void *)0x0)) {
          DAT_10007e98 = 0xb;
          break;
        }
        DAT_10008574 = DAT_10008574 + (int)local_8;
      }
    }
    if (DAT_10007e98 != 2) {
      return;
    }
  } while( true );
}



// ===== FUN_1000139c @ 1000139c (size 87) =====

void __cdecl FUN_1000139c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_2c;
  undefined4 local_28 [6];
  undefined4 local_10;
  
  if (DAT_1000845e != '\0') {
    puVar2 = local_28;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_10 = DAT_1000857c;
    local_2c = 0x28;
    HttpSendRequestExW(param_1,&local_2c,0,8,0);
    return;
  }
  HttpSendRequestW(param_1,0,0,DAT_10008464,DAT_1000856c);
  return;
}



// ===== FUN_100013f3 @ 100013f3 (size 990) =====

/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_100013f3(undefined4 param_1)

{
  int iVar1;
  HLOCAL pvVar2;
  short *psVar3;
  HRESULT HVar4;
  uint uVar5;
  LPCWSTR pWVar6;
  LPWSTR lpString1;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  WCHAR *pWVar9;
  WCHAR local_214;
  undefined1 local_212 [4];
  undefined2 local_20e;
  DWORD local_14 [2];
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  local_214 = L'\0';
  FUN_10001000(local_212,0,0x1fe);
  local_14[1] = 0x200;
  iVar1 = HttpQueryInfoW(param_1,0x13,&local_214,local_14 + 1,0);
  local_8 = (LPCWSTR)0x0;
  if (iVar1 == 0) {
LAB_10001770:
    uVar5 = (uint)local_8 & 0xffffff00;
  }
  else {
    local_20e = 0;
    pvVar2 = (HLOCAL)lstrcmpW(&local_214,L"0");
    if ((pvVar2 == (HLOCAL)0x0) || (local_214 == L'\0')) {
      DAT_10007e98 = 0x12;
    }
    else {
      iVar1 = lstrcmpW(&local_214,L"401");
      if (iVar1 == 0) {
        DAT_10007e98 = 0x1b;
        pvVar2 = (HLOCAL)0x0;
      }
      else {
        iVar1 = lstrcmpW(&local_214,L"403");
        if (iVar1 == 0) {
          DAT_10007e98 = 0x17;
          pvVar2 = (HLOCAL)0x0;
        }
        else {
          iVar1 = lstrcmpW(&local_214,L"404");
          if (iVar1 == 0) {
            DAT_10007e98 = 0x14;
            pvVar2 = (HLOCAL)0x0;
          }
          else {
            iVar1 = lstrcmpW(&local_214,L"407");
            if (iVar1 == 0) {
              DAT_10007e98 = 0x16;
              pvVar2 = (HLOCAL)0x0;
            }
            else {
              iVar1 = lstrcmpW(&local_214,L"405");
              if (iVar1 == 0) {
                DAT_10007e98 = 0x18;
                pvVar2 = (HLOCAL)0x0;
              }
              else {
                iVar1 = lstrcmpW(&local_214,L"304");
                if (iVar1 == 0) {
                  DAT_10007e98 = 0x1e;
                  pvVar2 = (HLOCAL)0x0;
                }
                else {
                  iVar1 = lstrcmpW(&local_214,L"301");
                  if (iVar1 != 0) {
                    iVar1 = lstrcmpW(&local_214,L"302");
                    if (iVar1 != 0) {
                      iVar1 = lstrcmpW(&local_214,L"307");
                      if (iVar1 != 0) {
                        pvVar2 = (HLOCAL)lstrcmpW(&local_214,L"308");
                        if (pvVar2 != (HLOCAL)0x0) {
                          if (local_214 == L'3') {
                            DAT_10007e98 = 0x1f;
                            pwVar7 = u_Redirection_Error_1000783c;
                          }
                          else if (local_214 == L'4') {
                            DAT_10007e98 = 0x19;
                            pwVar7 = u_Request_Error_100076a4;
                          }
                          else {
                            if (local_214 != L'5') goto LAB_10001700;
                            DAT_10007e98 = 0x1a;
                            pwVar7 = u_Server_Error_100076e8;
                          }
                          pWVar9 = &local_214;
                          pwVar8 = L" (%s)";
                          iVar1 = lstrlenW(pwVar7);
                          pvVar2 = (HLOCAL)wsprintfW((LPWSTR)(&DAT_10007000 +
                                                             (iVar1 + DAT_10007e98 * 0x22) * 2),
                                                     pwVar8,pWVar9);
                          goto LAB_10001700;
                        }
                      }
                    }
                  }
                  local_8 = LocalAlloc(0x40,0x104a);
                  local_14[1] = 0x1048;
                  iVar1 = HttpQueryInfoW(param_1,0x21,local_8,local_14 + 1,0);
                  if (iVar1 != 0) {
                    psVar3 = FUN_10001015(local_8,(short *)&DAT_100051a4);
                    if (psVar3 == (short *)0x0) {
                      local_c = LocalAlloc(0x40,0x104a);
                      lstrcpyW(local_c,local_8);
                      local_14[0] = 0x1048;
                      HVar4 = UrlCombineW(DAT_10007eb4,local_c,local_8,local_14,0);
                      if (HVar4 != 0) {
                        pWVar9 = &local_214;
                        pwVar7 = L" (%s)";
                        DAT_10007e98 = 0x20;
                        iVar1 = lstrlenW(u_Relative_Redirection_Error_10007880);
                        wsprintfW((LPWSTR)(&DAT_10007000 + (iVar1 + DAT_10007e98 * 0x22) * 2),pwVar7
                                  ,pWVar9);
                        LocalFree(local_c);
                        pvVar2 = LocalFree(local_8);
                        goto LAB_10001700;
                      }
                      LocalFree(local_c);
                    }
                    if (DAT_10007e8b != '\0') {
                      pWVar6 = FUN_10001015(local_8,L"https:");
                      if (pWVar6 == local_8) {
                        lpString1 = LocalAlloc(0x40,0x104a);
                        lstrcpyW(lpString1,L"http:");
                        pWVar6 = local_8;
                        lstrcatW(lpString1,local_8 + 6);
                        lstrcpyW(pWVar6,lpString1);
                        LocalFree(lpString1);
                      }
                    }
                    LocalFree(DAT_10007eb4);
                    DAT_10007eb4 = local_8;
                    DAT_10007e98 = 6;
                    goto LAB_10001770;
                  }
                  pWVar9 = &local_214;
                  pwVar7 = L" (%s)";
                  DAT_10007e98 = 0x1f;
                  iVar1 = lstrlenW(u_Redirection_Error_1000783c);
                  wsprintfW((LPWSTR)(&DAT_10007000 + (iVar1 + DAT_10007e98 * 0x22) * 2),pwVar7,
                            pWVar9);
                  pvVar2 = LocalFree(local_8);
                }
              }
            }
          }
        }
      }
    }
LAB_10001700:
    uVar5 = CONCAT31((int3)((uint)pvVar2 >> 8),1);
  }
  return uVar5;
}



// ===== FUN_100017d1 @ 100017d1 (size 1064) =====

int __cdecl FUN_100017d1(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  LPCWSTR pWVar6;
  char *lpProcName;
  WCHAR local_21c;
  undefined1 local_21a [510];
  LPCWSTR local_1c;
  DWORD local_18;
  undefined1 local_14 [4];
  int local_10;
  char local_9;
  undefined4 local_8;
  
  local_21c = L'\0';
  FUN_10001000(local_21a,0,0x1fe);
  local_8 = 0x200;
  InternetGetLastResponseInfoW(local_14,&local_21c,&local_8);
  if (DAT_10008574 == 0) {
    if (DAT_1000845e == '\0') {
      if (DAT_10007e94 != (code *)0x0) {
        (*DAT_10007e94)(param_1,0,1,L"TYPE I",0,&local_10);
      }
      wsprintfW(&local_21c,L"SIZE %s",param_2 + 2);
      if (((DAT_10007e94 != (code *)0x0) &&
          (iVar1 = (*DAT_10007e94)(param_1,0,1,&local_21c,0,&local_10), iVar1 != 9999)) &&
         (puVar2 = FUN_10001000((undefined1 *)&local_21c,0,0x200), puVar2 != (undefined1 *)0x0)) {
        local_8 = 0x200;
        iVar1 = InternetGetLastResponseInfoW(local_14,&local_21c,&local_8);
        if ((iVar1 != 0) && (psVar3 = FUN_10001015(&local_21c,L"213 "), psVar3 != (short *)0x0)) {
          iVar1 = FUN_100010b3(&local_21c,0x20);
          DAT_1000857c = FUN_10004454((ushort *)(iVar1 + 2));
        }
      }
      if (DAT_1000857c == 0) {
        DAT_1000857c = -1;
      }
    }
  }
  else {
    wsprintfW(&local_21c,L"REST %d",DAT_10008574);
    if (((DAT_10007e94 == (code *)0x0) ||
        (iVar1 = (*DAT_10007e94)(param_1,0,2,&local_21c,0,&local_10), iVar1 == 0)) ||
       (puVar2 = FUN_10001000((undefined1 *)&local_21c,0,0x200), puVar2 == (undefined1 *)0x0)) {
      DAT_10007e98 = 0xf;
      return 0;
    }
    local_8 = 0x200;
    iVar1 = InternetGetLastResponseInfoW(local_14,&local_21c,&local_8);
    if (iVar1 == 0) {
      DAT_10007e98 = 0xf;
      return 0;
    }
    psVar3 = FUN_10001015(&local_21c,(short *)&DAT_10005230);
    if ((psVar3 == (short *)0x0) &&
       (psVar3 = FUN_10001015(&local_21c,(short *)&DAT_10005228), psVar3 == (short *)0x0)) {
      DAT_10007e98 = 0xf;
      return 0;
    }
  }
  pWVar6 = (LPCWSTR)(param_2 + 2);
  local_1c = pWVar6;
  local_10 = FtpOpenFileW(param_1,pWVar6,((DAT_1000845e == '\0') - 1 & 0xc0000000) + 0x80000000,
                          0x80000002,0);
  if (local_10 == 0) {
    local_18 = GetLastError();
    local_21c = L'\0';
    local_8 = 0x200;
    InternetGetLastResponseInfoW(local_14,&local_21c,&local_8);
    if ((DAT_1000845e == '\0') ||
       ((psVar3 = FUN_10001015(&local_21c,(short *)&DAT_10005220), psVar3 == (short *)0x0 &&
        (psVar3 = FUN_10001015(&local_21c,(short *)&DAT_10005218), psVar3 == (short *)0x0)))) {
      if (local_18 == 0x2ee3) {
        psVar3 = FUN_10001015(&local_21c,(short *)&DAT_10005220);
        pWVar6 = &local_21c;
        if (psVar3 != (short *)0x0) {
          DAT_10007e98 = 0x14;
LAB_10001b46:
          pWVar6 = FUN_10001015(&local_21c,(short *)&DAT_10005220);
        }
        lstrcpynW((LPWSTR)(&DAT_10007000 + DAT_10007e98 * 0x44),pWVar6,0x22);
      }
      else if (local_18 == 0x2ee2) {
        if (DAT_10007ead == '\0') {
          DAT_10007e92 = 1;
        }
        DAT_10007e98 = 10;
      }
    }
    else {
      if (*pWVar6 == L'/') {
        pWVar6 = (LPCWSTR)(param_2 + 4);
      }
      local_9 = '\x01';
      do {
        puVar4 = (undefined2 *)FUN_100010b3(pWVar6,0x2f);
        if (puVar4 == (undefined2 *)0x0) break;
        *puVar4 = 0;
        FtpCreateDirectoryW(param_1,local_1c);
        local_8 = 0x200;
        InternetGetLastResponseInfoW(local_14,&local_21c,&local_8);
        iVar1 = lstrlenW(pWVar6);
        pWVar6[iVar1] = L'/';
        iVar1 = FUN_100010b3(pWVar6,0x2f);
        local_9 = local_9 + '\x01';
        pWVar6 = (LPCWSTR)(iVar1 + 2);
      } while (local_9 != '\0');
      if (DAT_10007e98 != 0x1c) {
        local_10 = FtpOpenFileW(param_1,local_1c,0x40000000,0x80000002,0);
        if (local_10 != 0) goto LAB_10001ba6;
        DAT_10007e98 = 0x1d;
        local_8 = 0x200;
        iVar1 = InternetGetLastResponseInfoW(local_14,&local_21c,&local_8);
        if (iVar1 != 0) goto LAB_10001b46;
      }
    }
  }
  else {
    local_8 = 0x200;
    InternetGetLastResponseInfoW(local_14,&local_21c,&local_8);
  }
  if (local_10 == 0) {
    return 0;
  }
LAB_10001ba6:
  if (DAT_1000857c == -1) {
    lpProcName = "FtpGetFileSize";
    hModule = LoadLibraryA("WININET");
    pFVar5 = GetProcAddress(hModule,lpProcName);
    if (((pFVar5 != (FARPROC)0x0) && (iVar1 = (*pFVar5)(local_10,&local_18), iVar1 != -1)) &&
       (local_18 == 0)) {
      DAT_1000857c = iVar1;
    }
  }
  return local_10;
}



// ===== FUN_10001bf9 @ 10001bf9 (size 1304) =====

int __cdecl FUN_10001bf9(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  WCHAR local_210;
  undefined1 local_20e [510];
  int local_10;
  uint local_c;
  uint local_8;
  
  local_210 = L'\0';
  FUN_10001000(local_20e,0,0x1fe);
  iVar1 = local_10;
  if (DAT_1000845e != '\0') {
    iVar1 = HttpOpenRequestW(param_1,L"HEAD",param_3,0,0,0,
                             -(uint)(DAT_10007e90 != '\0') & 0x4080000 | 0x80400000,0);
    if (iVar1 == 0) {
      DAT_10007e98 = 0x11;
    }
    else {
      if (DAT_10008708 != 0) {
        wsprintfW(&local_210,L"Proxy-authorization: basic %s",&DAT_10008708);
        HttpAddRequestHeadersW(iVar1,&local_210,0xffffffff,0xa0000000);
      }
      if (DAT_10008608 != 0) {
        wsprintfW(&local_210,L"Authorization: basic %s",&DAT_10008608);
        HttpAddRequestHeadersW(iVar1,&local_210,0xffffffff,0xa0000000);
      }
      while (iVar2 = HttpSendRequestW(iVar1,0,0,0,0), iVar2 != 0) {
        FUN_100013f3(iVar1);
        do {
          iVar2 = InternetReadFile(iVar1,&local_210,0x200,&local_8);
          if (iVar2 == 0) break;
        } while (local_8 != 0);
        if ((DAT_10007ead != '\0') || ((DAT_10007e98 != 0x16 && (DAT_10007e98 != 0x1b)))) {
LAB_10001d60:
          if (((DAT_10007e98 == 0x14) || (DAT_10007e98 == 0x17)) || (DAT_10007e98 == 0x18)) {
            DAT_10007e98 = 4;
          }
          if (DAT_10007e98 == 4) {
            local_210 = L'\0';
            local_8 = 0x200;
            iVar2 = HttpQueryInfoW(iVar1,0x1c,&local_210,&local_8,0);
            if ((iVar2 != 0) && (local_210 != L'\0')) {
              lstrcpynW(&DAT_10008608,&local_210,local_8);
            }
            local_210 = L'\0';
            local_8 = 0x200;
            iVar2 = HttpQueryInfoW(iVar1,0x3d,&local_210,&local_8,0);
            if ((iVar2 != 0) && (local_210 != L'\0')) {
              lstrcpynW(&DAT_10008708,&local_210,local_8);
            }
          }
          goto LAB_10001e1c;
        }
        local_8 = InternetErrorDlg(DAT_10007eb0,iVar1,0x2eee,7,0);
        if (local_8 != 0x2f00) {
          DAT_10007e98 = 3;
          goto LAB_10001d60;
        }
        DAT_10007e98 = 4;
      }
      DAT_10007e98 = 0x12;
LAB_10001e1c:
      InternetCloseHandle(iVar1);
    }
  }
  if (DAT_10007e98 != 4) {
    return iVar1;
  }
  if (DAT_10007e8b == '\0') {
    if (param_2 != 4) {
      local_c = 0;
      goto LAB_10001e66;
    }
    local_c = 0x804000;
  }
  else {
    local_c = 0x200000;
LAB_10001e66:
    if (DAT_10007e8b != '\0') goto LAB_10001e7a;
  }
  if (DAT_10007e8a != '\0') {
    local_c = local_c | 0xb000;
  }
LAB_10001e7a:
  if (DAT_1000845e == '\0') {
    if (DAT_1000845f == '\0') {
      pwVar4 = (wchar_t *)(-(uint)(DAT_10008464 != 0) & 0x10005338);
    }
    else {
      pwVar4 = L"HEAD";
    }
  }
  else {
    pwVar4 = L"PUT";
  }
  iVar1 = HttpOpenRequestW(param_1,pwVar4,param_3,0,0,0,
                           (-(uint)(DAT_10008574 != 0) & 0x80000000) + 0x80000000 |
                           -(uint)(DAT_10007e90 != '\0') & 0x4080000 | local_c | 0x400000,0);
  if (iVar1 == 0) {
    DAT_10007e98 = 0x11;
    return 0;
  }
  if (DAT_10008708 != 0) {
    wsprintfW(&local_210,L"Proxy-authorization: basic %s",&DAT_10008708);
    HttpAddRequestHeadersW(iVar1,&local_210,0xffffffff,0xa0000000);
  }
  if (DAT_10008464 != 0) {
    HttpAddRequestHeadersW
              (iVar1,L"Content-Type: application/x-www-form-urlencoded",0xffffffff,0xa0000000);
  }
  if (DAT_10008468 != '\0') {
    HttpAddRequestHeadersA(iVar1,&DAT_10008468,0xffffffff,0xa0000000);
  }
  if (DAT_100080c8 != 0) {
    HttpAddRequestHeadersW(iVar1,DAT_100080c8,0xffffffff,0xa0000000);
  }
  if (DAT_10008608 != 0) {
    wsprintfW(&local_210,L"Authorization: basic %s",&DAT_10008608);
    HttpAddRequestHeadersW(iVar1,&local_210,0xffffffff,0xa0000000);
  }
  if (DAT_1000845e != '\0') {
    wsprintfW(&local_210,L"Content-Type: octet-stream\nContent-Length: %d",DAT_1000857c);
    HttpAddRequestHeadersW(iVar1,&local_210,0xffffffff,0xa0000000);
  }
  do {
    if (param_2 == 4) {
      iVar2 = FUN_1000139c(iVar1);
      if (iVar2 == 0) {
        local_10 = 4;
        InternetQueryOptionW(iVar1,0x1f,&local_8,&local_10);
        local_8 = local_8 | -(uint)(DAT_10007e8a != '\0') & 0xb000;
        InternetSetOptionW(iVar1,0x1f,&local_8,4);
        goto LAB_1000200f;
      }
    }
    else {
LAB_1000200f:
      iVar2 = FUN_1000139c(iVar1);
      if (iVar2 == 0) {
        uVar3 = FUN_100013f3(iVar1);
        if ((char)uVar3 != '\0') {
          return iVar1;
        }
        DAT_10007e98 = 0x12;
        return iVar1;
      }
    }
    if (DAT_1000845e != '\0') {
      return iVar1;
    }
    FUN_100013f3(iVar1);
    if ((DAT_10007ead != '\0') || ((DAT_10007e98 != 0x16 && (DAT_10007e98 != 0x1b))))
    goto LAB_10002096;
    local_8 = InternetErrorDlg(DAT_10007eb0,iVar1,0x2eee,7,0);
    DAT_10007e98 = 4;
  } while (local_8 == 0x2f00);
  DAT_10007e98 = 3;
LAB_10002096:
  if (DAT_10007e98 != 4) {
    return iVar1;
  }
  if (DAT_10008574 == 0) {
    local_8 = 0x200;
    iVar2 = HttpQueryInfoW(iVar1,5,&local_210,&local_8,0);
    if (iVar2 != 0) {
      DAT_1000857c = FUN_10004454((ushort *)&local_210);
      return iVar1;
    }
    DAT_1000857c = -1;
    return iVar1;
  }
  iVar2 = InternetSetFilePointer(iVar1,DAT_10008574,0,0,0);
  if (iVar2 != -1) {
    return iVar1;
  }
  DAT_10007e98 = 0xf;
  return iVar1;
}



// ===== FUN_10002111 @ 10002111 (size 1967) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10002111(HWND param_1)

{
  int iVar1;
  HMODULE hModule;
  LPCWSTR pWVar2;
  int iVar3;
  HWND pHVar4;
  DWORD DVar5;
  short *psVar6;
  HWND pHVar7;
  BOOL BVar8;
  uint uVar9;
  void *this;
  wchar_t *pwVar10;
  LPCWSTR pWVar11;
  char *lpProcName;
  undefined2 *puVar12;
  UINT uType;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined2 *local_60;
  uint local_5c;
  undefined4 local_58;
  LPCWSTR local_54;
  uint local_50;
  LPCWSTR local_4c;
  uint local_48;
  LPWSTR local_44;
  undefined4 local_40;
  LPCWSTR local_3c;
  uint local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  int local_2c;
  LPCWSTR local_28;
  undefined2 *local_24;
  DWORD local_20;
  LPCWSTR local_1c;
  int local_18;
  HANDLE local_14;
  LPCWSTR local_10;
  LPWSTR local_c;
  uint local_8;
  
  local_14 = (HANDLE)0x0;
  local_24 = LocalAlloc(0x40,DAT_1000c84c * 2);
  local_c = LocalAlloc(0x40,0x1048);
  local_28 = LocalAlloc(0x40,DAT_1000c84c * 2);
  local_10 = LocalAlloc(0x40,DAT_1000c84c * 2);
  local_4c = LocalAlloc(0x40,DAT_1000c84c * 2);
  local_60 = local_24;
  local_58 = (uint)local_58._2_2_ << 0x10;
  local_44 = local_c;
  local_70 = 0x3c;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = DAT_1000c84c;
  local_54 = local_10;
  local_50 = DAT_1000c84c;
  local_48 = DAT_1000c84c;
  local_40 = 0x824;
  local_3c = local_28;
  local_38 = DAT_1000c84c;
  local_1c = local_4c;
  local_18 = InternetOpenW(&DAT_10008258,DAT_10007ea0,DAT_100080c4,0,0);
  if (local_18 == 0) {
    DAT_10007e98 = 9;
  }
  else {
    local_20 = 4;
    local_8 = 0;
    iVar1 = InternetQueryOptionW(local_18,0x32,&local_8,&local_20);
    if ((iVar1 != 0) && ((local_8 & 0x10) != 0)) {
      local_30 = 1;
      local_2c = 0;
      InternetSetOptionW(local_18,0x32,&local_30,8);
    }
    if (DAT_10008580 != 0) {
      local_20 = InternetSetOptionW(local_18,2,&DAT_10008580,4);
    }
    if (DAT_10008584 != 0) {
      InternetSetOptionW(local_18,6,&DAT_10008584,4);
    }
    lpProcName = "FtpCommandW";
    hModule = LoadLibraryA("WININET");
    DAT_10007e94 = GetProcAddress(hModule,lpProcName);
    do {
      while( true ) {
        iVar1 = FUN_10004378(DAT_10007eb4);
        if ((((iVar1 != 0) || (iVar1 = lstrcmpiW(DAT_10007eb4,L"/end"), iVar1 == 0)) ||
            (iVar1 = FUN_10004378((LPWSTR)&DAT_10007eb8), iVar1 != 0)) ||
           (iVar1 = lstrcmpiW(DAT_10007eb4,L"/end"), iVar1 == 0)) goto LAB_1000283f;
        DAT_10007e98 = 1;
        DAT_1000857c = 0;
        DAT_10008574 = 0;
        PostMessageW(param_1,0x113,1,0);
        if ((DAT_10008570 != 0) ||
           (local_14 = CreateFileW((LPCWSTR)&DAT_10007eb8,
                                   ((DAT_1000845e == '\0') - 1 & 0x40000000) + 0x40000000,1,
                                   (LPSECURITY_ATTRIBUTES)0x0,(DAT_1000845e != '\0') + 2,0,
                                   (HANDLE)0x0), local_14 != (HANDLE)0xffffffff)) break;
        DAT_10007e98 = 0xc;
      }
      if (DAT_1000845e != '\0') {
        DAT_1000857c = GetFileSize(local_14,(LPDWORD)0x0);
      }
LAB_10002336:
      *local_28 = L'\0';
      *local_c = L'\0';
      *local_1c = L'\0';
      *local_10 = L'\0';
      *local_24 = 0;
      local_38 = DAT_1000c84c;
      local_48 = DAT_1000c84c;
      local_50 = DAT_1000c84c;
      local_5c = DAT_1000c84c;
      local_40 = 0x824;
      iVar1 = InternetCrackUrlW(DAT_10007eb4,0,0,&local_70);
      if (iVar1 != 0) {
        if ((*local_10 != L'\0') && (*local_1c != L'\0')) {
          wsprintfW(&DAT_1000a848,L"%s:%s",local_10,local_1c);
          puVar12 = &DAT_10008608;
          pWVar11 = &DAT_1000a848;
          iVar1 = lstrlenW(&DAT_1000a848);
          FUN_10001133(iVar1,pWVar11,puVar12);
          DAT_1000a848 = 0;
        }
        lstrcatW(local_c,local_28);
        _DAT_10007e8c = GetTickCount();
LAB_10002426:
        if (((DAT_1000845e != '\0') && (local_64 != 1)) || (DAT_10008464 != 0)) {
          DAT_10008574 = 0;
          SetFilePointer(local_14,0,(PLONG)0x0,0);
        }
        DAT_10007e98 = 1;
        local_20 = DAT_10008574;
        iVar1 = lstrlenW(local_1c);
        pWVar11 = local_1c;
        if (iVar1 < 1) {
          pWVar11 = (LPCWSTR)0x0;
        }
        iVar1 = lstrlenW(local_10);
        pWVar2 = local_10;
        if (iVar1 < 1) {
          pWVar2 = (LPCWSTR)0x0;
        }
        local_2c = InternetConnectW(local_18,local_24,local_58,pWVar2,pWVar11,
                                    (local_64 != 1) * '\x02' + '\x01',
                                    (-(uint)(local_64 != 1) & 0xf8000000) + 0x8000000,0);
        if (local_2c == 0) {
          DAT_10007e98 = 0x10;
          if (local_64 == 1) {
            local_8 = 0x1000;
            iVar1 = InternetGetLastResponseInfoW(local_34,&DAT_1000a848,&local_8);
            if ((iVar1 != 0) &&
               (psVar6 = FUN_10001015(&DAT_1000a848,(short *)&DAT_100053e0), psVar6 != (short *)0x0)
               ) {
              pWVar11 = FUN_10001015(&DAT_1000a848,(short *)&DAT_100053e0);
              lstrcpynW((LPWSTR)(&DAT_10007000 + DAT_10007e98 * 0x44),pWVar11,0x22);
              goto LAB_10002733;
            }
          }
          local_8 = GetLastError();
          if (((local_8 == 0x2ee3) || (local_8 == 0x2ee2)) && (DAT_10007ead == '\0')) {
            DAT_10007e92 = '\x01';
          }
        }
        else {
          DAT_10007e98 = 4;
          if (local_64 == 1) {
            iVar1 = FUN_100017d1(local_2c,(int)local_c);
          }
          else {
            iVar1 = FUN_10001bf9(local_2c,local_64,local_c);
          }
          if ((DAT_10007e98 != 4) && (iVar1 != 0)) {
            InternetCloseHandle(iVar1);
            iVar1 = 0;
          }
          if (DAT_10007e98 == 6) goto LAB_10002336;
          if (iVar1 != 0) {
            if (DAT_1000845f == '\0') {
              pHVar7 = GetDlgItem(param_1,0x3ed);
              SendDlgItemMessageW(param_1,0x3ed,0x402,0,0);
              pwVar10 = L"Not Available";
              if (DAT_1000857c != 0xffffffff) {
                pwVar10 = L"";
              }
              pHVar4 = GetDlgItem(param_1,0x3ee);
              SetWindowTextW(pHVar4,pwVar10);
              pwVar10 = L"Unknown";
              if (DAT_1000857c != 0xffffffff) {
                pwVar10 = L"";
              }
              pHVar4 = GetDlgItem(param_1,0x3ec);
              SetWindowTextW(pHVar4,pwVar10);
              if (DAT_1000857c == 0xffffffff) {
                uVar9 = GetWindowLongW(pHVar7,-0x10);
                uVar9 = uVar9 | 8;
              }
              else {
                uVar9 = GetWindowLongW(pHVar7,-0x10);
                uVar9 = uVar9 & 0xfffffff7;
              }
              SetWindowLongW(pHVar7,-0x10,uVar9);
              SendDlgItemMessageW(param_1,0x3ed,0x40a,(uint)(DAT_1000857c == 0xffffffff),0x32);
              FUN_10001227(this,local_14,iVar1);
              if ((DAT_1000845e != '\0') && (local_64 != 1)) {
                local_8 = HttpEndRequestW(iVar1,0,0,0);
                FUN_100013f3(iVar1);
              }
            }
            else {
              local_8 = 0x800;
              iVar3 = HttpQueryInfoW(iVar1,0x16,&DAT_1000a848,&local_8,0);
              if (iVar3 != 0) {
                if (DAT_10008570 == 0) {
                  WriteFile(local_14,&DAT_1000a848,local_8,&local_20,(LPOVERLAPPED)0x0);
                }
                else {
                  for (uVar9 = 0; (DAT_10008578 < DAT_1000c84c && (uVar9 < local_8));
                      uVar9 = uVar9 + 1) {
                    *(undefined2 *)(DAT_10008570 + DAT_10008578 * 2) = (&DAT_1000a848)[uVar9];
                    DAT_10008578 = DAT_10008578 + 1;
                  }
                }
              }
              DAT_10007e98 = 0;
            }
            InternetCloseHandle(iVar1);
          }
          InternetCloseHandle(local_2c);
        }
LAB_10002733:
        if ((((DAT_1000845e == '\0') || (local_64 == 1)) && (local_20 < DAT_10008574)) &&
           ((DAT_10007e98 == 0xb && (DVar5 = SleepEx(2000,0), DVar5 == 0)))) goto code_r0x10002766;
        goto LAB_10002780;
      }
      DAT_10007e98 = 0x13;
LAB_1000238e:
      CloseHandle(local_14);
    } while (((DAT_1000845e != '\0') || (DAT_10007e98 == 0)) || (DAT_10008570 != 0));
    local_8 = DeleteFileW((LPCWSTR)&DAT_10007eb8);
LAB_1000283f:
    InternetCloseHandle(local_18);
    iVar1 = lstrcmpiW(DAT_10007eb4,L"/end");
    if (iVar1 == 0) {
      FUN_1000440b(DAT_10007eb4);
    }
  }
  LocalFree(local_24);
  LocalFree(local_c);
  LocalFree(local_10);
  LocalFree(local_1c);
  LocalFree(local_28);
  BVar8 = IsWindow(param_1);
  if (BVar8 != 0) {
    PostMessageW(param_1,0x111,0xffee0001,0);
  }
  return DAT_10007e98;
code_r0x10002766:
  DAT_10007e98 = 5;
  DVar5 = SleepEx(3000,0);
  if (DVar5 != 0) {
LAB_10002780:
    if (((DAT_10007e92 == '\0') || (DAT_10007e98 == 0)) ||
       ((DAT_10007e98 == 3 ||
        ((DAT_10007e98 == 0x14 || (BVar8 = ShowWindow(param_1,0), BVar8 == -1))))))
    goto LAB_1000238e;
    psVar6 = &DAT_10008158;
    if (DAT_10008158 == 0) {
      psVar6 = L"Inetc plug-in";
    }
    uType = 0x35;
    pwVar10 = u_Your_internet_connection_seems_t_100078c8;
    pHVar7 = GetParent(param_1);
    iVar1 = MessageBoxW(pHVar7,pwVar10,psVar6,uType);
    if (iVar1 != 4) goto LAB_1000238e;
    DAT_10007e98 = 5;
    BVar8 = ShowWindow(param_1,(DAT_10007ead != '\0') - 1 & 5);
    if ((BVar8 != 0) || (DVar5 = SleepEx(1000,0), DVar5 != 0)) goto LAB_1000238e;
  }
  goto LAB_10002426;
}



// ===== FUN_100028c0 @ 100028c0 (size 94) =====

void __cdecl FUN_100028c0(uint param_1,LPWSTR param_2)

{
  wchar_t *pwVar1;
  LPCWSTR lpString2;
  
  if (param_1 == 0xffffffff) {
    lpString2 = L"???";
  }
  else {
    if (param_1 != 0) {
      if (param_1 < 0x2800) {
        pwVar1 = L"%u bytes";
      }
      else if (param_1 < 0xa00000) {
        param_1 = param_1 >> 10;
        pwVar1 = L"%u kB";
      }
      else {
        param_1 = param_1 >> 0x14;
        pwVar1 = L"%u MB";
      }
      wsprintfW(param_2,pwVar1,param_1);
      return;
    }
    lpString2 = L"0";
  }
  lstrcpyW(param_2,lpString2);
  return;
}



// ===== FUN_1000291e @ 1000291e (size 87) =====

uint __cdecl FUN_1000291e(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = (uint)*param_1;
    uVar2 = uVar1 - 0x30;
    param_1 = param_1 + 1;
    if (9 < uVar2) {
      if (uVar1 - 0x61 < 6) {
        uVar2 = uVar1 - 0x57;
      }
      else {
        if (5 < uVar1 - 0x41) {
          return uVar3 >> 0x10 & 0xff | (uVar3 & 0xff) << 0x10 | uVar3 & 0xff00;
        }
        uVar2 = uVar1 - 0x37;
      }
    }
    uVar3 = uVar3 * 0x10 + uVar2;
  } while( true );
}



// ===== FUN_10002975 @ 10002975 (size 601) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002975(void)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  WPARAM wParam;
  HWND pHVar6;
  short *psVar7;
  BOOL BVar8;
  uint nNumber;
  wchar_t *pwVar9;
  UINT Msg;
  LPARAM lParam;
  int local_14;
  uint local_10;
  wchar_t *local_8;
  
  DVar1 = GetTickCount();
  nNumber = 1;
  if ((DVar1 - _DAT_10007e8c) / 1000 != 0) {
    DVar1 = GetTickCount();
    nNumber = (DVar1 - _DAT_10007e8c) / 1000;
  }
  uVar2 = DAT_10008574 / nNumber;
  if ((DAT_10008574 == 0) || (DAT_1000857c == 0xffffffff)) {
    iVar3 = 0;
  }
  else {
    iVar3 = MulDiv(nNumber,DAT_1000857c,DAT_10008574);
    iVar3 = iVar3 - nNumber;
  }
  local_8 = u_second_10007bc8;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (0x3b < iVar3) {
    iVar3 = iVar3 / 0x3c;
    local_8 = u_minute_10007c48;
    if (0x3b < iVar3) {
      iVar3 = iVar3 / 0x3c;
      local_8 = u_hour_10007c88;
    }
  }
  if (DAT_1000857c == 0xffffffff) {
    local_10 = 0;
  }
  else {
    local_10 = DAT_1000857c >> 10;
  }
  if ((DAT_1000857c == 0) || (DAT_1000857c == 0xffffffff)) {
    local_14 = 0;
  }
  else {
    local_14 = MulDiv(100,DAT_10008574,DAT_1000857c);
  }
  iVar4 = uVar2 * 10 + ((int)(uVar2 * 10) >> 0x1f & 0x3ffU);
  wsprintfW((LPWSTR)&DAT_1000c048,u__dkB___d____of__dkB____d__01dkB__10007d08,DAT_10008574 >> 10,
            local_14,local_10,(int)(uVar2 + ((int)uVar2 >> 0x1f & 0x3ffU)) >> 10,
            (int)(CONCAT44(iVar4 >> 0x1f,iVar4 >> 10) % 10));
  if (iVar3 != 0) {
    puVar5 = &DAT_100053f8;
    if (iVar3 != 1) {
      puVar5 = &DAT_10007cc8;
    }
    pwVar9 = u___d__s_s_remaining__10007e08;
    iVar4 = lstrlenW((LPCWSTR)&DAT_1000c048);
    wsprintfW((LPWSTR)(&DAT_1000c048 + iVar4 * 2),pwVar9,iVar3,local_8,puVar5);
  }
  if ((DAT_10008574 == 0) || (pwVar9 = (wchar_t *)&DAT_1000c048, DAT_10007e98 == 1)) {
    pwVar9 = u_Connecting_____10007b48;
  }
  SetDlgItemTextW(DAT_10007eb0,0x3e9,pwVar9);
  if ((DAT_1000857c != 0) && (DAT_1000857c != 0xffffffff)) {
    lParam = 0;
    wParam = MulDiv(DAT_10008574,400,DAT_1000857c);
    Msg = 0x402;
    pHVar6 = GetDlgItem(DAT_10007eb0,0x3ed);
    SendMessageW(pHVar6,Msg,wParam,lParam);
  }
  if (DAT_10008158 == 0) {
    psVar7 = FUN_100010eb((short *)&DAT_10007eb8,0x5c);
    if (psVar7 == (short *)0x0) {
      psVar7 = (short *)&DAT_10007eb8;
    }
    else {
      psVar7 = FUN_100010eb((short *)&DAT_10007eb8,0x5c);
      psVar7 = psVar7 + 1;
    }
    pwVar9 = u_Downloading__s_10007ac8;
  }
  else {
    psVar7 = &DAT_10008158;
    pwVar9 = L"%s";
  }
  wsprintfW((LPWSTR)&DAT_1000c048,pwVar9,psVar7);
  pHVar6 = GetDlgItem(DAT_10007ea8,0x3ee);
  if ((DAT_10007ead == '\0') && (pHVar6 != (HWND)0x0)) {
    BVar8 = IsWindow(pHVar6);
    if (BVar8 != 0) {
      GetWindowTextW(pHVar6,(LPWSTR)&DAT_1000b848,0x800);
      iVar3 = lstrcmpW((LPCWSTR)&DAT_1000b848,(LPCWSTR)&DAT_1000c048);
      if (iVar3 != 0) {
        SetWindowTextW(pHVar6,(LPCWSTR)&DAT_1000c048);
      }
    }
  }
  return;
}



// ===== FUN_10002bce @ 10002bce (size 677) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10002bce(HWND param_1)

{
  DWORD DVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  LPCWSTR lpString;
  WPARAM wParam;
  uint uVar5;
  HWND hWnd;
  wchar_t *pwVar6;
  LPARAM lParam;
  WCHAR *lpString_00;
  WCHAR local_10c [128];
  uint local_c;
  uint local_8;
  
  DVar1 = GetTickCount();
  local_8 = (DVar1 - _DAT_10007e8c) / 1000;
  DVar1 = GetTickCount();
  local_c = (DVar1 - _DAT_10007ea4) / 1000;
  psVar2 = &DAT_10008158;
  if (DAT_10008158 == 0) {
    psVar2 = L"Inetc plug-in";
  }
  wsprintfW(local_10c,L"%s - %s",psVar2,&DAT_10007000 + DAT_10007e98 * 0x44);
  if (((DAT_1000857c != 0) && (DAT_1000857c != 0xffffffff)) && (DAT_10007e98 == 2)) {
    iVar3 = MulDiv(100,DAT_10008574,DAT_1000857c);
    pwVar6 = L" %d%%";
    iVar4 = lstrlenW(local_10c);
    wsprintfW(local_10c + iVar4,pwVar6,iVar3);
  }
  if (DAT_100080cc == 0) {
    SetWindowTextW(param_1,local_10c);
  }
  if ((DAT_100080c0 == (LPCWSTR)0x0) || (lpString = DAT_100080c0, *DAT_100080c0 == L'\0')) {
    lpString = DAT_10007eb4;
  }
  SetDlgItemTextW(param_1,0x3e9,lpString);
  SetDlgItemTextW(param_1,0x3ea,(LPCWSTR)&DAT_10007eb8);
  if (DAT_10008574 == 0) {
    local_10c[0] = L'\0';
  }
  else {
    FUN_100028c0(DAT_10008574,local_10c);
    if ((1 < local_8) && (DAT_10007e98 == 2)) {
      lstrcatW(local_10c,L"   ( ");
      iVar3 = lstrlenW(local_10c);
      FUN_100028c0(DAT_10008574 / local_8,local_10c + iVar3);
      lstrcatW(local_10c,L"/sec )");
    }
  }
  SetDlgItemTextW(param_1,0x3eb,local_10c);
  wsprintfW(local_10c,L"%d:%02d:%02d",local_c / 0xe10,(int)(((ulonglong)local_c / 0x3c) % 0x3c),
            local_c % 0x3c);
  SetDlgItemTextW(param_1,0x3ef,local_10c);
  if ((DAT_1000857c != 0) && (DAT_1000857c != 0xffffffff)) {
    FUN_100028c0(DAT_1000857c,local_10c);
    SetDlgItemTextW(param_1,0x3ee,local_10c);
    lParam = 0;
    wParam = MulDiv(DAT_10008574,400,DAT_1000857c);
    SendDlgItemMessageW(param_1,0x3ed,0x402,wParam,lParam);
    if (DAT_10008574 < 0x1389) {
      local_10c[0] = L'\0';
    }
    else {
      uVar5 = MulDiv(DAT_1000857c - DAT_10008574,local_8,DAT_10008574);
      wsprintfW(local_10c,L"%d:%02d:%02d",uVar5 / 0xe10,(int)(((ulonglong)uVar5 / 0x3c) % 0x3c),
                uVar5 % 0x3c);
    }
    lpString_00 = local_10c;
    hWnd = GetDlgItem(param_1,0x3ec);
    SetWindowTextW(hWnd,lpString_00);
  }
  return;
}



// ===== FUN_10002e74 @ 10002e74 (size 523) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10002e74(HWND param_1)

{
  DWORD DVar1;
  short *lpString2;
  int iVar2;
  int iVar3;
  WPARAM wParam;
  wchar_t *pwVar4;
  LPARAM lParam;
  WCHAR *lpString;
  WCHAR local_11c [138];
  uint local_8;
  
  DVar1 = GetTickCount();
  local_8 = (DVar1 - _DAT_10007e8c) / 1000;
  GetTickCount();
  lpString2 = &DAT_10008158;
  if (DAT_10008158 == 0) {
    lpString2 = L"Inetc plug-in";
  }
  lstrcpyW(local_11c,lpString2);
  if (((DAT_1000857c != 0) && (DAT_1000857c != 0xffffffff)) && (DAT_10007e98 == 2)) {
    iVar2 = MulDiv(100,DAT_10008574,DAT_1000857c);
    pwVar4 = L" - %d%%";
    iVar3 = lstrlenW(local_11c);
    wsprintfW(local_11c + iVar3,pwVar4,iVar2);
  }
  SetWindowTextW(param_1,local_11c);
  SetDlgItemTextW(param_1,0x77,(LPCWSTR)&DAT_10007eb8);
  FUN_100028c0(DAT_10008574,local_11c);
  lstrcatW(local_11c,L" / ");
  iVar2 = lstrlenW(local_11c);
  FUN_100028c0(DAT_1000857c,local_11c + iVar2);
  SetDlgItemTextW(param_1,0x78,local_11c);
  if (DAT_10008574 == 0) {
    SetDlgItemTextW(param_1,0x79,(LPCWSTR)0x0);
    lpString = (LPCWSTR)0x0;
  }
  else {
    if ((DAT_1000857c == 0) || (DAT_1000857c == 0xffffffff)) {
      local_11c[0] = L'\0';
    }
    else {
      lParam = 0;
      wParam = MulDiv(DAT_10008574,400,DAT_1000857c);
      SendDlgItemMessageW(param_1,0x3ed,0x402,wParam,lParam);
      if (5000 < DAT_10008574) {
        local_8 = MulDiv(DAT_1000857c - DAT_10008574,local_8,DAT_10008574);
        wsprintfW(local_11c,L"%d:%02d:%02d",local_8 / 0xe10,
                  (int)(((ulonglong)local_8 / 0x3c) % 0x3c),local_8 % 0x3c);
      }
    }
    SetDlgItemTextW(param_1,0x79,local_11c);
    if ((local_8 == 0) || (DAT_10007e98 != 2)) {
      local_11c[0] = L'\0';
    }
    else {
      FUN_100028c0(DAT_10008574 / local_8,local_11c);
      lstrcatW(local_11c,L"/s");
    }
    lpString = local_11c;
  }
  SetDlgItemTextW(param_1,0x7a,lpString);
  return;
}



// ===== FUN_1000307f @ 1000307f (size 242) =====

void __cdecl FUN_1000307f(HWND param_1)

{
  HWND hWnd;
  int Y;
  tagRECT local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  int local_8;
  
  hWnd = GetParent(param_1);
  if ((hWnd != (HWND)0x0) && (DAT_10007ead == '\0')) {
    if ((DAT_10007e91 == '\0') && (DAT_10007e89 == '\0')) {
      GetClientRect(hWnd,&local_18);
    }
    else {
      GetWindowRect(hWnd,&local_18);
    }
    GetWindowRect(param_1,&local_38);
    local_8 = ((local_18.right - (local_38.right - local_38.left)) + local_18.left) / 2;
    Y = ((local_18.bottom - (local_38.bottom - local_38.top)) + local_18.top) / 2;
    if ((DAT_10007e91 == '\0') && (DAT_10007e89 == '\0')) {
      Y = Y + 0x14;
    }
    else {
      SystemParametersInfoW(0x30,0,&local_28,0);
      local_20 = local_20 - (local_38.right - local_38.left);
      if (local_20 < local_8) {
        local_8 = local_20;
      }
      if (local_8 < local_28) {
        local_8 = local_28;
      }
      local_1c = local_1c - (local_38.bottom - local_38.top);
      if (local_1c < Y) {
        Y = local_1c;
      }
      if (Y < local_24) {
        Y = local_24;
      }
    }
    SetWindowPos(param_1,(HWND)0x0,local_8,Y,0,0,1);
  }
  return;
}



// ===== FUN_10003171 @ 10003171 (size 635) =====

void __cdecl FUN_10003171(HWND param_1)

{
  HWND pHVar1;
  HWND hWnd;
  HWND pHVar2;
  uint uVar3;
  WPARAM wParam;
  HMODULE hInstance;
  HICON wParam_00;
  wchar_t *pwVar4;
  int iVar5;
  LPWSTR lpString;
  LPCWSTR lpIconName;
  int nMaxCount;
  LPARAM lParam;
  
  pHVar1 = GetDlgItem(param_1,2);
  if (DAT_10007ea8 != (HWND)0x0) {
    hWnd = GetDlgItem(param_1,0x3ed);
    pHVar2 = GetDlgItem(DAT_10007ea8,0x3ec);
    uVar3 = 0x56000000;
    if (pHVar2 != (HWND)0x0) {
      uVar3 = GetWindowLongW(pHVar2,-0x10);
      uVar3 = uVar3 | 0x56000000;
    }
    SetWindowLongW(hWnd,-0x10,uVar3);
    if ((DAT_10007e91 == '\0') && (DAT_10007e89 == '\0')) {
      wParam = SendMessageW(DAT_10007ea8,0x31,0,0);
      if (wParam != 0) {
        SendDlgItemMessageW(param_1,0x3e9,0x30,wParam,0);
        SendDlgItemMessageW(param_1,2,0x30,wParam,0);
      }
      if (DAT_100080d8 == 0) {
        nMaxCount = 0x80;
        lpString = &DAT_100080d8;
        iVar5 = 2;
        pHVar2 = GetParent(DAT_10007ea8);
        pHVar2 = GetDlgItem(pHVar2,iVar5);
        GetWindowTextW(pHVar2,lpString,nMaxCount);
      }
      SetWindowTextW(pHVar1,&DAT_100080d8);
      SetWindowPos(hWnd,(HWND)0x0,0,0,0,0,3);
    }
  }
  if (DAT_10007eac != '\0') {
    if (pHVar1 != (HWND)0x0) {
      ShowWindow(pHVar1,0);
    }
    if ((DAT_10007e91 != '\0') || (DAT_10007e89 != '\0')) {
      uVar3 = GetWindowLongW(param_1,-0x10);
      SetWindowLongW(param_1,-0x10,uVar3 ^ 0x80000);
      if (DAT_10007e89 != '\0') {
        iVar5 = 0;
        pHVar1 = GetDlgItem(param_1,0x76);
        ShowWindow(pHVar1,iVar5);
      }
    }
  }
  SendDlgItemMessageW(param_1,0x3ed,0x401,0,0x1900000);
  if (DAT_100080cc != (LPCWSTR)0x0) {
    lParam = 0;
    lpIconName = (LPCWSTR)0x67;
    hInstance = GetModuleHandleW((LPCWSTR)0x0);
    wParam_00 = LoadIconW(hInstance,lpIconName);
    SendDlgItemMessageW(param_1,0x3f1,0x170,(WPARAM)wParam_00,lParam);
    SetDlgItemTextW(param_1,0x3f0,DAT_100080cc);
    pwVar4 = &DAT_10008158;
    if (DAT_10008158 == 0) {
      pwVar4 = L"Inetc plug-in";
    }
    SetWindowTextW(param_1,pwVar4);
  }
  SetTimer(param_1,1,1000,(TIMERPROC)0x0);
  if (DAT_10007e89 == '\0') {
    if (DAT_10007e91 == '\0') {
      return;
    }
    if (DAT_10008588 == 0) {
      return;
    }
    SetDlgItemTextW(param_1,0x3f1,&DAT_10008588);
    SetDlgItemTextW(param_1,0x3f2,u_Downloading__s_10007ac8);
    SetDlgItemTextW(param_1,0x3f3,u_Connecting_____10007b48);
    SetDlgItemTextW(param_1,0x3f4,u__dkB___d____of__dkB____d__01dkB__10007d08);
    SetDlgItemTextW(param_1,0x3f5,u_second_10007bc8);
    pwVar4 = u___d__s_s_remaining__10007e08;
    iVar5 = 0x3f6;
  }
  else {
    if (DAT_10008808 != 0) {
      SetDlgItemTextW(param_1,0x72,u_Downloading__s_10007ac8);
      SetDlgItemTextW(param_1,0x73,u__dkB___d____of__dkB____d__01dkB__10007d08);
      SetDlgItemTextW(param_1,0x74,u___d__s_s_remaining__10007e08);
      SetDlgItemTextW(param_1,0x75,&DAT_10008808);
    }
    if (DAT_100080d8 == 0) {
      return;
    }
    pwVar4 = &DAT_100080d8;
    iVar5 = 0x76;
  }
  SetDlgItemTextW(param_1,iVar5,pwVar4);
  return;
}



// ===== FUN_100033ec @ 100033ec (size 668) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HGDIOBJ FUN_100033ec(HWND param_1,int param_2,HDC param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  HWND pHVar3;
  uint uVar4;
  int iVar5;
  HWND hWnd;
  HWND hWnd_00;
  wchar_t *lpCaption;
  code *pcVar6;
  code *pcVar7;
  undefined4 uVar8;
  RECT *pRVar9;
  HRGN pHVar10;
  UINT UVar11;
  
  if (param_2 == 0xf) {
    pHVar3 = GetDlgItem(param_1,0x3e9);
    hWnd = GetDlgItem(param_1,2);
    hWnd_00 = GetDlgItem(param_1,0x3ed);
    RedrawWindow(pHVar3,(RECT *)0x0,(HRGN)0x0,1);
    RedrawWindow(hWnd,(RECT *)0x0,(HRGN)0x0,1);
    RedrawWindow(hWnd_00,(RECT *)0x0,(HRGN)0x0,1);
    UpdateWindow(pHVar3);
    UpdateWindow(hWnd);
    UpdateWindow(hWnd_00);
  }
  else if (param_2 == 0x110) {
    FUN_10003171(param_1);
    FUN_1000307f(param_1);
  }
  else if (param_2 == 0x111) {
    uVar4 = (uint)param_3 & 0xffff;
    if (uVar4 != 1) {
      if ((uVar4 != 2) && (uVar4 != 0x76)) {
        return (HGDIOBJ)0x0;
      }
      if (DAT_10007eac != '\0') {
        return (HGDIOBJ)0x0;
      }
      if (DAT_100080d0 != (LPCWSTR)0x0) {
        lpCaption = &DAT_10008158;
        if (DAT_10008158 == 0) {
          lpCaption = L"Inetc plug-in";
        }
        iVar5 = MessageBoxW(param_1,DAT_100080d0,lpCaption,0x34);
        if (iVar5 == 7) {
          return (HGDIOBJ)0x0;
        }
      }
      DAT_10007e98 = 3;
    }
    if ((DAT_10007e98 == 3) || ((short)((uint)param_3 >> 0x10) == -0x12)) {
      KillTimer(param_1,1);
      DestroyWindow(param_1);
      if (DAT_10008460 != (HGDIOBJ)0x0) {
        DeleteObject(DAT_10008460);
        DAT_10008460 = (HGDIOBJ)0x0;
      }
    }
  }
  else {
    if (param_2 == 0x113) {
      if ((DAT_10007ead == '\0') && (BVar1 = IsWindow(param_1), BVar1 != 0)) {
        if ((DAT_10007e98 != 2) && (DVar2 = GetTickCount(), 1000 < DVar2 - _DAT_10007e8c)) {
          _DAT_10007e8c = _DAT_10007e8c + 1000;
        }
        if (DAT_10007e89 == '\0') {
          if (DAT_10007e91 == '\0') {
            FUN_10002975();
          }
          else {
            FUN_10002bce(param_1);
          }
          pcVar6 = GetDlgItem_exref;
          UVar11 = 1;
          pHVar10 = (HRGN)0x0;
          pRVar9 = (RECT *)0x0;
          pHVar3 = GetDlgItem(param_1,0x3e9);
          pcVar7 = RedrawWindow_exref;
          RedrawWindow(pHVar3,pRVar9,pHVar10,UVar11);
          UVar11 = 1;
          pHVar10 = (HRGN)0x0;
          pRVar9 = (RECT *)0x0;
          pHVar3 = GetDlgItem(param_1,2);
          RedrawWindow(pHVar3,pRVar9,pHVar10,UVar11);
          uVar8 = 0x3ed;
        }
        else {
          FUN_10002e74(param_1);
          pcVar6 = GetDlgItem_exref;
          UVar11 = 1;
          pHVar10 = (HRGN)0x0;
          pRVar9 = (RECT *)0x0;
          pHVar3 = GetDlgItem(param_1,0x78);
          pcVar7 = RedrawWindow_exref;
          RedrawWindow(pHVar3,pRVar9,pHVar10,UVar11);
          UVar11 = 1;
          pHVar10 = (HRGN)0x0;
          pRVar9 = (RECT *)0x0;
          pHVar3 = GetDlgItem(param_1,0x79);
          RedrawWindow(pHVar3,pRVar9,pHVar10,UVar11);
          uVar8 = 0x7a;
        }
        uVar8 = (*pcVar6)(param_1,uVar8,0,0,1);
        (*pcVar7)(uVar8);
      }
      return (HGDIOBJ)0x1;
    }
    if (param_2 == 0x136) {
      if ((DAT_1000845d != '\0') && (DAT_10008460 != (HGDIOBJ)0x0)) {
        return DAT_10008460;
      }
    }
    else if (((param_2 == 0x138) && (DAT_1000845d != '\0')) && (DAT_10008460 != (HGDIOBJ)0x0)) {
      if (DAT_1000845c != '\0') {
        SetTextColor(param_3,DAT_100080d4);
      }
      SetBkColor(param_3,DAT_10008458);
      return DAT_10008460;
    }
  }
  return (HGDIOBJ)0x0;
}



// ===== get @ 10003688 (size 3205) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl get(HWND param_1,int param_2,undefined4 param_3,HWND param_4,int *param_5)

{
  SIZE_T uBytes;
  int iVar1;
  HANDLE hFile;
  char *pcVar2;
  LPSTR pCVar3;
  uint uVar4;
  HWND pHVar5;
  BOOL BVar6;
  DWORD DVar7;
  LPCWSTR pWVar8;
  short *psVar9;
  LPWSTR lpString1;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  WCHAR local_14c;
  undefined1 local_14a [126];
  WCHAR local_cc;
  undefined1 local_ca [126];
  tagMSG local_4c;
  DWORD local_30;
  WCHAR local_2c;
  int local_2a;
  int iStack_26;
  int iStack_22;
  WCHAR local_1c;
  int local_1a;
  int iStack_16;
  int iStack_12;
  BOOL local_c;
  LONG local_8;
  
                    /* 0x3688  1  get */
  local_14c = L'\0';
  FUN_10001000(local_14a,0,0x7e);
  local_cc = L'\0';
  FUN_10001000(local_ca,0,0x7e);
  DAT_1000c848 = param_4;
  _DAT_1000c850 = param_3;
  DAT_10008708 = 0;
  DAT_10008608 = 0;
  DAT_10008258 = 0;
  DAT_100080d8 = 0;
  DAT_10008158 = 0;
  uBytes = param_2 * 2;
  DAT_1000c84c = param_2;
  DAT_10007e90 = 0;
  DAT_10007e88 = 0;
  DAT_10007eac = 0;
  DAT_10007e92 = 0;
  DAT_10007e89 = '\0';
  DAT_10007e91 = '\0';
  DAT_10007ead = '\0';
  DAT_10007e8a = 0;
  DAT_10007e94 = 0;
  DAT_10007ea0 = 0;
  DAT_10007e98 = 1;
  DAT_10007eb4 = LocalAlloc(0x40,uBytes);
  if (DAT_10008464 != (LPSTR)0x0) {
    FUN_10004378(DAT_10007eb4);
    WideCharToMultiByte(0,0,DAT_10007eb4,-1,DAT_10008464,param_2,(LPCSTR)0x0,(LPBOOL)0x0);
    DAT_1000856c = (HWND)lstrlenA(DAT_10008464);
  }
  if (*(int *)(*param_5 + 0x20) != 0) {
    DAT_10007ead = '\x01';
  }
  iVar1 = FUN_10004378(DAT_10007eb4);
LAB_10003d97:
  if ((iVar1 != 0) || (*DAT_10007eb4 != L'/')) goto LAB_10003da5;
  iVar1 = lstrcmpiW(DAT_10007eb4,L"/silent");
  if (iVar1 == 0) {
    DAT_10007ead = '\x01';
  }
  else {
    iVar1 = lstrcmpiW(DAT_10007eb4,L"/weaksecurity");
    if (iVar1 == 0) {
      DAT_10007e8a = 1;
    }
    else {
      iVar1 = lstrcmpiW(DAT_10007eb4,L"/nossl");
      if (iVar1 == 0) {
        DAT_10007e8b = 1;
      }
      else {
        iVar1 = lstrcmpiW(DAT_10007eb4,L"/caption");
        if (iVar1 == 0) {
          psVar9 = &DAT_10008158;
        }
        else {
          iVar1 = lstrcmpiW(DAT_10007eb4,L"/username");
          if (iVar1 == 0) {
            psVar9 = &local_14c;
          }
          else {
            iVar1 = lstrcmpiW(DAT_10007eb4,L"/password");
            if (iVar1 == 0) {
              psVar9 = &local_cc;
            }
            else {
              iVar1 = lstrcmpiW(DAT_10007eb4,L"/nocancel");
              if (iVar1 == 0) {
                DAT_10007eac = 1;
                goto LAB_10003d8c;
              }
              iVar1 = lstrcmpiW(DAT_10007eb4,L"/nocookies");
              if (iVar1 == 0) {
                DAT_10007e90 = 1;
                goto LAB_10003d8c;
              }
              iVar1 = lstrcmpiW(DAT_10007eb4,L"/noproxy");
              if (iVar1 == 0) {
                DAT_10007ea0 = 1;
                goto LAB_10003d8c;
              }
              iVar1 = lstrcmpiW(DAT_10007eb4,L"/popup");
              if (iVar1 == 0) {
                DAT_10007e91 = '\x01';
LAB_100038fb:
                DAT_100080c0 = LocalAlloc(0x40,uBytes);
                psVar9 = DAT_100080c0;
                goto LAB_10003ba4;
              }
              iVar1 = lstrcmpiW(DAT_10007eb4,L"/modernpopup");
              if (iVar1 == 0) {
                DAT_10007e89 = '\x01';
                goto LAB_100038fb;
              }
              iVar1 = lstrcmpiW(DAT_10007eb4,L"/resume");
              if (iVar1 == 0) {
                FUN_10004378(DAT_10007eb4);
                if (*DAT_10007eb4 != L'\0') {
                  lstrcpyW(u_Your_internet_connection_seems_t_100078c8,DAT_10007eb4);
                }
                DAT_10007e92 = 1;
                goto LAB_10003d8c;
              }
              iVar1 = lstrcmpiW(DAT_10007eb4,L"/translate");
              if (iVar1 != 0) {
                iVar1 = lstrcmpiW(DAT_10007eb4,L"/banner");
                if (iVar1 == 0) {
                  DAT_10007e91 = '\x01';
                  DAT_100080cc = LocalAlloc(0x40,uBytes);
                  psVar9 = DAT_100080cc;
                  goto LAB_10003ba4;
                }
                iVar1 = lstrcmpiW(DAT_10007eb4,L"/canceltext");
                if (iVar1 == 0) goto LAB_10003a79;
                iVar1 = lstrcmpiW(DAT_10007eb4,L"/question");
                if (iVar1 == 0) {
                  DAT_100080d0 = LocalAlloc(0x40,uBytes);
                  FUN_10004378(DAT_100080d0);
                  if (*DAT_100080d0 == L'\0') {
                    pwVar10 = L"Are you sure that you want to stop download?";
                    lpString1 = DAT_100080d0;
LAB_10003c01:
                    lstrcpyW(lpString1,pwVar10);
                  }
                }
                else {
                  iVar1 = lstrcmpiW(DAT_10007eb4,L"/useragent");
                  if (iVar1 == 0) {
                    psVar9 = &DAT_10008258;
                    goto LAB_10003ba4;
                  }
                  iVar1 = lstrcmpiW(DAT_10007eb4,L"/proxy");
                  if (iVar1 == 0) {
                    DAT_100080c4 = LocalAlloc(0x40,uBytes);
                    FUN_10004378(DAT_100080c4);
                    DAT_10007ea0 = 3;
                  }
                  else {
                    iVar1 = lstrcmpiW(DAT_10007eb4,L"/connecttimeout");
                    if (iVar1 == 0) {
                      FUN_10004378(DAT_10007eb4);
                      iVar1 = FUN_10004454((ushort *)DAT_10007eb4);
                      DAT_10008580 = iVar1 * 1000;
                      goto LAB_10003d8c;
                    }
                    iVar1 = lstrcmpiW(DAT_10007eb4,L"/receivetimeout");
                    if (iVar1 == 0) {
                      FUN_10004378(DAT_10007eb4);
                      iVar1 = FUN_10004454((ushort *)DAT_10007eb4);
                      DAT_10008584 = iVar1 * 1000;
                    }
                    else {
                      iVar1 = lstrcmpiW(DAT_10007eb4,L"/header");
                      if (iVar1 == 0) {
                        DAT_100080c8 = LocalAlloc(0x40,uBytes);
                        psVar9 = DAT_100080c8;
                        goto LAB_10003ba4;
                      }
                      if (DAT_1000845e == '\0') {
                        iVar1 = lstrcmpiW(DAT_10007eb4,L"/tostackconv");
                        DAT_10007e93 = '\x01' - (iVar1 != 0);
                        if ((DAT_10007e93 != '\0') ||
                           (iVar1 = lstrcmpiW(DAT_10007eb4,L"/tostack"), iVar1 == 0)) {
                          DAT_10008570 = LocalAlloc(0x40,uBytes);
                          pwVar10 = L"file";
                          DAT_10008578 = 0;
                          lpString1 = (LPWSTR)&DAT_10007eb8;
                          goto LAB_10003c01;
                        }
                      }
                      iVar1 = lstrcmpiW(DAT_10007eb4,L"/file");
                      if (iVar1 == 0) {
                        hFile = CreateFileA(DAT_10008464,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0
                                            ,(HANDLE)0x0);
                        if (hFile == (HANDLE)0xffffffff) {
                          DAT_10007e98 = 0xc;
                        }
                        else {
                          DAT_1000856c = (HWND)GetFileSize(hFile,(LPDWORD)0x0);
                          if (DAT_1000856c != (HWND)0x0) {
                            iVar1 = FUN_1000109a(DAT_10008464,0x5c);
                            pCVar3 = DAT_10008464;
                            if (iVar1 != 0) {
                              pcVar2 = FUN_100010ce(DAT_10008464,0x5c);
                              pCVar3 = pcVar2 + 1;
                            }
                            wsprintfA(&DAT_10008468,"Filename: %s",pCVar3);
                            LocalFree(DAT_10008464);
                            DAT_10008464 = LocalAlloc(0x40,(SIZE_T)DAT_1000856c);
                            BVar6 = ReadFile(hFile,DAT_10008464,(DWORD)DAT_1000856c,
                                             (LPDWORD)&param_4,(LPOVERLAPPED)0x0);
                            if ((BVar6 != 0) && (param_4 == DAT_1000856c)) {
                              CloseHandle(hFile);
                              goto LAB_10003d8c;
                            }
                          }
                          CloseHandle(hFile);
                          DAT_10007e98 = 0xe;
                        }
                        goto LAB_1000416a;
                      }
                      iVar1 = lstrcmpiW(DAT_10007eb4,L"/textcolor");
                      if (iVar1 == 0) {
                        local_1c = L'\0';
                        local_1a = iVar1;
                        iStack_16 = iVar1;
                        iStack_12 = iVar1;
                        FUN_100043bb(&local_1c,7);
                        iVar1 = lstrlenW(&local_1c);
                        if (iVar1 == 6) {
                          DAT_100080d4 = FUN_1000291e((ushort *)&local_1c);
                          DAT_1000845c = 1;
                        }
                      }
                      else {
                        iVar1 = lstrcmpiW(DAT_10007eb4,L"/bgcolor");
                        if (iVar1 == 0) {
                          local_2c = L'\0';
                          local_2a = iVar1;
                          iStack_26 = iVar1;
                          iStack_22 = iVar1;
                          FUN_100043bb(&local_2c,7);
                          iVar1 = lstrlenW(&local_2c);
                          if (iVar1 == 6) {
                            DAT_10008458 = FUN_1000291e((ushort *)&local_2c);
                            DAT_1000845d = 1;
                            DAT_10008460 = CreateSolidBrush(DAT_10008458);
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_10003d8c;
              }
              if (DAT_10007e89 == '\0') {
                if (DAT_10007e91 == '\0') {
                  FUN_10004378(u_Downloading__s_10007ac8);
                  FUN_10004378(u_Connecting_____10007b48);
                  FUN_10004378(u_second_10007bc8);
                  FUN_10004378(u_minute_10007c48);
                  FUN_10004378(u_hour_10007c88);
                  FUN_10004378((LPWSTR)&DAT_10007cc8);
                  pwVar10 = u__dkB___d____of__dkB____d__01dkB__10007d08;
                }
                else {
                  FUN_10004378(&DAT_10008588);
                  FUN_10004378(u_Downloading_10007088);
                  FUN_10004378(u_Connecting_10007044);
                  lstrcpyW(u_Connecting_10007110,u_Connecting_10007044);
                  FUN_10004378(u_Downloading__s_10007ac8);
                  FUN_10004378(u_Connecting_____10007b48);
                  FUN_10004378(u__dkB___d____of__dkB____d__01dkB__10007d08);
                  pwVar10 = u_second_10007bc8;
                }
                FUN_10004378(pwVar10);
                psVar9 = u___d__s_s_remaining__10007e08;
              }
              else {
                FUN_10004378(u_Downloading__s_10007ac8);
                FUN_10004378(u__dkB___d____of__dkB____d__01dkB__10007d08);
                FUN_10004378(u___d__s_s_remaining__10007e08);
                FUN_10004378(&DAT_10008808);
LAB_10003a79:
                psVar9 = &DAT_100080d8;
              }
            }
          }
        }
LAB_10003ba4:
        FUN_10004378(psVar9);
      }
    }
  }
LAB_10003d8c:
  iVar1 = FUN_10004378(DAT_10007eb4);
  goto LAB_10003d97;
LAB_10003da5:
  FUN_1000440b(DAT_10007eb4);
  if (DAT_10008258 == 0) {
    lstrcpyW(&DAT_10008258,L"NSIS_Inetc (Mozilla)");
  }
  if ((local_cc != L'\0') && (local_14c != L'\0')) {
    wsprintfW(DAT_10007eb4,L"%s:%s",&local_14c,&local_cc);
    puVar11 = &DAT_10008708;
    pWVar8 = DAT_10007eb4;
    iVar1 = lstrlenW(DAT_10007eb4);
    FUN_10001133(iVar1,pWVar8,puVar11);
  }
  if (((param_1 == (HWND)0x0) ||
      (DAT_10007ea8 = FindWindowExW(param_1,(HWND)0x0,L"#32770",(LPCWSTR)0x0),
      DAT_10007ea8 == (HWND)0x0)) || (DAT_10007ead != '\0')) {
    InitCommonControls();
  }
  else {
    psVar9 = &DAT_10008158;
    if (DAT_10008158 == 0) {
      psVar9 = L"Inetc plug-in";
    }
    SetDlgItemTextW(DAT_10007ea8,0x3ee,psVar9);
  }
  if (((DAT_10007ea8 == (HWND)0x0) && (DAT_10007e91 == '\0')) && (DAT_10007e89 == '\0')) {
    DAT_10007ead = '\x01';
  }
  if (DAT_10007ead != '\0') {
    DAT_10007e92 = 0;
    DAT_10007e91 = '\x01';
  }
  if ((DAT_10007e91 == '\0') && (DAT_10007e89 == '\0')) {
    uVar4 = GetWindowLongW(DAT_10007ea8,-0x10);
    SetWindowLongW(DAT_10007ea8,-0x10,uVar4 | 0x4000000);
  }
  _DAT_10007ea4 = GetTickCount();
  if ((DAT_10007e91 != '\0') || (pHVar5 = DAT_10007ea8, DAT_10007e89 != '\0')) {
    pHVar5 = param_1;
  }
  if (DAT_100080cc == (LPWSTR)0x0) {
    if (DAT_10007e89 == '\0') {
      uVar4 = ((DAT_10007e91 == '\0') - 1 & 0xfffffff7) + 0x6e;
    }
    else {
      uVar4 = 0x6f;
    }
  }
  else {
    uVar4 = 0x6c;
  }
  DAT_10007eb0 = CreateDialogParamW(DAT_10007e9c,(LPCWSTR)(uVar4 & 0xffff),pHVar5,FUN_100033ec,0);
  if (DAT_10007eb0 == (HWND)0x0) {
    DAT_10007e98 = 8;
    DVar7 = GetLastError();
    pwVar10 = L" (Err=%d)";
    iVar1 = lstrlenW((LPCWSTR)(&DAT_10007000 + DAT_10007e98 * 0x44));
    wsprintfW((LPWSTR)(&DAT_10007000 + (iVar1 + DAT_10007e98 * 0x22) * 2),pwVar10,DVar7);
  }
  else {
    param_5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10002111,DAT_10007eb0,0,&local_30);
    if (param_5 == (int *)0x0) {
      DAT_10007e98 = 0x15;
      DestroyWindow(DAT_10007eb0);
    }
    else {
      param_4 = GetDlgItem(DAT_10007ea8,0x403);
      pHVar5 = GetDlgItem(DAT_10007ea8,0x3f8);
      local_8 = 0;
      local_c = 0;
      if ((((DAT_10007ead == '\0') && (ShowWindow(DAT_10007eb0,1), DAT_10007ea8 != (HWND)0x0)) &&
          (DAT_10007e91 == '\0')) && (DAT_10007e89 == '\0')) {
        if (param_4 != (HWND)0x0) {
          local_8 = GetWindowLongW(param_4,-0x10);
          EnableWindow(param_4,0);
        }
        if (pHVar5 != (HWND)0x0) {
          local_c = IsWindowVisible(pHVar5);
          ShowWindow(pHVar5,0);
        }
      }
      iVar1 = IsWindow(DAT_10007eb0);
      while ((iVar1 != 0 && (BVar6 = GetMessageW(&local_4c,(HWND)0x0,0,0), 0 < BVar6))) {
        BVar6 = IsDialogMessageW(DAT_10007eb0,&local_4c);
        if ((BVar6 == 0) &&
           ((BVar6 = IsDialogMessageW(param_1,&local_4c), BVar6 == 0 &&
            (BVar6 = TranslateMessage(&local_4c), BVar6 == 0)))) {
          DispatchMessageW(&local_4c);
        }
        iVar1 = IsWindow(DAT_10007eb0);
      }
      DVar7 = WaitForSingleObject(param_5,3000);
      if (DVar7 == 0x102) {
        TerminateThread(param_5,1);
        DAT_10007e98 = 7;
      }
      CloseHandle(param_5);
      if ((((DAT_10007ead == '\0') && (DAT_10007ea8 != (HWND)0x0)) &&
          (SetDlgItemTextW(DAT_10007ea8,0x3ee,L""), DAT_10007e91 == '\0')) && (DAT_10007e89 == '\0')
         ) {
        if (param_4 != (HWND)0x0) {
          SetWindowLongW(param_4,-0x10,local_8);
        }
        if ((pHVar5 != (HWND)0x0) && (local_c != 0)) {
          ShowWindow(pHVar5,5);
        }
      }
    }
  }
LAB_1000416a:
  do {
    iVar1 = FUN_10004378(DAT_10007eb4);
    if (iVar1 != 0) break;
    iVar1 = lstrcmpiW(DAT_10007eb4,L"/end");
  } while (iVar1 != 0);
  LocalFree(DAT_10007eb4);
  if (DAT_100080c0 != (LPWSTR)0x0) {
    LocalFree(DAT_100080c0);
  }
  if (DAT_100080cc != (LPWSTR)0x0) {
    LocalFree(DAT_100080c0);
  }
  if (DAT_100080d0 != (LPWSTR)0x0) {
    LocalFree(DAT_100080d0);
  }
  if (DAT_100080c4 != (LPWSTR)0x0) {
    LocalFree(DAT_100080c4);
  }
  if (DAT_10008464 != (LPSTR)0x0) {
    LocalFree(DAT_10008464);
  }
  if (DAT_100080c8 != (LPWSTR)0x0) {
    LocalFree(DAT_100080c8);
  }
  DAT_100080d0 = (LPWSTR)0x0;
  DAT_100080c0 = (LPWSTR)0x0;
  DAT_100080c8 = (LPWSTR)0x0;
  DAT_100080c4 = (LPWSTR)0x0;
  DAT_10007eb4 = (LPCWSTR)0x0;
  DAT_10008464 = (LPSTR)0x0;
  DAT_1000845f = 0;
  DAT_1000845e = '\0';
  if ((DAT_10008570 != (LPCWSTR)0x0) && (DAT_10007e98 == 0)) {
    if ((DAT_10008578 == 0) || (DAT_10007e93 == '\0')) {
      FUN_1000440b(DAT_10008570);
    }
    else {
      param_4 = (HWND)0x0;
      if ((((char)*DAT_10008570 == -0x11) && (*(char *)((int)DAT_10008570 + 1) == -0x45)) &&
         ((char)DAT_10008570[1] == -0x41)) {
        param_4 = (HWND)0xfde9;
      }
      if (((char)*DAT_10008570 == -1) && (*(char *)((int)DAT_10008570 + 1) == -2)) {
        param_4 = (HWND)0x4b0;
        FUN_1000440b(DAT_10008570);
      }
      if (((param_4 != (HWND)0x4b0) &&
          (iVar1 = MultiByteToWideChar((UINT)param_4,0,(LPCSTR)DAT_10008570,uBytes,(LPWSTR)0x0,0),
          0 < iVar1)) && (pWVar8 = LocalAlloc(0x40,iVar1 * 2 + 2), pWVar8 != (LPCWSTR)0x0)) {
        iVar1 = MultiByteToWideChar((UINT)param_4,0,(LPCSTR)DAT_10008570,uBytes,pWVar8,iVar1);
        if (0 < iVar1) {
          FUN_1000440b(pWVar8);
        }
        LocalFree(pWVar8);
      }
    }
    LocalFree(DAT_10008570);
    DAT_10008570 = (LPCWSTR)0x0;
  }
  FUN_1000440b((LPCWSTR)(&DAT_10007000 + DAT_10007e98 * 0x44));
  return;
}



// ===== put @ 1000430d (size 48) =====

void __cdecl put(HWND param_1,int param_2,undefined4 param_3,HWND param_4,int *param_5)

{
                    /* 0x430d  4  put */
  DAT_1000845e = 1;
  lstrcpyW(u_Downloading__s_10007ac8,L"Uploading %s");
  lstrcpyW(u_Downloading_10007088,L"Uploading");
  get(param_1,param_2,param_3,param_4,param_5);
  return;
}



// ===== post @ 1000433d (size 25) =====

void __cdecl post(HWND param_1,SIZE_T param_2,undefined4 param_3,HWND param_4,int *param_5)

{
                    /* 0x433d  3  post */
  DAT_10008464 = LocalAlloc(0x40,param_2);
  get(param_1,param_2,param_3,param_4,param_5);
  return;
}



// ===== head @ 10004356 (size 16) =====

void __cdecl head(HWND param_1,int param_2,undefined4 param_3,HWND param_4,int *param_5)

{
                    /* 0x4356  2  head */
  DAT_1000845f = 1;
  get(param_1,param_2,param_3,param_4,param_5);
  return;
}



// ===== entry @ 10004366 (size 18) =====

undefined4 entry(undefined4 param_1)

{
  DAT_10007e9c = param_1;
  return 1;
}



// ===== FUN_10004378 @ 10004378 (size 67) =====

undefined4 FUN_10004378(LPWSTR param_1)

{
  int *hMem;
  undefined4 uVar1;
  
  if ((DAT_1000c848 == (int *)0x0) || (*DAT_1000c848 == 0)) {
    uVar1 = 1;
  }
  else {
    hMem = (int *)*DAT_1000c848;
    if (param_1 != (LPWSTR)0x0) {
      lstrcpyW(param_1,(LPCWSTR)(hMem + 1));
    }
    *DAT_1000c848 = *hMem;
    GlobalFree(hMem);
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_100043bb @ 100043bb (size 80) =====

undefined4 FUN_100043bb(LPWSTR param_1,int param_2)

{
  int *hMem;
  undefined4 uVar1;
  
  if ((DAT_1000c848 == (int *)0x0) || (*DAT_1000c848 == 0)) {
    uVar1 = 1;
  }
  else {
    hMem = (int *)*DAT_1000c848;
    if (param_1 != (LPWSTR)0x0) {
      if (param_2 == 0) {
        param_2 = DAT_1000c84c;
      }
      lstrcpynW(param_1,(LPCWSTR)(hMem + 1),param_2);
    }
    *DAT_1000c848 = *hMem;
    GlobalFree(hMem);
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_1000440b @ 1000440b (size 73) =====

void FUN_1000440b(LPCWSTR param_1)

{
  undefined4 *puVar1;
  
  if (DAT_1000c848 != (undefined4 *)0x0) {
    puVar1 = GlobalAlloc(0x40,DAT_1000c84c * 2 + 8);
    lstrcpynW((LPWSTR)(puVar1 + 1),param_1,DAT_1000c84c);
    *puVar1 = *DAT_1000c848;
    *DAT_1000c848 = puVar1;
  }
  return;
}



// ===== FUN_10004454 @ 10004454 (size 37) =====

int FUN_10004454(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  while( true ) {
    uVar2 = (uint)*param_1;
    param_1 = param_1 + 1;
    if ((uVar2 < 0x30) || (0x39 < uVar2)) break;
    iVar1 = iVar1 * 10 + -0x30 + uVar2;
  }
  return iVar1;
}



// decompiled 31 ok, 0 failed, 31 total
