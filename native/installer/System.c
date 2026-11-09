// Program: 01-System.dll

// ===== Alloc @ 10001000 (size 27) =====

void __cdecl Alloc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x1000  1  Alloc */
  DAT_1000506c = param_2;
  DAT_10005070 = param_4;
  FUN_1000101b(1);
  return;
}



// ===== FUN_1000101b @ 1000101b (size 34) =====

void __cdecl FUN_1000101b(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = FUN_10001516();
  if (iVar1 == 0) {
    pvVar2 = (HGLOBAL)0x0;
  }
  else {
    pvVar2 = GlobalAlloc(0x40,iVar1 * param_1);
  }
  FUN_1000153d(pvVar2);
  return;
}



// ===== StrAlloc @ 1000103d (size 27) =====

void __cdecl StrAlloc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x103d  8  StrAlloc */
  DAT_1000506c = param_2;
  DAT_10005070 = param_4;
  FUN_1000101b(2);
  return;
}



// ===== Copy @ 10001058 (size 137) =====

void __cdecl Copy(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *hMem;
  undefined1 *puVar1;
  HGLOBAL hMem_00;
  SIZE_T dwBytes;
  ulonglong uVar2;
  
                    /* 0x1058  3  Copy */
  DAT_1000506c = param_2;
  DAT_10005070 = param_4;
  dwBytes = 0;
  hMem = (ushort *)FUN_10001243();
  if (hMem != (ushort *)0x0) {
    if (*hMem == 0x2f) {
      uVar2 = FUN_10001311(hMem + 1);
      dwBytes = (SIZE_T)uVar2;
      puVar1 = (undefined1 *)FUN_10001516();
    }
    else {
      uVar2 = FUN_10001311(hMem);
      puVar1 = (undefined1 *)uVar2;
    }
    hMem_00 = (HGLOBAL)FUN_10001516();
    if (dwBytes == 0) {
      dwBytes = GlobalSize(hMem_00);
    }
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = GlobalAlloc(0x40,dwBytes);
      FUN_1000153d(puVar1);
    }
    FUN_10001563(puVar1,(int)hMem_00,dwBytes);
    GlobalFree(hMem);
  }
  return;
}



// ===== Store @ 100010e1 (size 314) =====

void __cdecl
Store(undefined4 param_1,int param_2,undefined1 *param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *hMem;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  LPCWSTR pWVar6;
  int iVar7;
  ushort *puVar8;
  
                    /* 0x10e1  7  Store */
  DAT_1000506c = param_2;
  DAT_10005070 = param_4;
  DAT_10005074 = param_3;
  (**(code **)(param_5 + 0xc))(DAT_10005048,&LAB_100015b1);
  iVar7 = DAT_1000506c * 0x28;
  hMem = (ushort *)FUN_10001243();
  uVar1 = *hMem;
  puVar2 = hMem;
  do {
    if (uVar1 == 0) {
      GlobalFree(hMem);
      return;
    }
    uVar3 = (uint)*puVar2;
    puVar8 = puVar2 + 1;
    if (uVar3 < 0x6d) {
      if ((uVar3 == 0x6c) || (uVar3 == 0x4c)) {
        if (DAT_10005040 != (undefined4 *)0x0) {
          FUN_10001563(DAT_10005074,(int)(DAT_10005040 + 1),iVar7);
          puVar5 = (undefined4 *)*DAT_10005040;
          GlobalFree(DAT_10005040);
          DAT_10005040 = puVar5;
        }
      }
      else {
        if (uVar3 == 0x50) {
          *puVar8 = *puVar8 + 10;
          goto LAB_100011b0;
        }
        iVar4 = uVar3 - 0x52;
        if (iVar4 == 0) {
          *puVar8 = *puVar8 + 10;
          goto LAB_10001196;
        }
LAB_10001161:
        if (iVar4 == 1) {
          puVar5 = GlobalAlloc(0x40,iVar7 + 4);
          *puVar5 = DAT_10005040;
          DAT_10005040 = puVar5;
          FUN_10001563((undefined1 *)(puVar5 + 1),(int)DAT_10005074,iVar7);
        }
      }
    }
    else {
      if (uVar3 == 0x70) {
LAB_100011b0:
        pWVar6 = (LPCWSTR)FUN_100012ba(*puVar8 - 0x30);
        pWVar6 = FUN_10001272(pWVar6);
      }
      else {
        iVar4 = uVar3 - 0x72;
        if (iVar4 != 0) goto LAB_10001161;
LAB_10001196:
        uVar1 = *puVar8;
        pWVar6 = (LPCWSTR)FUN_10001243();
        pWVar6 = FUN_100012e1(uVar1 - 0x30,pWVar6);
      }
      puVar8 = puVar2 + 2;
      GlobalFree(pWVar6);
    }
    uVar1 = *puVar8;
    puVar2 = puVar8;
  } while( true );
}



// ===== FUN_1000121b @ 1000121b (size 17) =====

void FUN_1000121b(void)

{
  GlobalAlloc(0x40,DAT_1000506c * 2);
  return;
}



// ===== FUN_1000122c @ 1000122c (size 23) =====

void __cdecl FUN_1000122c(LPCWSTR param_1)

{
  LPWSTR lpString1;
  int iMaxLength;
  
  iMaxLength = DAT_1000506c;
  lpString1 = (LPWSTR)FUN_1000121b();
  lstrcpynW(lpString1,param_1,iMaxLength);
  return;
}



// ===== FUN_10001243 @ 10001243 (size 47) =====

int FUN_10001243(void)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  
  if (DAT_10005070 != (int *)0x0) {
    piVar2 = (int *)*DAT_10005070;
    if (piVar2 != (int *)0x0) {
      *DAT_10005070 = *piVar2;
      psVar3 = (short *)(piVar2 + 1);
      iVar4 = (int)piVar2 - (int)psVar3;
      do {
        sVar1 = *psVar3;
        *(short *)(iVar4 + (int)psVar3) = sVar1;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      return (int)piVar2;
    }
  }
  return 0;
}



// ===== FUN_10001272 @ 10001272 (size 72) =====

LPCWSTR __cdecl FUN_10001272(LPCWSTR param_1)

{
  undefined4 *puVar1;
  
  if (DAT_10005070 != (undefined4 *)0x0) {
    puVar1 = GlobalAlloc(0x40,DAT_1000506c * 2 + 8);
    lstrcpynW((LPWSTR)(puVar1 + 1),param_1,DAT_1000506c);
    *puVar1 = *DAT_10005070;
    *DAT_10005070 = puVar1;
  }
  return param_1;
}



// ===== FUN_100012ba @ 100012ba (size 39) =====

void __cdecl FUN_100012ba(uint param_1)

{
  if (0x18 < param_1) {
    FUN_1000121b();
    return;
  }
  FUN_1000122c((LPCWSTR)(DAT_10005074 + DAT_1000506c * param_1 * 2));
  return;
}



// ===== FUN_100012e1 @ 100012e1 (size 48) =====

LPCWSTR __cdecl FUN_100012e1(uint param_1,LPCWSTR param_2)

{
  if ((param_2 != (LPCWSTR)0x0) && (param_1 < 0x19)) {
    lstrcpyW((LPWSTR)(DAT_10005074 + DAT_1000506c * param_1 * 2),param_2);
  }
  return param_2;
}



// ===== FUN_10001311 @ 10001311 (size 351) =====

ulonglong __cdecl FUN_10001311(ushort *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  bool bVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int local_c;
  
  uVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  if (*param_1 == 0x30) {
    puVar4 = param_1 + 1;
    uVar1 = *puVar4;
    if ((uVar1 == 0x78) || (uVar1 == 0x58)) {
      do {
        local_c = (int)(uVar2 >> 0x20);
        puVar4 = puVar4 + 1;
        uVar5 = (uint)*puVar4;
        if ((uVar5 < 0x30) || (0x39 < uVar5)) {
          if ((uVar5 < 0x61) || (0x66 < uVar5)) {
            if ((uVar5 < 0x41) || (0x46 < uVar5)) goto LAB_10001451;
            iVar6 = uVar5 - 0x37;
          }
          else {
            iVar6 = uVar5 - 0x57;
          }
        }
        else {
          iVar6 = uVar5 - 0x30;
        }
        lVar7 = __allmul((uint)uVar2,local_c,0x10,0);
        uVar2 = lVar7 + iVar6;
      } while( true );
    }
    if ((uVar1 < 0x38) && (0x2f < uVar1)) {
      while( true ) {
        local_c = (int)(uVar2 >> 0x20);
        uVar5 = (uint)*puVar4;
        if ((uVar5 < 0x30) || (0x37 < uVar5)) break;
        lVar7 = __allmul((uint)uVar2,local_c,8,0);
        uVar2 = lVar7 + (int)(uVar5 - 0x30);
        puVar4 = puVar4 + 1;
      }
      goto LAB_10001451;
    }
  }
  bVar3 = false;
  if (*param_1 == 0x2d) {
    bVar3 = true;
    puVar4 = param_1;
  }
  else {
    puVar4 = param_1 + -1;
  }
  while( true ) {
    local_c = (int)(uVar2 >> 0x20);
    uVar5 = (uint)uVar2;
    puVar4 = puVar4 + 1;
    iVar6 = *puVar4 - 0x30;
    if ((iVar6 < 0) || (9 < iVar6)) break;
    lVar7 = __allmul(uVar5,local_c,10,0);
    uVar2 = lVar7 + iVar6;
  }
  if (bVar3) {
    uVar2 = CONCAT44(-(local_c + (uint)(uVar5 != 0)),-uVar5);
  }
LAB_10001451:
  if (*puVar4 == 0x7c) {
    uVar8 = FUN_10001311(puVar4 + 1);
    uVar2 = uVar8 | uVar2;
  }
  return uVar2;
}



// ===== FUN_10001470 @ 10001470 (size 166) =====

void __cdecl FUN_10001470(int param_1,int param_2,short *param_3)

{
  short *psVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  short local_104 [128];
  
  psVar1 = local_104;
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar2 = param_1 != 0;
    param_1 = -param_1;
    *param_3 = 0x2d;
    param_2 = -(param_2 + (uint)bVar2);
    param_3 = param_3 + 1;
  }
  if (param_1 == 0 && param_2 == 0) {
    *param_3 = 0x30;
    param_3 = param_3 + 1;
  }
  else if ((-1 < param_2) &&
          ((lVar4 = CONCAT44(param_2,param_1), 0 < param_2 ||
           (lVar4 = CONCAT44(param_2,param_1), param_1 != 0)))) {
    do {
      do {
        uVar5 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar3 = __allrem((uint)lVar4,uVar5,10,0);
        *psVar1 = (short)uVar3 + 0x30;
        psVar1 = psVar1 + 1;
        lVar4 = __alldiv((uint)lVar4,uVar5,10,0);
      } while ((int)((ulonglong)lVar4 >> 0x20) != 0 && -1 < lVar4);
    } while ((-1 < lVar4) && ((int)lVar4 != 0));
    while (local_104 < psVar1) {
      psVar1 = psVar1 + -1;
      *param_3 = *psVar1;
      param_3 = param_3 + 1;
    }
  }
  *param_3 = 0;
  return;
}



// ===== FUN_10001516 @ 10001516 (size 39) =====

undefined4 FUN_10001516(void)

{
  ushort *hMem;
  ulonglong uVar1;
  
  hMem = (ushort *)FUN_10001243();
  if (hMem == (ushort *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_10001311(hMem);
  GlobalFree(hMem);
  return (int)uVar1;
}



// ===== FUN_1000153d @ 1000153d (size 38) =====

void __cdecl FUN_1000153d(undefined4 param_1)

{
  WCHAR local_68 [50];
  
  wsprintfW(local_68,(LPCWSTR)&DAT_10005000,param_1);
  FUN_10001272(local_68);
  return;
}



// ===== FUN_10001563 @ 10001563 (size 44) =====

undefined1 * __cdecl FUN_10001563(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (((param_2 != 0) && (param_1 != (undefined1 *)0x0)) && (param_3 != 0)) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[param_2 - (int)param_1];
      puVar1 = puVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_1;
}



// ===== FUN_1000158f @ 1000158f (size 34) =====

void __cdecl FUN_1000158f(HGLOBAL param_1)

{
  SIZE_T dwBytes;
  undefined1 *puVar1;
  
  dwBytes = GlobalSize(param_1);
  puVar1 = GlobalAlloc(0x40,dwBytes);
  FUN_10001563(puVar1,(int)param_1,dwBytes);
  return;
}



// ===== FUN_100015b4 @ 100015b4 (size 18) =====

void __cdecl FUN_100015b4(int param_1)

{
  LPWSTR pWVar1;
  
  pWVar1 = (LPWSTR)FUN_1000121b();
  FUN_100015c6(param_1,pWVar1);
  return;
}



// ===== FUN_100015c6 @ 100015c6 (size 87) =====

LPWSTR __cdecl FUN_100015c6(int param_1,LPWSTR param_2)

{
  wchar_t *lpString2;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c98);
    if ((*(byte *)(param_1 + 0x1011) & 1) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x100c) + 1);
    }
    wsprintfW(param_2,u_callback_d_1000501c,uVar1);
  }
  else {
    lpString2 = u_error_10005010;
    if (*(int *)(param_1 + 4) == 0) {
      lpString2 = (wchar_t *)&DAT_10005008;
    }
    lstrcpyW(param_2,lpString2);
  }
  return param_2;
}



// ===== FUN_1000161d @ 1000161d (size 80) =====

FARPROC __cdecl FUN_1000161d(HMODULE param_1,LPCWSTR param_2)

{
  SIZE_T dwBytes;
  LPCSTR lpMultiByteStr;
  FARPROC pFVar1;
  
  dwBytes = WideCharToMultiByte(0,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  lpMultiByteStr = GlobalAlloc(0x40,dwBytes);
  WideCharToMultiByte(0,0,param_2,-1,lpMultiByteStr,dwBytes,(LPCSTR)0x0,(LPBOOL)0x0);
  pFVar1 = GetProcAddress(param_1,lpMultiByteStr);
  GlobalFree(lpMultiByteStr);
  return pFVar1;
}



// ===== Free @ 1000166d (size 103) =====

void __cdecl Free(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  HGLOBAL hMem;
  LPVOID lpAddress;
  LPVOID pvVar2;
  
                    /* 0x166d  4  Free */
  DAT_1000506c = param_2;
  DAT_10005070 = param_4;
  hMem = (HGLOBAL)FUN_10001516();
  if (DAT_10005060 != (LPVOID)0x0) {
    pvVar1 = DAT_10005060;
    pvVar2 = (LPVOID)0x0;
    do {
      lpAddress = pvVar1;
      if (*(HGLOBAL *)((int)lpAddress + 1) == hMem) {
        if (pvVar2 == (LPVOID)0x0) {
          DAT_10005060 = *(LPVOID *)((int)lpAddress + 0xc);
        }
        else {
          *(undefined4 *)((int)pvVar2 + 0xc) = *(undefined4 *)((int)lpAddress + 0xc);
        }
        DAT_10005050 = DAT_10005050 + -1;
        VirtualFree(lpAddress,0,0x8000);
        break;
      }
      pvVar1 = *(LPVOID *)((int)lpAddress + 0xc);
      pvVar2 = lpAddress;
    } while (*(LPVOID *)((int)lpAddress + 0xc) != (LPVOID)0x0);
  }
  GlobalFree(hMem);
  return;
}



// ===== Get @ 100016d4 (size 163) =====

void __cdecl
Get(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *hMem;
  LPCWSTR pWVar1;
  
                    /* 0x16d4  5  Get */
  DAT_1000506c = param_2;
  DAT_10005070 = param_4;
  DAT_10005074 = param_3;
  (**(code **)(param_5 + 0xc))(DAT_10005048,&LAB_100015b1);
  hMem = FUN_10001b5f();
  if (hMem == (int *)0x0) {
    FUN_10001272(u_error_10005010);
  }
  else if ((*(byte *)(hMem + 0x404) & 4) == 0) {
    if (hMem[1] == 0) {
      FUN_1000153d(hMem);
    }
    else {
      pWVar1 = (LPCWSTR)FUN_100015b4((int)hMem);
      pWVar1 = FUN_10001272(pWVar1);
      GlobalFree(pWVar1);
      if ((*(byte *)(hMem + 0x404) & 2) == 0) {
        GlobalFree(hMem);
      }
    }
  }
  else {
    FUN_1000153d(hMem);
    pWVar1 = (LPCWSTR)FUN_100015b4((int)hMem);
    pWVar1 = FUN_10001272(pWVar1);
    GlobalFree(pWVar1);
  }
  return;
}



// ===== Call @ 10001777 (size 354) =====

void __cdecl
Call(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *hMem;
  LPCWSTR pWVar1;
  LPWSTR pWVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  WCHAR local_88 [50];
  int local_24 [8];
  
                    /* 0x1777  2  Call */
  DAT_1000506c = param_2;
  DAT_10005070 = param_4;
  DAT_10005074 = param_3;
  (**(code **)(param_5 + 0xc))(DAT_10005048,&LAB_100015b1);
  hMem = FUN_10001b5f();
  if (hMem == (int *)0x0) {
    return;
  }
  if (hMem[1] != 1) {
    FUN_10002352((int)hMem);
  }
  FUN_10002394((int)hMem);
  if (hMem[1] != -1) {
    iVar3 = *hMem;
    if (iVar3 == 0) {
      if (hMem[1] == 1) {
        hMem = (int *)FUN_10002d37(hMem);
      }
    }
    else {
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          FUN_10002724((int)hMem);
          goto LAB_10001806;
        }
        if (iVar3 != 3) goto LAB_10001806;
      }
      hMem = (int *)FUN_10002aac((undefined1 *)hMem);
    }
  }
LAB_10001806:
  if ((*(byte *)(hMem + 0x404) & 4) == 0) {
    if (hMem[1] == 0) {
      FUN_10002569(hMem);
    }
    else {
      piVar4 = hMem + 0x406;
      piVar5 = local_24;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      pWVar2 = FUN_100015c6((int)hMem,local_88);
      hMem[0x40d] = 0;
      hMem[0x408] = (int)pWVar2;
      hMem[0x406] = 4;
      FUN_10002569(hMem);
      piVar4 = local_24;
      piVar5 = hMem + 0x406;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
    }
  }
  else {
    FUN_10002569(hMem);
    pWVar1 = (LPCWSTR)FUN_100015b4((int)hMem);
    pWVar1 = FUN_10001272(pWVar1);
    GlobalFree(pWVar1);
  }
  if (hMem[1] != 1) {
    FUN_1000252c((int)hMem);
    if ((((*(byte *)(hMem + 0x404) & 0x40) != 0) && (*hMem == 1)) &&
       ((HMODULE)hMem[0x402] != (HMODULE)0x0)) {
      FreeLibrary((HMODULE)hMem[0x402]);
    }
    if ((*(byte *)(hMem + 0x404) & 0x20) != 0) {
      FUN_1000153d(DAT_10005068);
    }
  }
  if ((*(byte *)(hMem + 0x404) & 2) == 0) {
    GlobalFree(hMem);
  }
  return;
}



// ===== Int64Op @ 100018d9 (size 525) =====

/* WARNING: Removing unreachable block (ram,0x10001aaf) */
/* WARNING: Removing unreachable block (ram,0x10001a80) */

void __cdecl Int64Op(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort *hMem;
  ushort *hMem_00;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  WCHAR local_4c [26];
  ulonglong local_18;
  uint local_c;
  ushort *local_8;
  
                    /* 0x18d9  6  Int64Op */
  DAT_1000506c = param_2;
  uVar6 = 0;
  DAT_10005070 = param_4;
  local_c = 0;
  local_8 = (ushort *)FUN_10001243();
  uVar7 = FUN_10001311(local_8);
  uVar5 = (uint)(uVar7 >> 0x20);
  uVar2 = (uint)uVar7;
  hMem = (ushort *)FUN_10001243();
  if ((*hMem != 0x7e) && (*hMem != 0x21)) {
    hMem_00 = (ushort *)FUN_10001243();
    uVar8 = FUN_10001311(hMem_00);
    local_c = (uint)(uVar8 >> 0x20);
    uVar6 = (uint)uVar8;
    GlobalFree(hMem_00);
  }
  uVar1 = *hMem;
  uVar8 = uVar7;
  if (uVar1 < 0x30) {
    if (uVar1 != 0x2f) {
      if (uVar1 == 0x21) {
        iVar3 = 0;
        if (uVar7 == 0) goto LAB_10001a91;
        goto LAB_10001ab5;
      }
      if (uVar1 != 0x25) {
        if (uVar1 != 0x26) {
          if (uVar1 != 0x2a) {
            if (uVar1 == 0x2b) {
              uVar8 = uVar7 + CONCAT44(local_c,uVar6);
            }
            else if (uVar1 == 0x2d) {
              uVar8 = uVar7 - CONCAT44(local_c,uVar6);
            }
            goto LAB_10001aba;
          }
          uVar7 = __allmul(uVar2,uVar5,uVar6,local_c);
          goto LAB_10001ab6;
        }
        if (hMem[1] != 0x26) {
          uVar8 = CONCAT44(uVar5 & local_c,uVar2 & uVar6);
          goto LAB_10001aba;
        }
        if ((uVar7 == 0) || (uVar6 == 0 && local_c == 0)) goto LAB_10001ab3;
        goto LAB_10001a91;
      }
    }
    if (uVar6 == 0 && local_c == 0) {
      local_18 = 0;
    }
    else {
      local_18 = __alldiv(uVar2,uVar5,uVar6,local_c);
      uVar7 = __allrem(uVar2,uVar5,uVar6,local_c);
    }
    uVar8 = local_18;
    if (*hMem == 0x2f) goto LAB_10001aba;
  }
  else {
    bVar4 = (byte)uVar6;
    if (uVar1 == 0x3c) {
      if (hMem[1] != 0x3c) {
        if (CONCAT44(local_c,uVar6) <= (longlong)uVar7) goto LAB_10001ab3;
        goto LAB_10001a91;
      }
      uVar7 = __allshl(bVar4,uVar5);
    }
    else {
      if (uVar1 == 0x3d) {
        if (uVar7 != CONCAT44(local_c,uVar6)) {
LAB_10001ab3:
          iVar3 = 0;
          goto LAB_10001ab5;
        }
      }
      else if (uVar1 == 0x3e) {
        if (hMem[1] == 0x3e) {
          if (hMem[2] == 0x3e) {
            uVar7 = __aullshr(bVar4,uVar5);
          }
          else {
            uVar7 = __allshr(bVar4,uVar5);
          }
          goto LAB_10001ab6;
        }
        if ((longlong)uVar7 <= (longlong)CONCAT44(local_c,uVar6)) goto LAB_10001ab3;
      }
      else {
        if (uVar1 == 0x5e) {
          uVar8 = CONCAT44(uVar5 ^ local_c,uVar2 ^ uVar6);
          goto LAB_10001aba;
        }
        if (uVar1 != 0x7c) {
          if (uVar1 == 0x7e) {
            uVar8 = CONCAT44(~uVar5,~uVar2);
          }
          goto LAB_10001aba;
        }
        if (hMem[1] != 0x7c) {
          uVar8 = CONCAT44(uVar5 | local_c,uVar2 | uVar6);
          goto LAB_10001aba;
        }
        if ((uVar7 == 0) && (uVar6 == 0 && local_c == 0)) goto LAB_10001ab3;
      }
LAB_10001a91:
      iVar3 = 1;
LAB_10001ab5:
      uVar7 = (ulonglong)iVar3;
    }
  }
LAB_10001ab6:
  uVar8 = uVar7;
LAB_10001aba:
  FUN_10001470((int)uVar8,(int)(uVar8 >> 0x20),local_4c);
  FUN_10001272(local_4c);
  GlobalFree(local_8);
  GlobalFree(hMem);
  return;
}



// ===== FUN_10001ae6 @ 10001ae6 (size 121) =====

ulonglong __cdecl FUN_10001ae6(int *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ulonglong uVar4;
  ushort local_104 [128];
  
  puVar3 = local_104;
  *param_1 = *param_1 + 2;
  puVar2 = (ushort *)*param_1;
  while (((((uVar1 = *puVar2, 0x60 < uVar1 && (uVar1 < 0x67)) || ((0x40 < uVar1 && (uVar1 < 0x47))))
          || ((((0x2f < uVar1 && (uVar1 < 0x3a)) || (uVar1 == 0x58)) ||
              ((uVar1 == 0x2d || (uVar1 == 0x78)))))) || (uVar1 == 0x7c))) {
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *param_1 = (int)puVar2;
  }
  *param_1 = *param_1 + -2;
  *puVar3 = 0;
  uVar4 = FUN_10001311(local_104);
  return uVar4;
}



// ===== FUN_10001b5f @ 10001b5f (size 1809) =====

int * FUN_10001b5f(void)

{
  WCHAR WVar1;
  WCHAR WVar2;
  int *piVar3;
  HGLOBAL hMem;
  byte bVar4;
  bool bVar5;
  LPCWSTR pWVar6;
  LPWSTR lpString1;
  WCHAR *hMem_00;
  uint uVar7;
  int *piVar8;
  int iVar9;
  HMODULE pHVar10;
  FARPROC pFVar11;
  LPCWSTR pWVar12;
  short *psVar13;
  int *hMem_01;
  int *piVar14;
  WCHAR *pWVar15;
  bool bVar16;
  ulonglong uVar17;
  short *psVar18;
  int local_30;
  int local_24;
  int local_20;
  LPCWSTR local_1c;
  int local_14;
  uint local_10;
  WCHAR *local_c;
  int local_8;
  
  local_20 = 0;
  local_24 = 0;
  local_10 = 0;
  local_8 = 0;
  bVar5 = false;
  hMem_01 = (int *)0x0;
  local_30 = 0;
  pWVar6 = (LPCWSTR)FUN_1000121b();
  lpString1 = (LPWSTR)FUN_1000121b();
  hMem_00 = (WCHAR *)FUN_10001243();
  local_1c = pWVar6;
  local_c = hMem_00;
  do {
    iVar9 = local_20;
    if ((local_20 != 0) && (hMem_01 == (int *)0x0)) break;
    WVar1 = *local_c;
    if (WVar1 == L'\0') {
      local_20 = -1;
LAB_10001c36:
      if (iVar9 == 0) {
        *local_1c = L'\0';
        if (hMem_01 == (int *)0x0) {
          hMem_01 = GlobalAlloc(0x40,0x1ca4);
          hMem_01[0x404] = 0;
          hMem_01[0x405] = 0;
        }
        *hMem_01 = local_24;
        *(WCHAR *)(hMem_01 + 2) = L'\0';
        *(WCHAR *)(hMem_01 + 0x202) = L'\0';
        hMem_01[0x402] = 0;
        hMem_01[0x403] = 0;
        hMem_01[1] = 0;
        if (local_24 == 0) {
          bVar16 = local_1c != pWVar6;
          local_1c = pWVar6;
          if (bVar16) {
            GlobalFree(hMem_01);
            uVar17 = FUN_10001311((ushort *)pWVar6);
            hMem_01 = (int *)uVar17;
            piVar8 = (int *)0x0;
            if (hMem_01 != (int *)0x0) {
              do {
                piVar14 = hMem_01;
                piVar3 = (int *)piVar14[0x728];
                hMem_01 = piVar14;
                if (piVar3 == (int *)0x0) break;
                hMem_01 = piVar3;
                piVar8 = piVar14;
              } while (piVar3 != (int *)0x0);
              if (piVar8 != (int *)0x0) {
                piVar8[0x728] = 0;
              }
              if ((hMem_01[0x404] & 8U) == 0) {
                hMem_01[0x404] = hMem_01[0x404] | 2;
              }
              else {
                hMem_01 = (int *)FUN_1000158f(hMem_01);
                hMem_01[0x404] = hMem_01[0x404] & 0xfffffff5;
              }
            }
          }
        }
        else {
          if (local_24 == 1) {
LAB_10001caf:
            lstrcpyW((LPWSTR)(hMem_01 + 2),lpString1);
          }
          else if (local_24 != 2) {
            local_1c = pWVar6;
            if (local_24 != 3) goto LAB_10001d9f;
            goto LAB_10001caf;
          }
          lstrcpyW((LPWSTR)(hMem_01 + 0x202),pWVar6);
          local_1c = pWVar6;
        }
      }
      else {
        local_1c = pWVar6;
        if (iVar9 == 1) {
          uVar7 = local_10;
          if (!bVar5) {
            uVar7 = local_10 - 1;
          }
          hMem_01[0x405] = uVar7;
        }
      }
      goto LAB_10001d9f;
    }
    if (WVar1 != L'#') {
      if (WVar1 == L'(') {
        local_20 = 1;
        local_8 = 0;
        local_10 = (local_24 == 3) + 1;
        local_14 = 0;
        bVar5 = false;
      }
      else if (WVar1 == L')') {
        local_20 = 2;
        local_8 = 0;
        local_14 = 0;
      }
      else {
        if (WVar1 != L'?') goto LAB_10001d31;
        local_20 = 3;
        local_8 = 1;
      }
      goto LAB_10001c36;
    }
    if (((local_c <= hMem_00) || (local_c[-1] != L':')) || (local_20 != 0)) {
      local_20 = 0;
      local_24 = 0;
      goto LAB_10001c36;
    }
LAB_10001d31:
    if (local_20 == 0) {
      if (WVar1 == L'*') {
        local_24 = 2;
        goto switchD_10001e9e_caseD_23;
      }
      if ((WVar1 == L'-') || (WVar1 == L':')) {
        if ((WVar1 == L'-') && (local_c[1] == L'>')) {
          local_24 = 3;
        }
        else {
          if ((local_c[1] != L':') || (WVar1 == L'-')) goto LAB_10002162;
          local_24 = 1;
        }
        local_c = local_c + 1;
        if (pWVar6 < local_1c) {
          *local_1c = L'\0';
          lstrcpyW(lpString1,pWVar6);
        }
        else {
          *lpString1 = L'\0';
        }
        goto switchD_10001e9e_caseD_23;
      }
LAB_10002162:
      *local_1c = WVar1;
      local_1c = local_1c + 1;
      goto LAB_10001d9f;
    }
    if (local_20 != 1) {
      if (local_20 == 2) {
        local_10 = 0;
        goto LAB_10001e87;
      }
      if (local_20 != 3) goto LAB_10002162;
      if ((ushort)WVar1 < 0x6f) {
        if (WVar1 == L'n') {
          uVar7 = 8;
        }
        else {
          if (WVar1 == L'!') {
            local_8 = -local_8;
            goto switchD_10001e9e_caseD_23;
          }
          if (WVar1 == L'2') {
            uVar7 = 0x100;
          }
          else if (WVar1 == L'c') {
            uVar7 = 1;
          }
          else {
            if (WVar1 != L'e') goto switchD_10001e9e_caseD_23;
            uVar7 = 0x20;
          }
        }
      }
      else if (WVar1 == L'r') {
        uVar7 = 4;
      }
      else if (WVar1 == L's') {
        uVar7 = 0x10;
      }
      else {
        if (WVar1 != L'u') goto switchD_10001e9e_caseD_23;
        uVar7 = 0x40;
      }
      if (local_8 == 1) {
        hMem_01[0x404] = hMem_01[0x404] | uVar7;
      }
      else {
        hMem_01[0x404] = hMem_01[0x404] & ~uVar7;
      }
      local_8 = 1;
      goto switchD_10001e9e_caseD_23;
    }
LAB_10001e87:
    psVar13 = (short *)0x0;
    bVar4 = 0;
    switch(WVar1) {
    case L'\"':
    case L'\'':
    case L'`':
      pWVar12 = pWVar6;
      pWVar15 = local_c;
      while( true ) {
        local_c = pWVar15 + 1;
        WVar2 = *local_c;
        if (((WVar2 == WVar1) && (pWVar15[2] != WVar1)) || (WVar2 == L'\0')) break;
        if (WVar2 == WVar1) {
          local_c = pWVar15 + 2;
        }
        *pWVar12 = *local_c;
        pWVar12 = pWVar12 + 1;
        pWVar15 = local_c;
      }
      *pWVar12 = L'\0';
      psVar13 = (short *)FUN_1000122c(pWVar6);
      goto LAB_10001f77;
    default:
      goto switchD_10001e9e_caseD_23;
    case L'&':
      local_8 = 1;
      goto switchD_10001e9e_caseD_23;
    case L'*':
      local_8 = -1;
      goto switchD_10001e9e_caseD_23;
    case L',':
      local_10 = local_10 + 1;
LAB_10001ecc:
      local_8 = 0;
      local_14 = 0;
      bVar5 = true;
      goto switchD_10001e9e_caseD_23;
    case L'-':
    case L'0':
    case L'1':
    case L'2':
    case L'3':
    case L'4':
    case L'5':
    case L'6':
    case L'7':
    case L'8':
    case L'9':
      if (local_14 == 0) {
        local_c = local_c + -1;
        psVar13 = (short *)FUN_1000121b();
        psVar18 = psVar13;
        uVar17 = FUN_10001ae6((int *)&local_c);
        FUN_10001470((int)uVar17,(int)(uVar17 >> 0x20),psVar18);
        goto LAB_10001f77;
      }
      goto switchD_10001e9e_caseD_23;
    case L'.':
      goto switchD_10001e9e_caseD_2e;
    case L'@':
      uVar7 = 7;
      break;
    case L'A':
    case L'a':
      psVar13 = (short *)0x19;
      goto LAB_10001f7f;
    case L'B':
      bVar4 = 1;
    case L'b':
      local_8 = 2;
      uVar7 = 1;
      break;
    case L'C':
    case L'c':
      psVar13 = (short *)0x15;
      goto LAB_10001f7f;
    case L'D':
    case L'd':
      psVar13 = (short *)0x16;
      goto LAB_10001f7f;
    case L'E':
    case L'e':
      psVar13 = (short *)0x18;
      goto LAB_10001f7f;
    case L'G':
      bVar4 = 1;
    case L'g':
      uVar7 = 5;
      break;
    case L'H':
      bVar4 = 1;
    case L'h':
      local_8 = 3;
      uVar7 = 1;
      break;
    case L'I':
    case L'P':
      bVar4 = 1;
    case L'i':
    case L'p':
      uVar7 = 1;
      break;
    case L'K':
      bVar4 = 1;
    case L'k':
      uVar7 = 6;
      break;
    case L'L':
      bVar4 = 1;
    case L'l':
      uVar7 = 2;
      break;
    case L'M':
    case L'm':
      uVar7 = 3;
      break;
    case L'O':
    case L'o':
      psVar13 = (short *)0x17;
      goto LAB_10001f7f;
    case L'R':
      uVar17 = FUN_10001ae6((int *)&local_c);
      psVar13 = (short *)((int)uVar17 + 1);
      if ((int)psVar13 < 0xb) {
        psVar13 = (short *)((int)uVar17 + 0xb);
      }
      goto LAB_10001f77;
    case L'S':
    case L's':
      psVar13 = (short *)0xffffffff;
      goto LAB_10001f7f;
    case L'T':
      bVar4 = 1;
    case L't':
      local_30 = local_30 + 1;
      uVar7 = 4;
      break;
    case L'V':
    case L'v':
      uVar7 = 0;
      break;
    case L'W':
      bVar4 = 1;
    case L'w':
      uVar7 = 4;
      break;
    case L'_':
      uVar7 = hMem_01[0x405];
      if ((int)local_10 < (int)uVar7) {
        local_10 = uVar7;
      }
      local_8 = 0;
      local_14 = 0;
      if (uVar7 != (local_24 == 3)) goto LAB_10001ecc;
      goto switchD_10001e9e_caseD_23;
    case L'r':
      uVar17 = FUN_10001ae6((int *)&local_c);
      psVar13 = (short *)((int)uVar17 + 1);
      goto LAB_10001f77;
    }
    iVar9 = (&DAT_1000405c)[uVar7];
    bVar5 = true;
    hMem_01[local_10 * 8 + 0x406] = -(uint)bVar4 & 0x8000 | uVar7;
    if ((local_8 < 0) || (iVar9 < 1)) {
      iVar9 = 1;
    }
    hMem_01[local_10 * 8 + 0x40a] = iVar9;
    if (local_8 == 1) {
      uVar17 = FUN_10001ae6((int *)&local_c);
      local_8 = (int)uVar17 + 1;
    }
    hMem_01[local_10 * 8 + 0x407] = local_8;
    hMem_01[(local_10 + 0x81) * 8] = 0;
    hMem_01[local_10 * 8 + 0x40c] = 0;
    hMem_01[local_10 * 8 + 0x40b] = 0;
LAB_10001f77:
    if (psVar13 != (short *)0x0) {
LAB_10001f7f:
      bVar5 = true;
      if (local_14 == 0) {
        hMem = (HGLOBAL)hMem_01[local_10 * 8 + 0x40c];
        if (((int)hMem < 0) || (0x19 < (int)hMem)) {
          GlobalFree(hMem);
        }
        hMem_01[local_10 * 8 + 0x40c] = (int)psVar13;
      }
      if (local_14 == 1) {
        hMem_01[local_10 * 8 + 0x40b] = (int)psVar13;
      }
switchD_10001e9e_caseD_2e:
      local_14 = local_14 + 1;
    }
switchD_10001e9e_caseD_23:
    local_1c = pWVar6;
LAB_10001d9f:
    local_c = local_c + 1;
  } while (local_20 != -1);
  GlobalFree(hMem_00);
  GlobalFree(pWVar6);
  GlobalFree(lpString1);
  if (hMem_01 == (int *)0x0) {
    return (int *)0x0;
  }
  if (hMem_01[0x403] != 0) {
    return hMem_01;
  }
  iVar9 = *hMem_01;
  if (iVar9 == 1) {
    pWVar6 = (LPCWSTR)(hMem_01 + 2);
    if (*pWVar6 == L'\0') {
      uVar17 = FUN_10001311((ushort *)(hMem_01 + 0x202));
      iVar9 = (int)uVar17;
      hMem_01[0x403] = iVar9;
    }
    else {
      pHVar10 = GetModuleHandleW(pWVar6);
      hMem_01[0x402] = (int)pHVar10;
      if (pHVar10 == (HMODULE)0x0) {
        pHVar10 = LoadLibraryW(pWVar6);
        hMem_01[0x402] = (int)pHVar10;
        if (pHVar10 == (HMODULE)0x0) goto LAB_10002265;
      }
      pWVar6 = (LPCWSTR)(hMem_01 + 0x202);
      pFVar11 = FUN_1000161d((HMODULE)hMem_01[0x402],pWVar6);
      hMem_01[0x403] = (int)pFVar11;
      if ((pFVar11 == (FARPROC)0x0) && (*pWVar6 == L'#')) {
        uVar17 = FUN_10001311((ushort *)((int)hMem_01 + 0x80a));
        if (((uint)uVar17 != 0) && ((uVar17 & 0xffff0000) == 0)) {
          pFVar11 = GetProcAddress((HMODULE)hMem_01[0x402],(LPCSTR)((uint)uVar17 & 0xffff));
          hMem_01[0x403] = (int)pFVar11;
        }
      }
      if ((local_30 == 0) && (hMem_01[0x403] != 0)) {
        return hMem_01;
      }
      iVar9 = lstrlenW(pWVar6);
      (pWVar6 + iVar9)[0] = L'W';
      (pWVar6 + iVar9)[1] = L'\0';
      pFVar11 = FUN_1000161d((HMODULE)hMem_01[0x402],pWVar6);
      if (pFVar11 != (FARPROC)0x0) goto LAB_10002187;
      iVar9 = hMem_01[0x403];
    }
    if (iVar9 != 0) {
      return hMem_01;
    }
LAB_10002265:
    hMem_01[1] = -1;
  }
  else {
    if (iVar9 == 2) {
      if (*(ushort *)(hMem_01 + 0x202) == 0) {
        return hMem_01;
      }
      uVar17 = FUN_10001311((ushort *)(hMem_01 + 0x202));
      pFVar11 = (FARPROC)uVar17;
    }
    else {
      if (iVar9 != 3) {
        return hMem_01;
      }
      uVar17 = FUN_10001311((ushort *)(hMem_01 + 2));
      piVar8 = (int *)uVar17;
      hMem_01[0x402] = (int)piVar8;
      if (piVar8 == (int *)0x0) goto LAB_10002265;
      hMem_01[0x413] = 0;
      iVar9 = FUN_1000122c((LPCWSTR)(hMem_01 + 2));
      hMem_01[0x414] = iVar9;
      hMem_01[0x40f] = 0;
      hMem_01[0x412] = 1;
      hMem_01[0x40e] = 1;
      iVar9 = *piVar8;
      uVar17 = FUN_10001311((ushort *)(hMem_01 + 0x202));
      pFVar11 = *(FARPROC *)(iVar9 + (int)uVar17 * 4);
    }
LAB_10002187:
    hMem_01[0x403] = (int)pFVar11;
  }
  return hMem_01;
}



// ===== FUN_10002352 @ 10002352 (size 66) =====

void __cdecl FUN_10002352(int param_1)

{
  HGLOBAL pvVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x1020);
  iVar3 = *(int *)(param_1 + 0x1014) + 1;
  do {
    if ((*piVar2 == 0) && (piVar2[-1] < 0)) {
      pvVar1 = GlobalAlloc(0x40,(&DAT_1000405c)[*(byte *)(piVar2 + -2)] << 2);
      *piVar2 = (int)pvVar1;
    }
    piVar2 = piVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



// ===== FUN_10002394 @ 10002394 (size 376) =====

void __cdecl FUN_10002394(int param_1)

{
  ulonglong *puVar1;
  short *psVar2;
  short *psVar3;
  undefined1 *puVar4;
  LPCWSTR lpsz;
  LPSTR lpMultiByteStr;
  LPCLSID pclsid;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint local_4;
  
  local_4 = (uint)(0 < *(int *)(param_1 + 0x1014));
  do {
    puVar4 = (undefined1 *)(local_4 * 0x20 + 0x1018 + param_1);
    lpsz = *(LPCWSTR *)(puVar4 + 0x18);
    if ((lpsz == (LPCWSTR)0x0) || (lpsz == (LPCWSTR)0x1a)) {
      lpsz = (LPCWSTR)FUN_1000122c((LPCWSTR)&DAT_10005044);
    }
    else if (lpsz == (LPCWSTR)0xffffffff) {
      lpsz = (LPCWSTR)FUN_10001243();
    }
    else if (((int)lpsz < 1) || (0x19 < (int)lpsz)) {
      *(undefined4 *)(puVar4 + 0x18) = 0x1a;
    }
    else {
      lpsz = (LPCWSTR)FUN_100012ba((int)lpsz - 1);
    }
    puVar1 = (ulonglong *)(puVar4 + 8);
    puVar6 = puVar1;
    if (*(int *)(puVar4 + 4) < 0) {
      puVar6 = *(ulonglong **)puVar1;
    }
    *(undefined4 *)(puVar4 + 0x1c) = 0;
    switch(*puVar4) {
    case 0:
      *(int *)puVar1 = 0;
      break;
    case 1:
      uVar7 = FUN_10001311((ushort *)lpsz);
      iVar5 = (int)uVar7;
      goto LAB_1000244c;
    case 2:
      uVar7 = FUN_10001311((ushort *)lpsz);
      *puVar6 = uVar7;
      break;
    case 3:
      lpMultiByteStr = GlobalAlloc(0x40,DAT_1000506c);
      *(LPSTR *)(puVar4 + 0x1c) = lpMultiByteStr;
      *(LPSTR *)puVar6 = lpMultiByteStr;
      WideCharToMultiByte(0,0,lpsz,DAT_1000506c,lpMultiByteStr,DAT_1000506c,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      break;
    case 4:
      iVar5 = FUN_1000122c(lpsz);
      *(int *)(puVar4 + 0x1c) = iVar5;
LAB_1000244c:
      *(int *)puVar6 = iVar5;
      break;
    case 5:
      pclsid = GlobalAlloc(0x40,0x10);
      *(LPCLSID *)(puVar4 + 0x1c) = pclsid;
      *(LPCLSID *)puVar6 = pclsid;
      CLSIDFromString(lpsz,pclsid);
      break;
    case 6:
      if (*lpsz != L'\0') {
        uVar7 = FUN_10001311((ushort *)lpsz);
        iVar5 = FUN_100026b8((int)uVar7);
        *(int *)puVar1 = iVar5;
      }
      break;
    case 7:
      psVar3 = (short *)(DAT_10005074 + (*(int *)(puVar4 + 0x18) + -1) * DAT_1000506c * 2);
      psVar2 = psVar3 + 0xc;
      *(short **)puVar1 = psVar2;
      FUN_10001470((int)psVar2,(int)psVar2 >> 0x1f,psVar3);
    }
    GlobalFree(lpsz);
    if (local_4 == 0) {
      return;
    }
    if (local_4 == *(uint *)(param_1 + 0x1014)) {
      local_4 = 0;
    }
    else {
      local_4 = local_4 + 1;
    }
  } while( true );
}



// ===== FUN_1000252c @ 1000252c (size 61) =====

void __cdecl FUN_1000252c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1014);
  if (-1 < iVar2) {
    puVar1 = (undefined4 *)((iVar2 + 0x81) * 0x20 + param_1);
    iVar2 = iVar2 + 1;
    do {
      if (((HGLOBAL)*puVar1 != (HGLOBAL)0x0) && ((int)puVar1[-1] < 0)) {
        GlobalFree((HGLOBAL)*puVar1);
        *puVar1 = 0;
      }
      puVar1 = puVar1 + -8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



// ===== FUN_10002569 @ 10002569 (size 303) =====

void __cdecl FUN_10002569(int *param_1)

{
  LPWSTR lpsz;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  lpsz = (LPWSTR)FUN_1000121b();
  iVar4 = param_1[0x405];
  puVar5 = (uint *)(param_1 + (iVar4 + 0x81) * 8);
  do {
    uVar3 = puVar5[-1];
    puVar1 = puVar5;
    if ((int)uVar3 < 0) {
      puVar1 = (uint *)*puVar5;
    }
    switch((uint)(byte)puVar5[-2]) {
    case 0:
      *lpsz = L'\0';
      break;
    case 1:
    case 7:
      uVar2 = *puVar1;
      if (0 < (int)uVar3) {
        uVar3 = *(int *)(&DAT_1000407c + (uint)(byte)puVar5[-2] * 4) * (uVar3 - 1);
        uVar2 = uVar2 & *(uint *)(&DAT_1000409c + (-(uint)(uVar3 < 4) & uVar3) * 4);
      }
      goto LAB_10002632;
    case 2:
      FUN_10001470(*puVar1,puVar1[1],lpsz);
      break;
    case 3:
      MultiByteToWideChar(0,0,(LPCSTR)*puVar1,DAT_1000506c,lpsz,DAT_1000506c + -1);
      lpsz[DAT_1000506c + -1] = L'\0';
      break;
    case 4:
      lstrcpynW(lpsz,(LPCWSTR)*puVar1,DAT_1000506c);
      break;
    case 5:
      StringFromGUID2((GUID *)*puVar1,lpsz,DAT_1000506c);
      break;
    case 6:
      uVar2 = *puVar5;
LAB_10002632:
      wsprintfW(lpsz,(LPCWSTR)&DAT_10005000,uVar2);
    }
    if (((HGLOBAL)puVar5[5] != (HGLOBAL)0x0) && ((*param_1 != 2 || (0 < (int)puVar5[-1])))) {
      GlobalFree((HGLOBAL)puVar5[5]);
    }
    uVar3 = puVar5[3];
    if (uVar3 != 0) {
      if (uVar3 == 0xffffffff) {
        FUN_10001272(lpsz);
      }
      else if (0 < (int)uVar3) {
        FUN_100012e1(uVar3 - 1,lpsz);
      }
    }
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -8;
    if (iVar4 < 0) {
      GlobalFree(lpsz);
      return;
    }
  } while( true );
}



// ===== FUN_100026b8 @ 100026b8 (size 108) =====

undefined4 __cdecl FUN_100026b8(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0x100c) == 0) {
    DAT_10005050 = DAT_10005050 + 1;
    iVar1 = DAT_10005050;
    *(uint *)(param_1 + 0x1010) = *(uint *)(param_1 + 0x1010) | 2;
    *(int *)(param_1 + 0x1c98) = iVar1;
    puVar2 = VirtualAlloc((LPVOID)0x0,0x10,0x1000,0x40);
    *(undefined1 **)(param_1 + 0x100c) = puVar2;
    *(undefined1 **)(puVar2 + 0xc) = DAT_10005060;
    DAT_10005060 = puVar2;
    *puVar2 = 0xb8;
    *(int *)(puVar2 + 1) = param_1;
    puVar2[5] = 0xe9;
    *(int *)(puVar2 + 6) = 0x10002c53 - (int)(puVar2 + 6);
  }
  return *(undefined4 *)(param_1 + 0x100c);
}



// ===== FUN_10002724 @ 10002724 (size 538) =====

void __cdecl FUN_10002724(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  HGLOBAL pvVar6;
  byte *pbVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int local_1c;
  uint *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = 0;
  local_1c = *(int *)(param_1 + 0x1014);
  uVar2 = *(uint *)(param_1 + 0x1010) & 0x100;
  if (local_1c != 0) {
    pbVar7 = (byte *)(param_1 + 0x1038);
    local_10 = (uint *)local_1c;
    do {
      if ((*pbVar7 == 5) && (*(int *)(pbVar7 + 4) == 0)) {
        pbVar7[4] = 0x11;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
      }
      if (*(int *)(pbVar7 + 4) < 1) {
        iVar9 = *(int *)(pbVar7 + 0x10) << 2;
      }
      else {
        iVar9 = *(int *)(&DAT_1000407c + (uint)*pbVar7 * 4) * (*(int *)(pbVar7 + 4) + -1);
      }
      if (((uVar2 != 0) && (iVar3 = FUN_1000293e(pbVar7), iVar3 != 0)) &&
         (uVar4 = FUN_1000293e(pbVar7), local_8 % uVar4 != 0)) {
        iVar3 = FUN_1000293e(pbVar7);
        iVar5 = FUN_1000293e(pbVar7);
        local_8 = iVar3 + -1 + local_8 & ~(iVar5 - 1U);
      }
      local_8 = local_8 + iVar9;
      pbVar7 = pbVar7 + 0x20;
      local_10 = (uint *)((int)local_10 + -1);
    } while (local_10 != (uint *)0x0);
  }
  if (*(HGLOBAL *)(param_1 + 0x100c) == (HGLOBAL)0x0) {
    pvVar6 = GlobalAlloc(0x40,local_8);
    *(HGLOBAL *)(param_1 + 0x100c) = pvVar6;
  }
  else if (local_8 == 0) {
    local_8 = GlobalSize(*(HGLOBAL *)(param_1 + 0x100c));
  }
  local_c = *(undefined1 **)(param_1 + 0x100c);
  if (local_1c != 0) {
    puVar8 = (uint *)(param_1 + 0x1040);
    do {
      bVar1 = false;
      local_10 = puVar8;
      if ((int)puVar8[-1] < 1) {
        uVar10 = puVar8[2] << 2;
LAB_10002890:
        if (local_10 != (uint *)0x0) {
          if (((uVar2 != 0) && (iVar9 = FUN_1000293e((byte *)(puVar8 + -2)), iVar9 != 0)) &&
             (uVar4 = FUN_1000293e((byte *)(puVar8 + -2)), (uint)local_c % uVar4 != 0)) {
            iVar9 = FUN_1000293e((byte *)(puVar8 + -2));
            iVar3 = FUN_1000293e((byte *)(puVar8 + -2));
            local_c = (undefined1 *)((uint)(local_c + iVar9 + -1) & ~(iVar3 - 1U));
          }
          if ((puVar8[4] != 0) || (bVar1)) {
            FUN_10001563(local_c,(int)local_10,uVar10);
          }
          if (puVar8[3] != 0) {
            FUN_10001563((undefined1 *)local_10,(int)local_c,uVar10);
          }
        }
      }
      else {
        uVar4 = (uint)(byte)puVar8[-2];
        uVar10 = *(int *)(&DAT_1000407c + uVar4 * 4) * (puVar8[-1] - 1);
        if (uVar4 == 1) {
LAB_1000287d:
          *puVar8 = *puVar8 & *(uint *)(&DAT_1000409c + (-(uint)(uVar10 < 4) & uVar10) * 4);
          goto LAB_10002890;
        }
        if (uVar4 == 2) {
          puVar8[1] = 0;
          *puVar8 = local_8;
          bVar1 = true;
          goto LAB_1000287d;
        }
        if ((2 < uVar4) && (uVar4 < 6)) {
          local_10 = (uint *)*puVar8;
          goto LAB_10002890;
        }
      }
      local_c = local_c + uVar10;
      puVar8 = puVar8 + 8;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *(undefined4 *)(param_1 + 0x1020) = *(undefined4 *)(param_1 + 0x100c);
  return;
}



// ===== FUN_1000293e @ 1000293e (size 85) =====

int __cdecl FUN_1000293e(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if ((param_1[1] & 0x80) == 0) {
    return 0;
  }
  if (uVar1 == 4 || uVar1 == 3) {
    return *(int *)(&DAT_1000407c + uVar1 * 4);
  }
  if (uVar1 == 5) {
    return 0x10;
  }
  if (*(int *)(param_1 + 4) < 1) {
    return *(int *)(param_1 + 0x10) << 2;
  }
  return *(int *)(&DAT_1000407c + uVar1 * 4) * (*(int *)(param_1 + 4) + -1);
}



// ===== entry @ 10002993 (size 86) =====

undefined4 entry(undefined4 param_1,int param_2)

{
  DAT_10005048 = param_1;
  if (param_2 == 1) {
    VirtualProtect(&LAB_1000505c,4,0x40,&DAT_1000504c);
    LAB_1000505c = 0xc2;
    DAT_1000504c = 0;
    DAT_10005054 = 0;
    DAT_10005068 = 0;
    DAT_10005058 = 0;
    DAT_10005050 = 0;
    DAT_10005060 = 0;
    DAT_1000505e = 0;
  }
  return 1;
}



// ===== FUN_100029e9 @ 100029e9 (size 6) =====

undefined4 FUN_100029e9(void)

{
  return 0x10000;
}



// ===== FUN_100029ef @ 100029ef (size 14) =====

uint __cdecl FUN_100029ef(int param_1)

{
  return *(uint *)(param_1 + 0x1010) & 0x10;
}



// ===== FUN_100029fd @ 100029fd (size 14) =====

uint __cdecl FUN_100029fd(int param_1)

{
  return *(uint *)(param_1 + 0x1010) & 1;
}



// ===== FUN_10002a0b @ 10002a0b (size 6) =====

undefined4 FUN_10002a0b(void)

{
  return 0x100c;
}



// ===== FUN_10002a11 @ 10002a11 (size 6) =====

undefined4 FUN_10002a11(void)

{
  return 0x1ca0;
}



// ===== FUN_10002a17 @ 10002a17 (size 6) =====

undefined4 FUN_10002a17(void)

{
  return 0x1c9c;
}



// ===== FUN_10002a1d @ 10002a1d (size 11) =====

undefined4 __cdecl FUN_10002a1d(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1014);
}



// ===== FUN_10002a28 @ 10002a28 (size 6) =====

undefined4 FUN_10002a28(void)

{
  return 0x1018;
}



// ===== FUN_10002a2e @ 10002a2e (size 4) =====

undefined4 FUN_10002a2e(void)

{
  return 0x20;
}



// ===== FUN_10002a32 @ 10002a32 (size 4) =====

undefined4 FUN_10002a32(void)

{
  return 0x10;
}



// ===== FUN_10002a36 @ 10002a36 (size 4) =====

undefined4 FUN_10002a36(void)

{
  return 8;
}



// ===== FUN_10002a3a @ 10002a3a (size 4) =====

undefined4 FUN_10002a3a(void)

{
  return 0xc;
}



// ===== FUN_10002a3e @ 10002a3e (size 12) =====

void __cdecl FUN_10002a3e(int param_1)

{
  *(byte *)(param_1 + 0x1010) = *(byte *)(param_1 + 0x1010) | 0x80;
  return;
}



// ===== FUN_10002a4a @ 10002a4a (size 12) =====

void __cdecl FUN_10002a4a(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}



// ===== FUN_10002a56 @ 10002a56 (size 60) =====

int FUN_10002a56(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_10002a92(param_1);
  if (uVar1 != 0) {
    DAT_10005068 = GetLastError();
  }
  *(undefined4 *)(param_1 + 0x1020) = param_2;
  *(undefined4 *)(param_1 + 0x1024) = param_3;
  FUN_10002aa0(param_1);
  return param_1;
}



// ===== FUN_10002a92 @ 10002a92 (size 14) =====

uint __cdecl FUN_10002a92(int param_1)

{
  return *(uint *)(param_1 + 0x1010) & 0x20;
}



// ===== FUN_10002aa0 @ 10002aa0 (size 9) =====

void __cdecl FUN_10002aa0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// ===== FUN_10002aac @ 10002aac (size 427) =====

undefined4 __cdecl FUN_10002aac(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  puVar5 = DAT_10005054;
  if ((DAT_10005050 != 0) && (uVar1 = FUN_100029ef((int)param_1), puVar5 = DAT_10005054, uVar1 == 0)
     ) {
    DAT_10005054 = &stack0xffffffe8;
    puVar5 = &stack0xffffffe8;
    if (DAT_1000504c == (undefined1 *)0x0) {
      FUN_100029e9();
      FUN_10002fe0();
      DAT_1000504c = &stack0xffffffe8;
      puVar5 = DAT_10005054;
    }
  }
  DAT_10005054 = puVar5;
  iVar2 = FUN_10002a1d((int)param_1);
  if (0 < iVar2) {
    FUN_10002a28();
    FUN_10002a2e();
    FUN_10002a32();
    FUN_10002a36();
    FUN_10002a3a();
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_10002a11();
  *(undefined1 **)(param_1 + iVar2) = DAT_10005058;
  DAT_10005058 = param_1;
  iVar2 = FUN_10002a0b();
  uVar6 = (**(code **)(param_1 + iVar2))();
  DAT_10005038 = (undefined4)((ulonglong)uVar6 >> 0x20);
  DAT_10005034 = (undefined4)uVar6;
  puVar5 = &stack0xfffffffc;
  if (DAT_10005050 != 0) {
    puVar7 = DAT_10005058;
    uVar1 = FUN_100029ef((int)DAT_10005058);
    puVar5 = &stack0xfffffffc;
    uVar6 = CONCAT44(DAT_10005038,DAT_10005034);
    if (uVar1 == 0) {
      puVar5 = puVar7;
      DAT_1000504c = &stack0xffffffe8;
      uVar6 = CONCAT44(DAT_10005038,DAT_10005034);
    }
  }
  DAT_10005038 = (undefined4)((ulonglong)uVar6 >> 0x20);
  DAT_10005034 = (undefined4)uVar6;
  *(undefined1 **)(puVar5 + 8) = DAT_10005058;
  iVar2 = FUN_10002a11();
  DAT_10005058 = *(undefined1 **)(iVar2 + extraout_EDX);
  iVar2 = extraout_EDX;
  uVar1 = FUN_100029fd(extraout_EDX);
  if ((uVar1 != 0) && (iVar2 = FUN_10002a1d(iVar2), 0 < iVar2)) {
    iVar3 = FUN_10002a28();
    iVar4 = iVar3 + *(int *)(puVar5 + 8) + *(int *)(puVar5 + -4);
    iVar3 = FUN_10002a32();
    if ((DAT_10005050 < 1) || (uVar1 = FUN_100029ef(*(int *)(puVar5 + 8)), uVar1 != 0)) {
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      do {
        DAT_1000504c = DAT_1000504c + *(int *)(iVar3 + iVar4) * 4;
        iVar4 = iVar4 + *(int *)(puVar5 + -4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (DAT_10005058 == (undefined1 *)0x0) {
    DAT_1000504c = (undefined1 *)0x0;
  }
  FUN_10002a56(*(int *)(puVar5 + 8),DAT_10005034,DAT_10005038);
  return *(undefined4 *)(puVar5 + 8);
}



// ===== FUN_10002c57 @ 10002c57 (size 224) =====

int FUN_10002c57(void)

{
  int iVar1;
  undefined4 *puVar2;
  HGLOBAL in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_10;
  undefined4 *local_c;
  
  local_c = (undefined4 *)&stack0x00000004;
  iVar3 = FUN_10002a11();
  for (; *(int *)(iVar3 + (int)in_EAX) != 0; in_EAX = *(HGLOBAL *)(iVar3 + (int)in_EAX)) {
  }
  iVar4 = FUN_1000158f(in_EAX);
  *(int *)(iVar3 + (int)in_EAX) = iVar4;
  FUN_10002a3e(iVar4);
  local_10 = 0;
  iVar3 = FUN_10002a1d(iVar4);
  if (0 < iVar3) {
    iVar5 = FUN_10002a2e();
    iVar6 = FUN_10002a28();
    iVar7 = iVar6 + iVar4 + iVar5;
    iVar6 = FUN_10002a32();
    iVar8 = FUN_10002a36();
    iVar9 = FUN_10002a3a();
    do {
      *(undefined4 *)(iVar8 + iVar7) = *local_c;
      iVar1 = local_10 + 4;
      puVar2 = local_c + 1;
      if (*(int *)(iVar6 + iVar7) == 2) {
        *(undefined4 *)(iVar9 + iVar7) = local_c[1];
        iVar1 = local_10 + 8;
        puVar2 = local_c + 2;
      }
      local_c = puVar2;
      local_10 = iVar1;
      iVar7 = iVar7 + iVar5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_10002a17();
  *(int *)(iVar3 + iVar4) = local_10;
  FUN_10002a4a(iVar4);
  DAT_1000504c = &stack0xffffffdc;
  return iVar4;
}



// ===== FUN_10002d37 @ 10002d37 (size 122) =====

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d37(HGLOBAL param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x10002d42;
  iVar1 = FUN_10002a28();
  puStack_14 = (undefined1 *)(iVar1 + (int)param_1);
  iVar1 = FUN_10002a36();
  FUN_10002a3a();
  puStack_14 = *(undefined1 **)(puStack_14 + iVar1);
  uVar2 = FUN_100029fd((int)param_1);
  if (uVar2 == 0) {
    iVar1 = FUN_10002a17();
    DAT_1000505d = *(undefined1 *)(iVar1 + (int)param_1);
  }
  else {
    DAT_1000505d = 0;
  }
  _DAT_10005064 = (code *)&LAB_1000505c;
  GlobalFree(param_1);
  DAT_10005054 = &puStack_14;
  puStack_14 = &stack0xfffffffc;
                    /* WARNING: Could not recover jumptable at 0x10002dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10005064)();
  return;
}



// ===== __allmul @ 10002dc0 (size 52) =====

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



// ===== __alldiv @ 10002e00 (size 170) =====

/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

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



// ===== __allrem @ 10002eb0 (size 178) =====

/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar4 = param_1;
  uVar3 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_10002f5d;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT14((uVar8 & 1) != 0,uVar4) >> 1);
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_10002f5d;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_10002f5d:
  return CONCAT44(iVar6,iVar5);
}



// ===== __allshl @ 10002f70 (size 31) =====

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

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



// ===== __allshr @ 10002f90 (size 33) =====

/* Library Function - Single Match
    __allshr
   
   Library: Visual Studio */

undefined8 __fastcall __allshr(byte param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_1) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_1 & 0x1f));
}



// ===== __aullshr @ 10002fc0 (size 31) =====

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio */

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



// ===== FUN_10002fe0 @ 10002fe0 (size 47) =====

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10002fe0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



// decompiled 61 ok, 0 failed, 61 total
