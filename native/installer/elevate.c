// Program: elevate.exe

// ===== FUN_00401000 @ 00401000 (size 93) =====

uint __cdecl FUN_00401000(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    param_2 = param_1 + 0x20;
  }
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  uVar1 = ___vcrt_EventRegister(param_2,FUN_00401123,param_1,param_1 + 0x18);
  if (uVar1 == 0) {
    FUN_0040105d(param_1,2,*(ushort **)(param_1 + 4),(uint)**(ushort **)(param_1 + 4));
  }
  else if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}



// ===== FUN_0040105d @ 0040105d (size 43) =====

uint __cdecl FUN_0040105d(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = ___vcrt_EventSetInformation
                    (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_2,param_3
                     ,param_4);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}



// ===== FUN_00401088 @ 00401088 (size 31) =====

void __cdecl FUN_00401088(int param_1)

{
  ___vcrt_EventUnregister(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// ===== FUN_004010a7 @ 004010a7 (size 56) =====

void __cdecl FUN_004010a7(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  pcVar3 = "";
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar3 - (int)(param_2 + 1);
    pcVar3 = param_2;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  *param_1 = pcVar3;
  param_1[2] = iVar2 + 1;
  return;
}



// ===== FUN_004010df @ 004010df (size 68) =====

void __cdecl FUN_004010df(undefined4 *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  iVar2 = 0;
  psVar3 = (short *)&DAT_00413180;
  if (param_2 != (short *)0x0) {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_2 + 1) >> 1;
    psVar3 = param_2;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  *param_1 = psVar3;
  param_1[2] = iVar2 * 2 + 2;
  return;
}



// ===== FUN_00401123 @ 00401123 (size 120) =====

void FUN_00401123(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int *param_9)

{
  code *pcVar1;
  int iVar2;
  
  if (param_9 != (int *)0x0) {
    if (param_2 == 0) {
      *param_9 = 0;
    }
    else if (param_2 == 1) {
      if ((char)param_3 == '\0') {
        iVar2 = 0x100;
      }
      else {
        iVar2 = (param_3 & 0xff) + 1;
      }
      *param_9 = iVar2;
      param_9[2] = param_4;
      param_9[3] = param_5;
      param_9[4] = param_6;
      param_9[5] = param_7;
    }
    pcVar1 = (code *)param_9[0xc];
    if (pcVar1 != (code *)0x0) {
      iVar2 = param_9[0xd];
      guard_check_icall();
      (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,iVar2);
    }
  }
  return;
}



// ===== FUN_0040119b @ 0040119b (size 60) =====

uint __cdecl FUN_0040119b(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0 || param_3 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc) & param_3;
    if ((*(uint *)(param_1 + 8) & param_2) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)(param_1 + 0x10) & param_2;
      if ((uVar1 == *(uint *)(param_1 + 0x10)) &&
         ((*(uint *)(param_1 + 0x14) & param_3) == *(uint *)(param_1 + 0x14))) goto LAB_004011d3;
    }
    return uVar1 & 0xffffff00;
  }
LAB_004011d3:
  return CONCAT31((int3)(uVar1 >> 8),1);
}



// ===== FUN_004011d7 @ 004011d7 (size 136) =====

void __cdecl
FUN_004011d7(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = (uint)(param_2 + -0x10633c) | 0xb000000;
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  uVar2 = *(undefined4 *)(param_1 + 4);
  param_6[1] = 0;
  *param_6 = uVar2;
  uVar1 = **(ushort **)(param_1 + 4);
  param_6[5] = 0;
  param_6[2] = (uint)uVar1;
  param_6[3] = 2;
  param_6[4] = param_2 + 3;
  param_6[6] = (uint)*(ushort *)(param_2 + 3);
  param_6[7] = 1;
  ___vcrt_EventWriteTransfer
            (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),&local_14,param_3,
             param_4,param_5,param_6);
  return;
}



// ===== FUN_00401260 @ 00401260 (size 6) =====

undefined * FUN_00401260(void)

{
  return &DAT_0041b310;
}



// ===== _fprintf @ 00401270 (size 35) =====

/* Library Function - Single Match
    _fprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = &stack0x0000000c;
  uVar3 = 0;
  puVar1 = (undefined4 *)FUN_00401260();
  iVar2 = FID_conflict____stdio_common_vfprintf
                    (*puVar1,puVar1[1],(int)_File,(int)_Format,uVar3,puVar4);
  return iVar2;
}



// ===== FUN_004012a0 @ 004012a0 (size 46) =====

void __cdecl FUN_004012a0(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar1 = ___acrt_iob_func(1);
  puVar4 = &stack0x00000008;
  uVar3 = 0;
  puVar2 = (undefined4 *)FUN_00401260();
  FID_conflict____stdio_common_vfprintf(*puVar2,puVar2[1],(int)puVar1,param_1,uVar3,puVar4);
  return;
}



// ===== FUN_004012d0 @ 004012d0 (size 133) =====

undefined4 __thiscall FUN_004012d0(void *this,int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0x104;
  psVar2 = this;
  while (*psVar2 != 0) {
    psVar2 = psVar2 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0x80070057;
    }
  }
  if (iVar3 == 0) {
    return 0x80070057;
  }
  uVar4 = 0;
  iVar5 = -iVar3 + 0x104;
  psVar2 = (short *)((int)this + iVar5 * 2);
  iVar5 = 0x104 - iVar5;
  if (iVar5 != 0) {
    iVar3 = -iVar3 + 0x7ffffffe + iVar5;
    iVar6 = param_1 - (int)psVar2;
    do {
      if ((iVar3 == 0) || (sVar1 = *(short *)(iVar6 + (int)psVar2), sVar1 == 0)) {
        if (iVar5 != 0) goto LAB_00401347;
        break;
      }
      *psVar2 = sVar1;
      iVar3 = iVar3 + -1;
      psVar2 = psVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  psVar2 = psVar2 + -1;
  uVar4 = 0x8007007a;
LAB_00401347:
  *psVar2 = 0;
  return uVar4;
}



// ===== FUN_00401360 @ 00401360 (size 135) =====

int __cdecl FUN_00401360(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  wchar_t *pwVar5;
  __crt_locale_pointers *p_Var6;
  char *pcVar7;
  
  iVar2 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    iVar2 = -0x7ff8ffa9;
  }
  if (-1 < iVar2) {
    pcVar7 = &stack0x00000010;
    iVar2 = 0;
    uVar1 = param_2 - 1;
    p_Var6 = (__crt_locale_pointers *)0x0;
    pwVar5 = param_1;
    uVar4 = uVar1;
    puVar3 = (uint *)FUN_00401260();
    uVar4 = ___stdio_common_vswprintf(*puVar3 | 1,puVar3[1],pwVar5,uVar4,param_3,p_Var6,pcVar7);
    if ((int)uVar4 < 0) {
      uVar4 = 0xffffffff;
    }
    if (((int)uVar4 < 0) || (uVar1 < uVar4)) {
      iVar2 = -0x7ff8ff86;
      param_1[uVar1] = L'\0';
    }
    else if (uVar4 == uVar1) {
      param_1[uVar1] = L'\0';
      return 0;
    }
    return iVar2;
  }
  if (param_2 != 0) {
    *param_1 = L'\0';
  }
  return iVar2;
}



// ===== FUN_004013f0 @ 004013f0 (size 157) =====

undefined4 __fastcall FUN_004013f0(LPCWSTR param_1,LPCWSTR param_2,int param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  FILE *_File;
  wchar_t *_Format;
  SHELLEXECUTEINFOW local_40;
  
  _memset(&local_40,0,0x3c);
  local_40.cbSize = 0x3c;
  local_40.fMask = 0x440;
  local_40.lpVerb = L"runas";
  local_40.nShow = 0;
  local_40.lpFile = param_1;
  local_40.lpParameters = param_2;
  BVar1 = ShellExecuteExW(&local_40);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    _Format = L"%s could not be launched: %d\n";
    _File = (FILE *)___acrt_iob_func(2);
    _fprintf(_File,(char *)_Format,param_1,DVar2);
    return 1;
  }
  if (param_3 != 0) {
    WaitForSingleObject(local_40.hProcess,0xffffffff);
  }
  CloseHandle(local_40.hProcess);
  return 0;
}



// ===== FUN_00401490 @ 00401490 (size 224) =====

void __fastcall FUN_00401490(int *param_1)

{
  DWORD DVar1;
  FILE *_File;
  int iVar2;
  wchar_t *_Format;
  wchar_t local_620 [520];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  if (*param_1 != 0) {
    FUN_004012a0(0x418740);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1[2] != 0) {
    DVar1 = GetEnvironmentVariableW(L"COMSPEC",local_210,0x104);
    if (DVar1 == 0) {
      _Format = L"%%COMSPEC%% is not defined\n";
    }
    else {
      param_1[3] = (int)local_210;
      iVar2 = FUN_00401360(local_620,0x208,L"/K \"%s\"");
      if (-1 < iVar2) {
        param_1[4] = (int)local_620;
        goto LAB_00401553;
      }
      _Format = L"Creating command line failed\n";
    }
    _File = (FILE *)___acrt_iob_func(2);
    _fprintf(_File,(char *)_Format);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00401553:
  FUN_004013f0(param_1[3],(LPCWSTR)param_1[4],param_1[1]);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_00401570 @ 00401570 (size 689) =====

void __cdecl FUN_00401570(int param_1,int param_2)

{
  short sVar1;
  BOOL BVar2;
  FILE *pFVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  wchar_t *_Format;
  wchar_t *pwVar8;
  int local_340 [4];
  short *local_330;
  int local_32c;
  int local_328;
  _OSVERSIONINFOW local_324;
  short local_210;
  undefined1 local_20e [518];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  local_328 = param_2;
  local_32c = 0;
  _memset(&local_210,0,0x208);
  _memset(&local_324,0,0x114);
  local_330 = &local_210;
  local_324.dwOSVersionInfoSize = 0x114;
  local_340[0] = 0;
  local_340[1] = 0;
  local_340[2] = 0;
  local_340[3] = 0;
  BVar2 = GetVersionExW(&local_324);
  if ((BVar2 != 0) && (local_324.dwMajorVersion < 6)) {
    pwVar8 = L"This tool is for Windows Vista and above only.\n";
    pFVar3 = (FILE *)___acrt_iob_func(2);
    _fprintf(pFVar3,(char *)pwVar8);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = 1;
  iVar5 = local_340[2];
  if (1 < param_1) {
    do {
      if (local_32c == 0) {
        psVar6 = *(short **)(param_2 + iVar7 * 4);
        sVar1 = *psVar6;
        if ((sVar1 != 0x2d) && (param_2 = local_328, sVar1 != 0x2f)) goto LAB_004016ee;
        pwVar8 = psVar6 + 1;
        iVar4 = __wcsicmp(pwVar8,L"?");
        if (iVar4 == 0) {
          local_340[0] = 1;
          param_2 = local_328;
        }
        else {
          iVar4 = __wcsicmp(pwVar8,L"wait");
          if (iVar4 == 0) {
            local_340[1] = 1;
            param_2 = local_328;
          }
          else {
            iVar5 = __wcsicmp(pwVar8,L"k");
            if (iVar5 != 0) {
              _Format = L"Unrecognized Flag %s\n";
              pFVar3 = (FILE *)___acrt_iob_func(2);
              _fprintf(pFVar3,(char *)_Format,pwVar8);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            iVar5 = 1;
            local_340[2] = 1;
            param_2 = local_328;
          }
        }
      }
      else {
LAB_004016ee:
        local_32c = 1;
        if ((local_340[3] == 0) && (iVar5 == 0)) {
          local_340[3] = *(int *)(param_2 + iVar7 * 4);
        }
        else {
          iVar4 = FUN_004012d0(&local_210,*(int *)(param_2 + iVar7 * 4));
          if ((iVar4 < 0) || (iVar4 = FUN_004012d0(&local_210,0x418ba8), iVar4 < 0)) {
            pwVar8 = L"Command Line too long\n";
            goto LAB_004017d2;
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1);
    if (1 < param_1) {
      if (local_340[0] == 0) {
        iVar7 = local_340[3];
        if (iVar5 != 0) {
          psVar6 = &local_210;
          do {
            sVar1 = *psVar6;
            psVar6 = psVar6 + 1;
          } while (sVar1 != 0);
          iVar7 = (int)psVar6 - (int)local_20e >> 1;
        }
        if (iVar7 == 0) {
          pwVar8 = L"Invalid arguments\n";
LAB_004017d2:
          pFVar3 = (FILE *)___acrt_iob_func(2);
          _fprintf(pFVar3,(char *)pwVar8);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      goto LAB_00401805;
    }
  }
  local_340[0] = 1;
LAB_00401805:
  FUN_00401490(local_340);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== __security_check_cookie @ 00401821 (size 17) =====

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Library: Visual Studio 2015 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_0041a004) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



// ===== FUN_004018f0 @ 004018f0 (size 319) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_004018f0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar4 = ___scrt_initialize_crt(1);
  if ((char)uVar4 != '\0') {
    bVar2 = false;
    uVar4 = ___scrt_acquire_startup_lock();
    if (DAT_0041ab0c != 1) {
      if (DAT_0041ab0c == 0) {
        DAT_0041ab0c = 1;
        iVar5 = __initterm_e((undefined4 *)&DAT_00413134,(undefined4 *)&DAT_0041314c);
        if (iVar5 != 0) {
          return 0xff;
        }
        __initterm((undefined4 *)&DAT_00413128,(undefined4 *)&DAT_00413130);
        DAT_0041ab0c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar4);
      piVar6 = (int *)FUN_00401f0a();
      if ((*piVar6 != 0) && (uVar4 = FUN_00401ce2((int)piVar6), (char)uVar4 != '\0')) {
        uVar10 = 0;
        uVar9 = 2;
        uVar4 = 0;
        pcVar1 = (code *)*piVar6;
        guard_check_icall();
        (*pcVar1)(uVar4,uVar9,uVar10);
      }
      puVar7 = (uint *)FUN_00401f10();
      if ((*puVar7 != 0) && (uVar4 = FUN_00401ce2((int)puVar7), (char)uVar4 != '\0')) {
        __register_thread_local_exe_atexit_callback(*puVar7);
      }
      FUN_00402372((HMODULE)0x0);
      piVar6 = FUN_00405964();
      piVar8 = (int *)FUN_0040595e();
      FUN_004055e6();
      iVar5 = FUN_00401570(*piVar8,*piVar6);
      FUN_0040240e((HMODULE)0x0);
      bVar3 = is_managed_app();
      if (bVar3) {
        if (!bVar2) {
          __cexit();
        }
        ___scrt_uninitialize_crt('\x01','\0');
        return iVar5;
      }
                    /* WARNING: Subroutine does not return */
      _exit(iVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  ___scrt_fastfail();
}



// ===== entry @ 00401a6c (size 10) =====

void entry(void)

{
  ___security_init_cookie();
  FUN_004018f0();
  return;
}



// ===== ___raise_securityfailure @ 00401a76 (size 40) =====

/* Library Function - Single Match
    ___raise_securityfailure
   
   Library: Visual Studio 2015 Release */

void __cdecl ___raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// ===== ___report_gsfailure @ 00401a9e (size 251) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Library: Visual Studio 2015 Release */

void __cdecl ___report_gsfailure(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_0041a8e8 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_0041a8f0 = (undefined4)lVar9;
  _DAT_0041a900 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041a904 = &stack0x00000004;
  _DAT_0041a840 = 0x10001;
  _DAT_0041a7f0 = 0xc0000409;
  _DAT_0041a7f4 = 1;
  _DAT_0041a800 = 1;
  DAT_0041a804 = 2;
  _DAT_0041a7fc = unaff_retaddr;
  _DAT_0041a8cc = in_GS;
  _DAT_0041a8d0 = in_FS;
  _DAT_0041a8d4 = in_ES;
  _DAT_0041a8d8 = in_DS;
  _DAT_0041a8dc = unaff_EDI;
  _DAT_0041a8e0 = unaff_ESI;
  _DAT_0041a8e4 = unaff_EBX;
  _DAT_0041a8ec = uVar3;
  _DAT_0041a8f4 = unaff_EBP;
  DAT_0041a8f8 = unaff_retaddr;
  _DAT_0041a8fc = in_CS;
  _DAT_0041a908 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00413170);
  return;
}



// ===== find_pe_section @ 00401b99 (size 68) =====

/* Library Function - Single Match
    struct _IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned char * const,unsigned int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2)

{
  int iVar1;
  _IMAGE_SECTION_HEADER *p_Var2;
  _IMAGE_SECTION_HEADER *p_Var3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  p_Var2 = (_IMAGE_SECTION_HEADER *)
           (param_1 + (uint)*(ushort *)(param_1 + iVar1 + 0x14) + iVar1 + 0x18);
  p_Var3 = p_Var2 + *(ushort *)(param_1 + iVar1 + 6);
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((p_Var2->VirtualAddress <= param_2) &&
       (param_2 < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) break;
    p_Var2 = p_Var2 + 1;
  }
  return p_Var2;
}



// ===== ___scrt_acquire_startup_lock @ 00401bdd (size 53) =====

/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Library: Visual Studio 2015 Release */

int ___scrt_acquire_startup_lock(void)

{
  int iVar1;
  bool bVar2;
  uint3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return (uint)extraout_var << 8;
  }
  while( true ) {
    iVar3 = 0;
    LOCK();
    iVar1 = *(int *)((int)Self + 4);
    if (DAT_0041ab10 != 0) {
      iVar3 = DAT_0041ab10;
      iVar1 = DAT_0041ab10;
    }
    DAT_0041ab10 = iVar1;
    UNLOCK();
    if (iVar3 == 0) break;
    if (*(int *)((int)Self + 4) == iVar3) {
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return 0;
}



// ===== ___scrt_initialize_crt @ 00401c12 (size 57) =====

/* Library Function - Single Match
    ___scrt_initialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl ___scrt_initialize_crt(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    DAT_0041ab2c = 1;
  }
  FUN_0040218b();
  uVar1 = FUN_0040266a();
  if ((char)uVar1 != '\0') {
    uVar2 = ___acrt_initialize();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_00402698('\0');
  }
  return uVar1 & 0xffffff00;
}



// ===== ___scrt_initialize_onexit_tables @ 00401c4b (size 150) =====

/* Library Function - Single Match
    ___scrt_initialize_onexit_tables
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    ___scrt_fastfail();
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar2) == 0) || (param_1 != 0)) {
    bVar1 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
    DAT_0041ab14 = (0xffffffffU >> bVar1 | -1 << 0x20 - bVar1) ^ DAT_0041a004;
    uVar3 = CONCAT31((int3)(DAT_0041ab14 >> 8),1);
    DAT_0041ab18 = DAT_0041ab14;
    DAT_0041ab1c = DAT_0041ab14;
    DAT_0041ab20 = DAT_0041ab14;
    DAT_0041ab24 = DAT_0041ab14;
    DAT_0041ab28 = DAT_0041ab14;
  }
  else {
    uVar3 = __initialize_onexit_table(&DAT_0041ab14);
    if (uVar3 == 0) {
      iVar4 = __initialize_onexit_table(&DAT_0041ab20);
      uVar3 = CONCAT31((int3)((uint)-iVar4 >> 8),'\x01' - (iVar4 != 0));
    }
    else {
      uVar3 = uVar3 & 0xffffff00;
    }
  }
  return uVar3;
}



// ===== FUN_00401ce2 @ 00401ce2 (size 119) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

uint __cdecl FUN_00401ce2(int param_1)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  
  p_Var1 = (_IMAGE_SECTION_HEADER *)0x5a4d;
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (p_Var1 = (_IMAGE_SECTION_HEADER *)IMAGE_DOS_HEADER_00400000.e_lfanew,
       *(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     ((p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000),
      p_Var1 != (_IMAGE_SECTION_HEADER *)0x0 && ((p_Var1->Characteristics & 0x80000000) == 0)))) {
    return CONCAT31((int3)((uint)p_Var1 >> 8),1);
  }
  return (uint)p_Var1 & 0xffffff00;
}



// ===== ___scrt_release_startup_lock @ 00401d6f (size 29) =====

/* Library Function - Single Match
    ___scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_0041ab10;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0041ab10 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}



// ===== ___scrt_uninitialize_crt @ 00401d8c (size 40) =====

/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl ___scrt_uninitialize_crt(char param_1,char param_2)

{
  undefined4 in_EAX;
  
  if ((DAT_0041ab2c == '\0') || (param_2 == '\0')) {
    ___acrt_uninitialize();
    in_EAX = FUN_00402698(param_1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



// ===== __onexit @ 00401db4 (size 59) =====

/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2015 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)DAT_0041a004 & 0x1f;
  if (((DAT_0041a004 ^ DAT_0041ab14) >> bVar2 | (DAT_0041a004 ^ DAT_0041ab14) << 0x20 - bVar2) ==
      0xffffffff) {
    iVar1 = __crt_atexit();
  }
  else {
    iVar1 = __register_onexit_function();
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}



// ===== _atexit @ 00401def (size 21) =====

/* Library Function - Single Match
    _atexit
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// ===== ___security_init_cookie @ 00401e04 (size 156) =====

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2015 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_0041a004 == 0xbb40e64e) || ((DAT_0041a004 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_10);
    local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
    DVar1 = GetCurrentThreadId();
    local_8 = local_8 ^ DVar1;
    DVar1 = GetCurrentProcessId();
    local_8 = local_8 ^ DVar1;
    QueryPerformanceCounter(&local_18);
    DAT_0041a004 = local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
    if (DAT_0041a004 == 0xbb40e64e) {
      DAT_0041a004 = 0xbb40e64f;
    }
    else if ((DAT_0041a004 & 0xffff0000) == 0) {
      DAT_0041a004 = DAT_0041a004 | (DAT_0041a004 | 0x4711) << 0x10;
    }
  }
  DAT_0041a000 = ~DAT_0041a004;
  return;
}



// ===== FUN_00401ea0 @ 00401ea0 (size 4) =====

undefined4 FUN_00401ea0(void)

{
  return 1;
}



// ===== FUN_00401ea4 @ 00401ea4 (size 3) =====

undefined4 FUN_00401ea4(void)

{
  return 0;
}



// ===== FUN_00401ea7 @ 00401ea7 (size 6) =====

undefined4 FUN_00401ea7(void)

{
  return 0x4000;
}



// ===== FUN_00401ead @ 00401ead (size 12) =====

void FUN_00401ead(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0041ab30);
  return;
}



// ===== FUN_00401eb9 @ 00401eb9 (size 32) =====

void FUN_00401eb9(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___scrt_fastfail();
}



// ===== guard_check_icall @ 00401eda (size 1) =====

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



// ===== FUN_00401edb @ 00401edb (size 6) =====

undefined * FUN_00401edb(void)

{
  return &DAT_0041ab38;
}



// ===== FUN_00401ee1 @ 00401ee1 (size 29) =====

void FUN_00401ee1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00401260();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00401edb();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



// ===== FUN_00401efe @ 00401efe (size 12) =====

bool FUN_00401efe(void)

{
  return DAT_0041a00c == 0;
}



// ===== FUN_00401f0a @ 00401f0a (size 6) =====

undefined * FUN_00401f0a(void)

{
  return &DAT_0041b300;
}



// ===== FUN_00401f10 @ 00401f10 (size 6) =====

undefined * FUN_00401f10(void)

{
  return &DAT_0041b2fc;
}



// ===== ___scrt_fastfail @ 00401f16 (size 283) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___scrt_fastfail
   
   Library: Visual Studio 2015 Release */

void ___scrt_fastfail(void)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  undefined4 local_328 [39];
  EXCEPTION_RECORD local_5c;
  _EXCEPTION_POINTERS local_c;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  _DAT_0041ab40 = 0;
  _memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  _memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if (LVar3 == 0) {
    _DAT_0041ab40 = _DAT_0041ab40 & -(uint)(BVar2 == 1);
  }
  return;
}



// ===== is_managed_app @ 00402031 (size 68) =====

/* Library Function - Single Match
    bool __cdecl is_managed_app(void)
   
   Library: Visual Studio 2015 Release */

bool __cdecl is_managed_app(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && ((short)pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     (((short)piVar2[6] == 0x10b && (0xe < (uint)piVar2[0x1d])))) {
    return piVar2[0x3a] != 0;
  }
  return false;
}



// ===== FUN_00402081 @ 00402081 (size 64) =====

undefined4 FUN_00402081(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_00405fc2();
  }
  return 0;
}



// ===== FUN_004020c2 @ 004020c2 (size 8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004020c2(void)

{
  _DAT_0041ab40 = 0;
  return;
}



// ===== FUN_004020ca @ 004020ca (size 43) =====

/* WARNING: Removing unreachable block (ram,0x004020da) */
/* WARNING: Removing unreachable block (ram,0x004020db) */
/* WARNING: Removing unreachable block (ram,0x004020e1) */
/* WARNING: Removing unreachable block (ram,0x004020ea) */
/* WARNING: Removing unreachable block (ram,0x004020f1) */

void FUN_004020ca(void)

{
  return;
}



// ===== FUN_004020f5 @ 004020f5 (size 43) =====

/* WARNING: Removing unreachable block (ram,0x00402105) */
/* WARNING: Removing unreachable block (ram,0x00402106) */
/* WARNING: Removing unreachable block (ram,0x0040210c) */
/* WARNING: Removing unreachable block (ram,0x00402115) */
/* WARNING: Removing unreachable block (ram,0x0040211c) */

void FUN_004020f5(void)

{
  return;
}



// ===== __SEH_prolog4 @ 00402130 (size 70) =====

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041a004 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// ===== __SEH_epilog4 @ 00402176 (size 21) =====

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



// ===== FUN_0040218b @ 0040218b (size 417) =====

/* WARNING: Removing unreachable block (ram,0x004021cc) */
/* WARNING: Removing unreachable block (ram,0x00402283) */
/* WARNING: Removing unreachable block (ram,0x0040220d) */

undefined4 FUN_0040218b(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint in_XCR0;
  uint local_18;
  uint local_14;
  
  DAT_0041ab44 = 0;
  DAT_0041a010 = DAT_0041a010 | 1;
  BVar6 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_0041a010;
  if (BVar6 != 0) {
    local_18 = 0;
    DAT_0041a010 = DAT_0041a010 | 2;
    DAT_0041ab44 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar8 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar7 = *puVar2 & 0xfff3ff0, uVar7 == 0x106c0 || (uVar7 == 0x20660)) ||
          (uVar7 == 0x20670)) || ((uVar7 == 0x30650 || (uVar7 == 0x30660)))) || (uVar7 == 0x30670)))
       ) {
      DAT_0041ab48 = DAT_0041ab48 | 1;
    }
    if (6 < *piVar1) {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      local_18 = *(uint *)(iVar3 + 4);
      if ((local_18 & 0x200) != 0) {
        DAT_0041ab48 = DAT_0041ab48 | 2;
      }
    }
    if ((uVar8 & 0x100000) != 0) {
      DAT_0041a010 = uVar5 | 6;
      DAT_0041ab44 = 2;
      if (((uVar8 & 0x8000000) != 0) && ((uVar8 & 0x10000000) != 0)) {
        uVar4 = xinuse(0);
        local_14 = in_XCR0 & (uint)uVar4;
        if ((local_14 & 6) == 6) {
          DAT_0041a010 = uVar5 | 0xe;
          DAT_0041ab44 = 3;
          if ((local_18 & 0x20) != 0) {
            DAT_0041a010 = uVar5 | 0x2e;
            DAT_0041ab44 = 5;
          }
        }
      }
    }
  }
  return 0;
}



// ===== ___scrt_is_ucrt_dll_in_use @ 0040232c (size 12) =====

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2015 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0041b2f8 != 0;
}



// ===== FUN_00402338 @ 00402338 (size 58) =====

void __cdecl FUN_00402338(HMODULE param_1,LPWSTR param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = GetModuleFileNameW(param_1,param_2,param_3);
  if (param_3 != 0) {
    if (DVar1 == 0) {
      *param_2 = L'\0';
    }
    if (DVar1 == param_3) {
      DVar1 = GetLastError();
      if (DVar1 == 0) {
        param_2[param_3 - 1] = L'\0';
      }
    }
  }
  return;
}



// ===== FUN_00402372 @ 00402372 (size 156) =====

void __cdecl FUN_00402372(HMODULE param_1)

{
  uint uVar1;
  undefined4 local_250 [8];
  undefined4 local_230 [4];
  undefined4 local_220 [4];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  FUN_00402338(param_1,local_210,0x104);
  if ((5 < DAT_0041a018) && (uVar1 = FUN_0040119b(0x41a018,0,0x2000), (char)uVar1 != '\0')) {
    FUN_004010a7(local_230,"Main Invoked.");
    FUN_004010df(local_220,local_210);
    FUN_004011d7(0x41a018,(undefined4 *)&DAT_00418d01,0,0,4,local_250);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_0040240e @ 0040240e (size 156) =====

void __cdecl FUN_0040240e(HMODULE param_1)

{
  uint uVar1;
  undefined4 local_250 [8];
  undefined4 local_230 [4];
  undefined4 local_220 [4];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  FUN_00402338(param_1,local_210,0x104);
  if ((5 < DAT_0041a018) && (uVar1 = FUN_0040119b(0x41a018,0,0x2000), (char)uVar1 != '\0')) {
    FUN_004010a7(local_230,"Main Returned.");
    FUN_004010df(local_220,local_210);
    FUN_004011d7(0x41a018,(undefined4 *)&DAT_00418d3d,0,0,4,local_250);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_004024aa @ 004024aa (size 19) =====

void FUN_004024aa(void)

{
  FUN_00401000(0x41a018,0,0,0);
  return;
}



// ===== FUN_004024bd @ 004024bd (size 12) =====

void FUN_004024bd(void)

{
  FUN_00401088(0x41a018);
  return;
}



// ===== _ValidateLocalCookies @ 004024d0 (size 50) =====

/* Library Function - Single Match
    _ValidateLocalCookies
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _ValidateLocalCookies(int *param_1,int param_2)

{
  if (*param_1 != -2) {
    __security_check_cookie(param_1[1] + param_2 ^ *(uint *)(*param_1 + param_2));
  }
  __security_check_cookie(param_1[3] + param_2 ^ *(uint *)(param_1[2] + param_2));
  return;
}



// ===== FUN_00402510 @ 00402510 (size 346) =====

undefined4 __cdecl FUN_00402510(PEXCEPTION_RECORD param_1,PVOID param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  PEXCEPTION_RECORD pEVar7;
  undefined4 uVar8;
  PEXCEPTION_RECORD local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  char local_5;
  
  local_5 = '\0';
  iVar5 = (int)param_2 + 0x10;
  local_c = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_0041a004);
  local_10 = 1;
  local_14 = iVar5;
  _ValidateLocalCookies(local_c,iVar5);
  guard_check_icall();
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_20 = param_1;
    local_1c = param_3;
    *(PEXCEPTION_RECORD **)((int)param_2 + -4) = &local_20;
    uVar6 = *(uint *)((int)param_2 + 0xc);
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return local_10;
    }
    do {
      iVar3 = uVar6 * 3 + 4;
      uVar1 = local_c[iVar3];
      local_18 = local_c + iVar3;
      if ((undefined *)local_18[1] != (undefined *)0x0) {
        iVar3 = _EH4_CallFilterFunc((undefined *)local_18[1]);
        local_5 = '\x01';
        if (iVar3 < 0) {
          local_10 = 0;
          goto LAB_00402625;
        }
        if (0 < iVar3) {
          if (((param_1->ExceptionCode == 0xe06d7363) && (DAT_0041b304 != (code *)0x0)) &&
             (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0041b304), pcVar2 = DAT_0041b304,
             BVar4 != 0)) {
            uVar8 = 1;
            pEVar7 = param_1;
            guard_check_icall();
            (*pcVar2)(pEVar7,uVar8);
            iVar5 = local_14;
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(uint *)((int)param_2 + 0xc) != uVar6) {
            _EH4_LocalUnwind((int)param_2,uVar6,iVar5,&DAT_0041a004);
          }
          *(uint *)((int)param_2 + 0xc) = uVar1;
          _ValidateLocalCookies(local_c,iVar5);
          _EH4_TransferToHandler((undefined *)local_18[2]);
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
      }
      uVar6 = uVar1;
    } while (uVar1 != 0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar5,&DAT_0041a004);
  }
LAB_00402625:
  _ValidateLocalCookies(local_c,iVar5);
  return local_10;
}



// ===== FUN_0040266a @ 0040266a (size 46) =====

uint FUN_0040266a(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_00402de3();
  FUN_00402b55();
  uVar1 = ___vcrt_initialize_locks();
  if ((char)uVar1 != '\0') {
    uVar2 = ___vcrt_initialize_ptd();
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_004024aa();
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize_locks();
  }
  return uVar1 & 0xffffff00;
}



// ===== FUN_00402698 @ 00402698 (size 36) =====

undefined4 __cdecl FUN_00402698(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004024bd();
  if (param_1 == '\0') {
    ___vcrt_uninitialize_ptd();
    ___vcrt_uninitialize_locks();
    uVar1 = ___vcrt_uninitialize_winapi_thunks('\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



// ===== _memset @ 004026c0 (size 346) =====

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  if (_Size == 0) {
    return _Dst;
  }
  iVar1 = (_Val & 0xffU) * 0x1010101;
  piVar3 = _Dst;
  if (0x20 < (int)_Size) {
    if (0x7f < (int)_Size) {
      puVar2 = _Dst;
      if ((DAT_0041ab48 >> 1 & 1) != 0) {
        for (; _Size != 0; _Size = _Size - 1) {
          *puVar2 = (char)iVar1;
          puVar2 = puVar2 + 1;
        }
        return _Dst;
      }
      if ((DAT_0041a010 >> 1 & 1) == 0) goto joined_r0x004027cb;
      *(int *)_Dst = iVar1;
      *(int *)((int)_Dst + 4) = iVar1;
      *(int *)((int)_Dst + 8) = iVar1;
      *(int *)((int)_Dst + 0xc) = iVar1;
      piVar3 = (int *)((int)_Dst + 0x10U & 0xfffffff0);
      _Size = (int)_Dst + (_Size - (int)piVar3);
      if (0x80 < (int)_Size) {
        do {
          *piVar3 = iVar1;
          piVar3[1] = iVar1;
          piVar3[2] = iVar1;
          piVar3[3] = iVar1;
          piVar3[4] = iVar1;
          piVar3[5] = iVar1;
          piVar3[6] = iVar1;
          piVar3[7] = iVar1;
          piVar3[8] = iVar1;
          piVar3[9] = iVar1;
          piVar3[10] = iVar1;
          piVar3[0xb] = iVar1;
          piVar3[0xc] = iVar1;
          piVar3[0xd] = iVar1;
          piVar3[0xe] = iVar1;
          piVar3[0xf] = iVar1;
          piVar3[0x10] = iVar1;
          piVar3[0x11] = iVar1;
          piVar3[0x12] = iVar1;
          piVar3[0x13] = iVar1;
          piVar3[0x14] = iVar1;
          piVar3[0x15] = iVar1;
          piVar3[0x16] = iVar1;
          piVar3[0x17] = iVar1;
          piVar3[0x18] = iVar1;
          piVar3[0x19] = iVar1;
          piVar3[0x1a] = iVar1;
          piVar3[0x1b] = iVar1;
          piVar3[0x1c] = iVar1;
          piVar3[0x1d] = iVar1;
          piVar3[0x1e] = iVar1;
          piVar3[0x1f] = iVar1;
          piVar3 = piVar3 + 0x20;
          _Size = _Size - 0x80;
        } while ((_Size & 0xffffff00) != 0);
        goto LAB_00402790;
      }
    }
    if ((DAT_0041a010 >> 1 & 1) != 0) {
LAB_00402790:
      if (0x1f < _Size) {
        do {
          *piVar3 = iVar1;
          piVar3[1] = iVar1;
          piVar3[2] = iVar1;
          piVar3[3] = iVar1;
          piVar3[4] = iVar1;
          piVar3[5] = iVar1;
          piVar3[6] = iVar1;
          piVar3[7] = iVar1;
          piVar3 = piVar3 + 8;
          _Size = _Size - 0x20;
        } while (0x1f < _Size);
        if ((_Size & 0x1f) == 0) {
          return _Dst;
        }
      }
      piVar3 = (int *)((_Size - 0x20) + (int)piVar3);
      *piVar3 = iVar1;
      piVar3[1] = iVar1;
      piVar3[2] = iVar1;
      piVar3[3] = iVar1;
      piVar3[4] = iVar1;
      piVar3[5] = iVar1;
      piVar3[6] = iVar1;
      piVar3[7] = iVar1;
      return _Dst;
    }
  }
joined_r0x004027cb:
  for (; (_Size & 3) != 0; _Size = _Size - 1) {
    *(char *)piVar3 = (char)iVar1;
    piVar3 = (int *)((int)piVar3 + 1);
  }
  if ((_Size & 4) != 0) {
    *piVar3 = iVar1;
    piVar3 = piVar3 + 1;
    _Size = _Size - 4;
  }
  for (; (_Size & 0xfffffff8) != 0; _Size = _Size - 8) {
    *piVar3 = iVar1;
    piVar3[1] = iVar1;
    piVar3 = piVar3 + 2;
  }
  return _Dst;
}



// ===== __crt_fast_encode_pointer<void*> @ 0040281a (size 29) =====

/* Library Function - Single Match
    void * __cdecl __crt_fast_encode_pointer<void *>(void * const)
   
   Library: Visual Studio 2015 Release */

void * __cdecl __crt_fast_encode_pointer<void*>(void *param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
  return (void *)(((uint)param_1 >> bVar1 | (int)param_1 << 0x20 - bVar1) ^ DAT_0041a004);
}



// ===== try_get_function @ 00402837 (size 160) =====

/* Library Function - Single Match
    void * __cdecl try_get_function(enum `anonymous namespace'::function_id,char const * const,enum
   A0x89697e75::module_id const * const,enum A0x89697e75::module_id const * const)
   
   Library: Visual Studio 2015 Release */

void * __cdecl
try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4)

{
  uint *puVar1;
  uint uVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  byte bVar4;
  void *pvVar5;
  
  puVar1 = &DAT_0041ab5c + param_1;
  LOCK();
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    *puVar1 = 0;
    uVar2 = 0;
  }
  UNLOCK();
  bVar4 = (byte)DAT_0041a004 & 0x1f;
  pvVar5 = (void *)((DAT_0041a004 ^ uVar2) >> bVar4 | (DAT_0041a004 ^ uVar2) << 0x20 - bVar4);
  if (pvVar5 != (void *)0xffffffff) {
    if (pvVar5 != (void *)0x0) {
      return pvVar5;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      hModule = try_get_module(*param_3);
      if (hModule != (HINSTANCE__ *)0x0) goto LAB_00402893;
    }
    hModule = (HMODULE)0x0;
LAB_00402893:
    if ((hModule != (HMODULE)0x0) &&
       (pFVar3 = GetProcAddress(hModule,param_2), pFVar3 != (FARPROC)0x0)) {
      pvVar5 = __crt_fast_encode_pointer<void*>(pFVar3);
      LOCK();
      *puVar1 = (uint)pvVar5;
      UNLOCK();
      return pFVar3;
    }
    bVar4 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
    LOCK();
    *puVar1 = (0xffffffffU >> bVar4 | -1 << 0x20 - bVar4) ^ DAT_0041a004;
    UNLOCK();
  }
  return (void *)0x0;
}



// ===== try_get_module @ 004028d7 (size 129) =====

/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl try_get_module(enum `anonymous namespace'::module_id)
   
   Library: Visual Studio 2015 Release */

HINSTANCE__ * __cdecl try_get_module(module_id param_1)

{
  uint *puVar1;
  LPCWSTR lpLibFileName;
  uint uVar2;
  HINSTANCE__ *hLibModule;
  DWORD DVar3;
  
  puVar1 = &DAT_0041ab4c + param_1;
  LOCK();
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    *puVar1 = 0;
    uVar2 = 0;
  }
  UNLOCK();
  if (uVar2 == 0) {
    lpLibFileName = (LPCWSTR)(&PTR_u_advapi32_004131a4)[param_1];
    hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
    if (hLibModule == (HMODULE)0x0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x57) {
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
      }
      else {
        hLibModule = (HMODULE)0x0;
      }
      if (hLibModule == (HMODULE)0x0) {
        LOCK();
        *puVar1 = 0xffffffff;
        UNLOCK();
        return (HINSTANCE__ *)0x0;
      }
    }
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = (uint)hLibModule;
    UNLOCK();
    if (uVar2 != 0) {
      FreeLibrary(hLibModule);
    }
  }
  else {
    hLibModule = (HINSTANCE__ *)(-(uint)(uVar2 != 0xffffffff) & uVar2);
  }
  return hLibModule;
}



// ===== ___vcrt_EventRegister @ 00402958 (size 64) =====

/* Library Function - Single Match
    ___vcrt_EventRegister
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl
___vcrt_EventRegister(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = try_get_function(0,"EventRegister",(module_id *)&DAT_00413254,
                            (module_id *)"EventRegister");
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0x32;
  }
  else {
    guard_check_icall();
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// ===== ___vcrt_EventSetInformation @ 00402998 (size 67) =====

/* Library Function - Single Match
    ___vcrt_EventSetInformation
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl
___vcrt_EventSetInformation
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = try_get_function(1,"EventSetInformation",(module_id *)&DAT_00413268,
                            (module_id *)"EventSetInformation");
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0x32;
  }
  else {
    guard_check_icall();
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}



// ===== ___vcrt_EventUnregister @ 004029db (size 58) =====

/* Library Function - Single Match
    ___vcrt_EventUnregister
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl ___vcrt_EventUnregister(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = try_get_function(2,"EventUnregister",(module_id *)&DAT_00413280,
                            (module_id *)"EventUnregister");
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0x32;
  }
  else {
    guard_check_icall();
    uVar2 = (*pcVar1)(param_1,param_2);
  }
  return uVar2;
}



// ===== ___vcrt_EventWriteTransfer @ 00402a15 (size 73) =====

/* Library Function - Single Match
    ___vcrt_EventWriteTransfer
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl
___vcrt_EventWriteTransfer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = try_get_function(3,"EventWriteTransfer",(module_id *)&DAT_00413294,
                            (module_id *)"EventWriteTransfer");
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0x32;
  }
  else {
    guard_check_icall();
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar2;
}



// ===== ___vcrt_FlsAlloc @ 00402a5e (size 58) =====

/* Library Function - Single Match
    ___vcrt_FlsAlloc
   
   Library: Visual Studio 2015 Release */

void __cdecl ___vcrt_FlsAlloc(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = try_get_function(4,"FlsAlloc",(module_id *)&DAT_004132ac,(module_id *)"FlsAlloc");
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00402a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}



// ===== ___vcrt_FlsFree @ 00402a98 (size 58) =====

/* Library Function - Single Match
    ___vcrt_FlsFree
   
   Library: Visual Studio 2015 Release */

void __cdecl ___vcrt_FlsFree(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = try_get_function(5,"FlsFree",(module_id *)&DAT_004132c0,(module_id *)"FlsFree");
  if (pcVar1 == (code *)0x0) {
    TlsFree(param_1);
  }
  else {
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}



// ===== ___vcrt_FlsSetValue @ 00402ad2 (size 61) =====

/* Library Function - Single Match
    ___vcrt_FlsSetValue
   
   Library: Visual Studio 2015 Release */

void __cdecl ___vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = try_get_function(7,"FlsSetValue",(module_id *)&DAT_004132dc,(module_id *)"FlsSetValue");
  if (pcVar1 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}



// ===== ___vcrt_InitializeCriticalSectionEx @ 00402b0f (size 70) =====

/* Library Function - Single Match
    ___vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2015 Release */

void __cdecl
___vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = try_get_function(8,"InitializeCriticalSectionEx",(module_id *)&DAT_004132f0,
                            (module_id *)"InitializeCriticalSectionEx");
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}



// ===== FUN_00402b55 @ 00402b55 (size 36) =====

void FUN_00402b55(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  bVar1 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
  uVar2 = (0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_0041a004;
  puVar4 = &DAT_0041ab5c;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
  }
  return;
}



// ===== ___vcrt_uninitialize_winapi_thunks @ 00402b79 (size 50) =====

/* Library Function - Single Match
    ___vcrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___vcrt_uninitialize_winapi_thunks(char param_1)

{
  int *piVar1;
  
  if (param_1 == '\0') {
    piVar1 = &DAT_0041ab4c;
    do {
      if (*piVar1 != 0) {
        if (*piVar1 != -1) {
          FreeLibrary((HMODULE)*piVar1);
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != &DAT_0041ab5c);
  }
  return;
}



// ===== __local_unwind4 @ 00402bb0 (size 144) =====

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_00402c40;
  pvStack_28 = ExceptionList;
  local_20 = DAT_0041a004 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_00402f34();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



// ===== _EH4_CallFilterFunc @ 00402cae (size 23) =====

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



// ===== _EH4_TransferToHandler @ 00402cc5 (size 25) =====

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x00402cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== _EH4_GlobalUnwind2 @ 00402cde (size 25) =====

/* Library Function - Single Match
    @_EH4_GlobalUnwind2@8
   
   Libraries: Visual Studio 2010, Visual Studio 2012, Visual Studio 2015
   __fastcall _EH4_GlobalUnwind2,8 */

void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x402cf2,param_2,(PVOID)0x0);
  return;
}



// ===== _EH4_LocalUnwind @ 00402cf7 (size 23) =====

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



// ===== FUN_00402d0e @ 00402d0e (size 28) =====

void FUN_00402d0e(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &DAT_0041ab80)) {
    FID_conflict__free(param_1);
  }
  return;
}



// ===== ___vcrt_initialize_ptd @ 00402d2a (size 51) =====

/* Library Function - Single Match
    ___vcrt_initialize_ptd
   
   Library: Visual Studio 2015 Release */

uint ___vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = ___vcrt_FlsAlloc(FUN_00402d0e);
  DAT_0041a060 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = ___vcrt_FlsSetValue(uVar1,&DAT_0041ab80);
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize_ptd();
  }
  return uVar1 & 0xffffff00;
}



// ===== ___vcrt_uninitialize_ptd @ 00402d5d (size 27) =====

/* Library Function - Single Match
    ___vcrt_uninitialize_ptd
   
   Library: Visual Studio 2015 Release */

undefined4 ___vcrt_uninitialize_ptd(void)

{
  DWORD DVar1;
  
  DVar1 = DAT_0041a060;
  if (DAT_0041a060 != 0xffffffff) {
    DVar1 = ___vcrt_FlsFree(DAT_0041a060);
    DAT_0041a060 = 0xffffffff;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}



// ===== ___vcrt_initialize_locks @ 00402d78 (size 60) =====

/* Library Function - Single Match
    ___vcrt_initialize_locks
   
   Library: Visual Studio 2015 Release */

undefined4 ___vcrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  LPCRITICAL_SECTION p_Var3;
  
  p_Var3 = (LPCRITICAL_SECTION)&DAT_0041aba8;
  uVar2 = 0;
  do {
    iVar1 = ___vcrt_InitializeCriticalSectionEx(p_Var3,4000,0);
    if (iVar1 == 0) {
      uVar2 = ___vcrt_uninitialize_locks();
      return uVar2 & 0xffffff00;
    }
    DAT_0041abc0 = DAT_0041abc0 + 1;
    uVar2 = uVar2 + 0x18;
    p_Var3 = p_Var3 + 1;
  } while (uVar2 < 0x18);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



// ===== ___vcrt_uninitialize_locks @ 00402db4 (size 47) =====

/* Library Function - Single Match
    ___vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___vcrt_uninitialize_locks(void)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_0041abc0 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_0041ab90 + DAT_0041abc0 * 0x18);
    iVar1 = DAT_0041abc0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_0041abc0 = DAT_0041abc0 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      in_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



// ===== FUN_00402de3 @ 00402de3 (size 29) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402de3(void)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
  _DAT_0041abc4 = (0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_0041a004;
  return;
}



// ===== __global_unwind2 @ 00402e00 (size 32) =====

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x402e18,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// ===== __local_unwind2 @ 00402e65 (size 132) =====

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_00402e20;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_00402f34();
    }
  }
  ExceptionList = local_20;
  return;
}



// ===== __NLG_Notify @ 00402f15 (size 31) =====

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_0041a078 = param_1;
  DAT_0041a074 = in_EAX;
  DAT_0041a07c = unaff_EBP;
  return;
}



// ===== FUN_00402f34 @ 00402f34 (size 3) =====

void FUN_00402f34(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



// ===== ___acrt_iob_func @ 00402fff (size 16) =====

/* Library Function - Single Match
    ___acrt_iob_func
   
   Library: Visual Studio 2015 Release */

undefined * __cdecl ___acrt_iob_func(int param_1)

{
  return &DAT_0041a080 + param_1 * 0x38;
}



// ===== __lock_file @ 0040305b (size 20) =====

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2015 Release */

void __cdecl __lock_file(FILE *_File)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



// ===== __unlock_file @ 0040306f (size 20) =====

/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __unlock_file(FILE *_File)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



// ===== _LocaleUpdate @ 00403083 (size 131) =====

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  uint uVar1;
  undefined *puVar2;
  __acrt_ptd *p_Var3;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    if (DAT_0041ae58 != 0) {
      p_Var3 = FUN_00407993();
      *(__acrt_ptd **)this = p_Var3;
      *(int *)(this + 4) = *(int *)(p_Var3 + 0x4c);
      *(int *)(this + 8) = *(int *)(p_Var3 + 0x48);
      ___acrt_update_locale_info((int)p_Var3,(int *)(this + 4));
      ___acrt_update_multibyte_info(*(int *)this,(int *)(this + 8));
      uVar1 = *(uint *)(*(int *)this + 0x350);
      if ((uVar1 & 2) != 0) {
        return this;
      }
      *(uint *)(*(int *)this + 0x350) = uVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
      return this;
    }
    *(undefined **)(this + 4) = PTR_PTR_0041a228;
    puVar2 = PTR_DAT_0041a22c;
  }
  else {
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
    puVar2 = *(undefined **)(param_1 + 4);
  }
  *(undefined **)(this + 8) = puVar2;
  return this;
}



// ===== __wcsicmp @ 00403106 (size 149) =====

/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2015 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  wchar_t wVar4;
  
  if (DAT_0041ae58 != 0) {
    iVar3 = __wcsicmp_l(_Str1,_Str2,(_locale_t)0x0);
    return iVar3;
  }
  if ((_Str1 != (wchar_t *)0x0) && (_Str2 != (wchar_t *)0x0)) {
    iVar3 = (int)_Str1 - (int)_Str2;
    do {
      wVar4 = *(wchar_t *)(iVar3 + (int)_Str2);
      if ((0x40 < (ushort)wVar4) && ((ushort)wVar4 < 0x5b)) {
        wVar4 = wVar4 + L' ';
      }
      wVar1 = *_Str2;
      if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
        wVar1 = wVar1 + L' ';
      }
      _Str2 = _Str2 + 1;
    } while ((wVar4 != L'\0') && (wVar4 == wVar1));
    return (uint)(ushort)wVar4 - (uint)(ushort)wVar1;
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_00406b06();
  return 0x7fffffff;
}



// ===== __wcsicmp_l @ 0040319b (size 224) =====

/* Library Function - Single Match
    __wcsicmp_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __wcsicmp_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int *piVar3;
  int iVar4;
  int local_14;
  localeinfo_struct local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00406b06();
    iVar4 = 0x7fffffff;
  }
  else {
    if ((local_10.locinfo)->locale_name[2] == (wchar_t *)0x0) {
      iVar4 = (int)_Str1 - (int)_Str2;
      do {
        wVar1 = *(wchar_t *)(iVar4 + (int)_Str2);
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          wVar1 = wVar1 + L' ';
        }
        wVar2 = *_Str2;
        if ((0x40 < (ushort)wVar2) && ((ushort)wVar2 < 0x5b)) {
          wVar2 = wVar2 + L' ';
        }
        _Str2 = _Str2 + 1;
      } while ((wVar1 != L'\0') && (wVar1 == wVar2));
    }
    else {
      do {
        wVar1 = __towlower_l(*_Str1,&local_10);
        _Str1 = _Str1 + 1;
        wVar2 = __towlower_l(*_Str2,&local_10);
        _Str2 = _Str2 + 1;
        if (wVar1 == L'\0') break;
      } while (wVar1 == wVar2);
    }
    iVar4 = (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return iVar4;
}



// ===== operator()<> @ 0040327b (size 66) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_5be909dfbae0a631386585770cd7b676>,class <lambda_e516058a9c289d98c8ca9fea99247804> &,class
   <lambda_afe2e0cdc5e0ecf6f0d6f5e2f8985e38> >(class <lambda_5be909dfbae0a631386585770cd7b676>
   &&,class <lambda_e516058a9c289d98c8ca9fea99247804> &,class
   <lambda_afe2e0cdc5e0ecf6f0d6f5e2f8985e38> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_823d65812123d985753d53e2a8c25d20>,class <lambda_0a97c9e57da7be065955385c79108ff2> &,class
   <lambda_4d2973f3ad2d226f00468307185dca1b> >(class <lambda_823d65812123d985753d53e2a8c25d20>
   &&,class <lambda_0a97c9e57da7be065955385c79108ff2> &,class
   <lambda_4d2973f3ad2d226f00468307185dca1b> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_ab9923ffb5d694ec0d78876dd103e44f>,class <lambda_481dd5778c961fbcd3b60b650e9b9dc4> &,class
   <lambda_7923d86c9e3f319b415918ec4b39749c> >(class <lambda_ab9923ffb5d694ec0d78876dd103e44f>
   &&,class <lambda_481dd5778c961fbcd3b60b650e9b9dc4> &,class
   <lambda_7923d86c9e3f319b415918ec4b39749c> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_db08b09ef7aa9d4f8620ce68402612bc>,class <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> &,class
   <lambda_3ae262bc35d4ba6a3825c4f6bcaaf95c> >(class <lambda_db08b09ef7aa9d4f8620ce68402612bc>
   &&,class <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> &,class
   <lambda_3ae262bc35d4ba6a3825c4f6bcaaf95c> &&)
   
   Library: Visual Studio 2015 Release */

int operator()<>(undefined4 *param_1,<lambda_481dd5778c961fbcd3b60b650e9b9dc4> *param_2)

{
  int iVar1;
  
  __lock_file((FILE *)*param_1);
  iVar1 = <lambda_481dd5778c961fbcd3b60b650e9b9dc4>::operator()(param_2);
  FUN_004032c0();
  return iVar1;
}



// ===== FUN_004032c0 @ 004032c0 (size 12) =====

void FUN_004032c0(void)

{
  int unaff_EBP;
  
  __unlock_file((FILE *)**(undefined4 **)(unaff_EBP + 0x10));
  return;
}



// ===== __acrt_lock_stream_and_call<> @ 004032cc (size 40) =====

/* Library Function - Multiple Matches With Same Base Name
    int __cdecl __acrt_lock_stream_and_call<class <lambda_0a97c9e57da7be065955385c79108ff2> >(struct
   _iobuf * const,class <lambda_0a97c9e57da7be065955385c79108ff2> &&)
    int __cdecl __acrt_lock_stream_and_call<class <lambda_2565fc715a641e539f44ad02d6823606> >(struct
   _iobuf * const,class <lambda_2565fc715a641e539f44ad02d6823606> &&)
    int __cdecl __acrt_lock_stream_and_call<class <lambda_481dd5778c961fbcd3b60b650e9b9dc4> >(struct
   _iobuf * const,class <lambda_481dd5778c961fbcd3b60b650e9b9dc4> &&)
    int __cdecl __acrt_lock_stream_and_call<class <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> >(struct
   _iobuf * const,class <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> &&)
     8 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_stream_and_call<>(undefined4 param_1,<lambda_481dd5778c961fbcd3b60b650e9b9dc4> *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>(&local_10,param_2);
  return;
}



// ===== common_vsprintf<__crt_stdio_output::standard_base,wchar_t> @ 004032f4 (size 389) =====

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    int __cdecl common_vsprintf<class __crt_stdio_output::standard_base,wchar_t>(unsigned
   __int64,wchar_t * const,unsigned int,wchar_t const * const,struct __crt_locale_pointers *
   const,char * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_vsprintf<__crt_stdio_output::standard_base,wchar_t>
          (__uint64 param_1,wchar_t *param_2,uint param_3,wchar_t *param_4,
          __crt_locale_pointers *param_5,char *param_6)

{
  wchar_t *******pppppppwVar1;
  int *piVar2;
  int iVar3;
  int local_488;
  undefined1 local_484 [8];
  char local_47c;
  uint local_478;
  wchar_t *******local_474;
  uint local_470;
  uint local_46c;
  undefined4 local_468;
  wchar_t *******local_464;
  output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
  local_460 [64];
  formatting_buffer local_420 [1048];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  local_464 = (wchar_t *******)param_2;
  if ((param_4 == (wchar_t *)0x0) || ((param_3 != 0 && (param_2 == (wchar_t *)0x0)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00406b06();
    goto LAB_0040344b;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_488,param_5);
  pppppppwVar1 = local_464;
  local_478 = (uint)param_1 & 2;
  local_474 = local_464;
  local_470 = param_3;
  local_46c = 0;
  if (((param_1 & 2) != 0) || (local_468 = 0, local_464 == (wchar_t *******)0x0)) {
    local_468 = 1;
  }
  local_464 = (wchar_t *******)&local_474;
  output_processor<>(local_460,&local_464,(uint)param_1,param_1._4_4_,param_4,local_484,param_6);
  iVar3 = __crt_stdio_output::
          output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
          ::process(local_460);
  if (pppppppwVar1 != (wchar_t *******)0x0) {
    if ((param_1 & 1) == 0) {
      if (local_478 == 0) {
        if (param_3 != 0) {
          if (local_46c != param_3) goto LAB_00403420;
LAB_00403470:
          *(undefined2 *)((int)pppppppwVar1 + (param_3 - 1) * 2) = 0;
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar3) {
          if (local_46c == param_3) goto LAB_00403470;
          goto LAB_00403420;
        }
        *(undefined2 *)pppppppwVar1 = 0;
      }
    }
    else if (((param_3 != 0) || (iVar3 == 0)) && (local_46c != param_3)) {
LAB_00403420:
      *(undefined2 *)((int)pppppppwVar1 + local_46c * 2) = 0;
    }
  }
  __crt_stdio_output::formatting_buffer::~formatting_buffer(local_420);
  if (local_47c != '\0') {
    *(uint *)(local_488 + 0x350) = *(uint *)(local_488 + 0x350) & 0xfffffffd;
  }
LAB_0040344b:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



// ===== count<char> @ 00403479 (size 24) =====

/* Library Function - Single Match
    public: unsigned int __thiscall __crt_stdio_output::formatting_buffer::count<char>(void)const 
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

uint __thiscall __crt_stdio_output::formatting_buffer::count<char>(formatting_buffer *this)

{
  if (*(int *)(this + 0x404) == 0) {
    return 0x200;
  }
  return *(uint *)(this + 0x400) >> 1;
}



// ===== ensure_buffer_is_big_enough<char> @ 00403491 (size 134) =====

/* Library Function - Single Match
    public: bool __thiscall
   __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(unsigned int)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
          (formatting_buffer *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  formatting_buffer *local_8;
  
  local_8 = this;
  if (((uint)(0xffffffff / (ulonglong)param_1) & 0xfffffffe) < 2) {
    piVar2 = __errno();
    *piVar2 = 0xc;
    bVar3 = false;
  }
  else {
    uVar1 = param_1 * 2;
    if (((*(int *)(this + 0x404) == 0) && (uVar1 < 0x401)) || (uVar1 <= *(uint *)(this + 0x400))) {
      bVar3 = true;
    }
    else {
      local_8 = __malloc_base(uVar1);
      bVar3 = local_8 != (LPVOID)0x0;
      if (bVar3) {
        __crt_unique_heap_ptr<char,__crt_internal_free_policy>::operator=
                  ((__crt_unique_heap_ptr<char,__crt_internal_free_policy> *)(this + 0x404),
                   (__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *)&local_8);
        *(uint *)(this + 0x400) = uVar1;
      }
      FID_conflict__free(local_8);
    }
  }
  return bVar3;
}



// ===== is_wide_character_specifier<wchar_t> @ 00403517 (size 79) =====

/* Library Function - Single Match
    bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(unsigned
   __int64,wchar_t,enum __crt_stdio_output::length_modifier)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __cdecl
__crt_stdio_output::is_wide_character_specifier<wchar_t>
          (__uint64 param_1,wchar_t param_2,length_modifier param_3)

{
  bool bVar1;
  
  if (param_3 == 2) {
    return false;
  }
  if (((param_3 != 3) && (param_3 != 0xc)) && (param_3 != 0xd)) {
    bVar1 = false;
    if ((param_2 == L'c') || (param_2 == L's')) {
      bVar1 = true;
    }
    return ((param_1 & 4) != 0) == bVar1;
  }
  return true;
}



// ===== scratch_data<char> @ 00403566 (size 30) =====

/* Library Function - Single Match
    public: char * __thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

char * __thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(formatting_buffer *this)

{
  formatting_buffer *pfVar1;
  uint uVar2;
  
  pfVar1 = *(formatting_buffer **)(this + 0x404);
  uVar2 = count<char>(this);
  if (pfVar1 == (formatting_buffer *)0x0) {
    pfVar1 = this;
  }
  return (char *)(pfVar1 + uVar2);
}



// ===== type_case_integer_parse_into_buffer<> @ 00403584 (size 117) =====

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
     12 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __thiscall
type_case_integer_parse_into_buffer<>(void *this,uint param_1,uint param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  formatting_buffer *pfVar3;
  
  pfVar3 = *(formatting_buffer **)((int)this + 0x444);
  if (*(formatting_buffer **)((int)this + 0x444) == (formatting_buffer *)0x0) {
    pfVar3 = (formatting_buffer *)((int)this + 0x40);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>
                    ((formatting_buffer *)((int)this + 0x40));
  *(formatting_buffer **)((int)this + 0x34) = pfVar3 + (uVar1 - 1);
  while ((0 < *(int *)((int)this + 0x28) || (param_1 != 0))) {
    cVar2 = (char)(param_1 % param_2) + '0';
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
    if ('9' < cVar2) {
      cVar2 = cVar2 + ((param_3 == '\0') - 1U & 0xe0) + 0x27;
    }
    **(char **)((int)this + 0x34) = cVar2;
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
    param_1 = param_1 / param_2;
  }
  *(int *)((int)this + 0x38) = (int)(pfVar3 + (uVar1 - 1)) - *(int *)((int)this + 0x34);
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  return;
}



// ===== type_case_integer_parse_into_buffer<> @ 004035f9 (size 136) =====

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   __int64>(unsigned __int64,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
     12 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __thiscall
type_case_integer_parse_into_buffer<>(void *this,longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  char extraout_CL;
  char cVar2;
  formatting_buffer *pfVar3;
  
  pfVar3 = *(formatting_buffer **)((int)this + 0x444);
  if (*(formatting_buffer **)((int)this + 0x444) == (formatting_buffer *)0x0) {
    pfVar3 = (formatting_buffer *)((int)this + 0x40);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>
                    ((formatting_buffer *)((int)this + 0x40));
  *(formatting_buffer **)((int)this + 0x34) = pfVar3 + (uVar1 - 1);
  while( true ) {
    if ((*(int *)((int)this + 0x28) < 1) && (param_1 == 0)) break;
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
    param_1 = __aulldvrm((uint)param_1,(uint)((ulonglong)param_1 >> 0x20),param_2,0);
    cVar2 = extraout_CL + '0';
    if ('9' < cVar2) {
      cVar2 = cVar2 + ((param_3 == '\0') - 1U & 0xe0) + 0x27;
    }
    **(char **)((int)this + 0x34) = cVar2;
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
  }
  *(int *)((int)this + 0x38) = (int)(pfVar3 + (uVar1 - 1)) - *(int *)((int)this + 0x34);
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  return;
}



// ===== write_multiple_characters<__crt_stdio_output::stream_output_adapter<wchar_t>,char> @ 00403681 (size 49) =====

/* Library Function - Single Match
    void __cdecl __crt_stdio_output::write_multiple_characters<class
   __crt_stdio_output::stream_output_adapter<wchar_t>,char>(class
   __crt_stdio_output::stream_output_adapter<wchar_t> const &,char,int,int * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__crt_stdio_output::
write_multiple_characters<__crt_stdio_output::stream_output_adapter<wchar_t>,char>
          (stream_output_adapter<wchar_t> *param_1,char param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      stream_output_adapter<wchar_t>::write_character(param_1,(short)param_2,param_4);
      if (*param_4 == -1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}



// ===== write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char> @ 004036b2 (size 49) =====

/* Library Function - Single Match
    void __cdecl __crt_stdio_output::write_multiple_characters<class
   __crt_stdio_output::string_output_adapter<wchar_t>,char>(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,char,int,int * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__crt_stdio_output::
write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
          (string_output_adapter<wchar_t> *param_1,char param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      string_output_adapter<wchar_t>::write_character(param_1,(short)param_2,param_4);
      if (*param_4 == -1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}



// ===== common_data<wchar_t> @ 004036e3 (size 76) =====

/* Library Function - Single Match
    protected: __thiscall __crt_stdio_output::common_data<wchar_t>::common_data<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

common_data<wchar_t> * __thiscall
__crt_stdio_output::common_data<wchar_t>::common_data<wchar_t>(common_data<wchar_t> *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 0x32) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x30] = (common_data<wchar_t>)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (common_data<wchar_t>)0x0;
  *(undefined4 *)(this + 0x440) = 0;
  *(undefined4 *)(this + 0x444) = 0;
  return this;
}



// ===== output_adapter_data<> @ 0040372f (size 60) =====

/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall __crt_stdio_output::output_adapter_data<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >::output_adapter_data<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >(class
   __crt_stdio_output::stream_output_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
    protected: __thiscall __crt_stdio_output::output_adapter_data<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >::output_adapter_data<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

common_data<wchar_t> * __thiscall
output_adapter_data<>
          (void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  __crt_stdio_output::common_data<wchar_t>::common_data<wchar_t>(this);
  *(undefined4 *)((int)this + 0x448) = *param_1;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_6;
  return this;
}



// ===== output_processor<> @ 0040376b (size 53) =====

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
    public: __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

void * __thiscall
output_processor<>(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,
                  undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  
  output_adapter_data<>(this,param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined4 *)((int)this + 0x450) = 0;
  piVar1 = __errno();
  *(int **)((int)this + 0xc) = piVar1;
  return this;
}



// ===== ~formatting_buffer @ 004037a0 (size 26) =====

/* Library Function - Single Match
    public: __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(formatting_buffer *this)

{
  FID_conflict__free(*(void **)(this + 0x404));
  *(undefined4 *)(this + 0x404) = 0;
  return;
}



// ===== operator= @ 004037ba (size 36) =====

/* Library Function - Single Match
    public: class __crt_unique_heap_ptr<char,struct __crt_internal_free_policy> & __thiscall
   __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>::operator=(class
   __crt_unique_heap_ptr<char,struct __crt_internal_free_policy> &&)
   
   Library: Visual Studio 2015 Release */

__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> * __thiscall
__crt_unique_heap_ptr<char,__crt_internal_free_policy>::operator=
          (__crt_unique_heap_ptr<char,__crt_internal_free_policy> *this,
          __crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *param_1)

{
  FID_conflict__free(*(void **)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = 0;
  return (__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *)this;
}



// ===== operator() @ 004037de (size 189) =====

/* Library Function - Single Match
    public: int __thiscall <lambda_481dd5778c961fbcd3b60b650e9b9dc4>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_481dd5778c961fbcd3b60b650e9b9dc4>::operator()
          (<lambda_481dd5778c961fbcd3b60b650e9b9dc4> *this)

{
  FILE *pFVar1;
  uint uVar2;
  int iVar3;
  int local_47c;
  undefined1 local_478 [8];
  char local_470;
  undefined1 local_468;
  undefined3 uStack_467;
  undefined4 local_464;
  output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
  local_460 [64];
  formatting_buffer local_420 [1048];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pFVar1 = (FILE *)**(undefined4 **)this;
  uVar2 = ___acrt_stdio_begin_temporary_buffering_nolock(pFVar1);
  _local_468 = CONCAT31(uStack_467,(char)uVar2);
  _LocaleUpdate::_LocaleUpdate
            ((_LocaleUpdate *)&local_47c,(__crt_locale_pointers *)**(undefined4 **)(this + 4));
  local_464 = **(undefined4 **)this;
  output_processor<>(local_460,&local_464,**(undefined4 **)(this + 8),
                     (*(undefined4 **)(this + 8))[1],**(undefined4 **)(this + 0xc),local_478,
                     **(undefined4 **)(this + 0x10));
  __crt_stdio_output::
  output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
  ::process(local_460);
  __crt_stdio_output::formatting_buffer::~formatting_buffer(local_420);
  if (local_470 != '\0') {
    *(uint *)(local_47c + 0x350) = *(uint *)(local_47c + 0x350) & 0xfffffffd;
  }
  ___acrt_stdio_end_temporary_buffering_nolock((char)_local_468,pFVar1);
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



// ===== crop_zeroes @ 0040389b (size 87) =====

/* Library Function - Single Match
    void __cdecl __crt_stdio_output::crop_zeroes(char *,struct __crt_locale_pointers * const)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __cdecl __crt_stdio_output::crop_zeroes(char *param_1,__crt_locale_pointers *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  for (; (*param_1 != '\0' && (*param_1 != *(char *)**(undefined4 **)(*(int *)param_2 + 0x88)));
      param_1 = param_1 + 1) {
  }
  if (*param_1 != '\0') {
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar2 = param_1;
      if ((cVar1 == '\0') || (cVar1 == 'e')) break;
    } while (cVar1 != 'E');
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == *(char *)**(undefined4 **)(*(int *)param_2 + 0x88)) {
      pcVar2 = pcVar3 + -2;
    }
    do {
      cVar1 = *param_1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}



// ===== find_next_state @ 004038f2 (size 52) =====

/* Library Function - Multiple Matches With Same Base Name
    private: enum __crt_stdio_output::state __thiscall
   __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::find_next_state(wchar_t,enum
   __crt_stdio_output::state)const 
    private: enum __crt_stdio_output::state __thiscall
   __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::find_next_state(wchar_t,enum
   __crt_stdio_output::state)const 
   
   Library: Visual Studio 2015 Release */

byte find_next_state(ushort param_1,int param_2)

{
  uint uVar1;
  
  if ((ushort)(param_1 - 0x20) < 0x5b) {
    uVar1 = (byte)" Class Hierarchy Descriptor\'"[param_1 + 0x1c] & 0xf;
  }
  else {
    uVar1 = 0;
  }
  return (byte)(&DAT_00413a78)[uVar1 * 8 + param_2] >> 4;
}



// ===== force_decimal_point @ 00403926 (size 92) =====

/* Library Function - Single Match
    void __cdecl __crt_stdio_output::force_decimal_point(char *,struct __crt_locale_pointers *
   const)
   
   Library: Visual Studio 2015 Release */

void __cdecl __crt_stdio_output::force_decimal_point(char *param_1,__crt_locale_pointers *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  
  iVar2 = _tolower((int)*param_1);
  bVar4 = iVar2 == 0x65;
  while (!bVar4) {
    param_1 = param_1 + 1;
    iVar2 = _isdigit((uint)(byte)*param_1);
    bVar4 = iVar2 == 0;
  }
  iVar2 = _tolower((int)*param_1);
  if (iVar2 == 0x78) {
    param_1 = param_1 + 2;
  }
  bVar3 = *param_1;
  *param_1 = *(byte *)**(undefined4 **)(*(int *)param_2 + 0x88);
  do {
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    *param_1 = bVar3;
    bVar3 = bVar1;
  } while (*param_1 != 0);
  return;
}



// ===== parse_int_from_format_string @ 00403982 (size 94) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::parse_int_from_format_string(int *
   const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::parse_int_from_format_string(int *
   const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::parse_int_from_format_string(int * const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::parse_int_from_format_string(int * const)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

uint __thiscall parse_int_from_format_string(void *this,long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *local_8;
  
  piVar1 = *(int **)((int)this + 0xc);
  iVar2 = *piVar1;
  *piVar1 = 0;
  local_8 = (wchar_t *)0x0;
  lVar3 = _wcstol((wchar_t *)(*(int *)((int)this + 0x10) + -2),&local_8,10);
  *param_1 = lVar3;
  pwVar5 = *(wchar_t **)((int)this + 0xc);
  if ((*(int *)*(wchar_t **)((int)this + 0xc) == 0x22) ||
     (pwVar5 = local_8, local_8 < *(wchar_t **)((int)this + 0x10))) {
    uVar4 = (uint)pwVar5 & 0xffffff00;
  }
  else {
    *(wchar_t **)((int)this + 0x10) = local_8;
    uVar4 = CONCAT31((int3)((uint)local_8 >> 8),1);
  }
  if ((*piVar1 == 0) && (iVar2 != 0)) {
    *piVar1 = iVar2;
  }
  return uVar4;
}



// ===== process @ 004039e0 (size 254) =====

/* Library Function - Single Match
    public: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::process(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_stdio_output::
output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
::process(output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
          *this)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  
  bVar2 = __crt_strtox::c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)(this + 0x448));
  if (!bVar2) {
    return -1;
  }
  if (*(int *)(this + 0x10) == 0) {
LAB_00403a05:
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00406b06();
switchD_00403a51_default:
    iVar6 = -1;
  }
  else {
LAB_00403ac5:
    *(int *)(this + 0x450) = *(int *)(this + 0x450) + 1;
    if (*(int *)(this + 0x450) != 2) {
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
LAB_00403aae:
      sVar1 = **(short **)(this + 0x10);
      *(short *)(this + 0x32) = sVar1;
      if (sVar1 != 0) {
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
        if (*(int *)(this + 0x18) < 0) goto LAB_00403ac5;
        bVar3 = find_next_state(*(ushort *)(this + 0x32),*(int *)(this + 0x1c));
        iVar6 = CONCAT31(extraout_var,bVar3);
        *(int *)(this + 0x1c) = iVar6;
        if (iVar6 == 8) goto LAB_00403a05;
        switch(iVar6) {
        case 0:
          uVar7 = state_case_normal((int)this);
          cVar4 = (char)uVar7;
          break;
        case 1:
          *(undefined4 *)(this + 0x28) = 0xffffffff;
          *(undefined4 *)(this + 0x24) = 0;
          this[0x30] = (output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
                        )0x0;
          *(undefined4 *)(this + 0x20) = 0;
          *(undefined4 *)(this + 0x2c) = 0;
          this[0x3c] = (output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
                        )0x0;
          goto LAB_00403aae;
        case 2:
          uVar7 = state_case_flag((int)this);
          cVar4 = (char)uVar7;
          break;
        case 3:
          uVar7 = state_case_width(this);
          cVar4 = (char)uVar7;
          break;
        case 4:
          goto switchD_00403a51_caseD_4;
        case 5:
          uVar7 = state_case_precision(this);
          cVar4 = (char)uVar7;
          break;
        case 6:
          cVar4 = state_case_size(this);
          break;
        case 7:
          cVar4 = state_case_type(this);
          break;
        default:
          goto switchD_00403a51_default;
        }
        if (cVar4 == '\0') goto switchD_00403a51_default;
        goto LAB_00403aae;
      }
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
      goto LAB_00403ac5;
    }
    iVar6 = *(int *)(this + 0x18);
  }
  return iVar6;
switchD_00403a51_caseD_4:
  *(undefined4 *)(this + 0x28) = 0;
  goto LAB_00403aae;
}



// ===== process @ 00403b00 (size 254) =====

/* Library Function - Single Match
    public: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::process(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_stdio_output::
output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
::process(output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
          *this)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  
  bVar2 = __crt_strtox::c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)(this + 0x448));
  if (!bVar2) {
    return -1;
  }
  if (*(int *)(this + 0x10) == 0) {
LAB_00403b25:
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00406b06();
switchD_00403b71_default:
    iVar6 = -1;
  }
  else {
LAB_00403be5:
    *(int *)(this + 0x450) = *(int *)(this + 0x450) + 1;
    if (*(int *)(this + 0x450) != 2) {
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
LAB_00403bce:
      sVar1 = **(short **)(this + 0x10);
      *(short *)(this + 0x32) = sVar1;
      if (sVar1 != 0) {
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
        if (*(int *)(this + 0x18) < 0) goto LAB_00403be5;
        bVar3 = find_next_state(*(ushort *)(this + 0x32),*(int *)(this + 0x1c));
        iVar6 = CONCAT31(extraout_var,bVar3);
        *(int *)(this + 0x1c) = iVar6;
        if (iVar6 == 8) goto LAB_00403b25;
        switch(iVar6) {
        case 0:
          uVar7 = state_case_normal((int)this);
          cVar4 = (char)uVar7;
          break;
        case 1:
          *(undefined4 *)(this + 0x28) = 0xffffffff;
          *(undefined4 *)(this + 0x24) = 0;
          this[0x30] = (output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                        )0x0;
          *(undefined4 *)(this + 0x20) = 0;
          *(undefined4 *)(this + 0x2c) = 0;
          this[0x3c] = (output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                        )0x0;
          goto LAB_00403bce;
        case 2:
          uVar7 = state_case_flag((int)this);
          cVar4 = (char)uVar7;
          break;
        case 3:
          uVar7 = state_case_width(this);
          cVar4 = (char)uVar7;
          break;
        case 4:
          goto switchD_00403b71_caseD_4;
        case 5:
          uVar7 = state_case_precision(this);
          cVar4 = (char)uVar7;
          break;
        case 6:
          cVar4 = state_case_size(this);
          break;
        case 7:
          cVar4 = state_case_type(this);
          break;
        default:
          goto switchD_00403b71_default;
        }
        if (cVar4 == '\0') goto switchD_00403b71_default;
        goto LAB_00403bce;
      }
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
      goto LAB_00403be5;
    }
    iVar6 = *(int *)(this + 0x18);
  }
  return iVar6;
switchD_00403b71_caseD_4:
  *(undefined4 *)(this + 0x28) = 0;
  goto LAB_00403bce;
}



// ===== state_case_flag @ 00403c20 (size 61) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_flag(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_flag(void)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall state_case_flag(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x32);
  if (uVar1 == 0x20) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
    iVar2 = 0;
  }
  else if (uVar1 == 0x23) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
    iVar2 = 0;
  }
  else if (uVar1 == 0x2b) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    iVar2 = 0;
  }
  else if (uVar1 == 0x2d) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 4;
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 - 0x30;
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 8;
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



// ===== state_case_normal @ 00403c5d (size 31) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_normal(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_normal(void)
   
   Library: Visual Studio 2015 Release */

uint __fastcall state_case_normal(int param_1)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint uVar3;
  
  cVar1 = state_case_normal_common(param_1);
  if (cVar1 == '\0') {
    piVar2 = __errno();
    *piVar2 = 0x16;
    uVar3 = FUN_00406b06();
    return uVar3 & 0xffffff00;
  }
  return CONCAT31(extraout_var,1);
}



// ===== state_case_normal @ 00403c7c (size 31) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_normal(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_normal(void)
   
   Library: Visual Studio 2015 Release */

uint __fastcall state_case_normal(int param_1)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint uVar3;
  
  cVar1 = state_case_normal_common(param_1);
  if (cVar1 == '\0') {
    piVar2 = __errno();
    *piVar2 = 0x16;
    uVar3 = FUN_00406b06();
    return uVar3 & 0xffffff00;
  }
  return CONCAT31(extraout_var,1);
}



// ===== state_case_normal_common @ 00403c9b (size 27) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_normal_common(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_normal_common(void)
   
   Library: Visual Studio 2015 Release */

undefined1 __fastcall state_case_normal_common(int param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 1;
  __crt_stdio_output::stream_output_adapter<wchar_t>::write_character
            ((stream_output_adapter<wchar_t> *)(param_1 + 0x448),*(wchar_t *)(param_1 + 0x32),
             (int *)(param_1 + 0x18));
  return 1;
}



// ===== state_case_normal_common @ 00403cb6 (size 27) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_normal_common(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_normal_common(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __fastcall state_case_normal_common(int param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 1;
  __crt_stdio_output::string_output_adapter<wchar_t>::write_character
            ((string_output_adapter<wchar_t> *)(param_1 + 0x448),*(wchar_t *)(param_1 + 0x32),
             (int *)(param_1 + 0x18));
  return 1;
}



// ===== state_case_precision @ 00403cd1 (size 41) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_precision(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_precision(void)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall state_case_precision(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)((int)param_1 + 0x32) != 0x2a) {
    uVar2 = parse_int_from_format_string(param_1,(long *)((int)param_1 + 0x28));
    return uVar2;
  }
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + -4);
  *(int *)((int)param_1 + 0x28) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)((int)param_1 + 0x28) = 0xffffffff;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



// ===== state_case_size @ 00403cfa (size 380) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_size(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_size(void)
   
   Library: Visual Studio 2015 Release */

bool __fastcall
state_case_size(output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
                *param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  int *piVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x32);
  if (uVar1 == 0x46) {
    if ((*(uint *)param_1 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 7;
      bVar4 = __crt_stdio_output::
              output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
              ::state_case_type(param_1);
      return bVar4;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*(uint *)param_1 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 8;
LAB_00403d35:
      piVar5 = __errno();
      *piVar5 = 0x16;
      FUN_00406b06();
      return false;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) goto LAB_00403d35;
    if (uVar1 < 0x6b) {
      if (uVar1 == 0x6a) {
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
      else if (uVar1 == 0x49) {
        psVar3 = *(short **)(param_1 + 0x10);
        sVar2 = *psVar3;
        if ((sVar2 == 0x33) && (psVar3[1] == 0x32)) {
          *(undefined4 *)(param_1 + 0x2c) = 10;
          *(short **)(param_1 + 0x10) = psVar3 + 2;
        }
        else if ((sVar2 == 0x36) && (psVar3[1] == 0x34)) {
          *(undefined4 *)(param_1 + 0x2c) = 0xb;
          *(short **)(param_1 + 0x10) = psVar3 + 2;
        }
        else if ((((sVar2 == 100) || (sVar2 == 0x69)) || (sVar2 == 0x6f)) ||
                (((sVar2 == 0x75 || (sVar2 == 0x78)) || (sVar2 == 0x58)))) {
          *(undefined4 *)(param_1 + 0x2c) = 9;
        }
      }
      else if (uVar1 == 0x4c) {
        *(undefined4 *)(param_1 + 0x2c) = 8;
      }
      else if (uVar1 == 0x54) {
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
      }
      else if (uVar1 == 0x68) {
        if (**(short **)(param_1 + 0x10) == 0x68) {
          *(undefined4 *)(param_1 + 0x2c) = 1;
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x2c) = 2;
        }
      }
    }
    else if (uVar1 == 0x6c) {
      if (**(short **)(param_1 + 0x10) == 0x6c) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
        *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (uVar1 == 0x74) {
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    else if (uVar1 == 0x77) {
      *(undefined4 *)(param_1 + 0x2c) = 0xc;
    }
    else if (uVar1 == 0x7a) {
      *(undefined4 *)(param_1 + 0x2c) = 6;
    }
  }
  return true;
}



// ===== state_case_size @ 00403e76 (size 380) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_size(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_size(void)
   
   Library: Visual Studio 2015 Release */

bool __fastcall
state_case_size(output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                *param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  int *piVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x32);
  if (uVar1 == 0x46) {
    if ((*(uint *)param_1 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 7;
      bVar4 = __crt_stdio_output::
              output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
              ::state_case_type(param_1);
      return bVar4;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*(uint *)param_1 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 8;
LAB_00403eb1:
      piVar5 = __errno();
      *piVar5 = 0x16;
      FUN_00406b06();
      return false;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) goto LAB_00403eb1;
    if (uVar1 < 0x6b) {
      if (uVar1 == 0x6a) {
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
      else if (uVar1 == 0x49) {
        psVar3 = *(short **)(param_1 + 0x10);
        sVar2 = *psVar3;
        if ((sVar2 == 0x33) && (psVar3[1] == 0x32)) {
          *(undefined4 *)(param_1 + 0x2c) = 10;
          *(short **)(param_1 + 0x10) = psVar3 + 2;
        }
        else if ((sVar2 == 0x36) && (psVar3[1] == 0x34)) {
          *(undefined4 *)(param_1 + 0x2c) = 0xb;
          *(short **)(param_1 + 0x10) = psVar3 + 2;
        }
        else if ((((sVar2 == 100) || (sVar2 == 0x69)) || (sVar2 == 0x6f)) ||
                (((sVar2 == 0x75 || (sVar2 == 0x78)) || (sVar2 == 0x58)))) {
          *(undefined4 *)(param_1 + 0x2c) = 9;
        }
      }
      else if (uVar1 == 0x4c) {
        *(undefined4 *)(param_1 + 0x2c) = 8;
      }
      else if (uVar1 == 0x54) {
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
      }
      else if (uVar1 == 0x68) {
        if (**(short **)(param_1 + 0x10) == 0x68) {
          *(undefined4 *)(param_1 + 0x2c) = 1;
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x2c) = 2;
        }
      }
    }
    else if (uVar1 == 0x6c) {
      if (**(short **)(param_1 + 0x10) == 0x6c) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
        *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (uVar1 == 0x74) {
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    else if (uVar1 == 0x77) {
      *(undefined4 *)(param_1 + 0x2c) = 0xc;
    }
    else if (uVar1 == 0x7a) {
      *(undefined4 *)(param_1 + 0x2c) = 6;
    }
  }
  return true;
}



// ===== state_case_type @ 00403ff2 (size 605) =====

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_type(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
::state_case_type(output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
                  *this)

{
  output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
  *poVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  uVar9 = *(ushort *)(this + 0x32);
  if (uVar9 < 0x65) {
    if (uVar9 == 100) {
LAB_004040b1:
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
LAB_004040b5:
      cVar5 = '\0';
      uVar11 = 10;
LAB_004040b8:
      uVar11 = type_case_integer(this,uVar11,cVar5);
      cVar5 = (char)uVar11;
    }
    else if (uVar9 < 0x59) {
      if (uVar9 == 0x58) {
        cVar5 = '\x01';
LAB_0040405d:
        uVar11 = 0x10;
        goto LAB_004040b8;
      }
      if (uVar9 != 0x41) {
        if (uVar9 == 0x43) goto LAB_00404071;
        if (uVar9 < 0x45) goto LAB_0040423f;
        if (0x47 < uVar9) {
          if (uVar9 != 0x53) goto LAB_0040423f;
          goto LAB_00404045;
        }
      }
LAB_004040c1:
      uVar7 = type_case_a((uint *)this);
      cVar5 = (char)uVar7;
    }
    else if (uVar9 == 0x5a) {
      uVar7 = type_case_Z((__uint64 *)this);
      cVar5 = (char)uVar7;
    }
    else {
      if (uVar9 == 0x61) goto LAB_004040c1;
      if (uVar9 != 99) goto LAB_0040423f;
LAB_00404071:
      uVar7 = type_case_c_tchar((__uint64 *)this);
      cVar5 = (char)uVar7;
    }
  }
  else if (uVar9 < 0x71) {
    if (uVar9 == 0x70) {
      cVar5 = type_case_p(this);
    }
    else {
      if (uVar9 < 0x68) goto LAB_004040c1;
      if (uVar9 == 0x69) goto LAB_004040b1;
      if (uVar9 == 0x6e) {
        uVar11 = type_case_n((int)this);
        cVar5 = (char)uVar11;
      }
      else {
        if (uVar9 != 0x6f) goto LAB_0040423f;
        cVar5 = type_case_o(this);
      }
    }
  }
  else {
    if (uVar9 != 0x73) {
      if (uVar9 != 0x75) {
        if (uVar9 != 0x78) goto LAB_0040423f;
        cVar5 = '\0';
        goto LAB_0040405d;
      }
      goto LAB_004040b5;
    }
LAB_00404045:
    uVar7 = type_case_s((__uint64 *)this);
    cVar5 = (char)uVar7;
  }
  if ((cVar5 == '\0') ||
     (this[0x30] !=
      (output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
       )0x0)) goto LAB_0040423f;
  uVar11 = *(uint *)(this + 0x20);
  local_10 = 0;
  local_c = 0;
  if ((uVar11 >> 4 & 1) != 0) {
    if ((uVar11 >> 6 & 1) == 0) {
      if ((uVar11 & 1) == 0) {
        if ((uVar11 >> 1 & 1) == 0) goto LAB_0040413f;
        uVar9 = 0x20;
      }
      else {
        uVar9 = 0x2b;
      }
    }
    else {
      uVar9 = 0x2d;
    }
    local_10 = (uint)uVar9;
    iVar8 = 1;
  }
LAB_0040413f:
  sVar2 = *(short *)(this + 0x32);
  if (((sVar2 == 0x78) || (sVar2 == 0x58)) && ((uVar11 >> 5 & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((sVar2 == 0x61) || (sVar2 == 0x41)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar3) || (bVar4)) {
    *(undefined2 *)((int)&local_10 + iVar8 * 2) = 0x30;
    if ((sVar2 == 0x58) || (sVar2 == 0x41)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    *(short *)((int)&local_10 + iVar8 * 2 + 2) = (short)(char)((!bVar3 - 1U & 0xe0) + 0x78);
    iVar8 = iVar8 + 2;
  }
  iVar10 = (*(int *)(this + 0x24) - *(int *)(this + 0x38)) - iVar8;
  if ((uVar11 & 0xc) == 0) {
    write_multiple_characters<__crt_stdio_output::stream_output_adapter<wchar_t>,char>
              ((stream_output_adapter<wchar_t> *)(this + 0x448),' ',iVar10,(int *)(this + 0x18));
  }
  stream_output_adapter<wchar_t>::write_string
            ((stream_output_adapter<wchar_t> *)(this + 0x448),(wchar_t *)&local_10,iVar8,
             (int *)(this + 0x18),*(int **)(this + 0xc));
  poVar1 = this + 0x18;
  if (((*(uint *)(this + 0x20) >> 3 & 1) != 0) && ((*(uint *)(this + 0x20) >> 2 & 1) == 0)) {
    write_multiple_characters<__crt_stdio_output::stream_output_adapter<wchar_t>,char>
              ((stream_output_adapter<wchar_t> *)(this + 0x448),'0',iVar10,(int *)poVar1);
  }
  write_stored_string_tchar((uint)this);
  if ((-1 < *(int *)poVar1) && ((*(uint *)(this + 0x20) >> 2 & 1) != 0)) {
    write_multiple_characters<__crt_stdio_output::stream_output_adapter<wchar_t>,char>
              ((stream_output_adapter<wchar_t> *)(this + 0x448),' ',iVar10,(int *)poVar1);
  }
LAB_0040423f:
  uVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}



// ===== state_case_type @ 0040424f (size 605) =====

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_type(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
::state_case_type(output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                  *this)

{
  output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
  *poVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  uVar9 = *(ushort *)(this + 0x32);
  if (uVar9 < 0x65) {
    if (uVar9 == 100) {
LAB_0040430e:
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
LAB_00404312:
      cVar5 = '\0';
      uVar11 = 10;
LAB_00404315:
      uVar11 = type_case_integer(this,uVar11,cVar5);
      cVar5 = (char)uVar11;
    }
    else if (uVar9 < 0x59) {
      if (uVar9 == 0x58) {
        cVar5 = '\x01';
LAB_004042ba:
        uVar11 = 0x10;
        goto LAB_00404315;
      }
      if (uVar9 != 0x41) {
        if (uVar9 == 0x43) goto LAB_004042ce;
        if (uVar9 < 0x45) goto LAB_0040449c;
        if (0x47 < uVar9) {
          if (uVar9 != 0x53) goto LAB_0040449c;
          goto LAB_004042a2;
        }
      }
LAB_0040431e:
      uVar7 = type_case_a((uint *)this);
      cVar5 = (char)uVar7;
    }
    else if (uVar9 == 0x5a) {
      uVar7 = type_case_Z((__uint64 *)this);
      cVar5 = (char)uVar7;
    }
    else {
      if (uVar9 == 0x61) goto LAB_0040431e;
      if (uVar9 != 99) goto LAB_0040449c;
LAB_004042ce:
      uVar7 = type_case_c_tchar((__uint64 *)this);
      cVar5 = (char)uVar7;
    }
  }
  else if (uVar9 < 0x71) {
    if (uVar9 == 0x70) {
      cVar5 = type_case_p(this);
    }
    else {
      if (uVar9 < 0x68) goto LAB_0040431e;
      if (uVar9 == 0x69) goto LAB_0040430e;
      if (uVar9 == 0x6e) {
        uVar11 = type_case_n((int)this);
        cVar5 = (char)uVar11;
      }
      else {
        if (uVar9 != 0x6f) goto LAB_0040449c;
        cVar5 = type_case_o(this);
      }
    }
  }
  else {
    if (uVar9 != 0x73) {
      if (uVar9 != 0x75) {
        if (uVar9 != 0x78) goto LAB_0040449c;
        cVar5 = '\0';
        goto LAB_004042ba;
      }
      goto LAB_00404312;
    }
LAB_004042a2:
    uVar7 = type_case_s((__uint64 *)this);
    cVar5 = (char)uVar7;
  }
  if ((cVar5 == '\0') ||
     (this[0x30] !=
      (output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
       )0x0)) goto LAB_0040449c;
  uVar11 = *(uint *)(this + 0x20);
  local_10 = 0;
  local_c = 0;
  if ((uVar11 >> 4 & 1) != 0) {
    if ((uVar11 >> 6 & 1) == 0) {
      if ((uVar11 & 1) == 0) {
        if ((uVar11 >> 1 & 1) == 0) goto LAB_0040439c;
        uVar9 = 0x20;
      }
      else {
        uVar9 = 0x2b;
      }
    }
    else {
      uVar9 = 0x2d;
    }
    local_10 = (uint)uVar9;
    iVar8 = 1;
  }
LAB_0040439c:
  sVar2 = *(short *)(this + 0x32);
  if (((sVar2 == 0x78) || (sVar2 == 0x58)) && ((uVar11 >> 5 & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((sVar2 == 0x61) || (sVar2 == 0x41)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar3) || (bVar4)) {
    *(undefined2 *)((int)&local_10 + iVar8 * 2) = 0x30;
    if ((sVar2 == 0x58) || (sVar2 == 0x41)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    *(short *)((int)&local_10 + iVar8 * 2 + 2) = (short)(char)((!bVar3 - 1U & 0xe0) + 0x78);
    iVar8 = iVar8 + 2;
  }
  iVar10 = (*(int *)(this + 0x24) - *(int *)(this + 0x38)) - iVar8;
  if ((uVar11 & 0xc) == 0) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),' ',iVar10,(int *)(this + 0x18));
  }
  string_output_adapter<wchar_t>::write_string
            ((string_output_adapter<wchar_t> *)(this + 0x448),(wchar_t *)&local_10,iVar8,
             (int *)(this + 0x18),*(int **)(this + 0xc));
  poVar1 = this + 0x18;
  if (((*(uint *)(this + 0x20) >> 3 & 1) != 0) && ((*(uint *)(this + 0x20) >> 2 & 1) == 0)) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),'0',iVar10,(int *)poVar1);
  }
  write_stored_string_tchar((uint)this);
  if ((-1 < *(int *)poVar1) && ((*(uint *)(this + 0x20) >> 2 & 1) != 0)) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),' ',iVar10,(int *)poVar1);
  }
LAB_0040449c:
  uVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}



// ===== state_case_width @ 004044ac (size 44) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_width(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_width(void)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall state_case_width(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)((int)param_1 + 0x32) != 0x2a) {
    uVar2 = parse_int_from_format_string(param_1,(long *)((int)param_1 + 0x24));
    return uVar2;
  }
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + -4);
  *(int *)((int)param_1 + 0x24) = iVar1;
  if (iVar1 < 0) {
    *(uint *)((int)param_1 + 0x20) = *(uint *)((int)param_1 + 0x20) | 4;
    *(int *)((int)param_1 + 0x24) = -*(int *)((int)param_1 + 0x24);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



// ===== to_integer_size @ 004044d8 (size 42) =====

/* Library Function - Single Match
    unsigned int __cdecl __crt_stdio_output::to_integer_size(enum
   __crt_stdio_output::length_modifier)
   
   Library: Visual Studio 2015 Release */

uint __cdecl __crt_stdio_output::to_integer_size(length_modifier param_1)

{
  uint uStack_8;
  
  switch(param_1) {
  case 0:
  case 3:
  case 6:
  case 7:
  case 9:
  case 10:
    uStack_8 = 4;
    break;
  case 1:
    return 1;
  case 2:
    uStack_8 = 2;
    break;
  case 4:
  case 5:
  case 0xb:
    uStack_8 = 8;
    break;
  default:
    return 0;
  }
  return uStack_8;
}



// ===== type_case_Z @ 00404534 (size 99) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_Z(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined4 __fastcall type_case_Z(__uint64 *param_1)

{
  ushort *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  uVar4 = *(uint *)((int)param_1 + 0x14);
  puVar1 = *(ushort **)(uVar4 - 4);
  if ((puVar1 == (ushort *)0x0) || (iVar2 = *(int *)(puVar1 + 2), iVar2 == 0)) {
    *(char **)((int)param_1 + 0x34) = "(null)";
    *(undefined4 *)(param_1 + 7) = 6;
  }
  else {
    bVar3 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((int)param_1 + 0x32),
                       *(length_modifier *)((int)param_1 + 0x2c));
    *(int *)((int)param_1 + 0x34) = iVar2;
    uVar4 = (uint)*puVar1;
    if (bVar3) {
      uVar4 = (uint)(*puVar1 >> 1);
      *(uint *)(param_1 + 7) = uVar4;
      *(undefined1 *)((int)param_1 + 0x3c) = 1;
      goto LAB_00404591;
    }
    *(uint *)(param_1 + 7) = uVar4;
  }
  *(undefined1 *)((int)param_1 + 0x3c) = 0;
LAB_00404591:
  return CONCAT31((int3)(uVar4 >> 8),1);
}



// ===== type_case_a @ 00404597 (size 370) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall type_case_a(uint *param_1)

{
  formatting_buffer *this;
  char cVar1;
  bool bVar2;
  uint uVar3;
  formatting_buffer *pfVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined3 uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  __crt_locale_pointers *p_Var13;
  uint *local_c;
  uint *local_8;
  
  param_1[8] = param_1[8] | 0x10;
  if ((int)param_1[10] < 0) {
    if ((*(short *)((int)param_1 + 0x32) == 0x61) || (*(short *)((int)param_1 + 0x32) == 0x41)) {
      param_1[10] = 0xd;
    }
    else {
      param_1[10] = 6;
    }
  }
  else if ((param_1[10] == 0) &&
          ((*(short *)((int)param_1 + 0x32) == 0x67 || (*(short *)((int)param_1 + 0x32) == 0x47))))
  {
    param_1[10] = 1;
  }
  this = (formatting_buffer *)(param_1 + 0x10);
  local_c = param_1;
  local_8 = param_1;
  bVar2 = __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
                    (this,param_1[10] + 0x15d);
  if (!bVar2) {
    uVar3 = __crt_stdio_output::formatting_buffer::count<char>(this);
    param_1[10] = uVar3 - 0x15d;
  }
  pfVar4 = (formatting_buffer *)param_1[0x111];
  if ((formatting_buffer *)param_1[0x111] == (formatting_buffer *)0x0) {
    pfVar4 = this;
  }
  param_1[0xd] = (uint)pfVar4;
  param_1[5] = param_1[5] + 8;
  local_c = *(uint **)(param_1[5] - 8);
  local_8 = *(uint **)(param_1[5] - 4);
  uVar3 = __crt_stdio_output::formatting_buffer::count<char>(this);
  pfVar4 = (formatting_buffer *)param_1[0x111];
  if ((formatting_buffer *)param_1[0x111] == (formatting_buffer *)0x0) {
    pfVar4 = this;
  }
  p_Var13 = (__crt_locale_pointers *)param_1[2];
  iVar5 = (int)*(char *)((int)param_1 + 0x32);
  uVar12 = param_1[1];
  uVar11 = *param_1;
  uVar10 = param_1[10];
  pcVar6 = __crt_stdio_output::formatting_buffer::scratch_data<char>(this);
  uVar7 = __crt_stdio_output::formatting_buffer::count<char>(this);
  ___acrt_fp_format((double *)&local_c,(char *)pfVar4,uVar7,pcVar6,uVar3,iVar5,uVar10,uVar11,uVar12,
                    p_Var13);
  if (((param_1[8] >> 5 & 1) != 0) && (param_1[10] == 0)) {
    __crt_stdio_output::force_decimal_point
              ((char *)param_1[0xd],(__crt_locale_pointers *)param_1[2]);
  }
  if (((*(short *)((int)param_1 + 0x32) == 0x67) || (*(short *)((int)param_1 + 0x32) == 0x47)) &&
     ((param_1[8] >> 5 & 1) == 0)) {
    __crt_stdio_output::crop_zeroes((char *)param_1[0xd],(__crt_locale_pointers *)param_1[2]);
  }
  pcVar6 = (char *)param_1[0xd];
  if (*pcVar6 == '-') {
    param_1[8] = param_1[8] | 0x40;
    pcVar6 = pcVar6 + 1;
    param_1[0xd] = (uint)pcVar6;
  }
  pcVar9 = (char *)param_1[0xd];
  cVar1 = *pcVar9;
  uVar8 = (undefined3)((uint)pcVar6 >> 8);
  if (((cVar1 == 'i') || (cVar1 == 'I')) || ((cVar1 == 'n' || (cVar1 == 'N')))) {
    uVar8 = 0;
    *(undefined2 *)((int)param_1 + 0x32) = 0x73;
  }
  pcVar6 = pcVar9 + 1;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  param_1[0xe] = (int)pcVar9 - (int)pcVar6;
  return CONCAT31(uVar8,1);
}



// ===== type_case_c_tchar @ 00404709 (size 152) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall type_case_c_tchar(__uint64 *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined4 local_8;
  
  *(undefined1 *)((int)param_1 + 0x3c) = 1;
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  wVar1 = *(wchar_t *)(*(int *)((int)param_1 + 0x14) + -4);
  local_8 = param_1;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((int)param_1 + 0x32),
                     *(length_modifier *)((int)param_1 + 0x2c));
  pwVar5 = (wchar_t *)(param_1 + 8);
  if (bVar2) {
    pwVar4 = *(wchar_t **)((int)param_1 + 0x444);
    if (*(wchar_t **)((int)param_1 + 0x444) == (wchar_t *)0x0) {
      pwVar4 = pwVar5;
    }
    *pwVar4 = wVar1;
  }
  else {
    local_8 = (__uint64 *)(CONCAT22(local_8._2_2_,wVar1) & 0xffff00ff);
    pwVar4 = *(wchar_t **)((int)param_1 + 0x444);
    if (*(wchar_t **)((int)param_1 + 0x444) == (wchar_t *)0x0) {
      pwVar4 = pwVar5;
    }
    iVar3 = __mbtowc_l(pwVar4,(char *)&local_8,(*(_locale_t *)(param_1 + 1))->locinfo->lc_codepage,
                       *(_locale_t *)(param_1 + 1));
    if (iVar3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  pwVar4 = *(wchar_t **)((int)param_1 + 0x444);
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar5 = pwVar4;
  }
  *(wchar_t **)((int)param_1 + 0x34) = pwVar5;
  *(undefined4 *)(param_1 + 7) = 1;
  return CONCAT31((int3)((uint)pwVar4 >> 8),1);
}



// ===== type_case_integer @ 004047a1 (size 330) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

uint __thiscall type_case_integer(void *this,uint param_1,char param_2)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = __crt_stdio_output::to_integer_size(*(length_modifier *)((int)this + 0x2c));
  if (uVar1 == 1) {
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 4;
    if ((*(uint *)((int)this + 0x20) >> 4 & 1) == 0) {
      uVar4 = (uint)*(byte *)(*(int *)((int)this + 0x14) + -4);
    }
    else {
      uVar4 = (uint)*(char *)(*(int *)((int)this + 0x14) + -4);
    }
  }
  else if (uVar1 == 2) {
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 4;
    if ((*(uint *)((int)this + 0x20) >> 4 & 1) == 0) {
      uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x14) + -4);
    }
    else {
      uVar4 = (uint)*(short *)(*(int *)((int)this + 0x14) + -4);
    }
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 != 8) {
        piVar2 = __errno();
        *piVar2 = 0x16;
        uVar1 = FUN_00406b06();
        return uVar1 & 0xffffff00;
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 8;
      uVar4 = *(uint *)(*(int *)((int)this + 0x14) + -8);
      iVar5 = *(int *)(*(int *)((int)this + 0x14) + -4);
      goto LAB_00404852;
    }
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 4;
    if ((*(uint *)((int)this + 0x20) >> 4 & 1) == 0) {
      uVar4 = *(uint *)(*(int *)((int)this + 0x14) + -4);
      iVar5 = 0;
      goto LAB_00404852;
    }
    uVar4 = *(uint *)(*(int *)((int)this + 0x14) + -4);
  }
  iVar5 = (int)uVar4 >> 0x1f;
LAB_00404852:
  if ((((*(uint *)((int)this + 0x20) >> 4 & 1) != 0) && (iVar5 < 1)) && (iVar5 < 0)) {
    bVar6 = uVar4 != 0;
    uVar4 = -uVar4;
    iVar5 = -(iVar5 + (uint)bVar6);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x40;
  }
  if (*(int *)((int)this + 0x28) < 0) {
    *(undefined4 *)((int)this + 0x28) = 1;
  }
  else {
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffff7;
    if (0x200 < *(int *)((int)this + 0x28)) {
      *(undefined4 *)((int)this + 0x28) = 0x200;
    }
  }
  if (uVar4 == 0 && iVar5 == 0) {
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xffffffdf;
  }
  if (uVar1 == 8) {
    type_case_integer_parse_into_buffer<>(this,CONCAT44(iVar5,uVar4),param_1,param_2);
  }
  else {
    type_case_integer_parse_into_buffer<>(this,uVar4,param_1,param_2);
  }
  pcVar3 = (char *)(*(uint *)((int)this + 0x20) >> 7);
  if ((((uint)pcVar3 & 1) != 0) &&
     ((*(int *)((int)this + 0x38) == 0 || (pcVar3 = *(char **)((int)this + 0x34), *pcVar3 != '0'))))
  {
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
    **(undefined1 **)((int)this + 0x34) = 0x30;
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  }
  return CONCAT31((int3)((uint)pcVar3 >> 8),1);
}



// ===== type_case_n @ 004048eb (size 116) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_n(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

uint __fastcall type_case_n(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  puVar1 = *(uint **)(*(int *)(param_1 + 0x14) + -4);
  iVar2 = __get_printf_count_output();
  if (iVar2 == 0) {
LAB_00404904:
    piVar3 = __errno();
    *piVar3 = 0x16;
    uVar4 = FUN_00406b06();
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar4 = __crt_stdio_output::to_integer_size(*(length_modifier *)(param_1 + 0x2c));
    if (uVar4 == 1) {
      uVar4 = 0;
      *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 0x18);
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x18);
      *(ushort *)puVar1 = *(ushort *)(param_1 + 0x18);
    }
    else if (uVar4 == 4) {
      uVar4 = *(uint *)(param_1 + 0x18);
      *puVar1 = uVar4;
    }
    else {
      if (uVar4 != 8) goto LAB_00404904;
      uVar4 = *(uint *)(param_1 + 0x18);
      *puVar1 = uVar4;
      puVar1[1] = (int)uVar4 >> 0x1f;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  return uVar4;
}



// ===== type_case_o @ 0040495f (size 31) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_o(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_o(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_o(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_o(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __fastcall type_case_o(void *param_1)

{
  if ((*(uint *)((int)param_1 + 0x20) >> 5 & 1) != 0) {
    *(uint *)((int)param_1 + 0x20) = *(uint *)((int)param_1 + 0x20) | 0x80;
  }
  type_case_integer(param_1,8,'\0');
  return;
}



// ===== type_case_p @ 0040497e (size 24) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_p(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_p(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_p(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_p(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __fastcall type_case_p(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x28) = 8;
  *(undefined4 *)((int)param_1 + 0x2c) = 10;
  type_case_integer(param_1,0x10,'\x01');
  return;
}



// ===== type_case_s @ 00404996 (size 116) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_s(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined4 __fastcall type_case_s(__uint64 *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  uVar3 = (uint)param_1[5];
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + -4);
  *(int *)((int)param_1 + 0x34) = iVar1;
  if (uVar3 == 0xffffffff) {
    uVar3 = 0x7fffffff;
  }
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((int)param_1 + 0x32),
                     *(length_modifier *)((int)param_1 + 0x2c));
  if (bVar2) {
    if (iVar1 == 0) {
      *(wchar_t **)((int)param_1 + 0x34) = L"(null)";
    }
    *(undefined1 *)((int)param_1 + 0x3c) = 1;
    uVar3 = FUN_00407feb(*(short **)((int)param_1 + 0x34),uVar3);
  }
  else {
    if (iVar1 == 0) {
      *(char **)((int)param_1 + 0x34) = "(null)";
    }
    uVar3 = type_case_s_compute_narrow_string_length(param_1,uVar3);
  }
  *(uint *)(param_1 + 7) = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}



// ===== type_case_s_compute_narrow_string_length @ 00404a0a (size 64) =====

/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

int __thiscall type_case_s_compute_narrow_string_length(void *this,int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  pbVar1 = *(byte **)((int)this + 0x34);
  if (0 < param_1) {
    do {
      if (*pbVar1 == 0) {
        return iVar2;
      }
      if ((*(ushort *)(*(int *)**(undefined4 **)((int)this + 8) + (uint)*pbVar1 * 2) & 0x8000) != 0)
      {
        pbVar1 = pbVar1 + 1;
      }
      pbVar1 = pbVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return iVar2;
}



// ===== write_character @ 00404a4a (size 64) =====

/* Library Function - Single Match
    public: void __thiscall
   __crt_stdio_output::stream_output_adapter<wchar_t>::write_character(wchar_t,int * const)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_stdio_output::stream_output_adapter<wchar_t>::write_character
          (stream_output_adapter<wchar_t> *this,wchar_t param_1,int *param_2)

{
  wint_t wVar1;
  
  if ((((*(uint *)(*(int *)this + 0xc) >> 0xc & 1) == 0) || (*(int *)(*(int *)this + 4) != 0)) &&
     (wVar1 = __fputwc_nolock(param_1,*(FILE **)this), wVar1 == 0xffff)) {
    *param_2 = -1;
    return;
  }
  *param_2 = *param_2 + 1;
  return;
}



// ===== write_character @ 00404a8a (size 69) =====

/* Library Function - Single Match
    public: bool __thiscall
   __crt_stdio_output::string_output_adapter<wchar_t>::write_character(wchar_t,int * const)const 
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::string_output_adapter<wchar_t>::write_character
          (string_output_adapter<wchar_t> *this,wchar_t param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)this;
  if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 4)) {
    if (*(char *)(iVar1 + 0xc) == '\0') {
      *param_2 = -1;
    }
    else {
      *param_2 = *param_2 + 1;
    }
    uVar2 = *(undefined1 *)(*(int *)this + 0xc);
  }
  else {
    *param_2 = *param_2 + 1;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + 1;
    *(wchar_t *)**(undefined4 **)this = param_1;
    **(int **)this = **(int **)this + 2;
    uVar2 = 1;
  }
  return (bool)uVar2;
}



// ===== write_stored_string_tchar @ 00404acf (size 139) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall write_stored_string_tchar(uint param_1)

{
  int iVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  char *_SrcCh;
  int iVar2;
  uint local_8;
  
  local_8 = param_1;
  if ((*(char *)(param_1 + 0x3c) == '\0') && (0 < *(int *)(param_1 + 0x38))) {
    _SrcCh = *(char **)(param_1 + 0x34);
    iVar2 = 0;
    iVar1 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      do {
        local_8 = local_8 & 0xffff0000;
        iVar1 = __mbtowc_l((wchar_t *)&local_8,_SrcCh,
                           (*(_locale_t *)(param_1 + 8))->locinfo->lc_codepage,
                           *(_locale_t *)(param_1 + 8));
        if (iVar1 < 1) {
          *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
          break;
        }
        __crt_stdio_output::stream_output_adapter<wchar_t>::write_character
                  ((stream_output_adapter<wchar_t> *)(param_1 + 0x448),(wchar_t)local_8,
                   (int *)(param_1 + 0x18));
        _SrcCh = _SrcCh + iVar1;
        iVar2 = iVar2 + 1;
        iVar1 = extraout_EAX;
      } while (iVar2 != *(int *)(param_1 + 0x38));
    }
  }
  else {
    __crt_stdio_output::stream_output_adapter<wchar_t>::write_string
              ((stream_output_adapter<wchar_t> *)(param_1 + 0x448),*(wchar_t **)(param_1 + 0x34),
               *(int *)(param_1 + 0x38),(int *)(param_1 + 0x18),*(int **)(param_1 + 0xc));
    iVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



// ===== write_stored_string_tchar @ 00404b5a (size 139) =====

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall write_stored_string_tchar(uint param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EAX;
  char *_SrcCh;
  int iVar3;
  uint local_8;
  uint3 extraout_var;
  
  local_8 = param_1;
  if ((*(char *)(param_1 + 0x3c) == '\0') && (0 < *(int *)(param_1 + 0x38))) {
    _SrcCh = *(char **)(param_1 + 0x34);
    iVar3 = 0;
    iVar2 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      do {
        local_8 = local_8 & 0xffff0000;
        iVar1 = __mbtowc_l((wchar_t *)&local_8,_SrcCh,
                           (*(_locale_t *)(param_1 + 8))->locinfo->lc_codepage,
                           *(_locale_t *)(param_1 + 8));
        if (iVar1 < 1) {
          *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
          iVar2 = iVar1;
          break;
        }
        __crt_stdio_output::string_output_adapter<wchar_t>::write_character
                  ((string_output_adapter<wchar_t> *)(param_1 + 0x448),(wchar_t)local_8,
                   (int *)(param_1 + 0x18));
        iVar2 = (uint)extraout_var << 8;
        _SrcCh = _SrcCh + iVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != *(int *)(param_1 + 0x38));
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              ((string_output_adapter<wchar_t> *)(param_1 + 0x448),*(wchar_t **)(param_1 + 0x34),
               *(int *)(param_1 + 0x38),(int *)(param_1 + 0x18),*(int **)(param_1 + 0xc));
    iVar2 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



// ===== write_string @ 00404be5 (size 141) =====

/* Library Function - Single Match
    public: void __thiscall __crt_stdio_output::stream_output_adapter<wchar_t>::write_string(wchar_t
   const * const,int,int * const,int * const)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_stdio_output::stream_output_adapter<wchar_t>::write_string
          (stream_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,
          int *param_4)

{
  wchar_t *pwVar1;
  int iVar2;
  
  if (((*(uint *)(*(int *)this + 0xc) >> 0xc & 1) == 0) || (*(int *)(*(int *)this + 4) != 0)) {
    iVar2 = *param_4;
    *param_4 = 0;
    pwVar1 = param_1 + param_2;
    for (; param_1 != pwVar1; param_1 = param_1 + 1) {
      write_character(this,*param_1,param_3);
      if (*param_3 == -1) {
        if (*param_4 != 0x2a) break;
        write_character(this,L'?',param_3);
      }
    }
    if ((*param_4 == 0) && (iVar2 != 0)) {
      *param_4 = iVar2;
    }
  }
  else {
    *param_3 = *param_3 + param_2;
  }
  return;
}



// ===== write_string @ 00404c72 (size 154) =====

/* Library Function - Single Match
    public: void __thiscall __crt_stdio_output::string_output_adapter<wchar_t>::write_string(wchar_t
   const * const,int,int * const,int * const)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<wchar_t>::write_string
          (string_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,
          int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = *param_4;
  *param_4 = 0;
  puVar2 = *(undefined4 **)this;
  if (puVar2[2] == puVar2[1]) {
    if (*(char *)(puVar2 + 3) == '\0') {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + param_2;
    }
  }
  else {
    uVar3 = puVar2[1] - puVar2[2];
    if ((uint)param_2 <= uVar3) {
      uVar3 = param_2;
    }
    FUN_004114c0((uint *)*puVar2,(uint *)param_1,uVar3 * 2);
    **(int **)this = **(int **)this + uVar3 * 2;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + uVar3;
    if (*(char *)(*(int *)this + 0xc) == '\0') {
      if (uVar3 == param_2) {
        *param_3 = *param_3 + uVar3;
      }
      else {
        *param_3 = -1;
      }
    }
    else {
      *param_3 = *param_3 + param_2;
    }
  }
  if ((*param_4 == 0) && (iVar1 != 0)) {
    *param_4 = iVar1;
  }
  return;
}



// ===== FID_conflict:___stdio_common_vfprintf @ 00404d0c (size 119) =====

/* Library Function - Multiple Matches With Different Base Names
    ___stdio_common_vfprintf
    ___stdio_common_vfprintf_p
    ___stdio_common_vfprintf_s
    ___stdio_common_vfwprintf
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl
FID_conflict____stdio_common_vfprintf
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = param_6;
  local_c = param_5;
  local_1c = param_1;
  local_10 = param_4;
  local_8 = param_3;
  local_18 = param_2;
  if ((param_3 == 0) || (param_4 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
    uVar2 = 0xffffffff;
  }
  else {
    local_30 = &local_8;
    local_2c = &local_c;
    local_28 = &local_1c;
    local_24 = &local_10;
    local_20 = &local_14;
    uVar2 = __acrt_lock_stream_and_call<>
                      (param_3,(<lambda_481dd5778c961fbcd3b60b650e9b9dc4> *)&local_30);
  }
  return uVar2;
}



// ===== ___stdio_common_vswprintf @ 00404d83 (size 36) =====

/* Library Function - Single Match
    ___stdio_common_vswprintf
   
   Library: Visual Studio 2015 Release */

void __cdecl
___stdio_common_vswprintf
          (undefined4 param_1,undefined4 param_2,wchar_t *param_3,uint param_4,wchar_t *param_5,
          __crt_locale_pointers *param_6,char *param_7)

{
  common_vsprintf<__crt_stdio_output::standard_base,wchar_t>
            (CONCAT44(param_2,param_1),param_3,param_4,param_5,param_6,param_7);
  return;
}



// ===== __seh_filter_exe @ 00404da7 (size 371) =====

/* Library Function - Single Match
    __seh_filter_exe
   
   Library: Visual Studio 2015 Release */

void __cdecl __seh_filter_exe(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  __acrt_ptd *p_Var6;
  uint *puVar7;
  uint *puVar8;
  
  uVar5 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  p_Var6 = ___acrt_getptd_noexit();
  if (p_Var6 != (__acrt_ptd *)0x0) {
    puVar1 = *(uint **)p_Var6;
    for (puVar8 = puVar1; puVar8 != puVar1 + 0x24; puVar8 = puVar8 + 3) {
      if (*puVar8 == param_1) goto LAB_00404dea;
    }
    puVar8 = (uint *)0x0;
LAB_00404dea:
    if ((puVar8 != (uint *)0x0) && (pcVar2 = (code *)puVar8[2], pcVar2 != (code *)0x0)) {
      if (pcVar2 == (code *)0x5) {
        puVar8[2] = 0;
      }
      else if (pcVar2 != (code *)0x1) {
        uVar3 = *(undefined4 *)(p_Var6 + 4);
        *(undefined4 *)(p_Var6 + 4) = param_2;
        if (puVar8[1] == 8) {
          for (puVar7 = puVar1 + 9; puVar7 != puVar1 + 0x24; puVar7 = puVar7 + 3) {
            puVar7[2] = 0;
          }
          uVar4 = *(undefined4 *)(p_Var6 + 8);
          if (*puVar8 < 0xc0000092) {
            if (*puVar8 == 0xc0000091) {
              *(undefined4 *)(p_Var6 + 8) = 0x84;
            }
            else if (*puVar8 == 0xc000008d) {
              *(undefined4 *)(p_Var6 + 8) = 0x82;
            }
            else if (*puVar8 == 0xc000008e) {
              *(undefined4 *)(p_Var6 + 8) = 0x83;
            }
            else if (*puVar8 == 0xc000008f) {
              *(undefined4 *)(p_Var6 + 8) = 0x86;
            }
            else if (*puVar8 == 0xc0000090) {
              *(undefined4 *)(p_Var6 + 8) = 0x81;
            }
          }
          else if (*puVar8 == 0xc0000092) {
            *(undefined4 *)(p_Var6 + 8) = 0x8a;
          }
          else if (*puVar8 == 0xc0000093) {
            *(undefined4 *)(p_Var6 + 8) = 0x85;
          }
          else if (*puVar8 == 0xc00002b4) {
            *(undefined4 *)(p_Var6 + 8) = 0x8e;
          }
          else if (*puVar8 == 0xc00002b5) {
            *(undefined4 *)(p_Var6 + 8) = 0x8d;
          }
          (*(code *)PTR_guard_check_icall_00413124)(8,*(undefined4 *)(p_Var6 + 8));
          (*pcVar2)();
          *(undefined4 *)(p_Var6 + 8) = uVar4;
        }
        else {
          puVar8[2] = 0;
          (*(code *)PTR_guard_check_icall_00413124)(puVar8[1]);
          (*pcVar2)();
        }
        *(undefined4 *)(p_Var6 + 4) = uVar3;
      }
    }
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_00404f1a @ 00404f1a (size 6) =====

undefined4 FUN_00404f1a(void)

{
  return DAT_0041ac10;
}



// ===== FUN_00404f20 @ 00404f20 (size 15) =====

void __cdecl FUN_00404f20(undefined4 param_1)

{
  DAT_0041ac10 = param_1;
  return;
}



// ===== __crt_fast_encode_pointer<> @ 00404f2f (size 31) =====

/* Library Function - Multiple Matches With Same Base Name
    int (__cdecl*__cdecl __crt_fast_encode_pointer<int (__cdecl*)(void)>(int
   (__cdecl*const)(void)))(void)
    void (__cdecl** __cdecl __crt_fast_encode_pointer<void (__cdecl**)(void)>(void (__cdecl**
   const)(void)))(void)
   
   Library: Visual Studio 2015 Release */

uint __cdecl __crt_fast_encode_pointer<>(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_0041a004;
}



// ===== initialize @ 00404f4e (size 49) =====

/* Library Function - Single Match
    public: void __thiscall __crt_state_management::dual_state_global<wchar_t *
   *>::initialize(wchar_t * * const)
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_state_management::dual_state_global<wchar_t**>::initialize
          (dual_state_global<wchar_t**> *this,wchar_t **param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ~-(uint)(this + 4 < this) & (uint)(this + 4 + (3 - (int)this)) >> 2;
  if (uVar1 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *(wchar_t ***)this = param_1;
      this = this + 4;
    } while (uVar2 != uVar1);
  }
  return;
}



// ===== ___acrt_has_user_matherr @ 00404f7f (size 25) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_has_user_matherr
   
   Library: Visual Studio 2015 Release */

bool ___acrt_has_user_matherr(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_0041a004 & 0x1f;
  return (DAT_0041a004 ^ _DAT_0041ac14) >> bVar1 != 0 ||
         (DAT_0041a004 ^ _DAT_0041ac14) << 0x20 - bVar1 != 0;
}



// ===== FUN_00404f98 @ 00404f98 (size 20) =====

void __cdecl FUN_00404f98(wchar_t **param_1)

{
  __crt_state_management::dual_state_global<wchar_t**>::initialize
            ((dual_state_global<wchar_t**> *)&DAT_0041ac14,param_1);
  return;
}



// ===== ___acrt_invoke_user_matherr @ 00404fac (size 73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_invoke_user_matherr
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_invoke_user_matherr(undefined4 param_1)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  bVar2 = (byte)DAT_0041a004 & 0x1f;
  pcVar3 = (code *)((DAT_0041a004 ^ _DAT_0041ac14) >> bVar2 |
                   (DAT_0041a004 ^ _DAT_0041ac14) << 0x20 - bVar2);
  if (pcVar3 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00413124)(param_1);
    (*pcVar3)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___setusermatherr @ 00404ff5 (size 21) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___setusermatherr
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___setusermatherr(uint param_1)

{
  _DAT_0041ac14 = __crt_fast_encode_pointer<>(param_1);
  return;
}



// ===== common_configure_argv<wchar_t> @ 0040500a (size 287) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl common_configure_argv<wchar_t>(enum _crt_argv_mode)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_configure_argv<wchar_t>(_crt_argv_mode param_1)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  wchar_t **ppwVar4;
  int iVar5;
  uint local_10;
  wchar_t **local_c;
  uint local_8;
  
  if ((param_1 == 2) || (param_1 == 1)) {
    iVar5 = 0;
    GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_0041ac18,0x104);
    _DAT_0041ae54 = &DAT_0041ac18;
    if ((DAT_0041ae50 == (wchar_t *)0x0) || (pwVar3 = DAT_0041ae50, *DAT_0041ae50 == L'\0')) {
      pwVar3 = (wchar_t *)&DAT_0041ac18;
    }
    local_8 = 0;
    local_10 = 0;
    parse_command_line<wchar_t>(pwVar3,(wchar_t **)0x0,(wchar_t *)0x0,&local_8,&local_10);
    ppwVar2 = ___acrt_allocate_buffer_for_argv(local_8,local_10,2);
    ppwVar4 = ppwVar2;
    if (ppwVar2 == (wchar_t **)0x0) {
      piVar1 = __errno();
      iVar5 = 0xc;
      *piVar1 = 0xc;
    }
    else {
      parse_command_line<wchar_t>(pwVar3,ppwVar2,(wchar_t *)(ppwVar2 + local_8),&local_8,&local_10);
      if (param_1 == 1) {
        _DAT_0041ae40 = local_8 - 1;
        ppwVar4 = (wchar_t **)0x0;
        DAT_0041ae48 = ppwVar2;
      }
      else {
        local_c = (wchar_t **)0x0;
        iVar5 = FUN_004094b7((int *)ppwVar2,&local_c);
        ppwVar2 = local_c;
        if (iVar5 == 0) {
          _DAT_0041ae40 = 0;
          pwVar3 = *local_c;
          while (pwVar3 != (wchar_t *)0x0) {
            local_c = local_c + 1;
            _DAT_0041ae40 = _DAT_0041ae40 + 1;
            pwVar3 = *local_c;
          }
          local_c = (wchar_t **)0x0;
          iVar5 = 0;
          DAT_0041ae48 = ppwVar2;
        }
        FID_conflict__free(local_c);
        local_c = (wchar_t **)0x0;
      }
    }
    FID_conflict__free(ppwVar4);
  }
  else {
    piVar1 = __errno();
    iVar5 = 0x16;
    *piVar1 = 0x16;
    FUN_00406b06();
  }
  return iVar5;
}



// ===== parse_command_line<wchar_t> @ 00405129 (size 390) =====

/* Library Function - Single Match
    void __cdecl parse_command_line<wchar_t>(wchar_t *,wchar_t * *,wchar_t *,unsigned int *,unsigned
   int *)
   
   Library: Visual Studio 2015 Release */

void __cdecl
parse_command_line<wchar_t>
          (wchar_t *param_1,wchar_t **param_2,wchar_t *param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  bool bVar2;
  wchar_t wVar3;
  uint uVar4;
  
  bVar1 = false;
  bVar2 = false;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  do {
    wVar3 = L'\"';
    if (*param_1 == L'\"') {
      bVar1 = !bVar1;
      bVar2 = bVar1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (wchar_t *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      wVar3 = *param_1;
      if (wVar3 == L'\0') goto LAB_004051b5;
    }
    param_1 = param_1 + 1;
  } while ((bVar2) || ((wVar3 != L' ' && (wVar3 != L'\t'))));
  if (param_3 != (wchar_t *)0x0) {
    param_3[-1] = L'\0';
  }
LAB_004051b5:
  bVar1 = false;
  while (*param_1 != L'\0') {
    for (; (*param_1 == L' ' || (*param_1 == L'\t')); param_1 = param_1 + 1) {
    }
    if (*param_1 == L'\0') break;
    if (param_2 != (wchar_t **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar4 = 0;
      for (; *param_1 == L'\\'; param_1 = param_1 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*param_1 == L'\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar1) && (param_1[1] == L'\"')) {
            param_1 = param_1 + 1;
          }
          else {
            bVar1 = !bVar1;
            bVar2 = false;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (wchar_t *)0x0) {
          *param_3 = L'\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      wVar3 = *param_1;
      if ((wVar3 == L'\0') || ((!bVar1 && ((wVar3 == L' ' || (wVar3 == L'\t')))))) break;
      if (bVar2) {
        if (param_3 != (wchar_t *)0x0) {
          *param_3 = wVar3;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      param_1 = param_1 + 1;
    }
    if (param_3 != (wchar_t *)0x0) {
      *param_3 = L'\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = (wchar_t *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// ===== ___acrt_allocate_buffer_for_argv @ 004052af (size 85) =====

/* Library Function - Single Match
    ___acrt_allocate_buffer_for_argv
   
   Library: Visual Studio 2015 Release */

LPVOID __cdecl ___acrt_allocate_buffer_for_argv(uint param_1,uint param_2,uint param_3)

{
  LPVOID pvVar1;
  
  if ((param_1 < 0x3fffffff) && (param_2 < (uint)(0xffffffff / (ulonglong)param_3))) {
    if (param_2 * param_3 < param_1 * -4 - 1) {
      pvVar1 = __calloc_base(param_2 * param_3 + param_1 * 4,1);
      FID_conflict__free((void *)0x0);
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}



// ===== FUN_00405304 @ 00405304 (size 11) =====

void __cdecl FUN_00405304(_crt_argv_mode param_1)

{
  common_configure_argv<wchar_t>(param_1);
  return;
}



// ===== common_get_or_create_environment_nolock<wchar_t> @ 0040530f (size 47) =====

/* Library Function - Single Match
    wchar_t * * __cdecl common_get_or_create_environment_nolock<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

wchar_t ** __cdecl common_get_or_create_environment_nolock<wchar_t>(void)

{
  int iVar1;
  
  if (DAT_0041ae28 != (wchar_t **)0x0) {
    return DAT_0041ae28;
  }
  if ((DAT_0041ae24 != 0) && (iVar1 = common_initialize_environment_nolock<wchar_t>(), iVar1 == 0))
  {
    iVar1 = initialize_environment_by_cloning_nolock<wchar_t>();
    return (wchar_t **)(~-(uint)(iVar1 != 0) & (uint)DAT_0041ae28);
  }
  return (wchar_t **)0x0;
}



// ===== common_initialize_environment_nolock<wchar_t> @ 0040533e (size 84) =====

/* Library Function - Single Match
    int __cdecl common_initialize_environment_nolock<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_initialize_environment_nolock<wchar_t>(void)

{
  wchar_t *_Memory;
  wchar_t **ppwVar1;
  int iVar2;
  
  if (DAT_0041ae28 != 0) {
    return 0;
  }
  _Memory = (wchar_t *)___dcrt_get_wide_environment_from_os();
  if (_Memory == (wchar_t *)0x0) {
    iVar2 = -1;
  }
  else {
    ppwVar1 = (wchar_t **)FUN_00405392(_Memory);
    if (ppwVar1 == (wchar_t **)0x0) {
      iVar2 = -1;
    }
    else {
      DAT_0041ae2c = ppwVar1;
      __crt_state_management::dual_state_global<wchar_t**>::initialize
                ((dual_state_global<wchar_t**> *)&DAT_0041ae28,ppwVar1);
      iVar2 = 0;
    }
    FID_conflict__free((void *)0x0);
  }
  FID_conflict__free(_Memory);
  return iVar2;
}



// ===== FUN_00405392 @ 00405392 (size 249) =====

undefined4 * __cdecl FUN_00405392(wchar_t *param_1)

{
  uint _SizeInWords;
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined4 *local_8;
  
  iVar6 = 0;
  wVar1 = *param_1;
  pwVar3 = param_1;
  while (wVar1 != L'\0') {
    if (wVar1 != L'=') {
      iVar6 = iVar6 + 1;
    }
    pwVar5 = pwVar3;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    pwVar3 = pwVar3 + ((int)pwVar5 - (int)(pwVar3 + 1) >> 1) + 1;
    wVar1 = *pwVar3;
  }
  puVar2 = __calloc_base(iVar6 + 1,4);
  local_8 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
LAB_0040546d:
    puVar2 = (undefined4 *)0x0;
  }
  else {
    for (; *param_1 != L'\0'; param_1 = param_1 + _SizeInWords) {
      pwVar3 = param_1;
      do {
        wVar1 = *pwVar3;
        pwVar3 = pwVar3 + 1;
      } while (wVar1 != L'\0');
      _SizeInWords = ((int)pwVar3 - (int)(param_1 + 1) >> 1) + 1;
      if (*param_1 != L'=') {
        pwVar3 = __calloc_base(_SizeInWords,2);
        if (pwVar3 == (wchar_t *)0x0) {
          free_environment<>(puVar2);
          FID_conflict__free((void *)0x0);
          goto LAB_0040546d;
        }
        eVar4 = _wcscpy_s(pwVar3,_SizeInWords,param_1);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_8 = pwVar3;
        local_8 = local_8 + 1;
        FID_conflict__free((void *)0x0);
      }
    }
  }
  FID_conflict__free((void *)0x0);
  return puVar2;
}



// ===== free_environment<> @ 0040548c (size 47) =====

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * * const)
    void __cdecl free_environment<wchar_t>(wchar_t * * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl free_environment<>(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    _Memory = (void *)*param_1;
    puVar1 = param_1;
    while (_Memory != (void *)0x0) {
      FID_conflict__free(_Memory);
      puVar1 = puVar1 + 1;
      _Memory = (void *)*puVar1;
    }
    FID_conflict__free(param_1);
  }
  return;
}



// ===== initialize_environment_by_cloning_nolock<wchar_t> @ 004054bb (size 121) =====

/* Library Function - Single Match
    int __cdecl initialize_environment_by_cloning_nolock<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

int __cdecl initialize_environment_by_cloning_nolock<wchar_t>(void)

{
  uint cchWideChar;
  wchar_t *lpWideCharStr;
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_0041ae24;
  if (DAT_0041ae24 == (int *)0x0) {
    return -1;
  }
  while( true ) {
    if (*piVar2 == 0) {
      return 0;
    }
    cchWideChar = MultiByteToWideChar(0,0,(LPCSTR)*piVar2,-1,(LPWSTR)0x0,0);
    if (cchWideChar == 0) break;
    lpWideCharStr = __calloc_base(cchWideChar,2);
    if ((lpWideCharStr == (wchar_t *)0x0) ||
       (iVar1 = MultiByteToWideChar(0,0,(LPCSTR)*piVar2,-1,lpWideCharStr,cchWideChar), iVar1 == 0))
    {
      FID_conflict__free(lpWideCharStr);
      return -1;
    }
    FUN_0040a0a7(lpWideCharStr,0);
    FID_conflict__free((void *)0x0);
    piVar2 = piVar2 + 1;
  }
  return -1;
}



// ===== uninitialize<> @ 00405534 (size 64) =====

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_state_management::dual_state_global<char * *>::uninitialize<void
   (__cdecl&)(char * * &)>(void (__cdecl&)(char * * &))
    public: void __thiscall __crt_state_management::dual_state_global<wchar_t *
   *>::uninitialize<void (__cdecl&)(wchar_t * * &)>(void (__cdecl&)(wchar_t * * &))
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall uninitialize<>(void *this,undefined *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pvVar1 = (void *)((int)this + 4);
  for (; this != pvVar1; this = (void *)((int)this + 4)) {
    (*(code *)PTR_guard_check_icall_00413124)(this);
    (*(code *)param_1)();
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== uninitialize_environment_internal<> @ 00405574 (size 27) =====

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * * &)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * * &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl uninitialize_environment_internal<>(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != DAT_0041ae30) {
    free_environment<>((undefined4 *)*param_1);
  }
  return;
}



// ===== uninitialize_environment_internal<> @ 0040558f (size 27) =====

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * * &)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * * &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl uninitialize_environment_internal<>(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != DAT_0041ae2c) {
    free_environment<>((undefined4 *)*param_1);
  }
  return;
}



// ===== FUN_004055af @ 004055af (size 55) =====

void FUN_004055af(void)

{
  uninitialize<>(&DAT_0041ae24,uninitialize_environment_internal<>);
  uninitialize<>(&DAT_0041ae28,uninitialize_environment_internal<>);
  free_environment<>(DAT_0041ae30);
  free_environment<>(DAT_0041ae2c);
  return;
}



// ===== FUN_004055e6 @ 004055e6 (size 20) =====

void FUN_004055e6(void)

{
  if (DAT_0041ae2c == (wchar_t **)0x0) {
    DAT_0041ae2c = common_get_or_create_environment_nolock<wchar_t>();
  }
  return;
}



// ===== __initterm @ 004055ff (size 92) =====

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2015 Release */

void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  uVar3 = ~-(uint)(param_2 < param_1) & (uint)((int)param_2 + (3 - (int)param_1)) >> 2;
  if (uVar3 != 0) {
    do {
      pcVar1 = (code *)*param_1;
      if (pcVar1 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00413124)();
        (*pcVar1)();
      }
      param_1 = param_1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== __initterm_e @ 0040565b (size 69) =====

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2015 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00413124)();
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) break;
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== atexit_exception_filter @ 004056a0 (size 19) =====

/* Library Function - Single Match
    int __cdecl atexit_exception_filter(unsigned long)
   
   Library: Visual Studio 2015 Release */

int __cdecl atexit_exception_filter(ulong param_1)

{
  return (uint)(param_1 == 0xe06d7363);
}



// ===== common_exit @ 004056b3 (size 261) =====

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl common_exit(int,enum _crt_exit_cleanup_mode,enum _crt_exit_return_mode)
   
   Library: Visual Studio 2015 Release */

void __cdecl common_exit(int param_1,_crt_exit_cleanup_mode param_2,_crt_exit_return_mode param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *local_18;
  
  if ((param_3 == 0) && (bVar3 = is_managed_app(), bVar3)) {
    try_cor_exit_process(param_1);
  }
  ___acrt_lock(2);
  if (DAT_0041ae3c != '\0') goto LAB_0040578a;
  LOCK();
  DAT_0041ae34 = 1;
  UNLOCK();
  if (param_2 == 0) {
    bVar2 = (byte)DAT_0041a004 & 0x1f;
    bVar1 = 0x20 - bVar2 & 0x1f;
    if (DAT_0041ae38 != ((0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_0041a004)) {
      uVar4 = DAT_0041a004 ^ DAT_0041ae38;
      (*(code *)PTR_guard_check_icall_00413124)(0,0,0);
      (*(code *)(uVar4 >> bVar2 | uVar4 << 0x20 - bVar2))();
    }
LAB_0040574f:
    __execute_onexit_table();
  }
  else if (param_2 == 1) goto LAB_0040574f;
  if (param_2 == 0) {
    __initterm((undefined4 *)&DAT_00413150,(undefined4 *)&DAT_00413160);
  }
  __initterm((undefined4 *)&DAT_00413164,(undefined4 *)&DAT_00413168);
  if (param_3 == 0) {
    DAT_0041ae3c = '\x01';
  }
LAB_0040578a:
  FUN_004057bd();
  if (param_3 != 0) {
    FUN_00411229();
    return;
  }
  exit_or_terminate_process(param_1);
  atexit_exception_filter(*(ulong *)*local_18);
  return;
}



// ===== FUN_004057bd @ 004057bd (size 9) =====

void FUN_004057bd(void)

{
  ___acrt_unlock(2);
  return;
}



// ===== exit_or_terminate_process @ 004057cc (size 64) =====

/* Library Function - Single Match
    void __cdecl exit_or_terminate_process(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl exit_or_terminate_process(uint param_1)

{
  char cVar1;
  HANDLE hProcess;
  undefined4 in_ECX;
  uint uExitCode;
  
  cVar1 = ___acrt_is_packaged_app(in_ECX);
  if ((cVar1 != '\0') && ((*(uint *)((int)ProcessEnvironmentBlock + 0x68) >> 8 & 1) == 0)) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  try_cor_exit_process(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



// ===== try_cor_exit_process @ 0040580d (size 106) =====

/* Library Function - Single Match
    void __cdecl try_cor_exit_process(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl try_cor_exit_process(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  local_c = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",&local_c);
  if ((BVar1 != 0) && (pFVar2 = GetProcAddress(local_c,"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*(code *)PTR_guard_check_icall_00413124)(param_1);
    (*pFVar2)();
  }
  if (local_c != (HMODULE)0x0) {
    FreeLibrary(local_c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_00405877 @ 00405877 (size 15) =====

void __cdecl FUN_00405877(undefined4 param_1)

{
  DAT_0041ae38 = param_1;
  return;
}



// ===== FUN_00405886 @ 00405886 (size 15) =====

void FUN_00405886(void)

{
  common_exit(0,2,1);
  return;
}



// ===== __cexit @ 00405895 (size 15) =====

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2015 Release */

void __cdecl __cexit(void)

{
  common_exit(0,0,1);
  return;
}



// ===== __exit @ 004058a4 (size 22) =====

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2015 Release */

void __cdecl __exit(int param_1)

{
  common_exit(param_1,2,0);
  return;
}



// ===== __register_thread_local_exe_atexit_callback @ 004058ba (size 56) =====

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __register_thread_local_exe_atexit_callback
   
   Library: Visual Studio 2015 Release */

void __cdecl __register_thread_local_exe_atexit_callback(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  __acrt_ptd *p_Var3;
  
  bVar2 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
  if (DAT_0041ae38 == ((0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_0041a004)) {
    DAT_0041ae38 = __crt_fast_encode_pointer<>(param_1);
    return;
  }
  p_Var3 = FUN_00407993();
  pcVar1 = *(code **)(p_Var3 + 0xc);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00413124)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



// ===== _exit @ 004058f2 (size 22) =====

/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2015 Release */

void __cdecl _exit(int _Code)

{
  common_exit(_Code,0,0);
  return;
}



// ===== __set_fmode @ 00405908 (size 61) =====

/* Library Function - Single Match
    __set_fmode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl __set_fmode(int _Mode)

{
  int *piVar1;
  
  if (((_Mode != 0x4000) && (_Mode != 0x8000)) && (_Mode != 0x10000)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
    return 0x16;
  }
  LOCK();
  DAT_0041b2cc = _Mode;
  UNLOCK();
  return 0;
}



// ===== FUN_0040595e @ 0040595e (size 6) =====

undefined * FUN_0040595e(void)

{
  return &DAT_0041ae40;
}



// ===== FUN_00405964 @ 00405964 (size 6) =====

undefined4 * FUN_00405964(void)

{
  return &DAT_0041ae48;
}



// ===== ___acrt_set_locale_changed @ 0040596a (size 11) =====

/* Library Function - Single Match
    ___acrt_set_locale_changed
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_set_locale_changed(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0041ae58;
  LOCK();
  DAT_0041ae58 = 1;
  UNLOCK();
  return uVar1;
}



// ===== FUN_004059be @ 004059be (size 9) =====

void FUN_004059be(void)

{
  ___acrt_unlock(4);
  return;
}



// ===== __configthreadlocale @ 004059c7 (size 98) =====

/* Library Function - Single Match
    __configthreadlocale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __configthreadlocale(int _Flag)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  int *piVar3;
  uint uVar4;
  
  p_Var2 = FUN_00407993();
  uVar1 = *(uint *)(p_Var2 + 0x350);
  if (_Flag == -1) {
    DAT_0041a7b0 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        piVar3 = __errno();
        *piVar3 = 0x16;
        FUN_00406b06();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(p_Var2 + 0x350) = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}



// ===== FUN_00405a29 @ 00405a29 (size 6) =====

undefined4 FUN_00405a29(void)

{
  return DAT_0041ae5c;
}



// ===== __set_new_mode @ 00405a2f (size 47) =====

/* Library Function - Single Match
    __set_new_mode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl __set_new_mode(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = DAT_0041ae5c;
  if ((param_1 != 0) && (param_1 != 1)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00406b06();
    return 0xffffffff;
  }
  LOCK();
  DAT_0041ae5c = param_1;
  UNLOCK();
  return uVar1;
}



// ===== FUN_00405a5e @ 00405a5e (size 6) =====

undefined * FUN_00405a5e(void)

{
  return &DAT_0041ae60;
}



// ===== operator()<<lambda_800076c951b434888f4765a74a194fcc>,<lambda_4e60a939b0d047cfe11ddc22648dfba9>&,<lambda_6dbb1268764f43b569ce7b67e331d33a>_> @ 00405a64 (size 66) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_800076c951b434888f4765a74a194fcc>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &,class
   <lambda_6dbb1268764f43b569ce7b67e331d33a> >(class <lambda_800076c951b434888f4765a74a194fcc>
   &&,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &,class
   <lambda_6dbb1268764f43b569ce7b67e331d33a> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_800076c951b434888f4765a74a194fcc>,<lambda_4e60a939b0d047cfe11ddc22648dfba9>&,<lambda_6dbb1268764f43b569ce7b67e331d33a>_>
          (__crt_seh_guarded_call<int> *this,<lambda_800076c951b434888f4765a74a194fcc> *param_1,
          <lambda_4e60a939b0d047cfe11ddc22648dfba9> *param_2,
          <lambda_6dbb1268764f43b569ce7b67e331d33a> *param_3)

{
  int iVar1;
  
  ___acrt_lock(*(int *)param_1);
  iVar1 = <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(param_2);
  FUN_00405aa9();
  return iVar1;
}



// ===== FUN_00405aa9 @ 00405aa9 (size 12) =====

void FUN_00405aa9(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}



// ===== operator()<<lambda_995298e7d72eb4c2aab26c0585b3abe5>,<lambda_275893d493268fdec8709772e3fcec0e>&,<lambda_293819299cbf9a7022e18b56a874bb5c>_> @ 00405ab5 (size 66) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_995298e7d72eb4c2aab26c0585b3abe5>,class <lambda_275893d493268fdec8709772e3fcec0e> &,class
   <lambda_293819299cbf9a7022e18b56a874bb5c> >(class <lambda_995298e7d72eb4c2aab26c0585b3abe5>
   &&,class <lambda_275893d493268fdec8709772e3fcec0e> &,class
   <lambda_293819299cbf9a7022e18b56a874bb5c> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_995298e7d72eb4c2aab26c0585b3abe5>,<lambda_275893d493268fdec8709772e3fcec0e>&,<lambda_293819299cbf9a7022e18b56a874bb5c>_>
          (__crt_seh_guarded_call<int> *this,<lambda_995298e7d72eb4c2aab26c0585b3abe5> *param_1,
          <lambda_275893d493268fdec8709772e3fcec0e> *param_2,
          <lambda_293819299cbf9a7022e18b56a874bb5c> *param_3)

{
  int iVar1;
  
  ___acrt_lock(*(int *)param_1);
  iVar1 = <lambda_275893d493268fdec8709772e3fcec0e>::operator()(param_2);
  FUN_00405afa();
  return iVar1;
}



// ===== FUN_00405afa @ 00405afa (size 12) =====

void FUN_00405afa(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}



// ===== __acrt_lock_and_call<<lambda_275893d493268fdec8709772e3fcec0e>_> @ 00405b06 (size 40) =====

/* Library Function - Single Match
    int __cdecl __acrt_lock_and_call<class <lambda_275893d493268fdec8709772e3fcec0e> >(enum
   __acrt_lock_id,class <lambda_275893d493268fdec8709772e3fcec0e> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lock_and_call<<lambda_275893d493268fdec8709772e3fcec0e>_>
          (__acrt_lock_id param_1,<lambda_275893d493268fdec8709772e3fcec0e> *param_2)

{
  int iVar1;
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_995298e7d72eb4c2aab26c0585b3abe5>,<lambda_275893d493268fdec8709772e3fcec0e>&,<lambda_293819299cbf9a7022e18b56a874bb5c>_>
                    (&local_5,(<lambda_995298e7d72eb4c2aab26c0585b3abe5> *)&local_10,param_2,
                     (<lambda_293819299cbf9a7022e18b56a874bb5c> *)&local_c);
  return iVar1;
}



// ===== __acrt_lock_and_call<<lambda_4e60a939b0d047cfe11ddc22648dfba9>_> @ 00405b2e (size 40) =====

/* Library Function - Single Match
    int __cdecl __acrt_lock_and_call<class <lambda_4e60a939b0d047cfe11ddc22648dfba9> >(enum
   __acrt_lock_id,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lock_and_call<<lambda_4e60a939b0d047cfe11ddc22648dfba9>_>
          (__acrt_lock_id param_1,<lambda_4e60a939b0d047cfe11ddc22648dfba9> *param_2)

{
  int iVar1;
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_800076c951b434888f4765a74a194fcc>,<lambda_4e60a939b0d047cfe11ddc22648dfba9>&,<lambda_6dbb1268764f43b569ce7b67e331d33a>_>
                    (&local_5,(<lambda_800076c951b434888f4765a74a194fcc> *)&local_10,param_2,
                     (<lambda_6dbb1268764f43b569ce7b67e331d33a> *)&local_c);
  return iVar1;
}



// ===== operator() @ 00405b56 (size 288) =====

/* Library Function - Single Match
    public: int __thiscall <lambda_275893d493268fdec8709772e3fcec0e>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_275893d493268fdec8709772e3fcec0e>::operator()
          (<lambda_275893d493268fdec8709772e3fcec0e> *this)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  sbyte sVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *_Memory;
  uint local_18;
  
  uVar3 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  puVar8 = (uint *)**(int **)this;
  if (puVar8 != (uint *)0x0) {
    local_18 = DAT_0041a004 & 0x1f;
    sVar7 = (sbyte)local_18;
    _Memory = (uint *)((*puVar8 ^ DAT_0041a004) >> sVar7 | (*puVar8 ^ DAT_0041a004) << 0x20 - sVar7)
    ;
    puVar8 = (uint *)((puVar8[1] ^ DAT_0041a004) >> sVar7 |
                     (puVar8[1] ^ DAT_0041a004) << 0x20 - sVar7);
    if ((_Memory != (uint *)0x0) && (puVar9 = puVar8, _Memory != (uint *)0xffffffff)) {
      do {
        sVar7 = (sbyte)local_18;
        bVar2 = 0x20U - sVar7 & 0x1f;
        uVar4 = (0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_0041a004;
        do {
          puVar8 = puVar8 + -1;
          if (puVar8 < _Memory) {
            if (_Memory != (uint *)0xffffffff) {
              FID_conflict__free(_Memory);
            }
            bVar2 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
            uVar4 = (0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_0041a004;
            *(uint *)**(undefined4 **)this = uVar4;
            *(uint *)(**(int **)this + 4) = uVar4;
            *(uint *)(**(int **)this + 8) = uVar4;
            goto LAB_00405c67;
          }
        } while (*puVar8 == uVar4);
        uVar10 = *puVar8 ^ DAT_0041a004;
        *puVar8 = uVar4;
        (*(code *)PTR_guard_check_icall_00413124)();
        (*(code *)(uVar10 >> sVar7 | uVar10 << 0x20 - sVar7))();
        local_18 = DAT_0041a004 & 0x1f;
        uVar10 = *(uint *)**(int **)this ^ DAT_0041a004;
        uVar4 = ((uint *)**(int **)this)[1] ^ DAT_0041a004;
        sVar7 = (sbyte)local_18;
        puVar1 = (uint *)(uVar10 >> sVar7 | uVar10 << 0x20 - sVar7);
        puVar5 = (uint *)(uVar4 >> sVar7 | uVar4 << 0x20 - sVar7);
        if ((puVar1 != _Memory) || (puVar5 != puVar9)) {
          puVar8 = puVar5;
          _Memory = puVar1;
          puVar9 = puVar5;
        }
      } while( true );
    }
  }
LAB_00405c67:
  iVar6 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return iVar6;
}



// ===== operator() @ 00405c76 (size 321) =====

/* Library Function - Single Match
    public: int __thiscall <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()
          (<lambda_4e60a939b0d047cfe11ddc22648dfba9> *this)

{
  LPCVOID pvVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  byte bVar5;
  uint *puVar6;
  LPCVOID pvVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  
  puVar6 = (uint *)**(int **)this;
  if (puVar6 == (uint *)0x0) {
    return -1;
  }
  bVar5 = (byte)DAT_0041a004 & 0x1f;
  puVar10 = (uint *)((puVar6[1] ^ DAT_0041a004) >> bVar5 |
                    (puVar6[1] ^ DAT_0041a004) << 0x20 - bVar5);
  puVar8 = (uint *)((puVar6[2] ^ DAT_0041a004) >> bVar5 | (puVar6[2] ^ DAT_0041a004) << 0x20 - bVar5
                   );
  pvVar7 = (LPCVOID)((*puVar6 ^ DAT_0041a004) >> bVar5 | (*puVar6 ^ DAT_0041a004) << 0x20 - bVar5);
  pvVar1 = pvVar7;
  if (puVar10 != puVar8) goto LAB_00405d70;
  uVar9 = (int)puVar8 - (int)pvVar7 >> 2;
  uVar2 = 0x200;
  if (uVar9 < 0x201) {
    uVar2 = uVar9;
  }
  uVar2 = uVar2 + uVar9;
  if (uVar2 == 0) {
    uVar2 = 0x20;
  }
  if (uVar2 < uVar9) {
LAB_00405cf7:
    uVar2 = uVar9 + 4;
    pvVar1 = FUN_0040ab9a(pvVar7,uVar2,4);
    FID_conflict__free((void *)0x0);
    if (pvVar1 == (LPVOID)0x0) {
      return -1;
    }
  }
  else {
    pvVar1 = FUN_0040ab9a(pvVar7,uVar2,4);
    FID_conflict__free((void *)0x0);
    if (pvVar1 == (LPVOID)0x0) goto LAB_00405cf7;
  }
  puVar10 = (uint *)((int)pvVar1 + uVar9 * 4);
  puVar8 = (uint *)((int)pvVar1 + uVar2 * 4);
  bVar5 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
  uVar2 = (0U >> bVar5 | 0 << 0x20 - bVar5) ^ DAT_0041a004;
  uVar9 = ~-(uint)(puVar8 < puVar10) & (uint)((int)puVar8 + (3 - (int)puVar10)) >> 2;
  if (uVar9 != 0) {
    uVar3 = 0;
    puVar6 = puVar10;
    do {
      uVar3 = uVar3 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    } while (uVar3 != uVar9);
  }
LAB_00405d70:
  uVar2 = __crt_fast_encode_pointer<>(**(uint **)(this + 4));
  *puVar10 = uVar2;
  pvVar4 = __crt_fast_encode_pointer<void*>(pvVar1);
  *(void **)**(undefined4 **)this = pvVar4;
  pvVar4 = __crt_fast_encode_pointer<void*>(puVar10 + 1);
  *(void **)(**(int **)this + 4) = pvVar4;
  pvVar4 = __crt_fast_encode_pointer<void*>(puVar8);
  *(void **)(**(int **)this + 8) = pvVar4;
  return 0;
}



// ===== __crt_atexit @ 00405db7 (size 22) =====

/* Library Function - Single Match
    __crt_atexit
   
   Library: Visual Studio 2015 Release */

void __crt_atexit(void)

{
  __register_onexit_function();
  return;
}



// ===== __execute_onexit_table @ 00405dcd (size 29) =====

/* Library Function - Single Match
    __execute_onexit_table
   
   Library: Visual Studio 2015 Release */

void __execute_onexit_table(void)

{
  undefined1 *local_8;
  
  local_8 = &stack0x00000004;
  __acrt_lock_and_call<<lambda_275893d493268fdec8709772e3fcec0e>_>
            (2,(<lambda_275893d493268fdec8709772e3fcec0e> *)&local_8);
  return;
}



// ===== __initialize_onexit_table @ 00405dea (size 61) =====

/* Library Function - Single Match
    __initialize_onexit_table
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl __initialize_onexit_table(uint *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*param_1 == param_1[2]) {
      bVar1 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
      uVar3 = (0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_0041a004;
      *param_1 = uVar3;
      param_1[1] = uVar3;
      param_1[2] = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ===== __register_onexit_function @ 00405e27 (size 36) =====

/* Library Function - Single Match
    __register_onexit_function
   
   Library: Visual Studio 2015 Release */

void __register_onexit_function(void)

{
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_c = &stack0x00000004;
  local_8 = &stack0x00000008;
  __acrt_lock_and_call<<lambda_4e60a939b0d047cfe11ddc22648dfba9>_>
            (2,(<lambda_4e60a939b0d047cfe11ddc22648dfba9> *)&local_c);
  return;
}



// ===== FUN_00405e77 @ 00405e77 (size 3) =====

undefined1 FUN_00405e77(void)

{
  return 1;
}



// ===== ___acrt_initialize @ 00405f3f (size 18) =====

/* Library Function - Single Match
    ___acrt_initialize
   
   Library: Visual Studio 2015 Release */

void ___acrt_initialize(void)

{
  ___acrt_execute_initializers(&PTR_LAB_00413bb8,&DAT_00413c30);
  return;
}



// ===== ___acrt_uninitialize @ 00405f51 (size 18) =====

/* Library Function - Single Match
    ___acrt_uninitialize
   
   Library: Visual Studio 2015 Release */

void ___acrt_uninitialize(void)

{
  ___acrt_execute_uninitializers(&PTR_LAB_00413bb8,&DAT_00413c30);
  return;
}



// ===== __controlfp_s @ 00405f63 (size 95) =====

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  int *piVar1;
  errno_t eVar2;
  uint uVar3;
  
  uVar3 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar3 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar3);
    }
    else {
      uVar3 = __control87(_NewValue,uVar3);
      *_CurrentState = uVar3;
    }
    eVar2 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar3 = __control87(0,0);
      *_CurrentState = uVar3;
    }
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_00406b06();
  }
  return eVar2;
}



// ===== FUN_00405fc2 @ 00405fc2 (size 52) =====

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

void FUN_00405fc2(void)

{
  code *pcVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = FUN_00407993();
  pcVar1 = *(code **)(p_Var2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00413124)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



// ===== FID_conflict:_free @ 00405ffe (size 58) =====

/* Library Function - Multiple Matches With Different Base Names
    __free_base
    _free
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __cdecl FID_conflict__free(void *_Memory)

{
  BOOL BVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (void *)0x0) {
    BVar1 = HeapFree(DAT_0041b2d8,0,_Memory);
    if (BVar1 == 0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = FID_conflict____acrt_errno_from_os_error(DVar3);
      *piVar2 = iVar4;
    }
  }
  return;
}



// ===== __malloc_base @ 00406038 (size 78) =====

/* Library Function - Single Match
    __malloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID __cdecl __malloc_base(size_t param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int *piVar3;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_0041b2d8,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_00405a29();
    } while ((iVar1 != 0) && (iVar1 = __callnewh(param_1), iVar1 != 0));
  }
  piVar3 = __errno();
  *piVar3 = 0xc;
  return (LPVOID)0x0;
}



// ===== _strcpy_s @ 00406086 (size 90) =====

/* Library Function - Single Match
    _strcpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar3 = _Dst;
      do {
        cVar1 = pcVar3[(int)_Src - (int)_Dst];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      iVar4 = 0x22;
      goto LAB_004060ab;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  iVar4 = 0x16;
LAB_004060ab:
  *piVar2 = iVar4;
  FUN_00406b06();
  return iVar4;
}



// ===== _abort @ 004060e0 (size 67) =====

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2015 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = ___acrt_get_sigabrt_handler();
  if (iVar2 != 0) {
    _raise(0x16);
  }
  if ((DAT_0041a128 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    ___acrt_call_reportfault(3,0x40000015,1);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== __calloc_base @ 00406123 (size 93) =====

/* Library Function - Single Match
    __calloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID __cdecl __calloc_base(uint param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  int *piVar3;
  size_t dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_0041b2d8,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_00405a29();
    } while ((iVar1 != 0) && (iVar1 = __callnewh(dwBytes), iVar1 != 0));
  }
  piVar3 = __errno();
  *piVar3 = 0xc;
  return (LPVOID)0x0;
}



// ===== is_overflow_condition<unsigned_long> @ 00406180 (size 51) =====

/* Library Function - Single Match
    bool __cdecl __crt_strtox::is_overflow_condition<unsigned long>(unsigned int,unsigned long)
   
   Library: Visual Studio 2015 Release */

bool __cdecl __crt_strtox::is_overflow_condition<unsigned_long>(uint param_1,ulong param_2)

{
  if (((param_1 & 4) == 0) &&
     (((param_1 & 1) == 0 ||
      ((((param_1 & 2) == 0 || (param_2 < 0x80000001)) &&
       (((param_1 & 2) != 0 || (param_2 < 0x80000000)))))))) {
    return false;
  }
  return true;
}



// ===== parse_integer<unsigned_long,__crt_strtox::c_string_character_source<wchar_t>_> @ 004061b3 (size 1765) =====

/* Library Function - Single Match
    unsigned long __cdecl __crt_strtox::parse_integer<unsigned long,class
   __crt_strtox::c_string_character_source<wchar_t> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<wchar_t>,int,bool)
   
   Library: Visual Studio 2015 Release */

ulong __cdecl
__crt_strtox::parse_integer<unsigned_long,__crt_strtox::c_string_character_source<wchar_t>_>
          (__crt_locale_pointers *param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,
          char param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  wchar_t wVar9;
  int local_20 [3];
  char local_14;
  wchar_t *local_10;
  uint local_c;
  undefined4 local_8;
  
  bVar1 = c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)&param_2);
  if (bVar1) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_20,param_1);
      local_c = 0;
      local_10 = param_2;
      do {
        wVar9 = *param_2;
        param_2 = param_2 + 1;
        iVar3 = _iswctype(wVar9,8);
      } while (iVar3 != 0);
      uVar7 = (uint)(param_5 != '\0');
      if (wVar9 == L'-') {
        uVar7 = uVar7 | 2;
LAB_0040624c:
        wVar9 = *param_2;
        param_2 = param_2 + 1;
      }
      else if (wVar9 == L'+') goto LAB_0040624c;
      uVar6 = (uint)(ushort)wVar9;
      local_8 = 0x19;
      if ((param_4 != 0) && (param_4 != 0x10)) goto LAB_00406554;
      if ((ushort)wVar9 < 0x30) goto LAB_004064d7;
      if ((ushort)wVar9 < 0x3a) {
        iVar3 = uVar6 - 0x30;
LAB_004064d2:
        if (iVar3 == -1) goto LAB_004064d7;
      }
      else {
        if (0xff0f < (ushort)wVar9) {
          if ((ushort)wVar9 < 0xff1a) {
            iVar3 = uVar6 - 0xff10;
          }
          else {
            iVar3 = -1;
          }
          goto LAB_004064d2;
        }
        if (0x65f < (ushort)wVar9) {
          if ((ushort)wVar9 < 0x66a) {
            iVar3 = uVar6 - 0x660;
          }
          else {
            if ((ushort)wVar9 < 0x6f0) goto LAB_004064d7;
            if ((ushort)wVar9 < 0x6fa) {
              iVar3 = uVar6 - 0x6f0;
            }
            else {
              if ((ushort)wVar9 < 0x966) goto LAB_004064d7;
              if ((ushort)wVar9 < 0x970) {
                iVar3 = uVar6 - 0x966;
              }
              else {
                if ((ushort)wVar9 < 0x9e6) goto LAB_004064d7;
                if ((ushort)wVar9 < 0x9f0) {
                  iVar3 = uVar6 - 0x9e6;
                }
                else {
                  if ((ushort)wVar9 < 0xa66) goto LAB_004064d7;
                  if ((ushort)wVar9 < 0xa70) {
                    iVar3 = uVar6 - 0xa66;
                  }
                  else {
                    if ((ushort)wVar9 < 0xae6) goto LAB_004064d7;
                    if ((ushort)wVar9 < 0xaf0) {
                      iVar3 = uVar6 - 0xae6;
                    }
                    else {
                      if ((ushort)wVar9 < 0xb66) goto LAB_004064d7;
                      if ((ushort)wVar9 < 0xb70) {
                        iVar3 = uVar6 - 0xb66;
                      }
                      else {
                        if ((ushort)wVar9 < 0xc66) goto LAB_004064d7;
                        if ((ushort)wVar9 < 0xc70) {
                          iVar3 = uVar6 - 0xc66;
                        }
                        else {
                          if ((ushort)wVar9 < 0xce6) goto LAB_004064d7;
                          if ((ushort)wVar9 < 0xcf0) {
                            iVar3 = uVar6 - 0xce6;
                          }
                          else {
                            if ((ushort)wVar9 < 0xd66) goto LAB_004064d7;
                            if ((ushort)wVar9 < 0xd70) {
                              iVar3 = uVar6 - 0xd66;
                            }
                            else {
                              if ((ushort)wVar9 < 0xe50) goto LAB_004064d7;
                              if ((ushort)wVar9 < 0xe5a) {
                                iVar3 = uVar6 - 0xe50;
                              }
                              else {
                                if ((ushort)wVar9 < 0xed0) goto LAB_004064d7;
                                if ((ushort)wVar9 < 0xeda) {
                                  iVar3 = uVar6 - 0xed0;
                                }
                                else {
                                  if ((ushort)wVar9 < 0xf20) goto LAB_004064d7;
                                  if ((ushort)wVar9 < 0xf2a) {
                                    iVar3 = uVar6 - 0xf20;
                                  }
                                  else {
                                    if ((ushort)wVar9 < 0x1040) goto LAB_004064d7;
                                    if ((ushort)wVar9 < 0x104a) {
                                      iVar3 = uVar6 - 0x1040;
                                    }
                                    else {
                                      if ((ushort)wVar9 < 0x17e0) goto LAB_004064d7;
                                      if ((ushort)wVar9 < 0x17ea) {
                                        iVar3 = uVar6 - 0x17e0;
                                      }
                                      else {
                                        if (((ushort)wVar9 < 0x1810) || (0x1819 < (ushort)wVar9))
                                        goto LAB_004064d7;
                                        iVar3 = uVar6 - 0x1810;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_004064d2;
        }
LAB_004064d7:
        if ((((ushort)wVar9 < 0x41) || (0x5a < (ushort)wVar9)) && (0x19 < (ushort)(wVar9 + L'ﾟ')))
        {
          iVar3 = -1;
        }
        else {
          uVar4 = uVar6;
          if ((ushort)(wVar9 + L'ﾟ') < 0x1a) {
            uVar4 = uVar6 - 0x20;
          }
          iVar3 = uVar4 - 0x37;
        }
      }
      if (iVar3 == 0) {
        wVar9 = *param_2;
        if ((wVar9 == L'x') || (wVar9 == L'X')) {
          if (param_4 == 0) {
            param_4 = 0x10;
          }
          uVar6 = (uint)(ushort)param_2[1];
          param_2 = param_2 + 2;
        }
        else {
          if (param_4 == 0) {
            param_4 = 8;
          }
          param_2 = param_2 + 1;
          c_string_character_source<wchar_t>::unget
                    ((c_string_character_source<wchar_t> *)&param_2,wVar9);
        }
      }
      else if (param_4 == 0) {
        param_4 = 10;
      }
LAB_00406554:
      uVar4 = (uint)(0xffffffff / (ulonglong)param_4);
      do {
        wVar9 = (wchar_t)uVar6;
        if ((ushort)wVar9 < 0x30) goto LAB_004067bf;
        if ((ushort)wVar9 < 0x3a) {
          uVar5 = uVar6 - 0x30;
LAB_004067ba:
          if (uVar5 == 0xffffffff) goto LAB_004067bf;
        }
        else {
          if (0xff0f < (ushort)wVar9) {
            if ((ushort)wVar9 < 0xff1a) {
              uVar5 = uVar6 - 0xff10;
            }
            else {
              uVar5 = 0xffffffff;
            }
            goto LAB_004067ba;
          }
          if (0x65f < (ushort)wVar9) {
            if ((ushort)wVar9 < 0x66a) {
              uVar5 = uVar6 - 0x660;
            }
            else {
              if ((ushort)wVar9 < 0x6f0) goto LAB_004067bf;
              if ((ushort)wVar9 < 0x6fa) {
                uVar5 = uVar6 - 0x6f0;
              }
              else {
                if ((ushort)wVar9 < 0x966) goto LAB_004067bf;
                if ((ushort)wVar9 < 0x970) {
                  uVar5 = uVar6 - 0x966;
                }
                else {
                  if ((ushort)wVar9 < 0x9e6) goto LAB_004067bf;
                  if ((ushort)wVar9 < 0x9f0) {
                    uVar5 = uVar6 - 0x9e6;
                  }
                  else {
                    if ((ushort)wVar9 < 0xa66) goto LAB_004067bf;
                    if ((ushort)wVar9 < 0xa70) {
                      uVar5 = uVar6 - 0xa66;
                    }
                    else {
                      if ((ushort)wVar9 < 0xae6) goto LAB_004067bf;
                      if ((ushort)wVar9 < 0xaf0) {
                        uVar5 = uVar6 - 0xae6;
                      }
                      else {
                        if ((ushort)wVar9 < 0xb66) goto LAB_004067bf;
                        if ((ushort)wVar9 < 0xb70) {
                          uVar5 = uVar6 - 0xb66;
                        }
                        else {
                          if ((ushort)wVar9 < 0xc66) goto LAB_004067bf;
                          if ((ushort)wVar9 < 0xc70) {
                            uVar5 = uVar6 - 0xc66;
                          }
                          else {
                            if ((ushort)wVar9 < 0xce6) goto LAB_004067bf;
                            if ((ushort)wVar9 < 0xcf0) {
                              uVar5 = uVar6 - 0xce6;
                            }
                            else {
                              if ((ushort)wVar9 < 0xd66) goto LAB_004067bf;
                              if ((ushort)wVar9 < 0xd70) {
                                uVar5 = uVar6 - 0xd66;
                              }
                              else {
                                if ((ushort)wVar9 < 0xe50) goto LAB_004067bf;
                                if ((ushort)wVar9 < 0xe5a) {
                                  uVar5 = uVar6 - 0xe50;
                                }
                                else {
                                  if ((ushort)wVar9 < 0xed0) goto LAB_004067bf;
                                  if ((ushort)wVar9 < 0xeda) {
                                    uVar5 = uVar6 - 0xed0;
                                  }
                                  else {
                                    if ((ushort)wVar9 < 0xf20) goto LAB_004067bf;
                                    if ((ushort)wVar9 < 0xf2a) {
                                      uVar5 = uVar6 - 0xf20;
                                    }
                                    else {
                                      if ((ushort)wVar9 < 0x1040) goto LAB_004067bf;
                                      if ((ushort)wVar9 < 0x104a) {
                                        uVar5 = uVar6 - 0x1040;
                                      }
                                      else {
                                        if ((ushort)wVar9 < 0x17e0) goto LAB_004067bf;
                                        if ((ushort)wVar9 < 0x17ea) {
                                          uVar5 = uVar6 - 0x17e0;
                                        }
                                        else {
                                          if (((ushort)wVar9 < 0x1810) || (0x1819 < (ushort)wVar9))
                                          goto LAB_004067bf;
                                          uVar5 = uVar6 - 0x1810;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_004067ba;
          }
LAB_004067bf:
          if ((((ushort)wVar9 < 0x41) || (0x5a < (ushort)wVar9)) &&
             ((ushort)local_8 < (ushort)(wVar9 + L'ﾟ'))) {
            uVar5 = 0xffffffff;
          }
          else {
            if ((ushort)(wVar9 + L'ﾟ') <= (ushort)local_8) {
              uVar6 = uVar6 - 0x20;
            }
            uVar5 = uVar6 - 0x37;
          }
        }
        if ((uVar5 == 0xffffffff) || (param_4 <= uVar5)) goto LAB_00406825;
        uVar8 = uVar7 | 8;
        if ((local_c < uVar4) ||
           ((local_c == uVar4 && (uVar5 <= (uint)(0xffffffff % (ulonglong)param_4))))) {
          local_c = local_c * param_4 + uVar5;
        }
        else {
          uVar8 = uVar7 | 0xc;
        }
        uVar6 = (uint)(ushort)*param_2;
        param_2 = param_2 + 1;
        uVar7 = uVar8;
      } while( true );
    }
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00406b06();
  }
  uVar6 = 0;
LAB_004061ee:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return uVar6;
LAB_00406825:
  c_string_character_source<wchar_t>::unget((c_string_character_source<wchar_t> *)&param_2,wVar9);
  uVar6 = local_c;
  if ((uVar7 & 8) == 0) {
    uVar6 = 0;
    param_2 = local_10;
  }
  else {
    bVar1 = is_overflow_condition<unsigned_long>(uVar7,local_c);
    if (bVar1) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0xffffffff;
      }
      else if ((uVar7 & 2) == 0) {
        uVar6 = 0x7fffffff;
      }
      else {
        uVar6 = 0x80000000;
      }
    }
    else if ((uVar7 & 2) != 0) {
      uVar6 = -uVar6;
    }
  }
  if (local_14 != '\0') {
    *(uint *)(local_20[0] + 0x350) = *(uint *)(local_20[0] + 0x350) & 0xfffffffd;
  }
  goto LAB_004061ee;
}



// ===== unget @ 00406898 (size 44) =====

/* Library Function - Single Match
    public: void __thiscall __crt_strtox::c_string_character_source<wchar_t>::unget(wchar_t)
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_strtox::c_string_character_source<wchar_t>::unget
          (c_string_character_source<wchar_t> *this,wchar_t param_1)

{
  int *piVar1;
  
  *(int *)this = *(int *)this + -2;
  if ((param_1 != L'\0') && (**(wchar_t **)this != param_1)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
  }
  return;
}



// ===== validate @ 004068c4 (size 27) =====

/* Library Function - Single Match
    public: bool __thiscall __crt_strtox::c_string_character_source<wchar_t>::validate(void)const 
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_strtox::c_string_character_source<wchar_t>::validate(c_string_character_source<wchar_t> *this)

{
  int *piVar1;
  
  if (*(int *)this == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
    return false;
  }
  return true;
}



// ===== __chvalidchk_l @ 004068df (size 42) =====

/* Library Function - Single Match
    __chvalidchk_l
   
   Library: Visual Studio 2015 Release */

ushort __cdecl __chvalidchk_l(int param_1,ushort param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    puVar2 = ___pctype_func();
    uVar1 = puVar2[param_1];
  }
  else {
    uVar1 = *(ushort *)(*(int *)*param_3 + param_1 * 2);
  }
  return uVar1 & param_2;
}



// ===== __ischartype_l @ 00406909 (size 51) =====

/* Library Function - Single Match
    __ischartype_l
   
   Library: Visual Studio 2015 Release */

void __cdecl __ischartype_l(int param_1,int param_2,_locale_t param_3)

{
  if ((param_3 == (_locale_t)0x0) || ((int)param_3->locinfo->lc_codepage < 2)) {
    __chvalidchk_l(param_1,(ushort)param_2,&param_3->locinfo);
  }
  else {
    __isctype_l(param_1,param_2,param_3);
  }
  return;
}



// ===== ___acrt_call_reportfault @ 0040693c (size 315) =====

/* Library Function - Single Match
    ___acrt_call_reportfault
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  _EXCEPTION_POINTERS local_32c;
  EXCEPTION_RECORD local_324;
  undefined4 local_2d4 [39];
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  if (param_1 != -1) {
    FUN_004020c2();
  }
  _memset(&local_324,0,0x50);
  _memset(local_2d4,0,0x2cc);
  local_32c.ExceptionRecord = &local_324;
  local_32c.ContextRecord = (PCONTEXT)local_2d4;
  local_2d4[0] = 0x10001;
  local_324.ExceptionCode = param_2;
  local_324.ExceptionFlags = param_3;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_32c);
  if (((LVar3 == 0) && (BVar2 == 0)) && (param_1 != -1)) {
    FUN_004020c2();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_00406a77 @ 00406a77 (size 20) =====

void __cdecl FUN_00406a77(wchar_t **param_1)

{
  __crt_state_management::dual_state_global<wchar_t**>::initialize
            ((dual_state_global<wchar_t**> *)&DAT_0041ae7c,param_1);
  return;
}



// ===== FUN_00406a8b @ 00406a8b (size 122) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00406a8b(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  byte bVar3;
  code *pcVar4;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  p_Var2 = ___acrt_getptd_noexit();
  if (((p_Var2 == (__acrt_ptd *)0x0) || (pcVar4 = *(code **)(p_Var2 + 0x35c), pcVar4 == (code *)0x0)
      ) && (bVar3 = (byte)DAT_0041a004 & 0x1f,
           pcVar4 = (code *)((DAT_0041a004 ^ _DAT_0041ae7c) >> bVar3 |
                            (DAT_0041a004 ^ _DAT_0041ae7c) << 0x20 - bVar3), pcVar4 == (code *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    __invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  (*(code *)PTR_guard_check_icall_00413124)(param_1,param_2,param_3,param_4,param_5);
  (*pcVar4)();
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_00406b06 @ 00406b06 (size 16) =====

void FUN_00406b06(void)

{
  FUN_00406a8b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



// ===== __invoke_watson @ 00406b16 (size 51) =====

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2015 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  UINT uExitCode;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  ___acrt_call_reportfault(2,0xc0000417,1);
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// ===== FID_conflict:___acrt_errno_from_os_error @ 00406b49 (size 67) =====

/* Library Function - Multiple Matches With Different Base Names
    ___acrt_errno_from_os_error
    __get_errno_from_oserr
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

int __cdecl FID_conflict____acrt_errno_from_os_error(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00413c30)[uVar1 * 2]) {
      return *(int *)(&UNK_00413c34 + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}



// ===== ___acrt_errno_map_os_error @ 00406b8c (size 35) =====

/* Library Function - Single Match
    ___acrt_errno_map_os_error
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_errno_map_os_error(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = FID_conflict____acrt_errno_from_os_error(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}



// ===== ___doserrno @ 00406baf (size 19) =====

/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2015 Release */

ulong * __cdecl ___doserrno(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = ___acrt_getptd_noexit();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    return (ulong *)&DAT_0041a130;
  }
  return (ulong *)(p_Var1 + 0x14);
}



// ===== __errno @ 00406bc2 (size 19) =====

/* Library Function - Single Match
    __errno
   
   Library: Visual Studio 2015 Release */

int * __cdecl __errno(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = ___acrt_getptd_noexit();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    return (int *)&DAT_0041a12c;
  }
  return (int *)(p_Var1 + 0x10);
}



// ===== try_get_CompareStringEx @ 00406bd5 (size 26) =====

/* Library Function - Single Match
    int (__stdcall*__cdecl try_get_CompareStringEx(void))(wchar_t const *,unsigned long,wchar_t
   const *,int,wchar_t const *,int,struct _nlsversioninfo *,void *,long)
   
   Library: Visual Studio 2015 Release */

_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long *
__cdecl try_get_CompareStringEx(void)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var1;
  
  p_Var1 = try_get_function(1,"CompareStringEx",(module_id *)&DAT_00414238,
                            (module_id *)"CompareStringEx");
  return p_Var1;
}



// ===== try_get_function @ 00406bef (size 156) =====

/* Library Function - Single Match
    void * __cdecl try_get_function(enum `anonymous namespace'::function_id,char const * const,enum
   A0x9b56aee1::module_id const * const,enum A0x9b56aee1::module_id const * const)
   
   Library: Visual Studio 2015 Release */

void * __cdecl
try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4)

{
  uint *puVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  byte bVar3;
  void *pvVar4;
  
  puVar1 = &DAT_0041aed0 + param_1;
  bVar3 = (byte)DAT_0041a004 & 0x1f;
  pvVar4 = (void *)((DAT_0041a004 ^ *puVar1) >> bVar3 | (DAT_0041a004 ^ *puVar1) << 0x20 - bVar3);
  if (pvVar4 != (void *)0xffffffff) {
    if (pvVar4 != (void *)0x0) {
      return pvVar4;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      hModule = try_get_module(*param_3);
      if (hModule != (HMODULE)0x0) goto LAB_00406c47;
    }
    hModule = (HMODULE)0x0;
LAB_00406c47:
    if ((hModule != (HMODULE)0x0) &&
       (pFVar2 = GetProcAddress(hModule,param_2), pFVar2 != (FARPROC)0x0)) {
      pvVar4 = __crt_fast_encode_pointer<void*>(pFVar2);
      LOCK();
      *puVar1 = (uint)pvVar4;
      UNLOCK();
      return pFVar2;
    }
    bVar3 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
    LOCK();
    *puVar1 = (0xffffffffU >> bVar3 | -1 << 0x20 - bVar3) ^ DAT_0041a004;
    UNLOCK();
  }
  return (void *)0x0;
}



// ===== try_get_module @ 00406c8b (size 123) =====

/* Library Function - Multiple Matches With Same Base Name
    struct HINSTANCE__ * __cdecl try_get_module(enum `anonymous namespace'::module_id)
    struct HINSTANCE__ * __cdecl try_get_module(enum `anonymous namespace'::module_id)
   
   Library: Visual Studio 2015 Release */

HMODULE __cdecl try_get_module(int param_1)

{
  uint *puVar1;
  uint uVar2;
  LPCWSTR lpLibFileName;
  HMODULE hLibModule;
  DWORD DVar3;
  
  puVar1 = &DAT_0041ae80 + param_1;
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_appmodel_runtime_l1_1_00413d98)[param_1];
    hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
    if (hLibModule == (HMODULE)0x0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x57) {
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
      }
      else {
        hLibModule = (HMODULE)0x0;
      }
      if (hLibModule == (HMODULE)0x0) {
        LOCK();
        *puVar1 = 0xffffffff;
        UNLOCK();
        return (HMODULE)0x0;
      }
    }
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = (uint)hLibModule;
    UNLOCK();
    if (uVar2 != 0) {
      FreeLibrary(hLibModule);
    }
  }
  else {
    hLibModule = (HMODULE)(-(uint)(uVar2 != 0xffffffff) & uVar2);
  }
  return hLibModule;
}



// ===== ___acrt_CompareStringEx@36 @ 00406d06 (size 116) =====

/* Library Function - Single Match
    ___acrt_CompareStringEx@36
   
   Library: Visual Studio 2015 Release */

void ___acrt_CompareStringEx_36
               (wchar_t *param_1,ulong param_2,wchar_t *param_3,int param_4,wchar_t *param_5,
               int param_6,_nlsversioninfo *param_7,void *param_8,long param_9)

{
  uint uVar1;
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var2;
  LCID Locale;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  p_Var2 = try_get_CompareStringEx();
  if (p_Var2 == (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
                 *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR_guard_check_icall_00413124)();
    (*p_Var2)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_FlsAlloc@4 @ 00406d7a (size 86) =====

/* Library Function - Single Match
    ___acrt_FlsAlloc@4
   
   Library: Visual Studio 2015 Release */

void ___acrt_FlsAlloc_4(undefined4 param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pcVar2 = try_get_function(3,"FlsAlloc",(module_id *)&DAT_00414250,(module_id *)&DAT_00414258);
  if (pcVar2 == (code *)0x0) {
    TlsAlloc();
  }
  else {
    (*(code *)PTR_guard_check_icall_00413124)(param_1);
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_FlsFree@4 @ 00406dd0 (size 86) =====

/* Library Function - Single Match
    ___acrt_FlsFree@4
   
   Library: Visual Studio 2015 Release */

void ___acrt_FlsFree_4(DWORD param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pcVar2 = try_get_function(4,"FlsFree",(module_id *)&DAT_00414258,(module_id *)&DAT_00414260);
  if (pcVar2 == (code *)0x0) {
    TlsFree(param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_00413124)();
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_FlsGetValue@4 @ 00406e26 (size 86) =====

/* Library Function - Single Match
    ___acrt_FlsGetValue@4
   
   Library: Visual Studio 2015 Release */

void ___acrt_FlsGetValue_4(DWORD param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pcVar2 = try_get_function(5,"FlsGetValue",(module_id *)&DAT_00414260,(module_id *)&DAT_00414268);
  if (pcVar2 == (code *)0x0) {
    TlsGetValue(param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_00413124)();
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_FlsSetValue@8 @ 00406e7c (size 89) =====

/* Library Function - Single Match
    ___acrt_FlsSetValue@8
   
   Library: Visual Studio 2015 Release */

void ___acrt_FlsSetValue_8(DWORD param_1,LPVOID param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pcVar2 = try_get_function(6,"FlsSetValue",(module_id *)&DAT_00414268,(module_id *)&DAT_00414270);
  if (pcVar2 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_00413124)();
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_InitializeCriticalSectionEx@12 @ 00406ed5 (size 98) =====

/* Library Function - Single Match
    ___acrt_InitializeCriticalSectionEx@12
   
   Library: Visual Studio 2015 Release */

void ___acrt_InitializeCriticalSectionEx_12
               (LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pcVar2 = try_get_function(0x14,"InitializeCriticalSectionEx",(module_id *)&DAT_0041428c,
                            (module_id *)&DAT_00414294);
  if (pcVar2 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_00413124)(param_1,param_2,param_3);
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_LCMapStringEx@36 @ 00406f37 (size 136) =====

/* Library Function - Single Match
    ___acrt_LCMapStringEx@36
   
   Library: Visual Studio 2015 Release */

void ___acrt_LCMapStringEx_36
               (wchar_t *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
               int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  code *pcVar2;
  LCID Locale;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pcVar2 = try_get_function(0x16,"LCMapStringEx",(module_id *)&DAT_00414294,
                            (module_id *)"LCMapStringEx");
  if (pcVar2 == (code *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR_guard_check_icall_00413124)
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_LocaleNameToLCID@8 @ 00406fbf (size 92) =====

/* Library Function - Single Match
    ___acrt_LocaleNameToLCID@8
   
   Library: Visual Studio 2015 Release */

void ___acrt_LocaleNameToLCID_8(wchar_t *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pcVar2 = try_get_function(0x18,"LocaleNameToLCID",(module_id *)&DAT_004142ac,
                            (module_id *)"LocaleNameToLCID");
  if (pcVar2 == (code *)0x0) {
    ___acrt_DownlevelLocaleNameToLCID(param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_00413124)(param_1,param_2);
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_is_packaged_app @ 00407041 (size 135) =====

/* Library Function - Single Match
    ___acrt_is_packaged_app
   
   Library: Visual Studio 2015 Release */

void __fastcall ___acrt_is_packaged_app(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  if (DAT_0041af50 == 0) {
    pcVar1 = try_get_function(8,"GetCurrentPackageId",(module_id *)&DAT_00414270,
                              (module_id *)"GetCurrentPackageId");
    if (pcVar1 != (code *)0x0) {
      local_c = 0;
      (*(code *)PTR_guard_check_icall_00413124)(&local_c,0);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0x7a) {
        LOCK();
        DAT_0041af50 = 1;
        UNLOCK();
        goto LAB_004070ba;
      }
    }
    LOCK();
    DAT_0041af50 = 2;
    UNLOCK();
  }
LAB_004070ba:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_uninitialize_winapi_thunks @ 004070c8 (size 54) =====

/* Library Function - Single Match
    ___acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __cdecl ___acrt_uninitialize_winapi_thunks(char param_1)

{
  int *piVar1;
  
  if (param_1 == '\0') {
    piVar1 = &DAT_0041ae80;
    do {
      if (*piVar1 != 0) {
        if (*piVar1 != -1) {
          FreeLibrary((HMODULE)*piVar1);
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != &DAT_0041aed0);
  }
  return 1;
}



// ===== FUN_004070fe @ 004070fe (size 151) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_004070fe(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  
  local_20 = 0;
  ___acrt_lock(8);
  for (iVar2 = 3; iVar2 != DAT_0041ac04; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(DAT_0041ac08 + iVar2 * 4);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) >> 0xd & 1) != 0) {
        iVar1 = FUN_0040b8a9(*(FILE **)(DAT_0041ac08 + iVar2 * 4));
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_0041ac08 + iVar2 * 4) + 0x20));
      FID_conflict__free(*(void **)(DAT_0041ac08 + iVar2 * 4));
      *(undefined4 *)(DAT_0041ac08 + iVar2 * 4) = 0;
    }
  }
  FUN_00407195();
  return local_20;
}



// ===== FUN_00407195 @ 00407195 (size 9) =====

void FUN_00407195(void)

{
  ___acrt_unlock(8);
  return;
}



// ===== ___acrt_stdio_flush_nolock @ 0040719e (size 102) =====

/* Library Function - Single Match
    ___acrt_stdio_flush_nolock
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl ___acrt_stdio_flush_nolock(FILE *param_1)

{
  int *piVar1;
  int _FileHandle;
  uint uVar2;
  uint uVar3;
  char *_Buf;
  
  piVar1 = &param_1->_flag;
  if ((((byte)*piVar1 & 3) == 2) && ((*piVar1 & 0xc0U) != 0)) {
    _Buf = (char *)param_1->_cnt;
    uVar3 = (int)param_1->_ptr - (int)_Buf;
    param_1->_ptr = _Buf;
    param_1->_base = (char *)0x0;
    if (0 < (int)uVar3) {
      uVar2 = uVar3;
      _FileHandle = __fileno(param_1);
      uVar2 = __write(_FileHandle,_Buf,uVar2);
      if (uVar3 != uVar2) {
        LOCK();
        *piVar1 = *piVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)*piVar1 >> 2 & 1) != 0) {
        LOCK();
        *piVar1 = *piVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}



// ===== __fflush_nolock @ 00407204 (size 71) =====

/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = common_flush_all(0);
    return iVar1;
  }
  iVar1 = ___acrt_stdio_flush_nolock(_File);
  if (iVar1 == 0) {
    if (((uint)_File->_flag >> 0xb & 1) != 0) {
      iVar1 = __fileno(_File);
      iVar1 = __commit(iVar1);
      if (iVar1 != 0) goto LAB_00407225;
    }
    iVar1 = 0;
  }
  else {
LAB_00407225:
    iVar1 = -1;
  }
  return iVar1;
}



// ===== FUN_0040724b @ 0040724b (size 9) =====

void FUN_0040724b(void)

{
  common_flush_all(1);
  return;
}



// ===== common_flush_all @ 00407254 (size 188) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _common_flush_all
   
   Library: Visual Studio 2015 Release */

int __cdecl common_flush_all(int param_1)

{
  undefined4 *puVar1;
  FILE *_File;
  int iVar2;
  undefined4 *puVar3;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  ___acrt_lock(8);
  puVar1 = DAT_0041ac08 + DAT_0041ac04;
  for (puVar3 = DAT_0041ac08; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    _File = (FILE *)*puVar3;
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      if (((uint)_File->_flag >> 0xd & 1) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && (((uint)_File->_flag >> 1 & 1) != 0)) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_004072f9();
    }
  }
  FUN_00407323();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



// ===== FUN_004072f9 @ 004072f9 (size 10) =====

void FUN_004072f9(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x28));
  return;
}



// ===== FUN_00407323 @ 00407323 (size 9) =====

void FUN_00407323(void)

{
  ___acrt_unlock(8);
  return;
}



// ===== ___acrt_stdio_free_buffer_nolock @ 0040732c (size 62) =====

/* Library Function - Single Match
    ___acrt_stdio_free_buffer_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_stdio_free_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 3;
  if (((*puVar1 >> 0xd & 1) != 0) && ((*puVar1 >> 6 & 1) != 0)) {
    FID_conflict__free((void *)param_1[1]);
    LOCK();
    *puVar1 = *puVar1 & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}



// ===== initialize_inherited_file_handles_nolock @ 0040736a (size 182) =====

/* Library Function - Single Match
    void __cdecl initialize_inherited_file_handles_nolock(void)
   
   Library: Visual Studio 2015 Release */

void __cdecl initialize_inherited_file_handles_nolock(void)

{
  HANDLE hFile;
  DWORD DVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  _STARTUPINFOW local_4c;
  byte *local_8;
  
  GetStartupInfoW(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((uint *)local_4c.lpReserved2 != (uint *)0x0)) {
    uVar4 = *(uint *)local_4c.lpReserved2;
    puVar3 = (uint *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)puVar3 + uVar4);
    if (0x1fff < (int)uVar4) {
      uVar4 = 0x2000;
    }
    ___acrt_lowio_ensure_fh_exists(uVar4);
    if ((int)DAT_0041b158 < (int)uVar4) {
      uVar4 = DAT_0041b158;
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        hFile = *(HANDLE *)local_8;
        if ((((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0xfffffffe)) &&
            ((*puVar3 & 1) != 0)) &&
           (((*puVar3 & 8) != 0 || (DVar1 = GetFileType(hFile), DVar1 != 0)))) {
          iVar2 = (uVar5 & 0x3f) * 0x30 + (&DAT_0041af58)[(int)uVar5 >> 6];
          *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)local_8;
          *(byte *)(iVar2 + 0x28) = (byte)*puVar3;
        }
        uVar5 = uVar5 + 1;
        local_8 = local_8 + 4;
        puVar3 = (uint *)((int)puVar3 + 1);
      } while (uVar5 != uVar4);
    }
  }
  return;
}



// ===== FUN_00407420 @ 00407420 (size 182) =====

void FUN_00407420(void)

{
  HANDLE hFile;
  uint uVar1;
  int iVar2;
  uint uVar3;
  DWORD nStdHandle;
  
  uVar3 = 0;
  do {
    iVar2 = (uVar3 & 0x3f) * 0x30 + (&DAT_0041af58)[(int)uVar3 >> 6];
    if ((*(int *)(iVar2 + 0x18) == -1) || (*(int *)(iVar2 + 0x18) == -2)) {
      *(undefined1 *)(iVar2 + 0x28) = 0x81;
      if (uVar3 == 0) {
        nStdHandle = 0xfffffff6;
      }
      else if (uVar3 == 1) {
        nStdHandle = 0xfffffff5;
      }
      else {
        nStdHandle = 0xfffffff4;
      }
      hFile = GetStdHandle(nStdHandle);
      if ((hFile == (HANDLE)0xffffffff) || (hFile == (HANDLE)0x0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = GetFileType(hFile);
      }
      if (uVar1 == 0) {
        *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x40;
        *(undefined4 *)(iVar2 + 0x18) = 0xfffffffe;
        if (DAT_0041ac08 != 0) {
          *(undefined4 *)(*(int *)(DAT_0041ac08 + uVar3 * 4) + 0x10) = 0xfffffffe;
        }
      }
      else {
        *(HANDLE *)(iVar2 + 0x18) = hFile;
        if ((uVar1 & 0xff) == 2) {
          *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x40;
        }
        else if ((uVar1 & 0xff) == 3) {
          *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 8;
        }
      }
    }
    else {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 3);
  return;
}



// ===== FUN_00407523 @ 00407523 (size 9) =====

void FUN_00407523(void)

{
  ___acrt_unlock(7);
  return;
}



// ===== __towlower_l @ 00407558 (size 201) =====

/* Library Function - Single Match
    __towlower_l
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl __towlower_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  undefined2 in_stack_00000006;
  int local_1c;
  int local_18;
  char local_10;
  WCHAR local_8 [2];
  
  if (_C == 0xffff) {
    return 0xffff;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,(__crt_locale_pointers *)_Locale);
  if (*(wchar_t **)(local_18 + 0xa8) == (wchar_t *)0x0) {
    if ((ushort)(_C - 0x41) < 0x1a) {
      __C = (uint)(ushort)(_C + 0x20);
    }
  }
  else {
    if (0xff < _C) {
      iVar1 = ___acrt_LCMapStringW(*(wchar_t **)(local_18 + 0xa8),0x100,(LPCWSTR)&_C,1,local_8,1);
      if (iVar1 == 0) {
        local_8[0] = (WCHAR)__C;
      }
      goto LAB_0040760d;
    }
    iVar1 = _iswctype(_C,1);
    if (iVar1 != 0) {
      local_8[0] = (WCHAR)*(byte *)(*(int *)(local_18 + 0x94) + (__C & 0xffff));
      goto LAB_0040760d;
    }
  }
  local_8[0] = (WCHAR)__C;
LAB_0040760d:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return local_8[0];
}



// ===== operator()<> @ 00407621 (size 68) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_3518db117f0e7cdb002338c5d3c47b6c>,class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> &,class
   <lambda_abdedf541bb04549bc734292b4a045d4> >(class <lambda_3518db117f0e7cdb002338c5d3c47b6c>
   &&,class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> &,class
   <lambda_abdedf541bb04549bc734292b4a045d4> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_a7e850c220f1c8d1e6efeecdedd162c6>,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> >(class <lambda_a7e850c220f1c8d1e6efeecdedd162c6>
   &&,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_2,(__crt_locale_data *)**(undefined4 **)param_2[1]);
  FUN_00407665();
  return;
}



// ===== FUN_00407665 @ 00407665 (size 12) =====

void FUN_00407665(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}



// ===== operator()<> @ 00407671 (size 85) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_38edbb1296d33220d7e4dd0ed76b244a>,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> >(class <lambda_38edbb1296d33220d7e4dd0ed76b244a>
   &&,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_51b6e8b1eb166f2a3faf91f424b38130>,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> &,class
   <lambda_0b5a4a3e68152e1d9b943535f5f47bed> >(class <lambda_51b6e8b1eb166f2a3faf91f424b38130>
   &&,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> &,class
   <lambda_0b5a4a3e68152e1d9b943535f5f47bed> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *_Memory;
  
  ___acrt_lock(*param_1);
  _Memory = *(int **)(*(int *)*param_2 + 0x48);
  if (_Memory != (int *)0x0) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (_Memory != &DAT_0041a530)) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_004076c6();
  return;
}



// ===== FUN_004076c6 @ 004076c6 (size 12) =====

void FUN_004076c6(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}



// ===== operator()<> @ 004076d2 (size 63) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_5b71d36f03204c0beab531769a5b5694>,class <lambda_be2b3da3f62db62e9dad5dc70221a656> &,class
   <lambda_8f9ce462984622f9bf76b59e2aaaf805> >(class <lambda_5b71d36f03204c0beab531769a5b5694>
   &&,class <lambda_be2b3da3f62db62e9dad5dc70221a656> &,class
   <lambda_8f9ce462984622f9bf76b59e2aaaf805> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_6affb1475c98b40b75cdec977db92e3c>,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> >(class <lambda_6affb1475c98b40b75cdec977db92e3c>
   &&,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_2,(__crt_locale_data *)0x0);
  FUN_00407711();
  return;
}



// ===== FUN_00407711 @ 00407711 (size 12) =====

void FUN_00407711(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}



// ===== operator()<> @ 0040771d (size 60) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_15ade71b0218206bbe3333a0c9b79046>,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> >(class <lambda_15ade71b0218206bbe3333a0c9b79046>
   &&,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_9df27f884b057bc3edfc946cb5b7cf47>,class <lambda_e69574bed617af4e071282c136b37893> &,class
   <lambda_cc0d902bcbbeb830f749456577db4721> >(class <lambda_9df27f884b057bc3edfc946cb5b7cf47>
   &&,class <lambda_e69574bed617af4e071282c136b37893> &,class
   <lambda_cc0d902bcbbeb830f749456577db4721> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  LOCK();
  **(int **)(*(int *)*param_2 + 0x48) = **(int **)(*(int *)*param_2 + 0x48) + 1;
  UNLOCK();
  FUN_00407759();
  return;
}



// ===== FUN_00407759 @ 00407759 (size 12) =====

void FUN_00407759(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}



// ===== __acrt_lock_and_call<<lambda_6250bd4b2a391816dd638c3bf72b0bcb>_> @ 00407765 (size 40) =====

/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> >(enum
   __acrt_lock_id,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<<lambda_6250bd4b2a391816dd638c3bf72b0bcb>_>
          (__acrt_lock_id param_1,<lambda_6250bd4b2a391816dd638c3bf72b0bcb> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>((int *)&local_10,(undefined4 *)param_2);
  return;
}



// ===== __acrt_lock_and_call<<lambda_b2ea41f6bbb362cd97d94c6828d90b61>_> @ 0040778d (size 40) =====

/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> >(enum
   __acrt_lock_id,class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<<lambda_b2ea41f6bbb362cd97d94c6828d90b61>_>
          (__acrt_lock_id param_1,<lambda_b2ea41f6bbb362cd97d94c6828d90b61> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>((int *)&local_10,(undefined4 *)param_2);
  return;
}



// ===== __acrt_lock_and_call<<lambda_be2b3da3f62db62e9dad5dc70221a656>_> @ 004077b5 (size 40) =====

/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_be2b3da3f62db62e9dad5dc70221a656> >(enum
   __acrt_lock_id,class <lambda_be2b3da3f62db62e9dad5dc70221a656> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<<lambda_be2b3da3f62db62e9dad5dc70221a656>_>
          (__acrt_lock_id param_1,<lambda_be2b3da3f62db62e9dad5dc70221a656> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>((int *)&local_10,(undefined4 *)param_2);
  return;
}



// ===== __acrt_lock_and_call<<lambda_e69574bed617af4e071282c136b37893>_> @ 004077dd (size 40) =====

/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_e69574bed617af4e071282c136b37893> >(enum
   __acrt_lock_id,class <lambda_e69574bed617af4e071282c136b37893> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<<lambda_e69574bed617af4e071282c136b37893>_>
          (__acrt_lock_id param_1,<lambda_e69574bed617af4e071282c136b37893> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>((int *)&local_10,(undefined4 *)param_2);
  return;
}



// ===== construct_ptd @ 00407805 (size 121) =====

/* Library Function - Single Match
    void __cdecl construct_ptd(struct __acrt_ptd * const,struct __crt_locale_data * * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl construct_ptd(__acrt_ptd *param_1,__crt_locale_data **param_2)

{
  __acrt_ptd **local_c;
  __acrt_ptd **local_8;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined **)param_1 = &DAT_00413af0;
  *(undefined4 *)(param_1 + 0x350) = 1;
  *(undefined4 **)(param_1 + 0x48) = &DAT_0041a530;
  *(undefined2 *)(param_1 + 0x6c) = 0x43;
  *(undefined2 *)(param_1 + 0x172) = 0x43;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  local_8 = &param_1;
  __acrt_lock_and_call<<lambda_e69574bed617af4e071282c136b37893>_>
            (5,(<lambda_e69574bed617af4e071282c136b37893> *)&local_8);
  local_c = &param_1;
  local_8 = (__acrt_ptd **)&param_2;
  __acrt_lock_and_call<<lambda_b2ea41f6bbb362cd97d94c6828d90b61>_>
            (4,(<lambda_b2ea41f6bbb362cd97d94c6828d90b61> *)&local_c);
  return;
}



// ===== destroy_fls @ 0040787e (size 33) =====

/* Library Function - Single Match
    void __stdcall destroy_fls(void *)
   
   Library: Visual Studio 2015 Release */

void destroy_fls(void *param_1)

{
  if (param_1 != (void *)0x0) {
    destroy_ptd(param_1);
    FID_conflict__free(param_1);
  }
  return;
}



// ===== destroy_ptd @ 0040789f (size 169) =====

/* Library Function - Single Match
    void __cdecl destroy_ptd(struct __acrt_ptd * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl destroy_ptd(__acrt_ptd *param_1)

{
  __acrt_ptd **local_8;
  
  if (*(undefined **)param_1 != &DAT_00413af0) {
    FID_conflict__free(*(undefined **)param_1);
  }
  FID_conflict__free(*(void **)(param_1 + 0x3c));
  FID_conflict__free(*(void **)(param_1 + 0x30));
  FID_conflict__free(*(void **)(param_1 + 0x34));
  FID_conflict__free(*(void **)(param_1 + 0x38));
  FID_conflict__free(*(void **)(param_1 + 0x28));
  FID_conflict__free(*(void **)(param_1 + 0x2c));
  FID_conflict__free(*(void **)(param_1 + 0x40));
  FID_conflict__free(*(void **)(param_1 + 0x44));
  FID_conflict__free(*(void **)(param_1 + 0x360));
  local_8 = &param_1;
  __acrt_lock_and_call<<lambda_6250bd4b2a391816dd638c3bf72b0bcb>_>
            (5,(<lambda_6250bd4b2a391816dd638c3bf72b0bcb> *)&local_8);
  local_8 = &param_1;
  __acrt_lock_and_call<<lambda_be2b3da3f62db62e9dad5dc70221a656>_>
            (4,(<lambda_be2b3da3f62db62e9dad5dc70221a656> *)&local_8);
  return;
}



// ===== replace_current_thread_locale_nolock @ 00407948 (size 75) =====

/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * const,struct
   __crt_locale_data * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    ___acrt_release_locale_ref(*(int *)(param_1 + 0x4c));
    ppuVar1 = *(undefined ***)(param_1 + 0x4c);
    if (((ppuVar1 != DAT_0041b15c) && (ppuVar1 != &PTR_DAT_0041a170)) &&
       (ppuVar1[3] == (undefined *)0x0)) {
      ___acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x4c) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    ___acrt_add_locale_ref((int)param_2);
  }
  return;
}



// ===== FUN_00407993 @ 00407993 (size 131) =====

__acrt_ptd * FUN_00407993(void)

{
  DWORD dwErrCode;
  __acrt_ptd *_Memory;
  int iVar1;
  
  dwErrCode = GetLastError();
  if ((DAT_0041a168 != 0xffffffff) &&
     (_Memory = (__acrt_ptd *)___acrt_FlsGetValue_4(DAT_0041a168), _Memory != (__acrt_ptd *)0x0)) {
LAB_004079fe:
    SetLastError(dwErrCode);
    return _Memory;
  }
  _Memory = __calloc_base(1,0x364);
  if ((_Memory == (__acrt_ptd *)0x0) ||
     (iVar1 = ___acrt_FlsSetValue_8(DAT_0041a168,_Memory), iVar1 == 0)) {
    FID_conflict__free(_Memory);
  }
  else {
    construct_ptd(_Memory,(__crt_locale_data **)&DAT_0041b15c);
    FID_conflict__free((void *)0x0);
    if (_Memory != (__acrt_ptd *)0x0) goto LAB_004079fe;
  }
  SetLastError(dwErrCode);
                    /* WARNING: Subroutine does not return */
  _abort();
}



// ===== ___acrt_getptd_noexit @ 00407a17 (size 133) =====

/* Library Function - Single Match
    ___acrt_getptd_noexit
   
   Library: Visual Studio 2015 Release */

__acrt_ptd * ___acrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  __acrt_ptd *_Memory;
  int iVar1;
  
  dwErrCode = GetLastError();
  if ((DAT_0041a168 != 0xffffffff) &&
     (_Memory = (__acrt_ptd *)___acrt_FlsGetValue_4(DAT_0041a168), _Memory != (__acrt_ptd *)0x0)) {
LAB_00407a8d:
    SetLastError(dwErrCode);
    return _Memory;
  }
  _Memory = __calloc_base(1,0x364);
  if (_Memory == (__acrt_ptd *)0x0) {
    _Memory = (__acrt_ptd *)0x0;
  }
  else {
    iVar1 = ___acrt_FlsSetValue_8(DAT_0041a168,_Memory);
    if (iVar1 != 0) {
      construct_ptd(_Memory,(__crt_locale_data **)&DAT_0041b15c);
      FID_conflict__free((void *)0x0);
      if (_Memory != (__acrt_ptd *)0x0) goto LAB_00407a8d;
      goto LAB_00407a84;
    }
  }
  FID_conflict__free(_Memory);
LAB_00407a84:
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}



// ===== FUN_00407ac8 @ 00407ac8 (size 26) =====

undefined4 FUN_00407ac8(void)

{
  DWORD DVar1;
  
  DVar1 = DAT_0041a168;
  if (DAT_0041a168 != 0xffffffff) {
    DVar1 = ___acrt_FlsFree_4(DAT_0041a168);
    DAT_0041a168 = 0xffffffff;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}



// ===== ___acrt_update_locale_info @ 00407ae2 (size 45) =====

/* Library Function - Single Match
    ___acrt_update_locale_info
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_update_locale_info(int param_1,int *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_0041b15c) && ((*(uint *)(param_1 + 0x350) & DAT_0041a7b0) == 0)) {
    ppuVar1 = FUN_0040aad3();
    *param_2 = (int)ppuVar1;
  }
  return;
}



// ===== ___acrt_update_multibyte_info @ 00407b0f (size 45) =====

/* Library Function - Single Match
    ___acrt_update_multibyte_info
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_update_multibyte_info(int param_1,int *param_2)

{
  int *piVar1;
  
  if (((undefined *)*param_2 != PTR_DAT_0041a750) &&
     ((*(uint *)(param_1 + 0x350) & DAT_0041a7b0) == 0)) {
    piVar1 = ___acrt_update_thread_multibyte_data();
    *param_2 = (int)piVar1;
  }
  return;
}



// ===== __isdigit_l @ 00407b3c (size 56) =====

/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  int iVar1;
  int local_14;
  localeinfo_struct local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  iVar1 = __ischartype_l(_C,4,&local_10);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return iVar1;
}



// ===== _isdigit @ 00407b74 (size 45) =====

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2015 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_0041ae58 != 0) {
    iVar1 = __isdigit_l(_C,(_locale_t)0x0);
    return iVar1;
  }
  return *(ushort *)(PTR_DAT_0041a170 + _C * 2) & 4;
}



// ===== common_tox_l<&bool___cdecl_internal_isupper_l(int,struct___crt_locale_pointers*_const),&int___cdecl_internal_map_lower(int,struct___crt_locale_pointers*_const)> @ 00407ba1 (size 330) =====

/* Library Function - Single Match
    int __cdecl common_tox_l<&bool __cdecl internal_isupper_l(int,struct __crt_locale_pointers *
   const),&int __cdecl internal_map_lower(int,struct __crt_locale_pointers * const)>(int,unsigned
   long,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_tox_l<&bool___cdecl_internal_isupper_l(int,struct___crt_locale_pointers*_const),&int___cdecl_internal_map_lower(int,struct___crt_locale_pointers*_const)>
          (int param_1,ulong param_2,__crt_locale_pointers *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  localeinfo_struct local_1c;
  char local_14;
  uint local_10;
  byte local_c [4];
  undefined2 local_8;
  undefined1 local_6;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_20,param_3);
  if ((uint)param_1 < 0x100) {
    bVar2 = internal_isupper_l(param_1,(__crt_locale_pointers *)&local_1c);
    if (bVar2) {
      bVar1 = (local_1c.locinfo)->pclmap[param_1];
      if (local_14 == '\0') {
        return (uint)bVar1;
      }
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
      return (uint)bVar1;
    }
    if (local_14 == '\0') {
      return param_1;
    }
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    return param_1;
  }
  local_8 = 0;
  local_6 = 0;
  if (1 < (int)(local_1c.locinfo)->lc_codepage) {
    local_10 = param_1 >> 8;
    iVar3 = __isleadbyte_l(local_10 & 0xff,&local_1c);
    if (iVar3 != 0) {
      local_8 = CONCAT11((byte)param_1,(char)local_10);
      local_6 = 0;
      iVar3 = 2;
      goto LAB_00407c61;
    }
  }
  piVar4 = __errno();
  *piVar4 = 0x2a;
  iVar3 = 1;
  local_8 = (ushort)(byte)param_1;
LAB_00407c61:
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  iVar3 = ___acrt_LCMapStringA
                    ((__crt_locale_pointers *)&local_1c,(local_1c.locinfo)->locale_name[2],param_2,
                     (char *)&local_8,iVar3,(char *)local_c,3,(local_1c.locinfo)->lc_collate_cp,1);
  if (iVar3 == 0) {
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  else if (iVar3 == 1) {
    param_1 = (int)local_c[0];
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  else {
    param_1 = (int)CONCAT11(local_c[0],local_c[1]);
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  return param_1;
}



// ===== internal_isupper_l @ 00407ceb (size 29) =====

/* Library Function - Single Match
    bool __cdecl internal_isupper_l(int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

bool __cdecl internal_isupper_l(int param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  
  iVar1 = __ischartype_l(param_1,1,(_locale_t)param_2);
  return iVar1 != 0;
}



// ===== __tolower_l @ 00407d08 (size 26) =====

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = common_tox_l<&bool___cdecl_internal_isupper_l(int,struct___crt_locale_pointers*_const),&int___cdecl_internal_map_lower(int,struct___crt_locale_pointers*_const)>
                    (_C,0x100,(__crt_locale_pointers *)_Locale);
  return iVar1;
}



// ===== _tolower @ 00407d22 (size 48) =====

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2015 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_0041ae58 == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}



// ===== make_c_string_character_source<> @ 00407d52 (size 27) =====

/* Library Function - Multiple Matches With Same Base Name
    class __crt_strtox::c_string_character_source<char> __cdecl
   __crt_strtox::make_c_string_character_source<char,char * *>(char const * const,char * * const)
    class __crt_strtox::c_string_character_source<wchar_t> __cdecl
   __crt_strtox::make_c_string_character_source<wchar_t,wchar_t * *>(wchar_t const * const,wchar_t *
   * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl
make_c_string_character_source<>(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return;
}



// ===== _wcstol @ 00407d6d (size 44) =====

/* Library Function - Single Match
    _wcstol
   
   Library: Visual Studio 2015 Release */

long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = 1;
  iStack_10 = _Radix;
  make_c_string_character_source<>(auStack_18,_Str,_EndPtr);
  uVar1 = __crt_strtox::
          parse_integer<unsigned_long,__crt_strtox::c_string_character_source<wchar_t>_>(0);
  return uVar1;
}



// ===== __mbtowc_l @ 00407d99 (size 250) =====

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_14;
  localeinfo_struct local_10;
  char local_8;
  
  if ((_SrcCh == (char *)0x0) || (_SrcSizeInBytes == 0)) {
    return 0;
  }
  if (*_SrcCh == '\0') {
    if (_DstCh == (wchar_t *)0x0) {
      return 0;
    }
    *_DstCh = L'\0';
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  if ((local_10.locinfo)->locale_name[2] == (wchar_t *)0x0) {
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = (ushort)(byte)*_SrcCh;
    }
    uVar3 = 1;
    goto LAB_00407e7b;
  }
  iVar1 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_10);
  if (iVar1 == 0) {
    uVar3 = 1;
    iVar1 = MultiByteToWideChar((local_10.locinfo)->lc_collate_cp,9,_SrcCh,1,_DstCh,
                                (uint)(_DstCh != (wchar_t *)0x0));
    if (iVar1 != 0) goto LAB_00407e7b;
LAB_00407e6d:
    piVar2 = __errno();
    uVar3 = 0xffffffff;
    *piVar2 = 0x2a;
  }
  else {
    if ((int)(local_10.locinfo)->lc_codepage < 2) {
LAB_00407e3a:
      uVar3 = (local_10.locinfo)->lc_codepage;
LAB_00407e3d:
      if ((_SrcSizeInBytes < uVar3) || (_SrcCh[1] == '\0')) goto LAB_00407e6d;
    }
    else {
      uVar3 = (local_10.locinfo)->lc_codepage;
      if ((int)_SrcSizeInBytes < (int)uVar3) goto LAB_00407e3d;
      iVar1 = MultiByteToWideChar((local_10.locinfo)->lc_collate_cp,9,_SrcCh,
                                  (local_10.locinfo)->lc_codepage,_DstCh,
                                  (uint)(_DstCh != (wchar_t *)0x0));
      if (iVar1 == 0) goto LAB_00407e3a;
    }
    uVar3 = (local_10.locinfo)->lc_codepage;
  }
LAB_00407e7b:
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    return uVar3;
  }
  return uVar3;
}



// ===== _mbtowc @ 00407e93 (size 26) =====

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2015 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}



// ===== __wctomb_s_l @ 00407ead (size 289) =====

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  errno_t eVar4;
  int local_18;
  int local_14;
  char local_c;
  BOOL local_8;
  
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
    return 0;
  }
  if (_SizeConverted != (int *)0x0) {
    *_SizeConverted = -1;
  }
  if (0x7fffffff < _SizeInBytes) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
    return 0x16;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,(__crt_locale_pointers *)_Locale);
  eVar4 = 0;
  if (*(int *)(local_14 + 0xa8) == 0) {
    if ((ushort)_WCh < 0x100) {
      if (_MbCh != (char *)0x0) {
        if (_SizeInBytes == 0) goto LAB_00407fba;
        *_MbCh = (char)_WCh;
      }
      if (_SizeConverted != (int *)0x0) {
        *_SizeConverted = 1;
      }
      goto LAB_00407f3a;
    }
    if ((_MbCh != (char *)0x0) && (_SizeInBytes != 0)) {
      _memset(_MbCh,0,_SizeInBytes);
    }
  }
  else {
    local_8 = 0;
    iVar2 = WideCharToMultiByte(*(UINT *)(local_14 + 8),0,&_WCh,1,_MbCh,_SizeInBytes,(LPCSTR)0x0,
                                &local_8);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x7a) {
        if ((_MbCh != (char *)0x0) && (_SizeInBytes != 0)) {
          _memset(_MbCh,0,_SizeInBytes);
        }
LAB_00407fba:
        piVar1 = __errno();
        eVar4 = 0x22;
        *piVar1 = 0x22;
        FUN_00406b06();
        goto LAB_00407f3a;
      }
    }
    else if (local_8 == 0) {
      if (_SizeConverted != (int *)0x0) {
        *_SizeConverted = iVar2;
      }
      goto LAB_00407f3a;
    }
  }
  piVar1 = __errno();
  eVar4 = 0x2a;
  *piVar1 = 0x2a;
LAB_00407f3a:
  if (local_c != '\0') {
    *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
  }
  return eVar4;
}



// ===== _wctomb_s @ 00407fce (size 29) =====

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}



// ===== FUN_00407feb @ 00407feb (size 439) =====

uint __cdecl FUN_00407feb(short *param_1,uint param_2)

{
  undefined1 (*pauVar1) [32];
  short *psVar2;
  undefined1 auVar3 [32];
  uint uVar4;
  undefined1 (*pauVar5) [32];
  short *psVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar10 [64];
  
  psVar6 = param_1;
  if (DAT_0041ab44 < 5) {
    if (DAT_0041ab44 < 1) {
      for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
      }
    }
    else {
      if (((uint)param_1 & 1) == 0) {
        uVar8 = (-(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf)) >> 1;
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
        for (; (psVar6 != param_1 + uVar8 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
        }
        uVar4 = (int)psVar6 - (int)param_1 >> 1;
        if (uVar4 != uVar8) {
          return uVar4;
        }
        psVar6 = param_1 + uVar4;
        auVar10 = ZEXT4864(in_ZMM1._16_48_) << 0x80;
        psVar2 = psVar6 + ((param_2 - uVar8) - (param_2 - uVar8 & 0xf));
        for (; psVar6 != psVar2; psVar6 = psVar6 + 8) {
          auVar9._0_2_ = -(ushort)(*psVar6 == 0);
          auVar9._2_2_ = -(ushort)(psVar6[1] == 0);
          auVar9._4_2_ = -(ushort)(psVar6[2] == 0);
          auVar9._6_2_ = -(ushort)(psVar6[3] == 0);
          auVar9._8_2_ = -(ushort)(psVar6[4] == auVar10._8_2_);
          auVar9._10_2_ = -(ushort)(psVar6[5] == auVar10._10_2_);
          auVar9._12_2_ = -(ushort)(psVar6[6] == auVar10._12_2_);
          auVar9._14_2_ = -(ushort)(psVar6[7] == auVar10._14_2_);
          if ((((((((((((((((SUB161(auVar9 >> 7,0) & 1) != 0 || (SUB161(auVar9 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar9 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar9 >> 0x1f,0) & 1) != 0) || (SUB161(auVar9 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar9 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar9 >> 0x37,0) & 1) != 0) || (SUB161(auVar9 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar9 >> 0x47,0) & 1) != 0) || (SUB161(auVar9 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar9 >> 0x57,0) & 1) != 0) || (SUB161(auVar9 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar9 >> 0x67,0) & 1) != 0) || (SUB161(auVar9 >> 0x6f,0) & 1) != 0) ||
              (auVar9._14_2_ >> 7 & 1) != 0) || (auVar9._14_2_ & 0x8000) != 0) break;
        }
        for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
        }
        iVar7 = (int)psVar6 - (int)param_1;
        goto LAB_00408198;
      }
      for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
      }
    }
  }
  else {
    if (((uint)param_1 & 1) == 0) {
      uVar8 = (-(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f)) >> 1;
      if (param_2 < uVar8) {
        uVar8 = param_2;
      }
      for (; (psVar6 != param_1 + uVar8 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
      }
      uVar4 = (int)psVar6 - (int)param_1 >> 1;
      if (uVar4 != uVar8) {
        return uVar4;
      }
      pauVar5 = (undefined1 (*) [32])(param_1 + uVar4);
      pauVar1 = (undefined1 (*) [32])
                ((int)pauVar5 + ((param_2 - uVar8) - (param_2 - uVar8 & 0x1f)) * 2);
      while ((pauVar5 != pauVar1 &&
             (auVar3 = vpcmpeqw_avx2(ZEXT1232(ZEXT812(0)),*pauVar5),
             (((((((((((((((((((((((((((((((SUB321(auVar3 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar3 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar3 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar3 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar3 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar3 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar3 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar3 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar3 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar3 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar3 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar3 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar3 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar3 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar3 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar3 >> 0x7f,0) == '\0') && (SUB321(auVar3 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar3 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar3 >> 0x97,0) & 1) == 0) && (SUB321(auVar3 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar3 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar3 >> 0xaf,0) & 1) == 0) && (SUB321(auVar3 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar3 >> 0xbf,0) == '\0') && (SUB321(auVar3 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar3 >> 0xcf,0) & 1) == 0) && (SUB321(auVar3 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar3 >> 0xdf,0) & 1) == 0) && (SUB321(auVar3 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar3 >> 0xef,0) & 1) == 0) && (SUB321(auVar3 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar3[0x1f]))) {
        pauVar5 = pauVar5 + 1;
      }
      for (; (pauVar5 != (undefined1 (*) [32])(param_1 + param_2) && (*(short *)*pauVar5 != 0));
          pauVar5 = (undefined1 (*) [32])(*pauVar5 + 2)) {
      }
      return (int)pauVar5 - (int)param_1 >> 1;
    }
    for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
    }
  }
  iVar7 = (int)psVar6 - (int)param_1;
LAB_00408198:
  return iVar7 >> 1;
}



// ===== __acrt_fp_classify @ 004081a2 (size 108) =====

/* Library Function - Single Match
    enum __acrt_fp_class __cdecl __acrt_fp_classify(double const &)
   
   Library: Visual Studio 2015 Release */

__acrt_fp_class __cdecl __acrt_fp_classify(double *param_1)

{
  uint uVar1;
  undefined4 uStack_14;
  
  uVar1 = *(uint *)((int)param_1 + 4);
  if ((uVar1 >> 0x14 & 0x7ff) == 0x7ff) {
    if (*(int *)param_1 == 0 && (uVar1 & 0xfffff) == 0) {
      uStack_14 = 1;
    }
    else if ((((uVar1 & 0x80000000) == 0) || (*(int *)param_1 != 0)) ||
            ((uVar1 & 0xfffff) != 0x80000)) {
      if ((uVar1 & 0x80000) == 0) {
        uStack_14 = 3;
      }
      else {
        uStack_14 = 2;
      }
    }
    else {
      uStack_14 = 4;
    }
  }
  else {
    uStack_14 = 0;
  }
  return uStack_14;
}



// ===== __acrt_fp_is_negative @ 0040820e (size 30) =====

/* Library Function - Single Match
    bool __cdecl __acrt_fp_is_negative(double const &)
   
   Library: Visual Studio 2015 Release */

bool __cdecl __acrt_fp_is_negative(double *param_1)

{
  return ((ulonglong)*param_1 & 0x8000000000000000) != 0;
}



// ===== fp_format_a @ 0040822c (size 771) =====

/* Library Function - Single Match
    int __cdecl fp_format_a(double const * const,char *,unsigned int,char * const,unsigned
   int,int,bool,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_a(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  int *piVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  char *_Dst;
  char *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int local_34;
  int local_30;
  char local_28;
  undefined4 local_24;
  int local_20;
  char *local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (param_6 < 0) {
    param_6 = 0;
  }
  *param_2 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_34,param_9);
  if (param_3 <= param_6 + 0xbU) {
    piVar1 = __errno();
    iVar2 = 0x22;
    *piVar1 = 0x22;
    FUN_00406b06();
    goto LAB_00408516;
  }
  local_24 = *(undefined4 *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    iVar2 = fp_format_e(param_1,param_2,param_3,param_4,param_5,param_6,false,param_8,
                        (__crt_locale_pointers *)0x0);
    if (iVar2 == 0) {
      pauVar3 = FUN_00411fc0((undefined1 (*) [16])param_2,0x65);
      if (pauVar3 != (undefined1 (*) [16])0x0) {
        (*pauVar3)[0] = (!param_7 - 1U & 0xe0) + 0x70;
        (*pauVar3)[3] = 0;
      }
      iVar2 = 0;
    }
    else {
      *param_2 = '\0';
    }
    goto LAB_00408516;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
  }
  local_10 = 0x3ff;
  iVar2 = (!param_7 - 1 & 0xffffffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    *param_2 = '0';
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = 0x3fe;
    }
  }
  else {
    *param_2 = '1';
  }
  local_1c = param_2 + 1;
  _Dst = param_2 + 2;
  if (param_6 == 0) {
    *local_1c = '\0';
  }
  else {
    *local_1c = *(char *)**(undefined4 **)(local_30 + 0x88);
  }
  local_20 = iVar2;
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_14 = 0, *(int *)param_1 != 0)) {
    local_8 = 0;
    local_c = 0x30;
    local_14 = 0xf0000;
    do {
      if (param_6 < 1) break;
      uVar9 = __aullshr((byte)local_c,*(uint *)((int)param_1 + 4) & local_14 & 0xfffff);
      uVar4 = (uint)(ushort)((short)uVar9 + 0x30);
      if (0x39 < uVar4) {
        uVar4 = uVar4 + iVar2;
      }
      *_Dst = (char)uVar4;
      _Dst = _Dst + 1;
      local_8 = local_8 >> 4 | local_14 << 0x1c;
      local_14 = local_14 >> 4;
      local_c = local_c + -4;
      param_6 = param_6 - 1;
    } while (-1 < (short)local_c);
    if ((-1 < (short)local_c) &&
       (uVar9 = __aullshr((byte)local_c,*(uint *)((int)param_1 + 4) & local_14 & 0xfffff),
       pcVar7 = _Dst, 8 < (ushort)uVar9)) {
      while( true ) {
        pcVar5 = pcVar7 + -1;
        if ((*pcVar5 != 'f') && (*pcVar5 != 'F')) break;
        *pcVar5 = '0';
        pcVar7 = pcVar5;
      }
      if (pcVar5 == local_1c) {
        pcVar7[-2] = pcVar7[-2] + '\x01';
      }
      else if (*pcVar5 == '9') {
        *pcVar5 = (char)local_20 + ':';
      }
      else {
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
  }
  if (0 < param_6) {
    _memset(_Dst,0x30,param_6);
    _Dst = _Dst + param_6;
  }
  if (*local_1c == '\0') {
    _Dst = local_1c;
  }
  *_Dst = (!param_7 - 1U & 0xe0) + 0x70;
  uVar9 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar4 = (uint)uVar9 & 0x7ff;
  uVar6 = uVar4 - local_10;
  uVar4 = -(uint)(uVar4 < local_10);
  if ((int)uVar4 < 0) {
    _Dst[1] = '-';
    bVar8 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar4 = -(uVar4 + bVar8);
  }
  else {
    _Dst[1] = '+';
  }
  pcVar5 = _Dst + 2;
  *pcVar5 = '0';
  pcVar7 = pcVar5;
  if (-1 < (int)uVar4) {
    if (((int)uVar4 < 1) && (uVar6 < 1000)) {
LAB_004084c9:
      if (((int)uVar4 < 0) || (((int)uVar4 < 1 && (uVar6 < 100)))) goto LAB_004084e7;
    }
    else {
      uVar10 = __alldvrm(uVar6,uVar4,1000,0);
      local_20 = (int)((ulonglong)uVar10 >> 0x20);
      *pcVar5 = (char)uVar10 + '0';
      pcVar7 = _Dst + 3;
      uVar6 = extraout_ECX;
      if (pcVar7 == pcVar5) goto LAB_004084c9;
    }
    uVar10 = __alldvrm(uVar6,uVar4,100,0);
    local_20 = (int)((ulonglong)uVar10 >> 0x20);
    *pcVar7 = (char)uVar10 + '0';
    pcVar7 = pcVar7 + 1;
    uVar6 = extraout_ECX_00;
  }
LAB_004084e7:
  if ((pcVar7 != pcVar5) || ((-1 < (int)uVar4 && ((0 < (int)uVar4 || (9 < uVar6)))))) {
    uVar10 = __alldvrm(uVar6,uVar4,10,0);
    *pcVar7 = (char)uVar10 + '0';
    pcVar7 = pcVar7 + 1;
    uVar6 = extraout_ECX_01;
  }
  iVar2 = 0;
  *pcVar7 = (char)uVar6 + '0';
  pcVar7[1] = '\0';
LAB_00408516:
  if (local_28 != '\0') {
    *(uint *)(local_34 + 0x350) = *(uint *)(local_34 + 0x350) & 0xfffffffd;
  }
  return iVar2;
}



// ===== fp_format_e @ 0040852f (size 155) =====

/* Library Function - Single Match
    int __cdecl fp_format_e(double const * const,char * const,unsigned int,char * const,unsigned
   int,int,bool,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_e(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  int iVar1;
  uint uVar2;
  int local_10 [3];
  
  FUN_0040cb5e(*(int *)param_1,*(uint *)((int)param_1 + 4),param_6 + 1,local_10,param_4,param_5);
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = (param_3 - (local_10[0] == 0x2d)) - (uint)(0 < param_6);
  }
  iVar1 = ___acrt_fp_strflt_to_string
                    ((uint *)(param_2 + (uint)(0 < param_6) + (uint)(local_10[0] == 0x2d)),uVar2,
                     param_6 + 1,(int)local_10);
  if (iVar1 == 0) {
    iVar1 = FUN_004085ca(param_2,param_3,param_6,param_7,param_8,local_10,'\0',param_9);
  }
  else {
    *param_2 = '\0';
  }
  return iVar1;
}



// ===== FUN_004085ca @ 004085ca (size 330) =====

undefined4 __cdecl
FUN_004085ca(char *param_1,uint param_2,int param_3,char param_4,int param_5,int *param_6,
            char param_7,__crt_locale_pointers *param_8)

{
  int *piVar1;
  char *_SizeInBytes;
  errno_t eVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int local_14;
  int local_10;
  char local_8;
  
  iVar5 = param_3;
  if (param_3 < 1) {
    iVar5 = 0;
  }
  if (iVar5 + 9U < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_8);
    if (param_7 != '\0') {
      shift_bytes(param_1,param_2,param_1 + (*param_6 == 0x2d),(uint)(0 < param_3));
    }
    pcVar6 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = '-';
      pcVar6 = param_1 + 1;
    }
    if (0 < param_3) {
      *pcVar6 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
      *pcVar6 = *(char *)**(undefined4 **)(local_10 + 0x88);
    }
    pcVar6 = pcVar6 + (uint)(param_7 == '\0') + param_3;
    _SizeInBytes = (char *)0xffffffff;
    if (param_2 != 0xffffffff) {
      _SizeInBytes = param_1 + (param_2 - (int)pcVar6);
    }
    eVar2 = _strcpy_s(pcVar6,(rsize_t)_SizeInBytes,"e+000");
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *pcVar6 = 'E';
    }
    if (*(char *)param_6[2] != '0') {
      iVar5 = param_6[1] + -1;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        pcVar6[1] = '-';
      }
      if (99 < iVar5) {
        iVar3 = iVar5 / 100;
        iVar5 = iVar5 % 100;
        pcVar6[2] = pcVar6[2] + (char)iVar3;
      }
      if (9 < iVar5) {
        iVar3 = iVar5 / 10;
        iVar5 = iVar5 % 10;
        pcVar6[3] = pcVar6[3] + (char)iVar3;
      }
      pcVar6[4] = pcVar6[4] + (char)iVar5;
    }
    if ((param_5 == 2) && ((char)*(uint *)(pcVar6 + 2) == '0')) {
      FUN_00411a40((uint *)(pcVar6 + 2),(uint *)(pcVar6 + 3),3);
    }
    if (local_8 != '\0') {
      *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  else {
    piVar1 = __errno();
    uVar4 = 0x22;
    *piVar1 = 0x22;
    FUN_00406b06();
  }
  return uVar4;
}



// ===== fp_format_f @ 00408715 (size 141) =====

/* Library Function - Single Match
    int __cdecl fp_format_f(double const * const,char * const,unsigned int,char * const,unsigned
   int,int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_f(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           __crt_locale_pointers *param_7)

{
  int iVar1;
  uint uVar2;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_10 = 0;
  local_c = 0;
  uStack_8 = 0;
  FUN_0040cb5e(*(int *)param_1,*(uint *)((int)param_1 + 4),param_6,&local_10,param_4,param_5);
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = param_3 - (local_10 == 0x2d);
  }
  iVar1 = ___acrt_fp_strflt_to_string
                    ((uint *)(param_2 + (local_10 == 0x2d)),uVar2,local_c + param_6,(int)&local_10);
  if (iVar1 == 0) {
    iVar1 = fp_format_f_internal(param_2,param_3,param_6,(_strflt *)&local_10,false,param_7);
  }
  else {
    *param_2 = '\0';
  }
  return iVar1;
}



// ===== fp_format_f_internal @ 004087a2 (size 215) =====

/* Library Function - Single Match
    int __cdecl fp_format_f_internal(char * const,unsigned int,int,struct _strflt *
   const,bool,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_f_internal
          (char *param_1,uint param_2,int param_3,_strflt *param_4,bool param_5,
          __crt_locale_pointers *param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int local_14;
  int local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_6);
  iVar1 = *(int *)(param_4 + 4);
  if ((param_5) && (iVar1 + -1 == param_3)) {
    iVar2 = *(int *)param_4;
    (param_1 + (uint)(iVar2 == 0x2d) + iVar1 + -1)[0] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + iVar1 + -1)[1] = '\0';
  }
  pcVar3 = param_1;
  if (*(int *)param_4 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (*(int *)(param_4 + 4) < 1) {
    shift_bytes(param_1,param_2,pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + *(int *)(param_4 + 4);
  }
  if (0 < param_3) {
    shift_bytes(param_1,param_2,pcVar3,1);
    *pcVar3 = *(char *)**(undefined4 **)(local_10 + 0x88);
    iVar1 = *(int *)(param_4 + 4);
    if (iVar1 < 0) {
      if ((param_5) || (-iVar1 < param_3)) {
        param_3 = -iVar1;
      }
      shift_bytes(param_1,param_2,pcVar3 + 1,param_3);
      _memset(pcVar3 + 1,0x30,param_3);
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return 0;
}



// ===== fp_format_g @ 00408879 (size 200) =====

/* Library Function - Single Match
    int __cdecl fp_format_g(double const * const,char * const,unsigned int,char * const,unsigned
   int,int,bool,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_g(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  int local_14;
  int local_10;
  undefined4 uStack_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  uStack_c = 0;
  FUN_0040cb5e(*(int *)param_1,*(uint *)((int)param_1 + 4),param_6,&local_14,param_4,param_5);
  bVar5 = local_14 == 0x2d;
  local_8 = local_10 + -1;
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = param_3 - bVar5;
  }
  iVar3 = ___acrt_fp_strflt_to_string((uint *)(param_2 + bVar5),uVar2,param_6,(int)&local_14);
  if (iVar3 == 0) {
    iVar3 = local_10 + -1;
    if ((iVar3 < -4) || (param_6 <= iVar3)) {
      iVar3 = FUN_004085ca(param_2,param_3,param_6,param_7,param_8,&local_14,'\x01',param_9);
    }
    else {
      puVar1 = (uint *)(param_2 + bVar5);
      if (local_8 < iVar3) {
        do {
          puVar4 = puVar1;
          puVar1 = (uint *)((int)puVar4 + 1);
        } while ((char)*puVar4 != '\0');
        *(undefined1 *)((int)puVar4 + -1) = 0;
      }
      iVar3 = fp_format_f_internal(param_2,param_3,param_6,(_strflt *)&local_14,true,param_9);
    }
  }
  else {
    *param_2 = '\0';
  }
  return iVar3;
}



// ===== FUN_00408941 @ 00408941 (size 247) =====

void __cdecl FUN_00408941(int param_1,byte param_2,char *param_3,uint param_4,char param_5)

{
  char *pcVar1;
  char cVar2;
  errno_t eVar3;
  uint uVar4;
  char *pcVar5;
  undefined *local_48 [4];
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  char *local_28;
  undefined *local_24;
  char *local_20;
  undefined *local_1c;
  char *local_18;
  undefined *local_14;
  char *local_10;
  undefined *local_c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  if (param_4 < param_2 + 4) {
    *param_3 = '\0';
  }
  else {
    if (param_2 != 0) {
      *param_3 = '-';
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
      *param_3 = '\0';
    }
    local_28 = "NAN(SNAN)";
    local_48[0] = &DAT_0041478c;
    local_48[1] = &DAT_0041478c;
    local_48[2] = &DAT_00414790;
    local_48[3] = &DAT_00414790;
    local_20 = "nan(snan)";
    local_30 = &DAT_00414798;
    uVar4 = (param_5 != '\0') - 1 & 2;
    local_2c = &DAT_00414798;
    local_1c = &DAT_00414798;
    local_c = &DAT_00414798;
    local_18 = "NAN(IND)";
    local_38 = &DAT_00414794;
    local_34 = &DAT_00414794;
    local_24 = &DAT_00414794;
    local_14 = &DAT_00414794;
    local_10 = "nan(ind)";
    pcVar5 = local_48[param_1 * 4 + -4 + uVar4];
    pcVar1 = pcVar5 + 1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    eVar3 = _strcpy_s(param_3,param_4,
                      local_48[((param_1 * 4 + -3) -
                               (uint)((uint)((int)pcVar5 - (int)pcVar1) < param_4)) + uVar4]);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== shift_bytes @ 00408a39 (size 52) =====

/* Library Function - Single Match
    void __cdecl shift_bytes(char * const,unsigned int,char * const,int)
   
   Library: Visual Studio 2015 Release */

void __cdecl shift_bytes(char *param_1,uint param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (param_4 != 0) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00411a40((uint *)(param_3 + param_4),(uint *)param_3,
                 (uint)(pcVar2 + (1 - (int)(param_3 + 1))));
  }
  return;
}



// ===== ___acrt_fp_format @ 00408a6d (size 330) =====

/* Library Function - Single Match
    ___acrt_fp_format
   
   Library: Visual Studio 2015 Release */

int __cdecl
___acrt_fp_format(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
                 int param_7,uint param_8,undefined4 param_9,__crt_locale_pointers *param_10)

{
  bool bVar1;
  int *piVar2;
  __acrt_fp_class _Var3;
  int iVar4;
  uint uVar5;
  bool local_8;
  
  if (param_2 == (char *)0x0) {
    piVar2 = __errno();
    iVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_00406b06();
  }
  else if (((param_3 == 0) || (param_4 == (char *)0x0)) || (param_5 == 0)) {
    piVar2 = __errno();
    iVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_00406b06();
  }
  else {
    if (((param_6 == 0x41) || (param_6 == 0x45)) ||
       ((param_6 == 0x46 || (local_8 = false, param_6 == 0x47)))) {
      local_8 = true;
    }
    if (((param_8 & 8) == 0) && (_Var3 = __acrt_fp_classify(param_1), _Var3 != 0)) {
      bVar1 = __acrt_fp_is_negative(param_1);
      iVar4 = FUN_00408941(_Var3,bVar1,param_2,param_3,local_8);
    }
    else {
      if ((param_8 & 0x10) == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
      if (param_6 < 0x62) {
        if ((param_6 == 0x61) || (param_6 == 0x41)) {
          iVar4 = fp_format_a(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar5,param_10
                             );
          return iVar4;
        }
        iVar4 = param_6 + -0x45;
      }
      else {
        iVar4 = param_6 + -0x65;
      }
      if (iVar4 == 0) {
        iVar4 = fp_format_e(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar5,param_10);
      }
      else if (iVar4 == 1) {
        iVar4 = fp_format_f(param_1,param_2,param_3,param_4,param_5,param_7,param_10);
      }
      else {
        iVar4 = fp_format_g(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar5,param_10);
      }
    }
  }
  return iVar4;
}



// ===== fputwc_binary_nolock @ 00408bb7 (size 50) =====

/* Library Function - Single Match
    unsigned short __cdecl fputwc_binary_nolock(wchar_t,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

ushort __cdecl fputwc_binary_nolock(ushort param_1,int *param_2)

{
  ushort uVar1;
  
  param_2[2] = param_2[2] + -2;
  if (param_2[2] < 0) {
    uVar1 = FUN_0040e2cb();
    return uVar1;
  }
  *(ushort *)*param_2 = param_1;
  *param_2 = *param_2 + 2;
  return param_1;
}



// ===== __fputwc_nolock @ 00408be9 (size 294) =====

/* Library Function - Single Match
    __fputwc_nolock
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl __fputwc_nolock(wchar_t _Ch,FILE *_File)

{
  wint_t wVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  errno_t eVar5;
  undefined *puVar6;
  undefined2 in_stack_00000006;
  int local_14;
  byte local_10 [8];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  if (((uint)_File->_flag >> 0xc & 1) == 0) {
    iVar2 = __fileno(_File);
    puVar6 = &DAT_0041a138;
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_0041a138;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x3f) * 0x30 + (&DAT_0041af58)[iVar2 >> 6]);
    }
    if ((puVar4[0x29] != '\x02') && (puVar4[0x29] != '\x01')) {
      iVar2 = __fileno(_File);
      if ((iVar2 != -1) && (iVar2 = __fileno(_File), iVar2 != -2)) {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar6 = (undefined *)((uVar3 & 0x3f) * 0x30 + (&DAT_0041af58)[iVar2 >> 6]);
      }
      if ((puVar6[0x28] & 0x80) != 0) {
        eVar5 = _wctomb_s(&local_14,(char *)local_10,5,_Ch);
        if ((eVar5 == 0) && (iVar2 = 0, 0 < local_14)) {
          do {
            uVar3 = __fputc_nolock(local_10[iVar2],(int *)_File);
            if (uVar3 == 0xffffffff) break;
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_14);
        }
        goto LAB_00408d00;
      }
    }
    fputwc_binary_nolock(__Ch,_File);
  }
  else {
    fputwc_binary_nolock(__Ch,_File);
  }
LAB_00408d00:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



// ===== __fileno @ 00408d0f (size 38) =====

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2015 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
    return -1;
  }
  return _File->_file;
}



// ===== __fputc_nolock @ 00408d35 (size 41) =====

/* Library Function - Single Match
    __fputc_nolock
   
   Library: Visual Studio 2015 Release */

uint __cdecl __fputc_nolock(byte param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_0040e2c0();
    return uVar2;
  }
  *(byte *)*param_2 = param_1;
  *param_2 = *param_2 + 1;
  return (uint)param_1;
}



// ===== __get_printf_count_output @ 00408d5e (size 21) =====

/* Library Function - Single Match
    __get_printf_count_output
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __get_printf_count_output(void)

{
  return (uint)(DAT_0041b160 == (DAT_0041a004 | 1));
}



// ===== ___acrt_stdio_begin_temporary_buffering_nolock @ 00408d73 (size 181) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_stdio_begin_temporary_buffering_nolock
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___acrt_stdio_begin_temporary_buffering_nolock(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  FILE *pFVar3;
  LPVOID pvVar4;
  char *pcVar5;
  int *piVar6;
  
  iVar2 = __fileno(param_1);
  iVar2 = __isatty(iVar2);
  if (iVar2 == 0) {
    return 0;
  }
  pFVar3 = (FILE *)___acrt_iob_func(1);
  if (param_1 == pFVar3) {
    piVar6 = &DAT_0041b164;
  }
  else {
    pFVar3 = (FILE *)___acrt_iob_func(2);
    if (param_1 != pFVar3) goto LAB_00408e21;
    piVar6 = &DAT_0041b168;
  }
  _DAT_0041ac0c = _DAT_0041ac0c + 1;
  piVar1 = &param_1->_flag;
  pFVar3 = (FILE *)*piVar1;
  if (((uint)pFVar3 & 0x4c0) != 0) {
LAB_00408e21:
    return (uint)pFVar3 & 0xffffff00;
  }
  LOCK();
  *piVar1 = *piVar1 | 0x282;
  UNLOCK();
  iVar2 = *piVar6;
  if (iVar2 == 0) {
    pvVar4 = __malloc_base(0x1000);
    *piVar6 = (int)pvVar4;
    FID_conflict__free((void *)0x0);
    iVar2 = *piVar6;
    if (iVar2 == 0) {
      param_1->_base = (char *)0x2;
      param_1->_cnt = (int)&param_1->_charbuf;
      param_1->_ptr = (char *)&param_1->_charbuf;
      param_1->_bufsiz = 2;
      pcVar5 = (char *)0x0;
      goto LAB_00408e1d;
    }
  }
  param_1->_cnt = iVar2;
  pcVar5 = (char *)*piVar6;
  param_1->_ptr = pcVar5;
  param_1->_base = (char *)0x1000;
  param_1->_bufsiz = 0x1000;
LAB_00408e1d:
  return CONCAT31((int3)((uint)pcVar5 >> 8),1);
}



// ===== ___acrt_stdio_end_temporary_buffering_nolock @ 00408e28 (size 57) =====

/* Library Function - Single Match
    ___acrt_stdio_end_temporary_buffering_nolock
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_stdio_end_temporary_buffering_nolock(char param_1,FILE *param_2)

{
  int *piVar1;
  
  if ((param_1 != '\0') && (piVar1 = &param_2->_flag, ((uint)*piVar1 >> 9 & 1) != 0)) {
    ___acrt_stdio_flush_nolock(param_2);
    LOCK();
    *piVar1 = *piVar1 & 0xfffffd7f;
    UNLOCK();
    param_2->_bufsiz = 0;
    param_2->_cnt = 0;
    param_2->_ptr = (char *)0x0;
  }
  return;
}



// ===== _wcscpy_s @ 00408e61 (size 100) =====

/* Library Function - Single Match
    _wcscpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      pwVar3 = _Dst;
      do {
        wVar1 = *(wchar_t *)(((int)_Src - (int)_Dst) + (int)pwVar3);
        *pwVar3 = wVar1;
        pwVar3 = pwVar3 + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      piVar2 = __errno();
      iVar4 = 0x22;
      goto LAB_00408e88;
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  iVar4 = 0x16;
LAB_00408e88:
  *piVar2 = iVar4;
  FUN_00406b06();
  return iVar4;
}



// ===== common_tcsncpy_s<wchar_t> @ 00408ec5 (size 205) =====

/* Library Function - Single Match
    int __cdecl common_tcsncpy_s<wchar_t>(wchar_t * const,unsigned int,wchar_t const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_tcsncpy_s<wchar_t>(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4)

{
  wchar_t wVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  if (param_4 == 0) {
    if (param_1 == (wchar_t *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_00408ee7:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = L'\0';
          return 0;
        }
        if (param_3 != (wchar_t *)0x0) {
          uVar3 = param_4;
          uVar4 = param_2;
          pwVar5 = param_1;
          if (param_4 == 0xffffffff) {
            do {
              wVar1 = *(wchar_t *)(((int)param_3 - (int)param_1) + (int)pwVar5);
              *pwVar5 = wVar1;
              pwVar5 = pwVar5 + 1;
              if (wVar1 == L'\0') break;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          else {
            do {
              wVar1 = *(wchar_t *)(((int)param_3 - (int)param_1) + (int)pwVar5);
              *pwVar5 = wVar1;
              pwVar5 = pwVar5 + 1;
              if ((wVar1 == L'\0') || (uVar4 = uVar4 - 1, uVar4 == 0)) break;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
            if (uVar3 == 0) {
              *pwVar5 = L'\0';
            }
          }
          if (uVar4 != 0) {
            return 0;
          }
          if (param_4 == 0xffffffff) {
            param_1[param_2 - 1] = L'\0';
            return 0x50;
          }
          *param_1 = L'\0';
          piVar2 = __errno();
          iVar6 = 0x22;
          goto LAB_00408f0c;
        }
        *param_1 = L'\0';
      }
    }
  }
  else if (param_1 != (wchar_t *)0x0) goto LAB_00408ee7;
  piVar2 = __errno();
  iVar6 = 0x16;
LAB_00408f0c:
  *piVar2 = iVar6;
  FUN_00406b06();
  return iVar6;
}



// ===== FUN_00408f92 @ 00408f92 (size 11) =====

void __cdecl FUN_00408f92(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4)

{
  common_tcsncpy_s<wchar_t>(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_00408f9d @ 00408f9d (size 24) =====

uint __cdecl FUN_00408f9d(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (uint)(param_2 < param_1);
}



// ===== FUN_00408fb5 @ 00408fb5 (size 460) =====

void __cdecl FUN_00408fb5(int *param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  wchar_t *pwVar5;
  int iVar6;
  LPVOID pvVar7;
  short *psVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  wchar_t *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  if (param_2 == (undefined4 *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_00406b06();
  }
  else {
    *param_2 = 0;
    local_20 = 0;
    local_2c = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    iVar6 = *param_1;
    puVar11 = local_2c;
    puVar3 = local_28;
    while (local_2c = puVar11, local_28 = puVar3, iVar6 != 0) {
      local_10 = 0x3f002a;
      local_c = 0;
      pwVar5 = _wcspbrk((wchar_t *)*param_1,(wchar_t *)&local_10);
      if (pwVar5 == (wchar_t *)0x0) {
        iVar6 = FUN_00409182((wchar_t *)*param_1,(wchar_t *)0x0,0,&local_2c);
      }
      else {
        iVar6 = expand_argument_wildcards<>((wchar_t *)*param_1,pwVar5,(int *)&local_2c);
      }
      if (iVar6 != 0) goto LAB_0040915a;
      param_1 = param_1 + 1;
      puVar11 = local_2c;
      puVar3 = local_28;
      iVar6 = *param_1;
    }
    local_18 = 0;
    local_14 = 0;
    local_1c = (wchar_t *)(((int)puVar3 - (int)puVar11 >> 2) + 1);
    uVar10 = ~-(uint)(puVar3 < puVar11) & ((int)puVar3 - (int)puVar11) + 3U >> 2;
    if (uVar10 != 0) {
      local_18 = 0;
      puVar9 = puVar11;
      do {
        psVar8 = (short *)*puVar9;
        psVar1 = psVar8 + 1;
        do {
          sVar2 = *psVar8;
          psVar8 = psVar8 + 1;
        } while (sVar2 != (short)local_20);
        puVar9 = puVar9 + 1;
        local_18 = local_18 + 1 + ((int)psVar8 - (int)psVar1 >> 1);
        local_14 = local_14 + 1;
      } while (local_14 != uVar10);
    }
    pvVar7 = ___acrt_allocate_buffer_for_argv((uint)local_1c,local_18,2);
    if (pvVar7 != (LPVOID)0x0) {
      pwVar5 = (wchar_t *)((int)pvVar7 + (int)local_1c * 4);
      local_1c = pwVar5;
      if (puVar11 != puVar3) {
        local_10 = (int)pvVar7 - (int)puVar11;
        do {
          psVar8 = (short *)*puVar11;
          psVar1 = psVar8 + 1;
          do {
            sVar2 = *psVar8;
            psVar8 = psVar8 + 1;
          } while (sVar2 != (short)local_20);
          local_14 = ((int)psVar8 - (int)psVar1 >> 1) + 1;
          iVar6 = FUN_00408f92(local_1c,local_18 - ((int)local_1c - (int)pwVar5 >> 1),
                               (wchar_t *)*puVar11,local_14);
          if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(wchar_t **)(local_10 + (int)puVar11) = local_1c;
          puVar11 = puVar11 + 1;
          local_1c = local_1c + local_14;
        } while (puVar11 != puVar3);
      }
      *param_2 = pvVar7;
    }
    FID_conflict__free((void *)0x0);
LAB_0040915a:
    ~argument_list<>(&local_2c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_00409182 @ 00409182 (size 157) =====

int __cdecl FUN_00409182(wchar_t *param_1,wchar_t *param_2,uint param_3,void *param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pwVar2 = param_1;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  uVar4 = ((int)pwVar2 - (int)(param_1 + 1) >> 1) + 1;
  if (-param_3 - 1 < uVar4) {
    iVar3 = 0xc;
  }
  else {
    uVar5 = param_3 + 1 + uVar4;
    pwVar2 = __calloc_base(uVar5,2);
    if (param_3 != 0) {
      iVar3 = FUN_00408f92(pwVar2,uVar5,param_2,param_3);
      if (iVar3 != 0) goto LAB_00409213;
    }
    iVar3 = FUN_00408f92(pwVar2 + param_3,uVar5 - param_3,param_1,uVar4);
    if (iVar3 != 0) {
LAB_00409213:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar3 = append(param_4,pwVar2);
    FID_conflict__free((void *)0x0);
  }
  return iVar3;
}



// ===== expand_argument_wildcards<> @ 00409220 (size 438) =====

/* Library Function - Multiple Matches With Same Base Name
    int __cdecl expand_argument_wildcards<wchar_t>(wchar_t * const,wchar_t * const,class `anonymous
   namespace'::argument_list<wchar_t> &)
    int __cdecl expand_argument_wildcards<wchar_t>(wchar_t * const,wchar_t * const,class `anonymous
   namespace'::argument_list<wchar_t> &)
   
   Library: Visual Studio 2015 Release */

void __cdecl expand_argument_wildcards<>(wchar_t *param_1,wchar_t *param_2,int *param_3)

{
  wchar_t wVar1;
  byte bVar2;
  HANDLE hFindFile;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  for (; (((param_2 != param_1 && (wVar1 = *param_2, wVar1 != L'/')) && (wVar1 != L'\\')) &&
         (wVar1 != L':')); param_2 = param_2 + -1) {
  }
  wVar1 = *param_2;
  if ((wVar1 == L':') && (param_2 != param_1 + 1)) {
    FUN_00409182(param_1,(wchar_t *)0x0,0,param_3);
  }
  else {
    if ((wVar1 == L'/') || ((wVar1 == L'\\' || (wVar1 == L':')))) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    _memset(&local_258,0,0x250);
    hFindFile = FindFirstFileExW(param_1,FindExInfoStandard,&local_258,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffff) {
      FUN_00409182(param_1,(wchar_t *)0x0,0,param_3);
    }
    else {
      iVar3 = param_3[1] - *param_3 >> 2;
      do {
        if (((local_258.cFileName[0] != L'.') ||
            ((local_258.cFileName[1] != L'\0' &&
             ((local_258.cFileName[1] != L'.' || (local_258.cFileName[2] != L'\0')))))) &&
           (iVar4 = FUN_00409182(local_258.cFileName,param_1,
                                 -(uint)bVar2 & ((int)param_2 - (int)param_1 >> 1) + 1U,param_3),
           iVar4 != 0)) goto LAB_00409311;
        BVar5 = FindNextFileW(hFindFile,&local_258);
      } while (BVar5 != 0);
      iVar4 = param_3[1] - *param_3 >> 2;
      if (iVar3 != iVar4) {
        _qsort((void *)(*param_3 + iVar3 * 4),iVar4 - iVar3,4,FUN_00408f9d);
      }
    }
LAB_00409311:
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ~argument_list<> @ 004093d6 (size 37) =====

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall `anonymous namespace'::argument_list<char>::~argument_list<char>(void)
    public: __thiscall `anonymous namespace'::argument_list<char>::~argument_list<char>(void)
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

void __fastcall ~argument_list<>(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)param_1[1]; puVar1 = puVar1 + 1) {
    FID_conflict__free((void *)*puVar1);
  }
  FID_conflict__free((void *)*param_1);
  return;
}



// ===== append @ 004093fb (size 53) =====

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall `anonymous namespace'::argument_list<char>::append(char * const)
    public: int __thiscall `anonymous namespace'::argument_list<char>::append(char * const)
    public: int __thiscall `anonymous namespace'::argument_list<wchar_t>::append(wchar_t * const)
    public: int __thiscall `anonymous namespace'::argument_list<wchar_t>::append(wchar_t * const)
   
   Library: Visual Studio 2015 Release */

int __thiscall append(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = expand_if_necessary(this);
  if (iVar1 == 0) {
    **(undefined4 **)((int)this + 4) = param_1;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
    iVar1 = 0;
  }
  else {
    FID_conflict__free(param_1);
  }
  return iVar1;
}



// ===== expand_if_necessary @ 00409430 (size 135) =====

/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall expand_if_necessary(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (param_1[1] == param_1[2]) {
    if (*param_1 == 0) {
      pvVar3 = __calloc_base(4,4);
      *param_1 = (int)pvVar3;
      FID_conflict__free((void *)0x0);
      iVar1 = *param_1;
      if (iVar1 != 0) {
        param_1[1] = iVar1;
        param_1[2] = iVar1 + 0x10;
        goto LAB_0040943e;
      }
    }
    else {
      uVar4 = param_1[2] - *param_1 >> 2;
      if (uVar4 < 0x80000000) {
        pvVar3 = FUN_0040ab9a((LPCVOID)*param_1,uVar4 * 2,4);
        if (pvVar3 == (LPVOID)0x0) {
          uVar2 = 0xc;
        }
        else {
          *param_1 = (int)pvVar3;
          param_1[1] = (int)((int)pvVar3 + uVar4 * 4);
          param_1[2] = (int)((int)pvVar3 + uVar4 * 8);
          uVar2 = 0;
        }
        FID_conflict__free((void *)0x0);
        return uVar2;
      }
    }
    uVar2 = 0xc;
  }
  else {
LAB_0040943e:
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_004094b7 @ 004094b7 (size 11) =====

void __cdecl FUN_004094b7(int *param_1,undefined4 *param_2)

{
  FUN_00408fb5(param_1,param_2);
  return;
}



// ===== operator()<<lambda_978dc153c237d78434369da87b74ff60>,<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>&,<lambda_4a8533e2866a575feecb8298ce776b0d>_> @ 004094c2 (size 55) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_978dc153c237d78434369da87b74ff60>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &,class
   <lambda_4a8533e2866a575feecb8298ce776b0d> >(class <lambda_978dc153c237d78434369da87b74ff60>
   &&,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &,class
   <lambda_4a8533e2866a575feecb8298ce776b0d> &&)
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_978dc153c237d78434369da87b74ff60>,<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>&,<lambda_4a8533e2866a575feecb8298ce776b0d>_>
          (__crt_seh_guarded_call<void> *this,<lambda_978dc153c237d78434369da87b74ff60> *param_1,
          <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *param_2,
          <lambda_4a8533e2866a575feecb8298ce776b0d> *param_3)

{
  ___acrt_lock(*(int *)param_1);
  <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()(param_2);
  FUN_004094f9();
  return;
}



// ===== FUN_004094f9 @ 004094f9 (size 12) =====

void FUN_004094f9(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}



// ===== __acrt_lock_and_call<<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>_> @ 00409505 (size 40) =====

/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> >(enum
   __acrt_lock_id,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>_>
          (__acrt_lock_id param_1,<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_978dc153c237d78434369da87b74ff60>,<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>&,<lambda_4a8533e2866a575feecb8298ce776b0d>_>
            (&local_5,(<lambda_978dc153c237d78434369da87b74ff60> *)&local_10,param_2,
             (<lambda_4a8533e2866a575feecb8298ce776b0d> *)&local_c);
  return;
}



// ===== operator() @ 0040952d (size 196) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: void __thiscall <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()
          (<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *this)

{
  int iVar1;
  
  _DAT_0041b170 = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 4);
  _DAT_0041b174 = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 8);
  _DAT_0041b16c = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 0x21c);
  _memcpy_s(&DAT_0041b178,0xc,(void *)(*(int *)(**(int **)this + 0x48) + 0xc),0xc);
  _memcpy_s(&DAT_0041a328,0x101,(void *)(*(int *)(**(int **)this + 0x48) + 0x18),0x101);
  _memcpy_s(&DAT_0041a430,0x100,(void *)(*(int *)(**(int **)this + 0x48) + 0x119),0x100);
  LOCK();
  iVar1 = *(int *)PTR_DAT_0041a750;
  *(int *)PTR_DAT_0041a750 = iVar1 + -1;
  UNLOCK();
  if ((iVar1 + -1 == 0) && ((undefined4 *)PTR_DAT_0041a750 != &DAT_0041a530)) {
    FID_conflict__free(PTR_DAT_0041a750);
  }
  PTR_DAT_0041a750 = *(undefined **)(**(int **)this + 0x48);
  LOCK();
  **(int **)(**(int **)this + 0x48) = **(int **)(**(int **)this + 0x48) + 1;
  UNLOCK();
  return;
}



// ===== CPtoLocaleName @ 004095f1 (size 62) =====

/* Library Function - Single Match
    wchar_t const * __cdecl CPtoLocaleName(int)
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl CPtoLocaleName(int param_1)

{
  if (param_1 == 0x3a4) {
    return (wchar_t *)PTR_u_ja_JP_004147d4;
  }
  if (param_1 == 0x3a8) {
    return (wchar_t *)PTR_u_zh_CN_004147d8;
  }
  if (param_1 == 0x3b5) {
    return (wchar_t *)PTR_u_ko_KR_004147dc;
  }
  if (param_1 != 0x3b6) {
    return (wchar_t *)0x0;
  }
  return (wchar_t *)PTR_u_zh_TW_004147e0;
}



// ===== getSystemCP @ 0040962f (size 115) =====

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2015 Release */

int __cdecl getSystemCP(int param_1)

{
  int local_14;
  int local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)0x0);
  DAT_0041b184 = 0;
  if (param_1 == -2) {
    DAT_0041b184 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_0041b184 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_0041b184 = 1;
    param_1 = *(UINT *)(local_10 + 8);
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return param_1;
}



// ===== setSBCS @ 004096a2 (size 101) =====

/* Library Function - Single Match
    void __cdecl setSBCS(struct __crt_multibyte_data *)
   
   Library: Visual Studio 2015 Release */

void __cdecl setSBCS(__crt_multibyte_data *param_1)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  p_Var2 = param_1 + 0x18;
  _memset(p_Var2,0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  iVar1 = 0x101;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    *p_Var2 = p_Var2[(int)&DAT_0041a530 - (int)param_1];
    p_Var2 = p_Var2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  p_Var2 = param_1 + 0x119;
  iVar1 = 0x100;
  do {
    *p_Var2 = p_Var2[(int)&DAT_0041a530 - (int)param_1];
    p_Var2 = p_Var2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// ===== setSBUpLow @ 00409707 (size 404) =====

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct __crt_multibyte_data *)
   
   Library: Visual Studio 2015 Release */

void __cdecl setSBUpLow(__crt_multibyte_data *param_1)

{
  byte bVar1;
  __crt_multibyte_data _Var2;
  BOOL BVar3;
  uint uVar4;
  BYTE *pBVar5;
  __crt_multibyte_data *p_Var6;
  _cpinfo local_71c;
  WORD local_708 [512];
  __crt_multibyte_data local_308 [256];
  __crt_multibyte_data local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_71c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      p_Var6 = param_1 + uVar4 + 0x119;
      if (p_Var6 + (-0x61 - (int)(param_1 + 0x119)) + 0x20 < (__crt_multibyte_data *)0x1a) {
        param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x10);
        _Var2 = (__crt_multibyte_data)((char)uVar4 + ' ');
LAB_00409873:
        *p_Var6 = _Var2;
      }
      else {
        if (p_Var6 + (-0x61 - (int)(param_1 + 0x119)) < (__crt_multibyte_data *)0x1a) {
          param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x20);
          _Var2 = (__crt_multibyte_data)((char)uVar4 + -0x20);
          goto LAB_00409873;
        }
        *p_Var6 = (__crt_multibyte_data)0x0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    pBVar5 = local_71c.LeadByte;
    local_108[0] = ' ';
    while (local_71c.LeadByte[0] != 0) {
      bVar1 = pBVar5[1];
      for (uVar4 = (uint)local_71c.LeadByte[0]; (uVar4 <= bVar1 && (uVar4 < 0x100));
          uVar4 = uVar4 + 1) {
        local_108[uVar4] = ' ';
      }
      pBVar5 = pBVar5 + 2;
      local_71c.LeadByte[0] = *pBVar5;
    }
    ___acrt_GetStringTypeA
              ((__crt_locale_pointers *)0x0,1,local_108,0x100,local_708,*(UINT *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              ((__crt_locale_pointers *)0x0,*(wchar_t **)(param_1 + 0x21c),0x100,local_108,0x100,
               (char *)local_208,0x100,*(int *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              ((__crt_locale_pointers *)0x0,*(wchar_t **)(param_1 + 0x21c),0x200,local_108,0x100,
               (char *)local_308,0x100,*(int *)(param_1 + 4),0);
    uVar4 = 0;
    do {
      if ((local_708[uVar4] & 1) == 0) {
        if ((local_708[uVar4] & 2) != 0) {
          param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x20);
          _Var2 = local_308[uVar4];
          goto LAB_0040981a;
        }
        param_1[uVar4 + 0x119] = (__crt_multibyte_data)0x0;
      }
      else {
        param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x10);
        _Var2 = local_208[uVar4];
LAB_0040981a:
        param_1[uVar4 + 0x119] = _Var2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== setmbcp_internal @ 0040989b (size 257) =====

/* Library Function - Single Match
    int __cdecl setmbcp_internal(int,bool)
   
   Library: Visual Studio 2015 Release */

int __cdecl setmbcp_internal(int param_1,bool param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  __crt_multibyte_data *p_Var6;
  __acrt_ptd **local_10 [2];
  __acrt_ptd *local_8;
  
  local_8 = FUN_00407993();
  ___acrt_update_thread_multibyte_data();
  local_10[0] = (__acrt_ptd **)getSystemCP(param_1);
  if (local_10[0] == *(__acrt_ptd ***)(*(int *)(local_8 + 0x48) + 4)) {
    return 0;
  }
  p_Var2 = __malloc_base(0x220);
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    puVar5 = *(undefined4 **)(local_8 + 0x48);
    p_Var6 = p_Var2;
    for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)p_Var6 = *puVar5;
      puVar5 = puVar5 + 1;
      p_Var6 = p_Var6 + 4;
    }
    *(undefined4 *)p_Var2 = 0;
    iVar4 = __setmbcp_nolock((int)local_10[0],p_Var2);
    if (iVar4 != -1) {
      if (!param_2) {
        ___acrt_set_locale_changed();
      }
      piVar3 = *(int **)(local_8 + 0x48);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (*(undefined4 **)(local_8 + 0x48) != &DAT_0041a530)) {
        FID_conflict__free(*(void **)(local_8 + 0x48));
      }
      *(undefined4 *)p_Var2 = 1;
      p_Var6 = (__crt_multibyte_data *)0x0;
      *(__crt_multibyte_data **)(local_8 + 0x48) = p_Var2;
      if ((((byte)local_8[0x350] & 2) == 0) && (((byte)DAT_0041a7b0 & 1) == 0)) {
        local_10[0] = &local_8;
        __acrt_lock_and_call<<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>_>
                  (5,(<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *)local_10);
        if (param_2) {
          PTR_DAT_0041a22c = PTR_DAT_0041a750;
        }
      }
      goto LAB_00409912;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
  iVar4 = -1;
  p_Var6 = p_Var2;
LAB_00409912:
  FID_conflict__free(p_Var6);
  return iVar4;
}



// ===== FUN_0040999c @ 0040999c (size 30) =====

undefined4 FUN_0040999c(void)

{
  int in_EAX;
  
  if (DAT_0041b188 == '\0') {
    in_EAX = setmbcp_internal(-3,true);
    DAT_0041b188 = '\x01';
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



// ===== ___acrt_update_thread_multibyte_data @ 004099ba (size 150) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___acrt_update_thread_multibyte_data
   
   Library: Visual Studio 2015 Release */

int * ___acrt_update_thread_multibyte_data(void)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int *_Memory;
  
  p_Var2 = FUN_00407993();
  if (((*(uint *)(p_Var2 + 0x350) & DAT_0041a7b0) == 0) || (*(int *)(p_Var2 + 0x4c) == 0)) {
    ___acrt_lock(5);
    _Memory = *(int **)(p_Var2 + 0x48);
    if (_Memory != (int *)PTR_DAT_0041a750) {
      if (_Memory != (int *)0x0) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (_Memory != &DAT_0041a530)) {
          FID_conflict__free(_Memory);
        }
      }
      *(undefined **)(p_Var2 + 0x48) = PTR_DAT_0041a750;
      _Memory = (int *)PTR_DAT_0041a750;
      LOCK();
      *(int *)PTR_DAT_0041a750 = *(int *)PTR_DAT_0041a750 + 1;
      UNLOCK();
    }
    FUN_00409a4b();
  }
  else {
    _Memory = *(int **)(p_Var2 + 0x48);
  }
  if (_Memory == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  return _Memory;
}



// ===== FUN_00409a4b @ 00409a4b (size 9) =====

void FUN_00409a4b(void)

{
  ___acrt_unlock(5);
  return;
}



// ===== __setmbcp_nolock @ 00409a5c (size 497) =====

/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2015 Release */

void __cdecl __setmbcp_nolock(int param_1,__crt_multibyte_data *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  __crt_multibyte_data *p_Var7;
  wchar_t *pwVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  uint uVar13;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  uVar3 = getSystemCP(param_1);
  if (uVar3 != 0) {
    uVar13 = 0;
    uVar4 = 0;
    local_20 = 0;
LAB_00409a9a:
    if (*(uint *)((int)&DAT_0041a238 + uVar4) != uVar3) goto code_r0x00409aa6;
    _memset(param_2 + 0x18,0,0x101);
    pbVar9 = (byte *)(local_20 * 0x30 + 0x41a248);
    do {
      bVar1 = *pbVar9;
      pbVar11 = pbVar9;
      while ((bVar1 != 0 && (bVar1 = pbVar11[1], bVar1 != 0))) {
        for (uVar4 = (uint)*pbVar11; (uVar4 <= bVar1 && (uVar4 < 0x100)); uVar4 = uVar4 + 1) {
          param_2[uVar4 + 0x19] =
               (__crt_multibyte_data)((byte)param_2[uVar4 + 0x19] | (&DAT_0041a234)[uVar13]);
          bVar1 = pbVar11[1];
        }
        pbVar11 = pbVar11 + 2;
        bVar1 = *pbVar11;
      }
      uVar13 = uVar13 + 1;
      pbVar9 = pbVar9 + 8;
    } while (uVar13 < 4);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = 1;
    pwVar8 = CPtoLocaleName(uVar3);
    *(wchar_t **)(param_2 + 0x21c) = pwVar8;
    p_Var7 = param_2 + 0xc;
    puVar12 = (undefined2 *)(local_20 * 0x30 + 0x41a23c);
    iVar10 = 6;
    do {
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *(undefined2 *)p_Var7 = uVar2;
      p_Var7 = p_Var7 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    goto LAB_00409c33;
  }
  setSBCS(param_2);
LAB_00409c3d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x00409aa6:
  local_20 = local_20 + 1;
  uVar4 = uVar4 + 0x30;
  if (0xef < uVar4) goto code_r0x00409ab4;
  goto LAB_00409a9a;
code_r0x00409ab4:
  if (((uVar3 != 65000) && (uVar3 != 0xfde9)) &&
     (BVar5 = IsValidCodePage(uVar3 & 0xffff), BVar5 != 0)) {
    BVar5 = GetCPInfo(uVar3,&local_1c);
    if (BVar5 == 0) {
      if (DAT_0041b184 != 0) {
        setSBCS(param_2);
      }
    }
    else {
      _memset(param_2 + 0x18,0,0x101);
      *(uint *)(param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 0x21c) = 0;
      if (local_1c.MaxCharSize < 2) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else {
        pBVar6 = local_1c.LeadByte;
        while ((local_1c.LeadByte[0] != 0 && (bVar1 = pBVar6[1], bVar1 != 0))) {
          for (uVar3 = (uint)*pBVar6; uVar3 <= bVar1; uVar3 = uVar3 + 1) {
            param_2[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_2[uVar3 + 0x19] | 4);
          }
          pBVar6 = pBVar6 + 2;
          local_1c.LeadByte[0] = *pBVar6;
        }
        p_Var7 = param_2 + 0x1a;
        iVar10 = 0xfe;
        do {
          *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 8);
          p_Var7 = p_Var7 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        pwVar8 = CPtoLocaleName(*(int *)(param_2 + 4));
        *(wchar_t **)(param_2 + 0x21c) = pwVar8;
        *(undefined4 *)(param_2 + 8) = 1;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
LAB_00409c33:
      setSBUpLow(param_2);
    }
  }
  goto LAB_00409c3d;
}



// ===== _memcpy_s @ 00409c4d (size 129) =====

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
    eVar1 = 0;
  }
  else if (_Dst == (void *)0x0) {
    piVar2 = __errno();
    eVar1 = 0x16;
    *piVar2 = 0x16;
    FUN_00406b06();
  }
  else if ((_Src == (void *)0x0) || (_DstSize < _MaxCount)) {
    _memset(_Dst,0,_DstSize);
    if (_Src == (void *)0x0) {
      piVar2 = __errno();
      eVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
    }
    *piVar2 = eVar1;
    FUN_00406b06();
  }
  else {
    FUN_004114c0(_Dst,_Src,_MaxCount);
    eVar1 = 0;
  }
  return eVar1;
}



// ===== find_end_of_double_null_terminated_sequence @ 00409cce (size 55) =====

/* Library Function - Single Match
    wchar_t const * __cdecl find_end_of_double_null_terminated_sequence(wchar_t const * const)
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl find_end_of_double_null_terminated_sequence(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    param_1 = param_1 + ((int)pwVar2 - (int)(param_1 + 1) >> 1) + 1;
    wVar1 = *param_1;
  }
  return param_1 + 1;
}



// ===== ___dcrt_get_wide_environment_from_os @ 00409d05 (size 80) =====

/* Library Function - Single Match
    ___dcrt_get_wide_environment_from_os
   
   Library: Visual Studio 2015 Release */

uint * ___dcrt_get_wide_environment_from_os(void)

{
  size_t sVar1;
  LPWCH pWVar2;
  wchar_t *pwVar3;
  uint *puVar4;
  
  pWVar2 = GetEnvironmentStringsW();
  if (pWVar2 == (LPWCH)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    pwVar3 = find_end_of_double_null_terminated_sequence(pWVar2);
    sVar1 = ((int)pwVar3 - (int)pWVar2 >> 1) * 2;
    puVar4 = __malloc_base(sVar1);
    if (puVar4 != (uint *)0x0) {
      FUN_004114c0(puVar4,(uint *)pWVar2,sVar1);
    }
    FID_conflict__free((void *)0x0);
    FreeEnvironmentStringsW(pWVar2);
  }
  return puVar4;
}



// ===== FUN_00409d55 @ 00409d55 (size 572) =====

undefined4 __cdecl FUN_00409d55(wchar_t *param_1,int param_2)

{
  uint uVar1;
  wchar_t wVar2;
  int *piVar3;
  wchar_t *pwVar4;
  wchar_t **ppwVar5;
  uint uVar6;
  errno_t eVar7;
  BOOL BVar8;
  uint uVar9;
  undefined4 uVar10;
  wchar_t *pwVar11;
  bool bVar12;
  
  if (param_1 == (wchar_t *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    return 0xffffffff;
  }
  pwVar4 = (wchar_t *)FUN_0041222b((ushort *)param_1,0x3d);
  pwVar11 = param_1;
  if ((pwVar4 == (wchar_t *)0x0) || (pwVar4 == param_1)) {
LAB_00409dd9:
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
  else {
    uVar10 = 0;
    bVar12 = pwVar4[1] == L'\0';
    if (DAT_0041ae28 == DAT_0041ae2c) {
      DAT_0041ae28 = FUN_00409f92(DAT_0041ae28);
    }
    if (DAT_0041ae28 == (int *)0x0) {
      if ((param_2 == 0) || (DAT_0041ae24 == (LPVOID)0x0)) {
        if (bVar12) goto LAB_00409de7;
        if (DAT_0041ae24 == (LPVOID)0x0) {
          DAT_0041ae24 = __calloc_base(1,4);
          FID_conflict__free((void *)0x0);
          if (DAT_0041ae24 == (LPVOID)0x0) goto LAB_00409de4;
          if (DAT_0041ae28 != (int *)0x0) goto LAB_00409e49;
        }
        DAT_0041ae28 = __calloc_base(1,4);
        FID_conflict__free((void *)0x0);
      }
      else {
        ppwVar5 = common_get_or_create_environment_nolock<wchar_t>();
        if (ppwVar5 == (wchar_t **)0x0) goto LAB_00409dd9;
      }
      if (DAT_0041ae28 == (int *)0x0) goto LAB_00409de4;
    }
LAB_00409e49:
    piVar3 = DAT_0041ae28;
    uVar9 = (int)pwVar4 - (int)param_1 >> 1;
    uVar6 = find_in_environment_nolock<wchar_t>(param_1,uVar9);
    if ((-1 < (int)uVar6) && (*piVar3 != 0)) {
      FID_conflict__free((void *)piVar3[uVar6]);
      if (bVar12) {
        for (; piVar3[uVar6] != 0; uVar6 = uVar6 + 1) {
          piVar3[uVar6] = piVar3[uVar6 + 1];
        }
        piVar3 = FUN_0040ab9a(piVar3,uVar6,4);
        FID_conflict__free((void *)0x0);
        if (piVar3 != (int *)0x0) {
LAB_00409efd:
          DAT_0041ae28 = piVar3;
        }
      }
      else {
        piVar3[uVar6] = (int)param_1;
        pwVar11 = (wchar_t *)0x0;
      }
      if (param_2 != 0) {
        pwVar4 = param_1;
        do {
          wVar2 = *pwVar4;
          pwVar4 = pwVar4 + 1;
        } while (wVar2 != L'\0');
        uVar6 = ((int)pwVar4 - (int)(param_1 + 1) >> 1) + 2;
        pwVar4 = __calloc_base(uVar6,2);
        if (pwVar4 != (wchar_t *)0x0) {
          eVar7 = _wcscpy_s(pwVar4,uVar6,param_1);
          if (eVar7 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          (pwVar4 + uVar9 + 1)[-1] = L'\0';
          BVar8 = SetEnvironmentVariableW
                            (pwVar4,(LPCWSTR)(~-(uint)bVar12 & (uint)(pwVar4 + uVar9 + 1)));
          if (BVar8 == 0) {
            piVar3 = __errno();
            uVar10 = 0xffffffff;
            *piVar3 = 0x2a;
          }
        }
        FID_conflict__free(pwVar4);
      }
      goto LAB_00409de7;
    }
    if (bVar12) goto LAB_00409de7;
    uVar1 = -uVar6 + 2;
    if ((-uVar6 <= uVar1) && (uVar1 < 0x3fffffff)) {
      piVar3 = FUN_0040ab9a(piVar3,uVar1,4);
      FID_conflict__free((void *)0x0);
      if (piVar3 != (int *)0x0) {
        piVar3[-uVar6] = (int)param_1;
        piVar3[1 - uVar6] = 0;
        pwVar11 = (wchar_t *)0x0;
        goto LAB_00409efd;
      }
    }
  }
LAB_00409de4:
  uVar10 = 0xffffffff;
LAB_00409de7:
  FID_conflict__free(pwVar11);
  return uVar10;
}



// ===== FUN_00409f92 @ 00409f92 (size 189) =====

LPVOID __cdecl FUN_00409f92(int *param_1)

{
  short *psVar1;
  uint _SizeInWords;
  short sVar2;
  int *piVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  errno_t eVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  
  if (param_1 == (int *)0x0) {
    pvVar4 = (LPVOID)0x0;
  }
  else {
    iVar7 = 0;
    iVar9 = *param_1;
    piVar3 = param_1;
    while (iVar9 != 0) {
      piVar3 = piVar3 + 1;
      iVar7 = iVar7 + 1;
      iVar9 = *piVar3;
    }
    pvVar4 = __calloc_base(iVar7 + 1,4);
    if (pvVar4 == (LPVOID)0x0) {
LAB_0040a03e:
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    if (*param_1 != 0) {
      iVar9 = (int)pvVar4 - (int)param_1;
      do {
        psVar8 = (short *)*param_1;
        psVar1 = psVar8 + 1;
        do {
          sVar2 = *psVar8;
          psVar8 = psVar8 + 1;
        } while (sVar2 != 0);
        _SizeInWords = ((int)psVar8 - (int)psVar1 >> 1) + 1;
        pvVar5 = __calloc_base(_SizeInWords,2);
        *(LPVOID *)(iVar9 + (int)param_1) = pvVar5;
        FID_conflict__free((void *)0x0);
        if (*(int *)(iVar9 + (int)param_1) == 0) goto LAB_0040a03e;
        eVar6 = _wcscpy_s(*(wchar_t **)(iVar9 + (int)param_1),_SizeInWords,(wchar_t *)*param_1);
        if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
      } while (*param_1 != 0);
    }
    FID_conflict__free((void *)0x0);
  }
  return pvVar4;
}



// ===== find_in_environment_nolock<wchar_t> @ 0040a050 (size 87) =====

/* Library Function - Single Match
    int __cdecl find_in_environment_nolock<wchar_t>(wchar_t const * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __cdecl find_in_environment_nolock<wchar_t>(wchar_t *param_1,uint param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = DAT_0041ae28;
  iVar3 = *DAT_0041ae28;
  piVar4 = DAT_0041ae28;
  while( true ) {
    if (iVar3 == 0) {
      return -((int)piVar4 - (int)piVar2 >> 2);
    }
    iVar3 = __wcsnicoll(param_1,(wchar_t *)*piVar4,param_2);
    if ((iVar3 == 0) && ((sVar1 = *(short *)(*piVar4 + param_2 * 2), sVar1 == 0x3d || (sVar1 == 0)))
       ) break;
    piVar4 = piVar4 + 1;
    iVar3 = *piVar4;
  }
  return (int)piVar4 - (int)piVar2 >> 2;
}



// ===== FUN_0040a0a7 @ 0040a0a7 (size 11) =====

void __cdecl FUN_0040a0a7(wchar_t *param_1,int param_2)

{
  FUN_00409d55(param_1,param_2);
  return;
}



// ===== ___acrt_lock @ 0040a0f3 (size 23) =====

/* Library Function - Single Match
    ___acrt_lock
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_lock(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_0041b190 + param_1 * 0x18));
  return;
}



// ===== FUN_0040a10a @ 0040a10a (size 49) =====

undefined4 FUN_0040a10a(void)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_0041b2c8 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_0041b178 + DAT_0041b2c8 * 0x18);
    iVar1 = DAT_0041b2c8;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_0041b2c8 = DAT_0041b2c8 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      in_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



// ===== ___acrt_unlock @ 0040a13b (size 23) =====

/* Library Function - Single Match
    ___acrt_unlock
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_unlock(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_0041b190 + param_1 * 0x18));
  return;
}



// ===== ___acrt_lowio_create_handle_array @ 0040a152 (size 122) =====

/* Library Function - Single Match
    ___acrt_lowio_create_handle_array
   
   Library: Visual Studio 2015 Release */

undefined4 * ___acrt_lowio_create_handle_array(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = __calloc_base(0x40,0x30);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (puVar2 != puVar2 + 0x300) {
    puVar3 = puVar2 + 8;
    do {
      ___acrt_InitializeCriticalSectionEx_12((LPCRITICAL_SECTION)(puVar3 + -8),4000,0);
      puVar3[-2] = 0xffffffff;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar1 = puVar3 + 4;
      puVar3[2] = 0xa0a0000;
      *(undefined1 *)(puVar3 + 3) = 10;
      *(byte *)((int)puVar3 + 0xd) = *(byte *)((int)puVar3 + 0xd) & 0xf8;
      *(undefined1 *)((int)puVar3 + 0xe) = 0;
      puVar3 = puVar3 + 0xc;
    } while (puVar1 != puVar2 + 0x300);
  }
  FID_conflict__free((void *)0x0);
  return puVar2;
}



// ===== ___acrt_lowio_destroy_handle_array @ 0040a1cc (size 53) =====

/* Library Function - Single Match
    ___acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1; lpCriticalSection != param_1 + 0x80;
        lpCriticalSection = lpCriticalSection + 2) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FID_conflict__free(param_1);
  }
  return;
}



// ===== ___acrt_lowio_ensure_fh_exists @ 0040a201 (size 140) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl ___acrt_lowio_ensure_fh_exists(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 < 0x2000) {
    uVar4 = 0;
    ___acrt_lock(7);
    iVar5 = 0;
    iVar3 = DAT_0041b158;
    while (iVar3 <= (int)param_1) {
      if ((&DAT_0041af58)[iVar5] == 0) {
        puVar2 = ___acrt_lowio_create_handle_array();
        (&DAT_0041af58)[iVar5] = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          uVar4 = 0xc;
          break;
        }
        iVar3 = DAT_0041b158 + 0x40;
        DAT_0041b158 = iVar3;
      }
      iVar5 = iVar5 + 1;
    }
    FUN_0040a290();
  }
  else {
    piVar1 = __errno();
    uVar4 = 9;
    *piVar1 = 9;
    FUN_00406b06();
  }
  return uVar4;
}



// ===== FUN_0040a290 @ 0040a290 (size 9) =====

void FUN_0040a290(void)

{
  ___acrt_unlock(7);
  return;
}



// ===== ___acrt_lowio_lock_fh @ 0040a299 (size 35) =====

/* Library Function - Single Match
    ___acrt_lowio_lock_fh
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_lowio_lock_fh(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x30 + (&DAT_0041af58)[(int)param_1 >> 6]));
  return;
}



// ===== ___acrt_lowio_unlock_fh @ 0040a2bc (size 35) =====

/* Library Function - Single Match
    ___acrt_lowio_unlock_fh
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_lowio_unlock_fh(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x30 + (&DAT_0041af58)[(int)param_1 >> 6]));
  return;
}



// ===== __free_osfhnd @ 0040a2df (size 145) =====

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2015 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_0041b158)) {
    iVar4 = (param_1 & 0x3fU) * 0x30;
    if (((*(byte *)(iVar4 + 0x28 + (&DAT_0041af58)[param_1 >> 6]) & 1) != 0) &&
       (*(int *)(iVar4 + 0x18 + (&DAT_0041af58)[param_1 >> 6]) != -1)) {
      iVar1 = FUN_00404f1a();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040a345;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0040a345:
      *(undefined4 *)(iVar4 + 0x18 + (&DAT_0041af58)[param_1 >> 6]) = 0xffffffff;
      return 0;
    }
  }
  piVar2 = __errno();
  *piVar2 = 9;
  puVar3 = ___doserrno();
  *puVar3 = 0;
  return -1;
}



// ===== __get_osfhandle @ 0040a370 (size 106) =====

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2015 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041b158)) {
      iVar3 = (_FileHandle & 0x3fU) * 0x30;
      if ((*(byte *)((&DAT_0041af58)[_FileHandle >> 6] + 0x28 + iVar3) & 1) != 0) {
        return *(intptr_t *)((&DAT_0041af58)[_FileHandle >> 6] + 0x18 + iVar3);
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00406b06();
  }
  return -1;
}



// ===== ___pctype_func @ 0040a3da (size 38) =====

/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2015 Release */

ushort * __cdecl ___pctype_func(void)

{
  __acrt_ptd *p_Var1;
  undefined4 *local_8;
  
  p_Var1 = FUN_00407993();
  local_8 = *(undefined4 **)(p_Var1 + 0x4c);
  ___acrt_update_locale_info((int)p_Var1,(int *)&local_8);
  return (ushort *)*local_8;
}



// ===== ___acrt_locale_free_monetary @ 0040a400 (size 254) =====

/* Library Function - Single Match
    ___acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___acrt_locale_free_monetary(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_0041a76c) {
      FID_conflict__free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_0041a770) {
      FID_conflict__free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_0041a774) {
      FID_conflict__free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_0041a778) {
      FID_conflict__free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_0041a77c) {
      FID_conflict__free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_0041a780) {
      FID_conflict__free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_0041a784) {
      FID_conflict__free(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_0041a798) {
      FID_conflict__free(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x3c) != PTR_DAT_0041a79c) {
      FID_conflict__free(*(undefined **)(param_1 + 0x3c));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_0041a7a0) {
      FID_conflict__free(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != PTR_DAT_0041a7a4) {
      FID_conflict__free(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_0041a7a8) {
      FID_conflict__free(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x4c) != PTR_DAT_0041a7ac) {
      FID_conflict__free(*(undefined **)(param_1 + 0x4c));
    }
  }
  return;
}



// ===== ___acrt_locale_free_numeric @ 0040a4fe (size 105) =====

/* Library Function - Single Match
    ___acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___acrt_locale_free_numeric(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_0041a760) {
      FID_conflict__free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_0041a764) {
      FID_conflict__free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_0041a768) {
      FID_conflict__free((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_0041a790) {
      FID_conflict__free((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_0041a794) {
      FID_conflict__free((undefined *)param_1[0xd]);
    }
  }
  return;
}



// ===== free_crt_array_internal @ 0040a567 (size 60) =====

/* Library Function - Single Match
    void __cdecl free_crt_array_internal(void const * * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl free_crt_array_internal(void **param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ~-(uint)(param_1 + param_2 < param_1) &
          (uint)((int)(param_1 + param_2) + (3 - (int)param_1)) >> 2;
  if (uVar1 != 0) {
    do {
      FID_conflict__free(*param_1);
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 1;
    } while (uVar2 != uVar1);
  }
  return;
}



// ===== ___acrt_locale_free_time @ 0040a5a3 (size 228) =====

/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_locale_free_time(void **param_1)

{
  if (param_1 != (void **)0x0) {
    free_crt_array_internal(param_1,7);
    free_crt_array_internal(param_1 + 7,7);
    free_crt_array_internal(param_1 + 0xe,0xc);
    free_crt_array_internal(param_1 + 0x1a,0xc);
    free_crt_array_internal(param_1 + 0x26,2);
    FID_conflict__free(param_1[0x28]);
    FID_conflict__free(param_1[0x29]);
    FID_conflict__free(param_1[0x2a]);
    free_crt_array_internal(param_1 + 0x2d,7);
    free_crt_array_internal(param_1 + 0x34,7);
    free_crt_array_internal(param_1 + 0x3b,0xc);
    free_crt_array_internal(param_1 + 0x47,0xc);
    free_crt_array_internal(param_1 + 0x53,2);
    FID_conflict__free(param_1[0x55]);
    FID_conflict__free(param_1[0x56]);
    FID_conflict__free(param_1[0x57]);
    FID_conflict__free(param_1[0x58]);
  }
  return;
}



// ===== _wcspbrk @ 0040a687 (size 69) =====

/* Library Function - Single Match
    _wcspbrk
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl _wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  if (*_Str != L'\0') {
    do {
      if (*_Control != L'\0') {
        pwVar1 = _Control;
        wVar2 = *_Control;
        do {
          if (wVar2 == *_Str) {
            return _Str;
          }
          pwVar1 = pwVar1 + 1;
          wVar2 = *pwVar1;
        } while (wVar2 != L'\0');
      }
      _Str = _Str + 1;
    } while (*_Str != L'\0');
  }
  return (wchar_t *)0x0;
}



// ===== ___acrt_GetStringTypeA @ 0040a6cc (size 285) =====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___acrt_GetStringTypeA
   
   Library: Visual Studio 2015 Release */

void __cdecl
___acrt_GetStringTypeA
          (__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,
          UINT param_6,int param_7)

{
  uint _Size;
  undefined4 *puVar1;
  int cchSrc;
  LPCWSTR lpWideCharStr;
  int local_1c;
  int local_18;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_18 + 8);
  }
  local_c = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0,0);
  if (local_c == 0) goto LAB_0040a7c3;
  _Size = local_c * 2;
  if ((_Size + 8 & -(uint)(_Size < _Size + 8)) == 0) {
    lpWideCharStr = (LPCWSTR)0x0;
LAB_0040a784:
    if (lpWideCharStr != (LPCWSTR)0x0) {
      _memset(lpWideCharStr,0,_Size);
      cchSrc = MultiByteToWideChar(param_6,1,param_3,param_4,lpWideCharStr,local_c);
      if (cchSrc != 0) {
        GetStringTypeW(param_2,lpWideCharStr,cchSrc,param_5);
      }
    }
  }
  else if ((-(uint)(_Size < _Size + 8) & _Size + 8) < 0x401) {
    puVar1 = (undefined4 *)&stack0xffffffd8;
    lpWideCharStr = (LPCWSTR)&stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
LAB_0040a77d:
      lpWideCharStr = (LPCWSTR)(puVar1 + 2);
      goto LAB_0040a784;
    }
  }
  else {
    puVar1 = __malloc_base(-(uint)(_Size < _Size + 8) & _Size + 8);
    lpWideCharStr = (LPCWSTR)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xdddd;
      goto LAB_0040a77d;
    }
  }
  __freea_crt((int)lpWideCharStr);
LAB_0040a7c3:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== __freea_crt @ 0040a7e9 (size 32) =====

/* Library Function - Single Match
    __freea_crt
   
   Library: Visual Studio 2015 Release */

void __cdecl __freea_crt(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    FID_conflict__free((int *)(param_1 + -8));
  }
  return;
}



// ===== ___acrt_add_locale_ref @ 0040a809 (size 125) =====

/* Library Function - Single Match
    ___acrt_add_locale_ref
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_add_locale_ref(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x8c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined4 *)(param_1 + 0x28);
  iVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_0041a230) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ___acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x9c));
  return;
}



// ===== ___acrt_free_locale @ 0040a886 (size 330) =====

/* Library Function - Single Match
    ___acrt_free_locale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___acrt_free_locale(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  if ((((*(undefined ***)((int)param_1 + 0x88) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0x88) != &PTR_DAT_0041a760)) &&
      (*(int **)((int)param_1 + 0x7c) != (int *)0x0)) && (**(int **)((int)param_1 + 0x7c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x84);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      ___acrt_locale_free_monetary(*(int *)((int)param_1 + 0x88));
    }
    piVar1 = *(int **)((int)param_1 + 0x80);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      ___acrt_locale_free_numeric(*(undefined4 **)((int)param_1 + 0x88));
    }
    FID_conflict__free(*(void **)((int)param_1 + 0x7c));
    FID_conflict__free(*(void **)((int)param_1 + 0x88));
  }
  if ((*(int **)((int)param_1 + 0x8c) != (int *)0x0) && (**(int **)((int)param_1 + 0x8c) == 0)) {
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x90) + -0xfe));
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x94) + -0x80));
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x98) + -0x80));
    FID_conflict__free(*(void **)((int)param_1 + 0x8c));
  }
  ___acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((int)param_1 + 0x9c));
  puVar2 = (undefined4 *)((int)param_1 + 0xa0);
  local_8 = 6;
  puVar3 = (undefined4 *)((int)param_1 + 0x28);
  do {
    if ((((undefined *)puVar3[-2] != &DAT_0041a230) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      FID_conflict__free((void *)*puVar2);
    }
    if (((puVar3[-3] != 0) && (piVar1 = (int *)puVar3[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FID_conflict__free(piVar1);
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FID_conflict__free(param_1);
  return;
}



// ===== ___acrt_locale_add_lc_time_reference @ 0040a9d0 (size 41) =====

/* Library Function - Single Match
    ___acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * __cdecl ___acrt_locale_add_lc_time_reference(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00414628)) {
    LOCK();
    ppuVar1 = param_1 + 0x2c;
    puVar2 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
    return puVar2 + 1;
  }
  return (undefined *)0x7fffffff;
}



// ===== ___acrt_locale_free_lc_time_if_unreferenced @ 0040a9f9 (size 48) =====

/* Library Function - Single Match
    ___acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00414628)) &&
     (param_1[0x2c] == (undefined *)0x0)) {
    ___acrt_locale_free_time(param_1);
    FID_conflict__free(param_1);
  }
  return;
}



// ===== ___acrt_locale_release_lc_time_reference @ 0040aa29 (size 41) =====

/* Library Function - Single Match
    ___acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * __cdecl ___acrt_locale_release_lc_time_reference(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00414628)) {
    LOCK();
    ppuVar1 = param_1 + 0x2c;
    puVar2 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + -1;
    UNLOCK();
    return puVar2 + -1;
  }
  return (undefined *)0x7fffffff;
}



// ===== ___acrt_release_locale_ref @ 0040aa52 (size 129) =====

/* Library Function - Single Match
    ___acrt_release_locale_ref
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_release_locale_ref(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0x7c);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x84);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x8c);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined4 *)(param_1 + 0x28);
    iVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_0041a230) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    ___acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x9c));
  }
  return;
}



// ===== FUN_0040aad3 @ 0040aad3 (size 107) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined ** FUN_0040aad3(void)

{
  __acrt_ptd *p_Var1;
  undefined **ppuVar2;
  
  p_Var1 = FUN_00407993();
  if (((*(uint *)(p_Var1 + 0x350) & DAT_0041a7b0) == 0) ||
     (ppuVar2 = *(undefined ***)(p_Var1 + 0x4c), ppuVar2 == (undefined **)0x0)) {
    ___acrt_lock(4);
    ppuVar2 = __updatetlocinfoEx_nolock((undefined4 *)(p_Var1 + 0x4c),DAT_0041b15c);
    FUN_0040ab39();
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
  }
  return ppuVar2;
}



// ===== FUN_0040ab39 @ 0040ab39 (size 9) =====

void FUN_0040ab39(void)

{
  ___acrt_unlock(4);
  return;
}



// ===== __updatetlocinfoEx_nolock @ 0040ab4a (size 80) =====

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined ** __cdecl __updatetlocinfoEx_nolock(undefined4 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined4 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      ___acrt_add_locale_ref((int)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (___acrt_release_locale_ref((int)ppuVar1), ppuVar1[3] == (undefined *)0x0)) &&
         (ppuVar1 != &PTR_DAT_0041a170)) {
        ___acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}



// ===== FUN_0040ab9a @ 0040ab9a (size 120) =====

LPVOID __cdecl FUN_0040ab9a(LPCVOID param_1,uint param_2,uint param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  SIZE_T SVar3;
  uint uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    if (param_1 == (LPCVOID)0x0) {
      SVar3 = 0;
    }
    else {
      SVar3 = FUN_0040e9fc(param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar2 = __realloc_base(param_1,uVar4);
    if ((pvVar2 != (LPVOID)0x0) && (SVar3 < uVar4)) {
      _memset((void *)((int)pvVar2 + SVar3),0,uVar4 - SVar3);
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}



// ===== ___acrt_execute_initializers @ 0040ac2d (size 131) =====

/* Library Function - Single Match
    ___acrt_execute_initializers
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_execute_initializers(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  puVar5 = param_1;
  if (param_1 != param_2) {
    do {
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00413124)();
        cVar3 = (*pcVar2)();
        if (cVar3 == '\0') break;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != param_2);
    if ((puVar5 != param_2) && (puVar5 != param_1)) {
      puVar5 = puVar5 + -1;
      do {
        if ((puVar5[-1] != 0) && (pcVar2 = (code *)*puVar5, pcVar2 != (code *)0x0)) {
          (*(code *)PTR_guard_check_icall_00413124)(0);
          (*pcVar2)();
        }
        puVar1 = puVar5 + -1;
        puVar5 = puVar5 + -2;
      } while (puVar1 != param_1);
    }
  }
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___acrt_execute_uninitializers @ 0040acb0 (size 77) =====

/* Library Function - Single Match
    ___acrt_execute_uninitializers
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_execute_uninitializers(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  if (param_1 != param_2) {
    puVar4 = param_2 + -1;
    do {
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00413124)(0);
        (*pcVar2)();
      }
      puVar1 = puVar4 + -1;
      puVar4 = puVar4 + -2;
    } while (puVar1 != param_1);
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== FUN_0040acfd @ 0040acfd (size 20) =====

void __cdecl FUN_0040acfd(wchar_t **param_1)

{
  __crt_state_management::dual_state_global<wchar_t**>::initialize
            ((dual_state_global<wchar_t**> *)&DAT_0041b2dc,param_1);
  return;
}



// ===== __callnewh @ 0040ad11 (size 68) =====

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2015 Release */

int __cdecl __callnewh(size_t _Size)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)__query_new_handler();
  if (pcVar2 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00413124)(_Size);
    (*pcVar2)();
  }
  iVar3 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



// ===== __query_new_handler @ 0040ad55 (size 70) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __query_new_handler
   
   Library: Visual Studio 2015 Release */

uint __query_new_handler(void)

{
  byte bVar1;
  uint uVar2;
  
  ___acrt_lock(0);
  bVar1 = (byte)DAT_0041a004 & 0x1f;
  uVar2 = DAT_0041a004 ^ _DAT_0041b2dc;
  FUN_0040ad9e();
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}



// ===== FUN_0040ad9e @ 0040ad9e (size 9) =====

void FUN_0040ad9e(void)

{
  ___acrt_unlock(0);
  return;
}



// ===== operator()<> @ 0040ada7 (size 75) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Same Base Name
    public: void (__cdecl*__thiscall __crt_seh_guarded_call<void (__cdecl*)(int)>::operator()<class
   <lambda_a048d3beccc847880fc8490e18b82769>,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &,class
   <lambda_f7496a158712204296dd6628a163878e> >(class <lambda_a048d3beccc847880fc8490e18b82769>
   &&,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &,class
   <lambda_f7496a158712204296dd6628a163878e> &&))(int)
    public: void (__cdecl*__thiscall __crt_seh_guarded_call<void (__cdecl*)(int)>::operator()<class
   <lambda_cbab9ec6f41b0180b23cc171c22676b0>,class <lambda_44731a7d0e6d81c3e6aa82d741081786> &,class
   <lambda_4b292cb8dd18144e164572427af410ab> >(class <lambda_cbab9ec6f41b0180b23cc171c22676b0>
   &&,class <lambda_44731a7d0e6d81c3e6aa82d741081786> &,class
   <lambda_4b292cb8dd18144e164572427af410ab> &&))(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

uint operator()<>(int *param_1)

{
  byte bVar1;
  uint uVar2;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_0041a004 & 0x1f;
  uVar2 = DAT_0041a004 ^ _DAT_0041b2e8;
  FUN_0040adf5();
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}



// ===== FUN_0040adf5 @ 0040adf5 (size 12) =====

void FUN_0040adf5(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}



// ===== __acrt_lock_and_call<<lambda_ec61778202f4f5fc7e7711acc23c3bca>_> @ 0040ae01 (size 40) =====

/* Library Function - Single Match
    void (__cdecl*__cdecl __acrt_lock_and_call<class <lambda_ec61778202f4f5fc7e7711acc23c3bca>
   >(enum __acrt_lock_id,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &&))(int)
   
   Library: Visual Studio 2015 Release */

_func_void_int * __cdecl
__acrt_lock_and_call<<lambda_ec61778202f4f5fc7e7711acc23c3bca>_>
          (__acrt_lock_id param_1,<lambda_ec61778202f4f5fc7e7711acc23c3bca> *param_2)

{
  _func_void_int *p_Var1;
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  p_Var1 = (_func_void_int *)operator()<>((int *)&local_10);
  return p_Var1;
}



// ===== get_global_action_nolock @ 0040ae29 (size 66) =====

/* Library Function - Single Match
    void (__cdecl** __cdecl get_global_action_nolock(int))(int)
   
   Library: Visual Studio 2015 Release */

_func_void_int ** __cdecl get_global_action_nolock(int param_1)

{
  if (param_1 == 2) {
    return (_func_void_int **)&DAT_0041b2e0;
  }
  if (param_1 != 6) {
    if (param_1 == 0xf) {
      return (_func_void_int **)&DAT_0041b2ec;
    }
    if (param_1 == 0x15) {
      return (_func_void_int **)&DAT_0041b2e4;
    }
    if (param_1 != 0x16) {
      return (_func_void_int **)0x0;
    }
  }
  return (_func_void_int **)&DAT_0041b2e8;
}



// ===== siglookup @ 0040ae6b (size 40) =====

/* Library Function - Single Match
    struct __crt_signal_action_t * __cdecl siglookup(int,struct __crt_signal_action_t * const)
   
   Library: Visual Studio 2015 Release */

__crt_signal_action_t * __cdecl siglookup(int param_1,__crt_signal_action_t *param_2)

{
  __crt_signal_action_t *p_Var1;
  
  p_Var1 = param_2 + DAT_00413b80 * 0xc;
  while( true ) {
    if (param_2 == p_Var1) {
      return (__crt_signal_action_t *)0x0;
    }
    if (*(int *)(param_2 + 4) == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return param_2;
}



// ===== ___acrt_get_sigabrt_handler @ 0040ae93 (size 23) =====

/* Library Function - Single Match
    ___acrt_get_sigabrt_handler
   
   Library: Visual Studio 2015 Release */

void ___acrt_get_sigabrt_handler(void)

{
  <lambda_ec61778202f4f5fc7e7711acc23c3bca> local_5;
  
  __acrt_lock_and_call<<lambda_ec61778202f4f5fc7e7711acc23c3bca>_>(3,&local_5);
  return;
}



// ===== ___acrt_initialize_signal_handlers @ 0040aeaa (size 59) =====

/* Library Function - Single Match
    ___acrt_initialize_signal_handlers
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_initialize_signal_handlers(wchar_t **param_1)

{
  __crt_state_management::dual_state_global<wchar_t**>::initialize
            ((dual_state_global<wchar_t**> *)&DAT_0041b2e0,param_1);
  __crt_state_management::dual_state_global<wchar_t**>::initialize
            ((dual_state_global<wchar_t**> *)&DAT_0041b2e4,param_1);
  __crt_state_management::dual_state_global<wchar_t**>::initialize
            ((dual_state_global<wchar_t**> *)&DAT_0041b2e8,param_1);
  __crt_state_management::dual_state_global<wchar_t**>::initialize
            ((dual_state_global<wchar_t**> *)&DAT_0041b2ec,param_1);
  return;
}



// ===== FUN_0040aee5 @ 0040aee5 (size 9) =====

int FUN_0040aee5(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_00407993();
  return (int)(p_Var1 + 8);
}



// ===== _raise @ 0040aeee (size 490) =====

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2015 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  bool bVar2;
  __crt_signal_action_t *p_Var3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  __acrt_ptd *p_Var7;
  char extraout_CL;
  char cVar8;
  byte bVar9;
  int iVar10;
  _func_void_int *p_Var11;
  __acrt_ptd *p_Var12;
  undefined4 local_38;
  int local_34;
  
  p_Var12 = (__acrt_ptd *)0x0;
  local_38 = 0;
  bVar2 = true;
  if (8 < _SigNum) {
    if (_SigNum == 0xb) goto LAB_0040af48;
    if ((_SigNum == 0xf) || ((0x14 < _SigNum && (_SigNum < 0x17)))) goto LAB_0040af3d;
LAB_0040af73:
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_00406b06();
    goto LAB_0040b0f0;
  }
  if (_SigNum == 8) {
LAB_0040af48:
    p_Var12 = ___acrt_getptd_noexit();
    if (p_Var12 == (__acrt_ptd *)0x0) goto LAB_0040b0f0;
    p_Var3 = siglookup(_SigNum,*(__crt_signal_action_t **)p_Var12);
    if (p_Var3 == (__crt_signal_action_t *)0x0) goto LAB_0040af73;
    p_Var3 = p_Var3 + 8;
    cVar8 = '\0';
    bVar2 = false;
  }
  else {
    if (_SigNum != 2) {
      if (_SigNum == 4) goto LAB_0040af48;
      if (_SigNum != 6) goto LAB_0040af73;
    }
LAB_0040af3d:
    p_Var3 = (__crt_signal_action_t *)get_global_action_nolock(_SigNum);
    cVar8 = extraout_CL;
  }
  local_34 = 0;
  bVar1 = false;
  if (cVar8 != '\0') {
    ___acrt_lock(3);
    bVar1 = bVar2;
  }
  if (bVar1) {
    bVar9 = (byte)DAT_0041a004 & 0x1f;
    p_Var11 = (_func_void_int *)
              ((DAT_0041a004 ^ (uint)*(_func_void_int **)p_Var3) >> bVar9 |
              (DAT_0041a004 ^ (uint)*(_func_void_int **)p_Var3) << 0x20 - bVar9);
  }
  else {
    p_Var11 = *(_func_void_int **)p_Var3;
    bVar2 = false;
  }
  if (p_Var11 != (_func_void_int *)0x1) {
    if (p_Var11 == (_func_void_int *)0x0) {
      if (bVar2) {
        ___acrt_unlock(3);
      }
      __exit(3);
    }
    if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
      local_34 = *(int *)(p_Var12 + 4);
      *(int *)(p_Var12 + 4) = 0;
      if (_SigNum == 8) {
        puVar5 = (undefined4 *)FUN_0040aee5();
        local_38 = *puVar5;
        puVar5 = (undefined4 *)FUN_0040aee5();
        *puVar5 = 0x8c;
        goto LAB_0040b02f;
      }
    }
    else {
LAB_0040b02f:
      if (_SigNum == 8) {
        iVar6 = DAT_00413b84 * 0xc + *(int *)p_Var12;
        iVar10 = DAT_00413b88 * 0xc + iVar6;
        for (; iVar6 != iVar10; iVar6 = iVar6 + 0xc) {
          *(undefined4 *)(iVar6 + 8) = 0;
        }
        goto LAB_0040b071;
      }
    }
    bVar9 = 0x20 - ((byte)DAT_0041a004 & 0x1f) & 0x1f;
    *(_func_void_int **)p_Var3 =
         (_func_void_int *)((0U >> bVar9 | 0 << 0x20 - bVar9) ^ DAT_0041a004);
  }
LAB_0040b071:
  FUN_0040b0ae();
  if (p_Var11 != (_func_void_int *)0x1) {
    if (_SigNum == 8) {
      p_Var7 = FUN_00407993();
      iVar6 = 0x40b099;
      (*(code *)PTR_guard_check_icall_00413124)(8,*(undefined4 *)(p_Var7 + 8));
      (*p_Var11)(iVar6);
    }
    else {
      iVar6 = 0x40b0c7;
      (*(code *)PTR_guard_check_icall_00413124)(_SigNum);
      (*p_Var11)(iVar6);
      if ((_SigNum != 0xb) && (_SigNum != 4)) goto LAB_0040b0f0;
    }
    *(int *)(p_Var12 + 4) = local_34;
    if (_SigNum == 8) {
      p_Var12 = FUN_00407993();
      *(undefined4 *)(p_Var12 + 8) = local_38;
    }
  }
LAB_0040b0f0:
  iVar6 = FUN_00411229();
  return iVar6;
}



// ===== FUN_0040b0ae @ 0040b0ae (size 15) =====

void FUN_0040b0ae(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1d) != '\0') {
    ___acrt_unlock(3);
  }
  return;
}



// ===== ___hw_cw_sse2 @ 0040b0f6 (size 171) =====

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___hw_cw_sse2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_1 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}



// ===== __clearfp @ 0040b1a1 (size 222) =====

/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2015 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  if (DAT_0041ab44 < 1) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar2 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar2 = uVar2 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar2 = uVar2 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar2 = uVar2 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar2 = uVar2 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
    }
    if ((MXCSR & 0x3f) != 0) {
      if ((MXCSR & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar1 = uVar1 | uVar2;
    MXCSR = MXCSR & 0xffffffc0;
  }
  return uVar1;
}



// ===== __control87 @ 0040b27f (size 770) =====

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2015 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  
  uVar1 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar3 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar3 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar3 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar3 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  uVar4 = ~_Mask & uVar1 | _NewValue & _Mask;
  if (uVar4 != uVar1) {
    uVar1 = __hw_cw(uVar4);
    uVar4 = 0;
    if ((uVar1 & 1) != 0) {
      uVar4 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar2 = uVar1 & 0xc00;
    if ((uVar1 & 0xc00) != 0) {
      if (uVar2 == 0x400) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar2 == 0x800) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar2 == 0xc00) {
        uVar4 = uVar4 | 0x300;
      }
    }
    if ((uVar1 & 0x300) == 0) {
      uVar4 = uVar4 | 0x20000;
    }
    else if ((uVar1 & 0x300) == 0x200) {
      uVar4 = uVar4 | 0x10000;
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar4 = uVar4 | 0x40000;
    }
  }
  uVar1 = uVar4;
  if (0 < DAT_0041ab44) {
    uVar2 = 0;
    if ((char)MXCSR < '\0') {
      uVar2 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar1 = MXCSR & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar1 = MXCSR & 0x8040;
    if (uVar1 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else if (uVar1 == 0x8000) {
      uVar2 = uVar2 | 0x3000000;
    }
    else if (uVar1 == 0x8040) {
      uVar2 = uVar2 | 0x1000000;
    }
    uVar1 = ~(_Mask & 0x308031f) & uVar2 | _Mask & 0x308031f & _NewValue;
    if (uVar1 != uVar2) {
      uVar1 = ___hw_cw_sse2(uVar1);
      ___set_fpsr_sse2(uVar1);
      uVar2 = 0;
      if ((char)MXCSR < '\0') {
        uVar2 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar2 = uVar2 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar2 = uVar2 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar2 = uVar2 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar2 = uVar2 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      uVar1 = MXCSR & 0x6000;
      if (uVar1 != 0) {
        if (uVar1 == 0x2000) {
          uVar2 = uVar2 | 0x100;
        }
        else if (uVar1 == 0x4000) {
          uVar2 = uVar2 | 0x200;
        }
        else if (uVar1 == 0x6000) {
          uVar2 = uVar2 | 0x300;
        }
      }
      uVar1 = MXCSR & 0x8040;
      if (uVar1 == 0x40) {
        uVar2 = uVar2 | 0x2000000;
      }
      else if (uVar1 == 0x8000) {
        uVar2 = uVar2 | 0x3000000;
      }
      else if (uVar1 == 0x8040) {
        uVar2 = uVar2 | 0x1000000;
      }
    }
    uVar1 = uVar2 | uVar4;
    if (((uVar2 ^ uVar4) & 0x8031f) != 0) {
      uVar1 = uVar1 | 0x80000000;
    }
  }
  return uVar1;
}



// ===== __hw_cw @ 0040b581 (size 153) =====

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2015 Release */

uint __cdecl __hw_cw(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



// ===== _iswctype @ 0040b61a (size 95) =====

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2015 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  uint in_ECX;
  WCHAR local_c;
  undefined2 uStack_a;
  uint local_8;
  
  if (_C == 0xffff) {
LAB_0040b62f:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_8._0_2_ = *(ushort *)(PTR_DAT_0041a754 + (uint)_C * 2);
    }
    else {
      _local_c = CONCAT22((short)(in_ECX >> 0x10),_C);
      local_8 = in_ECX & 0xffff0000;
      BVar2 = GetStringTypeW(1,&local_c,1,(LPWORD)&local_8);
      if (BVar2 == 0) goto LAB_0040b62f;
    }
    uVar1 = (uint)((ushort)local_8 & _Type);
  }
  return uVar1;
}



// ===== __isctype_l @ 0040b679 (size 210) =====

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  int local_24;
  localeinfo_struct local_20;
  char local_18;
  CHAR local_14;
  CHAR local_13;
  undefined1 local_12;
  WORD local_10 [4];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_24,(__crt_locale_pointers *)_Locale);
  if (0x100 < _C + 1U) {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_20);
    if (iVar1 == 0) {
      local_13 = '\0';
      iVar1 = 1;
      local_14 = (CHAR)_C;
    }
    else {
      local_12 = 0;
      iVar1 = 2;
      local_14 = (CHAR)((uint)_C >> 8);
      local_13 = (CHAR)_C;
    }
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    iVar1 = ___acrt_GetStringTypeA
                      ((__crt_locale_pointers *)&local_20,1,&local_14,iVar1,local_10,
                       (local_20.locinfo)->lc_collate_cp,1);
    if (iVar1 == 0) {
      if (local_18 != '\0') {
        *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
      }
      goto LAB_0040b73c;
    }
  }
  if (local_18 != '\0') {
    *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
  }
LAB_0040b73c:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}



// ===== GetTableIndexFromLocaleName @ 0040b74b (size 188) =====

/* Library Function - Single Match
    int __cdecl GetTableIndexFromLocaleName(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int __cdecl GetTableIndexFromLocaleName(wchar_t *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0xe3;
  while( true ) {
    local_8 = 0x55;
    iVar2 = (local_c + local_10) / 2;
    puVar5 = (ushort *)(&PTR_DAT_00416148)[iVar2 * 2];
    iVar3 = (int)param_1 - (int)puVar5;
    do {
      uVar4 = *(ushort *)(iVar3 + (int)puVar5);
      if ((0x40 < uVar4) && (uVar4 < 0x5b)) {
        uVar4 = uVar4 + 0x20;
      }
      uVar1 = *puVar5;
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        uVar1 = uVar1 + 0x20;
      }
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (((local_8 != 0) && (uVar4 != 0)) && (uVar4 == uVar1));
    if ((uint)uVar4 == (uint)uVar1) break;
    if ((int)((uint)uVar4 - (uint)uVar1) < 0) {
      local_c = iVar2 + -1;
    }
    else {
      local_10 = iVar2 + 1;
    }
    if (local_c < local_10) {
      return -1;
    }
  }
  return *(int *)(&DAT_0041614c + iVar2 * 8);
}



// ===== ___acrt_DownlevelLocaleNameToLCID @ 0040b807 (size 44) =====

/* Library Function - Single Match
    ___acrt_DownlevelLocaleNameToLCID
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl ___acrt_DownlevelLocaleNameToLCID(wchar_t *param_1)

{
  uint uVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    uVar1 = GetTableIndexFromLocaleName(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(undefined4 *)(&DAT_00415028 + uVar1 * 8);
    }
  }
  return 0;
}



// ===== __fclose_nolock @ 0040b833 (size 118) =====

/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
    iVar2 = -1;
  }
  else {
    iVar2 = -1;
    if (((uint)_File->_flag >> 0xd & 1) != 0) {
      iVar2 = ___acrt_stdio_flush_nolock(_File);
      ___acrt_stdio_free_buffer_nolock(&_File->_ptr);
      iVar3 = __fileno(_File);
      iVar3 = __close(iVar3);
      if (iVar3 < 0) {
        iVar2 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        FID_conflict__free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(_File);
  }
  return iVar2;
}



// ===== FUN_0040b8a9 @ 0040b8a9 (size 115) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_0040b8a9(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
  }
  else {
    if (((uint)param_1->_flag >> 0xc & 1) == 0) {
      __lock_file(param_1);
      iVar2 = __fclose_nolock(param_1);
      FUN_0040b91f();
      return iVar2;
    }
    __acrt_stdio_free_stream();
  }
  return -1;
}



// ===== FUN_0040b91f @ 0040b91f (size 10) =====

void FUN_0040b91f(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x20));
  return;
}



// ===== operator()<<lambda_61cee617f5178ae960314fd4d05640a0>,<lambda_6978c1fb23f02e42e1d9e99668cc68aa>&,<lambda_9cd88cf8ad10232537feb2133f08c833>_> @ 0040b929 (size 137) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_61cee617f5178ae960314fd4d05640a0>,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &,class
   <lambda_9cd88cf8ad10232537feb2133f08c833> >(class <lambda_61cee617f5178ae960314fd4d05640a0>
   &&,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &,class
   <lambda_9cd88cf8ad10232537feb2133f08c833> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_61cee617f5178ae960314fd4d05640a0>,<lambda_6978c1fb23f02e42e1d9e99668cc68aa>&,<lambda_9cd88cf8ad10232537feb2133f08c833>_>
          (__crt_seh_guarded_call<int> *this,<lambda_61cee617f5178ae960314fd4d05640a0> *param_1,
          <lambda_6978c1fb23f02e42e1d9e99668cc68aa> *param_2,
          <lambda_9cd88cf8ad10232537feb2133f08c833> *param_3)

{
  uint _FileHandle;
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  ___acrt_lowio_lock_fh(*(uint *)param_1);
  _FileHandle = **(uint **)param_2;
  if ((*(byte *)((&DAT_0041af58)[(int)_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3f) * 0x30) & 1)
      != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 != 0) goto LAB_0040b999;
    puVar2 = ___doserrno();
    DVar3 = GetLastError();
    *puVar2 = DVar3;
  }
  piVar4 = __errno();
  *piVar4 = 9;
  iVar5 = -1;
LAB_0040b999:
  FUN_0040b9b5();
  return iVar5;
}



// ===== FUN_0040b9b5 @ 0040b9b5 (size 12) =====

void FUN_0040b9b5(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(uint **)(unaff_EBP + 0x10));
  return;
}



// ===== __acrt_lowio_lock_fh_and_call<<lambda_6978c1fb23f02e42e1d9e99668cc68aa>_> @ 0040b9c1 (size 40) =====

/* Library Function - Single Match
    int __cdecl __acrt_lowio_lock_fh_and_call<class <lambda_6978c1fb23f02e42e1d9e99668cc68aa>
   >(int,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lowio_lock_fh_and_call<<lambda_6978c1fb23f02e42e1d9e99668cc68aa>_>
          (int param_1,<lambda_6978c1fb23f02e42e1d9e99668cc68aa> *param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_61cee617f5178ae960314fd4d05640a0>,<lambda_6978c1fb23f02e42e1d9e99668cc68aa>&,<lambda_9cd88cf8ad10232537feb2133f08c833>_>
                    (&local_5,(<lambda_61cee617f5178ae960314fd4d05640a0> *)&local_10,param_2,
                     (<lambda_9cd88cf8ad10232537feb2133f08c833> *)&local_c);
  return iVar1;
}



// ===== __commit @ 0040b9e9 (size 111) =====

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2015 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041b158)) &&
       ((*(byte *)((&DAT_0041af58)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) & 1) !=
        0)) {
      local_8 = &_FileHandle;
      iVar2 = __acrt_lowio_lock_fh_and_call<<lambda_6978c1fb23f02e42e1d9e99668cc68aa>_>
                        (_FileHandle,(<lambda_6978c1fb23f02e42e1d9e99668cc68aa> *)&local_8);
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00406b06();
  }
  return -1;
}



// ===== write_double_translated_ansi_nolock @ 0040ba58 (size 435) =====

/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_ansi_nolock(int,char
   const * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_double_translated_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  byte bVar1;
  HANDLE hFile;
  UINT CodePage;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int in_stack_00000010;
  byte *_SrcCh;
  size_t _SrcSizeInBytes;
  uint local_24;
  undefined2 local_20;
  wchar_t local_1c [2];
  CHAR local_18 [8];
  byte local_10;
  undefined1 local_f;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  iVar7 = (int)param_2 >> 6;
  iVar8 = ((uint)param_2 & 0x3f) * 0x30;
  hFile = *(HANDLE *)((&DAT_0041af58)[iVar7] + 0x18 + iVar8);
  CodePage = GetConsoleCP();
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pbVar9 = (byte *)param_3;
joined_r0x0040bab5:
  if ((byte *)(in_stack_00000010 + param_3) <= pbVar9) {
LAB_0040bbf8:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_1c[0] = L'\0';
  local_20 = CONCAT11(*pbVar9,(undefined1)local_20);
  iVar3 = (&DAT_0041af58)[iVar7];
  bVar1 = *(byte *)(iVar3 + 0x2d + iVar8);
  if ((bVar1 & 4) == 0) {
    puVar2 = ___pctype_func();
    if ((puVar2[*pbVar9] & 0x8000) == 0) {
      _SrcSizeInBytes = 1;
      _SrcCh = pbVar9;
      goto LAB_0040bb2c;
    }
    if ((byte *)(in_stack_00000010 + param_3) <= pbVar9) {
      *(byte *)((&DAT_0041af58)[iVar7] + 0x2e + iVar8) = *pbVar9;
      pbVar9 = (byte *)((&DAT_0041af58)[iVar7] + 0x2d + iVar8);
      *pbVar9 = *pbVar9 | 4;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      goto LAB_0040bbf8;
    }
    iVar3 = _mbtowc(local_1c,(char *)pbVar9,2);
    if (iVar3 == -1) goto LAB_0040bbf8;
    pbVar9 = pbVar9 + 1;
  }
  else {
    local_10 = *(byte *)(iVar3 + 0x2e + iVar8);
    uVar4 = CONCAT11(*pbVar9,bVar1) & 0xfffffffb;
    _SrcSizeInBytes = 2;
    local_f = (undefined1)(uVar4 >> 8);
    *(char *)(iVar3 + 0x2d + iVar8) = (char)uVar4;
    _SrcCh = &local_10;
LAB_0040bb2c:
    iVar3 = _mbtowc(local_1c,(char *)_SrcCh,_SrcSizeInBytes);
    if (iVar3 == -1) goto LAB_0040bbf8;
  }
  pbVar9 = pbVar9 + 1;
  uVar4 = WideCharToMultiByte(CodePage,0,local_1c,1,local_18,5,(LPCSTR)0x0,(LPBOOL)0x0);
  if (uVar4 != 0) {
    BVar5 = WriteFile(hFile,local_18,uVar4,&local_24,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) goto LAB_0040bbf0;
    *(byte **)(param_1 + 4) = pbVar9 + (*(int *)(param_1 + 8) - param_3);
    if (uVar4 <= local_24) goto code_r0x0040bb92;
  }
  goto LAB_0040bbf8;
code_r0x0040bb92:
  if (local_20._1_1_ == '\n') {
    local_20 = 0xd;
    BVar5 = WriteFile(hFile,&local_20,1,&local_24,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
LAB_0040bbf0:
      DVar6 = GetLastError();
      *(DWORD *)param_1 = DVar6;
      goto LAB_0040bbf8;
    }
    if (local_24 == 0) goto LAB_0040bbf8;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  goto joined_r0x0040bab5;
}



// ===== write_double_translated_unicode_nolock @ 0040bc0b (size 109) =====

/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_unicode_nolock(char
   const * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

char * __cdecl write_double_translated_unicode_nolock(char *param_1,uint param_2)

{
  wchar_t _WCh;
  wchar_t wVar1;
  wint_t wVar2;
  wchar_t *pwVar3;
  DWORD DVar4;
  int in_stack_0000000c;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  pwVar3 = (wchar_t *)(in_stack_0000000c + param_2);
  while( true ) {
    if (pwVar3 <= param_2) {
      return param_1;
    }
    _WCh = *(wchar_t *)param_2;
    wVar1 = __putwch_nolock(_WCh);
    if (wVar1 != _WCh) break;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
    if (_WCh == L'\n') {
      wVar2 = __putwch_nolock(L'\r');
      if (wVar2 != 0xd) break;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    param_2 = param_2 + 2;
  }
  DVar4 = GetLastError();
  *(DWORD *)param_1 = DVar4;
  return param_1;
}



// ===== write_requires_double_translation_nolock @ 0040bc78 (size 118) =====

/* Library Function - Single Match
    bool __cdecl write_requires_double_translation_nolock(int)
   
   Library: Visual Studio 2015 Release */

bool __cdecl write_requires_double_translation_nolock(int param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  BOOL BVar3;
  int iVar4;
  bool bVar5;
  DWORD local_8;
  
  iVar1 = __isatty(param_1);
  if (iVar1 == 0) {
    bVar5 = false;
  }
  else {
    iVar4 = param_1 >> 6;
    iVar1 = (param_1 & 0x3fU) * 0x30;
    if (((*(byte *)((&DAT_0041af58)[iVar4] + 0x28 + iVar1) & 0x80) == 0) ||
       ((p_Var2 = FUN_00407993(), *(int *)(*(int *)(p_Var2 + 0x4c) + 0xa8) == 0 &&
        (*(char *)((&DAT_0041af58)[iVar4] + 0x29 + iVar1) == '\0')))) {
      bVar5 = false;
    }
    else {
      BVar3 = GetConsoleMode(*(HANDLE *)((&DAT_0041af58)[iVar4] + 0x18 + iVar1),&local_8);
      bVar5 = BVar3 != 0;
    }
  }
  return bVar5;
}



// ===== write_text_ansi_nolock @ 0040bcee (size 223) =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  int in_stack_00000010;
  uint local_1410;
  char *local_140c;
  char local_1408 [5120];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  hFile = *(HANDLE *)((&DAT_0041af58)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x30);
  *(undefined4 *)param_1 = 0;
  local_140c = (char *)(in_stack_00000010 + param_3);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    if (local_140c <= param_3) break;
    pcVar4 = local_1408;
    do {
      if (local_140c <= param_3) break;
      cVar1 = *(char *)param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1408 + 0x13ff);
    BVar2 = WriteFile(hFile,local_1408,(int)pcVar4 - (int)local_1408,&local_1410,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      break;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_1410;
  } while ((uint)((int)pcVar4 - (int)local_1408) <= local_1410);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== write_text_utf16le_nolock @ 0040bdcd (size 238) =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf16le_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  int in_stack_00000010;
  uint local_1410;
  short *local_140c;
  short local_1408 [2560];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  hFile = *(HANDLE *)((&DAT_0041af58)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x30);
  local_140c = (short *)(in_stack_00000010 + param_3);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    if (local_140c <= param_3) break;
    psVar4 = local_1408;
    do {
      if (local_140c <= param_3) break;
      sVar1 = *(short *)param_3;
      param_3 = param_3 + 2;
      if (sVar1 == 10) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1408 + 0x9ff);
    BVar2 = WriteFile(hFile,local_1408,(int)psVar4 - (int)local_1408,&local_1410,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      break;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_1410;
  } while ((uint)((int)psVar4 - (int)local_1408) <= local_1410);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== write_text_utf8_nolock @ 0040bebb (size 301) =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf8_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3)

{
  WCHAR WVar1;
  HANDLE hFile;
  WCHAR *pWVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  WCHAR *pWVar7;
  int in_stack_00000010;
  DWORD local_1414;
  WCHAR *local_1410;
  CHAR local_140c [3416];
  WCHAR local_6b4 [854];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  hFile = *(HANDLE *)((&DAT_0041af58)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x30);
  local_1410 = (WCHAR *)(in_stack_00000010 + param_3);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pWVar7 = (WCHAR *)param_3;
  if (param_3 < local_1410) {
    do {
      uVar6 = 0;
      pWVar2 = local_6b4;
      do {
        if (local_1410 <= pWVar7) break;
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
        if (WVar1 == L'\n') {
          *pWVar2 = L'\r';
          pWVar2 = pWVar2 + 1;
        }
        *pWVar2 = WVar1;
        pWVar2 = pWVar2 + 1;
      } while (pWVar2 < local_6b4 + 0x354);
      uVar3 = WideCharToMultiByte(0xfde9,0,local_6b4,(int)pWVar2 - (int)local_6b4 >> 1,local_140c,
                                  0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
      if (uVar3 == 0) {
LAB_0040bfcd:
        DVar5 = GetLastError();
        *(DWORD *)param_1 = DVar5;
        break;
      }
      do {
        BVar4 = WriteFile(hFile,local_140c + uVar6,uVar3 - uVar6,&local_1414,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_0040bfcd;
        uVar6 = uVar6 + local_1414;
      } while (uVar6 < uVar3);
      *(uint *)(param_1 + 4) = (int)pWVar7 - param_3;
    } while (pWVar7 < local_1410);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== __write @ 0040bfe8 (size 221) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2015 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041b158)) {
      iVar3 = (_FileHandle & 0x3fU) * 0x30;
      if ((*(byte *)((&DAT_0041af58)[_FileHandle >> 6] + 0x28 + iVar3) & 1) != 0) {
        ___acrt_lowio_lock_fh(_FileHandle);
        iVar4 = -1;
        if ((*(byte *)((&DAT_0041af58)[_FileHandle >> 6] + 0x28 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
        }
        else {
          iVar4 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_0040c0aa();
        return iVar4;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00406b06();
  }
  return -1;
}



// ===== FUN_0040c0aa @ 0040c0aa (size 8) =====

void FUN_0040c0aa(void)

{
  uint unaff_ESI;
  
  ___acrt_lowio_unlock_fh(unaff_ESI);
  return;
}



// ===== __write_nolock @ 0040c0d3 (size 524) =====

/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int *piVar5;
  BOOL BVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  ulong local_18;
  DWORD local_14 [2];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  local_c = _MaxCharCount;
  if (_MaxCharCount == 0) goto LAB_0040c2cf;
  if (_Buf == (void *)0x0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00406b06();
    goto LAB_0040c2cf;
  }
  iVar8 = _FileHandle >> 6;
  iVar7 = (_FileHandle & 0x3fU) * 0x30;
  cVar2 = *(char *)((&DAT_0041af58)[iVar8] + 0x29 + iVar7);
  if (((cVar2 == '\x02') || (cVar2 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00406b06();
    goto LAB_0040c2cf;
  }
  if ((*(byte *)((&DAT_0041af58)[iVar8] + 0x28 + iVar7) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EBX);
  }
  bVar3 = write_requires_double_translation_nolock(_FileHandle);
  if (bVar3) {
    if (cVar2 == '\0') {
      puVar4 = (ulong *)write_double_translated_ansi_nolock
                                  ((int)&local_18,(char *)_FileHandle,(uint)_Buf);
      goto LAB_0040c25b;
    }
    if ((byte)(cVar2 - 1U) < 2) {
      puVar4 = (ulong *)write_double_translated_unicode_nolock((char *)&local_18,(uint)_Buf);
      goto LAB_0040c25b;
    }
  }
  else {
    if ((*(byte *)((&DAT_0041af58)[iVar8] + 0x28 + iVar7) & 0x80) == 0) {
      local_18 = 0;
      local_14[0] = 0;
      local_14[1] = 0;
      BVar6 = WriteFile(*(HANDLE *)((&DAT_0041af58)[iVar8] + 0x18 + iVar7),_Buf,local_c,local_14,
                        (LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        local_18 = GetLastError();
      }
      puVar4 = &local_18;
    }
    else if (cVar2 == '\0') {
      puVar4 = (ulong *)write_text_ansi_nolock((int)&local_18,(char *)_FileHandle,(uint)_Buf);
    }
    else if (cVar2 == '\x01') {
      puVar4 = (ulong *)write_text_utf8_nolock((int)&local_18,(char *)_FileHandle,(uint)_Buf);
    }
    else {
      if (cVar2 != '\x02') goto LAB_0040c296;
      puVar4 = (ulong *)write_text_utf16le_nolock((int)&local_18,(char *)_FileHandle,(uint)_Buf);
    }
LAB_0040c25b:
    uVar1 = *puVar4;
    if (puVar4[1] != 0) goto LAB_0040c2cf;
    if (uVar1 != 0) {
      if (uVar1 == 5) {
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        ___acrt_errno_map_os_error(uVar1);
      }
      goto LAB_0040c2cf;
    }
  }
LAB_0040c296:
  if (((*(byte *)((&DAT_0041af58)[iVar8] + 0x28 + iVar7) & 0x40) == 0) || (*(char *)_Buf != '\x1a'))
  {
    piVar5 = __errno();
    *piVar5 = 0x1c;
    puVar4 = ___doserrno();
    *puVar4 = 0;
  }
LAB_0040c2cf:
  iVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar7;
}



// ===== ___acrt_LCMapStringW @ 0040c2df (size 62) =====

/* Library Function - Single Match
    ___acrt_LCMapStringW
   
   Library: Visual Studio 2015 Release */

void __cdecl
___acrt_LCMapStringW
          (wchar_t *param_1,DWORD param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (0 < (int)param_4) {
    uVar1 = FUN_00407feb(param_3,param_4);
    uVar2 = uVar1 + 1;
    if ((int)param_4 <= (int)uVar1) {
      uVar2 = uVar1;
    }
  }
  ___acrt_LCMapStringEx_36(param_1,param_2,param_3,uVar2,param_5,param_6,0,0,0);
  return;
}



// ===== __isleadbyte_l @ 0040c31d (size 57) =====

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14;
  int *local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  uVar1 = *(ushort *)(*local_10 + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}



// ===== __acrt_LCMapStringA_stat @ 0040c356 (size 541) =====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __acrt_LCMapStringA_stat(struct __crt_locale_pointers *,wchar_t const *,unsigned
   long,char const *,int,char *,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_LCMapStringA_stat
          (__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  LPCWSTR lpWideCharStr;
  LPCWSTR lpWideCharStr_00;
  
  uVar2 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  iVar4 = param_5;
  if (0 < param_5) {
    iVar3 = ___strncnt(param_4,param_5);
    iVar4 = iVar3 + 1;
    if (param_5 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*(int *)param_1 + 8);
  }
  iVar3 = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,iVar4,(LPWSTR)0x0,0);
  if (iVar3 == 0) goto LAB_0040c54e;
  uVar1 = iVar3 * 2;
  if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
    lpWideCharStr = (LPCWSTR)0x0;
LAB_0040c423:
    if (((lpWideCharStr != (LPCWSTR)0x0) &&
        (iVar4 = MultiByteToWideChar(param_8,1,param_4,iVar4,lpWideCharStr,iVar3), iVar4 != 0)) &&
       (iVar4 = ___acrt_LCMapStringEx_36(param_2,param_3,lpWideCharStr,iVar3,(LPWSTR)0x0,0,0,0,0),
       iVar4 != 0)) {
      if ((param_3 & 0x400) == 0) {
        uVar1 = iVar4 * 2;
        if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
          lpWideCharStr_00 = (LPCWSTR)0x0;
LAB_0040c500:
          if ((lpWideCharStr_00 != (LPCWSTR)0x0) &&
             (iVar3 = ___acrt_LCMapStringEx_36
                                (param_2,param_3,lpWideCharStr,iVar3,lpWideCharStr_00,iVar4,0,0,0),
             iVar3 != 0)) {
            if (param_7 == 0) {
              param_7 = 0;
              param_6 = (LPSTR)0x0;
            }
            iVar4 = WideCharToMultiByte(param_8,0,lpWideCharStr_00,iVar4,param_6,param_7,(LPCSTR)0x0
                                        ,(LPBOOL)0x0);
            if (iVar4 != 0) {
              __freea_crt((int)lpWideCharStr_00);
              goto LAB_0040c545;
            }
          }
        }
        else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffe8;
          lpWideCharStr_00 = (LPCWSTR)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0040c4f9:
            lpWideCharStr_00 = (LPCWSTR)(puVar5 + 2);
            goto LAB_0040c500;
          }
        }
        else {
          puVar5 = __malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
          lpWideCharStr_00 = (LPCWSTR)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_0040c4f9;
          }
        }
        __freea_crt((int)lpWideCharStr_00);
      }
      else if ((param_7 != 0) && (iVar4 <= param_7)) {
        ___acrt_LCMapStringEx_36(param_2,param_3,lpWideCharStr,iVar3,(LPWSTR)param_6,param_7,0,0,0);
      }
    }
  }
  else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe8;
    lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0040c41c:
      lpWideCharStr = (LPCWSTR)(puVar5 + 2);
      goto LAB_0040c423;
    }
  }
  else {
    puVar5 = __malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
    lpWideCharStr = (LPCWSTR)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_0040c41c;
    }
  }
LAB_0040c545:
  __freea_crt((int)lpWideCharStr);
LAB_0040c54e:
  iVar4 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



// ===== ___acrt_LCMapStringA @ 0040c573 (size 75) =====

/* Library Function - Single Match
    ___acrt_LCMapStringA
   
   Library: Visual Studio 2015 Release */

void __cdecl
___acrt_LCMapStringA
          (__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  int local_14;
  __crt_locale_pointers local_10 [8];
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __acrt_LCMapStringA_stat(local_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return;
}



// ===== ___acrt_fp_strflt_to_string @ 0040c5be (size 188) =====

/* Library Function - Single Match
    ___acrt_fp_strflt_to_string
   
   Library: Visual Studio 2015 Release */

int __cdecl ___acrt_fp_strflt_to_string(uint *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    *(undefined1 *)param_1 = 0;
    iVar7 = param_3;
    if (param_3 < 1) {
      iVar7 = 0;
    }
    if (param_2 <= iVar7 + 1U) {
      piVar2 = __errno();
      iVar7 = 0x22;
      goto LAB_0040c5d2;
    }
    if (param_4 != 0) {
      pcVar3 = (char *)((int)param_1 + 1);
      pcVar6 = *(char **)(param_4 + 8);
      *(undefined1 *)param_1 = 0x30;
      for (; 0 < param_3; param_3 = param_3 + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
        pcVar3 = pcVar3 + 1;
      }
      *pcVar3 = '\0';
      if ((-1 < param_3) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if ((char)*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        puVar4 = (uint *)((int)param_1 + 1);
        do {
          uVar1 = *puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
        } while ((char)uVar1 != '\0');
        FUN_00411a40(param_1,(uint *)((int)param_1 + 1),
                     (uint)((int)puVar4 + (1 - ((int)param_1 + 2))));
      }
      return 0;
    }
  }
  piVar2 = __errno();
  iVar7 = 0x16;
LAB_0040c5d2:
  *piVar2 = iVar7;
  FUN_00406b06();
  return iVar7;
}



// ===== scoped_fp_state_reset @ 0040c67a (size 42) =====

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall `anonymous namespace'::scoped_fp_state_reset::scoped_fp_state_reset(void)
    public: __thiscall `anonymous namespace'::scoped_fp_state_reset::scoped_fp_state_reset(void)
   
   Library: Visual Studio 2015 Release */

uint * __fastcall scoped_fp_state_reset(uint *param_1)

{
  fegetenv(param_1);
  if (((byte)*param_1 & 0x1f) == 0x1f) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    feholdexcept(param_1);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



// ===== divide @ 0040c6b0 (size 1192) =====

/* WARNING: Removing unreachable block (ram,0x0040ca17) */
/* WARNING: Removing unreachable block (ram,0x0040c9f2) */
/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::divide(struct __crt_strtox::big_integer &,struct
   __crt_strtox::big_integer const &)
   
   Library: Visual Studio 2015 Release */

__uint64 __cdecl __crt_strtox::divide(big_integer *param_1,big_integer *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar4;
  uint uVar5;
  big_integer *pbVar6;
  uint uVar7;
  big_integer *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 local_21c [460];
  big_integer *local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  big_integer *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
    return 0;
  }
  local_3c = *(uint *)param_2;
  if (local_3c == 0) {
    return 0;
  }
  local_10 = iVar1 - 1;
  uVar7 = local_3c - 1;
  if (uVar7 == 0) {
    local_2c = *(uint *)(param_2 + 4);
    if (local_2c == 1) {
      uVar7 = *(uint *)(param_1 + 4);
      *(undefined4 *)param_1 = 0;
      _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
      return (__uint64)uVar7;
    }
    if (local_10 == 0) {
      uVar7 = *(uint *)(param_1 + 4);
      *(undefined4 *)param_1 = 0;
      _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
      uVar5 = uVar7 % local_2c;
      *(uint *)(param_1 + 4) = uVar5;
      *(uint *)param_1 = (uint)(uVar5 != 0);
      return (ulonglong)uVar7 / (ulonglong)local_2c;
    }
    uVar7 = 0;
    local_c = 0;
    local_8 = 0;
    local_14 = (big_integer *)0x0;
    if (local_10 != 0xffffffff) {
      pbVar6 = param_1 + iVar1 * 4;
      local_20 = iVar1;
      do {
        uVar12 = __aulldvrm(*(uint *)pbVar6,uVar7,local_2c,0);
        local_48 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(undefined4)local_48);
        pbVar6 = pbVar6 + -4;
        local_14 = param_1;
        local_8 = local_c;
        local_20 = local_20 + -1;
        uVar7 = extraout_ECX;
        local_c = (int)uVar12;
      } while (local_20 != 0);
      local_20 = 0;
    }
    *(undefined4 *)param_1 = 0;
    _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
    *(uint *)(param_1 + 4) = uVar7;
    *(big_integer **)(param_1 + 8) = local_14;
    *(uint *)param_1 = (local_14 != (big_integer *)0x0) + 1;
    return CONCAT44(local_8,local_c);
  }
  if (uVar7 <= local_10) {
    local_20 = local_10 - uVar7;
    if (local_20 <= (int)local_10) {
      pbVar6 = param_1 + iVar1 * 4;
      pbVar8 = param_2 + (local_10 - local_20) * 4 + 4;
      uVar7 = local_10;
      do {
        if (*(int *)pbVar8 != *(int *)pbVar6) {
          if (*(uint *)(param_1 + uVar7 * 4 + 4) <= *(uint *)(param_2 + (uVar7 - local_20) * 4 + 4))
          goto LAB_0040c866;
          break;
        }
        uVar7 = uVar7 - 1;
        pbVar8 = pbVar8 + -4;
        pbVar6 = pbVar6 + -4;
      } while (local_20 <= (int)uVar7);
    }
    local_20 = local_20 + 1;
LAB_0040c866:
    if (local_20 != 0) {
      local_38 = *(uint *)(param_2 + local_3c * 4);
      local_24 = *(uint *)(param_2 + local_3c * 4 + -4);
      local_28 = 0x1f;
      if (local_38 != 0) {
        for (; local_38 >> local_28 == 0; local_28 = local_28 + -1) {
        }
      }
      if (local_38 == 0) {
        local_28 = 0x20;
      }
      else {
        local_28 = 0x1f - local_28;
      }
      local_40 = 0x20 - local_28;
      if (local_28 != 0) {
        uVar7 = local_24 >> ((byte)local_40 & 0x1f);
        local_24 = local_24 << ((byte)local_28 & 0x1f);
        local_38 = local_38 << ((byte)local_28 & 0x1f) | uVar7;
        if (2 < local_3c) {
          local_24 = local_24 | *(uint *)(param_2 + local_3c * 4 + -8) >> ((byte)local_40 & 0x1f);
        }
      }
      local_4c = 0;
      local_20 = local_20 + -1;
      if (local_20 < 0) {
        uVar10 = 0;
        local_4c = 0;
      }
      else {
        local_14 = param_1 + local_20 * 4 + 4;
        local_c = local_20 + local_3c;
        local_50 = param_1 + local_c * 4 + -4;
        uVar10 = local_4c;
        do {
          local_4c = uVar10;
          if (local_10 < local_c) {
            local_34 = 0;
          }
          else {
            local_34 = *(uint *)(local_50 + 8);
          }
          uVar7 = *(uint *)(local_50 + 4);
          local_18 = *(uint *)local_50;
          local_2c = 0;
          local_8 = local_34;
          if (local_28 != 0) {
            uVar7 = local_18 >> ((byte)local_40 & 0x1f);
            lVar13 = __allshl((byte)local_28,local_34);
            local_8 = (uint)((ulonglong)lVar13 >> 0x20);
            uVar7 = uVar7 | (uint)lVar13;
            local_18 = local_18 << ((byte)local_28 & 0x1f);
            if (2 < local_c) {
              local_18 = local_18 |
                         *(uint *)(param_1 + (local_3c + local_20) * 4 + -8) >>
                         ((byte)local_40 & 0x1f);
            }
          }
          local_48 = __aulldvrm(uVar7,local_8,local_38,0);
          local_1c = (int)(local_48 >> 0x20);
          local_8 = (uint)local_48;
          local_2c = 0;
          uVar14 = (ulonglong)extraout_ECX_00;
          if (local_1c != 0) {
            lVar13 = __allmul((uint)(local_48 - 0xffffffff),(int)(local_48 - 0xffffffff >> 0x20),
                              local_38,0);
            uVar14 = lVar13 + uVar14;
            local_2c = (uint)(uVar14 >> 0x20);
            local_48 = 0xffffffff;
          }
          local_1c = (int)(local_48 >> 0x20);
          uVar7 = (uint)uVar14;
          uVar2 = local_48;
          if ((int)(uVar14 >> 0x20) == 0) {
            while( true ) {
              uVar5 = (uint)local_48;
              local_8 = local_18;
              uVar14 = __allmul(local_24,0,uVar5,(int)(local_48 >> 0x20));
              if (uVar14 <= CONCAT44(uVar7,local_8)) break;
              bVar11 = uVar5 != 0;
              uVar5 = uVar5 - 1;
              local_1c = local_1c + -1 + (uint)bVar11;
              bVar11 = CARRY4(uVar7,local_38);
              uVar7 = uVar7 + local_38;
              local_48 = CONCAT44(local_1c,uVar5);
              if (local_2c + bVar11 != 0) break;
              local_2c = 0;
            }
            uVar2 = CONCAT44(local_1c,uVar5);
          }
          if (uVar2 != 0) {
            uVar5 = 0;
            uVar7 = 0;
            if (local_3c != 0) {
              local_10 = local_3c;
              pbVar8 = local_14;
              pbVar6 = param_2;
              do {
                pbVar6 = pbVar6 + 4;
                lVar13 = (local_48 & 0xffffffff) * (ulonglong)*(uint *)pbVar6;
                uVar3 = (uint)lVar13;
                uVar9 = uVar5 + uVar3;
                uVar5 = uVar7 + (int)((ulonglong)lVar13 >> 0x20) + local_48._4_4_ * *(uint *)pbVar6
                        + (uint)CARRY4(uVar5,uVar3);
                uVar7 = 0;
                if (*(uint *)pbVar8 < uVar9) {
                  bVar11 = 0xfffffffe < uVar5;
                  uVar5 = uVar5 + 1;
                  uVar7 = (uint)bVar11;
                }
                *(uint *)pbVar8 = *(uint *)pbVar8 - uVar9;
                pbVar8 = pbVar8 + 4;
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
            if ((uVar7 != 0) || (local_34 < uVar5)) {
              if (local_3c != 0) {
                uVar5 = 0;
                pbVar8 = local_14;
                uVar7 = local_3c;
                pbVar6 = param_2;
                do {
                  pbVar6 = pbVar6 + 4;
                  uVar3 = *(uint *)pbVar8;
                  uVar9 = *(uint *)pbVar6;
                  uVar4 = uVar3 + *(uint *)pbVar6;
                  *(uint *)pbVar8 = uVar4 + uVar5;
                  uVar5 = (uint)CARRY4(uVar3,uVar9) + (uint)CARRY4(uVar4,uVar5);
                  uVar7 = uVar7 - 1;
                  pbVar8 = pbVar8 + 4;
                } while (uVar7 != 0);
              }
              uVar2 = uVar2 - 1;
            }
            local_10 = local_c - 1;
          }
          local_1c = (int)(uVar2 >> 0x20);
          uVar10 = (undefined4)uVar2;
          local_14 = local_14 + -4;
          local_20 = local_20 + -1;
          local_50 = local_50 + -4;
          local_c = local_c - 1;
        } while (-1 < local_20);
      }
      uVar7 = local_10 + 1;
      if (uVar7 < *(uint *)param_1) {
        pbVar6 = param_1 + (local_10 + 2) * 4;
        uVar5 = uVar7;
        do {
          *(undefined4 *)pbVar6 = 0;
          pbVar6 = pbVar6 + 4;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)param_1);
      }
      *(uint *)param_1 = uVar7;
      while ((uVar7 != 0 && (*(int *)(param_1 + *(int *)param_1 * 4) == 0))) {
        uVar7 = *(int *)param_1 - 1;
        *(uint *)param_1 = uVar7;
      }
      return CONCAT44(local_4c,uVar10);
    }
  }
  return 0;
}



// ===== FUN_0040cb5e @ 0040cb5e (size 5019) =====

void __cdecl
FUN_0040cb5e(int param_1,uint param_2,int param_3,int *param_4,char *param_5,rsize_t param_6)

{
  byte bVar1;
  ulonglong uVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  __acrt_fp_class _Var6;
  rsize_t rVar7;
  uint uVar8;
  errno_t eVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_EDX;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  char *pcVar17;
  uint *puVar18;
  uint uVar19;
  float10 fVar20;
  ulonglong uVar21;
  longlong lVar22;
  __uint64 _Var23;
  char *_Src;
  double dVar24;
  uint local_964 [115];
  uint local_798 [2];
  char local_790;
  int local_788;
  int *local_784;
  char *local_780;
  char *local_77c;
  uint local_778;
  uint *local_774;
  uint local_770;
  undefined8 local_76c;
  uint *local_764;
  uint *local_760;
  uint *local_75c;
  uint *local_758;
  uint *local_754;
  uint *local_750;
  undefined1 local_749;
  uint *local_748;
  uint local_744 [115];
  uint *local_578;
  uint local_574 [115];
  uint *local_3a8;
  uint local_3a4 [115];
  uint *local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  pcVar17 = param_5;
  piVar4 = param_4;
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  local_784 = param_4;
  local_780 = param_5;
  scoped_fp_state_reset(local_798);
  uVar10 = param_2;
  iVar11 = param_1;
  cVar5 = '-';
  if ((param_2 & 0x80000000) == 0) {
    cVar5 = ' ';
  }
  *piVar4 = (int)cVar5;
  piVar4[2] = (int)pcVar17;
  if (((param_2 & 0x7ff00000) == 0) && (param_1 == 0 && (param_2 & 0xfffff) == 0)) {
    _Src = "0";
    local_784[1] = 0;
  }
  else {
    _Var6 = __acrt_fp_classify((double *)&param_1);
    if (_Var6 != 0) {
      local_784[1] = 1;
    }
    if (_Var6 == 1) {
      _Src = "1#INF";
    }
    else if (_Var6 == 2) {
      _Src = "1#QNAN";
    }
    else if (_Var6 == 3) {
      _Src = "1#SNAN";
    }
    else {
      if (_Var6 != 4) {
        param_2 = uVar10 & 0x7fffffff;
        local_788 = 0;
        local_77c = (char *)(param_3 + 1);
        uVar21 = CONCAT44(uVar10,iVar11) & 0x7fffffffffffffff;
        local_76c._4_4_ = (uint)(uVar21 >> 0x20);
        uVar10 = local_76c._4_4_ >> 0x14;
        if (uVar10 != 0) {
          iVar13 = 0x100000;
        }
        else {
          iVar13 = 0;
        }
        local_76c._0_4_ = (uint)uVar21;
        uVar8 = (uint)local_76c;
        uVar19 = (local_76c._4_4_ & 0xfffff) + iVar13;
        puVar14 = (uint *)(uVar10 + ((uVar10 == 0) - 0x433));
        param_1 = iVar11;
        local_76c = uVar21;
        local_750 = puVar14;
        fVar20 = (float10)FUN_0040f0d0();
        dVar24 = (double)fVar20;
        FUN_0040f1e0(dVar24);
        uVar21 = FUN_00411400((int)((ulonglong)dVar24 >> 0x20),extraout_EDX);
        local_770 = (uint)uVar21;
        if ((local_770 == 0x7fffffff) || (local_770 == 0x80000000)) {
          local_770 = 0;
        }
        local_1d4[0] = uVar8;
        local_1d4[1] = uVar19;
        uVar10 = (uint)(uVar19 != 0);
        puVar12 = (uint *)(uVar10 + 1);
        local_1d8 = puVar12;
        if ((int)puVar14 < 0) {
          if (puVar14 == (uint *)0xfffffc02) {
LAB_0040d200:
            uVar10 = local_1d4[uVar10];
            local_76c = local_76c & 0xffffffff;
            iVar11 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            if (uVar10 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 1;
            }
            local_749 = iVar11 == 0x20;
            if ((puVar12 == (uint *)0x73) && ((bool)local_749)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (((uint *)0x73 < puVar12) || (bVar3)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              puVar15 = (uint *)0x72;
              if (puVar12 < (uint *)0x72) {
                puVar15 = puVar12;
              }
              if (puVar15 != (uint *)0xffffffff) {
                puVar18 = local_1d4 + (int)puVar15;
                puVar16 = puVar15;
                local_758 = puVar18;
                do {
                  if (puVar16 < puVar12) {
                    local_754 = (uint *)*puVar18;
                  }
                  else {
                    local_754 = (uint *)0x0;
                  }
                  if ((uint *)((int)puVar16 + -1) < puVar12) {
                    uVar10 = puVar18[-1];
                  }
                  else {
                    uVar10 = 0;
                  }
                  puVar18 = puVar18 + -1;
                  puVar16 = (uint *)((int)puVar16 + -1);
                  *local_758 = uVar10 >> 0x1f ^ (int)local_754 * 2;
                  local_758 = local_758 + -1;
                  puVar12 = local_1d8;
                  puVar14 = local_750;
                } while (puVar16 != (uint *)0xffffffff);
              }
              local_1d8 = puVar15;
              if ((bool)local_749) {
                local_1d8 = (uint *)((int)puVar15 + 1);
              }
            }
            uVar10 = 1U - (int)puVar14 >> 5;
            _memset(local_574,0,uVar10 * 4);
            local_574[uVar10] = 1 << ((byte)(1U - (int)puVar14) & 0x1f);
          }
          else {
            local_574[0] = 0;
            puVar15 = (uint *)0x2;
            local_574[1] = 0x100000;
            local_578 = (uint *)0x2;
            if (puVar12 != (uint *)0x2) goto LAB_0040d200;
            iVar11 = 0;
            do {
              if (*(int *)((int)local_574 + iVar11) != *(int *)((int)local_1d4 + iVar11))
              goto LAB_0040d200;
              iVar11 = iVar11 + 4;
            } while (iVar11 != 8);
            local_76c = local_76c & 0xffffffff;
            iVar11 = 0x1f;
            if (uVar19 != 0) {
              for (; uVar19 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            if (uVar19 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 1;
            }
            local_749 = 0x20U - iVar11 < 2;
            puVar14 = local_1d4 + 2;
            local_758 = puVar14;
            do {
              if (puVar15 < puVar12) {
                local_754 = (uint *)*puVar14;
              }
              else {
                local_754 = (uint *)0x0;
              }
              if ((uint *)((int)puVar15 + -1) < puVar12) {
                uVar10 = puVar14[-1];
              }
              else {
                uVar10 = 0;
              }
              puVar14 = puVar14 + -1;
              puVar15 = (uint *)((int)puVar15 + -1);
              *local_758 = uVar10 >> 0x1e ^ (int)local_754 << 2;
              local_758 = local_758 + -1;
              puVar12 = local_1d8;
            } while (puVar15 != (uint *)0xffffffff);
            local_1d8 = (uint *)((byte)local_749 + 2);
            local_75c = (uint *)(2 - (int)local_750);
            uVar10 = (uint)local_75c >> 5;
            _memset(local_574,0,uVar10 * 4);
            local_574[uVar10] = 1 << ((byte)local_75c & 0x1f);
          }
          local_578 = (uint *)(uVar10 + 1);
          local_3a8 = local_578;
          _memcpy_s(local_3a4,0x1cc,local_574,(int)local_578 * 4);
        }
        else {
          local_574[0] = 0;
          local_574[1] = 0x100000;
          local_578 = (uint *)0x2;
          if (puVar12 == (uint *)0x2) {
            iVar11 = 0;
            do {
              if (*(int *)((int)local_574 + iVar11) != *(int *)((int)local_1d4 + iVar11))
              goto LAB_0040cf10;
              iVar11 = iVar11 + 4;
            } while (iVar11 != 8);
            local_760 = (uint *)((int)local_750 + 2U & 0x1f);
            local_774 = (uint *)(0x20 - (int)local_760);
            puVar14 = (uint *)((int)local_750 + 2U >> 5);
            local_754 = puVar14;
            lVar22 = __allshl((byte)local_774,0);
            local_76c = local_76c & 0xffffffff;
            local_75c = (uint *)((int)lVar22 + -1);
            iVar11 = 0x1f;
            if (uVar19 != 0) {
              for (; uVar19 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            local_778 = ~(uint)local_75c;
            if (uVar19 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 1;
            }
            local_758 = (uint *)((int)puVar14 + 2);
            local_749 = (uint *)(0x20 - iVar11) < local_760;
            if ((local_758 == (uint *)0x73) && ((bool)local_749)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if ((0x73 < local_758) || (bVar3)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              if (0x71 < local_758) {
                local_758 = (uint *)0x72;
              }
              local_764 = local_758;
              if (local_758 != (uint *)0xffffffff) {
                puVar15 = (uint *)((int)local_758 - (int)local_754);
                local_750 = local_1d4 + (int)puVar15;
                do {
                  puVar14 = local_754;
                  if (local_764 < local_754) break;
                  if (puVar15 < puVar12) {
                    uVar10 = *local_750;
                  }
                  else {
                    uVar10 = 0;
                  }
                  if ((uint *)((int)puVar15 + -1) < puVar12) {
                    uVar19 = local_750[-1];
                  }
                  else {
                    uVar19 = 0;
                  }
                  local_1d4[(int)local_764] =
                       (uVar19 & local_778) >> ((byte)local_774 & 0x1f) |
                       (uVar10 & (uint)local_75c) << ((byte)local_760 & 0x1f);
                  local_764 = (uint *)((int)local_764 + -1);
                  puVar15 = (uint *)((int)puVar15 + -1);
                  local_750 = local_750 + -1;
                  puVar12 = local_1d8;
                } while (local_764 != (uint *)0xffffffff);
              }
              if (puVar14 != (uint *)0x0) {
                puVar12 = local_1d4;
                for (; puVar14 != (uint *)0x0; puVar14 = (uint *)((int)puVar14 + -1)) {
                  *puVar12 = 0;
                  puVar12 = puVar12 + 1;
                }
              }
              local_1d8 = local_758;
              if ((bool)local_749) {
                local_1d8 = (uint *)((int)local_758 + 1);
              }
            }
            local_574[0] = 4;
          }
          else {
LAB_0040cf10:
            local_754 = (uint *)((int)local_750 + 1U & 0x1f);
            local_774 = (uint *)(0x20 - (int)local_754);
            puVar14 = (uint *)((int)local_750 + 1U >> 5);
            local_750 = puVar14;
            lVar22 = __allshl((byte)local_774,0);
            uVar10 = local_1d4[uVar10];
            local_75c = (uint *)((int)lVar22 + -1);
            local_76c = local_76c & 0xffffffff;
            iVar11 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            local_778 = ~(uint)local_75c;
            if (uVar10 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 1;
            }
            local_764 = (uint *)((int)puVar12 + (int)puVar14);
            local_749 = (uint *)(0x20 - iVar11) < local_754;
            if ((local_764 == (uint *)0x73) && ((bool)local_749)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (((uint *)0x73 < local_764) || (bVar3)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              if ((uint *)0x71 < local_764) {
                local_764 = (uint *)0x72;
              }
              local_758 = local_764;
              if (local_764 != (uint *)0xffffffff) {
                puVar15 = (uint *)((int)local_764 - (int)local_750);
                local_760 = local_1d4 + (int)puVar15;
                do {
                  puVar14 = local_750;
                  if (local_758 < local_750) break;
                  if (puVar15 < puVar12) {
                    uVar10 = *local_760;
                  }
                  else {
                    uVar10 = 0;
                  }
                  if ((uint *)((int)puVar15 + -1) < puVar12) {
                    uVar19 = local_760[-1];
                  }
                  else {
                    uVar19 = 0;
                  }
                  local_760 = local_760 + -1;
                  local_1d4[(int)local_758] =
                       (uVar10 & (uint)local_75c) << ((byte)local_754 & 0x1f) |
                       (uVar19 & local_778) >> ((byte)local_774 & 0x1f);
                  local_758 = (uint *)((int)local_758 + -1);
                  puVar15 = (uint *)((int)puVar15 + -1);
                  puVar12 = local_1d8;
                } while (local_758 != (uint *)0xffffffff);
              }
              if (puVar14 != (uint *)0x0) {
                puVar12 = local_1d4;
                for (; puVar14 != (uint *)0x0; puVar14 = (uint *)((int)puVar14 + -1)) {
                  *puVar12 = 0;
                  puVar12 = puVar12 + 1;
                }
              }
              local_1d8 = local_764;
              if ((bool)local_749) {
                local_1d8 = (uint *)((int)local_764 + 1);
              }
            }
            local_574[0] = 2;
          }
          local_3a8 = (uint *)0x1;
          local_574[1] = 0;
          local_578 = (uint *)0x1;
          _memcpy_s(local_3a4,0x1cc,local_574,4);
        }
        local_778 = 10;
        if ((int)local_770 < 0) {
          local_75c = (uint *)(-local_770 % 10);
          for (local_758 = (uint *)(-local_770 / 10); local_758 != (uint *)0x0;
              local_758 = (uint *)((int)local_758 - (int)local_750)) {
            local_750 = local_758;
            if ((uint *)0x26 < local_758) {
              local_750 = (uint *)0x26;
            }
            uVar10 = (uint)(byte)(&DAT_0041799e)[(int)local_750 * 4];
            bVar1 = (&DAT_0041799f)[(int)local_750 * 4];
            local_578 = (uint *)(uVar10 + bVar1);
            _memset(local_574,0,uVar10 * 4);
            FUN_004114c0(local_574 + uVar10,
                         (uint *)(&UNK_00417098 +
                                 (uint)*(ushort *)(&UNK_0041799c + (int)local_750 * 4) * 4),
                         (uint)bVar1 << 2);
            uVar10 = local_1d4[0];
            local_764 = local_578;
            if (local_578 < (uint *)0x2) {
              if (local_574[0] == 0) {
LAB_0040d889:
                local_1d8 = (uint *)0x0;
                rVar7 = 0;
                puVar14 = local_964;
                goto LAB_0040db15;
              }
              if ((local_574[0] == 1) || (local_1d8 == (uint *)0x0)) goto LAB_0040db26;
              uVar19 = 0;
              local_76c = CONCAT44(local_1d8,(uint)local_76c);
              puVar14 = (uint *)0x0;
              do {
                lVar22 = (ulonglong)local_574[0] * (ulonglong)local_1d4[(int)puVar14] +
                         (ulonglong)uVar19;
                local_1d4[(int)puVar14] = (uint)lVar22;
                uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                puVar14 = (uint *)((int)puVar14 + 1);
              } while (puVar14 != local_1d8);
LAB_0040d8e9:
              if (uVar19 == 0) goto LAB_0040db26;
              if (local_1d8 < (uint *)0x73) {
                local_1d4[(int)local_1d8] = uVar19;
                local_1d8 = (uint *)((int)local_1d8 + 1);
                goto LAB_0040db26;
              }
LAB_0040dbc4:
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_964,0);
              bVar3 = false;
            }
            else {
              if (local_1d8 < (uint *)0x2) {
                local_1d8 = local_578;
                _memcpy_s(local_1d4,0x1cc,local_574,(int)local_578 << 2);
                if (uVar10 != 0) {
                  if ((uVar10 != 1) && (local_1d8 != (uint *)0x0)) {
                    uVar19 = 0;
                    local_76c = CONCAT44(local_1d8,(uint)local_76c);
                    puVar14 = (uint *)0x0;
                    do {
                      lVar22 = (ulonglong)uVar10 * (ulonglong)local_1d4[(int)puVar14] +
                               (ulonglong)uVar19;
                      local_1d4[(int)puVar14] = (uint)lVar22;
                      uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                      puVar14 = (uint *)((int)puVar14 + 1);
                    } while (puVar14 != local_1d8);
                    goto LAB_0040d8e9;
                  }
                  goto LAB_0040db26;
                }
                goto LAB_0040d889;
              }
              puVar14 = local_574;
              if (local_578 < local_1d8) {
                local_774 = local_1d4;
                local_764 = local_1d8;
                local_754 = local_578;
              }
              else {
                puVar14 = local_1d4;
                local_774 = local_574;
                local_754 = local_1d8;
              }
              local_1d8 = (uint *)0x0;
              puVar12 = (uint *)0x0;
              local_748 = (uint *)0x0;
              if (local_754 != (uint *)0x0) {
                local_788 = (int)puVar14 - (int)local_744;
                do {
                  uVar10 = *(uint *)((int)local_744 + local_788 + (int)puVar12 * 4);
                  local_76c = CONCAT44(uVar10,(uint)local_76c);
                  if (uVar10 == 0) {
                    if (puVar12 == local_1d8) {
                      local_744[(int)puVar12] = 0;
                      local_1d8 = (uint *)((int)puVar12 + 1);
                      local_748 = local_1d8;
                    }
                  }
                  else {
                    uVar19 = 0;
                    local_760 = (uint *)0x0;
                    puVar14 = puVar12;
                    if (local_764 != (uint *)0x0) {
                      do {
                        if (puVar14 == (uint *)0x73) break;
                        if (puVar14 == local_1d8) {
                          local_744[(int)puVar14] = 0;
                          local_748 = (uint *)((int)local_760 + 1U + (int)puVar12);
                        }
                        lVar22 = (ulonglong)local_774[(int)local_760] * (ulonglong)uVar10 +
                                 (ulonglong)uVar19;
                        uVar8 = (uint)lVar22;
                        puVar15 = local_744 + (int)puVar14;
                        uVar19 = *puVar15;
                        *puVar15 = *puVar15 + uVar8;
                        uVar19 = (int)((ulonglong)lVar22 >> 0x20) + (uint)CARRY4(uVar19,uVar8);
                        local_760 = (uint *)((int)local_760 + 1);
                        puVar14 = (uint *)((int)puVar14 + 1);
                        local_1d8 = local_748;
                      } while (local_760 != local_764);
                      do {
                        if (uVar19 == 0) break;
                        if (puVar14 == (uint *)0x73) goto LAB_0040dbc4;
                        if (puVar14 == local_1d8) {
                          local_744[(int)puVar14] = 0;
                          local_748 = (uint *)((int)puVar14 + 1);
                        }
                        puVar15 = local_744 + (int)puVar14;
                        uVar10 = *puVar15;
                        *puVar15 = *puVar15 + uVar19;
                        uVar19 = (uint)CARRY4(uVar10,uVar19);
                        puVar14 = (uint *)((int)puVar14 + 1);
                        local_1d8 = local_748;
                      } while( true );
                    }
                    if (puVar14 == (uint *)0x73) goto LAB_0040dbc4;
                  }
                  puVar12 = (uint *)((int)puVar12 + 1);
                } while (puVar12 != local_754);
              }
              rVar7 = (int)local_1d8 << 2;
              puVar14 = local_744;
LAB_0040db15:
              _memcpy_s(local_1d4,0x1cc,puVar14,rVar7);
LAB_0040db26:
              bVar3 = true;
            }
            if (!bVar3) goto LAB_0040dc12;
          }
          if (local_75c != (uint *)0x0) {
            uVar10 = *(uint *)(&DAT_00417a34 + (int)local_75c * 2);
            local_76c = CONCAT44(uVar10,(uint)local_76c);
            if (uVar10 == 0) {
LAB_0040dc12:
              local_1d8 = (uint *)0x0;
              puVar14 = local_1d4;
              goto LAB_0040dc1f;
            }
            if ((uVar10 != 1) && (local_1d8 != (uint *)0x0)) {
              uVar19 = 0;
              puVar14 = (uint *)0x0;
              do {
                lVar22 = (ulonglong)uVar10 * (ulonglong)local_1d4[(int)puVar14] + (ulonglong)uVar19;
                local_1d4[(int)puVar14] = (uint)lVar22;
                uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                puVar14 = (uint *)((int)puVar14 + 1);
              } while (puVar14 != local_1d8);
              if (uVar19 != 0) {
                if ((uint *)0x72 < local_1d8) goto LAB_0040dc12;
                local_1d4[(int)local_1d8] = uVar19;
                local_1d8 = (uint *)((int)local_1d8 + 1);
              }
            }
          }
        }
        else {
          local_774 = (uint *)(local_770 / 10);
          local_76c = CONCAT44(local_770 % 10,(uint)local_76c);
          uVar10 = local_770 % 10;
          if (local_774 != (uint *)0x0) {
            do {
              local_760 = local_774;
              if ((uint *)0x26 < local_774) {
                local_760 = (uint *)0x26;
              }
              uVar10 = (uint)(byte)(&DAT_0041799e)[(int)local_760 * 4];
              bVar1 = (&DAT_0041799f)[(int)local_760 * 4];
              local_578 = (uint *)(uVar10 + bVar1);
              _memset(local_574,0,uVar10 * 4);
              FUN_004114c0(local_574 + uVar10,
                           (uint *)(&UNK_00417098 +
                                   (uint)*(ushort *)(&UNK_0041799c + (int)local_760 * 4) * 4),
                           (uint)bVar1 << 2);
              uVar10 = local_3a4[0];
              local_764 = local_578;
              if (local_578 < (uint *)0x2) {
                if (local_574[0] == 0) {
                  rVar7 = 0;
                  local_748 = (uint *)0x0;
                  local_3a8 = (uint *)0x0;
LAB_0040d6d2:
                  puVar14 = local_744;
                  goto LAB_0040d6d9;
                }
                if ((local_574[0] == 1) || (local_3a8 == (uint *)0x0)) goto LAB_0040d6ea;
                uVar19 = 0;
                puVar14 = (uint *)0x0;
                do {
                  lVar22 = (ulonglong)local_574[0] * (ulonglong)local_3a4[(int)puVar14] +
                           (ulonglong)uVar19;
                  local_3a4[(int)puVar14] = (uint)lVar22;
                  uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                  puVar14 = (uint *)((int)puVar14 + 1);
                } while (puVar14 != local_3a8);
LAB_0040d52a:
                local_75c = local_3a8;
                if (uVar19 == 0) goto LAB_0040d6ea;
                if (local_3a8 < (uint *)0x73) {
                  local_3a4[(int)local_3a8] = uVar19;
                  local_3a8 = (uint *)((int)local_3a8 + 1);
                  goto LAB_0040d6ea;
                }
                local_578 = (uint *)0x0;
                puVar14 = local_574;
LAB_0040d747:
                local_3a8 = (uint *)0x0;
                _memcpy_s(local_3a4,0x1cc,puVar14,0);
                bVar3 = false;
              }
              else {
                if ((uint *)0x1 < local_3a8) {
                  puVar14 = local_574;
                  if (local_578 < local_3a8) {
                    local_754 = local_3a4;
                    local_764 = local_3a8;
                    local_758 = local_578;
                  }
                  else {
                    puVar14 = local_3a4;
                    local_754 = local_574;
                    local_758 = local_3a8;
                  }
                  local_3a8 = (uint *)0x0;
                  puVar12 = (uint *)0x0;
                  local_748 = (uint *)0x0;
                  if (local_758 != (uint *)0x0) {
                    local_788 = (int)puVar14 - (int)local_744;
                    do {
                      local_75c = *(uint **)((int)local_744 + local_788 + (int)puVar12 * 4);
                      if (local_75c == (uint *)0x0) {
                        if (puVar12 == local_3a8) {
                          local_744[(int)puVar12] = 0;
                          local_3a8 = (uint *)((int)puVar12 + 1);
                          local_748 = local_3a8;
                        }
                      }
                      else {
                        uVar10 = 0;
                        local_750 = (uint *)0x0;
                        puVar14 = puVar12;
                        if (local_764 != (uint *)0x0) {
                          do {
                            if (puVar14 == (uint *)0x73) break;
                            if (puVar14 == local_3a8) {
                              local_744[(int)puVar14] = 0;
                              local_748 = (uint *)((int)local_750 + 1U + (int)puVar12);
                            }
                            lVar22 = (ulonglong)local_754[(int)local_750] * ZEXT48(local_75c) +
                                     (ulonglong)uVar10;
                            uVar19 = (uint)lVar22;
                            puVar15 = local_744 + (int)puVar14;
                            uVar10 = *puVar15;
                            *puVar15 = *puVar15 + uVar19;
                            uVar10 = (int)((ulonglong)lVar22 >> 0x20) + (uint)CARRY4(uVar10,uVar19);
                            local_750 = (uint *)((int)local_750 + 1);
                            puVar14 = (uint *)((int)puVar14 + 1);
                            local_3a8 = local_748;
                          } while (local_750 != local_764);
                          do {
                            if (uVar10 == 0) break;
                            if (puVar14 == (uint *)0x73) goto LAB_0040d732;
                            if (puVar14 == local_3a8) {
                              local_744[(int)puVar14] = 0;
                              local_748 = (uint *)((int)puVar14 + 1);
                            }
                            puVar15 = local_744 + (int)puVar14;
                            uVar19 = *puVar15;
                            *puVar15 = *puVar15 + uVar10;
                            uVar10 = (uint)CARRY4(uVar19,uVar10);
                            puVar14 = (uint *)((int)puVar14 + 1);
                            local_3a8 = local_748;
                          } while( true );
                        }
                        if (puVar14 == (uint *)0x73) {
LAB_0040d732:
                          puVar14 = local_964;
                          goto LAB_0040d747;
                        }
                      }
                      puVar12 = (uint *)((int)puVar12 + 1);
                    } while (puVar12 != local_758);
                  }
                  rVar7 = (int)local_3a8 << 2;
                  goto LAB_0040d6d2;
                }
                local_3a8 = local_578;
                _memcpy_s(local_3a4,0x1cc,local_574,(int)local_578 << 2);
                if (uVar10 != 0) {
                  if ((uVar10 != 1) && (local_3a8 != (uint *)0x0)) {
                    uVar19 = 0;
                    puVar14 = (uint *)0x0;
                    do {
                      lVar22 = (ulonglong)uVar10 * (ulonglong)local_3a4[(int)puVar14] +
                               (ulonglong)uVar19;
                      local_3a4[(int)puVar14] = (uint)lVar22;
                      uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                      puVar14 = (uint *)((int)puVar14 + 1);
                    } while (puVar14 != local_3a8);
                    goto LAB_0040d52a;
                  }
                  goto LAB_0040d6ea;
                }
                local_578 = (uint *)0x0;
                local_3a8 = (uint *)0x0;
                rVar7 = 0;
                puVar14 = local_574;
LAB_0040d6d9:
                _memcpy_s(local_3a4,0x1cc,puVar14,rVar7);
LAB_0040d6ea:
                bVar3 = true;
              }
              if (!bVar3) goto LAB_0040d76c;
              local_774 = (uint *)((int)local_774 - (int)local_760);
            } while (local_774 != (uint *)0x0);
            uVar10 = local_76c._4_4_;
          }
          if (uVar10 != 0) {
            uVar10 = *(uint *)(&DAT_00417a34 + uVar10 * 2);
            if (uVar10 == 0) {
LAB_0040d76c:
              local_3a8 = (uint *)0x0;
              puVar14 = local_3a4;
LAB_0040dc1f:
              _memcpy_s(puVar14,0x1cc,local_964,0);
            }
            else if (uVar10 != 1) {
              local_76c = CONCAT44(local_3a8,(uint)local_76c);
              if (local_3a8 != (uint *)0x0) {
                uVar19 = 0;
                puVar14 = (uint *)0x0;
                do {
                  lVar22 = (ulonglong)uVar10 * (ulonglong)local_3a4[(int)puVar14] +
                           (ulonglong)uVar19;
                  local_3a4[(int)puVar14] = (uint)lVar22;
                  uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                  puVar14 = (uint *)((int)puVar14 + 1);
                } while (puVar14 != local_3a8);
                if (uVar19 != 0) {
                  if ((uint *)0x72 < local_3a8) goto LAB_0040d76c;
                  local_3a4[(int)local_3a8] = uVar19;
                  local_3a8 = (uint *)((int)local_3a8 + 1);
                }
              }
            }
          }
        }
        pcVar17 = local_780;
        local_750 = (uint *)local_780;
        if (local_1d8 != (uint *)0x0) {
          uVar10 = 0;
          puVar14 = (uint *)0x0;
          do {
            lVar22 = (ulonglong)local_1d4[(int)puVar14] * 10 + (ulonglong)uVar10;
            local_1d4[(int)puVar14] = (uint)lVar22;
            uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != local_1d8);
          local_76c = CONCAT44(uVar10,(uint)local_76c);
          if (uVar10 != 0) {
            if (local_1d8 < (uint *)0x73) {
              local_1d4[(int)local_1d8] = uVar10;
              local_1d8 = (uint *)((int)local_1d8 + 1);
            }
            else {
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_964,0);
            }
          }
        }
        _Var23 = __crt_strtox::divide((big_integer *)&local_1d8,(big_integer *)&local_3a8);
        if ((int)_Var23 == 10) {
          local_770 = local_770 + 1;
          local_750 = (uint *)(pcVar17 + 1);
          *pcVar17 = '1';
          if (local_3a8 != (uint *)0x0) {
            uVar10 = 0;
            puVar14 = (uint *)0x0;
            do {
              lVar22 = (ulonglong)local_3a4[(int)puVar14] * 10 + (ulonglong)uVar10;
              local_3a4[(int)puVar14] = (uint)lVar22;
              uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
              puVar14 = (uint *)((int)puVar14 + 1);
            } while (puVar14 != local_3a8);
            if (uVar10 != 0) {
              if (local_3a8 < (uint *)0x73) {
                local_3a4[(int)local_3a8] = uVar10;
                local_3a8 = (uint *)((int)local_3a8 + 1);
              }
              else {
                local_3a8 = (uint *)0x0;
                _memcpy_s(local_3a4,0x1cc,local_964,0);
              }
            }
          }
LAB_0040dd83:
          pcVar17 = pcVar17 + 1;
          uVar10 = local_770;
        }
        else {
          if ((int)_Var23 != 0) {
            local_750 = (uint *)(pcVar17 + 1);
            *pcVar17 = (char)_Var23 + '0';
            goto LAB_0040dd83;
          }
          uVar10 = local_770 - 1;
        }
        local_784[1] = uVar10;
        if ((-1 < (int)uVar10) && (local_77c < 0x80000000)) {
          local_77c = (char *)((int)local_77c + uVar10);
        }
        uVar10 = param_6 - 1;
        if (local_77c <= param_6 - 1) {
          uVar10 = (uint)local_77c;
        }
        local_77c = local_780 + uVar10;
        if (pcVar17 != local_77c) {
          do {
            puVar14 = local_750;
            if (local_1d8 == (uint *)0x0) break;
            uVar10 = 0;
            puVar12 = (uint *)0x0;
            do {
              lVar22 = (ulonglong)local_1d4[(int)puVar12] * 1000000000 + (ulonglong)uVar10;
              local_1d4[(int)puVar12] = (uint)lVar22;
              uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
              puVar12 = (uint *)((int)puVar12 + 1);
            } while (puVar12 != local_1d8);
            if (uVar10 != 0) {
              if (local_1d8 < (uint *)0x73) {
                local_1d4[(int)local_1d8] = uVar10;
                local_1d8 = (uint *)((int)local_1d8 + 1);
              }
              else {
                local_1d8 = (uint *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_964,0);
              }
            }
            uVar21 = __crt_strtox::divide((big_integer *)&local_1d8,(big_integer *)&local_3a8);
            uVar19 = 8;
            uVar10 = (int)local_77c - (int)puVar14;
            do {
              uVar2 = uVar21 & 0xffffffff;
              uVar21 = uVar2 / local_778;
              if (uVar19 <= uVar10) {
                *(char *)((int)puVar14 + uVar19) = (char)(uVar2 % (ulonglong)local_778) + '0';
              }
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0xffffffff);
            if (9 < uVar10) {
              uVar10 = 9;
            }
            pcVar17 = (char *)((int)puVar14 + uVar10);
            local_750 = (uint *)pcVar17;
          } while (pcVar17 != local_77c);
        }
        *pcVar17 = '\0';
        goto LAB_0040dec6;
      }
      _Src = "1#IND";
    }
  }
  eVar9 = _strcpy_s(pcVar17,param_6,_Src);
  if (eVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_0040dec6:
  if (local_790 != '\0') {
    fesetenv(local_798);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== common_flush_and_write_nolock<char> @ 0040defa (size 273) =====

/* Library Function - Single Match
    int __cdecl common_flush_and_write_nolock<char>(int,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_flush_and_write_nolock<char>(uint param_1,FILE *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  FILE *pFVar4;
  
  iVar2 = __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    piVar3 = __errno();
    *piVar3 = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) != 0) {
        param_2->_base = (char *)0x0;
        if (((uint)param_2->_flag >> 3 & 1) == 0) goto LAB_0040df24;
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      param_2->_flag = param_2->_flag | 2;
      UNLOCK();
      LOCK();
      param_2->_flag = param_2->_flag & 0xfffffff7;
      UNLOCK();
      param_2->_base = (char *)0x0;
      if (((param_2->_flag & 0x4c0U) == 0) &&
         (((pFVar4 = (FILE *)___acrt_iob_func(1), param_2 != pFVar4 &&
           (pFVar4 = (FILE *)___acrt_iob_func(2), param_2 != pFVar4)) ||
          (iVar2 = __isatty(iVar2), iVar2 == 0)))) {
        ___acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      bVar1 = write_buffer_nolock<char>(param_1,param_2);
      if (!bVar1) {
        LOCK();
        param_2->_flag = param_2->_flag | 0x10;
        UNLOCK();
        return -1;
      }
      return param_1 & 0xff;
    }
    piVar3 = __errno();
    *piVar3 = 0x22;
  }
LAB_0040df24:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return -1;
}



// ===== common_flush_and_write_nolock<wchar_t> @ 0040e00b (size 277) =====

/* Library Function - Single Match
    int __cdecl common_flush_and_write_nolock<wchar_t>(int,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_flush_and_write_nolock<wchar_t>(uint param_1,FILE *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  FILE *pFVar4;
  
  iVar2 = __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    piVar3 = __errno();
    *piVar3 = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) != 0) {
        param_2->_base = (char *)0x0;
        if (((uint)param_2->_flag >> 3 & 1) == 0) goto LAB_0040e035;
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      param_2->_flag = param_2->_flag | 2;
      UNLOCK();
      LOCK();
      param_2->_flag = param_2->_flag & 0xfffffff7;
      UNLOCK();
      param_2->_base = (char *)0x0;
      if (((param_2->_flag & 0x4c0U) == 0) &&
         (((pFVar4 = (FILE *)___acrt_iob_func(1), param_2 != pFVar4 &&
           (pFVar4 = (FILE *)___acrt_iob_func(2), param_2 != pFVar4)) ||
          (iVar2 = __isatty(iVar2), iVar2 == 0)))) {
        ___acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      bVar1 = write_buffer_nolock<wchar_t>(param_1,param_2);
      if (!bVar1) {
        LOCK();
        param_2->_flag = param_2->_flag | 0x10;
        UNLOCK();
        return 0xffff;
      }
      return param_1 & 0xffff;
    }
    piVar3 = __errno();
    *piVar3 = 0x22;
  }
LAB_0040e035:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return 0xffff;
}



// ===== write_buffer_nolock<char> @ 0040e120 (size 204) =====

/* Library Function - Single Match
    bool __cdecl write_buffer_nolock<char>(char,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

bool __cdecl write_buffer_nolock<char>(undefined1 param_1,FILE *param_2)

{
  uint _FileHandle;
  undefined *puVar1;
  int iVar2;
  uint _MaxCharCount;
  int unaff_EDI;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  
  _FileHandle = __fileno(param_2);
  if ((param_2->_flag & 0xc0U) == 0) {
    iVar2 = __write(_FileHandle,&param_1,1);
    cVar4 = '\x01' - (iVar2 != 1);
  }
  else {
    uVar3 = 0;
    _MaxCharCount = (int)param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(param_2->_cnt + 1);
    param_2->_base = (char *)(param_2->_bufsiz + -1);
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar1 = &DAT_0041a138;
      }
      else {
        puVar1 = (undefined *)((_FileHandle & 0x3f) * 0x30 + (&DAT_0041af58)[(int)_FileHandle >> 6])
        ;
      }
      if (((puVar1[0x28] & 0x20) != 0) &&
         (lVar5 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar5 == -1)) {
        LOCK();
        param_2->_flag = param_2->_flag | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar3 = __write(_FileHandle,(void *)param_2->_cnt,_MaxCharCount);
    }
    *(undefined1 *)param_2->_cnt = param_1;
    cVar4 = uVar3 == _MaxCharCount;
  }
  return (bool)cVar4;
}



// ===== write_buffer_nolock<wchar_t> @ 0040e1ec (size 212) =====

/* Library Function - Single Match
    bool __cdecl write_buffer_nolock<wchar_t>(wchar_t,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

bool __cdecl write_buffer_nolock<wchar_t>(undefined2 param_1,FILE *param_2)

{
  uint _FileHandle;
  undefined *puVar1;
  int iVar2;
  uint _MaxCharCount;
  int unaff_EDI;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  
  _FileHandle = __fileno(param_2);
  if ((param_2->_flag & 0xc0U) == 0) {
    iVar2 = __write(_FileHandle,&param_1,2);
    cVar4 = '\x01' - (iVar2 != 2);
  }
  else {
    uVar3 = 0;
    _MaxCharCount = (int)param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(param_2->_cnt + 2);
    param_2->_base = (char *)(param_2->_bufsiz + -2);
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar1 = &DAT_0041a138;
      }
      else {
        puVar1 = (undefined *)((_FileHandle & 0x3f) * 0x30 + (&DAT_0041af58)[(int)_FileHandle >> 6])
        ;
      }
      if (((puVar1[0x28] & 0x20) != 0) &&
         (lVar5 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar5 == -1)) {
        LOCK();
        param_2->_flag = param_2->_flag | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar3 = __write(_FileHandle,(void *)param_2->_cnt,_MaxCharCount);
    }
    *(undefined2 *)param_2->_cnt = param_1;
    cVar4 = uVar3 == _MaxCharCount;
  }
  return (bool)cVar4;
}



// ===== FUN_0040e2c0 @ 0040e2c0 (size 11) =====

void FUN_0040e2c0(void)

{
  common_flush_and_write_nolock<char>();
  return;
}



// ===== FUN_0040e2cb @ 0040e2cb (size 11) =====

void FUN_0040e2cb(void)

{
  common_flush_and_write_nolock<wchar_t>();
  return;
}



// ===== __isatty @ 0040e2d6 (size 86) =====

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2015 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041b158)) {
      return *(byte *)((&DAT_0041af58)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) &
             0x40;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00406b06();
  }
  return 0;
}



// ===== shortsort @ 0040e330 (size 147) =====

/* Library Function - Single Match
    void __cdecl shortsort(char *,char *,unsigned int,int (__cdecl*)(void const *,void const *))
   
   Library: Visual Studio 2015 Release */

void __cdecl
shortsort(char *param_1,char *param_2,uint param_3,_func_int_void_ptr_void_ptr *param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *in_stack_ffffffdc;
  void *pvVar8;
  
  uVar6 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  for (; pcVar3 = param_1, pcVar4 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (pcVar4 = pcVar4 + param_3, pcVar4 <= param_2) {
      pvVar8 = (void *)0x40e36b;
      (*(code *)PTR_guard_check_icall_00413124)(pcVar4,pcVar3);
      iVar7 = (*param_4)(in_stack_ffffffdc,pvVar8);
      if (0 < iVar7) {
        pcVar3 = pcVar4;
      }
    }
    uVar5 = param_3;
    pcVar4 = param_2;
    if (pcVar3 != param_2) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        pcVar1 = pcVar4 + 1;
        cVar2 = pcVar1[(int)(pcVar3 + (-1 - (int)param_2))];
        pcVar1[(int)(pcVar3 + (-1 - (int)param_2))] = *pcVar4;
        *pcVar4 = cVar2;
        pcVar4 = pcVar1;
      }
    }
  }
  __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== swap @ 0040e3d0 (size 57) =====

/* Library Function - Single Match
    void __cdecl swap(char *,char *,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl swap(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if (param_1 != param_2) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      pcVar1 = pcVar3 + 1;
      cVar2 = pcVar1[(int)(param_1 + (-1 - (int)param_2))];
      pcVar1[(int)(param_1 + (-1 - (int)param_2))] = *pcVar3;
      *pcVar3 = cVar2;
      pcVar3 = pcVar1;
    }
  }
  return;
}



// ===== _qsort @ 0040e410 (size 916) =====

/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2015 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  char *in_stack_fffffec4;
  void *pvVar9;
  char *pcVar10;
  char *local_118;
  char *local_114;
  char *local_110;
  int local_10c;
  char *local_108;
  undefined4 auStack_f8 [30];
  undefined4 auStack_80 [30];
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  local_108 = _Base;
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00406b06();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_10c = 0;
  if (_NumOfElements < 2) {
LAB_0040e79a:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar5 = (char *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_0040e495:
  while (uVar1 = (uint)((int)pcVar5 - (int)local_108) / _SizeOfElements + 1, 8 < uVar1) {
    pcVar7 = local_108 + (uVar1 >> 1) * _SizeOfElements;
    pcVar6 = local_108;
    pcVar10 = pcVar7;
    (*(code *)PTR_guard_check_icall_00413124)();
    pvVar9 = (void *)0x40e4d4;
    iVar4 = (*_PtFuncCompare)(pcVar6,pcVar10);
    if (0 < iVar4) {
      swap(local_108,pcVar7,_SizeOfElements);
    }
    pcVar6 = local_108;
    pcVar10 = pcVar5;
    (*(code *)PTR_guard_check_icall_00413124)();
    iVar4 = (*_PtFuncCompare)(pcVar6,pcVar10);
    if (0 < iVar4) {
      swap(local_108,pcVar5,_SizeOfElements);
    }
    (*(code *)PTR_guard_check_icall_00413124)(pcVar7,pcVar5);
    iVar4 = (*_PtFuncCompare)(in_stack_fffffec4,pvVar9);
    local_110 = local_108;
    local_118 = pcVar5;
    local_114 = pcVar7;
    if (0 < iVar4) {
      in_stack_fffffec4 = (char *)0x40e542;
      swap(pcVar7,pcVar5,_SizeOfElements);
    }
LAB_0040e560:
    if (local_110 < pcVar7) {
      do {
        local_110 = local_110 + _SizeOfElements;
        if (pcVar7 <= local_110) goto LAB_0040e5a1;
        pvVar9 = (void *)0x40e57e;
        (*(code *)PTR_guard_check_icall_00413124)(local_110,pcVar7);
        iVar4 = (*_PtFuncCompare)(in_stack_fffffec4,pvVar9);
      } while (iVar4 < 1);
      if (pcVar7 <= local_110) goto LAB_0040e5a1;
    }
    else {
LAB_0040e5a1:
      do {
        local_110 = local_110 + _SizeOfElements;
        if (pcVar5 < local_110) break;
        pvVar9 = (void *)0x40e5b1;
        (*(code *)PTR_guard_check_icall_00413124)(local_110,pcVar7);
        iVar4 = (*_PtFuncCompare)(in_stack_fffffec4,pvVar9);
      } while (iVar4 < 1);
    }
    do {
      local_118 = local_118 + -_SizeOfElements;
      if (local_118 <= pcVar7) break;
      pvVar9 = (void *)0x40e5f6;
      (*(code *)PTR_guard_check_icall_00413124)(local_118,pcVar7);
      iVar4 = (*_PtFuncCompare)(in_stack_fffffec4,pvVar9);
    } while (0 < iVar4);
    if (local_110 <= local_118) {
      pcVar6 = local_118;
      sVar8 = _SizeOfElements;
      if (local_110 != local_118) {
        do {
          pcVar7 = pcVar6 + 1;
          cVar2 = pcVar7[(int)(local_110 + (-1 - (int)local_118))];
          pcVar7[(int)(local_110 + (-1 - (int)local_118))] = *pcVar6;
          *pcVar6 = cVar2;
          sVar8 = sVar8 - 1;
          pcVar6 = pcVar7;
          pcVar7 = local_114;
        } while (sVar8 != 0);
      }
      if (pcVar7 == local_118) {
        local_114 = local_110;
        pcVar7 = local_110;
      }
      goto LAB_0040e560;
    }
    local_118 = local_118 + _SizeOfElements;
    if (pcVar7 < local_118) {
      do {
        local_118 = local_118 + -_SizeOfElements;
        if (local_118 <= pcVar7) goto LAB_0040e6b1;
        pvVar9 = (void *)0x40e694;
        (*(code *)PTR_guard_check_icall_00413124)(local_118,pcVar7);
        iVar4 = (*_PtFuncCompare)(in_stack_fffffec4,pvVar9);
      } while (iVar4 == 0);
      if (local_118 <= pcVar7) goto LAB_0040e6b1;
    }
    else {
LAB_0040e6b1:
      do {
        local_118 = local_118 + -_SizeOfElements;
        if (local_118 <= local_108) break;
        pvVar9 = (void *)0x40e6c5;
        (*(code *)PTR_guard_check_icall_00413124)(local_118,pcVar7);
        iVar4 = (*_PtFuncCompare)(in_stack_fffffec4,pvVar9);
      } while (iVar4 == 0);
    }
    if ((int)local_118 - (int)local_108 < (int)pcVar5 - (int)local_110) goto LAB_0040e72b;
    if (local_108 < local_118) {
      auStack_f8[local_10c] = local_108;
      auStack_80[local_10c] = local_118;
      local_10c = local_10c + 1;
    }
    local_108 = local_110;
    if (pcVar5 <= local_110) goto LAB_0040e772;
  }
  shortsort(local_108,pcVar5,_SizeOfElements,(_func_int_void_ptr_void_ptr *)_PtFuncCompare);
  in_stack_fffffec4 = local_108;
  goto LAB_0040e772;
LAB_0040e72b:
  if (local_110 < pcVar5) {
    auStack_f8[local_10c] = local_110;
    auStack_80[local_10c] = pcVar5;
    local_10c = local_10c + 1;
  }
  pcVar5 = local_118;
  if (local_118 <= local_108) {
LAB_0040e772:
    local_10c = local_10c + -1;
    if (-1 < local_10c) {
      local_108 = (char *)auStack_f8[local_10c];
      pcVar5 = (char *)auStack_80[local_10c];
      goto LAB_0040e495;
    }
    goto LAB_0040e79a;
  }
  goto LAB_0040e495;
}



// ===== _strpbrk @ 0040e7b0 (size 64) =====

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



// ===== __wcsnicoll @ 0040e7ff (size 208) =====

/* Library Function - Single Match
    __wcsnicoll
   
   Library: Visual Studio 2015 Release */

int __cdecl __wcsnicoll(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  wchar_t wVar4;
  
  if (DAT_0041ae58 == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_00406b06();
      iVar3 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      iVar3 = (int)_Str1 - (int)_Str2;
      do {
        wVar4 = *(wchar_t *)(iVar3 + (int)_Str2);
        if ((0x40 < (ushort)wVar4) && ((ushort)wVar4 < 0x5b)) {
          wVar4 = wVar4 + L' ';
        }
        wVar1 = *_Str2;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          wVar1 = wVar1 + L' ';
        }
        _Str2 = _Str2 + 1;
        _MaxCount = _MaxCount - 1;
      } while (((_MaxCount != 0) && (wVar4 != L'\0')) && (wVar4 == wVar1));
      iVar3 = (uint)(ushort)wVar4 - (uint)(ushort)wVar1;
    }
    else {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_00406b06();
      iVar3 = 0x7fffffff;
    }
  }
  else {
    iVar3 = __wcsnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar3;
}



// ===== __wcsnicoll_l @ 0040e8cf (size 301) =====

/* Library Function - Single Match
    __wcsnicoll_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __wcsnicoll_l(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  int local_14;
  int local_10;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else if (_Str1 == (wchar_t *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00406b06();
    iVar1 = 0x7fffffff;
  }
  else if (_Str2 == (wchar_t *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00406b06();
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
      if (*(wchar_t **)(local_10 + 0xa4) == (wchar_t *)0x0) {
        iVar1 = (int)_Str1 - (int)_Str2;
        do {
          wVar4 = *(wchar_t *)(iVar1 + (int)_Str2);
          if ((0x40 < (ushort)wVar4) && ((ushort)wVar4 < 0x5b)) {
            wVar4 = wVar4 + L' ';
          }
          wVar5 = *_Str2;
          if ((0x40 < (ushort)wVar5) && ((ushort)wVar5 < 0x5b)) {
            wVar5 = wVar5 + L' ';
          }
          _Str2 = _Str2 + 1;
          _MaxCount = _MaxCount - 1;
        } while (((_MaxCount != 0) && (wVar4 != L'\0')) && (wVar4 == wVar5));
        iVar1 = (uint)(ushort)wVar4 - (uint)(ushort)wVar5;
      }
      else {
        iVar3 = ___acrt_CompareStringW
                          (*(wchar_t **)(local_10 + 0xa4),0x1001,_Str1,_MaxCount,_Str2,_MaxCount);
        if (iVar3 == 0) {
          piVar2 = __errno();
          *piVar2 = 0x16;
        }
        else {
          iVar1 = iVar3 + -2;
        }
      }
      if (local_8 != '\0') {
        *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
      }
    }
    else {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_00406b06();
    }
  }
  return iVar1;
}



// ===== FUN_0040e9fc @ 0040e9fc (size 51) =====

SIZE_T __cdecl FUN_0040e9fc(LPCVOID param_1)

{
  int *piVar1;
  SIZE_T SVar2;
  
  if (param_1 == (LPCVOID)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00406b06();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_0041b2d8,0,param_1);
  return SVar2;
}



// ===== __realloc_base @ 0040ea2f (size 105) =====

/* Library Function - Single Match
    __realloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID __cdecl __realloc_base(void *param_1,uint param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = __malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FID_conflict__free(param_1);
    }
    else {
      if (param_2 < 0xffffffe1) {
        do {
          pvVar1 = HeapReAlloc(DAT_0041b2d8,0,param_1,param_2);
          if (pvVar1 != (LPVOID)0x0) {
            return pvVar1;
          }
          iVar3 = FUN_00405a29();
        } while ((iVar3 != 0) && (iVar3 = __callnewh(param_2), iVar3 != 0));
      }
      piVar2 = __errno();
      *piVar2 = 0xc;
    }
    pvVar1 = (LPVOID)0x0;
  }
  return pvVar1;
}



// ===== ___set_fpsr_sse2 @ 0040ea98 (size 72) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2015 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (0 < DAT_0041ab44) {
    if (((param_1 & 0x40) == 0) || (DAT_0041a7c0 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



// ===== __clrfp @ 0040eb0e (size 19) =====

/* Library Function - Single Match
    __clrfp
   
   Library: Visual Studio 2015 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// ===== __ctrlfp @ 0040eb21 (size 44) =====

/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2015 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



// ===== FUN_0040eb4d @ 0040eb4d (size 91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040eb4d(void)

{
  return;
}



// ===== __statfp @ 0040eba8 (size 18) =====

/* Library Function - Single Match
    __statfp
   
   Library: Visual Studio 2015 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// ===== operator()<<lambda_123407a5e2ac06da108355a851863b7a>,<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>&,<lambda_ae55bdf541ad94d75914d381c370e64d>_> @ 0040ebba (size 115) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_123407a5e2ac06da108355a851863b7a>,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> &,class
   <lambda_ae55bdf541ad94d75914d381c370e64d> >(class <lambda_123407a5e2ac06da108355a851863b7a>
   &&,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> &,class
   <lambda_ae55bdf541ad94d75914d381c370e64d> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_123407a5e2ac06da108355a851863b7a>,<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>&,<lambda_ae55bdf541ad94d75914d381c370e64d>_>
          (__crt_seh_guarded_call<int> *this,<lambda_123407a5e2ac06da108355a851863b7a> *param_1,
          <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> *param_2,
          <lambda_ae55bdf541ad94d75914d381c370e64d> *param_3)

{
  uint _FileHandle;
  int iVar1;
  int *piVar2;
  
  ___acrt_lowio_lock_fh(*(uint *)param_1);
  _FileHandle = **(uint **)param_2;
  if ((*(byte *)((&DAT_0041af58)[(int)_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3f) * 0x30) & 1)
      == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = __close_nolock(_FileHandle);
  }
  FUN_0040ec30();
  return iVar1;
}



// ===== FUN_0040ec30 @ 0040ec30 (size 12) =====

void FUN_0040ec30(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(uint **)(unaff_EBP + 0x10));
  return;
}



// ===== __acrt_lowio_lock_fh_and_call<<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>_> @ 0040ec3c (size 40) =====

/* Library Function - Single Match
    int __cdecl __acrt_lowio_lock_fh_and_call<class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>
   >(int,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lowio_lock_fh_and_call<<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>_>
          (int param_1,<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> *param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_123407a5e2ac06da108355a851863b7a>,<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>&,<lambda_ae55bdf541ad94d75914d381c370e64d>_>
                    (&local_5,(<lambda_123407a5e2ac06da108355a851863b7a> *)&local_10,param_2,
                     (<lambda_ae55bdf541ad94d75914d381c370e64d> *)&local_c);
  return iVar1;
}



// ===== __close @ 0040ec64 (size 127) =====

/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2015 Release */

int __cdecl __close(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041b158)) &&
       ((*(byte *)((&DAT_0041af58)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) & 1) !=
        0)) {
      local_8 = &_FileHandle;
      iVar3 = __acrt_lowio_lock_fh_and_call<<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>_>
                        (_FileHandle,(<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> *)&local_8);
      return iVar3;
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00406b06();
  }
  return -1;
}



// ===== __close_nolock @ 0040ece3 (size 156) =====

/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_0041af58 + 0x88) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_0041af58 + 0x58) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_0040ecf9;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar5 = GetLastError();
      goto LAB_0040ed4b;
    }
  }
LAB_0040ecf9:
  DVar5 = 0;
LAB_0040ed4b:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_0041af58)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) = 0;
  if (DVar5 == 0) {
    iVar4 = 0;
  }
  else {
    ___acrt_errno_map_os_error(DVar5);
    iVar4 = -1;
  }
  return iVar4;
}



// ===== __acrt_stdio_free_stream @ 0040ed7f (size 59) =====

/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_free_stream(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  LOCK();
  param_1[3] = 0;
  UNLOCK();
  return;
}



// ===== common_lseek<__int64> @ 0040edba (size 244) =====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __int64 __cdecl common_lseek<__int64>(int,__int64,int)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl common_lseek<__int64>(int param_1,__int64 param_2,int param_3)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  __int64 _Var4;
  int in_stack_ffffffc0;
  
  if (param_1 == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < param_1) && ((uint)param_1 < DAT_0041b158)) {
      iVar3 = (param_1 & 0x3fU) * 0x30;
      if ((*(byte *)((&DAT_0041af58)[param_1 >> 6] + 0x28 + iVar3) & 1) != 0) {
        ___acrt_lowio_lock_fh(param_1);
        _Var4 = -1;
        if ((*(byte *)((&DAT_0041af58)[param_1 >> 6] + 0x28 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
        }
        else {
          _Var4 = common_lseek_nolock<__int64>(param_1,param_2,in_stack_ffffffc0);
        }
        FUN_0040ee92();
        return _Var4;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00406b06();
  }
  return -1;
}



// ===== FUN_0040ee92 @ 0040ee92 (size 8) =====

void FUN_0040ee92(void)

{
  uint unaff_EDI;
  
  ___acrt_lowio_unlock_fh(unaff_EDI);
  return;
}



// ===== common_lseek_nolock<__int64> @ 0040eebf (size 126) =====

/* Library Function - Single Match
    __int64 __cdecl common_lseek_nolock<__int64>(int,__int64,int)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl common_lseek_nolock<__int64>(int param_1,__int64 param_2,int param_3)

{
  byte *pbVar1;
  LARGE_INTEGER liDistanceToMove;
  HANDLE hFile;
  int *piVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD unaff_EDI;
  uint local_c;
  uint local_8;
  
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    liDistanceToMove.s.HighPart = (LONG)&local_c;
    liDistanceToMove.s.LowPart = (undefined4)param_2;
    BVar3 = SetFilePointerEx(hFile,liDistanceToMove,param_2._4_4_,unaff_EDI);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      ___acrt_errno_map_os_error(DVar4);
    }
    else if ((local_c & local_8) != 0xffffffff) {
      pbVar1 = (byte *)((&DAT_0041af58)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x30);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_0040ef37;
    }
  }
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
LAB_0040ef37:
  return CONCAT44(local_8,local_c);
}



// ===== __lseeki64 @ 0040ef3d (size 27) =====

/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2015 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  int unaff_EBP;
  __int64 _Var1;
  
  _Var1 = common_lseek<__int64>(_FileHandle,_Offset,unaff_EBP);
  return _Var1;
}



// ===== __lseeki64_nolock @ 0040ef58 (size 27) =====

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2015 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  int unaff_EBP;
  __int64 _Var1;
  
  _Var1 = common_lseek_nolock<__int64>(_FileHandle,_Offset,unaff_EBP);
  return _Var1;
}



// ===== __putwch_nolock @ 0040ef73 (size 69) =====

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  DWORD local_8;
  
  if (DAT_0041a7d0 == (HANDLE)0xfffffffe) {
    ___dcrt_lowio_initialize_console_output();
  }
  if ((DAT_0041a7d0 == (HANDLE)0xffffffff) ||
     (BVar1 = WriteConsoleW(DAT_0041a7d0,&_WCh,1,&local_8,(LPVOID)0x0), BVar1 == 0)) {
    _WCh = L'\xffff';
  }
  return _WCh;
}



// ===== ___strncnt @ 0040efb8 (size 28) =====

/* Library Function - Single Match
    ___strncnt
   
   Library: Visual Studio 2015 Release */

void __cdecl ___strncnt(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (iVar2 != param_2))) {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  return;
}



// ===== fegetenv @ 0040efd4 (size 29) =====

/* Library Function - Single Match
    _fegetenv
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl fegetenv(uint *param_1)

{
  uint uVar1;
  
  uVar1 = __getfpcontrolword();
  *param_1 = uVar1;
  uVar1 = __getfpstatusword();
  param_1[1] = uVar1;
  return 0;
}



// ===== fesetenv @ 0040eff1 (size 73) =====

/* Library Function - Single Match
    _fesetenv
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl fesetenv(uint *param_1)

{
  undefined4 uVar1;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  __setfpcontrolword(*param_1);
  __setfpstatusword(param_1[1]);
  fegetenv(&local_c);
  if ((*param_1 == local_c) && (param_1[1] == local_8)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// ===== feholdexcept @ 0040f03a (size 79) =====

/* Library Function - Single Match
    _feholdexcept
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl feholdexcept(uint *param_1)

{
  int iVar1;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = fegetenv(&local_c);
  if (iVar1 == 0) {
    param_1[1] = local_8;
    *param_1 = local_c;
    local_c = local_c | 0x1f;
    iVar1 = fesetenv(&local_c);
    if (iVar1 == 0) {
      __clearfp();
      return 0;
    }
  }
  return 1;
}



// ===== FUN_0040f0d0 @ 0040f0d0 (size 79) =====

void FUN_0040f0d0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_0041b30c != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_0040f8a0();
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_0040ffb8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_0040f128(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}



// ===== FUN_0040f128 @ 0040f128 (size 197) =====

uint __cdecl FUN_0040f128(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 in_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_0040ff5c();
      goto LAB_0040f1c1;
    }
    uVar1 = 0;
    if ((in_EAX & 0x80000000) == 0) goto LAB_0040f155;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_0040f1c1;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(in_ST0);
      uVar1 = param_2;
LAB_0040f155:
      if (DAT_0041b2f0 != 0) {
        return uVar1;
      }
      uVar1 = __math_exit("log10",0x1b,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_0040f1c1:
  if (DAT_0041b2f0 != 0) {
    return uVar1;
  }
  __startOneArgErrorHandling("log10",0x1b,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}



// ===== FUN_0040f1e0 @ 0040f1e0 (size 470) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0040f1e0(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  longlong lVar6;
  
  if ((DAT_0041b30c == 0) || ((MXCSR & 0x7f80) != 0x1f80 || (in_FPUControlWord & 0x7f) != 0x7f)) {
    uVar2 = __ctrlfp();
    if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
      iVar3 = __sptype(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
      if (iVar3 - 1U < 3) {
        __ctrlfp();
        return (float10)param_1;
      }
      dVar5 = _DAT_00417d20 + param_1;
      uVar1 = 8;
    }
    else {
      fVar4 = FUN_004106f1(param_1);
      dVar5 = (double)fVar4;
      if (((float10)param_1 == fVar4) || ((uVar2 & 0x20) != 0)) {
        __ctrlfp();
        return (float10)dVar5;
      }
      dVar5 = (double)fVar4;
      uVar1 = 0x10;
    }
    fVar4 = (float10)__except1(uVar1,0xc,param_1,dVar5,uVar2);
    return fVar4;
  }
  uVar2 = (uint)((ulonglong)param_1 >> 0x20);
  uVar1 = uVar2 >> 0x14;
  lVar6 = CONCAT44(_UNK_00417ac4,_DAT_00417ac0 - (uVar2 >> 0x14 & _DAT_00417ae0));
  if ((uVar1 & 0x800) == 0) {
    dVar5 = (double)(((ulonglong)param_1 >> lVar6) << lVar6);
    if (uVar1 < 0x3ff) {
      return (float10)(double)(-(ulonglong)(_DAT_00417ad0 < param_1) & _DAT_00417ab0);
    }
    if (uVar1 < 0x433) {
      return (float10)(dVar5 + (double)(-(ulonglong)(dVar5 < param_1) & _DAT_00417ab0));
    }
  }
  else {
    if (uVar1 < 0xbff) {
      return (float10)_DAT_00417af0;
    }
    if (uVar1 < 0xc33) {
      return (float10)(double)(((ulonglong)param_1 >> lVar6) << lVar6);
    }
  }
  if (NAN(param_1)) {
    ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
  }
  return (float10)param_1;
}



// ===== ___acrt_stdio_allocate_buffer_nolock @ 0040f2fd (size 93) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_stdio_allocate_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  LPVOID pvVar2;
  
  _DAT_0041ac0c = _DAT_0041ac0c + 1;
  pvVar2 = __malloc_base(0x1000);
  param_1[1] = pvVar2;
  FID_conflict__free((void *)0x0);
  puVar1 = param_1 + 3;
  if (param_1[1] == 0) {
    LOCK();
    *puVar1 = *puVar1 | 0x400;
    UNLOCK();
    param_1[6] = 2;
    param_1[1] = param_1 + 5;
  }
  else {
    LOCK();
    *puVar1 = *puVar1 | 0x40;
    UNLOCK();
    param_1[6] = 0x1000;
  }
  param_1[2] = 0;
  *param_1 = param_1[1];
  return;
}



// ===== ___acrt_CompareStringW @ 0040f35a (size 104) =====

/* Library Function - Single Match
    ___acrt_CompareStringW
   
   Library: Visual Studio 2015 Release */

int __cdecl
___acrt_CompareStringW
          (wchar_t *param_1,ulong param_2,wchar_t *param_3,uint param_4,wchar_t *param_5,
          uint param_6)

{
  int iVar1;
  
  if (0 < (int)param_4) {
    param_4 = FUN_00407feb(param_3,param_4);
  }
  if (0 < (int)param_6) {
    param_6 = FUN_00407feb(param_5,param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    if (param_4 == param_6) {
      iVar1 = 2;
    }
    else {
      iVar1 = (uint)(-1 < (int)(param_4 - param_6)) * 2 + 1;
    }
  }
  else {
    iVar1 = ___acrt_CompareStringEx_36
                      (param_1,param_2,param_3,param_4,param_5,param_6,(_nlsversioninfo *)0x0,
                       (void *)0x0,0);
  }
  return iVar1;
}



// ===== ___dcrt_lowio_initialize_console_output @ 0040f3c2 (size 31) =====

/* Library Function - Single Match
    ___dcrt_lowio_initialize_console_output
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void ___dcrt_lowio_initialize_console_output(void)

{
  DAT_0041a7d0 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



// ===== ___get_abstract_control_sse2 @ 0040f3f8 (size 125) =====

/* Library Function - Single Match
    ___get_abstract_control_sse2
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___get_abstract_control_sse2(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x7e80) != 0) {
    if ((char)param_1 < '\0') {
      uVar1 = 0x10;
    }
    if ((param_1 & 0x200) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 0x400) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 0x800) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((param_1 & 0x1000) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((param_1 & 0x6000) == 0x6000) {
      uVar1 = uVar1 | 0x300;
    }
    else if ((param_1 & 0x4000) == 0) {
      if ((param_1 & 0x2000) != 0) {
        uVar1 = uVar1 | 0x200;
      }
    }
    else {
      uVar1 = uVar1 | 0x100;
    }
  }
  return uVar1;
}



// ===== ___get_abstract_control_x87 @ 0040f475 (size 115) =====

/* Library Function - Single Match
    ___get_abstract_control_x87
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___get_abstract_control_x87(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0xc3d) != 0) {
    if ((param_1 & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((param_1 & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((param_1 & 0xc00) == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
    else if ((param_1 & 0x800) == 0) {
      if ((param_1 & 0x400) != 0) {
        uVar1 = uVar1 | 0x200;
      }
    }
    else {
      uVar1 = uVar1 | 0x100;
    }
  }
  return uVar1;
}



// ===== ___get_machine_control @ 0040f4e8 (size 113) =====

/* Library Function - Single Match
    ___get_machine_control
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___get_machine_control(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 799) != 0) {
    uVar1 = (uint)((param_1 & 0x10) != 0);
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x10;
    }
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 | 0x20;
    }
    if ((param_1 & 0x300) == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
    else if ((param_1 & 0x200) == 0) {
      if ((param_1 & 0x100) != 0) {
        uVar1 = uVar1 | 0x800;
      }
    }
    else {
      uVar1 = uVar1 | 0x400;
    }
  }
  return uVar1;
}



// ===== ___get_machine_control_sse2 @ 0040f559 (size 128) =====

/* Library Function - Single Match
    ___get_machine_control_sse2
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___get_machine_control_sse2(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 799) != 0) {
    if ((param_1 & 0x10) != 0) {
      uVar1 = 0x80;
    }
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 0x200;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 0x400;
    }
    if ((param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x800;
    }
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 | 0x1000;
    }
    if ((param_1 & 0x300) == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
    else if ((param_1 & 0x200) == 0) {
      if ((param_1 & 0x100) != 0) {
        uVar1 = uVar1 | 0x4000;
      }
    }
    else {
      uVar1 = uVar1 | 0x2000;
    }
  }
  return uVar1;
}



// ===== ___get_machine_status_sse2 @ 0040f5d9 (size 97) =====

/* Library Function - Single Match
    ___get_machine_status_sse2
   
   Library: Visual Studio 2015 Release */

byte __cdecl ___get_machine_status_sse2(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 & 0x1f) != 0) {
    bVar1 = (param_1 & 0x10000010) == 0x10000010;
    if ((param_1 & 0x8000008) == 0x8000008) {
      bVar1 = bVar1 | 4;
    }
    if ((param_1 & 0x4000004) == 0x4000004) {
      bVar1 = bVar1 | 8;
    }
    if ((param_1 & 0x2000002) == 0x2000002) {
      bVar1 = bVar1 | 0x10;
    }
    if ((param_1 & 0x1000001) == 0x1000001) {
      bVar1 = bVar1 | 0x20;
    }
  }
  return bVar1;
}



// ===== ___get_machine_status_x87 @ 0040f63a (size 97) =====

/* Library Function - Single Match
    ___get_machine_status_x87
   
   Library: Visual Studio 2015 Release */

byte __cdecl ___get_machine_status_x87(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 & 0x1f) != 0) {
    bVar1 = (param_1 & 0x100010) == 0x100010;
    if ((param_1 & 0x80008) == 0x80008) {
      bVar1 = bVar1 | 4;
    }
    if ((param_1 & 0x40004) == 0x40004) {
      bVar1 = bVar1 | 8;
    }
    if ((param_1 & 0x20002) == 0x20002) {
      bVar1 = bVar1 | 0x10;
    }
    if ((param_1 & 0x10001) == 0x10001) {
      bVar1 = bVar1 | 0x20;
    }
  }
  return bVar1;
}



// ===== __getfpcontrolword @ 0040f69b (size 67) =====

/* Library Function - Single Match
    __getfpcontrolword
   
   Library: Visual Studio 2015 Release */

uint __getfpcontrolword(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUControlWord;
  undefined4 local_c;
  
  local_c = 0;
  if (0 < DAT_0041ab44) {
    local_c = MXCSR;
  }
  uVar1 = ___get_abstract_control_x87((uint)in_FPUControlWord);
  uVar2 = ___get_abstract_control_sse2(local_c);
  return (uVar2 | uVar1) & 799;
}



// ===== __getfpstatusword @ 0040f6de (size 168) =====

/* Library Function - Single Match
    __getfpstatusword
   
   Library: Visual Studio 2015 Release */

uint __getfpstatusword(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  undefined4 local_c;
  
  uVar2 = 0;
  local_c = 0;
  if (0 < DAT_0041ab44) {
    local_c = MXCSR;
  }
  uVar1 = 0;
  if ((in_FPUStatusWord & 0x3d) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar1 = 0x100010;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar1 = uVar1 | 0x80008;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar1 = uVar1 | 0x40004;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar1 = uVar1 | 0x20002;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar1 = uVar1 | 0x10001;
    }
  }
  if ((local_c & 0x3d) != 0) {
    if ((local_c & 1) != 0) {
      uVar2 = 0x10000010;
    }
    if ((local_c & 4) != 0) {
      uVar2 = uVar2 | 0x8000008;
    }
    if ((local_c & 8) != 0) {
      uVar2 = uVar2 | 0x4000004;
    }
    if ((local_c & 0x10) != 0) {
      uVar2 = uVar2 | 0x2000002;
    }
    if ((local_c & 0x20) != 0) {
      uVar2 = uVar2 | 0x1000001;
    }
  }
  return uVar1 | uVar2;
}



// ===== __setfpcontrolword @ 0040f786 (size 128) =====

/* Library Function - Single Match
    __setfpcontrolword
   
   Library: Visual Studio 2015 Release */

void __cdecl __setfpcontrolword(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  ___get_machine_control(799);
  ___get_machine_control(param_1);
  uVar1 = MXCSR;
  if (0 < DAT_0041ab44) {
    uVar2 = ___get_machine_control_sse2(799);
    MXCSR = ___get_machine_control_sse2(param_1);
    MXCSR = ~uVar2 & uVar1 | MXCSR;
  }
  return;
}



// ===== __setfpstatusword @ 0040f806 (size 128) =====

/* Library Function - Single Match
    __setfpstatusword
   
   Library: Visual Studio 2015 Release */

void __cdecl __setfpstatusword(uint param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  ___get_machine_status_x87(0x1f1f001f);
  ___get_machine_status_x87(param_1);
  uVar1 = MXCSR;
  if (0 < DAT_0041ab44) {
    bVar2 = ___get_machine_status_sse2(0x1f1f001f);
    bVar3 = ___get_machine_status_sse2(param_1);
    MXCSR = ~CONCAT31(extraout_var,bVar2) & uVar1 | CONCAT31(extraout_var_00,bVar3);
  }
  return;
}



// ===== FUN_0040f8a0 @ 0040f8a0 (size 24) =====

void FUN_0040f8a0(void)

{
  float10 in_ST0;
  
  FUN_0040f8be((double)in_ST0);
  return;
}



// ===== FUN_0040f8be @ 0040f8be (size 614) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0040f8be(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM0 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar6 = (double)(in_XMM0._0_8_ & (ulonglong)_DAT_00417b10 | (ulonglong)DAT_00417b80);
    dVar7 = (double)(in_XMM0._0_8_ & _UNK_00417b18 | _UNK_00417b88);
    uVar1 = SUB82(_DAT_00417b30 + dVar6,0) & 0x7f0;
    dVar10 = (double)(_UNK_00417b48 & (ulonglong)dVar7);
    dVar9 = (double)(_DAT_00417b40 & (ulonglong)dVar6) * *(double *)(&DAT_00418140 + uVar1) -
            _DAT_00417b20;
    dVar6 = (dVar6 - (double)(_DAT_00417b40 & (ulonglong)dVar6)) *
            *(double *)(&DAT_00418140 + uVar1);
    dVar8 = (dVar7 - dVar10) * *(double *)(&UNK_00418148 + uVar1);
    dVar7 = dVar6 + dVar9;
    in_XMM0._8_8_ = dVar8 + (dVar10 * *(double *)(&UNK_00418148 + uVar1) - _UNK_00417b28);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar10 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((_UNK_00417bd8 * in_XMM0._8_8_ + _UNK_00417be8) * in_XMM0._8_8_ +
                       _UNK_00417bf8) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       ((_DAT_00417bd0 * dVar7 + _DAT_00417be0) * dVar7 + _DAT_00417bf0) *
                       dVar7 * dVar7 * dVar7 * dVar7 * dVar7 + _DAT_00417c00 * dVar7 +
                       *(double *)(&UNK_00417d38 + uVar1) + dVar10 * _UNK_00417b58 +
                       (double)((ulonglong)dVar8 & *(ulonglong *)(&UNK_00417b68 + iVar5)) +
                      *(double *)(&DAT_00417d30 + uVar1) + dVar9 + dVar10 * _DAT_00417b50 +
                      (double)((ulonglong)dVar6 & *(ulonglong *)(&DAT_00417b60 + iVar5)));
    }
    local_c = (double)-(ulonglong)(_DAT_00417b90 == param_1);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (DAT_00417b80 ==
            (double)((ulonglong)param_1 & (ulonglong)_DAT_00417b10 | (ulonglong)DAT_00417b80)) {
          return (float10)_DAT_00417bb8;
        }
        iVar4 = 0x3e9;
        local_c = _DAT_00417b10;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        iVar4 = 9;
      }
      else {
        iVar4 = 0x3e9;
      }
      goto LAB_0040faca;
    }
    in_XMM0._0_8_ = param_1 * DAT_00417ba0;
    iVar4 = -0x34;
  }
  iVar4 = 8;
  local_c = DAT_00417bb0;
LAB_0040faca:
  ___libm_error_support(&param_1,&param_1,&local_c,iVar4);
  return (float10)local_c;
}



// ===== FUN_0040ff5c @ 0040ff5c (size 25) =====

undefined4 FUN_0040ff5c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 0;
  }
  return 0;
}



// ===== FUN_0040ffb8 @ 0040ffb8 (size 22) =====

uint __cdecl FUN_0040ffb8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}



// ===== __math_exit @ 0040ffdb (size 42) =====

/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}



// ===== FUN_004100c0 @ 004100c0 (size 23) =====

float10 __fastcall
FUN_004100c0(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}



// ===== __startOneArgErrorHandling @ 004100d7 (size 60) =====

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio 2015 Release */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)local_c;
}



// ===== ___libm_error_support @ 00410113 (size 536) =====

/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2015 Release */

void __cdecl
___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  char *local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0041a004 ^ (uint)&stack0xfffffffc;
  if (DAT_0041b2f4 == 0) {
    pcVar2 = ___acrt_invoke_user_matherr;
  }
  else {
    pcVar2 = DecodePointer(DAT_0041b308);
  }
  if (0x1a < param_4) {
    if (param_4 != 0x1b) {
      if (param_4 == 0x1c) {
        local_24 = "pow";
      }
      else if (param_4 == 0x31) {
        local_24 = "sqrt";
      }
      else if (param_4 == 0x3a) {
        local_24 = "acos";
      }
      else {
        if (param_4 != 0x3d) {
          if ((param_4 != 1000) && (param_4 != 0x3e9)) goto LAB_0041031b;
          uVar1 = *param_1;
          goto LAB_00410268;
        }
        local_24 = "asin";
      }
      goto LAB_00410187;
    }
    local_28 = 2;
LAB_004102d9:
    local_24 = "pow";
    goto LAB_004102e0;
  }
  if (param_4 == 0x1a) {
    uVar1 = 0x3ff0000000000000;
LAB_00410268:
    *param_3 = uVar1;
    goto LAB_0041031b;
  }
  if (param_4 < 0xf) {
    if (param_4 == 0xe) {
      local_28 = 3;
      local_24 = "exp";
    }
    else {
      if (param_4 != 2) {
        if (param_4 == 3) {
          local_24 = "log";
        }
        else {
          if (param_4 == 8) {
            local_28 = 2;
            local_24 = "log10";
            goto LAB_004102e0;
          }
          if (param_4 != 9) goto LAB_0041031b;
          local_24 = "log10";
        }
LAB_00410187:
        local_28 = 1;
        local_20 = *param_1;
        local_18 = *param_2;
        local_10 = *param_3;
        (*(code *)PTR_guard_check_icall_00413124)(&local_28);
        iVar3 = (*pcVar2)();
        if (iVar3 == 0) {
          piVar4 = __errno();
          *piVar4 = 0x21;
        }
        goto LAB_00410316;
      }
      local_28 = 2;
      local_24 = "log";
    }
LAB_004102e0:
    local_20 = *param_1;
    local_18 = *param_2;
    local_10 = *param_3;
    (*(code *)PTR_guard_check_icall_00413124)(&local_28);
    iVar3 = (*pcVar2)();
    if (iVar3 == 0) {
      piVar4 = __errno();
      *piVar4 = 0x22;
    }
  }
  else {
    if (param_4 == 0xf) {
      local_24 = "exp";
    }
    else {
      if (param_4 == 0x18) {
        local_28 = 3;
        goto LAB_004102d9;
      }
      if (param_4 != 0x19) goto LAB_0041031b;
      local_24 = "pow";
    }
    local_28 = 4;
    local_20 = *param_1;
    local_18 = *param_2;
    local_10 = *param_3;
    (*(code *)PTR_guard_check_icall_00413124)(&local_28);
    (*pcVar2)();
  }
LAB_00410316:
  *param_3 = local_10;
LAB_0041031b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// ===== ___ascii_strnicmp @ 004103f0 (size 97) =====

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00410441;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00410441:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



// ===== FUN_00410451 @ 00410451 (size 106) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00410451(double param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = FUN_004106f1(param_1);
    if ((float10)param_1 == fVar2) {
      fVar2 = (float10)param_1 * (float10)_DAT_00418550;
      fVar3 = FUN_004106f1((double)fVar2);
      if ((float10)(double)fVar2 == fVar3) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}



// ===== FUN_004104bb @ 004104bb (size 299) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004104bb(int param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = ABS((double)CONCAT44(param_2,param_1));
  dVar2 = _DAT_004186e0;
  if (param_4 == 0x7ff00000) {
    if (param_3 == 0) {
      if ((dVar1 <= 1.0) && (dVar2 = 1.0, dVar1 < 1.0)) {
        dVar2 = 0.0;
      }
      goto LAB_004105e0;
    }
  }
  else if ((param_4 == -0x100000) && (param_3 == 0)) {
    if (dVar1 <= 1.0) {
      dVar2 = 1.0;
      if (dVar1 < 1.0) {
        dVar2 = _DAT_004186e0;
      }
    }
    else {
      dVar2 = 0.0;
    }
    goto LAB_004105e0;
  }
  if (param_2 == 0x7ff00000) {
    if (param_1 != 0) {
      return 0;
    }
    if (((double)CONCAT44(param_4,param_3) <= 0.0) &&
       (dVar2 = 0.0, 0.0 <= (double)CONCAT44(param_4,param_3))) {
      dVar2 = 1.0;
    }
  }
  else {
    if (param_2 != -0x100000) {
      return 0;
    }
    if (param_1 != 0) {
      return 0;
    }
    iVar3 = FUN_00410451((double)CONCAT44(param_4,param_3));
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        dVar2 = 1.0;
      }
      else {
        dVar2 = 0.0;
        if (iVar3 == 1) {
          dVar2 = _DAT_004186f0;
        }
      }
    }
    else {
      dVar2 = _DAT_004186e0;
      if (iVar3 == 1) {
        dVar2 = -_DAT_004186e0;
      }
    }
  }
LAB_004105e0:
  *param_5 = dVar2;
  return 0;
}



// ===== __87except @ 004105e6 (size 267) =====

/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2015 Release */

void __cdecl __87except(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_0041a004 ^ (uint)&stack0xfffffff0;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_0041064e:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_0041064e;
    if (iVar2 != 8) goto LAB_004106b0;
    uVar3 = 0x10;
  }
  bVar1 = __handle_exc(uVar3,(double *)(param_2 + 6),local_94);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(undefined8 *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    __raise_exc(local_90,&local_94,uVar3,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
  }
LAB_004106b0:
  __ctrlfp();
  if (((*param_2 == 8) || (bVar1 = ___acrt_has_user_matherr(), !bVar1)) ||
     (iVar2 = ___acrt_invoke_user_matherr(param_2), iVar2 == 0)) {
    __set_errno_from_matherr(*param_2);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}



// ===== FUN_004106f1 @ 004106f1 (size 22) =====

float10 __cdecl FUN_004106f1(double param_1)

{
  return (float10)ROUND(param_1);
}



// ===== __errcode @ 00410707 (size 52) =====

/* Library Function - Single Match
    __errcode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __errcode(uint param_1)

{
  undefined4 uStack_8;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return 1;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * 2;
      }
      uStack_8 = 3;
    }
    else {
      uStack_8 = 2;
    }
  }
  else {
    uStack_8 = 5;
  }
  return uStack_8;
}



// ===== __except1 @ 0041073b (size 206) =====

/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2015 Release */

void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  
  local_14 = DAT_0041a004 ^ (uint)&stack0xfffffff0;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4,0);
  }
  iVar2 = __errcode(param_1);
  bVar1 = ___acrt_has_user_matherr();
  if ((bVar1) && (iVar2 != 0)) {
    __umatherr(iVar2,param_2,(int)param_3,(int)((ulonglong)param_3 >> 0x20),0,0,SUB84(param_4,0),
               (int)((ulonglong)param_4 >> 0x20));
  }
  else {
    __set_errno_from_matherr(iVar2);
    __ctrlfp();
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}



// ===== __handle_exc @ 00410809 (size 480) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2015 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  uint local_14;
  byte bStack_10;
  undefined1 uStack_f;
  ushort uStack_e;
  int local_8;
  
  uVar5 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_0040eb4d();
    uVar5 = param_1 & 0x17;
    goto LAB_004109c6;
  }
  if ((param_1 & param_3 & 4) != 0) {
    FUN_0040eb4d();
    uVar5 = param_1 & 0x1b;
    goto LAB_004109c6;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar6 = (param_1 & 0x10) != 0;
      if (*param_2 == 0.0) {
        bVar6 = true;
      }
      else {
        fVar7 = (float10)FUN_00410dce(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_8
                                     );
        local_8 = local_8 + -0x600;
        dVar2 = (double)fVar7;
        local_14 = SUB84(dVar2,0);
        bStack_10 = (byte)((ulonglong)dVar2 >> 0x20);
        uStack_f = (undefined1)((ulonglong)dVar2 >> 0x28);
        uStack_e = (ushort)((ulonglong)dVar2 >> 0x30);
        if (local_8 < -0x432) {
          fVar8 = (float10)0 * fVar7;
          bVar6 = true;
        }
        else {
          uStack_e = uStack_e & 0xf | 0x10;
          if (local_8 < -0x3fd) {
            iVar4 = -0x3fd - local_8;
            do {
              if (((local_14 & 1) != 0) && (!bVar6)) {
                bVar6 = true;
              }
              local_14 = local_14 >> 1;
              if ((bStack_10 & 1) != 0) {
                local_14 = local_14 | 0x80000000;
              }
              uVar5 = CONCAT22(uStack_e,CONCAT11(uStack_f,bStack_10)) >> 1;
              bStack_10 = (byte)uVar5;
              uStack_f = (undefined1)(uVar5 >> 8);
              uStack_e = uStack_e >> 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          fVar8 = (float10)(double)CONCAT26(uStack_e,CONCAT15(uStack_f,CONCAT14(bStack_10,local_14))
                                           );
          if (fVar7 < (float10)0) {
            fVar8 = -fVar8;
          }
        }
        *param_2 = (double)fVar8;
      }
      if (bVar6) {
        FUN_0040eb4d();
      }
      uVar5 = param_1 & 0x1d;
    }
    goto LAB_004109c6;
  }
  FUN_0040eb4d();
  uVar5 = param_3 & 0xc00;
  dVar2 = _DAT_004186e0;
  dVar3 = _DAT_004186e0;
  if (uVar5 == 0) {
    dVar1 = *param_2;
joined_r0x004108aa:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar3;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_004186e8;
      goto joined_r0x004108aa;
    }
    dVar3 = _DAT_004186e8;
    if (uVar5 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x004108aa;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_004186e8;
      goto joined_r0x004108aa;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_004109c6:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_0040eb4d();
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}



// ===== __raise_exc @ 004109e9 (size 35) =====

/* Library Function - Single Match
    __raise_exc
   
   Library: Visual Studio 2015 Release */

void __cdecl
__raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



// ===== __raise_exc_ex @ 00410a0c (size 753) =====

/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2015 Release */

void __cdecl
__raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
              int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  DWORD dwExceptionCode;
  
  puVar1 = param_2;
  param_1[1] = 0;
  dwExceptionCode = 0xc000000d;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = __statfp();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_00410b6e;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_00410b6e:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_00410ba4:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_00410ba4;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  __clrfp();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_00410cb5;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_00410cb5:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_00410ce6;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_00410ce6:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}



// ===== __set_errno_from_matherr @ 00410cfd (size 47) =====

/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2015 Release */

void __cdecl __set_errno_from_matherr(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = __errno();
    *piVar1 = 0x21;
  }
  else if (param_1 - 2U < 2) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}



// ===== __umatherr @ 00410d2c (size 162) =====

/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2015 Release */

float10 __cdecl
__umatherr(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  double dVar1;
  int iVar2;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_20 = 0;
  iVar2 = 0;
  do {
    if ((&DAT_004185e8)[iVar2 * 2] == param_2) {
      local_20 = *(int *)(&UNK_004185ec + iVar2 * 8);
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1d);
  if (local_20 == 0) {
    __ctrlfp();
    __set_errno_from_matherr(param_1);
    dVar1 = (double)CONCAT44(param_8,param_7);
  }
  else {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_c = param_7;
    local_24 = param_1;
    uStack_8 = param_8;
    __ctrlfp();
    iVar2 = ___acrt_invoke_user_matherr(&local_24);
    if (iVar2 == 0) {
      __set_errno_from_matherr(param_1);
    }
    dVar1 = (double)CONCAT44(uStack_8,local_c);
  }
  return (float10)dVar1;
}



// ===== FUN_00410dce @ 00410dce (size 212) =====

void __cdecl FUN_00410dce(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  
  dVar2 = (double)CONCAT17(param_2._3_1_,
                           CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1)));
  if (dVar2 == 0.0) {
    iVar5 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar5 = -0x3fd;
    uVar3 = param_2;
    if ((param_2 & 0x100000) == 0) {
      do {
        uVar1 = uVar3 * 2;
        param_2._0_2_ = (undefined2)uVar1;
        uVar3 = uVar1;
        if (param_1 < 0) {
          uVar3 = uVar1 | 1;
          param_2._0_2_ = (undefined2)uVar3;
        }
        param_1 = param_1 * 2;
        iVar5 = iVar5 + -1;
      } while ((uVar1 & 0x100000) == 0);
      param_2 = CONCAT22((short)(uVar1 >> 0x10),(undefined2)param_2);
    }
    uVar4 = (ushort)(param_2 >> 0x10) & 0xffef;
    param_2._2_1_ = (undefined1)uVar4;
    param_2._3_1_ = (byte)(uVar4 >> 8);
    if (dVar2 < 0.0) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1))),
              0);
  }
  else {
    __set_exp(dVar2,0);
    iVar5 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
  }
  *param_3 = iVar5;
  return;
}



// ===== __set_exp @ 00410ea2 (size 47) =====

/* Library Function - Single Match
    __set_exp
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

float10 __cdecl __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}



// ===== __sptype @ 00410ed1 (size 94) =====

/* Library Function - Single Match
    __sptype
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl __sptype(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}



// ===== __fpclass @ 00410f2f (size 164) =====

/* Library Function - Single Match
    __fpclass
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype(_X._0_4_,(uint)((ulonglong)_X >> 0x20));
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      iVar1 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = 2;
    }
    return iVar1;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}



// ===== __FindPESection @ 00410ff0 (size 67) =====

/* Library Function - Single Match
    __FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(pImageBase + 0x3c);
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// ===== __IsNonwritableInCurrentImage @ 00411040 (size 164) =====

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2019 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_00402510;
  local_14 = ExceptionList;
  local_c = DAT_0041a004 ^ 0x4194c8;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



// ===== __ValidateImageBase @ 00411100 (size 49) =====

/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b)
    ;
  }
  return uVar1;
}



// ===== __aulldvrm @ 00411140 (size 149) =====

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2015 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// ===== __SEH_prolog4_GS @ 004111e0 (size 73) =====

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4_GS
   
   Library: Visual Studio 2015 Release */

void __cdecl __SEH_prolog4_GS(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041a004 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// ===== FUN_00411229 @ 00411229 (size 17) =====

/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_00411229(void)

{
  uint unaff_EBP;
  
  __security_check_cookie(*(uint *)(unaff_EBP - 0x1c) ^ unaff_EBP);
  return;
}



// ===== __allmul @ 00411240 (size 52) =====

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2015 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



// ===== __alldvrm @ 00411280 (size 223) =====

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2015 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



// ===== __aullshr @ 00411360 (size 31) =====

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2015 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}



// ===== __alloca_probe_16 @ 00411380 (size 22) =====

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2015 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



// ===== __alloca_probe_8 @ 00411396 (size 22) =====

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



// ===== __alloca_probe @ 004113b0 (size 45) =====

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __alloca_probe
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}



// ===== __allshl @ 004113e0 (size 31) =====

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio 2015 Release */

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}



// ===== FUN_00411400 @ 00411400 (size 145) =====

ulonglong __fastcall FUN_00411400(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_0041ab44 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}



// ===== FUN_004114c0 @ 004114c0 (size 1330) =====

ulonglong __cdecl FUN_004114c0(uint *param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint *puVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  uint *puVar54;
  uint uVar55;
  ulonglong uVar56;
  
  if ((param_2 < param_1) && (param_1 < (uint *)(param_3 + (int)param_2))) {
    puVar50 = (undefined4 *)(param_3 + (int)param_2);
    puVar52 = (undefined4 *)(param_3 + (int)param_1);
    uVar47 = param_3;
    uVar48 = param_3;
    if (0x1f < param_3) {
      if ((DAT_0041a010 >> 1 & 1) == 0) {
        if (((uint)puVar52 & 3) != 0) {
          uVar47 = (uint)puVar52 & 3;
          param_3 = param_3 - uVar47;
          do {
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar50 + -1);
            puVar50 = (undefined4 *)((int)puVar50 + -1);
            puVar52 = (undefined4 *)((int)puVar52 - 1);
            uVar47 = uVar47 - 1;
            uVar48 = 0;
          } while (uVar47 != 0);
        }
        uVar47 = param_3;
        if (0x1f < param_3) {
          uVar47 = param_3 >> 2;
          while( true ) {
            if (uVar47 == 0) break;
            uVar47 = uVar47 - 1;
            puVar52[-1] = puVar50[-1];
            puVar50 = puVar50 + -1;
            puVar52 = puVar52 + -1;
          }
          switch(param_3 & 3) {
          case 0:
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 1:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar50 + -1);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 2:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar50 + -1);
            *(undefined1 *)((int)puVar52 - 2) = *(undefined1 *)((int)puVar50 + -2);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 3:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar50 + -1);
            *(undefined1 *)((int)puVar52 - 2) = *(undefined1 *)((int)puVar50 + -2);
            *(undefined1 *)((int)puVar52 - 3) = *(undefined1 *)((int)puVar50 + -3);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          }
        }
      }
      else {
        while (puVar51 = puVar50, puVar53 = puVar52, ((uint)puVar52 & 0xf) != 0) {
          puVar50 = (undefined4 *)((int)puVar50 + -1);
          puVar52 = (undefined4 *)((int)puVar52 + -1);
          *(undefined1 *)puVar52 = *(undefined1 *)puVar50;
          uVar47 = uVar47 - 1;
        }
        do {
          puVar50 = puVar51;
          puVar52 = puVar53;
          if (uVar47 < 0x80) break;
          puVar50 = puVar51 + -0x20;
          puVar52 = puVar53 + -0x20;
          uVar3 = puVar51[-0x1f];
          uVar4 = puVar51[-0x1e];
          uVar5 = puVar51[-0x1d];
          uVar6 = puVar51[-0x1c];
          uVar7 = puVar51[-0x1b];
          uVar8 = puVar51[-0x1a];
          uVar9 = puVar51[-0x19];
          uVar10 = puVar51[-0x18];
          uVar11 = puVar51[-0x17];
          uVar12 = puVar51[-0x16];
          uVar13 = puVar51[-0x15];
          uVar14 = puVar51[-0x14];
          uVar15 = puVar51[-0x13];
          uVar16 = puVar51[-0x12];
          uVar17 = puVar51[-0x11];
          uVar18 = puVar51[-0x10];
          uVar19 = puVar51[-0xf];
          uVar20 = puVar51[-0xe];
          uVar21 = puVar51[-0xd];
          uVar22 = puVar51[-0xc];
          uVar23 = puVar51[-0xb];
          uVar24 = puVar51[-10];
          uVar25 = puVar51[-9];
          uVar26 = puVar51[-8];
          uVar27 = puVar51[-7];
          uVar28 = puVar51[-6];
          uVar29 = puVar51[-5];
          uVar30 = puVar51[-4];
          uVar31 = puVar51[-3];
          uVar32 = puVar51[-2];
          uVar33 = puVar51[-1];
          *puVar52 = *puVar50;
          puVar53[-0x1f] = uVar3;
          puVar53[-0x1e] = uVar4;
          puVar53[-0x1d] = uVar5;
          puVar53[-0x1c] = uVar6;
          puVar53[-0x1b] = uVar7;
          puVar53[-0x1a] = uVar8;
          puVar53[-0x19] = uVar9;
          puVar53[-0x18] = uVar10;
          puVar53[-0x17] = uVar11;
          puVar53[-0x16] = uVar12;
          puVar53[-0x15] = uVar13;
          puVar53[-0x14] = uVar14;
          puVar53[-0x13] = uVar15;
          puVar53[-0x12] = uVar16;
          puVar53[-0x11] = uVar17;
          puVar53[-0x10] = uVar18;
          puVar53[-0xf] = uVar19;
          puVar53[-0xe] = uVar20;
          puVar53[-0xd] = uVar21;
          puVar53[-0xc] = uVar22;
          puVar53[-0xb] = uVar23;
          puVar53[-10] = uVar24;
          puVar53[-9] = uVar25;
          puVar53[-8] = uVar26;
          puVar53[-7] = uVar27;
          puVar53[-6] = uVar28;
          puVar53[-5] = uVar29;
          puVar53[-4] = uVar30;
          puVar53[-3] = uVar31;
          puVar53[-2] = uVar32;
          puVar53[-1] = uVar33;
          uVar47 = uVar47 - 0x80;
          puVar51 = puVar50;
          puVar53 = puVar52;
        } while ((uVar47 & 0xffffff80) != 0);
        puVar51 = puVar50;
        puVar53 = puVar52;
        if (0x1f < uVar47) {
          do {
            puVar50 = puVar51 + -8;
            puVar52 = puVar53 + -8;
            uVar3 = puVar51[-7];
            uVar4 = puVar51[-6];
            uVar5 = puVar51[-5];
            uVar6 = puVar51[-4];
            uVar7 = puVar51[-3];
            uVar8 = puVar51[-2];
            uVar9 = puVar51[-1];
            *puVar52 = *puVar50;
            puVar53[-7] = uVar3;
            puVar53[-6] = uVar4;
            puVar53[-5] = uVar5;
            puVar53[-4] = uVar6;
            puVar53[-3] = uVar7;
            puVar53[-2] = uVar8;
            puVar53[-1] = uVar9;
            uVar47 = uVar47 - 0x20;
            puVar51 = puVar50;
            puVar53 = puVar52;
          } while ((uVar47 & 0xffffffe0) != 0);
        }
      }
    }
    for (; (uVar47 & 0xfffffffc) != 0; uVar47 = uVar47 - 4) {
      puVar52 = puVar52 + -1;
      puVar50 = puVar50 + -1;
      *puVar52 = *puVar50;
    }
    for (; uVar47 != 0; uVar47 = uVar47 - 1) {
      puVar52 = (undefined4 *)((int)puVar52 - 1);
      puVar50 = (undefined4 *)((int)puVar50 + -1);
      *(undefined1 *)puVar52 = *(undefined1 *)puVar50;
    }
    return CONCAT44(uVar48,param_1);
  }
  uVar47 = param_3;
  puVar54 = param_1;
  if (0x1f < param_3) {
    if (param_3 < 0x80) {
      if ((DAT_0041a010 >> 1 & 1) != 0) {
LAB_0041198d:
        if (uVar47 == 0) goto LAB_004119f0;
        for (uVar48 = uVar47 >> 5; param_3 = 0, uVar48 != 0; uVar48 = uVar48 - 1) {
          uVar55 = param_2[1];
          uVar2 = param_2[2];
          uVar34 = param_2[3];
          uVar35 = param_2[4];
          uVar36 = param_2[5];
          uVar37 = param_2[6];
          uVar38 = param_2[7];
          *puVar54 = *param_2;
          puVar54[1] = uVar55;
          puVar54[2] = uVar2;
          puVar54[3] = uVar34;
          puVar54[4] = uVar35;
          puVar54[5] = uVar36;
          puVar54[6] = uVar37;
          puVar54[7] = uVar38;
          param_2 = param_2 + 8;
          puVar54 = puVar54 + 8;
        }
        goto LAB_004119bb;
      }
joined_r0x004116ed:
      for (; ((uint)puVar54 & 3) != 0; puVar54 = (uint *)((int)puVar54 + 1)) {
        *(char *)puVar54 = (char)*param_2;
        param_3 = param_3 - 1;
        param_2 = (uint *)((int)param_2 + 1);
      }
    }
    else {
      if ((DAT_0041ab48 >> 1 & 1) != 0) {
        for (; uVar47 != 0; uVar47 = uVar47 - 1) {
          *(char *)puVar54 = (char)*param_2;
          param_2 = (uint *)((int)param_2 + 1);
          puVar54 = (uint *)((int)puVar54 + 1);
        }
        return CONCAT44(param_3,param_1);
      }
      if (((((uint)param_1 ^ (uint)param_2) & 0xf) == 0) && ((DAT_0041a010 >> 1 & 1) != 0)) {
        if (((uint)param_2 & 0xf) != 0) {
          uVar48 = 0x10 - ((uint)param_2 & 0xf);
          param_3 = param_3 - uVar48;
          for (uVar47 = uVar48 & 3; uVar47 != 0; uVar47 = uVar47 - 1) {
            *(char *)puVar54 = (char)*param_2;
            param_2 = (uint *)((int)param_2 + 1);
            puVar54 = (uint *)((int)puVar54 + 1);
          }
          for (uVar48 = uVar48 >> 2; uVar48 != 0; uVar48 = uVar48 - 1) {
            *puVar54 = *param_2;
            param_2 = param_2 + 1;
            puVar54 = puVar54 + 1;
          }
        }
        uVar47 = param_3 & 0x7f;
        for (uVar48 = param_3 >> 7; param_3 = 0, uVar48 != 0; uVar48 = uVar48 - 1) {
          uVar55 = param_2[1];
          uVar2 = param_2[2];
          uVar34 = param_2[3];
          uVar35 = param_2[4];
          uVar36 = param_2[5];
          uVar37 = param_2[6];
          uVar38 = param_2[7];
          uVar39 = param_2[8];
          uVar40 = param_2[9];
          uVar41 = param_2[10];
          uVar42 = param_2[0xb];
          uVar43 = param_2[0xc];
          uVar44 = param_2[0xd];
          uVar45 = param_2[0xe];
          uVar46 = param_2[0xf];
          *puVar54 = *param_2;
          puVar54[1] = uVar55;
          puVar54[2] = uVar2;
          puVar54[3] = uVar34;
          puVar54[4] = uVar35;
          puVar54[5] = uVar36;
          puVar54[6] = uVar37;
          puVar54[7] = uVar38;
          puVar54[8] = uVar39;
          puVar54[9] = uVar40;
          puVar54[10] = uVar41;
          puVar54[0xb] = uVar42;
          puVar54[0xc] = uVar43;
          puVar54[0xd] = uVar44;
          puVar54[0xe] = uVar45;
          puVar54[0xf] = uVar46;
          uVar55 = param_2[0x11];
          uVar2 = param_2[0x12];
          uVar34 = param_2[0x13];
          uVar35 = param_2[0x14];
          uVar36 = param_2[0x15];
          uVar37 = param_2[0x16];
          uVar38 = param_2[0x17];
          uVar39 = param_2[0x18];
          uVar40 = param_2[0x19];
          uVar41 = param_2[0x1a];
          uVar42 = param_2[0x1b];
          uVar43 = param_2[0x1c];
          uVar44 = param_2[0x1d];
          uVar45 = param_2[0x1e];
          uVar46 = param_2[0x1f];
          puVar54[0x10] = param_2[0x10];
          puVar54[0x11] = uVar55;
          puVar54[0x12] = uVar2;
          puVar54[0x13] = uVar34;
          puVar54[0x14] = uVar35;
          puVar54[0x15] = uVar36;
          puVar54[0x16] = uVar37;
          puVar54[0x17] = uVar38;
          puVar54[0x18] = uVar39;
          puVar54[0x19] = uVar40;
          puVar54[0x1a] = uVar41;
          puVar54[0x1b] = uVar42;
          puVar54[0x1c] = uVar43;
          puVar54[0x1d] = uVar44;
          puVar54[0x1e] = uVar45;
          puVar54[0x1f] = uVar46;
          param_2 = param_2 + 0x20;
          puVar54 = puVar54 + 0x20;
        }
        goto LAB_0041198d;
      }
      if (((DAT_0041ab48 & 1) == 0) || (((uint)param_1 & 3) != 0)) goto joined_r0x004116ed;
      if (((uint)param_2 & 3) == 0) {
        if (((uint)param_1 >> 2 & 1) != 0) {
          uVar47 = *param_2;
          param_3 = param_3 - 4;
          param_2 = param_2 + 1;
          *param_1 = uVar47;
          param_1 = param_1 + 1;
        }
        if (((uint)param_1 >> 3 & 1) != 0) {
          uVar1 = *(undefined8 *)param_2;
          param_3 = param_3 - 8;
          param_2 = param_2 + 2;
          *(undefined8 *)param_1 = uVar1;
          param_1 = param_1 + 2;
        }
        if (((uint)param_2 & 7) == 0) {
          puVar54 = param_2 + -2;
          uVar47 = *param_2;
          uVar48 = param_2[1];
          do {
            puVar49 = puVar54;
            uVar34 = puVar49[4];
            uVar35 = puVar49[5];
            param_3 = param_3 - 0x30;
            uVar36 = puVar49[6];
            uVar37 = puVar49[7];
            uVar38 = puVar49[8];
            uVar39 = puVar49[9];
            uVar55 = puVar49[0xe];
            uVar2 = puVar49[0xf];
            uVar40 = puVar49[10];
            uVar41 = puVar49[0xb];
            uVar42 = puVar49[0xc];
            uVar43 = puVar49[0xd];
            *param_1 = uVar47;
            param_1[1] = uVar48;
            param_1[2] = uVar34;
            param_1[3] = uVar35;
            param_1[4] = uVar36;
            param_1[5] = uVar37;
            param_1[6] = uVar38;
            param_1[7] = uVar39;
            param_1[8] = uVar40;
            param_1[9] = uVar41;
            param_1[10] = uVar42;
            param_1[0xb] = uVar43;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar55;
            uVar48 = uVar2;
          } while (0x2f < (int)param_3);
          puVar49 = puVar49 + 0xe;
        }
        else if (((uint)param_2 >> 3 & 1) == 0) {
          puVar54 = param_2 + -1;
          uVar47 = *param_2;
          uVar48 = param_2[1];
          uVar55 = param_2[2];
          do {
            puVar49 = puVar54;
            uVar36 = puVar49[4];
            param_3 = param_3 - 0x30;
            uVar37 = puVar49[5];
            uVar38 = puVar49[6];
            uVar39 = puVar49[7];
            uVar40 = puVar49[8];
            uVar2 = puVar49[0xd];
            uVar34 = puVar49[0xe];
            uVar35 = puVar49[0xf];
            uVar41 = puVar49[9];
            uVar42 = puVar49[10];
            uVar43 = puVar49[0xb];
            uVar44 = puVar49[0xc];
            *param_1 = uVar47;
            param_1[1] = uVar48;
            param_1[2] = uVar55;
            param_1[3] = uVar36;
            param_1[4] = uVar37;
            param_1[5] = uVar38;
            param_1[6] = uVar39;
            param_1[7] = uVar40;
            param_1[8] = uVar41;
            param_1[9] = uVar42;
            param_1[10] = uVar43;
            param_1[0xb] = uVar44;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar2;
            uVar48 = uVar34;
            uVar55 = uVar35;
          } while (0x2f < (int)param_3);
          puVar49 = puVar49 + 0xd;
        }
        else {
          puVar54 = param_2 + -3;
          uVar47 = *param_2;
          do {
            puVar49 = puVar54;
            uVar55 = puVar49[4];
            uVar2 = puVar49[5];
            uVar34 = puVar49[6];
            param_3 = param_3 - 0x30;
            uVar35 = puVar49[7];
            uVar36 = puVar49[8];
            uVar37 = puVar49[9];
            uVar38 = puVar49[10];
            uVar48 = puVar49[0xf];
            uVar39 = puVar49[0xb];
            uVar40 = puVar49[0xc];
            uVar41 = puVar49[0xd];
            uVar42 = puVar49[0xe];
            *param_1 = uVar47;
            param_1[1] = uVar55;
            param_1[2] = uVar2;
            param_1[3] = uVar34;
            param_1[4] = uVar35;
            param_1[5] = uVar36;
            param_1[6] = uVar37;
            param_1[7] = uVar38;
            param_1[8] = uVar39;
            param_1[9] = uVar40;
            param_1[10] = uVar41;
            param_1[0xb] = uVar42;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar48;
          } while (0x2f < (int)param_3);
          puVar49 = puVar49 + 0xf;
        }
        for (; 0xf < (int)param_3; param_3 = param_3 - 0x10) {
          uVar47 = *puVar49;
          uVar48 = puVar49[1];
          uVar55 = puVar49[2];
          uVar2 = puVar49[3];
          puVar49 = puVar49 + 4;
          *param_1 = uVar47;
          param_1[1] = uVar48;
          param_1[2] = uVar55;
          param_1[3] = uVar2;
          param_1 = param_1 + 4;
        }
        if ((param_3 >> 2 & 1) != 0) {
          uVar47 = *puVar49;
          param_3 = param_3 - 4;
          puVar49 = puVar49 + 1;
          *param_1 = uVar47;
          param_1 = param_1 + 1;
        }
        if ((param_3 >> 3 & 1) != 0) {
          param_3 = param_3 - 8;
          *(undefined8 *)param_1 = *(undefined8 *)puVar49;
        }
                    /* WARNING: Could not recover jumptable at 0x004116e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar56 = (*(code *)(&switchD_00411715::switchdataD_00411724)[param_3])();
        return uVar56;
      }
    }
    uVar47 = param_3;
    if (0x1f < param_3) {
      for (uVar47 = param_3 >> 2; uVar47 != 0; uVar47 = uVar47 - 1) {
        *puVar54 = *param_2;
        param_2 = param_2 + 1;
        puVar54 = puVar54 + 1;
      }
      switch(param_3 & 3) {
      case 0:
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 1:
        *(char *)puVar54 = (char)*param_2;
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 2:
        *(char *)puVar54 = (char)*param_2;
        *(undefined1 *)((int)puVar54 + 1) = *(undefined1 *)((int)param_2 + 1);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 3:
        *(char *)puVar54 = (char)*param_2;
        *(undefined1 *)((int)puVar54 + 1) = *(undefined1 *)((int)param_2 + 1);
        *(undefined1 *)((int)puVar54 + 2) = *(undefined1 *)((int)param_2 + 2);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      }
    }
  }
LAB_004119bb:
  if ((uVar47 & 0x1f) != 0) {
    for (uVar48 = (uVar47 & 0x1f) >> 2; uVar48 != 0; uVar48 = uVar48 - 1) {
      param_3 = *param_2;
      *puVar54 = param_3;
      puVar54 = puVar54 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar47 = uVar47 & 3; uVar47 != 0; uVar47 = uVar47 - 1) {
      *(char *)puVar54 = (char)*param_2;
      param_2 = (uint *)((int)param_2 + 1);
      puVar54 = (uint *)((int)puVar54 + 1);
    }
  }
LAB_004119f0:
  return CONCAT44(param_3,param_1);
}



// ===== FUN_00411a40 @ 00411a40 (size 1330) =====

ulonglong __cdecl FUN_00411a40(uint *param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint *puVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  uint *puVar54;
  uint uVar55;
  ulonglong uVar56;
  
  if ((param_2 < param_1) && (param_1 < (uint *)(param_3 + (int)param_2))) {
    puVar50 = (undefined4 *)(param_3 + (int)param_2);
    puVar52 = (undefined4 *)(param_3 + (int)param_1);
    uVar47 = param_3;
    uVar48 = param_3;
    if (0x1f < param_3) {
      if ((DAT_0041a010 >> 1 & 1) == 0) {
        if (((uint)puVar52 & 3) != 0) {
          uVar47 = (uint)puVar52 & 3;
          param_3 = param_3 - uVar47;
          do {
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar50 + -1);
            puVar50 = (undefined4 *)((int)puVar50 + -1);
            puVar52 = (undefined4 *)((int)puVar52 - 1);
            uVar47 = uVar47 - 1;
            uVar48 = 0;
          } while (uVar47 != 0);
        }
        uVar47 = param_3;
        if (0x1f < param_3) {
          uVar47 = param_3 >> 2;
          while( true ) {
            if (uVar47 == 0) break;
            uVar47 = uVar47 - 1;
            puVar52[-1] = puVar50[-1];
            puVar50 = puVar50 + -1;
            puVar52 = puVar52 + -1;
          }
          switch(param_3 & 3) {
          case 0:
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 1:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar50 + -1);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 2:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar50 + -1);
            *(undefined1 *)((int)puVar52 - 2) = *(undefined1 *)((int)puVar50 + -2);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 3:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar50 + -1);
            *(undefined1 *)((int)puVar52 - 2) = *(undefined1 *)((int)puVar50 + -2);
            *(undefined1 *)((int)puVar52 - 3) = *(undefined1 *)((int)puVar50 + -3);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          }
        }
      }
      else {
        while (puVar51 = puVar50, puVar53 = puVar52, ((uint)puVar52 & 0xf) != 0) {
          puVar50 = (undefined4 *)((int)puVar50 + -1);
          puVar52 = (undefined4 *)((int)puVar52 + -1);
          *(undefined1 *)puVar52 = *(undefined1 *)puVar50;
          uVar47 = uVar47 - 1;
        }
        do {
          puVar50 = puVar51;
          puVar52 = puVar53;
          if (uVar47 < 0x80) break;
          puVar50 = puVar51 + -0x20;
          puVar52 = puVar53 + -0x20;
          uVar3 = puVar51[-0x1f];
          uVar4 = puVar51[-0x1e];
          uVar5 = puVar51[-0x1d];
          uVar6 = puVar51[-0x1c];
          uVar7 = puVar51[-0x1b];
          uVar8 = puVar51[-0x1a];
          uVar9 = puVar51[-0x19];
          uVar10 = puVar51[-0x18];
          uVar11 = puVar51[-0x17];
          uVar12 = puVar51[-0x16];
          uVar13 = puVar51[-0x15];
          uVar14 = puVar51[-0x14];
          uVar15 = puVar51[-0x13];
          uVar16 = puVar51[-0x12];
          uVar17 = puVar51[-0x11];
          uVar18 = puVar51[-0x10];
          uVar19 = puVar51[-0xf];
          uVar20 = puVar51[-0xe];
          uVar21 = puVar51[-0xd];
          uVar22 = puVar51[-0xc];
          uVar23 = puVar51[-0xb];
          uVar24 = puVar51[-10];
          uVar25 = puVar51[-9];
          uVar26 = puVar51[-8];
          uVar27 = puVar51[-7];
          uVar28 = puVar51[-6];
          uVar29 = puVar51[-5];
          uVar30 = puVar51[-4];
          uVar31 = puVar51[-3];
          uVar32 = puVar51[-2];
          uVar33 = puVar51[-1];
          *puVar52 = *puVar50;
          puVar53[-0x1f] = uVar3;
          puVar53[-0x1e] = uVar4;
          puVar53[-0x1d] = uVar5;
          puVar53[-0x1c] = uVar6;
          puVar53[-0x1b] = uVar7;
          puVar53[-0x1a] = uVar8;
          puVar53[-0x19] = uVar9;
          puVar53[-0x18] = uVar10;
          puVar53[-0x17] = uVar11;
          puVar53[-0x16] = uVar12;
          puVar53[-0x15] = uVar13;
          puVar53[-0x14] = uVar14;
          puVar53[-0x13] = uVar15;
          puVar53[-0x12] = uVar16;
          puVar53[-0x11] = uVar17;
          puVar53[-0x10] = uVar18;
          puVar53[-0xf] = uVar19;
          puVar53[-0xe] = uVar20;
          puVar53[-0xd] = uVar21;
          puVar53[-0xc] = uVar22;
          puVar53[-0xb] = uVar23;
          puVar53[-10] = uVar24;
          puVar53[-9] = uVar25;
          puVar53[-8] = uVar26;
          puVar53[-7] = uVar27;
          puVar53[-6] = uVar28;
          puVar53[-5] = uVar29;
          puVar53[-4] = uVar30;
          puVar53[-3] = uVar31;
          puVar53[-2] = uVar32;
          puVar53[-1] = uVar33;
          uVar47 = uVar47 - 0x80;
          puVar51 = puVar50;
          puVar53 = puVar52;
        } while ((uVar47 & 0xffffff80) != 0);
        puVar51 = puVar50;
        puVar53 = puVar52;
        if (0x1f < uVar47) {
          do {
            puVar50 = puVar51 + -8;
            puVar52 = puVar53 + -8;
            uVar3 = puVar51[-7];
            uVar4 = puVar51[-6];
            uVar5 = puVar51[-5];
            uVar6 = puVar51[-4];
            uVar7 = puVar51[-3];
            uVar8 = puVar51[-2];
            uVar9 = puVar51[-1];
            *puVar52 = *puVar50;
            puVar53[-7] = uVar3;
            puVar53[-6] = uVar4;
            puVar53[-5] = uVar5;
            puVar53[-4] = uVar6;
            puVar53[-3] = uVar7;
            puVar53[-2] = uVar8;
            puVar53[-1] = uVar9;
            uVar47 = uVar47 - 0x20;
            puVar51 = puVar50;
            puVar53 = puVar52;
          } while ((uVar47 & 0xffffffe0) != 0);
        }
      }
    }
    for (; (uVar47 & 0xfffffffc) != 0; uVar47 = uVar47 - 4) {
      puVar52 = puVar52 + -1;
      puVar50 = puVar50 + -1;
      *puVar52 = *puVar50;
    }
    for (; uVar47 != 0; uVar47 = uVar47 - 1) {
      puVar52 = (undefined4 *)((int)puVar52 - 1);
      puVar50 = (undefined4 *)((int)puVar50 + -1);
      *(undefined1 *)puVar52 = *(undefined1 *)puVar50;
    }
    return CONCAT44(uVar48,param_1);
  }
  uVar47 = param_3;
  puVar54 = param_1;
  if (0x1f < param_3) {
    if (param_3 < 0x80) {
      if ((DAT_0041a010 >> 1 & 1) != 0) {
LAB_00411f0d:
        if (uVar47 == 0) goto LAB_00411f70;
        for (uVar48 = uVar47 >> 5; param_3 = 0, uVar48 != 0; uVar48 = uVar48 - 1) {
          uVar55 = param_2[1];
          uVar2 = param_2[2];
          uVar34 = param_2[3];
          uVar35 = param_2[4];
          uVar36 = param_2[5];
          uVar37 = param_2[6];
          uVar38 = param_2[7];
          *puVar54 = *param_2;
          puVar54[1] = uVar55;
          puVar54[2] = uVar2;
          puVar54[3] = uVar34;
          puVar54[4] = uVar35;
          puVar54[5] = uVar36;
          puVar54[6] = uVar37;
          puVar54[7] = uVar38;
          param_2 = param_2 + 8;
          puVar54 = puVar54 + 8;
        }
        goto LAB_00411f3b;
      }
joined_r0x00411c6d:
      for (; ((uint)puVar54 & 3) != 0; puVar54 = (uint *)((int)puVar54 + 1)) {
        *(char *)puVar54 = (char)*param_2;
        param_3 = param_3 - 1;
        param_2 = (uint *)((int)param_2 + 1);
      }
    }
    else {
      if ((DAT_0041ab48 >> 1 & 1) != 0) {
        for (; uVar47 != 0; uVar47 = uVar47 - 1) {
          *(char *)puVar54 = (char)*param_2;
          param_2 = (uint *)((int)param_2 + 1);
          puVar54 = (uint *)((int)puVar54 + 1);
        }
        return CONCAT44(param_3,param_1);
      }
      if (((((uint)param_1 ^ (uint)param_2) & 0xf) == 0) && ((DAT_0041a010 >> 1 & 1) != 0)) {
        if (((uint)param_2 & 0xf) != 0) {
          uVar48 = 0x10 - ((uint)param_2 & 0xf);
          param_3 = param_3 - uVar48;
          for (uVar47 = uVar48 & 3; uVar47 != 0; uVar47 = uVar47 - 1) {
            *(char *)puVar54 = (char)*param_2;
            param_2 = (uint *)((int)param_2 + 1);
            puVar54 = (uint *)((int)puVar54 + 1);
          }
          for (uVar48 = uVar48 >> 2; uVar48 != 0; uVar48 = uVar48 - 1) {
            *puVar54 = *param_2;
            param_2 = param_2 + 1;
            puVar54 = puVar54 + 1;
          }
        }
        uVar47 = param_3 & 0x7f;
        for (uVar48 = param_3 >> 7; param_3 = 0, uVar48 != 0; uVar48 = uVar48 - 1) {
          uVar55 = param_2[1];
          uVar2 = param_2[2];
          uVar34 = param_2[3];
          uVar35 = param_2[4];
          uVar36 = param_2[5];
          uVar37 = param_2[6];
          uVar38 = param_2[7];
          uVar39 = param_2[8];
          uVar40 = param_2[9];
          uVar41 = param_2[10];
          uVar42 = param_2[0xb];
          uVar43 = param_2[0xc];
          uVar44 = param_2[0xd];
          uVar45 = param_2[0xe];
          uVar46 = param_2[0xf];
          *puVar54 = *param_2;
          puVar54[1] = uVar55;
          puVar54[2] = uVar2;
          puVar54[3] = uVar34;
          puVar54[4] = uVar35;
          puVar54[5] = uVar36;
          puVar54[6] = uVar37;
          puVar54[7] = uVar38;
          puVar54[8] = uVar39;
          puVar54[9] = uVar40;
          puVar54[10] = uVar41;
          puVar54[0xb] = uVar42;
          puVar54[0xc] = uVar43;
          puVar54[0xd] = uVar44;
          puVar54[0xe] = uVar45;
          puVar54[0xf] = uVar46;
          uVar55 = param_2[0x11];
          uVar2 = param_2[0x12];
          uVar34 = param_2[0x13];
          uVar35 = param_2[0x14];
          uVar36 = param_2[0x15];
          uVar37 = param_2[0x16];
          uVar38 = param_2[0x17];
          uVar39 = param_2[0x18];
          uVar40 = param_2[0x19];
          uVar41 = param_2[0x1a];
          uVar42 = param_2[0x1b];
          uVar43 = param_2[0x1c];
          uVar44 = param_2[0x1d];
          uVar45 = param_2[0x1e];
          uVar46 = param_2[0x1f];
          puVar54[0x10] = param_2[0x10];
          puVar54[0x11] = uVar55;
          puVar54[0x12] = uVar2;
          puVar54[0x13] = uVar34;
          puVar54[0x14] = uVar35;
          puVar54[0x15] = uVar36;
          puVar54[0x16] = uVar37;
          puVar54[0x17] = uVar38;
          puVar54[0x18] = uVar39;
          puVar54[0x19] = uVar40;
          puVar54[0x1a] = uVar41;
          puVar54[0x1b] = uVar42;
          puVar54[0x1c] = uVar43;
          puVar54[0x1d] = uVar44;
          puVar54[0x1e] = uVar45;
          puVar54[0x1f] = uVar46;
          param_2 = param_2 + 0x20;
          puVar54 = puVar54 + 0x20;
        }
        goto LAB_00411f0d;
      }
      if (((DAT_0041ab48 & 1) == 0) || (((uint)param_1 & 3) != 0)) goto joined_r0x00411c6d;
      if (((uint)param_2 & 3) == 0) {
        if (((uint)param_1 >> 2 & 1) != 0) {
          uVar47 = *param_2;
          param_3 = param_3 - 4;
          param_2 = param_2 + 1;
          *param_1 = uVar47;
          param_1 = param_1 + 1;
        }
        if (((uint)param_1 >> 3 & 1) != 0) {
          uVar1 = *(undefined8 *)param_2;
          param_3 = param_3 - 8;
          param_2 = param_2 + 2;
          *(undefined8 *)param_1 = uVar1;
          param_1 = param_1 + 2;
        }
        if (((uint)param_2 & 7) == 0) {
          puVar54 = param_2 + -2;
          uVar47 = *param_2;
          uVar48 = param_2[1];
          do {
            puVar49 = puVar54;
            uVar34 = puVar49[4];
            uVar35 = puVar49[5];
            param_3 = param_3 - 0x30;
            uVar36 = puVar49[6];
            uVar37 = puVar49[7];
            uVar38 = puVar49[8];
            uVar39 = puVar49[9];
            uVar55 = puVar49[0xe];
            uVar2 = puVar49[0xf];
            uVar40 = puVar49[10];
            uVar41 = puVar49[0xb];
            uVar42 = puVar49[0xc];
            uVar43 = puVar49[0xd];
            *param_1 = uVar47;
            param_1[1] = uVar48;
            param_1[2] = uVar34;
            param_1[3] = uVar35;
            param_1[4] = uVar36;
            param_1[5] = uVar37;
            param_1[6] = uVar38;
            param_1[7] = uVar39;
            param_1[8] = uVar40;
            param_1[9] = uVar41;
            param_1[10] = uVar42;
            param_1[0xb] = uVar43;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar55;
            uVar48 = uVar2;
          } while (0x2f < (int)param_3);
          puVar49 = puVar49 + 0xe;
        }
        else if (((uint)param_2 >> 3 & 1) == 0) {
          puVar54 = param_2 + -1;
          uVar47 = *param_2;
          uVar48 = param_2[1];
          uVar55 = param_2[2];
          do {
            puVar49 = puVar54;
            uVar36 = puVar49[4];
            param_3 = param_3 - 0x30;
            uVar37 = puVar49[5];
            uVar38 = puVar49[6];
            uVar39 = puVar49[7];
            uVar40 = puVar49[8];
            uVar2 = puVar49[0xd];
            uVar34 = puVar49[0xe];
            uVar35 = puVar49[0xf];
            uVar41 = puVar49[9];
            uVar42 = puVar49[10];
            uVar43 = puVar49[0xb];
            uVar44 = puVar49[0xc];
            *param_1 = uVar47;
            param_1[1] = uVar48;
            param_1[2] = uVar55;
            param_1[3] = uVar36;
            param_1[4] = uVar37;
            param_1[5] = uVar38;
            param_1[6] = uVar39;
            param_1[7] = uVar40;
            param_1[8] = uVar41;
            param_1[9] = uVar42;
            param_1[10] = uVar43;
            param_1[0xb] = uVar44;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar2;
            uVar48 = uVar34;
            uVar55 = uVar35;
          } while (0x2f < (int)param_3);
          puVar49 = puVar49 + 0xd;
        }
        else {
          puVar54 = param_2 + -3;
          uVar47 = *param_2;
          do {
            puVar49 = puVar54;
            uVar55 = puVar49[4];
            uVar2 = puVar49[5];
            uVar34 = puVar49[6];
            param_3 = param_3 - 0x30;
            uVar35 = puVar49[7];
            uVar36 = puVar49[8];
            uVar37 = puVar49[9];
            uVar38 = puVar49[10];
            uVar48 = puVar49[0xf];
            uVar39 = puVar49[0xb];
            uVar40 = puVar49[0xc];
            uVar41 = puVar49[0xd];
            uVar42 = puVar49[0xe];
            *param_1 = uVar47;
            param_1[1] = uVar55;
            param_1[2] = uVar2;
            param_1[3] = uVar34;
            param_1[4] = uVar35;
            param_1[5] = uVar36;
            param_1[6] = uVar37;
            param_1[7] = uVar38;
            param_1[8] = uVar39;
            param_1[9] = uVar40;
            param_1[10] = uVar41;
            param_1[0xb] = uVar42;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar48;
          } while (0x2f < (int)param_3);
          puVar49 = puVar49 + 0xf;
        }
        for (; 0xf < (int)param_3; param_3 = param_3 - 0x10) {
          uVar47 = *puVar49;
          uVar48 = puVar49[1];
          uVar55 = puVar49[2];
          uVar2 = puVar49[3];
          puVar49 = puVar49 + 4;
          *param_1 = uVar47;
          param_1[1] = uVar48;
          param_1[2] = uVar55;
          param_1[3] = uVar2;
          param_1 = param_1 + 4;
        }
        if ((param_3 >> 2 & 1) != 0) {
          uVar47 = *puVar49;
          param_3 = param_3 - 4;
          puVar49 = puVar49 + 1;
          *param_1 = uVar47;
          param_1 = param_1 + 1;
        }
        if ((param_3 >> 3 & 1) != 0) {
          param_3 = param_3 - 8;
          *(undefined8 *)param_1 = *(undefined8 *)puVar49;
        }
                    /* WARNING: Could not recover jumptable at 0x00411c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar56 = (*(code *)(&switchD_00411c95::switchdataD_00411ca4)[param_3])();
        return uVar56;
      }
    }
    uVar47 = param_3;
    if (0x1f < param_3) {
      for (uVar47 = param_3 >> 2; uVar47 != 0; uVar47 = uVar47 - 1) {
        *puVar54 = *param_2;
        param_2 = param_2 + 1;
        puVar54 = puVar54 + 1;
      }
      switch(param_3 & 3) {
      case 0:
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 1:
        *(char *)puVar54 = (char)*param_2;
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 2:
        *(char *)puVar54 = (char)*param_2;
        *(undefined1 *)((int)puVar54 + 1) = *(undefined1 *)((int)param_2 + 1);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 3:
        *(char *)puVar54 = (char)*param_2;
        *(undefined1 *)((int)puVar54 + 1) = *(undefined1 *)((int)param_2 + 1);
        *(undefined1 *)((int)puVar54 + 2) = *(undefined1 *)((int)param_2 + 2);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      }
    }
  }
LAB_00411f3b:
  if ((uVar47 & 0x1f) != 0) {
    for (uVar48 = (uVar47 & 0x1f) >> 2; uVar48 != 0; uVar48 = uVar48 - 1) {
      param_3 = *param_2;
      *puVar54 = param_3;
      puVar54 = puVar54 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar47 = uVar47 & 3; uVar47 != 0; uVar47 = uVar47 - 1) {
      *(char *)puVar54 = (char)*param_2;
      param_2 = (uint *)((int)param_2 + 1);
      puVar54 = (uint *)((int)puVar54 + 1);
    }
  }
LAB_00411f70:
  return CONCAT44(param_3,param_1);
}



// ===== FUN_00411fc0 @ 00411fc0 (size 311) =====

undefined1 (*) [16] __cdecl FUN_00411fc0(undefined1 (*param_1) [16],byte param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  char *pcVar8;
  byte *pbVar9;
  undefined1 auVar12 [15];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte *pbVar10;
  
  if (DAT_0041ab44 != 0) {
    if (DAT_0041ab44 < 2) {
      auVar15 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
      uVar3 = -1 << (sbyte)((uint)param_1 & 0xf);
      pcVar8 = (char *)((int)param_1 - ((uint)param_1 & 0xf));
      pauVar7 = (undefined1 (*) [16])0x0;
      while( true ) {
        auVar12 = SUB1615((undefined1  [16])0x0,1);
        auVar14[0] = -(*pcVar8 == '\0');
        auVar14[1] = -(pcVar8[1] == '\0');
        auVar14[2] = -(pcVar8[2] == '\0');
        auVar14[3] = -(pcVar8[3] == '\0');
        auVar14[4] = -(pcVar8[4] == '\0');
        auVar14[5] = -(pcVar8[5] == '\0');
        auVar14[6] = -(pcVar8[6] == '\0');
        auVar14[7] = -(pcVar8[7] == '\0');
        auVar14[8] = -(pcVar8[8] == '\0');
        auVar14[9] = -(auVar12[8] == pcVar8[9]);
        auVar14[10] = -(auVar12[9] == pcVar8[10]);
        auVar14[0xb] = -(auVar12[10] == pcVar8[0xb]);
        auVar14[0xc] = -(auVar12[0xb] == pcVar8[0xc]);
        auVar14[0xd] = -(auVar12[0xc] == pcVar8[0xd]);
        auVar14[0xe] = -(auVar12[0xd] == pcVar8[0xe]);
        auVar14[0xf] = -(auVar12[0xe] == pcVar8[0xf]);
        auVar13[0] = -(*pcVar8 == auVar15[0]);
        auVar13[1] = -(pcVar8[1] == auVar15[1]);
        auVar13[2] = -(pcVar8[2] == auVar15[2]);
        auVar13[3] = -(pcVar8[3] == auVar15[3]);
        auVar13[4] = -(pcVar8[4] == auVar15[4]);
        auVar13[5] = -(pcVar8[5] == auVar15[5]);
        auVar13[6] = -(pcVar8[6] == auVar15[6]);
        auVar13[7] = -(pcVar8[7] == auVar15[7]);
        auVar13[8] = -(pcVar8[8] == auVar15[0]);
        auVar13[9] = -(pcVar8[9] == auVar15[1]);
        auVar13[10] = -(pcVar8[10] == auVar15[2]);
        auVar13[0xb] = -(pcVar8[0xb] == auVar15[3]);
        auVar13[0xc] = -(pcVar8[0xc] == auVar15[4]);
        auVar13[0xd] = -(pcVar8[0xd] == auVar15[5]);
        auVar13[0xe] = -(pcVar8[0xe] == auVar15[6]);
        auVar13[0xf] = -(pcVar8[0xf] == auVar15[7]);
        uVar5 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar14[0xf] >> 7) << 0xf) & uVar3;
        if (uVar5 != 0) break;
        uVar3 = (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar13[0xf] >> 7) << 0xf) & uVar3;
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uVar3 != 0) {
          pauVar7 = (undefined1 (*) [16])(pcVar8 + iVar6);
        }
        uVar3 = 0xffffffff;
        pcVar8 = pcVar8 + 0x10;
      }
      uVar3 = (uVar5 * 2 & uVar5 * -2) - 1 &
              (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar13[0xf] >> 7) << 0xf) & uVar3;
      iVar6 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      pauVar4 = (undefined1 (*) [16])(pcVar8 + iVar6);
      if (uVar3 == 0) {
        pauVar4 = pauVar7;
      }
      return pauVar4;
    }
    uVar3 = (uint)param_2;
    if (uVar3 == 0) {
      pcVar8 = (char *)((uint)param_1 & 0xfffffff0);
      auVar12 = SUB1615((undefined1  [16])0x0,1);
      auVar15[0] = -(*pcVar8 == '\0');
      auVar15[1] = -(pcVar8[1] == '\0');
      auVar15[2] = -(pcVar8[2] == '\0');
      auVar15[3] = -(pcVar8[3] == '\0');
      auVar15[4] = -(pcVar8[4] == '\0');
      auVar15[5] = -(pcVar8[5] == '\0');
      auVar15[6] = -(pcVar8[6] == '\0');
      auVar15[7] = -(pcVar8[7] == '\0');
      auVar15[8] = -(pcVar8[8] == '\0');
      auVar15[9] = -(auVar12[8] == pcVar8[9]);
      auVar15[10] = -(auVar12[9] == pcVar8[10]);
      auVar15[0xb] = -(auVar12[10] == pcVar8[0xb]);
      auVar15[0xc] = -(auVar12[0xb] == pcVar8[0xc]);
      auVar15[0xd] = -(auVar12[0xc] == pcVar8[0xd]);
      auVar15[0xe] = -(auVar12[0xd] == pcVar8[0xe]);
      auVar15[0xf] = -(auVar12[0xe] == pcVar8[0xf]);
      uVar3 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar15[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
      while (uVar3 == 0) {
        auVar12 = SUB1615((undefined1  [16])0x0,1);
        auVar11[0] = -(pcVar8[0x10] == '\0');
        auVar11[1] = -(pcVar8[0x11] == '\0');
        auVar11[2] = -(pcVar8[0x12] == '\0');
        auVar11[3] = -(pcVar8[0x13] == '\0');
        auVar11[4] = -(pcVar8[0x14] == '\0');
        auVar11[5] = -(pcVar8[0x15] == '\0');
        auVar11[6] = -(pcVar8[0x16] == '\0');
        auVar11[7] = -(pcVar8[0x17] == '\0');
        auVar11[8] = -(pcVar8[0x18] == '\0');
        auVar11[9] = -(auVar12[8] == pcVar8[0x19]);
        auVar11[10] = -(auVar12[9] == pcVar8[0x1a]);
        auVar11[0xb] = -(auVar12[10] == pcVar8[0x1b]);
        auVar11[0xc] = -(auVar12[0xb] == pcVar8[0x1c]);
        auVar11[0xd] = -(auVar12[0xc] == pcVar8[0x1d]);
        auVar11[0xe] = -(auVar12[0xd] == pcVar8[0x1e]);
        auVar11[0xf] = -(auVar12[0xe] == pcVar8[0x1f]);
        pcVar8 = pcVar8 + 0x10;
        uVar3 = (uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar11[0xf] >> 7) << 0xf);
      }
      iVar6 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      pauVar7 = (undefined1 (*) [16])(pcVar8 + iVar6);
    }
    else {
      pauVar7 = (undefined1 (*) [16])0x0;
      for (; ((uint)param_1 & 0xf) != 0; param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
        if ((byte)(*param_1)[0] == uVar3) {
          pauVar7 = param_1;
        }
        if ((byte)(*param_1)[0] == 0) {
          return pauVar7;
        }
      }
      do {
        pauVar4 = param_1 + 1;
        iVar6 = pcmpistri(ZEXT416(uVar3),*param_1,0x40);
        if ((undefined1 (*) [16])0xffffffef < param_1) {
          pauVar7 = (undefined1 (*) [16])(*param_1 + iVar6);
        }
        param_1 = pauVar4;
      } while (pauVar4 != (undefined1 (*) [16])0x0);
    }
    return pauVar7;
  }
  iVar6 = -1;
  do {
    pauVar7 = param_1;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pauVar7 = (undefined1 (*) [16])(*param_1 + 1);
    puVar2 = *param_1;
    param_1 = pauVar7;
  } while (*puVar2 != '\0');
  iVar6 = -(iVar6 + 1);
  pbVar10 = pauVar7[-1] + 0xf;
  do {
    pbVar9 = pbVar10;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pbVar9 = pbVar10 + -1;
    bVar1 = *pbVar10;
    pbVar10 = pbVar9;
  } while (param_2 != bVar1);
  pauVar7 = (undefined1 (*) [16])(pbVar9 + 1);
  if ((*pauVar7)[0] != param_2) {
    pauVar7 = (undefined1 (*) [16])0x0;
  }
  return pauVar7;
}



// ===== FUN_0041222b @ 0041222b (size 173) =====

ushort * __cdecl FUN_0041222b(ushort *param_1,ushort param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar5 [14];
  undefined1 auVar4 [16];
  ushort uVar6;
  ushort uVar7;
  
  if (DAT_0041ab44 < 1) {
    for (; (*param_1 != 0 && (*param_1 != param_2)); param_1 = param_1 + 1) {
    }
  }
  else {
    auVar2 = pshuflw(ZEXT216(param_2),ZEXT216(param_2),0);
    while( true ) {
      for (; 0xff0 < ((uint)param_1 & 0xfff); param_1 = param_1 + 1) {
        if (*param_1 == param_2) {
          return param_1;
        }
        if (*param_1 == 0) {
          return (ushort *)0x0;
        }
      }
      auVar5 = SUB1614((undefined1  [16])0x0,2);
      auVar4._0_2_ = -(ushort)(*param_1 == 0);
      auVar4._2_2_ = -(ushort)(param_1[1] == 0);
      auVar4._4_2_ = -(ushort)(param_1[2] == 0);
      auVar4._6_2_ = -(ushort)(param_1[3] == 0);
      auVar4._8_2_ = -(ushort)(param_1[4] == 0);
      auVar4._10_2_ = -(ushort)(auVar5._8_2_ == param_1[5]);
      auVar4._12_2_ = -(ushort)(auVar5._10_2_ == param_1[6]);
      auVar4._14_2_ = -(ushort)(auVar5._12_2_ == param_1[7]);
      uVar6 = auVar2._0_2_;
      auVar3._0_2_ = -(ushort)(*param_1 == uVar6);
      uVar7 = auVar2._2_2_;
      auVar3._2_2_ = -(ushort)(param_1[1] == uVar7);
      auVar3._4_2_ = -(ushort)(param_1[2] == uVar6);
      auVar3._6_2_ = -(ushort)(param_1[3] == uVar7);
      auVar3._8_2_ = -(ushort)(param_1[4] == uVar6);
      auVar3._10_2_ = -(ushort)(param_1[5] == uVar7);
      auVar3._12_2_ = -(ushort)(param_1[6] == uVar6);
      auVar3._14_2_ = -(ushort)(param_1[7] == uVar7);
      auVar4 = auVar4 | auVar3;
      uVar6 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
      if (uVar6 != 0) break;
      param_1 = param_1 + 8;
    }
    iVar1 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    param_1 = (ushort *)((int)param_1 + iVar1);
  }
  return (ushort *)((*param_1 != param_2) - 1 & (uint)param_1);
}



// decompiled 511 ok, 0 failed, 511 total
