// Program: nsis-setup-stub.exe

// ===== FUN_00401000 @ 00401000 (size 381) =====

LRESULT FUN_00401000(HWND param_1,UINT param_2,WPARAM param_3,int param_4)

{
  int iVar1;
  LONG LVar2;
  LRESULT LVar3;
  HDC hDC;
  HBRUSH hbr;
  HFONT h;
  HGDIOBJ h_00;
  int iVar4;
  tagPAINTSTRUCT local_60;
  tagRECT local_20;
  LOGBRUSH local_10;
  
  iVar1 = DAT_0047aef4;
  if (param_2 == 0xf) {
    hDC = BeginPaint(param_1,&local_60);
    local_10.lbStyle = 0;
    GetClientRect(param_1,&local_20);
    LVar2 = local_20.bottom;
    local_20.bottom = 0;
    for (; local_20.top < LVar2; local_20.top = local_20.top + 4) {
      iVar4 = LVar2 - local_20.top;
      local_10.lbColor =
           (uint)CONCAT11((char)((int)((uint)*(byte *)(iVar1 + 0x52) * iVar4 +
                                      (uint)*(byte *)(iVar1 + 0x56) * local_20.top) / LVar2),
                          (char)((int)((uint)*(byte *)(iVar1 + 0x51) * iVar4 +
                                      (uint)*(byte *)(iVar1 + 0x55) * local_20.top) / LVar2)) << 8 |
           (int)((uint)*(byte *)(iVar1 + 0x50) * iVar4 +
                (uint)*(byte *)(iVar1 + 0x54) * local_20.top) / LVar2 & 0xffU;
      hbr = CreateBrushIndirect(&local_10);
      local_20.bottom = local_20.bottom + 4;
      FillRect(hDC,&local_20,hbr);
      DeleteObject(hbr);
    }
    if (*(int *)(iVar1 + 0x58) != -1) {
      h = CreateFontIndirectW(*(LOGFONTW **)(iVar1 + 0x34));
      if (h != (HFONT)0x0) {
        local_20.left = 0x10;
        local_20.top = 8;
        SetBkMode(hDC,1);
        SetTextColor(hDC,*(COLORREF *)(iVar1 + 0x58));
        h_00 = SelectObject(hDC,h);
        DrawTextW(hDC,(LPCWSTR)&DAT_00472ee0,-1,&local_20,0x820);
        SelectObject(hDC,h_00);
        DeleteObject(h);
      }
    }
    EndPaint(param_1,&local_60);
    LVar3 = 0;
  }
  else {
    if (param_2 == 0x46) {
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x10;
      *(undefined4 *)(param_4 + 4) = DAT_0047aee8;
    }
    LVar3 = DefWindowProcW(param_1,param_2,param_3,param_4);
  }
  return LVar3;
}



// ===== FUN_0040117d @ 0040117d (size 114) =====

void FUN_0040117d(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 * 0x4018 + 8 + DAT_0047af28);
  if ((uVar1 & 2) != 0) {
    uVar4 = param_1 + 1;
    if (uVar4 < DAT_0047af2c) {
      puVar3 = (uint *)(uVar4 * 0x4018 + 8 + DAT_0047af28);
      iVar5 = 0;
      do {
        uVar2 = *puVar3;
        if ((uVar2 & 2) == 0) {
          if ((uVar2 & 4) == 0) {
            iVar6 = iVar5;
            if ((uVar2 & 0x10) == 0) {
              *puVar3 = (uVar2 ^ uVar1) & 1 ^ uVar2;
            }
          }
          else {
            iVar6 = iVar5 + -1;
            if (iVar5 == 0) {
              return;
            }
          }
        }
        else {
          iVar6 = iVar5 + 1;
        }
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 0x1006;
        iVar5 = iVar6;
      } while (uVar4 < DAT_0047af2c);
    }
  }
  return;
}



// ===== FUN_004011ef @ 004011ef (size 170) =====

uint FUN_004011ef(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar2 = DAT_0047af28;
  iVar5 = param_1 * 0x4018 + DAT_0047af28;
  local_8 = 0;
  local_c = 0;
  if (((*(uint *)(iVar5 + 8) & 2) != 0) && (param_2 != 0)) {
    param_1 = param_1 + 1;
    *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) & 0xffffffbe;
  }
  if (param_1 < DAT_0047af2c) {
    do {
      puVar1 = (uint *)(param_1 * 0x4018 + 8 + iVar2);
      uVar3 = param_1 + 1;
      uVar4 = *puVar1;
      if ((uVar4 & 2) != 0) {
        uVar3 = FUN_004011ef(param_1,1);
        uVar4 = *puVar1;
      }
      if ((uVar4 & 4) != 0) {
        if (local_8 == 0) {
          return uVar3;
        }
        if (local_c != 0) {
          *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 0x40;
          return uVar3;
        }
        *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) & 0xffffff7f | 1;
        return uVar3;
      }
      if ((uVar4 & 0x40) != 0) {
        local_8 = local_8 + 1;
      }
      if ((uVar4 & 1) == 0) {
        local_c = local_c + 1;
      }
      else {
        local_8 = local_8 + 1;
      }
      param_1 = uVar3;
    } while (uVar3 < DAT_0047af2c);
  }
  return 0;
}



// ===== FUN_00401299 @ 00401299 (size 73) =====

void FUN_00401299(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1 < 0x20) && (DAT_0047af2c != 0)) {
    puVar2 = (uint *)(DAT_0047af28 + 8);
    do {
      uVar1 = *puVar2;
      if ((uVar1 & 6) == 0) {
        if ((puVar2[-1] & 1 << ((byte)param_1 & 0x1f)) == 0) {
          uVar1 = uVar1 & 0xfffffffe;
        }
        else {
          uVar1 = uVar1 | 1;
        }
        *puVar2 = uVar1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x1006;
    } while (uVar3 < DAT_0047af2c);
  }
  return;
}



// ===== FUN_004012e2 @ 004012e2 (size 139) =====

uint FUN_004012e2(int param_1)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  int *local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = (int *)(DAT_0047aef4 + 0x94);
  do {
    uVar1 = 0;
    if (*local_c != 0) {
      bVar3 = DAT_0047af2c == 0;
      if (DAT_0047af2c != 0) {
        puVar2 = (uint *)(DAT_0047af28 + 8);
        do {
          if (((*puVar2 & 6) == 0) &&
             (((param_1 == 0 || (*(int *)(param_1 + uVar1 * 4) != 0)) &&
              ((puVar2[-1] & 1 << ((byte)local_8 & 0x1f)) != (*puVar2 & 1) << ((byte)local_8 & 0x1f)
              )))) break;
          uVar1 = uVar1 + 1;
          puVar2 = puVar2 + 0x1006;
        } while (uVar1 < DAT_0047af2c);
        bVar3 = uVar1 == DAT_0047af2c;
      }
      if (bVar3) {
        return local_8;
      }
    }
    local_8 = local_8 + 1;
    local_c = local_c + 1;
    if (0x1f < local_8) {
      return local_8;
    }
  } while( true );
}



// ===== FUN_0040136d @ 0040136d (size 28) =====

void FUN_0040136d(int param_1)

{
  if (param_1 < 0) {
    FUN_0040621a(&DAT_0047b000 + (param_1 + 1) * -0x4000);
  }
  return;
}



// ===== FUN_00401389 @ 00401389 (size 130) =====

undefined4 FUN_00401389(int param_1,HWND param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  WPARAM wParam;
  LPARAM lParam;
  
  while ((-1 < param_1 && (piVar1 = (int *)(param_1 * 0x1c + DAT_0047af30), *piVar1 != 1))) {
    iVar2 = FUN_00401434(piVar1);
    if (iVar2 == 0x7fffffff) {
      return 0x7fffffff;
    }
    iVar2 = FUN_0040136d(iVar2);
    if (iVar2 == 0) {
      iVar3 = 1;
      iVar2 = param_1 + 1;
    }
    else {
      iVar2 = iVar2 + -1;
      iVar3 = iVar2 - param_1;
    }
    param_1 = iVar2;
    if (param_2 != (HWND)0x0) {
      DAT_00472ecc = DAT_00472ecc + iVar3;
      lParam = 0;
      wParam = MulDiv(DAT_00472ecc,30000,DAT_00472eb4);
      SendMessageW(param_2,0x402,wParam,lParam);
    }
  }
  return 0;
}



// ===== FUN_0040140b @ 0040140b (size 24) =====

void FUN_0040140b(int param_1)

{
  FUN_00401389(*(undefined4 *)(DAT_0047aef4 + 0x6c + param_1 * 4),0);
  return;
}



// ===== FUN_00401423 @ 00401423 (size 17) =====

void FUN_00401423(undefined4 param_1)

{
  FUN_00405322(param_1,&DAT_0040e5d0);
  return;
}



// ===== FUN_00401434 @ 00401434 (size 5795) =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00401434(HWND param_1)

{
  short sVar1;
  LPWSTR pWVar2;
  LPWSTR pWVar3;
  uint uVar4;
  HWND pHVar5;
  LRESULT LVar6;
  HGDIOBJ ho;
  HDC hdc;
  short *psVar7;
  short *psVar8;
  SIZE_T dwBytes;
  HRESULT HVar9;
  undefined *puVar10;
  LPCWSTR lpFileName;
  LPCWSTR pWVar11;
  DWORD DVar12;
  HKEY pHVar13;
  LSTATUS LVar14;
  undefined4 uVar15;
  BOOL BVar16;
  int iVar17;
  HANDLE pvVar18;
  code *pcVar19;
  HGLOBAL hMem;
  int *piVar20;
  HWND pHVar21;
  byte bVar22;
  int iVar23;
  LPCWSTR extraout_EDX;
  LPCWSTR pWVar24;
  HWND pHVar25;
  uint uVar26;
  WCHAR *pWVar27;
  LPCWSTR lpKeyName;
  bool bVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  UINT type;
  LONG lDistanceToMove;
  PLONG lpDistanceToMoveHigh;
  UINT fuLoad;
  undefined2 *puVar31;
  _WIN32_FIND_DATAW local_2d8;
  undefined1 local_88 [4];
  HWND local_84;
  HWND local_80;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  undefined *local_70;
  undefined1 local_6c [24];
  undefined2 local_54;
  undefined2 uStack_52;
  undefined4 local_50;
  code *local_4c;
  uint local_48 [2];
  LPCWSTR local_40;
  code *local_3c;
  undefined8 local_38;
  int local_30;
  HWND local_2c [2];
  HWND local_24;
  FILETIME local_20;
  HWND local_18;
  HWND local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  pHVar21 = DAT_0041e630;
  pHVar25 = param_1;
  piVar20 = &local_30;
  for (iVar23 = 7; iVar23 != 0; iVar23 = iVar23 + -1) {
    *piVar20 = pHVar25->unused;
    pHVar25 = pHVar25 + 1;
    piVar20 = piVar20 + 1;
  }
  local_c = DAT_0047aee8;
  pWVar24 = (LPCWSTR)0x0;
  local_10 = (HWND)(&DAT_0047b000 + (int)local_2c[1] * 0x4000);
  DAT_0041e62c = local_2c;
  iVar23 = (int)local_2c[0] * 0x4000;
  pHVar25 = (HWND)(&DAT_0047b000 + iVar23);
  local_8 = (HWND)0x0;
  switch(local_30) {
  case 2:
    goto switchD_0040148a_caseD_2;
  case 3:
    puVar10 = (undefined *)0x0;
LAB_00401493:
    FUN_00405322(local_2c[0],puVar10);
    return (HWND)0x7fffffff;
  case 4:
    DAT_00472eac = DAT_00472eac + 1;
    if (DAT_0047aee8 == (HWND)0x0) {
      return (HWND)0x7fffffff;
    }
    PostQuitMessage(0);
    return (HWND)0x7fffffff;
  case 5:
    iVar23 = FUN_0040136d(local_2c[0]);
    pHVar21 = (HWND)FUN_00401389(iVar23 + -1,0);
    return pHVar21;
  case 6:
    FUN_00405322(local_2c[0],0);
    break;
  case 7:
    uVar30 = FUN_00402c1f(0);
    DVar12 = (DWORD)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    if ((int)DVar12 < 2) {
      DVar12 = 1;
    }
    Sleep(DVar12);
    break;
  case 8:
    SetForegroundWindow(DAT_0047aee8);
    break;
  case 9:
    if (DAT_00472eb0 != (HWND)0x0) {
      ShowWindow(DAT_00472eb0,(int)local_2c[1]);
    }
    if (DAT_00472ec4 != (HWND)0x0) {
      ShowWindow(DAT_00472ec4,(int)local_2c[0]);
    }
    break;
  case 10:
    pWVar24 = (LPCWSTR)FUN_00402c41(0xfffffff0);
    iVar23 = SetFileAttributesW(pWVar24,(DWORD)local_2c[1]);
    goto LAB_004015b4;
  case 0xb:
    param_1 = (HWND)FUN_00402c41(0xfffffff0);
    psVar7 = (short *)FUN_00405c3a(param_1);
    if (psVar7 != (short *)0x0) {
      do {
        psVar7 = (short *)FUN_00405bbc(psVar7,0x5c);
        sVar1 = *psVar7;
        *psVar7 = 0;
        if (((sVar1 == 0) && (local_24 != (HWND)0x0)) && (iVar23 = FUN_0040588b(), iVar23 != 0)) {
          iVar23 = FUN_004057f1(param_1);
        }
        else {
          iVar23 = FUN_0040586e(param_1);
        }
        if ((iVar23 != 0) &&
           ((iVar23 != 0xb7 || (DVar12 = GetFileAttributesW((LPCWSTR)param_1), (DVar12 & 0x10) == 0)
            ))) {
          local_8 = (HWND)((int)&local_8->unused + 1);
        }
        *psVar7 = sVar1;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
    }
    if (local_2c[1] == (HWND)0x0) {
      uVar15 = 0xfffffff5;
      goto LAB_0040224b;
    }
    FUN_00401423(0xffffffe6);
    FUN_004062ba(&DAT_004d3000,param_1);
    BVar16 = SetCurrentDirectoryW((LPCWSTR)param_1);
    if (BVar16 == 0) {
      local_8 = (HWND)((int)&local_8->unused + 1);
    }
    break;
  case 0xc:
    uVar15 = FUN_00402c41(0);
    iVar23 = FUN_004065fd(uVar15);
    local_20.dwLowDateTime = (DWORD)local_2c[1];
    goto joined_r0x00401a1e;
  case 0xd:
    if (local_24 == (HWND)0x0) {
      *(undefined4 *)(&DAT_0047afc0 + (int)local_2c[0] * 4) = (&DAT_0047af80)[(int)local_2c[0]];
      uVar15 = FUN_00402c1f(1);
      (&DAT_0047af80)[(int)local_2c[0]] = uVar15;
    }
    else {
      (&DAT_0047af80)[(int)local_2c[0]] = *(undefined4 *)(&DAT_0047afc0 + (int)local_2c[0] * 4);
    }
    break;
  case 0xe:
    uVar26 = (&DAT_0047af80)[(int)local_24];
    pHVar21 = local_2c[uVar26 == 0];
    (&DAT_0047af80)[(int)local_24] = uVar26 & local_20.dwLowDateTime;
    return pHVar21;
  case 0xf:
    pHVar21 = (HWND)(&DAT_0047af80)[(int)local_2c[1]];
    goto switchD_00401ad7_default;
  case 0x10:
    pWVar24 = (LPCWSTR)FUN_00402c41(0xffffffd0);
    pWVar11 = (LPCWSTR)FUN_00402c41(0xffffffdf);
    FUN_00402c41(0x13);
    BVar16 = MoveFileW(pWVar24,pWVar11);
    if (BVar16 == 0) {
      if ((local_24 == (HWND)0x0) || (iVar23 = FUN_004065fd(pWVar24), iVar23 == 0))
      goto LAB_0040288b;
      FUN_00406080(pWVar24,pWVar11);
      uVar15 = 0xffffffe4;
    }
    else {
      uVar15 = 0xffffffe3;
    }
    goto LAB_0040224b;
  case 0x11:
    pHVar25 = (HWND)FUN_00402c41(0);
    pHVar21 = local_10;
    DVar12 = GetFullPathNameW((LPCWSTR)pHVar25,0x2000,(LPWSTR)local_10,(LPWSTR *)&param_1);
    if (DVar12 == 0) {
LAB_00401710:
      local_8 = (HWND)0x1;
      *(undefined2 *)&pHVar21->unused = 0;
    }
    else if ((pHVar25 < param_1) && ((short)param_1->unused != 0)) {
      iVar23 = FUN_004065fd(pHVar25);
      if (iVar23 == 0) goto LAB_00401710;
      FUN_004062ba(param_1,iVar23 + 0x2c);
    }
    if (local_24 == (HWND)0x0) {
      GetShortPathNameW((LPCWSTR)pHVar21,(LPWSTR)pHVar21,0x2000);
    }
    break;
  case 0x12:
    pWVar24 = (LPCWSTR)FUN_00402c41(0xffffffff);
    DVar12 = SearchPathW((LPCWSTR)0x0,pWVar24,(LPCWSTR)0x0,0x2000,(LPWSTR)pHVar25,(LPWSTR *)&param_1
                        );
    bVar28 = DVar12 == 0;
    goto LAB_00401751;
  case 0x13:
    uVar15 = FUN_00402c41(0xffffffef);
    iVar23 = FUN_00405ddf(pHVar25,uVar15);
    goto LAB_004015b4;
  case 0x14:
    local_c = (HWND)FUN_00402c41(0x31);
    param_1 = (HWND)((uint)local_2c[0] & 7);
    iVar23 = FUN_00405c06(local_c);
    if (iVar23 == 0) {
      pHVar21 = local_c;
      uVar15 = FUN_004062ba(&DAT_0040a5d0,&DAT_004d3000);
      pWVar2 = (LPWSTR)FUN_00405b8f(uVar15);
      lstrcatW(pWVar2,(LPCWSTR)pHVar21);
    }
    else {
      FUN_004062ba(&DAT_0040a5d0,local_c);
    }
    FUN_0040654e(&DAT_0040a5d0);
    do {
      if (2 < (int)param_1) {
        iVar23 = FUN_004065fd(&DAT_0040a5d0);
        uVar26 = 0;
        if (iVar23 != 0) {
          uVar26 = CompareFileTime((FILETIME *)(iVar23 + 0x14),&local_20);
        }
        param_1 = (HWND)(uint)((((uint)((int)&param_1[-1].unused + 1) | 0x80000000) & uVar26) == 0);
      }
      if (param_1 == (HWND)0x0) {
        FUN_00405d8b(&DAT_0040a5d0);
      }
      local_38._4_4_ = (HWND)FUN_00405db0(&DAT_0040a5d0,0x40000000,(param_1 != (HWND)0x1) + '\x01');
      if (local_38._4_4_ != (HWND)0xffffffff) {
        FUN_00405322(0xffffffea,local_c);
        DAT_0047afb4 = DAT_0047afb4 + 1;
        iVar23 = FUN_00403116(local_24,local_38._4_4_,0,0);
        DAT_0047afb4 = DAT_0047afb4 + -1;
        if (((HWND)local_20.dwLowDateTime != (HWND)0xffffffff) ||
           ((HWND)local_20.dwHighDateTime != (HWND)0xffffffff)) {
          SetFileTime(local_38._4_4_,&local_20,(FILETIME *)0x0,&local_20);
        }
        CloseHandle(local_38._4_4_);
        if (-1 < iVar23) goto switchD_0040148a_caseD_41;
        if (iVar23 == -2) {
          FUN_004062dc(&DAT_0040a5d0,0xffffffe9);
          lstrcatW((LPWSTR)&DAT_0040a5d0,(LPCWSTR)local_c);
        }
        else {
          FUN_004062dc(&DAT_0040a5d0,0xffffffee);
        }
        uVar15 = 0x200010;
        puVar10 = &DAT_0040a5d0;
        goto LAB_004022f2;
      }
      if (param_1 != (HWND)0x0) {
        FUN_00405322(0xffffffe2,local_c);
        bVar28 = param_1 == (HWND)0x2;
        goto LAB_004015b6;
      }
      FUN_004062ba(&DAT_004125d0,&DAT_0047b000);
      FUN_004062ba(&DAT_0047b000,&DAT_0040a5d0);
      FUN_004062dc(&DAT_0040e5d0,local_18);
      FUN_004062ba(&DAT_0047b000,&DAT_004125d0);
      iVar23 = FUN_00405920(&DAT_0040e5d0,(int)local_2c[0] >> 3);
    } while (iVar23 == 4);
    if (iVar23 != 5) {
      puVar10 = &DAT_0040a5d0;
      local_2c[0] = (HWND)0xfffffffa;
      goto LAB_00401493;
    }
    _DAT_0047af88 = _DAT_0047af88 + 1;
    goto LAB_00402ace;
  case 0x15:
    uVar15 = 0;
    goto LAB_00401943;
  case 0x16:
    uVar15 = FUN_00402c41(0x31);
    pHVar21 = (HWND)FUN_00405920(uVar15,local_2c[0]);
    if (pHVar21 == (HWND)0x0) goto LAB_0040288b;
    if (pHVar21 == local_24) {
      return (HWND)local_20.dwLowDateTime;
    }
    if (pHVar21 == (HWND)local_20.dwHighDateTime) {
      return local_18;
    }
    break;
  case 0x17:
    uVar15 = 0xfffffff0;
LAB_00401943:
    uVar15 = FUN_00402c41(uVar15);
    FUN_004059cc(uVar15,local_2c[1]);
    break;
  case 0x18:
    pWVar24 = (LPCWSTR)FUN_00402c41(1);
    pHVar21 = (HWND)lstrlenW(pWVar24);
    goto switchD_00401ad7_default;
  case 0x19:
    uVar30 = FUN_00402c1f(2);
    local_54 = (undefined2)uVar30;
    uStack_52 = (undefined2)((ulonglong)uVar30 >> 0x10);
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    local_38 = FUN_00402c1f(3);
    pWVar2 = (LPWSTR)local_38;
    param_1 = (HWND)CONCAT22(uStack_52,local_54);
    local_40 = (LPCWSTR)FUN_00402c41(1);
    pWVar3 = (LPWSTR)lstrlenW(local_40);
    *(undefined2 *)&pHVar25->unused = 0;
    if (CONCAT22(local_50._2_2_,(undefined2)local_50) == 0) {
      param_1 = (HWND)pWVar3;
    }
    if ((param_1 != (HWND)0x0) &&
       ((-1 < (int)local_38 || (pWVar2 = (LPWSTR)((int)pWVar3 + (int)local_38), -1 < (int)pWVar2))))
    {
      if ((int)pWVar3 < (int)pWVar2) {
        pWVar2 = pWVar3;
      }
      FUN_004062ba(pHVar25,local_40 + (int)pWVar2);
      if ((int)param_1 < 0) {
        iVar23 = lstrlenW((LPCWSTR)pHVar25);
        param_1 = (HWND)((int)param_1 + iVar23);
        if ((int)param_1 < 0) {
          param_1 = (HWND)0x0;
        }
      }
      if ((int)param_1 < 0x2000) {
        *(undefined2 *)((int)&pHVar25->unused + (int)param_1 * 2) = 0;
      }
    }
    break;
  case 0x1a:
    pWVar24 = (LPCWSTR)FUN_00402c41(0x20);
    pWVar11 = (LPCWSTR)FUN_00402c41(0x31);
    if ((HWND)local_20.dwHighDateTime == (HWND)0x0) {
      iVar23 = lstrcmpiW(pWVar24,pWVar11);
    }
    else {
      iVar23 = lstrcmpW(pWVar24,pWVar11);
    }
    goto joined_r0x00401a1e;
  case 0x1b:
    param_1 = (HWND)FUN_00402c41(1);
    DVar12 = ExpandEnvironmentStringsW((LPCWSTR)param_1,(LPWSTR)pHVar25,0x2000);
    if ((DVar12 == 0) ||
       ((local_24 != (HWND)0x0 &&
        (iVar17 = lstrcmpW((LPCWSTR)param_1,(LPCWSTR)pHVar25), iVar17 == 0)))) {
      local_8 = (HWND)0x1;
      *(undefined2 *)&pHVar25->unused = 0;
    }
    *(undefined2 *)(&DAT_0047effe + iVar23) = 0;
    break;
  case 0x1c:
    uVar30 = FUN_00402c1f(0);
    uVar26 = (uint)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    uVar4 = FUN_00402c1f(1);
    if (local_18 != (HWND)0x0) {
      if (uVar26 < uVar4) {
        return (HWND)local_20.dwLowDateTime;
      }
      if (uVar26 <= uVar4) {
        return local_24;
      }
      return (HWND)local_20.dwHighDateTime;
    }
    if ((int)uVar26 < (int)uVar4) {
      return (HWND)local_20.dwLowDateTime;
    }
    if ((int)uVar26 <= (int)uVar4) {
      return local_24;
    }
    return (HWND)local_20.dwHighDateTime;
  case 0x1d:
    uVar30 = FUN_00402c1f(1);
    pHVar5 = (HWND)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    param_1 = pHVar5;
    uVar30 = FUN_00402c1f(2);
    uVar26 = (uint)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    bVar22 = (byte)uVar30;
    pHVar21 = param_1;
    switch(local_20.dwLowDateTime) {
    case 0:
      pHVar21 = (HWND)((int)&pHVar5->unused + uVar26);
      break;
    case 1:
      pHVar21 = (HWND)((int)pHVar5 - uVar26);
      break;
    case 2:
      pHVar21 = (HWND)(uVar26 * (int)pHVar5);
      break;
    case 3:
      if (uVar26 == 0) {
LAB_00401b33:
        local_8 = (HWND)0x1;
        pHVar21 = (HWND)0x0;
      }
      else {
        pHVar21 = (HWND)((int)pHVar5 / (int)uVar26);
      }
      break;
    case 4:
      pHVar21 = (HWND)(uVar26 | (uint)pHVar5);
      break;
    case 5:
      pHVar21 = (HWND)(uVar26 & (uint)pHVar5);
      break;
    case 6:
      pHVar21 = (HWND)(uVar26 ^ (uint)pHVar5);
      break;
    case 7:
      pHVar21 = (HWND)(uint)(pHVar5 == (HWND)0x0);
      break;
    case 8:
      if (pHVar5 == (HWND)0x0) {
LAB_00401b1d:
        if (uVar26 == 0) goto LAB_00401b15;
      }
      pHVar21 = (HWND)0x1;
      break;
    case 9:
      if (pHVar5 != (HWND)0x0) goto LAB_00401b1d;
LAB_00401b15:
      pHVar21 = (HWND)0x0;
      break;
    case 10:
      if (uVar26 == 0) goto LAB_00401b33;
      pHVar21 = (HWND)((int)pHVar5 % (int)uVar26);
      break;
    case 0xb:
      pHVar21 = (HWND)((int)pHVar5 << (bVar22 & 0x1f));
      break;
    case 0xc:
      pHVar21 = (HWND)((int)pHVar5 >> (bVar22 & 0x1f));
      break;
    case 0xd:
      pHVar21 = (HWND)((uint)pHVar5 >> (bVar22 & 0x1f));
    }
    goto switchD_00401ad7_default;
  case 0x1e:
    pWVar24 = (LPCWSTR)FUN_00402c41(1);
    uVar30 = FUN_00402c1f(2);
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    wsprintfW((LPWSTR)pHVar25,pWVar24,(int)uVar30);
    break;
  case 0x1f:
    if (local_24 == (HWND)0x0) {
      if (local_2c[1] != (HWND)0x0) {
        if (DAT_0041e630 != (HWND)0x0) {
          FUN_004062ba(pHVar25,DAT_0041e630 + 1);
          DAT_0041e630 = (HWND)pHVar21->unused;
          goto LAB_00401be7;
        }
        goto LAB_0040288b;
      }
      pHVar21 = GlobalAlloc(0x40,0x4004);
      FUN_004062dc(pHVar21 + 1,local_2c[0]);
      pHVar21->unused = (int)DAT_0041e630;
      DAT_0041e630 = pHVar21;
    }
    else {
      do {
        local_24 = (HWND)((int)&local_24[-1].unused + 3);
        if (pHVar21 == (HWND)0x0) goto LAB_004022e4;
        pHVar21 = (HWND)pHVar21->unused;
      } while (local_24 != (HWND)0x0);
      if (pHVar21 == (HWND)0x0) goto LAB_004022e4;
      FUN_004062ba(&DAT_0040a5d0,pHVar21 + 1);
      FUN_004062ba(pHVar21 + 1,DAT_0041e630 + 1);
      pWVar27 = (WCHAR *)&DAT_0040a5d0;
      pHVar25 = DAT_0041e630 + 1;
LAB_004029e1:
      FUN_004062ba(pHVar25,pWVar27);
    }
    break;
  case 0x20:
  case 0x21:
    uVar30 = FUN_00402c1f(3);
    local_14 = (HWND)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    uVar30 = FUN_00402c1f(4);
    param_1 = (HWND)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    if (((uint)local_18 & 1) != 0) {
      local_14 = (HWND)FUN_00402c41(0x33);
    }
    if (((uint)local_18 & 2) != 0) {
      param_1 = (HWND)FUN_00402c41(0x44);
    }
    if (local_30 == 0x21) {
      uVar30 = FUN_00402c1f();
      local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
      local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
      uVar29 = FUN_00402c1f(2);
      local_50._0_2_ = (undefined2)((ulonglong)uVar29 >> 0x20);
      local_50._2_2_ = (undefined2)((ulonglong)uVar29 >> 0x30);
      if ((int)local_18 >> 2 == 0) {
        pHVar21 = (HWND)SendMessageW((HWND)uVar30,(UINT)uVar29,(WPARAM)local_14,(LPARAM)param_1);
        local_38._4_4_ = pHVar21;
        local_2c[1] = local_2c[0];
      }
      else {
        LVar6 = SendMessageTimeoutW((HWND)uVar30,(UINT)uVar29,(WPARAM)local_14,(LPARAM)param_1,0,
                                    (int)local_18 >> 2,(PDWORD_PTR)((int)&local_38 + 4));
        local_8 = (HWND)(uint)(LVar6 == 0);
        pHVar21 = local_38._4_4_;
        local_2c[1] = local_2c[0];
      }
    }
    else {
      psVar7 = (short *)FUN_00402c41(1);
      psVar8 = (short *)FUN_00402c41(0x12);
      pHVar21 = FindWindowExW(local_14,param_1,(LPCWSTR)(-(uint)(*psVar7 != 0) & (uint)psVar7),
                              (LPCWSTR)(-(uint)(*psVar8 != 0) & (uint)psVar8));
      local_38._4_4_ = pHVar21;
      local_2c[1] = local_2c[0];
    }
joined_r0x00402816:
    if (-1 < (int)local_2c[1]) goto switchD_00401ad7_default;
    break;
  case 0x22:
    uVar30 = FUN_00402c1f(0);
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    iVar23 = IsWindow((HWND)uVar30);
    local_20.dwLowDateTime = (DWORD)local_2c[1];
joined_r0x00401a1e:
    if (iVar23 == 0) {
      return local_24;
    }
    return (HWND)local_20.dwLowDateTime;
  case 0x23:
    uVar30 = FUN_00402c1f(2);
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    uVar29 = FUN_00402c1f(1);
    local_50._0_2_ = (undefined2)((ulonglong)uVar29 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar29 >> 0x30);
    pHVar21 = GetDlgItem((HWND)uVar29,(int)uVar30);
    goto switchD_00401ad7_default;
  case 0x24:
    iVar23 = (int)&local_2c[1]->unused + DAT_0047af48;
    uVar30 = FUN_00402c1f(0);
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    SetWindowLongW((HWND)uVar30,-0x15,iVar23);
    break;
  case 0x25:
    pHVar21 = GetDlgItem(DAT_0047aee8,(int)local_2c[1]);
    GetClientRect(pHVar21,(LPRECT)(local_6c + 0x10));
    fuLoad = 0x10;
    iVar23 = CONCAT22(local_50._2_2_,(undefined2)local_50) * (int)local_24;
    iVar17 = CONCAT22(uStack_52,local_54) * (int)local_24;
    type = 0;
    pWVar24 = (LPCWSTR)FUN_00402c41(0);
    pvVar18 = LoadImageW((HINSTANCE)0x0,pWVar24,type,iVar17,iVar23,fuLoad);
    ho = (HGDIOBJ)SendMessageW(pHVar21,0x172,0,(LPARAM)pvVar18);
    if (ho != (HGDIOBJ)0x0) {
      DeleteObject(ho);
    }
    break;
  case 0x26:
    hdc = GetDC(DAT_0047aee8);
    uVar30 = FUN_00402c1f(2);
    iVar17 = 0x48;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    iVar23 = GetDeviceCaps(hdc,0x5a);
    _DAT_0041e5d0 = MulDiv((int)uVar30,iVar23,iVar17);
    _DAT_0041e5d0 = -_DAT_0041e5d0;
    ReleaseDC(local_c,hdc);
    uVar30 = FUN_00402c1f(3);
    _DAT_0041e5e0 = (undefined4)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    DAT_0041e5e4 = (byte)local_20.dwHighDateTime & 1;
    DAT_0041e5e7 = 1;
    DAT_0041e5e5 = (byte)local_20.dwHighDateTime & 2;
    DAT_0041e5e6 = (byte)local_20.dwHighDateTime & 4;
    FUN_004062dc(&DAT_0041e5ec,local_2c[1]);
    pHVar21 = (HWND)CreateFontIndirectW((LOGFONTW *)&DAT_0041e5d0);
    goto switchD_00401ad7_default;
  case 0x27:
    uVar30 = FUN_00402c1f(0);
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    uVar29 = FUN_00402c1f(1);
    local_50._0_2_ = (undefined2)((ulonglong)uVar29 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar29 >> 0x30);
    if ((HWND)local_20.dwLowDateTime == (HWND)0x0) {
      ShowWindow((HWND)uVar30,(int)uVar29);
    }
    else {
      EnableWindow((HWND)uVar30,(int)uVar29);
    }
    break;
  case 0x28:
    psVar7 = (short *)FUN_00402c41(0);
    uVar15 = FUN_00402c41(0x31);
    psVar8 = (short *)FUN_00402c41(0x22);
    FUN_00402c41(0x15);
    FUN_00401423(0xffffffec);
    local_84 = (HWND)local_20.dwHighDateTime;
    local_80 = local_c;
    local_6c._0_4_ = local_20.dwLowDateTime;
    local_7c = -(uint)(*psVar7 != 0) & (uint)psVar7;
    local_70 = &DAT_004d3000;
    local_74 = -(uint)(*psVar8 != 0) & (uint)psVar8;
    local_78 = uVar15;
    iVar23 = FUN_004058e6(local_88);
    if (iVar23 == 0) goto LAB_0040288b;
    if (((uint)local_84 & 0x40) != 0) {
      FUN_00406745(CONCAT22(local_50._2_2_,(undefined2)local_50));
      pvVar18 = (HANDLE)CONCAT22(local_50._2_2_,(undefined2)local_50);
      goto LAB_00401f4d;
    }
    break;
  case 0x29:
    uVar15 = FUN_00402c41(0);
    FUN_00405322(0xffffffeb,uVar15);
    pvVar18 = (HANDLE)FUN_004058a3(uVar15);
    if (pvVar18 == (HANDLE)0x0) goto LAB_0040288b;
    if (local_24 != (HWND)0x0) {
      iVar23 = FUN_00406745(pvVar18);
      if ((int)local_2c[1] < 0) {
        if (iVar23 != 0) {
          local_8 = (HWND)0x1;
        }
      }
      else {
        FUN_00406201(local_10,iVar23);
      }
    }
LAB_00401f4d:
    CloseHandle(pvVar18);
    break;
  case 0x2a:
    uVar15 = FUN_00402c41(2);
    iVar23 = FUN_004065fd(uVar15);
    if (iVar23 != 0) {
      FUN_00406201(local_10,*(undefined4 *)(iVar23 + 0x14));
      pHVar21 = *(HWND *)(iVar23 + 0x18);
      goto switchD_00401ad7_default;
    }
    *(undefined2 *)&pHVar25->unused = 0;
    *(undefined2 *)&local_10->unused = 0;
    goto LAB_0040288b;
  case 0x2b:
    pHVar21 = (HWND)FUN_00402c41(0xffffffee);
    puVar31 = (undefined2 *)&local_50;
    local_38._4_4_ = pHVar21;
    pcVar19 = (code *)FUN_00406694(9);
    dwBytes = (*pcVar19)(pHVar21,puVar31);
    *(undefined2 *)&pHVar25->unused = 0;
    *(undefined2 *)&local_10->unused = 0;
    local_8 = (HWND)0x1;
    if ((dwBytes != 0) && (param_1 = GlobalAlloc(0x40,dwBytes), param_1 != (HWND)0x0)) {
      local_3c = (code *)FUN_00406694(10);
      local_14 = (HWND)FUN_00406694(0xb);
      iVar23 = (*local_3c)(local_38._4_4_,0,dwBytes,param_1);
      pHVar21 = param_1;
      if ((iVar23 != 0) &&
         (iVar23 = (*(code *)local_14)(param_1,&DAT_0040a014,&local_40,&local_4c), pHVar21 = param_1
         , iVar23 != 0)) {
        FUN_00406201(pHVar25,*(undefined4 *)(local_40 + 4));
        FUN_00406201(local_10,*(undefined4 *)(local_40 + 6));
        local_8 = (HWND)0x0;
        pHVar21 = param_1;
      }
LAB_00401be7:
      GlobalFree(pHVar21);
    }
    break;
  case 0x2c:
    local_8 = (HWND)0x1;
    if (DAT_0047afb8 < 0) {
      uVar15 = 0xffffffe7;
    }
    else {
      pWVar24 = (LPCWSTR)FUN_00402c41(0xfffffff0);
      local_40 = (LPCWSTR)FUN_00402c41(1);
      if ((((HWND)local_20.dwHighDateTime != (HWND)0x0) &&
          (param_1 = (HWND)GetModuleHandleW(pWVar24), param_1 != (HWND)0x0)) ||
         (param_1 = (HWND)LoadLibraryExW(pWVar24,(HANDLE)0x0,8), param_1 != (HWND)0x0)) {
        pcVar19 = (code *)FUN_00406703(param_1,local_40);
        if (pcVar19 == (code *)0x0) {
          FUN_00405322(0xfffffff7,local_40);
        }
        else {
          local_8 = (HWND)0x0;
          if (local_24 == (HWND)0x0) {
            (*pcVar19)(local_c,0x2000,&DAT_0047b000,&DAT_0041e630,&PTR_DAT_0040a000);
          }
          else {
            FUN_00401423(local_24);
            iVar23 = (*pcVar19)();
            if (iVar23 != 0) {
              local_8 = (HWND)0x1;
            }
          }
        }
        if (((HWND)local_20.dwLowDateTime == (HWND)0x0) &&
           (iVar23 = FUN_0040394a(param_1), iVar23 != 0)) {
          FreeLibrary((HMODULE)param_1);
        }
        break;
      }
      uVar15 = 0xfffffff6;
      param_1 = (HWND)0x0;
    }
    goto LAB_0040224b;
  case 0x2d:
    uVar15 = FUN_00402c41(0xfffffff0);
    local_50._0_2_ = (undefined2)uVar15;
    local_50._2_2_ = (undefined2)((uint)uVar15 >> 0x10);
    local_40 = (LPCWSTR)FUN_00402c41(0xffffffdf);
    local_c = (HWND)FUN_00402c41(2);
    local_4c = (code *)FUN_00402c41(0xffffffcd);
    local_10 = (HWND)FUN_00402c41(0x45);
    local_48[0] = local_20.dwHighDateTime & 0xfff;
    local_3c = (code *)((int)local_20.dwHighDateTime >> 0x10 & 0xffff);
    uVar26 = (int)local_20.dwHighDateTime >> 0xc & 7;
    iVar23 = FUN_00405c06(local_40);
    if (iVar23 == 0) {
      FUN_00402c41(0x21);
    }
    HVar9 = CoCreateInstance((IID *)&DAT_004085f0,(LPUNKNOWN)0x0,1,(IID *)&DAT_004085e0,&param_1);
    if (-1 < HVar9) {
      local_14 = (HWND)(**(code **)param_1->unused)(param_1,&DAT_00408600,(int)&local_38 + 4);
      if (-1 < (int)local_14) {
        local_14 = (HWND)(**(code **)(param_1->unused + 0x50))(param_1,local_40);
        if ((local_20.dwHighDateTime & 0x8000) == 0) {
          (**(code **)(param_1->unused + 0x24))(param_1,&DAT_004d3000);
        }
        if (uVar26 != 0) {
          (**(code **)(param_1->unused + 0x3c))(param_1,uVar26);
        }
        (**(code **)(param_1->unused + 0x34))(param_1,local_3c);
        if (*(short *)local_4c != 0) {
          (**(code **)(param_1->unused + 0x44))(param_1,local_4c,local_48[0]);
        }
        (**(code **)(param_1->unused + 0x2c))(param_1,local_c);
        (**(code **)(param_1->unused + 0x1c))(param_1,local_10);
        if (-1 < (int)local_14) {
          local_14 = (HWND)(**(code **)((local_38._4_4_)->unused + 0x18))
                                     (local_38._4_4_,CONCAT22(local_50._2_2_,(undefined2)local_50),1
                                     );
        }
        (**(code **)((local_38._4_4_)->unused + 8))(local_38._4_4_);
      }
      (**(code **)(param_1->unused + 8))(param_1);
      if (-1 < (int)local_14) {
        uVar15 = 0xfffffff4;
        goto LAB_0040224b;
      }
    }
    local_8 = (HWND)0x1;
    uVar15 = 0xfffffff0;
    goto LAB_0040224b;
  case 0x2e:
    pWVar24 = (LPCWSTR)FUN_00402c41(0);
    pWVar11 = (LPCWSTR)FUN_00402c41(0x11);
    param_1 = (HWND)FUN_00402c41(0x23);
    iVar23 = FUN_004065fd(pWVar24);
    if (iVar23 != 0) {
      local_6c._0_4_ = local_c;
      local_6c._4_4_ = 2;
      iVar23 = lstrlenW(pWVar24);
      pWVar24[iVar23 + 1] = L'\0';
      iVar23 = lstrlenW(pWVar11);
      pWVar11[iVar23 + 1] = L'\0';
      uStack_52 = SUB42(param_1,0);
      local_50._0_2_ = (undefined2)((uint)param_1 >> 0x10);
      local_6c._16_2_ = (FILEOP_FLAGS)local_24;
      local_6c._8_4_ = pWVar24;
      local_6c._12_4_ = pWVar11;
      FUN_00405322(0,param_1);
      iVar23 = SHFileOperationW((LPSHFILEOPSTRUCTW)local_6c);
      if (iVar23 == 0) break;
    }
    FUN_00405322(0xfffffff9,0);
    goto LAB_0040288b;
  case 0x2f:
    if (local_2c[0] != (HWND)0xbadf00d) {
LAB_004022e4:
      uVar15 = 0x200010;
      puVar10 = (undefined *)FUN_004062dc(0,0xffffffe8);
LAB_004022f2:
      FUN_00405920(puVar10,uVar15);
      return (HWND)0x7fffffff;
    }
    DAT_0047af94 = DAT_0047af94 + 1;
    break;
  case 0x30:
    pWVar11 = (LPCWSTR)0x0;
    lpKeyName = (LPCWSTR)0x0;
    if (local_2c[0] != (HWND)0x0) {
      pWVar11 = (LPCWSTR)FUN_00402c41(0);
    }
    if (local_2c[1] != (HWND)0x0) {
      lpKeyName = (LPCWSTR)FUN_00402c41(0x11);
    }
    if ((HWND)local_20.dwHighDateTime != (HWND)0x0) {
      pWVar24 = (LPCWSTR)FUN_00402c41(0x22);
    }
    lpFileName = (LPCWSTR)FUN_00402c41(0xffffffcd);
    iVar23 = WritePrivateProfileStringW(pWVar11,lpKeyName,pWVar24,lpFileName);
LAB_004015b4:
    bVar28 = iVar23 == 0;
LAB_004015b6:
    if (bVar28) goto LAB_0040288b;
    break;
  case 0x31:
    param_1 = (HWND)DAT_0040a010;
    pWVar24 = (LPCWSTR)FUN_00402c41(1);
    uVar15 = FUN_00402c41(0x12);
    local_50._0_2_ = (undefined2)uVar15;
    local_50._2_2_ = (undefined2)((uint)uVar15 >> 0x10);
    pWVar11 = (LPCWSTR)FUN_00402c41(0xffffffdd);
    GetPrivateProfileStringW
              (pWVar24,(LPCWSTR)CONCAT22(local_50._2_2_,(undefined2)local_50),(LPCWSTR)&param_1,
               (LPWSTR)pHVar25,0x1fff,pWVar11);
    bVar28 = (short)pHVar25->unused == 10;
LAB_00401751:
    if (bVar28) {
LAB_00402859:
      local_8 = (HWND)0x1;
      *(undefined2 *)&pHVar25->unused = 0;
    }
    break;
  case 0x32:
    if ((HWND)local_20.dwHighDateTime == (HWND)0x0) {
      pHVar13 = (HKEY)FUN_00402c81(2);
      if (pHVar13 == (HKEY)0x0) goto LAB_0040288b;
      pWVar24 = (LPCWSTR)FUN_00402c41(0x33);
      LVar14 = RegDeleteValueW(pHVar13,pWVar24);
      RegCloseKey(pHVar13);
    }
    else {
      uVar15 = FUN_00402c41(0x22);
      LVar14 = FUN_00402cff(local_2c[1],uVar15,(int)local_20.dwHighDateTime >> 1);
    }
    if (LVar14 != 0) goto LAB_0040288b;
    break;
  case 0x33:
    local_50._0_2_ = SUB42(local_18,0);
    local_50._2_2_ = (undefined2)((uint)local_18 >> 0x10);
    local_40 = (LPCWSTR)FUN_00402c41(2);
    uVar15 = FUN_00402c41(0x11);
    local_8 = (HWND)0x1;
    param_1 = (HWND)FUN_00402cd1(local_2c[0],uVar15,2);
    if (param_1 != (HWND)0x0) {
      DVar12 = 0;
      if ((HWND)local_20.dwHighDateTime == (HWND)0x1) {
        FUN_00402c41(0x23);
        iVar23 = lstrlenW((LPCWSTR)&DAT_004125d0);
        DVar12 = iVar23 * 2 + 2;
      }
      uVar30 = CONCAT44(local_38._4_4_,_DAT_004125d0);
      if ((HWND)local_20.dwHighDateTime == (HWND)0x4) {
        uVar30 = FUN_00402c1f(3);
        DVar12 = 4;
      }
      local_38._4_4_ = (HWND)((ulonglong)uVar30 >> 0x20);
      _DAT_004125d0 = (undefined4)uVar30;
      if ((HWND)local_20.dwHighDateTime == (HWND)0x3) {
        DVar12 = FUN_00403116(local_20.dwLowDateTime,0,&DAT_004125d0,0xc000);
        uVar30 = CONCAT44(local_38._4_4_,_DAT_004125d0);
      }
      local_38._4_4_ = (HWND)((ulonglong)uVar30 >> 0x20);
      _DAT_004125d0 = (undefined4)uVar30;
      LVar14 = RegSetValueExW((HKEY)param_1,local_40,0,CONCAT22(local_50._2_2_,(undefined2)local_50)
                              ,&DAT_004125d0,DVar12);
      pHVar13 = (HKEY)param_1;
      if (LVar14 == 0) {
        local_8 = (HWND)0x0;
      }
LAB_00402557:
      RegCloseKey(pHVar13);
    }
    break;
  case 0x34:
    pHVar13 = (HKEY)FUN_00402c81(0x20019);
    pWVar24 = (LPCWSTR)FUN_00402c41(0x33);
    *(undefined2 *)&pHVar25->unused = 0;
    if (pHVar13 != (HKEY)0x0) {
      local_50._0_2_ = 0x4000;
      local_50._2_2_ = 0;
      LVar14 = RegQueryValueExW(pHVar13,pWVar24,(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)pHVar25,
                                &local_50);
      if (LVar14 == 0) {
        if (param_1 == (HWND)0x4) {
          local_8 = (HWND)(uint)((HWND)local_20.dwHighDateTime == (HWND)0x0);
          FUN_00406201(pHVar25,pHVar25->unused);
          goto LAB_00402557;
        }
        if ((param_1 == (HWND)0x1) || (param_1 == (HWND)0x2)) {
          local_8 = (HWND)local_20.dwHighDateTime;
          goto LAB_0040254f;
        }
      }
      *(undefined2 *)&pHVar25->unused = 0;
      local_8 = (HWND)0x1;
      goto LAB_00402557;
    }
    goto LAB_0040288b;
  case 0x35:
    pHVar13 = (HKEY)FUN_00402c81(0x20019);
    uVar30 = FUN_00402c1f(3);
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    *(undefined2 *)&pHVar25->unused = 0;
    if (pHVar13 != (HKEY)0x0) {
      param_1 = (HWND)0x1fff;
      if ((HWND)local_20.dwHighDateTime == (HWND)0x0) {
        LVar14 = RegEnumValueW(pHVar13,(DWORD)uVar30,(LPWSTR)pHVar25,(LPDWORD)&param_1,(LPDWORD)0x0,
                               (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
        if (LVar14 != 0) {
          local_8 = (HWND)0x1;
        }
      }
      else {
        RegEnumKeyW(pHVar13,(DWORD)uVar30,(LPWSTR)pHVar25,0x1fff);
      }
LAB_0040254f:
      *(undefined2 *)(&DAT_0047effe + iVar23) = 0;
      goto LAB_00402557;
    }
    goto LAB_0040288b;
  case 0x36:
    pvVar18 = (HANDLE)FUN_0040621a(pHVar25);
    if (pvVar18 != (HANDLE)0x0) goto LAB_00401f4d;
    break;
  case 0x37:
    uVar15 = FUN_00402c41(0xffffffed);
    pHVar21 = (HWND)FUN_00405db0(uVar15,local_2c[1],local_24);
    if (pHVar21 == (HWND)0xffffffff) goto LAB_00402888;
switchD_00401ad7_default:
    FUN_00406201(pHVar25,pHVar21);
    break;
  case 0x38:
  case 0x44:
    local_50._0_2_ = SUB42(local_24,0);
    local_50._2_2_ = (undefined2)((uint)local_24 >> 0x10);
    if (local_24 == (HWND)0x0) {
      if (local_30 == 0x38) {
        FUN_00402c41(0x21);
        WideCharToMultiByte(0,0,(LPCWSTR)&DAT_004125d0,-1,&DAT_0040e5d0,0x2000,(LPCSTR)0x0,
                            (LPBOOL)0x0);
        param_1 = (HWND)lstrlenA(&DAT_0040e5d0);
      }
      else {
        pWVar24 = (LPCWSTR)FUN_00402c41(0x11);
        iVar23 = lstrlenW(pWVar24);
        param_1 = (HWND)(iVar23 * 2);
      }
    }
    else {
      _DAT_0040e5d0 = FUN_00402c1f(1);
      param_1 = (HWND)((local_30 != 0x38) + 1);
      local_40 = extraout_EDX;
    }
    if (((short)pHVar25->unused != 0) &&
       (((uVar15 = FUN_0040621a(pHVar25),
         local_30 == 0x38 || CONCAT22(local_50._2_2_,(undefined2)local_50) != 0 ||
         ((HWND)local_20.dwLowDateTime == (HWND)0x0)) ||
        (iVar23 = FUN_00405e91(uVar15,uVar15), -1 < iVar23)))) {
      iVar23 = FUN_00405e62(uVar15,&DAT_0040e5d0,param_1);
      goto LAB_004015b4;
    }
    goto LAB_0040288b;
  case 0x39:
  case 0x45:
    local_c = (HWND)0x0;
    local_4c = (code *)0x2;
    uVar30 = FUN_00402c1f(2);
    local_40 = (LPCWSTR)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    if ((int)local_40 < 1) break;
    if (0x1fff < (int)local_40) {
      local_40 = (LPCWSTR)0x1fff;
    }
    if ((short)pHVar25->unused != 0) {
      local_38._4_4_ = (HWND)0x0;
      local_14 = (HWND)FUN_0040621a(pHVar25);
      if (0 < (int)local_40) {
        do {
          if (local_30 == 0x39) {
            BVar16 = ReadFile(local_14,(LPVOID)((int)&param_1 + 2),2 - local_20.dwLowDateTime,
                              (LPDWORD)&local_3c,(LPOVERLAPPED)0x0);
            if ((BVar16 != 0) && (local_3c != (code *)0x0)) {
              local_48[0] = CONCAT22((short)((uint)BVar16 >> 0x10),(ushort)param_1._2_1_);
              local_4c = local_3c;
              if ((HWND)local_20.dwLowDateTime == (HWND)0x0) {
                iVar23 = MultiByteToWideChar(0,8,(LPCSTR)((int)&param_1 + 2),(int)local_3c,
                                             (LPWSTR)local_48,1);
                if (iVar23 == 0) {
                  iVar23 = -(int)local_4c;
                  do {
                    local_3c = local_3c + -1;
                    local_48[0] = 0xfffd;
                    if (local_3c == (code *)0x0) break;
                    local_4c = local_4c + -1;
                    iVar23 = iVar23 + 1;
                    SetFilePointer(local_14,iVar23,(PLONG)0x0,1);
                    iVar17 = MultiByteToWideChar(0,8,(LPCSTR)((int)&param_1 + 2),(int)local_3c,
                                                 (LPWSTR)local_48,1);
                  } while (iVar17 == 0);
                }
                goto LAB_00402762;
              }
LAB_00402798:
              FUN_00406201(local_10,local_48[0] & 0xffff);
              goto LAB_00402ace;
            }
            break;
          }
          if (((((HWND)local_20.dwLowDateTime == (HWND)0x0) && (local_c == (HWND)0x0)) &&
              (iVar23 = FUN_00405e91(local_14,0), iVar23 < 0)) ||
             (iVar23 = FUN_00405e33(local_14,local_48,2), iVar23 == 0)) break;
LAB_00402762:
          if ((HWND)local_20.dwLowDateTime != (HWND)0x0) goto LAB_00402798;
          sVar1 = (short)local_48[0];
          if ((local_38._4_2_ == 0xd) || (local_38._4_2_ == 10)) {
            if ((local_38._4_2_ == sVar1) || ((sVar1 != 0xd && (sVar1 != 10)))) {
              SetFilePointer(local_14,-(int)local_4c,(PLONG)0x0,1);
            }
            else {
              *(short *)((int)&local_10->unused + (int)local_c * 2) = sVar1;
              local_c = (HWND)((int)local_c + 1);
            }
            break;
          }
          iVar23 = (int)local_c + 1;
          *(short *)((int)&local_10->unused + (int)local_c * 2) = sVar1;
          local_c = (HWND)iVar23;
          if ((sVar1 == 0) || (local_38._4_4_ = (HWND)local_48[0], (int)local_40 <= iVar23)) break;
        } while( true );
      }
    }
    bVar28 = local_c == (HWND)0x0;
    *(undefined2 *)((int)&local_10->unused + (int)local_c * 2) = 0;
    goto LAB_004015b6;
  case 0x3a:
    if ((short)pHVar25->unused != 0) {
      uVar30 = FUN_00402c1f(2);
      lDistanceToMove = (LONG)uVar30;
      local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
      local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
      lpDistanceToMoveHigh = (PLONG)0x0;
      pvVar18 = (HANDLE)FUN_0040621a(pHVar25);
      pHVar21 = (HWND)SetFilePointer(pvVar18,lDistanceToMove,lpDistanceToMoveHigh,
                                     local_20.dwLowDateTime);
      pHVar25 = local_10;
      goto joined_r0x00402816;
    }
    break;
  case 0x3b:
    pvVar18 = (HANDLE)FUN_0040621a(pHVar25);
    if (pvVar18 != (HANDLE)0x0) {
      FindClose(pvVar18);
    }
    break;
  case 0x3c:
    pvVar18 = (HANDLE)FUN_0040621a(local_10);
    if ((pvVar18 != (HANDLE)0x0) && (BVar16 = FindNextFileW(pvVar18,&local_2d8), BVar16 != 0)) {
LAB_004028a0:
      pWVar27 = local_2d8.cFileName;
      goto LAB_004029e1;
    }
    goto LAB_00402859;
  case 0x3d:
    pWVar24 = (LPCWSTR)FUN_00402c41(2);
    pvVar18 = FindFirstFileW(pWVar24,&local_2d8);
    if (pvVar18 != (HANDLE)0xffffffff) {
      FUN_00406201(local_10,pvVar18);
      goto LAB_004028a0;
    }
    *(undefined2 *)&local_10->unused = 0;
LAB_00402888:
    *(undefined2 *)&pHVar25->unused = 0;
LAB_0040288b:
    local_8 = (HWND)0x1;
    break;
  case 0x3e:
    local_38._4_4_ = (HWND)0xfffffd66;
    pcVar19 = (code *)FUN_00402c41(0xfffffff0);
    local_3c = pcVar19;
    iVar23 = FUN_00405c06(pcVar19);
    if (iVar23 == 0) {
      FUN_00402c41(0xffffffed);
    }
    FUN_00405d8b(pcVar19);
    param_1 = (HWND)FUN_00405db0(pcVar19,0x40000000,2);
    if (param_1 != (HWND)0xffffffff) {
      local_40 = DAT_0047aef8;
      hMem = GlobalAlloc(0x40,(SIZE_T)DAT_0047aef8);
      if (hMem != (HGLOBAL)0x0) {
        FUN_00403347(0);
        FUN_00403331(hMem,local_40);
        piVar20 = GlobalAlloc(0x40,(SIZE_T)local_24);
        local_50._0_2_ = SUB42(piVar20,0);
        local_50._2_2_ = (undefined2)((uint)piVar20 >> 0x10);
        if (piVar20 != (int *)0x0) {
          FUN_00403116(local_2c[1],0,piVar20,local_24);
          for (; (char)*piVar20 != '\0'; piVar20 = (int *)((int)(piVar20 + 2) + (int)local_38)) {
            local_38._0_4_ = *piVar20;
            FUN_00405d6b(piVar20[1] + (int)hMem,piVar20 + 2,(int)local_38);
          }
          GlobalFree((HGLOBAL)CONCAT22(local_50._2_2_,(undefined2)local_50));
        }
        FUN_00405e62(param_1,hMem,local_40);
        GlobalFree(hMem);
        local_38._4_4_ = (HWND)FUN_00403116(0xffffffff,param_1,0,0);
      }
      CloseHandle(param_1);
    }
    uVar15 = 0xfffffff3;
    if ((int)local_38._4_4_ < 0) {
      uVar15 = 0xffffffef;
      DeleteFileW((LPCWSTR)local_3c);
      local_8 = (HWND)0x1;
    }
LAB_0040224b:
    FUN_00401423(uVar15);
    break;
  case 0x3f:
    uVar30 = FUN_00402c1f(0);
    uVar26 = (uint)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    if (DAT_0047af2c <= uVar26) goto LAB_0040288b;
    iVar23 = uVar26 * 0x4018 + DAT_0047af28;
    if (-1 < (int)local_24) {
      pHVar25 = local_10;
      pHVar21 = *(HWND *)(iVar23 + (int)local_24 * 4);
      if (local_24 == (HWND)0x0) {
        pWVar27 = (WCHAR *)(iVar23 + 0x18);
        goto LAB_004029e1;
      }
      goto switchD_00401ad7_default;
    }
    local_24 = (HWND)(-1 - (int)local_24);
    if (local_24 == (HWND)0x0) {
      FUN_004062dc(iVar23 + 0x18,local_20.dwHighDateTime);
      *(byte *)(iVar23 + 9) = *(byte *)(iVar23 + 9) | 1;
    }
    else {
      uVar30 = FUN_00402c1f(1);
      local_2c[1] = (HWND)uVar30;
      local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
      local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    }
    *(HWND *)(iVar23 + (int)local_24 * 4) = local_2c[1];
    if ((HWND)local_20.dwLowDateTime != (HWND)0x0) {
      FUN_0040117d(uVar26);
    }
    break;
  case 0x40:
    uVar30 = FUN_00402c1f(0);
    uVar26 = (uint)uVar30;
    local_50._0_2_ = (undefined2)((ulonglong)uVar30 >> 0x20);
    local_50._2_2_ = (undefined2)((ulonglong)uVar30 >> 0x30);
    if (0x1f < uVar26) goto LAB_0040288b;
    if ((HWND)local_20.dwLowDateTime == (HWND)0x0) {
      if (local_24 == (HWND)0x0) {
        FUN_004062dc(local_10,*(undefined4 *)(DAT_0047aef4 + 0x94 + uVar26 * 4));
      }
      else {
        *(HWND *)(DAT_0047aef4 + 0x94 + uVar26 * 4) = local_2c[1];
      }
    }
    else {
      if (local_24 == (HWND)0x0) {
        pHVar21 = (HWND)FUN_004012e2(0);
        pHVar25 = local_10;
        goto switchD_00401ad7_default;
      }
      FUN_00401299(uVar26);
      FUN_004011ef(0,0);
    }
    break;
  case 0x43:
    SendMessageW(DAT_0047aee8,0xb,DAT_00460248 & (uint)local_2c[0],0);
    if (local_2c[0] != (HWND)0x0) {
      InvalidateRect(local_c,(RECT *)0x0,0);
    }
  }
switchD_0040148a_caseD_41:
  _DAT_0047af88 = (int)&local_8->unused + _DAT_0047af88;
LAB_00402ace:
  local_2c[0] = (HWND)0x0;
switchD_0040148a_caseD_2:
  return local_2c[0];
}



// ===== FUN_00402c1f @ 00402c1f (size 34) =====

void FUN_00402c1f(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004062dc(0,*(undefined4 *)(DAT_0041e62c + param_1 * 4));
  FUN_0040621a(uVar1);
  return;
}



// ===== FUN_00402c41 @ 00402c41 (size 64) =====

undefined4 FUN_00402c41(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  uVar2 = FUN_004062dc(&DAT_0040a5d0 + ((int)uVar1 >> 4) * 0x4000,
                       *(undefined4 *)(DAT_0041e62c + (uVar1 & 0xf) * 4));
  if ((int)param_1 < 0) {
    FUN_0040654e(uVar2);
  }
  return uVar2;
}



// ===== FUN_00402c81 @ 00402c81 (size 56) =====

uint FUN_00402c81(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = &param_1;
  uVar1 = param_1 | 0x100020;
  uVar2 = FUN_00402c41(0x22);
  uVar3 = FUN_00402cb9(*(undefined4 *)(DAT_0041e62c + 4));
  iVar4 = FUN_00406127(uVar3,uVar2,uVar1,puVar5);
  return ~-(uint)(iVar4 != 0) & param_1;
}



// ===== FUN_00402cb9 @ 00402cb9 (size 24) =====

int FUN_00402cb9(int param_1)

{
  if (-1 < param_1) {
    param_1 = DAT_0047af84 + -0x7fffffff + param_1;
  }
  return param_1;
}



// ===== FUN_00402cd1 @ 00402cd1 (size 46) =====

uint FUN_00402cd1(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &param_3;
  uVar1 = param_3 | 0x100020;
  uVar2 = FUN_00402cb9(param_1);
  iVar3 = FUN_00406155(uVar2,param_2,uVar1,puVar4);
  return ~-(uint)(iVar3 != 0) & param_3;
}



// ===== FUN_00402cff @ 00402cff (size 69) =====

undefined4 FUN_00402cff(undefined4 param_1,short *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_2 == 0) {
    uVar1 = 0x3eb;
  }
  else {
    param_3 = param_3 | 0x100020;
    puVar3 = &param_3;
    uVar1 = FUN_00402cb9(param_1);
    iVar2 = FUN_004060ac(uVar1,puVar3);
    if (iVar2 == 0) {
      uVar1 = 6;
    }
    else {
      uVar1 = FUN_00402d44(iVar2,param_2,param_3);
    }
  }
  return uVar1;
}



// ===== FUN_00402d44 @ 00402d44 (size 175) =====

int FUN_00402d44(HKEY param_1,LPCWSTR param_2,uint param_3)

{
  int iVar1;
  LSTATUS LVar2;
  code *pcVar3;
  WCHAR local_214 [262];
  HKEY local_8;
  
  iVar1 = FUN_00406127(param_1,param_2,CONCAT31((int3)((param_3 & 0x300) >> 8),8),&local_8);
  if (iVar1 == 0) {
    do {
      LVar2 = RegEnumKeyW(local_8,0,local_214,0x105);
      if (LVar2 != 0) break;
      if ((param_3 & 1) != 0) {
        RegCloseKey(local_8);
        return 0x3eb;
      }
      iVar1 = FUN_00402d44(local_8,local_214,param_3);
    } while (iVar1 == 0);
    RegCloseKey(local_8);
    pcVar3 = (code *)FUN_00406694(3);
    if (pcVar3 == (code *)0x0) {
      iVar1 = RegDeleteKeyW(param_1,param_2);
    }
    else {
      iVar1 = (*pcVar3)(param_1,param_2,param_3 & 0x300,0);
    }
  }
  return iVar1;
}



// ===== FUN_00402df3 @ 00402df3 (size 134) =====

undefined4 FUN_00402df3(HWND param_1,int param_2)

{
  int iVar1;
  WCHAR local_84 [64];
  
  if (param_2 == 0x110) {
    SetTimer(param_1,1,0xfa,(TIMERPROC)0x0);
    param_2 = 0x113;
  }
  if (param_2 == 0x113) {
    iVar1 = DAT_004281f8;
    if (DAT_00434204 <= DAT_004281f8) {
      iVar1 = DAT_00434204;
    }
    iVar1 = MulDiv(iVar1,100,DAT_00434204);
    wsprintfW(local_84,u_verifying_installer___d___0040a01c,iVar1);
    SetWindowTextW(param_1,local_84);
    SetDlgItemTextW(param_1,0x406,local_84);
  }
  return 0;
}



// ===== FUN_00402e79 @ 00402e79 (size 100) =====

void FUN_00402e79(int param_1)

{
  DWORD DVar1;
  
  if (param_1 != 0) {
    if (DAT_00434200 != (HWND)0x0) {
      DestroyWindow(DAT_00434200);
    }
    DAT_00434200 = (HWND)0x0;
    return;
  }
  if (DAT_00434200 != (HWND)0x0) {
    FUN_004066d0(0);
    return;
  }
  DVar1 = GetTickCount();
  if (DAT_0047aef0 < DVar1) {
    DAT_00434200 = CreateDialogParamW(DAT_0047aee0,(LPCWSTR)0x6f,(HWND)0x0,FUN_00402df3,0);
    ShowWindow(DAT_00434200,5);
  }
  return;
}



// ===== FUN_00402edd @ 00402edd (size 569) =====

wchar_t * FUN_00402edd(uint param_1)

{
  DWORD DVar1;
  HANDLE hFile;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  SIZE_T SVar7;
  int *piVar8;
  uint uVar9;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  SIZE_T local_18;
  int local_14;
  HANDLE local_10;
  uint local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  DVar1 = GetTickCount();
  DAT_0047aef0 = DVar1 + 1000;
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_004e7000,0x2000);
  hFile = (HANDLE)FUN_00405db0(&DAT_004e7000,0x80000000,3);
  if (hFile == (HANDLE)0xffffffff) {
    DAT_0040a018 = hFile;
    return u_Error_launching_installer_0040a1e8;
  }
  DAT_0040a018 = hFile;
  local_10 = hFile;
  FUN_004062ba(&DAT_004d7000,&DAT_004e7000);
  uVar2 = FUN_00405bdb(&DAT_004d7000);
  FUN_004062ba(&DAT_004eb000,uVar2);
  uVar3 = GetFileSize(hFile,(LPDWORD)0x0);
  DAT_00434204 = uVar3;
  for (; 0 < (int)uVar3; uVar3 = uVar3 - uVar9) {
    uVar4 = (-(uint)(DAT_0047aef8 != 0) & 0x7e00) + 0x200;
    uVar9 = uVar3;
    if ((int)uVar4 <= (int)uVar3) {
      uVar9 = uVar4;
    }
    iVar5 = FUN_00403331(&DAT_00434208,uVar9);
    if (iVar5 == 0) {
      FUN_00402e79(1);
      goto LAB_004030b5;
    }
    if (DAT_0047aef8 == 0) {
      FUN_00405d6b(&local_2c,&DAT_00434208,0x1c);
      if (((((local_2c & 0xfffffff0) == 0) && (local_28 == -0x21524111)) && (local_1c == 0x74736e49)
          ) && ((local_20 == 0x74666f73 && (local_24 == 0x6c6c754e)))) {
        param_1 = param_1 | local_2c;
        DAT_0047afa0 = DAT_0047afa0 | param_1 & 2;
        DAT_0047aef8 = DAT_004281f8;
        if ((int)uVar3 < local_14) goto LAB_004030b5;
        if (((param_1 & 8) == 0) && ((param_1 & 4) != 0)) break;
        local_8 = local_8 + 1;
        uVar3 = local_14 - 4;
        if (uVar3 < uVar9) {
          uVar9 = uVar3;
        }
      }
    }
    else if ((param_1 & 2) == 0) {
      FUN_00402e79(0);
    }
    if ((int)uVar3 < (int)DAT_00434204) {
      local_c = FUN_00406787(local_c,&DAT_00434208,uVar9);
    }
    DAT_004281f8 = DAT_004281f8 + uVar9;
  }
  FUN_00402e79(1);
  if (DAT_0047aef8 != 0) {
    if (local_8 != 0) {
      FUN_00403347(DAT_004281f8);
      iVar5 = FUN_00403331(&param_1,4);
      if ((iVar5 == 0) || (local_c != param_1)) goto LAB_004030b5;
    }
    puVar6 = GlobalAlloc(0x40,local_18);
    FUN_00403347(DAT_0047aef8 + 0x1c);
    SVar7 = FUN_00403116(0xffffffff,0,puVar6,local_18);
    if (SVar7 == local_18) {
      DAT_0047aefc = *puVar6;
      if ((local_2c & 1) != 0) {
        DAT_0047af00 = DAT_0047af00 + 1;
      }
      piVar8 = puVar6 + 0x11;
      iVar5 = 8;
      DAT_0047aef4 = puVar6;
      do {
        piVar8 = piVar8 + -2;
        *piVar8 = *piVar8 + (int)puVar6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      DVar1 = SetFilePointer(local_10,0,(PLONG)0x0,1);
      puVar6[0xf] = DVar1;
      FUN_00405d6b(&DAT_0047af20,puVar6 + 1,0x40);
      return (wchar_t *)0x0;
    }
  }
LAB_004030b5:
  return u_Installer_integrity_check_has_fa_0040a050;
}



// ===== FUN_00403116 @ 00403116 (size 539) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00403116(int param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  WCHAR local_98 [64];
  int local_18;
  DWORD local_14;
  undefined *local_10;
  uint local_c;
  uint local_8;
  
  uVar6 = param_4;
  local_c = param_4;
  if (param_3 == (undefined *)0x0) {
    local_c = 0x8000;
  }
  local_8 = 0;
  local_10 = param_3;
  if (param_3 == (undefined *)0x0) {
    local_10 = &DAT_0042c200;
  }
  if (-1 < param_1) {
    FUN_00403347(DAT_0047af58 + param_1);
  }
  iVar2 = FUN_00403331(&param_4,4);
  uVar5 = local_c;
  if (iVar2 != 0) {
    if ((param_4 & 0x80000000) == 0) {
      if (param_3 == (undefined *)0x0) {
        while( true ) {
          if ((int)param_4 < 1) {
            return local_8;
          }
          uVar6 = param_4;
          if ((int)uVar5 <= (int)param_4) {
            uVar6 = uVar5;
          }
          iVar2 = FUN_00403331(&DAT_00428200,uVar6);
          if (iVar2 == 0) break;
          iVar2 = FUN_00405e62(param_2,&DAT_00428200,uVar6);
          if (iVar2 == 0) {
            return 0xfffffffe;
          }
          local_8 = local_8 + uVar6;
          param_4 = param_4 - uVar6;
        }
      }
      else {
        if ((int)param_4 < (int)uVar6) {
          uVar6 = param_4;
        }
        iVar2 = FUN_00403331(param_3,uVar6);
        if (iVar2 != 0) {
          return uVar6;
        }
      }
    }
    else {
      local_14 = GetTickCount();
      _DAT_0041eb64 = 0;
      _DAT_0041eb60 = 0;
      uVar6 = param_4 & 0x7fffffff;
      _DAT_0041e648 = 8;
      _DAT_004281f0 = &DAT_004201e8;
      _DAT_004281ec = &DAT_004201e8;
      _DAT_004281e8 = &DAT_004281e8;
      param_4 = uVar6;
      if (uVar6 == 0) {
        _DAT_0041e648 = 8;
        _DAT_0041eb60 = 0;
        _DAT_0041eb64 = 0;
        return local_8;
      }
      while( true ) {
        uVar5 = 0x4000;
        if ((int)param_4 < 0x4000) {
          uVar5 = param_4;
        }
        iVar2 = FUN_00403331(&DAT_00428200,uVar5);
        if (iVar2 == 0) break;
        param_4 = param_4 - uVar5;
        _DAT_0041e638 = &DAT_00428200;
        _DAT_0041e63c = uVar5;
        while( true ) {
          puVar1 = local_10;
          DAT_0041e640 = local_10;
          _DAT_0041e644 = local_c;
          local_18 = FUN_004067f5(&DAT_0041e638);
          if (local_18 < 0) {
            return 0xfffffffc;
          }
          iVar2 = (int)DAT_0041e640 - (int)puVar1;
          DVar3 = GetTickCount();
          if ((((byte)DAT_0047afb4 & 1) != 0) && ((200 < DVar3 - local_14 || (param_4 == 0)))) {
            iVar4 = MulDiv(uVar6 - param_4,100,uVar6);
            wsprintfW(local_98,u______d___0040a21c,iVar4);
            FUN_00405322(0,local_98);
            local_14 = DVar3;
          }
          if (iVar2 == 0) break;
          if (param_3 == (undefined *)0x0) {
            iVar4 = FUN_00405e62(param_2,local_10,iVar2);
            if (iVar4 == 0) {
              return 0xfffffffe;
            }
          }
          else {
            local_c = local_c - iVar2;
            local_10 = DAT_0041e640;
          }
          local_8 = local_8 + iVar2;
          if (local_18 == 1) {
            return local_8;
          }
        }
        if ((int)param_4 < 1) {
          return local_8;
        }
      }
    }
  }
  return 0xfffffffd;
}



// ===== FUN_00403331 @ 00403331 (size 22) =====

void FUN_00403331(undefined4 param_1,undefined4 param_2)

{
  FUN_00405e33(DAT_0040a018,param_1,param_2);
  return;
}



// ===== FUN_00403347 @ 00403347 (size 23) =====

void FUN_00403347(LONG param_1)

{
  SetFilePointer(DAT_0040a018,param_1,(PLONG)0x0,0);
  return;
}



// ===== FUN_0040335e @ 0040335e (size 49) =====

void FUN_0040335e(void)

{
  int iVar1;
  
  FUN_0040654e(&DAT_004df000);
  iVar1 = FUN_00405c06(&DAT_004df000);
  if (iVar1 == 0) {
    return;
  }
  FUN_00405b8f(&DAT_004df000);
  FUN_0040586e(&DAT_004df000);
  FUN_00405ddf(&DAT_004db000,&DAT_004df000);
  return;
}



// ===== entry @ 0040338f (size 1345) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  WCHAR WVar1;
  DWORD DVar2;
  code *pcVar3;
  int iVar4;
  LPWSTR pWVar5;
  short *psVar6;
  LPCWSTR lpsz;
  WCHAR *pWVar7;
  int *piVar8;
  int iVar9;
  HANDLE pvVar10;
  BOOL BVar11;
  WCHAR *pWVar12;
  undefined4 uVar13;
  char *lpString;
  LPWSTR *TokenHandle;
  wchar_t *local_2d4;
  UINT local_2d0;
  LPWSTR pWStack_2cc;
  uint local_2c8;
  _TOKEN_PRIVILEGES _Stack_2c4;
  SHFILEINFOW SStack_2b4;
  
  uVar13 = 0x20;
  local_2d0 = 0;
  local_2d4 = u_Error_writing_temporary_file__Ma_0040a2e0;
  local_2c8 = 0;
  SetErrorMode(0x8001);
  DVar2 = GetVersion();
  DAT_0047aeec = DVar2 & 0xbfffffff;
  if (((short)DAT_0047aeec != 6) && (pcVar3 = (code *)FUN_00406694(0), pcVar3 != (code *)0x0)) {
    (*pcVar3)(0xc00);
  }
  lpString = "UXTHEME";
  do {
    FUN_00406624(lpString);
    iVar4 = lstrlenA(lpString);
    lpString = lpString + iVar4 + 1;
  } while (*lpString != '\0');
  FUN_00406694(10);
  DAT_0047aee4 = FUN_00406694(8);
  pcVar3 = (code *)FUN_00406694(6);
  if ((pcVar3 != (code *)0x0) && (iVar4 = (*pcVar3)(0x1e), iVar4 != 0)) {
    DAT_0047aeec = DAT_0047aeec | 0x40000000;
  }
  InitCommonControls();
  DAT_0047afb8 = OleInitialize((LPVOID)0x0);
  SHGetFileInfoW((LPCWSTR)&DAT_00440208,0,&SStack_2b4,0x2b4,0);
  FUN_004062ba(&DAT_00472ee0,&PTR_DAT_0040a2c8);
  pWVar5 = GetCommandLineW();
  FUN_004062ba(&DAT_004cb000,pWVar5);
  DAT_0047aee0 = 0x400000;
  psVar6 = &DAT_004cb000;
  if (DAT_004cb000 == 0x22) {
    psVar6 = (short *)&DAT_004cb002;
    uVar13 = 0x22;
  }
  lpsz = (LPCWSTR)FUN_00405bbc(psVar6,uVar13);
  pWVar7 = CharNextW(lpsz);
  WVar1 = *pWVar7;
  pWStack_2cc = pWVar7;
  while (WVar1 != L'\0') {
    uVar13 = 0x20;
    while (WVar1 == L' ') {
      pWVar7 = pWVar7 + 1;
      WVar1 = *pWVar7;
    }
    if (*pWVar7 == L'\"') {
      pWVar7 = pWVar7 + 1;
      uVar13 = 0x22;
    }
    pWVar12 = pWVar7;
    if (*pWVar7 == L'/') {
      pWVar12 = pWVar7 + 1;
      if ((*pWVar12 == L'S') && ((pWVar7[2] == L' ' || (pWVar7[2] == L'\0')))) {
        DAT_0047afa0 = 1;
      }
      if (((*(int *)pWVar12 == CONCAT22(DAT_0040a2be,DAT_0040a2bc)) &&
          (*(uint *)(pWVar7 + 3) == (CONCAT22(DAT_0040a2c2,DAT_0040a2c0) | (int)DAT_0040a2be >> 0xf)
          )) && ((pWVar7[5] == L' ' || (pWVar7[5] == L'\0')))) {
        local_2c8 = local_2c8 | 4;
      }
      if ((*(int *)(pWVar7 + -1) == CONCAT22(DAT_0040a2b2,DAT_0040a2b0)) &&
         (*(uint *)pWVar12 == (CONCAT22(DAT_0040a2b6,DAT_0040a2b4) | (int)DAT_0040a2b2 >> 0xf))) {
        pWVar7[-1] = L'\0';
        FUN_004062ba(&DAT_004cf000,pWVar7 + 3);
        break;
      }
    }
    pWVar7 = (WCHAR *)FUN_00405bbc(pWVar12,uVar13);
    if (*pWVar7 == L'\"') {
      pWVar7 = pWVar7 + 1;
    }
    WVar1 = *pWVar7;
  }
  GetTempPathW(0x2000,(LPWSTR)&DAT_004df000);
  iVar4 = FUN_0040335e();
  if (iVar4 == 0) {
    GetWindowsDirectoryW((LPWSTR)&DAT_004df000,0x1ffb);
    lstrcatW((LPWSTR)&DAT_004df000,u__Temp_0040a2a4);
    iVar4 = FUN_0040335e();
    if (iVar4 == 0) {
      GetTempPathW(0x1ffc,(LPWSTR)&DAT_004df000);
      lstrcatW((LPWSTR)&DAT_004df000,(LPCWSTR)&DAT_0040a29c);
      SetEnvironmentVariableW(u_TEMP_0040a290,(LPCWSTR)&DAT_004df000);
      SetEnvironmentVariableW((LPCWSTR)&PTR_DAT_0040a288,(LPCWSTR)&DAT_004df000);
      iVar4 = FUN_0040335e();
      if (iVar4 == 0) goto LAB_004036fe;
    }
  }
  DeleteFileW((LPCWSTR)&DAT_004db000);
  local_2d4 = (wchar_t *)FUN_00402edd(local_2c8);
  if (local_2d4 != (wchar_t *)0x0) goto LAB_004036fe;
  if (DAT_0047af00 != 0) {
    piVar8 = (int *)FUN_00405bbc(&DAT_004cb000,0);
    if ((int *)0x4cafff < piVar8) {
      do {
        if ((*piVar8 == CONCAT22(DAT_0040a27e,DAT_0040a27c)) &&
           (piVar8[1] == (CONCAT22(DAT_0040a282,DAT_0040a280) | (int)DAT_0040a27e >> 0xf))) break;
        piVar8 = (int *)((int)piVar8 + -2);
      } while ((int *)0x4cafff < piVar8);
    }
    local_2d4 = u_Error_launching_installer_0040a1e8;
    if (piVar8 < &DAT_004cb000) {
      iVar4 = FUN_0040588b();
      lstrcatW((LPWSTR)&DAT_004df000,u__nsu_0040a270);
      if (iVar4 != 0) {
        lstrcatW((LPWSTR)&DAT_004df000,(LPCWSTR)&DAT_0040a26c);
      }
      lstrcatW((LPWSTR)&DAT_004df000,u__tmp_0040a260);
      iVar9 = lstrcmpiW((LPCWSTR)&DAT_004df000,(LPCWSTR)&DAT_004d7000);
      if (iVar9 != 0) {
        if (iVar4 == 0) {
          FUN_0040586e(&DAT_004df000);
        }
        else {
          FUN_004057f1(&DAT_004df000);
        }
        SetCurrentDirectoryW((LPCWSTR)&DAT_004df000);
        if (DAT_004cf000 == 0) {
          FUN_004062ba(&DAT_004cf000,&DAT_004d7000);
        }
        FUN_004062ba(&DAT_0047b000,pWStack_2cc);
        _DAT_0047f000 = CONCAT22(DAT_0040a25a,DAT_0040a258);
        iVar4 = 0x1a;
        do {
          FUN_004062dc(&DAT_0043c208,*(undefined4 *)(DAT_0047aef4 + 0x120));
          DeleteFileW((LPCWSTR)&DAT_0043c208);
          if ((local_2d4 != (wchar_t *)0x0) &&
             (BVar11 = CopyFileW((LPCWSTR)&DAT_004e7000,(LPCWSTR)&DAT_0043c208,1), BVar11 != 0)) {
            FUN_00406080(&DAT_0043c208,0);
            FUN_004062dc(&DAT_0043c208,*(undefined4 *)(DAT_0047aef4 + 0x124));
            pvVar10 = (HANDLE)FUN_004058a3(&DAT_0043c208);
            if (pvVar10 != (HANDLE)0x0) {
              CloseHandle(pvVar10);
              local_2d4 = (wchar_t *)0x0;
            }
          }
          _DAT_0047f000 = _DAT_0047f000 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        FUN_00406080(&DAT_004df000,0);
      }
      goto LAB_004036fe;
    }
    *(undefined2 *)piVar8 = 0;
    piVar8 = piVar8 + 2;
    iVar4 = FUN_00405c97(piVar8);
    if (iVar4 == 0) goto LAB_004036fe;
    FUN_004062ba(&DAT_004cf000,piVar8);
    FUN_004062ba(&DAT_004d3000,piVar8);
    local_2d4 = (wchar_t *)0x0;
  }
  DAT_0047afac = -1;
  local_2d0 = FUN_004039aa();
LAB_004036fe:
  FUN_004038d0();
  OleUninitialize();
  if (local_2d4 == (wchar_t *)0x0) {
    if (DAT_0047af94 != 0) {
      TokenHandle = &pWStack_2cc;
      DVar2 = 0x28;
      pvVar10 = GetCurrentProcess();
      BVar11 = OpenProcessToken(pvVar10,DVar2,TokenHandle);
      if (BVar11 != 0) {
        LookupPrivilegeValueW
                  ((LPCWSTR)0x0,u_SeShutdownPrivilege_0040a230,&_Stack_2c4.Privileges[0].Luid);
        _Stack_2c4.PrivilegeCount = 1;
        _Stack_2c4.Privileges[0].Attributes = 2;
        AdjustTokenPrivileges(pWStack_2cc,0,&_Stack_2c4,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
      }
      pcVar3 = (code *)FUN_00406694(4);
      if (((pcVar3 != (code *)0x0) && (iVar4 = (*pcVar3)(0,0,0,0x25,0x80040002), iVar4 == 0)) ||
         (BVar11 = ExitWindowsEx(2,0x80040002), BVar11 == 0)) {
        FUN_0040140b(9);
      }
    }
    if (DAT_0047afac != -1) {
      local_2d0 = DAT_0047afac;
    }
                    /* WARNING: Subroutine does not return */
    ExitProcess(local_2d0);
  }
  FUN_00405920(local_2d4,0x200010);
                    /* WARNING: Subroutine does not return */
  ExitProcess(2);
}



// ===== FUN_004038d0 @ 004038d0 (size 42) =====

void FUN_004038d0(void)

{
  if (DAT_0040a018 != (HANDLE)0xffffffff) {
    CloseHandle(DAT_0040a018);
    DAT_0040a018 = (HANDLE)0xffffffff;
  }
  FUN_00403915();
  FUN_004059cc(&DAT_004e3000,7);
  return;
}



// ===== FUN_004038fa @ 004038fa (size 27) =====

void FUN_004038fa(undefined4 param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0044020c; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[1])(param_1);
  }
  return;
}



// ===== FUN_00403915 @ 00403915 (size 53) =====

void FUN_00403915(void)

{
  undefined4 *puVar1;
  undefined4 *hMem;
  
  hMem = DAT_0044020c;
  FUN_004038fa(0);
  while (hMem != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*hMem;
    FreeLibrary((HMODULE)hMem[2]);
    GlobalFree(hMem);
    hMem = puVar1;
  }
  DAT_0044020c = (undefined4 *)0x0;
  return;
}



// ===== FUN_0040394a @ 0040394a (size 30) =====

undefined4 FUN_0040394a(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0044020c;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 0;
}



// ===== FUN_00403968 @ 00403968 (size 66) =====

undefined4 FUN_00403968(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0040394a(param_1);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    puVar3 = GlobalAlloc(0x40,0xc);
    if (puVar3 == (undefined4 *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      puVar3[2] = param_1;
      puVar3[1] = param_2;
      *puVar3 = DAT_0044020c;
      uVar2 = 0;
      DAT_0044020c = puVar3;
    }
  }
  return uVar2;
}



// ===== FUN_004039aa @ 004039aa (size 726) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

INT_PTR FUN_004039aa(void)

{
  undefined2 uVar1;
  ATOM AVar2;
  code *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  BOOL BVar9;
  INT_PTR IVar10;
  LPCWSTR lpString;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar8 = DAT_0047aef4;
  pcVar3 = (code *)FUN_00406694(2);
  if (pcVar3 == (code *)0x0) {
    _DAT_004db000 = 0x30;
    _DAT_004db002 = 0x78;
    _DAT_004db004 = 0;
    FUN_00406188(0x80000001,L"Control Panel\\Desktop\\ResourceLocale",0,&DAT_00450248,0);
    if (DAT_00450248 == 0) {
      FUN_00406188(0x80000003,&PTR_DAT_00408348,L"Locale",&DAT_00450248,0);
    }
    lstrcatW((LPWSTR)&DAT_004db000,&DAT_00450248);
  }
  else {
    uVar1 = (*pcVar3)();
    FUN_00406201(&DAT_004db000,uVar1);
  }
  FUN_00403c80();
  DAT_0047af80 = DAT_0047aefc & 0x20;
  _DAT_0047af9c = 0x10000;
  iVar4 = FUN_00405c97(&DAT_004cf000);
  if ((iVar4 == 0) && (*(int *)(iVar8 + 0x48) != 0)) {
    lpString = &DAT_0046ae80;
    FUN_00406188(*(undefined4 *)(iVar8 + 0x44),DAT_0047af38 + *(int *)(iVar8 + 0x48) * 2,
                 DAT_0047af38 + *(int *)(iVar8 + 0x4c) * 2,&DAT_0046ae80,0);
    if (DAT_0046ae80 != 0) {
      if (DAT_0046ae80 == 0x22) {
        lpString = (LPCWSTR)&DAT_0046ae82;
        puVar5 = (undefined2 *)FUN_00405bbc(&DAT_0046ae82,0x22);
        *puVar5 = 0;
      }
      iVar4 = lstrlenW(lpString);
      if (((lpString < lpString + iVar4 + -4) &&
          (iVar4 = lstrcmpiW(lpString + iVar4 + -4,u__exe_0040a388), iVar4 == 0)) &&
         ((DVar6 = GetFileAttributesW(lpString), DVar6 == 0xffffffff || ((DVar6 & 0x10) == 0)))) {
        FUN_00405bdb(lpString);
      }
      uVar7 = FUN_00405b8f(lpString);
      FUN_004062ba(&DAT_004cf000,uVar7);
    }
  }
  iVar4 = FUN_00405c97(&DAT_004cf000);
  if (iVar4 == 0) {
    FUN_004062dc(&DAT_004cf000,*(undefined4 *)(iVar8 + 0x118));
  }
  DAT_00472ec8 = LoadImageW(DAT_0047aee0,(LPCWSTR)0x67,1,0,0,0x8040);
  if (*(int *)(iVar8 + 0x50) == -1) {
LAB_00403ba7:
    iVar8 = FUN_0040140b(0);
    if (iVar8 == 0) {
      FUN_00403c80();
      if (DAT_0047afa0 == 0) {
        ShowWindow(DAT_00450228,5);
        iVar8 = FUN_00406624("RichEd20");
        if (iVar8 == 0) {
          FUN_00406624("RichEd32");
        }
        BVar9 = GetClassInfoW((HINSTANCE)0x0,L"RichEdit20W",(LPWNDCLASSW)&DAT_00472e80);
        if (BVar9 == 0) {
          GetClassInfoW((HINSTANCE)0x0,L"RichEdit",(LPWNDCLASSW)&DAT_00472e80);
          _DAT_00472ea4 = (undefined **)0x408318;
          RegisterClassW((WNDCLASSW *)&DAT_00472e80);
        }
        IVar10 = DialogBoxParamW(DAT_0047aee0,(LPCWSTR)(DAT_00472ec0 + 0x69U & 0xffff),(HWND)0x0,
                                 (DLGPROC)&LAB_00403d58,0);
        FUN_0040140b(5);
        FUN_004038fa(1);
        return IVar10;
      }
      iVar8 = FUN_004053f5(0);
      if (iVar8 == 0) {
        FUN_0040140b(1);
        goto LAB_00403c76;
      }
      if (DAT_00472eac == 0) {
        FUN_0040140b(2);
      }
    }
    IVar10 = 2;
  }
  else {
    _DAT_00472e84 = FUN_00401000;
    _DAT_00472e90 = DAT_0047aee0;
    _DAT_00472ea4 = &PTR_DAT_0040a380;
    _DAT_00472e94 = DAT_00472ec8;
    AVar2 = RegisterClassW((WNDCLASSW *)&DAT_00472e80);
    if (AVar2 != 0) {
      SystemParametersInfoW(0x30,0,&iStack_10,0);
      DAT_00450228 = CreateWindowExW(0x80,(LPCWSTR)&PTR_DAT_0040a380,(LPCWSTR)0x0,0x80000000,
                                     iStack_10,iStack_c,iStack_8 - iStack_10,iStack_4 - iStack_c,
                                     (HWND)0x0,(HMENU)0x0,DAT_0047aee0,(LPVOID)0x0);
      goto LAB_00403ba7;
    }
LAB_00403c76:
    IVar10 = 0;
  }
  return IVar10;
}



// ===== FUN_00403c80 @ 00403c80 (size 185) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c80(void)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = 0xffff;
  uVar1 = FUN_0040621a(&DAT_004db000);
  do {
    if (DAT_0047af44 != 0) {
      puVar2 = (ushort *)(*(int *)(DAT_0047aef4 + 100) * DAT_0047af44 + _DAT_0047af40);
      iVar4 = DAT_0047af44;
      do {
        puVar2 = (ushort *)((int)puVar2 - *(int *)(DAT_0047aef4 + 100));
        iVar4 = iVar4 + -1;
        if (((*puVar2 ^ uVar1) & uVar3) == 0) {
          DAT_00472ec0 = *(undefined4 *)(puVar2 + 1);
          DAT_0047afa8 = *(undefined4 *)(puVar2 + 3);
          DAT_00472ebc = puVar2 + 5;
          if (DAT_00472ebc != (ushort *)0x0) {
            FUN_00406201(&DAT_004db000,*puVar2);
            FUN_00403d39();
            piVar5 = DAT_0047af28;
            for (iVar4 = DAT_0047af2c; iVar4 != 0; iVar4 = iVar4 + -1) {
              if (*piVar5 != 0) {
                FUN_004062dc(piVar5 + 6,*piVar5);
              }
              piVar5 = piVar5 + 0x1006;
            }
            return;
          }
          break;
        }
      } while (iVar4 != 0);
    }
    if (uVar3 == 0xffff) {
      uVar3 = 0x3ff;
    }
    else {
      uVar3 = 0;
    }
  } while( true );
}



// ===== FUN_00403d39 @ 00403d39 (size 31) =====

undefined * FUN_00403d39(void)

{
  FUN_004062dc(&DAT_00472ee0,0xfffffffe);
  SetWindowTextW(DAT_00450228,(LPCWSTR)&DAT_00472ee0);
  return &DAT_00472ee0;
}



// ===== FUN_0040420a @ 0040420a (size 39) =====

void FUN_0040420a(WPARAM param_1)

{
  if (param_1 == 0x78) {
    DAT_00472eac = DAT_00472eac + 1;
  }
  SendMessageW(DAT_0047aee8,0x408,param_1,0);
  return;
}



// ===== FUN_00404231 @ 00404231 (size 34) =====

void FUN_00404231(HWND param_1,int param_2,undefined4 param_3)

{
  LPCWSTR lpString;
  
  lpString = (LPCWSTR)FUN_004062dc(0,param_3);
  SetDlgItemTextW(param_1,param_2 + 1000,lpString);
  return;
}



// ===== FUN_00404253 @ 00404253 (size 19) =====

void FUN_00404253(BOOL param_1)

{
  EnableWindow(DAT_00450244,param_1);
  return;
}



// ===== FUN_00404266 @ 00404266 (size 23) =====

void FUN_00404266(WPARAM param_1)

{
  SendMessageW(DAT_0047aee8,0x28,param_1,1);
  return;
}



// ===== FUN_0040427d @ 0040427d (size 27) =====

void FUN_0040427d(UINT param_1)

{
  if (DAT_00472eb8 != (HWND)0x0) {
    SendMessageW(DAT_00472eb8,param_1,0,0);
  }
  return;
}



// ===== FUN_00404298 @ 00404298 (size 207) =====

COLORREF FUN_00404298(int param_1,HDC param_2,HWND param_3)

{
  COLORREF *pCVar1;
  COLORREF color;
  HBRUSH pHVar2;
  LOGBRUSH local_10;
  
  if ((((param_1 - 0x133U < 6) &&
       (pCVar1 = (COLORREF *)GetWindowLongW(param_3,-0x15), pCVar1 != (COLORREF *)0x0)) &&
      (pCVar1[2] < 2)) && ((pCVar1[4] < 3 && ((pCVar1[5] & 0xffffffe0) == 0)))) {
    color = *pCVar1;
    if ((pCVar1[5] & 2) != 0) {
      color = GetSysColor(color);
    }
    if ((pCVar1[5] & 1) != 0) {
      SetTextColor(param_2,color);
    }
    SetBkMode(param_2,pCVar1[4]);
    local_10.lbColor = pCVar1[1];
    if ((pCVar1[5] & 8) != 0) {
      local_10.lbColor = GetSysColor(local_10.lbColor);
    }
    if ((pCVar1[5] & 4) != 0) {
      SetBkColor(param_2,local_10.lbColor);
    }
    if ((pCVar1[5] & 0x10) != 0) {
      local_10.lbStyle = pCVar1[2];
      if ((HGDIOBJ)pCVar1[3] != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)pCVar1[3]);
      }
      pHVar2 = CreateBrushIndirect(&local_10);
      pCVar1[3] = (COLORREF)pHVar2;
    }
    return pCVar1[3];
  }
  return 0;
}



// ===== FUN_00404367 @ 00404367 (size 58) =====

undefined4 FUN_00404367(int param_1,LPWSTR param_2,uint param_3,int *param_4)

{
  int iVar1;
  
  lstrcpynW(param_2,(LPCWSTR)(DAT_00440214 + param_1),param_3 >> 1);
  iVar1 = lstrlenW(param_2);
  *param_4 = iVar1 * 2;
  DAT_00440214 = DAT_00440214 + iVar1 * 2;
  return 0;
}



// ===== FUN_004043a1 @ 004043a1 (size 79) =====

undefined4 FUN_004043a1(int param_1,LPSTR param_2,uint param_3,int *param_4)

{
  uint cchWideChar;
  int iVar1;
  
  cchWideChar = lstrlenW((LPCWSTR)(param_1 + DAT_00440214 * 2));
  if (param_3 >> 1 <= cchWideChar) {
    cchWideChar = param_3 >> 1;
  }
  iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)(param_1 + DAT_00440214 * 2),cchWideChar,param_2,param_3,
                              (LPCSTR)0x0,(LPBOOL)0x0);
  *param_4 = iVar1;
  DAT_00440214 = DAT_00440214 + iVar1;
  return 0;
}



// ===== FUN_004043f0 @ 004043f0 (size 651) =====

undefined4 FUN_004043f0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  ushort *puVar2;
  LPCWSTR lpString;
  HWND pHVar3;
  DWORD lParam;
  int iVar4;
  HCURSOR pHVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam_00;
  LPCWSTR local_10;
  int local_c;
  code *local_8;
  
  if (param_2 == 0x110) {
    iVar4 = *(int *)(param_4 + 0x30);
    if (iVar4 < 0) {
      iVar4 = *(int *)(DAT_00472ebc - (iVar4 * 4 + 4));
    }
    puVar2 = (ushort *)(DAT_0047af38 + iVar4 * 2);
    uVar7 = (uint)*puVar2;
    lpString = (LPCWSTR)(puVar2 + 1);
    local_c = 0;
    local_8 = FUN_004043a1;
    if (uVar7 != 2) {
      local_8 = FUN_00404367;
    }
    uVar8 = ~*(uint *)(param_4 + 0x14) >> 5 & 1 | *(uint *)(param_4 + 0x14) & 1;
    local_10 = lpString;
    FUN_00404231(param_1,0x22,*(undefined4 *)(param_4 + 0x34));
    FUN_00404231(param_1,0x23,*(undefined4 *)(param_4 + 0x38));
    CheckDlgButton(param_1,(uVar8 == 0) + 0x40a,1);
    FUN_00404253(uVar8);
    pHVar3 = GetDlgItem(param_1,1000);
    FUN_00404266(pHVar3);
    SendMessageW(pHVar3,0x45b,1,0);
    lParam = *(DWORD *)(DAT_0047aef4 + 0x68);
    if ((int)lParam < 0) {
      lParam = GetSysColor(-lParam);
    }
    SendMessageW(pHVar3,0x443,0,lParam);
    SendMessageW(pHVar3,0x445,0,0x4010000);
    iVar4 = lstrlenW(lpString);
    SendMessageW(pHVar3,0x435,0,iVar4);
    DAT_00440214 = 0;
    SendMessageW(pHVar3,0x449,uVar7,(LPARAM)&local_10);
    DAT_00440214 = 0;
    return 0;
  }
  if (param_2 == 0x111) {
    if ((((short)((uint)param_3 >> 0x10) != 0) || (DAT_00440214 != 0)) ||
       (puVar1 = (uint *)(DAT_00448220 + 0x14), (*(byte *)puVar1 & 0x20) == 0)) goto LAB_00404668;
    lParam_00 = 0;
    wParam = 0;
    Msg = 0xf0;
    pHVar3 = GetDlgItem(param_1,0x40a);
    uVar7 = SendMessageW(pHVar3,Msg,wParam,lParam_00);
    *puVar1 = *puVar1 & 0xfffffffe | uVar7 & 1;
    FUN_00404253(uVar7 & 1);
    FUN_0040467b();
  }
  if (param_2 == 0x4e) {
    pHVar3 = GetDlgItem(param_1,1000);
    if ((*(int *)(param_4 + 8) == 0x70b) && (*(int *)(param_4 + 0xc) == 0x201)) {
      local_c = *(int *)(param_4 + 0x1c);
      local_10 = *(LPCWSTR *)(param_4 + 0x18);
      local_8 = (code *)&DAT_0046ae80;
      if ((uint)(local_c - (int)local_10) < 0x4000) {
        SendMessageW(pHVar3,1099,0,(LPARAM)&local_10);
        pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
        SetCursor(pHVar5);
        FUN_0040469f(param_1,local_8,1);
        pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
        SetCursor(pHVar5);
      }
    }
    if ((*(int *)(param_4 + 8) == 0x700) && (*(int *)(param_4 + 0xc) == 0x100)) {
      if (*(int *)(param_4 + 0x10) == 0xd) {
        SendMessageW(DAT_0047aee8,0x111,1,0);
      }
      if (*(int *)(param_4 + 0x10) == 0x1b) {
        SendMessageW(DAT_0047aee8,0x10,0,0);
      }
      return 1;
    }
  }
  else if (param_2 == 0x40b) {
    DAT_00440214 = DAT_00440214 + 1;
  }
LAB_00404668:
  uVar6 = FUN_00404298(param_2,param_3,param_4);
  return uVar6;
}



// ===== FUN_0040467b @ 0040467b (size 36) =====

void FUN_0040467b(void)

{
  HWND hWnd;
  
  hWnd = DAT_00440210;
  if (DAT_0047af8c == 0) {
    hWnd = DAT_00450244;
  }
  SendMessageW(hWnd,0xf4,1,1);
  return;
}



// ===== FUN_0040469f @ 0040469f (size 60) =====

void FUN_0040469f(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  wchar_t *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = 0;
  local_28 = 0;
  local_38 = param_1;
  local_3c = 0x500;
  local_30 = param_2;
  local_24 = 1;
  local_34 = u_open_0040a394;
  FUN_004058e6(local_40);
  return;
}



// ===== FUN_004046db @ 004046db (size 71) =====

void FUN_004046db(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  if (param_2 == 0x110) {
    FUN_00404231(param_1,0x1d,*(undefined4 *)(param_4 + 0x30));
    SetDlgItemTextW(param_1,1000,(LPCWSTR)(&DAT_0047b000 + *(int *)(param_4 + 0x3c) * 0x4000));
  }
  FUN_00404298(param_2,param_3,param_4);
  return;
}



// ===== FUN_00404722 @ 00404722 (size 854) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404722(HWND param_1,int param_2,uint param_3,int param_4)

{
  HWND hWnd;
  int iVar1;
  code *pcVar2;
  LPITEMIDLIST pv;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  LPCWSTR lpString;
  LPCITEMIDLIST *ppIVar6;
  undefined2 *puVar7;
  _browseinfoW local_50;
  uint local_30;
  uint local_2c;
  undefined1 local_28 [4];
  DWORD local_24;
  int local_20;
  undefined1 local_1c [4];
  DWORD local_18;
  DWORD local_14;
  code *local_10;
  int local_c;
  int local_8;
  
  local_20 = DAT_00448220;
  local_c = *(int *)(DAT_00448220 + 0x38);
  lpString = (LPCWSTR)(&DAT_0047b000 + *(int *)(DAT_00448220 + 0x3c) * 0x4000);
  if (param_2 == 0x40b) {
    FUN_00405904(0x3fb,lpString);
    FUN_0040654e(lpString);
  }
  if (param_2 == 0x110) {
    hWnd = GetDlgItem(param_1,0x3fb);
    iVar1 = FUN_00405c06(lpString);
    if ((iVar1 != 0) && (iVar1 = FUN_00405c3a(lpString), iVar1 == 0)) {
      FUN_00405b8f(lpString);
    }
    DAT_00472eb8 = param_1;
    SetWindowTextW(hWnd,lpString);
    FUN_00404231(param_1,1,*(undefined4 *)(param_4 + 0x34));
    FUN_00404231(param_1,0x14,*(undefined4 *)(param_4 + 0x30));
    FUN_00404266(hWnd);
    pcVar2 = (code *)FUN_00406694(7);
    if (pcVar2 == (code *)0x0) goto LAB_00404a63;
    (*pcVar2)(hWnd,1);
  }
  iVar1 = local_c;
  if (param_2 == 0x111) {
    if ((param_3 & 0xffff) == 0x3fb) {
      if ((short)(param_3 >> 0x10) != 0x300) goto LAB_00404a63;
      param_2 = 0x40f;
    }
    if ((param_3 & 0xffff) == 0x3e9) {
      ppIVar6 = &local_50.pidlRoot;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppIVar6 = (LPCITEMIDLIST)0x0;
        ppIVar6 = ppIVar6 + 1;
      }
      local_50.hwndOwner = param_1;
      local_50.pszDisplayName = &DAT_00450248;
      local_50.lpfn = FUN_00404a78;
      local_50.lParam = (LPARAM)lpString;
      local_50.lpszTitle = (LPCWSTR)FUN_004062dc(&DAT_00444220,iVar1);
      local_50.ulFlags = 0x41;
      pv = SHBrowseForFolderW(&local_50);
      if (pv == (LPITEMIDLIST)0x0) {
        param_2 = 0x40f;
      }
      else {
        CoTaskMemFree(pv);
        FUN_00405b8f(lpString);
        if ((*(int *)(DAT_0047aef4 + 0x11c) != 0) && (lpString == &DAT_004cf000)) {
          FUN_004062dc(0,*(int *)(DAT_0047aef4 + 0x11c));
          iVar1 = lstrcmpiW(&DAT_0046ae80,&DAT_00450248);
          if (iVar1 != 0) {
            lstrcatW(&DAT_004cf000,&DAT_0046ae80);
          }
        }
        DAT_00450238 = DAT_00450238 + 1;
        SetDlgItemTextW(param_1,0x3fb,lpString);
      }
    }
  }
  if ((param_2 == 0x40f) || (param_2 == 0x405)) {
    local_8 = 0;
    local_c = 0;
    FUN_00405904(0x3fb,lpString);
    iVar1 = FUN_00405c97(lpString);
    if (iVar1 == 0) {
      local_8 = 1;
    }
    FUN_004062ba(&DAT_00440218,lpString);
    local_10 = (code *)FUN_00406694(1);
    if (local_10 != (code *)0x0) {
      puVar7 = (undefined2 *)0x0;
      do {
        iVar1 = (*local_10)(&DAT_00440218,&local_30,local_1c,local_28);
        if (iVar1 != 0) {
          local_30 = local_30 >> 10 | local_2c << 0x16;
          local_2c = local_2c >> 10;
          local_c = 1;
          goto LAB_004049bc;
        }
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
        puVar7 = (undefined2 *)FUN_00405bdb(&DAT_00440218);
        *puVar7 = 0;
        puVar7 = puVar7 + -1;
        *puVar7 = 0x5c;
      } while (puVar7 != (undefined2 *)&DAT_00440218);
    }
    FUN_004062ba(&DAT_00440218,lpString);
    puVar7 = (undefined2 *)FUN_00405c3a(&DAT_00440218);
    if (puVar7 != (undefined2 *)0x0) {
      *puVar7 = 0;
    }
    BVar3 = GetDiskFreeSpaceW((LPCWSTR)&DAT_00440218,&local_14,&local_18,(LPDWORD)&local_10,
                              &local_24);
    if (BVar3 != 0) {
      local_30 = MulDiv(local_14 * local_18,(int)local_10,0x400);
      local_2c = (int)local_30 >> 0x1f;
      local_c = 1;
    }
LAB_004049bc:
    uVar4 = FUN_00404bbf(5);
    if (((local_c != 0) && (local_2c == 0)) && (local_30 < uVar4)) {
      local_8 = 2;
    }
    if (*(int *)(DAT_00472ebc + 0x10) != 0) {
      FUN_00404ba7(0x3ff,0xfffffffb,uVar4);
      if (local_c == 0) {
        SetDlgItemTextW(param_1,0x400,(LPCWSTR)&DAT_00440208);
      }
      else {
        FUN_00404ade(0x400,0xfffffffc,local_30,local_2c);
      }
    }
    _DAT_0047afa4 = local_8;
    if (local_8 == 0) {
      local_8 = FUN_0040140b(7);
    }
    if ((*(uint *)(local_20 + 0x14) & 0x400) != 0) {
      local_8 = 0;
    }
    FUN_00404253(local_8 == 0);
    if ((local_8 == 0) && (DAT_00450238 == 0)) {
      FUN_0040467b();
    }
    DAT_00450238 = 0;
  }
LAB_00404a63:
  FUN_00404298(param_2,param_3,param_4);
  return;
}



// ===== FUN_00404a78 @ 00404a78 (size 102) =====

undefined4 FUN_00404a78(HWND param_1,int param_2,LPCITEMIDLIST param_3,LPWSTR param_4)

{
  BOOL BVar1;
  int iVar2;
  LPARAM lParam;
  
  if (param_2 == 1) {
    FUN_00405904(0x3fb,param_4);
    SendMessageW(param_1,0x467,1,(LPARAM)param_4);
  }
  if (param_2 == 2) {
    BVar1 = SHGetPathFromIDListW(param_3,param_4);
    if ((BVar1 == 0) || (iVar2 = FUN_0040140b(7), iVar2 != 0)) {
      lParam = 0;
    }
    else {
      lParam = 1;
    }
    SendMessageW(param_1,0x465,0,lParam);
    return 0;
  }
  return 0;
}



// ===== FUN_00404ade @ 00404ade (size 201) =====

void FUN_00404ade(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  sbyte sVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  undefined1 local_84 [64];
  undefined1 local_44 [64];
  
  uVar2 = 0xffffffdc;
  if (param_4 == 0) {
    sVar5 = 0x14;
    if (param_3 < 0x100000) {
      sVar5 = 10;
      uVar2 = 0xffffffdd;
    }
    if (param_3 < 0x400) {
      sVar5 = 0;
      uVar2 = 0xffffffde;
    }
    if (param_3 < 0xffff3333) {
      param_3 = (1 << sVar5) / 0x14 + param_3;
    }
    uVar6 = param_3 >> sVar5;
    uVar7 = ((param_3 & 0xffffff) * 10 >> sVar5) % 10;
  }
  else {
    uVar6 = param_3 >> 0x14 | param_4 << 0xc;
    uVar7 = 0;
  }
  uVar1 = FUN_004062dc(local_44,0xffffffdf);
  uVar2 = FUN_004062dc(local_84,uVar2);
  pwVar8 = u__u__u_s_s_0040a3a0;
  iVar3 = FUN_004062dc(&DAT_00450248,param_2);
  iVar4 = lstrlenW(&DAT_00450248);
  wsprintfW((LPWSTR)(iVar3 + iVar4 * 2),pwVar8,uVar6,uVar7,uVar2,uVar1);
  SetDlgItemTextW(DAT_00472eb8,param_1,&DAT_00450248);
  return;
}



// ===== FUN_00404ba7 @ 00404ba7 (size 24) =====

void FUN_00404ba7(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00404ade(param_1,param_2,param_3,0);
  return;
}



// ===== FUN_00404bbf @ 00404bbf (size 45) =====

int FUN_00404bbf(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = DAT_0047af28;
  for (iVar3 = DAT_0047af2c; iVar3 != 0; iVar3 = iVar3 + -1) {
    if ((*(byte *)(iVar2 + 8) & 1) != 0) {
      iVar1 = iVar1 + *(int *)(iVar2 + param_1 * 4);
    }
    iVar2 = iVar2 + 0x4018;
  }
  return iVar1;
}



// ===== FUN_00404bec @ 00404bec (size 128) =====

undefined4 FUN_00404bec(HWND param_1,int param_2)

{
  DWORD DVar1;
  undefined4 local_3c;
  LRESULT local_38;
  undefined4 local_18;
  tagPOINT local_14;
  byte local_c;
  LRESULT local_8;
  
  local_38 = SendMessageW(param_1,0x110a,9,0);
  if (param_2 != 0) {
    DVar1 = GetMessagePos();
    local_14.x = (LONG)(short)DVar1;
    local_14.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient(param_1,&local_14);
    SendMessageW(param_1,0x1111,0,(LPARAM)&local_14);
    local_38 = local_8;
    if ((local_c & 0x66) == 0) {
      return 0xffffffff;
    }
  }
  local_3c = 4;
  SendMessageW(param_1,0x113e,0,(LPARAM)&local_3c);
  return local_18;
}



// ===== FUN_00404c6c @ 00404c6c (size 50) =====

void FUN_00404c6c(undefined4 param_1,undefined4 param_2)

{
  FUN_004062ba(&DAT_00450248,&DAT_0047b000);
  FUN_00406201(&DAT_0047b000,param_2);
  FUN_0040140b(param_1);
  FUN_004062ba(&DAT_0047b000,&DAT_00450248);
  return;
}



// ===== FUN_00404c9e @ 00404c9e (size 1528) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404c9e(HWND param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  HBITMAP hbmImage;
  LRESULT LVar3;
  LPARAM LVar4;
  WPARAM WVar5;
  LRESULT LVar6;
  uint uVar7;
  undefined4 uVar8;
  HWND hWnd;
  int iVar9;
  uint *puVar10;
  LPARAM local_54 [5];
  uint local_40;
  uint *local_3c;
  uint *local_38;
  undefined4 local_2c;
  int local_28;
  HGLOBAL local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  HWND local_c;
  HWND local_8;
  
  local_c = GetDlgItem(param_1,0x3f9);
  local_8 = GetDlgItem(param_1,0x408);
  local_14 = DAT_0047af28;
  local_18 = DAT_0047aef4 + 0x94;
  if (param_2 == 0x110) {
    local_20 = (HGLOBAL)0x0;
    local_10 = 2;
    _DAT_0047af60 = param_1;
    DAT_00450240 = GlobalAlloc(0x40,DAT_0047af2c << 2);
    hbmImage = LoadBitmapW(DAT_0047aee0,(LPCWSTR)0x6e);
    DAT_00450234 = 0xffffffff;
    DAT_0045023c = SetWindowLongW(local_8,-4,0x405296);
    DAT_0045022c = ImageList_Create(0x10,0x10,0x21,6,0);
    ImageList_AddMasked(DAT_0045022c,hbmImage,0xff00ff);
    SendMessageW(local_8,0x1109,2,(LPARAM)DAT_0045022c);
    LVar3 = SendMessageW(local_8,0x111c,0,0);
    if (LVar3 < 0x10) {
      SendMessageW(local_8,0x111b,0x10,0);
    }
    DeleteObject(hbmImage);
    iVar9 = 0;
    do {
      iVar1 = *(int *)(local_18 + iVar9 * 4);
      if (iVar1 != 0) {
        if (iVar9 != 0x20) {
          local_10 = 0;
        }
        LVar4 = FUN_004062dc(0,iVar1);
        WVar5 = SendMessageW(local_c,0x143,0,LVar4);
        SendMessageW(local_c,0x151,WVar5,iVar9);
      }
      uVar7 = local_10;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x21);
    FUN_00404231(param_1,0x15,*(undefined4 *)(param_4 + 0x30 + local_10 * 4));
    FUN_00404231(param_1,0x16,*(undefined4 *)(param_4 + 0x34 + uVar7 * 4));
    iVar9 = 0;
    LVar3 = 0;
    if (DAT_0047af2c < 1) {
LAB_00404eca:
      uVar7 = GetWindowLongW(local_8,-0x10);
      SetWindowLongW(local_8,-0x10,uVar7 & 0xfffffffb);
    }
    else {
      local_1c = (uint *)(local_14 + 8);
      do {
        puVar10 = local_1c + 4;
        if ((short)*puVar10 != 0) {
          uVar7 = *local_1c;
          local_54[4] = uVar7 & 0x20;
          local_54[1] = 0xffff0002;
          local_54[2] = 0xd;
          local_40 = 0x20;
          local_54[0] = LVar3;
          local_3c = puVar10;
          local_28 = iVar9;
          if ((uVar7 & 2) == 0) {
            if ((uVar7 & 4) == 0) {
              LVar6 = SendMessageW(local_8,0x1132,0,(LPARAM)local_54);
              *(LRESULT *)((int)DAT_00450240 + iVar9 * 4) = LVar6;
            }
            else {
              LVar3 = SendMessageW(local_8,0x110a,3,LVar3);
            }
          }
          else {
            local_54[2] = 0x4d;
            local_2c = 1;
            LVar3 = SendMessageW(local_8,0x1132,0,(LPARAM)local_54);
            local_20 = (HGLOBAL)0x1;
            *(LRESULT *)((int)DAT_00450240 + iVar9 * 4) = LVar3;
            LVar3 = *(LRESULT *)((int)DAT_00450240 + iVar9 * 4);
          }
        }
        iVar9 = iVar9 + 1;
        local_1c = local_1c + 0x1006;
      } while (iVar9 < DAT_0047af2c);
      if (local_20 == (HGLOBAL)0x0) goto LAB_00404eca;
    }
    if (local_10 == 0) {
      ShowWindow(local_c,5);
      FUN_00404266(local_c);
      goto LAB_00405281;
    }
    FUN_00404266(local_8);
  }
  if (param_2 == 0x405) {
    param_3 = 0;
    param_2 = 0x40f;
    param_4 = 1;
  }
  if (((param_2 == 0x4e) || (param_2 == 0x413)) &&
     ((local_10 = param_4, param_2 == 0x413 || (*(int *)(param_4 + 4) == 0x408)))) {
    if (((DAT_0047aefc & 0x200) == 0) &&
       (((param_2 == 0x413 || (*(int *)(param_4 + 8) == -2)) &&
        (iVar9 = FUN_00404bec(local_8,param_2 != 0x413), -1 < iVar9)))) {
      puVar10 = (uint *)(iVar9 * 0x4018 + 8 + local_14);
      uVar7 = *puVar10;
      if ((uVar7 & 0x10) == 0) {
        if ((uVar7 & 0x40) == 0) {
          uVar7 = uVar7 ^ 1;
        }
        else if ((char)((byte)uVar7 ^ 0x80) < '\0') {
          uVar7 = uVar7 ^ 0x80 | 1;
        }
        else {
          uVar7 = (uVar7 ^ 0x80) & 0xfffffffe;
        }
        *puVar10 = uVar7;
        FUN_0040117d(iVar9);
        param_3 = iVar9 + 1;
        param_4 = ~DAT_0047aefc >> 8 & 1;
        param_2 = 0x40f;
      }
    }
    if (local_10 != 0) {
      if (*(int *)(local_10 + 8) == -0x1c3) {
        SendMessageW(local_8,0x419,0,*(LPARAM *)(local_10 + 0x5c));
      }
      if (*(int *)(local_10 + 8) == -0x1c7) {
        if (*(int *)(local_10 + 0xc) == 2) {
          puVar10 = (uint *)(*(int *)(local_10 + 0x5c) * 0x4018 + 8 + local_14);
          *puVar10 = *puVar10 | 0x20;
        }
        else {
          puVar10 = (uint *)(*(int *)(local_10 + 0x5c) * 0x4018 + 8 + local_14);
          *puVar10 = *puVar10 & 0xffffffdf;
        }
      }
    }
  }
  if (param_2 == 0x111) {
    if ((((short)param_3 != 0x3f9) || ((short)((uint)param_3 >> 0x10) != 1)) ||
       (WVar5 = SendMessageW(local_c,0x147,0,0), WVar5 == 0xffffffff)) goto LAB_00405281;
    LVar4 = SendMessageW(local_c,0x150,WVar5,0);
    if ((LVar4 == -1) || (*(int *)(local_18 + LVar4 * 4) == 0)) {
      LVar4 = 0x20;
    }
    FUN_00401299(LVar4);
    SendMessageW(param_1,0x420,0,LVar4);
    param_3 = -1;
    param_4 = 0;
    param_2 = 0x40f;
  }
  if (param_2 == 0x200) {
    SendMessageW(local_8,0x200,0,0);
  }
  if (param_2 == 0x40b) {
    if (DAT_0045022c != (HIMAGELIST)0x0) {
      ImageList_Destroy(DAT_0045022c);
    }
    if (DAT_00450240 != (HGLOBAL)0x0) {
      GlobalFree(DAT_00450240);
    }
    DAT_0045022c = (HIMAGELIST)0x0;
    DAT_00450240 = (HGLOBAL)0x0;
    _DAT_0047af60 = (HWND)0x0;
  }
  if (param_2 == 0x40f) {
    FUN_004011ef(0,0);
    if (param_3 != 0) {
      iVar9 = param_3;
      if (param_3 != -1) {
        iVar9 = param_3 + -1;
      }
      FUN_00404c6c(8,iVar9);
    }
    if (param_4 != 0) {
      param_4 = FUN_004012e2(DAT_00450240);
      FUN_00401299(param_4);
      iVar9 = 0;
      WVar5 = 0;
      if (0 < (int)param_4) {
        do {
          if (*(int *)(local_18 + iVar9 * 4) != 0) {
            WVar5 = WVar5 + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)param_4);
      }
      SendMessageW(local_c,0x14e,WVar5,0);
      param_2 = 0x420;
    }
    FUN_004011ef(0,0);
    local_20 = DAT_00450240;
    local_3c = (uint *)0xf030;
    local_14 = 0;
    if (0 < DAT_0047af2c) {
      puVar10 = (uint *)(DAT_0047af28 + 8);
      do {
        uVar7 = *(uint *)((int)local_20 + local_14 * 4);
        if (uVar7 != 0) {
          uVar2 = *puVar10;
          local_54[3] = 8;
          if ((uVar2 & 0x100) != 0) {
            local_38 = puVar10 + 4;
            local_54[3] = 9;
            *(byte *)((int)puVar10 + 1) = *(byte *)((int)puVar10 + 1) & 0xfe;
          }
          if ((uVar2 & 0x40) == 0) {
            iVar9 = (uVar2 & 1) + 1;
            if ((uVar2 & 0x10) != 0) {
              iVar9 = (uVar2 & 1) + 4;
            }
          }
          else {
            iVar9 = 3;
          }
          local_40 = (iVar9 << 0xb | uVar2 & 8) * 2 | uVar2 & 0x20;
          local_54[4] = uVar7;
          SendMessageW(local_8,0x1102,((int)uVar2 >> 5 & 1U) + 1,uVar7);
          SendMessageW(local_8,0x113f,0,(LPARAM)(local_54 + 3));
        }
        local_14 = local_14 + 1;
        puVar10 = puVar10 + 0x1006;
      } while (local_14 < DAT_0047af2c);
    }
    InvalidateRect(local_8,(RECT *)0x0,1);
    if (*(int *)(DAT_00472ebc + 0x10) != 0) {
      uVar8 = FUN_00404bbf(5);
      FUN_00404ba7(0x3ff,0xfffffffb,uVar8);
    }
  }
  if ((param_2 == 0x420) && ((DAT_0047aefc & 0x100) != 0)) {
    iVar9 = (uint)(param_4 == 0x20) << 3;
    ShowWindow(local_8,iVar9);
    hWnd = GetDlgItem(param_1,0x3fe);
    ShowWindow(hWnd,iVar9);
  }
LAB_00405281:
  FUN_00404298(param_2,param_3,param_4);
  return;
}



// ===== FUN_00405296 @ 00405296 (size 140) =====

LRESULT FUN_00405296(HWND param_1,UINT param_2,WPARAM param_3,int param_4)

{
  BOOL BVar1;
  LRESULT LVar2;
  
  if (param_2 == 0x102) {
    if (param_3 == 0x20) {
      FUN_0040427d(0x413);
      return 0;
    }
  }
  else {
    if (param_2 == 0x200) {
      BVar1 = IsWindowVisible(param_1);
      if (BVar1 == 0) goto LAB_00405308;
      param_4 = FUN_00404bec(param_1,1);
      param_2 = 0x419;
    }
    if ((param_2 == 0x419) && (DAT_00450234 != param_4)) {
      DAT_00450234 = param_4;
      FUN_00404c6c(6,param_4);
    }
  }
LAB_00405308:
  LVar2 = CallWindowProcW(DAT_0045023c,param_1,param_2,param_3,param_4);
  return LVar2;
}



// ===== FUN_00405322 @ 00405322 (size 211) =====

void FUN_00405322(undefined4 param_1,LPCWSTR param_2)

{
  int iVar1;
  int iVar2;
  LRESULT LVar3;
  uint uVar4;
  undefined4 local_34;
  WPARAM local_30;
  undefined4 local_2c;
  undefined *local_20;
  uint local_c;
  HWND local_8;
  
  local_8 = DAT_00472ec4;
  if (DAT_00472ec4 != (HWND)0x0) {
    local_c = DAT_0047afb4;
    uVar4 = DAT_0047afb4 & 1;
    if (uVar4 == 0) {
      FUN_004062dc(&DAT_00448228,param_1);
    }
    iVar1 = lstrlenW((LPCWSTR)&DAT_00448228);
    if (param_2 != (LPCWSTR)0x0) {
      iVar2 = lstrlenW(param_2);
      if (0x7fff < (uint)(iVar2 + iVar1)) {
        return;
      }
      lstrcatW((LPWSTR)&DAT_00448228,param_2);
    }
    if ((local_c & 4) == 0) {
      SetWindowTextW(DAT_00472ea8,(LPCWSTR)&DAT_00448228);
    }
    if ((local_c & 2) == 0) {
      local_20 = &DAT_00448228;
      local_34 = 1;
      LVar3 = SendMessageW(local_8,0x1004,0,0);
      local_30 = LVar3 - uVar4;
      local_2c = 0;
      SendMessageW(local_8,0x104d - uVar4,0,(LPARAM)&local_34);
      SendMessageW(local_8,0x1013,local_30,0);
    }
    if (uVar4 != 0) {
      *(undefined2 *)(&DAT_00448228 + iVar1 * 2) = 0;
    }
  }
  return;
}



// ===== FUN_004053f5 @ 004053f5 (size 108) =====

int FUN_004053f5(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = DAT_0047af2c;
  iVar2 = DAT_0047af28;
  uVar1 = OleInitialize((LPVOID)0x0);
  DAT_0047afb8 = DAT_0047afb8 | uVar1;
  FUN_0040427d(0);
  if (iVar4 != 0) {
    puVar3 = (undefined4 *)(iVar2 + 0xc);
    do {
      iVar4 = iVar4 + -1;
      if (((*(byte *)(puVar3 + -1) & 1) != 0) && (iVar2 = FUN_00401389(*puVar3,param_1), iVar2 != 0)
         ) {
        DAT_0047af8c = DAT_0047af8c + 1;
        break;
      }
      puVar3 = puVar3 + 0x1006;
    } while (iVar4 != 0);
  }
  FUN_0040427d(0x404);
  OleUninitialize();
  return DAT_0047af8c;
}



// ===== FUN_00405461 @ 00405461 (size 912) =====

undefined4 FUN_00405461(HWND param_1,int param_2,HWND param_3,int param_4)

{
  HWND pHVar1;
  HWND lpParameter;
  HANDLE hObject;
  WPARAM WVar2;
  HMENU hMenu;
  LPCWSTR lpNewItem;
  int iVar3;
  BOOL BVar4;
  LRESULT LVar5;
  HGLOBAL hMem;
  undefined2 *puVar6;
  undefined4 uVar7;
  int y;
  WPARAM wParam;
  int iVar8;
  DWORD dwCreationFlags;
  DWORD *lpThreadId;
  undefined1 local_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined2 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  tagRECT local_1c;
  DWORD local_c;
  HWND local_8;
  
  pHVar1 = DAT_00472ec4;
  wParam = 0;
  local_8 = DAT_00472ec4;
  if (param_2 == 0x110) {
    local_34 = 0xffffffff;
    local_28 = 0xffffffff;
    local_3c = 2;
    local_38 = 0;
    local_30 = (undefined2 *)0x0;
    local_2c = 0;
    local_24 = 0;
    uStack_20 = 0;
    iVar8 = *(int *)(DAT_0047aef4 + 0x5c);
    iVar3 = *(int *)(DAT_0047aef4 + 0x60);
    DAT_00472eb0 = GetDlgItem(param_1,0x403);
    DAT_00472ea8 = GetDlgItem(param_1,0x3ee);
    DAT_00472ec4 = GetDlgItem(param_1,0x3f8);
    local_8 = DAT_00472ec4;
    FUN_00404266(DAT_00472eb0);
    DAT_00472eb4 = FUN_00404bbf(4);
    DAT_00472ecc = 0;
    GetClientRect(local_8,&local_1c);
    local_34 = GetSystemMetrics(2);
    local_34 = local_1c.right - local_34;
    SendMessageW(local_8,0x1061,0,(LPARAM)&local_3c);
    SendMessageW(local_8,0x1036,0x4000,0x4000);
    if (-1 < iVar8) {
      SendMessageW(local_8,0x1001,0,iVar8);
      SendMessageW(local_8,0x1026,0,iVar8);
    }
    if (-1 < iVar3) {
      SendMessageW(local_8,0x1024,0,iVar3);
    }
    FUN_00404231(param_1,0x1b,*(undefined4 *)(param_4 + 0x30));
    if (((byte)DAT_0047aefc & 3) != 0) {
      ShowWindow(DAT_00472eb0,0);
      if (((byte)DAT_0047aefc & 2) == 0) {
        ShowWindow(local_8,8);
      }
      else {
        DAT_00472eb0 = (HWND)0x0;
      }
      FUN_00404266(DAT_00472ea8);
    }
    pHVar1 = GetDlgItem(param_1,0x3ec);
    SendMessageW(pHVar1,0x401,0,0x75300000);
    if (((byte)DAT_0047aefc & 4) != 0) {
      SendMessageW(pHVar1,0x409,0,iVar3);
      SendMessageW(pHVar1,0x2001,0,iVar8);
    }
LAB_004057ea:
    uVar7 = 0;
  }
  else {
    if (param_2 == 0x405) {
      lpThreadId = &local_c;
      dwCreationFlags = 0;
      lpParameter = GetDlgItem(param_1,0x3ec);
      hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004053f5,lpParameter,dwCreationFlags,
                             lpThreadId);
      CloseHandle(hObject);
    }
    if (param_2 == 0x111) {
      if ((short)param_3 == 0x403) {
        ShowWindow(DAT_00472eb0,0);
        ShowWindow(pHVar1,8);
        FUN_00404266(pHVar1);
        goto LAB_00405667;
      }
    }
    else {
LAB_00405667:
      iVar8 = 1;
      if (param_2 == 0x404) {
        if (DAT_00472eac != 0) {
          DAT_00444218 = 2;
          FUN_0040420a(0x78);
          goto LAB_0040568c;
        }
        ShowWindow(DAT_0047aee8,8);
        if (DAT_0047af8c == 0) {
          FUN_00405322(*(undefined4 *)(DAT_00448220 + 0x34),0);
        }
        FUN_0040420a(1);
      }
      if ((param_2 == 0x7b) && (param_3 == local_8)) {
        WVar2 = SendMessageW(local_8,0x1004,0,0);
        if (0 < (int)WVar2) {
          hMenu = CreatePopupMenu();
          lpNewItem = (LPCWSTR)FUN_004062dc(0,0xffffffe1);
          AppendMenuW(hMenu,0,1,lpNewItem);
          iVar3 = (int)(short)param_4;
          y = (int)(short)((uint)param_4 >> 0x10);
          if (param_4 == -1) {
            GetWindowRect(local_8,&local_1c);
            iVar3 = local_1c.left;
            y = local_1c.top;
          }
          BVar4 = TrackPopupMenu(hMenu,0x180,iVar3,y,0,param_1,(RECT *)0x0);
          if (BVar4 == 1) {
            local_3c = 0;
            local_30 = &DAT_00450248;
            local_2c = 0x8000;
            param_1 = (HWND)WVar2;
            do {
              param_1 = (HWND)((int)param_1 - 1);
              LVar5 = SendMessageW(local_8,0x1073,(WPARAM)param_1,(LPARAM)local_44);
              iVar8 = iVar8 + 2 + LVar5;
            } while (param_1 != (HWND)0x0);
            OpenClipboard((HWND)0x0);
            EmptyClipboard();
            hMem = GlobalAlloc(0x42,iVar8 * 2);
            puVar6 = GlobalLock(hMem);
            do {
              local_30 = puVar6;
              LVar5 = SendMessageW(local_8,0x1073,wParam,(LPARAM)local_44);
              puVar6 = puVar6 + LVar5;
              *puVar6 = 0xd;
              puVar6[1] = 10;
              puVar6 = puVar6 + 2;
              wParam = wParam + 1;
            } while ((int)wParam < (int)WVar2);
            GlobalUnlock(hMem);
            SetClipboardData(0xd,hMem);
            CloseClipboard();
          }
        }
        goto LAB_004057ea;
      }
    }
LAB_0040568c:
    uVar7 = FUN_00404298(param_2,param_3,param_4);
  }
  return uVar7;
}



// ===== FUN_004057f1 @ 004057f1 (size 125) =====

DWORD FUN_004057f1(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 local_24;
  undefined1 local_23;
  undefined2 local_22;
  undefined *local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined *local_14;
  _SECURITY_ATTRIBUTES local_10;
  
  local_23 = 0;
  local_20 = &DAT_004083f8;
  local_1c = &DAT_004083f8;
  local_10.lpSecurityDescriptor = &local_24;
  local_18 = 0;
  local_10.bInheritHandle = 0;
  local_24 = 1;
  local_22 = 4;
  local_14 = &DAT_004083e8;
  local_10.nLength = 0xc;
  BVar1 = CreateDirectoryW(param_1,&local_10);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0xb7) {
      return DVar2;
    }
    BVar1 = SetFileSecurityW(param_1,0x80000007,&local_24);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      return DVar2;
    }
  }
  return 0;
}



// ===== FUN_0040586e @ 0040586e (size 29) =====

DWORD FUN_0040586e(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  return DVar2;
}



// ===== FUN_0040588b @ 0040588b (size 24) =====

undefined4 FUN_0040588b(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_00406694(5);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_004058a3 @ 004058a3 (size 67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HANDLE FUN_004058a3(LPWSTR param_1)

{
  BOOL BVar1;
  HANDLE pvVar2;
  _PROCESS_INFORMATION local_14;
  
  _DAT_00468250 = 0x44;
  BVar1 = CreateProcessW((LPCWSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,
                         0,0x4000000,(LPVOID)0x0,(LPCWSTR)0x0,(LPSTARTUPINFOW)&DAT_00468250,
                         &local_14);
  pvVar2 = (HANDLE)0x0;
  if (BVar1 != 0) {
    CloseHandle(local_14.hThread);
    pvVar2 = local_14.hProcess;
  }
  return pvVar2;
}



// ===== FUN_004058e6 @ 004058e6 (size 24) =====

void FUN_004058e6(SHELLEXECUTEINFOW *param_1)

{
  param_1->lpIDList = (void *)0x0;
  param_1->cbSize = 0x3c;
  ShellExecuteExW(param_1);
  return;
}



// ===== FUN_00405904 @ 00405904 (size 28) =====

void FUN_00405904(int param_1,LPWSTR param_2)

{
  GetDlgItemTextW(DAT_00472eb8,param_1,param_2,0x2000);
  return;
}



// ===== FUN_00405920 @ 00405920 (size 100) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405920(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x1fffff;
  if ((DAT_0047afa0 == 0) || (param_2 >> 0x15 == 0)) {
    if (DAT_0047afa8 != 0) {
      uVar1 = uVar1 ^ 0x180000;
    }
    _DAT_0040a3bc = DAT_0047aee8;
    _DAT_0040a3c0 = DAT_0047aee0;
    _DAT_0040a3c4 = param_1;
    _DAT_0040a3c8 = &DAT_00472ee0;
    _DAT_0040a3cc = uVar1;
    MessageBoxIndirectW((MSGBOXPARAMSW *)&DAT_0040a3b8);
  }
  return;
}



// ===== FUN_00405984 @ 00405984 (size 72) =====

undefined4 FUN_00405984(LPCWSTR param_1,byte param_2)

{
  DWORD dwFileAttributes;
  int iVar1;
  
  dwFileAttributes = FUN_00405d8b(param_1);
  if (dwFileAttributes != 0xffffffff) {
    if ((param_2 & 1) == 0) {
      iVar1 = DeleteFileW(param_1);
    }
    else {
      iVar1 = RemoveDirectoryW(param_1);
    }
    if (iVar1 != 0) {
      return 1;
    }
    if ((param_2 & 4) == 0) {
      SetFileAttributesW(param_1,dwFileAttributes);
    }
  }
  return 0;
}



// ===== FUN_004059cc @ 004059cc (size 451) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004059cc(LPCWSTR param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  HANDLE hFindFile;
  int iVar4;
  _WIN32_FIND_DATAW local_25c;
  int local_c;
  uint local_8;
  
  local_8 = param_2 & 4;
  local_c = FUN_00405c97(param_1);
  if ((param_2 & 8) == 0) {
    uVar1 = param_2 & 1;
    if ((uVar1 == 0) || ((local_c != 0 && ((param_2 & 2) != 0)))) {
      FUN_004062ba(&DAT_00460250,param_1);
      if (uVar1 == 0) {
        FUN_00405bdb(param_1);
      }
      else {
        lstrcatW(&DAT_00460250,u______0040a54c);
      }
      if ((*param_1 != L'\0') || (DAT_00460250 == 0x5c)) {
        lstrcatW(param_1,(LPCWSTR)&DAT_0040a014);
      }
      iVar3 = lstrlenW(param_1);
      hFindFile = FindFirstFileW(&DAT_00460250,&local_25c);
      if (hFindFile != (HANDLE)0xffffffff) {
        do {
          if ((local_25c.cFileName[0] != L'.') ||
             ((local_25c.cFileName[1] != L'\0' &&
              ((local_25c.cFileName[1] != L'.' || (local_25c.cFileName[2] != L'\0')))))) {
            FUN_004062ba(param_1 + iVar3,local_25c.cFileName);
            if (((byte)local_25c.dwFileAttributes & 0x10) == 0) {
              iVar4 = FUN_00405984(param_1,local_8);
              if (iVar4 == 0) {
                if (local_8 == 0) {
                  _DAT_0047af88 = _DAT_0047af88 + 1;
                }
                else {
                  FUN_00405322(0xfffffff1,param_1);
                  FUN_00406080(param_1,0);
                }
              }
              else {
                FUN_00405322(0xfffffff2,param_1);
              }
            }
            else if (((byte)param_2 & 3) == 3) {
              FUN_004059cc(param_1,param_2);
            }
          }
          BVar2 = FindNextFileW(hFindFile,&local_25c);
        } while (BVar2 != 0);
        FindClose(hFindFile);
      }
      if (uVar1 != 0) {
        (param_1 + iVar3)[-1] = L'\0';
      }
    }
    if (uVar1 != 0) {
      if (local_c != 0) {
        iVar3 = FUN_004065fd(param_1);
        if (iVar3 == 0) {
          return;
        }
        FUN_00405b8f(param_1);
        iVar3 = FUN_00405984(param_1,local_8 | 1);
        if (iVar3 != 0) {
          FUN_00405322(0xffffffe5,param_1);
          return;
        }
        if (local_8 != 0) {
          FUN_00405322(0xfffffff1,param_1);
          FUN_00406080(param_1,0);
          return;
        }
      }
      _DAT_0047af88 = _DAT_0047af88 + 1;
    }
  }
  else {
    BVar2 = DeleteFileW(param_1);
    _DAT_0047af88 = _DAT_0047af88 + (uint)(BVar2 == 0);
  }
  return;
}



// ===== FUN_00405b8f @ 00405b8f (size 45) =====

LPCWSTR FUN_00405b8f(LPCWSTR param_1)

{
  int iVar1;
  LPWSTR pWVar2;
  
  iVar1 = lstrlenW(param_1);
  pWVar2 = CharPrevW(param_1,param_1 + iVar1);
  if (*pWVar2 != L'\\') {
    lstrcatW(param_1,(LPCWSTR)&DAT_0040a014);
  }
  return param_1;
}



// ===== FUN_00405bbc @ 00405bbc (size 31) =====

void FUN_00405bbc(LPCWSTR param_1,WCHAR param_2)

{
  for (; (*param_1 != L'\0' && (*param_1 != param_2)); param_1 = CharNextW(param_1)) {
  }
  return;
}



// ===== FUN_00405bdb @ 00405bdb (size 43) =====

LPCWSTR FUN_00405bdb(LPCWSTR param_1)

{
  int iVar1;
  LPCWSTR lpszCurrent;
  
  iVar1 = lstrlenW(param_1);
  lpszCurrent = param_1 + iVar1;
  do {
    if (*lpszCurrent == L'\\') break;
    lpszCurrent = CharPrevW(param_1,lpszCurrent);
  } while (param_1 < lpszCurrent);
  *lpszCurrent = L'\0';
  return lpszCurrent + 1;
}



// ===== FUN_00405c06 @ 00405c06 (size 52) =====

undefined4 FUN_00405c06(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1 | 0x20;
  if (((*param_1 == 0x5c) && (param_1[1] == 0x5c)) ||
     ((0x60 < uVar1 && ((uVar1 < 0x7b && (param_1[1] == 0x3a)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_00405c3a @ 00405c3a (size 93) =====

LPWSTR FUN_00405c3a(LPCWSTR param_1)

{
  LPWSTR lpsz;
  LPWSTR lpsz_00;
  short *psVar1;
  int iVar2;
  
  lpsz = CharNextW(param_1);
  lpsz_00 = CharNextW(lpsz);
  if (((*param_1 == L'\0') || (*lpsz != L':')) || (lpsz[1] != L'\\')) {
    if ((*param_1 == L'\\') && (param_1[1] == L'\\')) {
      iVar2 = 2;
      do {
        iVar2 = iVar2 + -1;
        psVar1 = (short *)FUN_00405bbc(lpsz_00,0x5c);
        if (*psVar1 == 0) goto LAB_00405c8f;
        lpsz_00 = psVar1 + 1;
      } while (iVar2 != 0);
    }
    else {
LAB_00405c8f:
      lpsz_00 = (LPWSTR)0x0;
    }
  }
  else {
    lpsz_00 = CharNextW(lpsz_00);
  }
  return lpsz_00;
}



// ===== FUN_00405c97 @ 00405c97 (size 126) =====

bool FUN_00405c97(undefined4 param_1)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  DWORD DVar4;
  
  FUN_004062ba(&DAT_00464250,param_1);
  psVar1 = (short *)FUN_00405c3a(&DAT_00464250);
  if ((psVar1 != (short *)0x0) &&
     ((FUN_0040654e(psVar1), ((byte)DAT_0047aefc & 0x80) == 0 ||
      ((*psVar1 != 0 && (*psVar1 != 0x5c)))))) {
    while( true ) {
      iVar3 = lstrlenW((LPCWSTR)&DAT_00464250);
      if (iVar3 <= (int)(psVar1 + -0x232128) >> 1) {
        FUN_00405b8f(&DAT_00464250);
        DVar4 = GetFileAttributesW((LPCWSTR)&DAT_00464250);
        return DVar4 != 0xffffffff;
      }
      pbVar2 = (byte *)FUN_004065fd(&DAT_00464250);
      if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x10) == 0)) break;
      FUN_00405bdb(&DAT_00464250);
    }
  }
  return false;
}



// ===== FUN_00405d15 @ 00405d15 (size 86) =====

LPCSTR FUN_00405d15(LPSTR param_1,LPCSTR param_2)

{
  CHAR CVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = lstrlenA(param_2);
  while( true ) {
    iVar3 = lstrlenA(param_1);
    if (iVar3 < iVar2) {
      return (LPCSTR)0x0;
    }
    CVar1 = param_1[iVar2];
    param_1[iVar2] = '\0';
    iVar3 = lstrcmpiA(param_1,param_2);
    param_1[iVar2] = CVar1;
    if (iVar3 == 0) break;
    param_1 = CharNextA(param_1);
  }
  return param_1;
}



// ===== FUN_00405d6b @ 00405d6b (size 32) =====

void FUN_00405d6b(undefined1 *param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = param_1[param_2];
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// ===== FUN_00405d8b @ 00405d8b (size 37) =====

DWORD FUN_00405d8b(LPCWSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(param_1);
  if (DVar1 != 0xffffffff) {
    SetFileAttributesW(param_1,DVar1 & 0xfffffffe);
  }
  return DVar1;
}



// ===== FUN_00405db0 @ 00405db0 (size 47) =====

void FUN_00405db0(LPCWSTR param_1,DWORD param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(param_1);
  CreateFileW(param_1,param_2,1,(LPSECURITY_ATTRIBUTES)0x0,param_3,
              -(uint)(DVar1 != 0xffffffff) & DVar1,(HANDLE)0x0);
  return;
}



// ===== FUN_00405ddf @ 00405ddf (size 84) =====

LPWSTR FUN_00405ddf(LPWSTR param_1,LPCWSTR param_2)

{
  DWORD DVar1;
  UINT UVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = 100;
  do {
    iVar3 = iVar3 + -1;
    local_c = DAT_0040a558;
    local_8 = DAT_0040a55c;
    DVar1 = GetTickCount();
    local_8 = CONCAT22(local_8._2_2_,(short)local_8 + (short)(DVar1 % 0x1a));
    UVar2 = GetTempFileNameW(param_2,(LPCWSTR)&local_c,0,param_1);
    if (UVar2 != 0) {
      return param_1;
    }
  } while (iVar3 != 0);
  *param_1 = L'\0';
  return (LPWSTR)0x0;
}



// ===== FUN_00405e33 @ 00405e33 (size 47) =====

undefined4 FUN_00405e33(HANDLE param_1,LPVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  DVar1 = param_3;
  BVar2 = ReadFile(param_1,param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (DVar1 != param_3)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FUN_00405e62 @ 00405e62 (size 47) =====

undefined4 FUN_00405e62(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  DVar1 = param_3;
  BVar2 = WriteFile(param_1,param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (DVar1 != param_3)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FUN_00405e91 @ 00405e91 (size 117) =====

int FUN_00405e91(HANDLE param_1,int param_2)

{
  HANDLE hFile;
  DWORD DVar1;
  int iVar2;
  
  hFile = param_1;
  DVar1 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  if (DVar1 == 0) {
    iVar2 = FUN_00405e33(hFile,(int)&param_1 + 2,2);
    if ((iVar2 != 0) && (param_1._2_2_ == -0x101)) {
      return 0;
    }
    if ((param_2 != 0) && (DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1), DVar1 == 0)) {
      iVar2 = FUN_00405e62(hFile,&DAT_0040841c,2);
      return (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
    }
    SetFilePointer(hFile,0,(PLONG)0x0,0);
  }
  return 1;
}



// ===== FUN_00405f06 @ 00405f06 (size 378) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405f06(LPCWSTR param_1,LPCWSTR param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int iVar3;
  undefined1 *puVar4;
  HGLOBAL hMem;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  _DAT_004688e8 = &DAT_0055004e;
  _DAT_004688ec = 0x4c;
  if (param_2 != (LPCWSTR)0x0) {
    pvVar1 = (HANDLE)FUN_00405db0(param_2,0,1);
    CloseHandle(pvVar1);
    DVar2 = GetShortPathNameW(param_2,(LPWSTR)&DAT_004688e8,0x400);
    if (DVar2 == 0) {
      return;
    }
    if (0x400 < (int)DVar2) {
      return;
    }
  }
  DVar2 = GetShortPathNameW(param_1,(LPWSTR)&DAT_004690e8,0x400);
  if ((DVar2 != 0) && ((int)DVar2 < 0x401)) {
    iVar3 = wsprintfA(&DAT_004684e8,s__ls__ls_0040a570,&DAT_004688e8,&DAT_004690e8);
    FUN_004062dc(&DAT_004690e8,*(undefined4 *)(DAT_0047aef4 + 0x128));
    pvVar1 = (HANDLE)FUN_00405db0(&DAT_004690e8,0xc0000000,4);
    if (pvVar1 != (HANDLE)0xffffffff) {
      puVar4 = (undefined1 *)GetFileSize(pvVar1,(LPDWORD)0x0);
      hMem = GlobalAlloc(0x40,(SIZE_T)(puVar4 + iVar3 + 10));
      if ((hMem != (HGLOBAL)0x0) && (iVar5 = FUN_00405e33(pvVar1,hMem,puVar4), iVar5 != 0)) {
        iVar5 = FUN_00405d15(hMem,s__Rename__0040a564);
        if (iVar5 == 0) {
          lstrcpyA((LPSTR)((int)hMem + (int)puVar4),s__Rename__0040a564);
          puVar4 = puVar4 + 10;
          puVar8 = puVar4;
        }
        else {
          puVar6 = (undefined1 *)FUN_00405d15(iVar5 + 10,&DAT_0040a560);
          puVar8 = puVar4;
          if (puVar6 != (undefined1 *)0x0) {
            puVar8 = (undefined1 *)((int)hMem + (int)puVar4);
            puVar7 = puVar8 + iVar3;
            for (; puVar6 < puVar8; puVar8 = puVar8 + -1) {
              *puVar7 = *puVar8;
              puVar7 = puVar7 + -1;
            }
            puVar8 = puVar6 + (1 - (int)hMem);
          }
        }
        FUN_00405d6b(puVar8 + (int)hMem,&DAT_004684e8,iVar3);
        SetFilePointer(pvVar1,0,(PLONG)0x0,0);
        FUN_00405e62(pvVar1,hMem,puVar4 + iVar3);
        GlobalFree(hMem);
      }
      CloseHandle(pvVar1);
    }
  }
  return;
}



// ===== FUN_00406080 @ 00406080 (size 44) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406080(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  
  BVar1 = MoveFileExW(param_1,param_2,5);
  if (BVar1 == 0) {
    FUN_00405f06(param_1,param_2);
  }
  _DAT_0047af90 = _DAT_0047af90 + 1;
  return;
}



// ===== FUN_004060ac @ 004060ac (size 123) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004060ac(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar3 = ~DAT_0047aeec >> 0x16 & 0x100;
  if (((uVar1 & 0x20) == 0) || ((param_1 & 0x60000000) == 0)) {
    if ((uVar1 & 0x100000) != 0) {
      uVar1 = uVar1 | _DAT_0047afb0;
    }
  }
  else {
    uVar2 = param_1 >> 0x15 & 0x300;
    if (uVar2 == 0x300) {
      uVar2 = ~uVar3 & _DAT_0047afb0;
    }
    uVar1 = (uVar1 & 0xfffffeff | uVar2) & 0xfffffdff;
    param_1 = param_1 & 0x9fffffff;
  }
  *param_2 = uVar1 & 0xffefffdf;
  return ~-(uint)((uVar1 & uVar3) != 0) & param_1;
}



// ===== FUN_00406127 @ 00406127 (size 46) =====

LSTATUS FUN_00406127(undefined4 param_1,LPCWSTR param_2,REGSAM param_3,PHKEY param_4)

{
  HKEY hKey;
  LSTATUS LVar1;
  
  hKey = (HKEY)FUN_004060ac(param_1,&param_3);
  if (hKey == (HKEY)0x0) {
    LVar1 = 6;
  }
  else {
    LVar1 = RegOpenKeyExW(hKey,param_2,0,param_3,param_4);
  }
  return LVar1;
}



// ===== FUN_00406155 @ 00406155 (size 51) =====

LSTATUS FUN_00406155(undefined4 param_1,LPCWSTR param_2,REGSAM param_3,PHKEY param_4)

{
  HKEY hKey;
  LSTATUS LVar1;
  
  hKey = (HKEY)FUN_004060ac(param_1,&param_3);
  if (hKey == (HKEY)0x0) {
    LVar1 = 6;
  }
  else {
    LVar1 = RegCreateKeyExW(hKey,param_2,0,(LPWSTR)0x0,0,param_3,(LPSECURITY_ATTRIBUTES)0x0,param_4,
                            (LPDWORD)0x0);
  }
  return LVar1;
}



// ===== FUN_00406188 @ 00406188 (size 121) =====

void FUN_00406188(undefined4 param_1,DWORD param_2,LPCWSTR param_3,LPBYTE param_4,HKEY param_5)

{
  LPBYTE pBVar1;
  int iVar2;
  LSTATUS LVar3;
  DWORD local_8;
  
  local_8 = 0x4000;
  iVar2 = FUN_00406127(param_1,param_2,-(uint)(param_5 != (HKEY)0x0) & 0x100 | 0x20019,&param_5);
  pBVar1 = param_4;
  if (iVar2 == 0) {
    LVar3 = RegQueryValueExW(param_5,param_3,(LPDWORD)0x0,&param_2,param_4,&local_8);
    RegCloseKey(param_5);
    pBVar1[0x3ffe] = '\0';
    pBVar1[0x3fff] = '\0';
    if (LVar3 == 0) {
      if (param_2 == 1) {
        return;
      }
      if (param_2 == 2) {
        return;
      }
    }
  }
  pBVar1[0] = '\0';
  pBVar1[1] = '\0';
  return;
}



// ===== FUN_00406201 @ 00406201 (size 25) =====

void FUN_00406201(LPWSTR param_1,undefined4 param_2)

{
  wsprintfW(param_1,L"%d",param_2);
  return;
}



// ===== FUN_0040621a @ 0040621a (size 160) =====

int FUN_0040621a(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int local_8;
  
  local_8 = 0;
  uVar2 = 10;
  local_c = 1;
  uVar6 = 0x39;
  if (*param_1 == 0x2d) {
    param_1 = param_1 + 1;
    local_c = -1;
  }
  puVar3 = param_1;
  if (*param_1 == 0x30) {
    puVar3 = param_1 + 1;
    uVar1 = *puVar3;
    if ((0x2f < uVar1) && (uVar1 < 0x38)) {
      uVar2 = 8;
      uVar6 = 0x37;
    }
    if ((uVar1 & 0xffdf) == 0x58) {
      uVar2 = 0x10;
      puVar3 = param_1 + 2;
    }
  }
  do {
    uVar4 = (uint)*puVar3;
    puVar3 = puVar3 + 1;
    if ((uVar4 < 0x30) || (uVar6 < uVar4)) {
      if ((uVar2 != 0x10) || (((uVar4 & 0xffffffdf) < 0x41 || (0x46 < (uVar4 & 0xffffffdf))))) {
        return local_c * local_8;
      }
      iVar5 = (uVar4 & 7) + 9;
    }
    else {
      iVar5 = uVar4 - 0x30;
    }
    local_8 = (uint)uVar2 * local_8 + iVar5;
  } while( true );
}



// ===== FUN_004062ba @ 004062ba (size 22) =====

void FUN_004062ba(LPWSTR param_1,LPCWSTR param_2)

{
  lstrcpynW(param_1,param_2,0x2000);
  return;
}



// ===== FUN_004062dc @ 004062dc (size 626) =====

void FUN_004062dc(LPWSTR param_1,int param_2)

{
  byte bVar1;
  WCHAR WVar2;
  LPWSTR pWVar3;
  int iVar4;
  HRESULT HVar5;
  BOOL BVar6;
  int iVar7;
  WCHAR *pWVar8;
  uint uVar9;
  WCHAR *pWVar10;
  uint uVar11;
  LPWSTR lpBuffer;
  uint local_1c [4];
  LPCITEMIDLIST local_c;
  uint local_8;
  
  pWVar3 = param_1;
  if (param_2 < 0) {
    param_2 = *(int *)(DAT_00472ebc - (param_2 * 4 + 4));
  }
  pWVar10 = (WCHAR *)(DAT_0047af38 + param_2 * 2);
  lpBuffer = &DAT_0046ae80;
  if (((LPWSTR)0x46ae7f < param_1) && ((uint)((int)(param_1 + -0x235740) >> 1) < 0x4000)) {
    param_1 = (LPWSTR)0x0;
    lpBuffer = pWVar3;
  }
  do {
    while( true ) {
      WVar2 = *pWVar10;
      if ((WVar2 == L'\0') || (0x3fff < (int)((uint)(lpBuffer + -0x235740) & 0xfffffffe))) {
        *lpBuffer = L'\0';
        if (param_1 != (LPWSTR)0x0) {
          FUN_004062ba(param_1,&DAT_0046ae80);
        }
        return;
      }
      pWVar8 = pWVar10 + 1;
      if ((ushort)WVar2 < 4) break;
      if (WVar2 == L'\x04') {
        *lpBuffer = *pWVar8;
        lpBuffer = lpBuffer + 1;
        pWVar10 = pWVar10 + 2;
      }
      else {
        *lpBuffer = WVar2;
        lpBuffer = lpBuffer + 1;
        pWVar10 = pWVar8;
      }
    }
    bVar1 = (byte)*pWVar8;
    local_1c[1] = (uint)bVar1;
    uVar9 = (*(byte *)((int)pWVar10 + 3) & 0x7f) << 7 | bVar1 & 0x7f;
    local_1c[0] = local_1c[1] | 0x8000;
    uVar11 = (uint)*(byte *)((int)pWVar10 + 3);
    local_1c[3] = uVar11;
    local_1c[2] = uVar11 | 0x8000;
    if (WVar2 == L'\x02') {
      iVar7 = 2;
      if ((((DAT_0047aeec < 0) && ((short)DAT_0047aeec != 0x5a04)) && (uVar11 != 0x23)) &&
         (uVar11 != 0x2e)) {
        local_8 = 0;
      }
      else {
        local_8 = 1;
      }
      if (DAT_0047af84 != 0) {
        iVar7 = 4;
      }
      if ((char)bVar1 < '\0') {
        FUN_00406188(0x80000002,L"Software\\Microsoft\\Windows\\CurrentVersion",
                     DAT_0047af38 + (local_1c[1] & 0x3f) * 2,lpBuffer,local_1c[1] & 0x40);
        if (*lpBuffer == L'\0') {
          FUN_004062dc(lpBuffer,uVar11);
          goto LAB_00406497;
        }
LAB_004064a0:
        if (uVar11 == 0x1a) {
          lstrcatW(lpBuffer,L"\\Microsoft\\Internet Explorer\\Quick Launch");
        }
      }
      else {
        if (local_1c[1] == 0x25) {
          GetSystemDirectoryW(lpBuffer,0x2000);
        }
        else {
          if (local_1c[1] == 0x24) {
            GetWindowsDirectoryW(lpBuffer,0x2000);
            iVar7 = 0;
          }
          while ((iVar7 != 0 &&
                 (((iVar7 = iVar7 + -1, DAT_0047aee4 == (code *)0x0 || (local_8 == 0)) ||
                  (iVar4 = (*DAT_0047aee4)(DAT_0047aee8,local_1c[iVar7],0,0,lpBuffer), iVar4 != 0)))
                 )) {
            HVar5 = SHGetSpecialFolderLocation(DAT_0047aee8,local_1c[iVar7],&local_c);
            if (HVar5 == 0) {
              BVar6 = SHGetPathFromIDListW(local_c,lpBuffer);
              CoTaskMemFree(local_c);
              if (BVar6 != 0) break;
            }
            *lpBuffer = L'\0';
          }
        }
LAB_00406497:
        uVar11 = local_1c[3];
        if (*lpBuffer != L'\0') goto LAB_004064a0;
      }
LAB_004064b0:
      FUN_0040654e(lpBuffer);
    }
    else {
      local_8 = uVar9;
      if (WVar2 == L'\x03') {
        if (uVar9 == 0x1d) {
          FUN_00406201(lpBuffer,DAT_0047aee8);
        }
        else {
          FUN_004062ba(lpBuffer,&DAT_0047b000 + uVar9 * 0x4000);
        }
        if (uVar9 - 0x15 < 7) goto LAB_004064b0;
      }
      else if (WVar2 == L'\x01') {
        FUN_004062dc(lpBuffer,-1 - uVar9);
      }
    }
    iVar7 = lstrlenW(lpBuffer);
    lpBuffer = lpBuffer + iVar7;
    pWVar10 = pWVar10 + 2;
  } while( true );
}



// ===== FUN_0040654e @ 0040654e (size 175) =====

void FUN_0040654e(LPCWSTR param_1)

{
  WCHAR WVar1;
  int iVar2;
  short *psVar3;
  LPWSTR pWVar4;
  LPCWSTR lpsz;
  LPCWSTR lpsz_00;
  
  if ((((*param_1 == L'\\') && (param_1[1] == L'\\')) && (param_1[2] == L'?')) &&
     (param_1[3] == L'\\')) {
    param_1 = param_1 + 4;
  }
  if ((*param_1 != L'\0') && (iVar2 = FUN_00405c06(param_1), iVar2 != 0)) {
    param_1 = param_1 + 2;
  }
  WVar1 = *param_1;
  lpsz_00 = param_1;
  lpsz = param_1;
  while (WVar1 != L'\0') {
    if ((0x1f < (ushort)WVar1) &&
       (psVar3 = (short *)FUN_00405bbc(u____<>____0040a57c,WVar1), *psVar3 == 0)) {
      pWVar4 = CharNextW(lpsz_00);
      FUN_00405d6b(lpsz,lpsz_00,(int)pWVar4 - (int)lpsz_00 >> 1);
      lpsz = CharNextW(lpsz);
    }
    lpsz_00 = CharNextW(lpsz_00);
    WVar1 = *lpsz_00;
  }
  *lpsz = L'\0';
  while( true ) {
    lpsz = CharPrevW(param_1,lpsz);
    if ((*lpsz != L' ') && (*lpsz != L'\\')) break;
    *lpsz = L'\0';
    if (lpsz <= param_1) {
      return;
    }
  }
  return;
}



// ===== FUN_004065fd @ 004065fd (size 39) =====

undefined * FUN_004065fd(LPCWSTR param_1)

{
  HANDLE hFindFile;
  undefined *puVar1;
  
  hFindFile = FindFirstFileW(param_1,(LPWIN32_FIND_DATAW)&DAT_00468298);
  if (hFindFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined *)0x0;
  }
  else {
    FindClose(hFindFile);
    puVar1 = &DAT_00468298;
  }
  return puVar1;
}



// ===== FUN_00406624 @ 00406624 (size 112) =====

void FUN_00406624(undefined4 param_1)

{
  UINT UVar1;
  int iVar2;
  WCHAR local_240 [286];
  
  UVar1 = GetSystemDirectoryW(local_240,0x104);
  if (0x104 < UVar1) {
    UVar1 = 0;
  }
  if ((UVar1 == 0) || (local_240[UVar1 - 1] == L'\\')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  wsprintfW(local_240 + UVar1,u__s_S_dll_0040a590,&DAT_0040a014 + iVar2 * 2,param_1);
  LoadLibraryExW(local_240,(HANDLE)0x0,8);
  return;
}



// ===== FUN_00406694 @ 00406694 (size 60) =====

FARPROC FUN_00406694(int param_1)

{
  LPCSTR lpModuleName;
  HMODULE hModule;
  FARPROC pFVar1;
  
  lpModuleName = (&PTR_s_KERNEL32_0040a3e0)[param_1 * 2];
  hModule = GetModuleHandleA(lpModuleName);
  if ((hModule == (HMODULE)0x0) &&
     (hModule = (HMODULE)FUN_00406624(lpModuleName), hModule == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(hModule,(&PTR_s_SetDefaultDllDirectories_0040a3e4)[param_1 * 2]);
  return pFVar1;
}



// ===== FUN_004066d0 @ 004066d0 (size 51) =====

void FUN_004066d0(UINT param_1)

{
  BOOL BVar1;
  MSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageW(&local_20,(HWND)0x0,param_1,param_1,1);
    if (BVar1 == 0) break;
    DispatchMessageW(&local_20);
  }
  return;
}



// ===== FUN_00406703 @ 00406703 (size 66) =====

FARPROC FUN_00406703(HMODULE param_1,LPCWSTR param_2)

{
  int iVar1;
  FARPROC pFVar2;
  CHAR local_104 [256];
  
  iVar1 = WideCharToMultiByte(0,0,param_2,-1,local_104,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  if (iVar1 == 0) {
    pFVar2 = (FARPROC)0x0;
  }
  else {
    pFVar2 = GetProcAddress(param_1,local_104);
  }
  return pFVar2;
}



// ===== FUN_00406745 @ 00406745 (size 66) =====

DWORD FUN_00406745(HANDLE param_1)

{
  DWORD DVar1;
  DWORD local_8;
  
  DVar1 = WaitForSingleObject(param_1,100);
  while (DVar1 == 0x102) {
    FUN_004066d0(0xf);
    DVar1 = WaitForSingleObject(param_1,100);
  }
  GetExitCodeProcess(param_1,&local_8);
  return local_8;
}



// ===== FUN_00406787 @ 00406787 (size 110) =====

uint FUN_00406787(uint param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_004698ec == 0) {
    uVar2 = 0;
    do {
      iVar3 = 8;
      uVar1 = uVar2;
      do {
        uVar1 = uVar1 >> 1 ^ -(uint)((uVar1 & 1) != 0) & 0xedb88320;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      (&DAT_004698e8)[uVar2] = uVar1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x100);
  }
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1 = param_1 >> 8 ^ (&DAT_004698e8)[param_1 & 0xff ^ (uint)*param_2];
    param_2 = param_2 + 1;
  }
  return ~param_1;
}



// ===== FUN_004067f5 @ 004067f5 (size 2639) =====

undefined4 FUN_004067f5(int *param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint local_44;
  byte *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  local_3c = (byte *)*param_1;
  piVar1 = param_1 + 4;
  local_38 = param_1[1];
  local_34 = (int *)param_1[0x26ee];
  uVar9 = param_1[0x14a];
  local_44 = param_1[0x14b];
  if (local_34 < (int *)param_1[0x26ed]) {
    local_30 = param_1[0x26ed] + (-1 - (int)local_34);
  }
  else {
    local_30 = param_1[0x26ec] - (int)local_34;
  }
LAB_00407209:
  do {
    switch(*piVar1) {
    case 0:
      goto switchD_00406846_caseD_0;
    case 1:
      goto switchD_00406846_caseD_1;
    case 2:
      uVar13 = param_1[6];
      for (; uVar9 < uVar13; uVar9 = uVar9 + 8) {
        if (local_38 == 0) goto LAB_00407219;
        local_38 = local_38 - 1;
        local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
        local_3c = local_3c + 1;
      }
      param_1[5] = param_1[5] + (*(ushort *)(&DAT_0040a5a4 + uVar13 * 2) & local_44);
      local_44 = local_44 >> ((byte)uVar13 & 0x1f);
      uVar9 = uVar9 - uVar13;
      param_1[7] = (uint)*(byte *)((int)param_1 + 0x21);
      param_1[6] = param_1[10];
      *piVar1 = 3;
    case 3:
      for (; uVar9 < (uint)param_1[7]; uVar9 = uVar9 + 8) {
        if (local_38 == 0) goto LAB_00407219;
        local_38 = local_38 - 1;
        local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
        local_3c = local_3c + 1;
      }
      pbVar6 = (byte *)(param_1[6] + (*(ushort *)(&DAT_0040a5a4 + param_1[7] * 2) & local_44) * 4);
      local_44 = local_44 >> (pbVar6[1] & 0x1f);
      uVar9 = uVar9 - pbVar6[1];
      bVar2 = *pbVar6;
      uVar13 = (uint)bVar2;
      if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) != 0) goto switchD_00406846_caseD_e;
LAB_00406fa7:
        param_1[7] = uVar13;
        param_1[6] = (int)(pbVar6 + (uint)*(ushort *)(pbVar6 + 2) * 4);
      }
      else {
        param_1[6] = uVar13 & 0xf;
        param_1[7] = (uint)*(ushort *)(pbVar6 + 2);
        *piVar1 = 4;
      }
      break;
    case 4:
      uVar13 = param_1[6];
      for (; uVar9 < uVar13; uVar9 = uVar9 + 8) {
        if (local_38 == 0) goto LAB_00407219;
        local_38 = local_38 - 1;
        local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
        local_3c = local_3c + 1;
      }
      param_1[7] = param_1[7] + (*(ushort *)(&DAT_0040a5a4 + uVar13 * 2) & local_44);
      local_44 = local_44 >> ((byte)uVar13 & 0x1f);
      uVar9 = uVar9 - uVar13;
      *piVar1 = 5;
    case 5:
      uVar13 = param_1[7];
      if ((uint)((int)local_34 + (-0x1ba0 - (int)piVar1)) < uVar13) {
        iVar5 = ((param_1[0x26ec] - uVar13) - (int)piVar1) + -0x1ba0;
      }
      else {
        iVar5 = -uVar13;
      }
      local_24 = (int *)(iVar5 + (int)local_34);
      iVar5 = param_1[5];
      piVar4 = local_34;
      while (local_34 = piVar4, iVar5 != 0) {
        if (local_30 == 0) {
          if (piVar4 == (int *)param_1[0x26ec]) {
            piVar3 = (int *)param_1[0x26ed];
            local_34 = param_1 + 0x6ec;
            if (piVar3 != local_34) {
              if (local_34 < piVar3) {
                local_30 = (int)piVar3 + (-1 - (int)local_34);
              }
              else {
                local_30 = param_1[0x26ec] - (int)local_34;
              }
              piVar4 = local_34;
              if (local_30 != 0) goto LAB_004070d1;
            }
          }
          param_1[0x26ee] = (int)piVar4;
          FUN_00407284(param_1);
          local_34 = (int *)param_1[0x26ee];
          piVar4 = (int *)param_1[0x26ed];
          if (local_34 < piVar4) {
            local_30 = (int)piVar4 + (-1 - (int)local_34);
          }
          else {
            local_30 = param_1[0x26ec] - (int)local_34;
          }
          local_c = (int *)param_1[0x26ec];
          if ((local_34 == local_c) && (piVar3 = param_1 + 0x6ec, piVar4 != piVar3)) {
            local_34 = piVar3;
            if (piVar3 < piVar4) {
              local_30 = (int)piVar4 + (-1 - (int)piVar3);
            }
            else {
              local_30 = (int)local_c - (int)piVar3;
            }
          }
          if (local_30 == 0) goto LAB_00407235;
        }
LAB_004070d1:
        *(char *)local_34 = (char)*local_24;
        piVar4 = (int *)((int)local_34 + 1);
        local_24 = (int *)((int)local_24 + 1);
        local_30 = local_30 - 1;
        if (local_24 == (int *)param_1[0x26ec]) {
          local_24 = param_1 + 0x6ec;
        }
        piVar3 = param_1 + 5;
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3;
      }
LAB_004069c5:
      *piVar1 = 0;
      break;
    case 6:
      if (local_30 == 0) {
        if (local_34 == (int *)param_1[0x26ec]) {
          piVar3 = (int *)param_1[0x26ed];
          piVar4 = param_1 + 0x6ec;
          if (piVar3 != piVar4) {
            if (piVar4 < piVar3) {
              local_30 = (int)piVar3 + (-1 - (int)piVar4);
            }
            else {
              local_30 = param_1[0x26ec] - (int)piVar4;
            }
            local_34 = piVar4;
            if (local_30 != 0) goto LAB_004071a2;
          }
        }
        param_1[0x26ee] = (int)local_34;
        FUN_00407284(param_1);
        local_34 = (int *)param_1[0x26ee];
        piVar4 = (int *)param_1[0x26ed];
        if (local_34 < piVar4) {
          local_30 = (int)piVar4 + (-1 - (int)local_34);
        }
        else {
          local_30 = param_1[0x26ec] - (int)local_34;
        }
        local_c = (int *)param_1[0x26ec];
        if ((local_34 == local_c) && (piVar3 = param_1 + 0x6ec, piVar4 != piVar3)) {
          local_34 = piVar3;
          if (piVar3 < piVar4) {
            local_30 = (int)piVar4 + (-1 - (int)piVar3);
          }
          else {
            local_30 = (int)local_c - (int)piVar3;
          }
        }
        if (local_30 != 0) goto LAB_004071a2;
        goto LAB_00407235;
      }
LAB_004071a2:
      *(char *)local_34 = (char)param_1[6];
      local_30 = local_30 - 1;
      local_34 = (int *)((int)local_34 + 1);
      goto LAB_004069c5;
    case 7:
      if (7 < uVar9) {
        uVar9 = uVar9 - 8;
        local_38 = local_38 + 1;
        local_3c = local_3c + -1;
      }
    case 0xf:
      param_1[0x26ee] = (int)local_34;
      FUN_00407284(param_1);
      local_34 = (int *)param_1[0x26ee];
      piVar4 = (int *)param_1[0x26ed];
      if (local_34 < piVar4) {
        local_30 = (int)piVar4 + (-1 - (int)local_34);
      }
      else {
        local_30 = param_1[0x26ec] - (int)local_34;
      }
      if (local_34 != piVar4) {
LAB_00407235:
        uVar10 = 0;
        goto LAB_004068b5;
      }
      *piVar1 = param_1[0x149];
      if (param_1[0x149] != 8) {
        uVar10 = 1;
        goto LAB_004068b5;
      }
      break;
    case 8:
      for (; uVar9 < 3; uVar9 = uVar9 + 8) {
        if (local_38 == 0) goto LAB_00407219;
        local_38 = local_38 - 1;
        local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
        local_3c = local_3c + 1;
      }
      uVar9 = uVar9 - 3;
      uVar13 = local_44 >> 3;
      uVar14 = (local_44 & 7) >> 1;
      param_1[0x149] = (-(uint)((local_44 & 1) != 0) & 7) + 8;
      if (uVar14 == 0) {
        *piVar1 = 9;
        local_44 = uVar13 >> (sbyte)(uVar9 & 7);
        uVar9 = uVar9 - (uVar9 & 7);
      }
      else {
        local_44 = uVar13;
        if (uVar14 == 1) {
          if (DAT_0046ae70 == '\0') {
            local_c = (int *)0x0;
            piVar4 = &DAT_00469cf0;
            do {
              cVar7 = '\b';
              if (0x469f2c < (int)piVar4) {
                if ((int)piVar4 < 0x46a0f0) {
                  cVar7 = '\t';
                }
                else if ((int)piVar4 < 0x46a150) {
                  cVar7 = '\a';
                }
              }
              *piVar4 = (int)cVar7;
              piVar4 = piVar4 + 1;
            } while ((int)piVar4 < 0x46a170);
            FUN_004072ec(&DAT_00469cf0,0x120,0x101,&DAT_004084e8,&DAT_00408528,&DAT_00469cec,
                         &DAT_0040a5c8,&DAT_0046a5f0,&local_c);
            puVar11 = &DAT_00469cf0;
            for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar11 = 5;
              puVar11 = puVar11 + 1;
            }
            FUN_004072ec(&DAT_00469cf0,0x1e,0,&DAT_00408568,&DAT_004085a4,&DAT_00469ce8,
                         &DAT_0040a5cc,&DAT_0046a5f0,&local_c);
            DAT_0046ae70 = DAT_0046ae70 + '\x01';
          }
          *(undefined1 *)(param_1 + 8) = DAT_0040a5c8;
          *(undefined1 *)((int)param_1 + 0x21) = DAT_0040a5cc;
          param_1[9] = DAT_00469cec;
          param_1[10] = DAT_00469ce8;
          goto LAB_004069c5;
        }
        if (uVar14 != 2) goto code_r0x004068a5;
        *piVar1 = 0xb;
      }
      break;
    case 9:
      for (; uVar9 < 0x20; uVar9 = uVar9 + 8) {
        if (local_38 == 0) goto LAB_00407219;
        local_38 = local_38 - 1;
        local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
        local_3c = local_3c + 1;
      }
      uVar9 = 0;
      uVar13 = local_44 & 0xffff;
      local_44 = 0;
      param_1[5] = uVar13;
      if (uVar13 == 0) goto LAB_00406b08;
      iVar5 = 10;
      goto LAB_00406b0e;
    case 10:
      if (local_38 == 0) {
LAB_00407219:
        uVar10 = 0;
        param_1[0x14b] = local_44;
        param_1[0x14a] = uVar9;
        param_1[1] = 0;
        goto LAB_004068cd;
      }
      if (local_30 == 0) {
        if (local_34 == (int *)param_1[0x26ec]) {
          piVar3 = (int *)param_1[0x26ed];
          piVar4 = param_1 + 0x6ec;
          if (piVar3 != piVar4) {
            if (piVar4 < piVar3) {
              local_30 = (int)piVar3 + (-1 - (int)piVar4);
            }
            else {
              local_30 = param_1[0x26ec] - (int)piVar4;
            }
            local_34 = piVar4;
            if (local_30 != 0) goto LAB_00406ad4;
          }
        }
        param_1[0x26ee] = (int)local_34;
        FUN_00407284(param_1);
        local_34 = (int *)param_1[0x26ee];
        piVar4 = (int *)param_1[0x26ed];
        if (local_34 < piVar4) {
          local_30 = (int)piVar4 + (-1 - (int)local_34);
        }
        else {
          local_30 = param_1[0x26ec] - (int)local_34;
        }
        if (local_34 == (int *)param_1[0x26ec]) {
          piVar3 = param_1 + 0x6ec;
          if (piVar3 != piVar4) {
            local_34 = piVar3;
            if (piVar3 < piVar4) {
              local_30 = (int)piVar4 + (-1 - (int)piVar3);
            }
            else {
              local_30 = param_1[0x26ec] - (int)piVar3;
            }
          }
        }
        if (local_30 == 0) goto LAB_00407235;
      }
LAB_00406ad4:
      uVar13 = local_30;
      if (local_38 <= local_30) {
        uVar13 = local_38;
      }
      uVar14 = param_1[5];
      if (uVar13 <= (uint)param_1[5]) {
        uVar14 = uVar13;
      }
      FUN_00405d6b(local_34,local_3c,uVar14);
      local_3c = local_3c + uVar14;
      local_38 = local_38 - uVar14;
      local_34 = (int *)((int)local_34 + uVar14);
      local_30 = local_30 - uVar14;
      piVar4 = param_1 + 5;
      *piVar4 = *piVar4 - uVar14;
      if (*piVar4 == 0) {
LAB_00406b08:
        iVar5 = param_1[0x149];
LAB_00406b0e:
        *piVar1 = iVar5;
      }
      break;
    case 0xb:
      for (; uVar9 < 0xe; uVar9 = uVar9 + 8) {
        if (local_38 == 0) goto LAB_00407219;
        local_38 = local_38 - 1;
        local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
        local_3c = local_3c + 1;
      }
      param_1[5] = local_44 & 0x3fff;
      if ((((byte)(local_44 & 0x3fff) & 0x1f) < 0x1e) && ((local_44 & 0x3e0) < 0x3a1)) {
        local_44 = local_44 >> 0xe;
        uVar9 = uVar9 - 0xe;
        param_1[6] = 0;
        *piVar1 = 0xc;
        goto switchD_00406846_caseD_c;
      }
      goto switchD_00406846_caseD_e;
    case 0xc:
switchD_00406846_caseD_c:
      if ((uint)param_1[6] < ((uint)param_1[5] >> 10) + 4) {
        do {
          for (; uVar9 < 3; uVar9 = uVar9 + 8) {
            if (local_38 == 0) goto LAB_00407219;
            local_38 = local_38 - 1;
            local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
            local_3c = local_3c + 1;
          }
          uVar13 = local_44 & 7;
          uVar9 = uVar9 - 3;
          local_44 = local_44 >> 3;
          param_1[(char)(&DAT_004084d4)[param_1[6]] + 7] = uVar13;
          param_1[6] = param_1[6] + 1;
        } while ((uint)param_1[6] < ((uint)param_1[5] >> 10) + 4);
      }
      while ((uint)param_1[6] < 0x13) {
        param_1[(char)(&DAT_004084d4)[param_1[6]] + 7] = 0;
        param_1[6] = param_1[6] + 1;
      }
      piVar4 = param_1 + 0x147;
      local_c = (int *)0x0;
      *piVar4 = 7;
      iVar5 = FUN_004072ec(param_1 + 7,0x13,0x13,0,0,param_1 + 0x148,piVar4,param_1 + 0x14c,&local_c
                          );
      if ((iVar5 == 0) && (*piVar4 != 0)) {
        param_1[6] = 0;
        *piVar1 = 0xd;
switchD_00406846_caseD_d:
        while ((uint)param_1[6] < ((uint)param_1[5] >> 5 & 0x1f) + 0x102 + (param_1[5] & 0x1fU)) {
          for (; uVar9 < (uint)param_1[0x147]; uVar9 = uVar9 + 8) {
            if (local_38 == 0) goto LAB_00407219;
            local_38 = local_38 - 1;
            local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
            local_3c = local_3c + 1;
          }
          iVar5 = param_1[0x148] + (*(ushort *)(&DAT_0040a5a4 + param_1[0x147] * 2) & local_44) * 4;
          bVar2 = *(byte *)(iVar5 + 1);
          uVar13 = (uint)bVar2;
          local_18 = (uint)*(ushort *)(iVar5 + 2);
          if (local_18 < 0x10) {
            uVar9 = uVar9 - uVar13;
            local_44 = local_44 >> (bVar2 & 0x1f);
            param_1[param_1[6] + 7] = local_18;
            param_1[6] = param_1[6] + 1;
          }
          else {
            if (local_18 == 0x12) {
              local_c = (int *)0xb;
              iVar5 = 7;
            }
            else {
              iVar5 = local_18 - 0xe;
              local_c = (int *)0x3;
            }
            for (; uVar9 < iVar5 + uVar13; uVar9 = uVar9 + 8) {
              if (local_38 == 0) goto LAB_00407219;
              local_38 = local_38 - 1;
              local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
              local_3c = local_3c + 1;
            }
            local_44 = local_44 >> (bVar2 & 0x1f);
            uVar9 = (uVar9 - uVar13) - iVar5;
            iVar8 = (int)local_c + (*(ushort *)(&DAT_0040a5a4 + iVar5 * 2) & local_44);
            local_44 = local_44 >> ((byte)iVar5 & 0x1f);
            iVar5 = param_1[6];
            if (((uint)param_1[5] >> 5 & 0x1f) + 0x102 + (param_1[5] & 0x1fU) <
                (uint)(iVar8 + iVar5)) goto switchD_00406846_caseD_e;
            if (local_18 == 0x10) {
              if (iVar5 == 0) goto switchD_00406846_caseD_e;
              iVar12 = param_1[iVar5 + 6];
            }
            else {
              iVar12 = 0;
            }
            piVar4 = param_1 + iVar5 + 7;
            do {
              *piVar4 = iVar12;
              iVar5 = iVar5 + 1;
              piVar4 = piVar4 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            param_1[6] = iVar5;
          }
        }
        param_1[0x148] = 0;
        local_10 = 0;
        uVar13 = param_1[5] & 0x1f;
        uVar14 = uVar13 + 0x101;
        local_18 = ((uint)param_1[5] >> 5 & 0x1f) + 1;
        local_8 = 9;
        local_14 = 6;
        iVar5 = FUN_004072ec(param_1 + 7,uVar14,0x101,&DAT_004084e8,&DAT_00408528,&local_1c,&local_8
                             ,param_1 + 0x14c,&local_10);
        if (local_8 == 0) {
          iVar5 = -1;
        }
        if (((iVar5 != 0) ||
            (iVar5 = FUN_004072ec(param_1 + uVar13 + 0x108,local_18,0,&DAT_00408568,&DAT_004085a4,
                                  &local_20,&local_14,param_1 + 0x14c,&local_10), iVar5 != 0)) ||
           ((local_14 == 0 && (0x101 < uVar14)))) goto switchD_00406846_caseD_e;
        *piVar1 = 0;
        *(char *)((int)param_1 + 0x21) = (char)local_14;
        param_1[9] = local_1c;
        *(undefined1 *)(param_1 + 8) = (undefined1)local_8;
        param_1[10] = local_20;
switchD_00406846_caseD_0:
        param_1[7] = (uint)*(byte *)(param_1 + 8);
        param_1[6] = param_1[9];
        *piVar1 = 1;
switchD_00406846_caseD_1:
        for (; uVar9 < (uint)param_1[7]; uVar9 = uVar9 + 8) {
          if (local_38 == 0) goto LAB_00407219;
          local_38 = local_38 - 1;
          local_44 = local_44 | (uint)*local_3c << ((byte)uVar9 & 0x1f);
          local_3c = local_3c + 1;
        }
        pbVar6 = (byte *)(param_1[6] + (*(ushort *)(&DAT_0040a5a4 + param_1[7] * 2) & local_44) * 4)
        ;
        local_44 = local_44 >> (pbVar6[1] & 0x1f);
        uVar9 = uVar9 - pbVar6[1];
        bVar2 = *pbVar6;
        uVar13 = (uint)bVar2;
        if (uVar13 == 0) {
          param_1[6] = (uint)*(ushort *)(pbVar6 + 2);
          *piVar1 = 6;
        }
        else if ((bVar2 & 0x10) == 0) {
          if ((bVar2 & 0x40) == 0) goto LAB_00406fa7;
          if ((bVar2 & 0x20) == 0) goto switchD_00406846_caseD_e;
          *piVar1 = 7;
        }
        else {
          param_1[6] = uVar13 & 0xf;
          param_1[5] = (uint)*(ushort *)(pbVar6 + 2);
          *piVar1 = 2;
        }
      }
      else {
        *piVar1 = 0x11;
      }
      break;
    case 0xd:
      goto switchD_00406846_caseD_d;
    default:
      goto switchD_00406846_caseD_e;
    }
  } while( true );
code_r0x004068a5:
  if (uVar14 == 3) {
switchD_00406846_caseD_e:
    uVar10 = 0xffffffff;
    *piVar1 = 0x11;
LAB_004068b5:
    param_1[0x14b] = local_44;
    param_1[0x14a] = uVar9;
    param_1[1] = local_38;
LAB_004068cd:
    *param_1 = (int)local_3c;
    param_1[0x26ee] = (int)local_34;
    FUN_00407284(param_1);
    return uVar10;
  }
  goto LAB_00407209;
}



// ===== FUN_00407284 @ 00407284 (size 104) =====

void FUN_00407284(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x9bb4);
  while( true ) {
    uVar2 = *(uint *)(param_1 + 0x9bb8);
    if (uVar2 < uVar4) {
      uVar2 = *(uint *)(param_1 + 0x9bb0);
    }
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar3 = uVar2 - uVar4;
    if (uVar1 <= uVar2 - uVar4) {
      uVar3 = uVar1;
    }
    *(uint *)(param_1 + 0xc) = uVar1 - uVar3;
    FUN_00405d6b(*(undefined4 *)(param_1 + 8),uVar4,uVar3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar3;
    if (uVar4 + uVar3 != *(int *)(param_1 + 0x9bb0)) break;
    uVar4 = param_1 + 0x1bb0;
    if (*(int *)(param_1 + 0x9bb8) == *(int *)(param_1 + 0x9bb0)) {
      *(uint *)(param_1 + 0x9bb8) = uVar4;
    }
  }
  *(uint *)(param_1 + 0x9bb4) = uVar4 + uVar3;
  return;
}



// ===== FUN_004072ec @ 004072ec (size 827) =====

undefined4
FUN_004072ec(int *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
            uint *param_7,int param_8,uint *param_9)

{
  undefined3 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  int local_f0 [15];
  uint local_b4 [16];
  uint local_74 [16];
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint *local_24;
  uint *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  puVar15 = param_7;
  puVar13 = local_74;
  for (iVar4 = 0x10; piVar5 = param_1, uVar8 = param_2, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  do {
    local_74[*piVar5] = local_74[*piVar5] + 1;
    uVar8 = uVar8 - 1;
    piVar5 = piVar5 + 1;
  } while (uVar8 != 0);
  if (local_74[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
    uVar2 = 0;
  }
  else {
    uVar12 = 1;
    param_7 = (uint *)*param_7;
    uVar8 = 0xf;
    do {
      iVar4 = 0;
      if (local_74[uVar12] != 0) break;
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0x10);
    local_8 = uVar12;
    if (param_7 < uVar12) {
      param_7 = (uint *)uVar12;
    }
    do {
      if (local_74[uVar8] != 0) break;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    local_1c = uVar8;
    if (uVar8 < param_7) {
      param_7 = (uint *)uVar8;
    }
    *puVar15 = (uint)param_7;
    local_34 = 1 << ((byte)uVar12 & 0x1f);
    for (; uVar12 < uVar8; uVar12 = uVar12 + 1) {
      if ((int)(local_34 - local_74[uVar12]) < 0) goto LAB_0040761d;
      local_34 = (local_34 - local_74[uVar12]) * 2;
    }
    uVar12 = local_74[uVar8];
    local_34 = local_34 - uVar12;
    if (-1 < local_34) {
      local_b4[1] = 0;
      local_74[uVar8] = uVar12 + local_34;
      iVar6 = 0;
      iVar9 = uVar8 - 1;
      if (iVar9 != 0) {
        iVar14 = 0;
        do {
          iVar6 = iVar6 + *(int *)((int)local_74 + iVar14 + 4);
          iVar9 = iVar9 + -1;
          *(int *)((int)local_b4 + iVar14 + 8) = iVar6;
          iVar14 = iVar14 + 4;
        } while (iVar9 != 0);
      }
      uVar12 = 0;
      piVar5 = param_1;
      do {
        iVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        if (iVar6 != 0) {
          uVar7 = local_b4[iVar6];
          *(uint *)(&DAT_0046a170 + uVar7 * 2) = uVar12;
          local_b4[iVar6] = uVar7 + 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_2);
      uVar8 = local_b4[uVar8];
      local_10 = -1;
      local_28 = 0;
      iVar6 = -(int)param_7;
      local_c = 0;
      local_b4[0] = 0;
      local_24 = (uint *)&DAT_0046a170;
      local_f0[0] = 0;
      if ((int)local_8 <= (int)local_1c) {
        local_2c = local_8 - 1;
        local_20 = local_74 + local_8;
        do {
          local_14 = *local_20;
          while (local_14 != 0) {
            param_1._2_2_ = (undefined2)((uint)param_1 >> 0x10);
            local_30 = local_14 - 1;
            local_18 = (int)param_7 + iVar6;
            if ((int)param_7 + iVar6 < (int)local_8) {
              do {
                iVar14 = local_10;
                iVar9 = local_10 + 1;
                local_10 = iVar9;
                uVar12 = local_1c - local_18;
                if (param_7 < local_1c - local_18) {
                  uVar12 = (uint)param_7;
                }
                uVar7 = local_8 - local_18;
                uVar10 = 1 << ((byte)uVar7 & 0x1f);
                if ((local_14 < uVar10) &&
                   (iVar4 = uVar10 + (-1 - local_30), puVar15 = local_20, uVar7 < uVar12)) {
                  while (uVar7 = uVar7 + 1, uVar7 < uVar12) {
                    uVar10 = puVar15[1];
                    if ((uint)(iVar4 * 2) <= uVar10) break;
                    iVar4 = iVar4 * 2 - uVar10;
                    puVar15 = puVar15 + 1;
                  }
                }
                local_28 = 1 << ((byte)uVar7 & 0x1f);
                uVar12 = *param_9 + local_28;
                if (0x5a0 < uVar12) goto LAB_0040761d;
                iVar4 = param_8 + *param_9 * 4;
                *param_9 = uVar12;
                local_f0[iVar9] = iVar4;
                uVar12 = local_c;
                if (iVar9 == 0) {
                  *param_6 = iVar4;
                }
                else {
                  iVar14 = local_f0[iVar14];
                  local_b4[iVar9] = local_c;
                  uVar12 = uVar12 >> ((byte)iVar6 & 0x1f);
                  param_1 = (int *)CONCAT22((short)(iVar4 - iVar14 >> 2) - (short)uVar12,
                                            (short)CONCAT31((int3)param_7,(byte)uVar7));
                  *(int **)(iVar14 + uVar12 * 4) = param_1;
                }
                iVar6 = local_18;
                local_18 = local_18 + (int)param_7;
              } while (local_18 < (int)local_8);
            }
            bVar11 = (byte)iVar6;
            uVar1 = CONCAT21(param_1._2_2_,(char)local_8 - bVar11);
            if (local_24 < &DAT_0046a170 + uVar8 * 2) {
              uVar12 = *local_24;
              if (uVar12 < param_3) {
                param_1._0_2_ = (ushort)CONCAT31(uVar1,(uVar12 < 0x100) + -1) & 0xff60;
                uVar3 = (undefined2)*local_24;
                local_24 = local_24 + 1;
              }
              else {
                iVar9 = (uVar12 - param_3) * 2;
                local_24 = local_24 + 1;
                param_1 = (int *)CONCAT31(uVar1,*(char *)(iVar9 + param_5) + 'P');
                uVar3 = *(undefined2 *)(iVar9 + param_4);
              }
              param_1 = (int *)CONCAT22(uVar3,(ushort)param_1);
            }
            else {
              param_1 = (int *)CONCAT31(uVar1,0xc0);
            }
            for (uVar12 = local_c >> (bVar11 & 0x1f); uVar12 < local_28;
                uVar12 = uVar12 + (1 << ((char)local_8 - bVar11 & 0x1f))) {
              *(int **)(iVar4 + uVar12 * 4) = param_1;
            }
            uVar12 = 1 << ((byte)local_2c & 0x1f);
            while ((local_c & uVar12) != 0) {
              local_c = local_c ^ uVar12;
              uVar12 = uVar12 >> 1;
            }
            local_c = local_c ^ uVar12;
            local_14 = 1;
            local_14 = local_30;
            if (((1 << (bVar11 & 0x1f)) - 1U & local_c) != local_b4[local_10]) {
              do {
                iVar6 = iVar6 - (int)param_7;
                local_10 = local_10 + -1;
              } while (((1 << ((byte)iVar6 & 0x1f)) - 1U & local_c) != local_b4[local_10]);
            }
          }
          local_8 = local_8 + 1;
          local_20 = local_20 + 1;
          local_2c = local_2c + 1;
        } while ((int)local_8 <= (int)local_1c);
      }
      if (local_34 == 0) {
        return 0;
      }
      if (local_1c == 1) {
        return 0;
      }
    }
LAB_0040761d:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// decompiled 101 ok, 0 failed, 101 total
