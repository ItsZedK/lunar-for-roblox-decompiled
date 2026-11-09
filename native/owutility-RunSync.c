// Program: owutility.dll functions=4660

// ===== FUN_180003d90 @ 180003d90 (size 156) =====

undefined8 * FUN_180003d90(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 8) {
    uVar2 = param_2[1];
    uVar3 = 7;
    *param_1 = *param_2;
    param_1[1] = uVar2;
  }
  else {
    uVar3 = uVar1 | 7;
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7ffffffffffffffe;
    }
    uVar2 = FUN_180003fa0(param_1,uVar3 + 1);
    *param_1 = uVar2;
    FUN_180267840(uVar2,param_2,uVar1 * 2 + 2);
  }
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  return param_1;
}



// ===== FUN_180004d50 @ 180004d50 (size 105) =====

undefined4 FUN_180004d50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1802e1ee4) {
    FUN_18018c848(&DAT_1802e1ee4);
    if (DAT_1802e1ee4 == -1) {
      DAT_1802e1ee0 = FUN_180004dc0();
      _Init_thread_footer(&DAT_1802e1ee4);
      return DAT_1802e1ee0;
    }
  }
  return DAT_1802e1ee0;
}



// ===== FUN_180005a70 @ 180005a70 (size 56) =====

undefined8 * FUN_180005a70(undefined8 *param_1)

{
  *param_1 = cookie_manager::CookieSyncerBase::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_180003d90(param_1 + 4);
  return param_1;
}



// ===== FUN_180005b50 @ 180005b50 (size 120) =====

void FUN_180005b50(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = cookie_manager::CookieSyncerBase::vftable;
  if (7 < (ulonglong)param_1[7]) {
    lVar2 = param_1[4];
    lVar1 = param_1[7] * 2;
    lVar4 = lVar2;
    if (0xfff < lVar1 + 2U) {
      lVar4 = *(longlong *)(lVar2 + -8);
      uVar3 = (lVar2 - lVar4) - 8;
      if (0x1f < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180192ae4(uVar3,lVar1 + 0x29);
      }
    }
    thunk_FUN_1801aab90(lVar4);
  }
  param_1[6] = 0;
  param_1[7] = 7;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_180008e70(param_1 + 1);
  return;
}



// ===== FUN_180005bd0 @ 180005bd0 (size 686) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180005bd0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 local_118 [16];
  undefined2 local_108;
  undefined6 uStack_106;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined1 local_e8;
  undefined1 local_e0 [72];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1802ca0c0 ^ (ulonglong)auStack_158;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1802e1ee4) && (FUN_18018c848(&DAT_1802e1ee4), DAT_1802e1ee4 == -1)) {
    DAT_1802e1ee0 = FUN_180004dc0();
    _Init_thread_footer(&DAT_1802e1ee4);
  }
  iVar2 = DAT_1802e1ee0;
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_180005e80(local_118,param_2);
    local_e8 = 1;
    local_138 = param_4;
    FUN_180006190(param_1,0x200,local_118,param_3);
    local_128 = local_98;
    FUN_180006110(local_98);
    local_120 = local_e0;
    FUN_180006050(local_e0);
    if (7 < uStack_f0) {
      if (0xfff < uStack_f0 * 2 + 2) {
        lVar1 = *(longlong *)(CONCAT62(uStack_106,local_108) + -8);
        if (0x1f < (CONCAT62(uStack_106,local_108) - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_180192ae4(lVar1,uStack_f0 * 2 + 0x29);
        }
      }
      thunk_FUN_1801aab90();
    }
    local_f8 = _DAT_1802a29c0;
    uStack_f0 = _UNK_1802a29c8;
    local_108 = 0;
  }
  local_138 = param_4;
  iVar4 = FUN_180006190(param_1,iVar2,param_2,param_3);
  (**(code **)(*param_1 + 0x10))(param_1,iVar4,iVar2);
  if (((iVar2 == 4) && (1 < iVar4 - 9U)) && (iVar4 != 3)) {
    uVar5 = FUN_180008c90();
    uVar6 = 1;
    FUN_18016d600(uVar5,0,1,"try to cs with more");
    FUN_180005e80(local_118,param_2);
    local_e8 = 1;
    do {
      if ((uVar6 != 4) &&
         (cVar3 = (**(code **)(*param_1 + 0x68))(param_1,uVar6,param_2,0), cVar3 != '\0')) {
        local_138 = param_4;
        FUN_180006190(param_1,uVar6,local_118);
      }
      uVar6 = uVar6 * 2;
    } while (uVar6 < 0x101);
    local_120 = local_98;
    FUN_180006110(local_98);
    local_128 = local_e0;
    FUN_180006050(local_e0);
    if (7 < uStack_f0) {
      if (0xfff < uStack_f0 * 2 + 2) {
        lVar1 = *(longlong *)(CONCAT62(uStack_106,local_108) + -8);
        if (0x1f < (CONCAT62(uStack_106,local_108) - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_180192ae4(lVar1,uStack_f0 * 2 + 0x29);
        }
      }
      thunk_FUN_1801aab90();
    }
  }
  return iVar4;
}



// ===== FUN_180008ad0 @ 180008ad0 (size 41) =====

undefined8 FUN_180008ad0(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 2:
  case 4:
  case 5:
  case 0xb:
  case 0xc:
  case 0x11:
    return 0;
  default:
    return 1;
  }
}



// ===== FUN_180008c90 @ 180008c90 (size 124) =====

undefined * FUN_180008c90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1802e1e40) {
    FUN_18018c848(&DAT_1802e1e40);
    if (DAT_1802e1e40 == -1) {
      FUN_18016c670(&DAT_1802e1de0);
      atexit((_func_5014 *)&LAB_180271180);
      _Init_thread_footer(&DAT_1802e1e40);
      return &DAT_1802e1de0;
    }
  }
  return &DAT_1802e1de0;
}



// ===== FUN_180008dc0 @ 180008dc0 (size 37) =====

void FUN_180008dc0(undefined8 *param_1)

{
  FUN_1800098f0();
  thunk_FUN_1801aab90(*param_1,0x58);
  return;
}



// ===== FUN_180008f70 @ 180008f70 (size 71) =====

undefined8 * FUN_180008f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_180003e90();
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}



// ===== FUN_18000a950 @ 18000a950 (size 16) =====

void FUN_18000a950(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_18018a3cc("string too long");
}



// ===== FUN_18000e150 @ 18000e150 (size 7) =====

undefined4 FUN_18000e150(void)

{
  return DAT_1802e2730;
}



// ===== FUN_180131f90 @ 180131f90 (size 110) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180131f90(void)

{
  ULONGLONG UVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1802e2734) {
    FUN_18018c848(&DAT_1802e2734);
    if (DAT_1802e2734 == -1) {
      UVar1 = GetTickCount64();
      if (UVar1 == 0) {
        _DAT_1802ccb00 = 1;
        FUN_18000ec70();
      }
      _Init_thread_footer(&DAT_1802e2734);
      return;
    }
  }
  return;
}



// ===== FUN_180153390 @ 180153390 (size 105) =====

ulonglong FUN_180153390(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 0x1000) {
    uVar2 = FUN_18018c3ec();
    return uVar2;
  }
  if (param_1 + 0x27 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_180155810();
  }
  lVar1 = FUN_18018c3ec(param_1 + 0x27);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



// ===== FUN_1801534b0 @ 1801534b0 (size 216) =====

void FUN_1801534b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000a950();
  }
  if (7 < param_3) {
    uVar1 = param_3 | 7;
    if (uVar1 < 0x7fffffffffffffff) {
      if (uVar1 < 10) {
        uVar1 = 10;
      }
      uVar3 = uVar1 + 1;
      if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180155810();
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
      uVar1 = 0x7ffffffffffffffe;
    }
    lVar2 = FUN_180153390(uVar3 * 2);
    param_1[2] = param_3;
    *param_1 = lVar2;
    param_1[3] = uVar1;
    FUN_180267840(lVar2,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + lVar2) = 0;
    return;
  }
  param_1[2] = param_3;
  param_1[3] = 7;
  FUN_180267840(param_1,param_2,param_3 * 2);
  *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
  return;
}



// ===== FUN_180153970 @ 180153970 (size 107) =====

void FUN_180153970(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xfffffffffffffff8U)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// ===== FUN_180155810 @ 180155810 (size 31) =====

void FUN_180155810(void)

{
  undefined1 local_28 [40];
  
  FUN_180153940(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_18018daec(local_28,&DAT_1802c1da8);
}



// ===== FUN_180155850 @ 180155850 (size 113) =====

void FUN_180155850(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (7 < (ulonglong)param_1[3]) {
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90(lVar2);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}



// ===== FUN_1801569c0 @ 1801569c0 (size 542) =====

undefined4 * FUN_1801569c0(undefined4 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  *param_1 = 0x2a300;
  param_1[1] = 0x93a80;
  param_1[2] = 0x30;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 7;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  lVar4 = FUN_18018c3ec(0x18);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(param_1 + 0x10) = lVar4;
  plVar1 = (longlong *)(param_1 + 0x14);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 7;
  *(undefined8 *)(param_1 + 0x1c) = 8;
  param_1[0xe] = 0x3f800000;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar5 = (undefined8 *)*plVar1;
  lVar4 = (longlong)*(undefined8 **)(param_1 + 0x16) - (longlong)puVar5;
  if ((ulonglong)(lVar4 >> 3) < 0x10) {
    puVar5 = (undefined8 *)FUN_18018c3ec(0x80);
    if (*(longlong *)(param_1 + 0x18) - *plVar1 >> 3 != 0) {
      FUN_180004240(plVar1);
    }
    *plVar1 = (longlong)puVar5;
    puVar2 = puVar5 + 0x10;
    *(undefined8 **)(param_1 + 0x16) = puVar2;
    *(undefined8 **)(param_1 + 0x18) = puVar2;
    for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      *puVar5 = uVar3;
    }
  }
  else {
    uVar6 = lVar4 + 7U >> 3;
    if (*(undefined8 **)(param_1 + 0x16) < puVar5) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  lVar4 = FUN_18018c3ec(0x58);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(param_1 + 0x22) = lVar4;
  plVar1 = (longlong *)(param_1 + 0x26);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 7;
  *(undefined8 *)(param_1 + 0x2e) = 8;
  param_1[0x20] = 0x3f800000;
  uVar3 = *(undefined8 *)(param_1 + 0x22);
  puVar5 = (undefined8 *)*plVar1;
  lVar4 = (longlong)*(undefined8 **)(param_1 + 0x28) - (longlong)puVar5;
  if ((ulonglong)(lVar4 >> 3) < 0x10) {
    puVar5 = (undefined8 *)FUN_18018c3ec(0x80);
    if (*(longlong *)(param_1 + 0x2a) - *plVar1 >> 3 != 0) {
      FUN_180004240(plVar1);
    }
    *plVar1 = (longlong)puVar5;
    puVar2 = puVar5 + 0x10;
    *(undefined8 **)(param_1 + 0x28) = puVar2;
    *(undefined8 **)(param_1 + 0x2a) = puVar2;
    for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      *puVar5 = uVar3;
    }
  }
  else {
    uVar6 = lVar4 + 7U >> 3;
    if (*(undefined8 **)(param_1 + 0x28) < puVar5) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return param_1;
}



// ===== FUN_180156cc0 @ 180156cc0 (size 444) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180156cc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStackY_78 [32];
  undefined8 ***local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1802ca0c0 ^ (ulonglong)auStackY_78;
  FUN_180176bc0(local_48,param_1);
  plVar7 = (longlong *)DAT_1802dee90[1];
  cVar1 = *(char *)((longlong)plVar7 + 0x19);
  plVar8 = DAT_1802dee90;
  uVar3 = local_38;
  while (cVar1 == '\0') {
    plVar5 = plVar7 + 4;
    ppppuVar6 = local_48;
    if (7 < local_30) {
      ppppuVar6 = (undefined8 ****)local_48[0];
    }
    if (7 < (ulonglong)plVar7[7]) {
      plVar5 = (longlong *)*plVar5;
    }
    uVar2 = plVar7[6];
    local_38 = uVar3;
    uVar4 = FUN_180004290(plVar5,ppppuVar6);
    if (uVar4 == 0) {
      if (uVar2 < uVar3) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar3 < uVar2);
      }
    }
    plVar5 = plVar7 + 2;
    if (-1 < (int)uVar4) {
      plVar5 = plVar7;
      plVar8 = plVar7;
    }
    plVar7 = (longlong *)*plVar5;
    uVar3 = local_38;
    cVar1 = *(char *)((longlong)plVar7 + 0x19);
  }
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    plVar7 = plVar8 + 4;
    if (7 < (ulonglong)plVar8[7]) {
      plVar7 = (longlong *)plVar8[4];
    }
    ppppuVar6 = local_48;
    if (7 < local_30) {
      ppppuVar6 = (undefined8 ****)local_48[0];
    }
    uVar2 = plVar8[6];
    uVar4 = FUN_180004290(ppppuVar6,plVar7);
    if (uVar4 == 0) {
      if (uVar3 < uVar2) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar2 < uVar3);
      }
    }
    if (-1 < (int)uVar4) goto LAB_180156dd8;
  }
  plVar8 = DAT_1802dee90;
LAB_180156dd8:
  if ((plVar8 != DAT_1802dee90) && (plVar7 = plVar8 + 8, (longlong *)param_2 != plVar7)) {
    if (7 < (ulonglong)plVar8[0xb]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_180009320(param_2,plVar7);
  }
  if (7 < local_30) {
    if ((0xfff < local_30 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)local_48[0][-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  return;
}



// ===== FUN_180156f30 @ 180156f30 (size 887) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180156f30(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  LSTATUS LVar10;
  longlong lVar11;
  HKEY pHVar12;
  undefined8 uVar13;
  undefined8 *******pppppppuVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 auStackY_d8 [32];
  HKEY local_a8;
  longlong *plStack_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  HKEY local_70;
  longlong *plStack_68;
  HKEY local_60;
  int local_58 [2];
  DWORD local_50 [2];
  DWORD local_48 [2];
  undefined8 ******local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1802ca0c0 ^ (ulonglong)auStackY_d8;
  plVar16 = (longlong *)0x0;
  local_58[0] = 0;
  lVar11 = FUN_180171760();
  plVar15 = plVar16;
  if (lVar11 != 0) {
    local_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (wchar_t *)FUN_180153390(0x30);
    uVar13 = u_enable_cs_logger_180273ff0._8_8_;
    local_88 = _DAT_180274740;
    uStack_80 = _UNK_180274748;
    *(undefined8 *)local_98 = u_enable_cs_logger_180273ff0._0_8_;
    *(undefined8 *)(local_98 + 4) = uVar13;
    uVar8 = u_enable_cs_logger_180273ff0._28_4_;
    uVar7 = u_enable_cs_logger_180273ff0._24_4_;
    uVar6 = u_enable_cs_logger_180273ff0._20_4_;
    *(undefined4 *)(local_98 + 8) = u_enable_cs_logger_180273ff0._16_4_;
    *(undefined4 *)(local_98 + 10) = uVar6;
    *(undefined4 *)(local_98 + 0xc) = uVar7;
    *(undefined4 *)(local_98 + 0xe) = uVar8;
    local_98[0x10] = L'\0';
    plVar15 = (longlong *)0x1;
    local_58[0] = 1;
    cVar9 = FUN_180171d00(lVar11,&local_98);
    if (cVar9 != '\0') {
      bVar5 = false;
      goto LAB_180156fd5;
    }
  }
  bVar5 = true;
LAB_180156fd5:
  if ((plVar15 != (longlong *)0x0) && (7 < uStack_80)) {
    if ((0xfff < uStack_80 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_98 + (-8 - *(longlong *)(local_98 + -4))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  if (bVar5) {
    local_58[0] = 0;
    local_50[0] = 4;
    local_48[0] = 0;
    LVar10 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\Overwolf\\Overwolf\\",0,0x20019,
                           &local_60);
    if (LVar10 != 0) {
      return;
    }
    LVar10 = RegQueryValueExW(local_60,L"EnableCSLogger",(LPDWORD)0x0,local_48,(LPBYTE)local_58,
                              local_50);
    if (LVar10 != 0) {
      RegCloseKey(local_60);
      return;
    }
    RegCloseKey(local_60);
    if (local_58[0] == 0) {
      return;
    }
  }
  local_40 = (undefined8 *******)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_1801534b0(&local_40,L"ow-electron-owutility-");
  lVar11 = local_30;
  puVar17 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar17 = (undefined8 *)*param_1;
  }
  uVar4 = param_1[2];
  if (local_28 - local_30 < uVar4) {
    FUN_180156150(&local_40,uVar4);
  }
  else {
    pppppppuVar14 = &local_40;
    if (7 < local_28) {
      pppppppuVar14 = (undefined8 *******)local_40;
    }
    lVar2 = local_30 * 2;
    local_30 = uVar4 + local_30;
    FUN_180267840((longlong)pppppppuVar14 + lVar2,puVar17);
    *(undefined2 *)((longlong)pppppppuVar14 + (lVar11 + uVar4) * 2) = 0;
  }
  local_70 = (HKEY)0x0;
  plStack_68 = (longlong *)0x0;
  pppppppuVar14 = &local_40;
  if (7 < local_28) {
    pppppppuVar14 = (undefined8 *******)local_40;
  }
  pHVar12 = (HKEY)FUN_1801782b0(pppppppuVar14,0);
  local_60 = pHVar12;
  plVar15 = (longlong *)FUN_18018c3ec(0x18);
  if (plVar15 != (longlong *)0x0) {
    *plVar15 = 0;
    plVar15[1] = 0;
    *(undefined4 *)(plVar15 + 1) = 1;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)std::_Ref_count<base::File>::vftable;
    plVar15[2] = (longlong)pHVar12;
    plVar16 = plVar15;
  }
  local_60 = (HKEY)&local_a8;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_a8 = pHVar12;
  plStack_a0 = plVar16;
  local_70 = pHVar12;
  plStack_68 = plVar16;
  uVar13 = FUN_180008c90();
  FUN_18016d110(uVar13,&local_a8);
  uVar13 = FUN_180008c90();
  FUN_18016d4f0(uVar13,0);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar16 + 1;
    lVar11 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  if (7 < local_28) {
    if ((0xfff < local_28 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)local_40[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  return;
}



// ===== FUN_1801572b0 @ 1801572b0 (size 813) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801572b0(longlong param_1,undefined8 param_2,Value *param_3)

{
  LSTATUS LVar1;
  char *pcVar2;
  Value *this;
  longlong *plVar3;
  undefined1 auStackY_598 [32];
  longlong local_568 [3];
  ulonglong local_550;
  Value local_548 [40];
  HKEY local_520;
  DWORD local_518 [2];
  DWORD local_510 [2];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 local_490;
  Value local_488 [48];
  BYTE local_458 [528];
  BYTE local_248 [528];
  ulonglong local_38;
  
  local_38 = DAT_1802ca0c0 ^ (ulonglong)auStackY_598;
  uStack_500 = 0;
  local_4f8 = 0;
  local_4f0 = 7;
  local_508 = 0;
  uStack_4e0 = 0;
  local_4d8 = _DAT_1802a29c0;
  uStack_4d0 = _UNK_1802a29c8;
  local_4e8 = 0;
  uStack_4c0 = 0;
  local_4b8 = _DAT_1802a29c0;
  uStack_4b0 = _UNK_1802a29c8;
  local_4c8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  local_490 = 7;
  local_4a8 = 0;
  Json::Value::Value(local_488,0);
  plVar3 = (longlong *)(param_1 + 0x20);
  if (&local_4c8 != plVar3) {
    if (7 < *(ulonglong *)(param_1 + 0x38)) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_180009320(&local_4c8,plVar3,*(undefined8 *)(param_1 + 0x30));
  }
  FUN_180009320(&local_4e8,L"0.0.0.56",8);
  FUN_180267ee0(local_458,0,0x208);
  FUN_180267ee0(local_248,0);
  local_518[0] = 0x104;
  local_510[0] = 0;
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000001,(LPCWSTR)PTR_u_Software_OverwolfElectron__1802ca000
                        ,0,0x20019,&local_520);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExW(local_520,L"MUID",(LPDWORD)0x0,local_510,local_458,local_518);
    if (LVar1 == 0) {
      RegCloseKey(local_520);
      FUN_1801987f0(local_458);
      FUN_180009320(&local_508,local_458);
    }
    else {
      RegCloseKey(local_520);
    }
  }
  local_510[0] = 0x104;
  local_518[0] = 0;
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000001,(LPCWSTR)PTR_u_Software_OverwolfElectron__1802ca000
                        ,0,0x20019,&local_520);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExW(local_520,L"MUIDV2",(LPDWORD)0x0,local_518,local_248,local_510);
    if (LVar1 == 0) {
      RegCloseKey(local_520);
      FUN_1801987f0(local_248);
      FUN_180009320(&local_4a8,local_248);
    }
    else {
      RegCloseKey(local_520);
    }
  }
  if (param_3 != (Value *)0x0) {
    Json::Value::operator=(local_488,param_3);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    pcVar2 = (char *)FUN_180172790(local_568,param_1 + 0x40);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    Json::Value::Value(local_548,pcVar2);
    this = Json::Value::operator[](local_488,"uid");
    Json::Value::operator=(this,local_548);
    Json::Value::~Value(local_548);
    if (0xf < local_550) {
      if (0xfff < local_550 + 1) {
        if (0x1f < (local_568[0] - *(longlong *)(local_568[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1801aab90();
    }
  }
  FUN_180153cf0(param_2,&local_508);
  Json::Value::~Value(local_488);
  FUN_180155850(&local_4a8);
  FUN_180155850(&local_4c8);
  FUN_180155850(&local_4e8);
  FUN_180155850(&local_508);
  return;
}



// ===== FUN_180157a00 @ 180157a00 (size 406) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180157a00(undefined8 param_1,int param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_78 [8];
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined8 local_60;
  ulonglong uStack_58;
  longlong local_50 [3];
  ulonglong local_38;
  longlong local_30 [3];
  ulonglong local_18;
  
  if (0x12 < param_2) {
    FUN_180159420(local_30,param_3);
    FUN_180159420(&local_70,param_2);
    puVar1 = (undefined8 *)FUN_1801562a0(local_78,local_50);
    if (7 < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_180154bf0(L"400136",puVar1);
    if (7 < local_38) {
      if (0xfff < local_38 * 2 + 2) {
        if (0x1f < (local_50[0] - *(longlong *)(local_50[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1801aab90();
    }
    if (7 < uStack_58) {
      if (0xfff < uStack_58 * 2 + 2) {
        if (0x1f < (CONCAT62(uStack_6e,local_70) - *(longlong *)(CONCAT62(uStack_6e,local_70) + -8))
                   - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1801aab90();
    }
    local_60 = _DAT_1802a29c0;
    uStack_58 = _UNK_1802a29c8;
    in_RAX = 0;
    local_70 = 0;
    if (7 < local_18) {
      lVar2 = local_30[0];
      if (0xfff < local_18 * 2 + 2) {
        lVar2 = *(longlong *)(local_30[0] + -8);
        if (0x1f < (local_30[0] - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      in_RAX = thunk_FUN_1801aab90(lVar2);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// ===== FUN_180157ba0 @ 180157ba0 (size 2155) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_180157ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *****pppppuVar10;
  uint uVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  undefined1 auStackY_1b8 [32];
  wchar_t *local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  ulonglong uStack_170;
  uint local_168;
  undefined1 local_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  undefined8 local_150;
  ulonglong uStack_148;
  wchar_t *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulonglong uStack_128;
  undefined8 local_120;
  longlong local_118 [4];
  undefined1 local_f8;
  undefined7 uStack_f7;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 ****local_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1802ca0c0 ^ (ulonglong)auStackY_1b8;
  uVar11 = 0;
  local_168 = 0;
  local_120 = param_3;
  lVar5 = FUN_180171760();
  uVar4 = 7;
  if (lVar5 == 0) {
LAB_180157cfb:
    local_118[0] = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    local_118[3] = 0;
    FUN_1801534b0(local_118,&DAT_18029d08c);
    plVar6 = local_118;
    uVar11 = uVar11 | 8;
  }
  else {
    local_188 = (wchar_t *)0x0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = (wchar_t *)FUN_180153390(0x30);
    uVar8 = u_override_settings_url_180274030._8_8_;
    local_178 = _DAT_180274750;
    uStack_170 = _UNK_180274758;
    *(undefined8 *)local_188 = u_override_settings_url_180274030._0_8_;
    *(undefined8 *)(local_188 + 4) = uVar8;
    uVar8 = u_override_settings_url_180274030._24_8_;
    *(undefined8 *)(local_188 + 8) = u_override_settings_url_180274030._16_8_;
    *(undefined8 *)(local_188 + 0xc) = uVar8;
    *(undefined8 *)(local_188 + 0x10) = u_override_settings_url_180274030._32_8_;
    local_188[0x14] = u_override_settings_url_180274030[0x14];
    local_188[0x15] = L'\0';
    uVar11 = 1;
    local_168 = 1;
    cVar3 = FUN_180171d00(lVar5,&local_188);
    if (cVar3 == '\0') goto LAB_180157cfb;
    local_140 = (wchar_t *)0x0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = (wchar_t *)FUN_180153390(0x30);
    uVar8 = u_override_settings_url_180274030._8_8_;
    local_130 = _DAT_180274750;
    uStack_128 = _UNK_180274758;
    *(undefined8 *)local_140 = u_override_settings_url_180274030._0_8_;
    *(undefined8 *)(local_140 + 4) = uVar8;
    uVar8 = u_override_settings_url_180274030._24_8_;
    *(undefined8 *)(local_140 + 8) = u_override_settings_url_180274030._16_8_;
    *(undefined8 *)(local_140 + 0xc) = uVar8;
    *(undefined8 *)(local_140 + 0x10) = u_override_settings_url_180274030._32_8_;
    local_140[0x14] = u_override_settings_url_180274030[0x14];
    local_140[0x15] = L'\0';
    local_168 = 3;
    plVar6 = (longlong *)FUN_180171b00(lVar5,&local_160);
    uVar11 = 7;
  }
  local_d8 = (undefined8 ****)0x0;
  lStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (undefined8 *****)*plVar6;
  lStack_d0 = plVar6[1];
  local_c8 = plVar6[2];
  uStack_c0 = plVar6[3];
  plVar6[2] = 0;
  plVar6[3] = 7;
  *(undefined2 *)plVar6 = 0;
  if (((uVar11 & 8) != 0) && (uVar11 = uVar11 & 0xfffffff7, 7 < (ulonglong)local_118[3])) {
    if ((0xfff < local_118[3] * 2 + 2U) &&
       (0x1f < (local_118[0] - *(longlong *)(local_118[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  uVar13 = _UNK_1802a29c8;
  uVar8 = _DAT_1802a29c0;
  if ((uVar11 & 4) != 0) {
    uVar11 = uVar11 & 0xfffffffb;
    if (7 < uStack_148) {
      lVar1 = CONCAT62(uStack_15e,CONCAT11(uStack_15f,local_160));
      if ((0xfff < uStack_148 * 2 + 2) && (0x1f < (lVar1 - *(longlong *)(lVar1 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
    }
    local_150 = uVar8;
    uStack_148 = uVar13;
    local_160 = 0;
    uStack_15f = 0;
  }
  if ((uVar11 & 2) != 0) {
    uVar11 = uVar11 & 0xfffffffd;
    if (7 < uStack_128) {
      if ((0xfff < uStack_128 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_140 + (-8 - *(longlong *)(local_140 + -4))))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
      uVar8 = _DAT_1802a29c0;
      uVar13 = _UNK_1802a29c8;
    }
    local_140 = (wchar_t *)((ulonglong)local_140 & 0xffffffffffff0000);
    local_130 = uVar8;
    uStack_128 = uVar13;
  }
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffe;
    if (7 < uStack_170) {
      if ((0xfff < uStack_170 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_188 + (-8 - *(longlong *)(local_188 + -4))))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
      uVar8 = _DAT_1802a29c0;
      uVar13 = _UNK_1802a29c8;
    }
    local_188 = (wchar_t *)((ulonglong)local_188 & 0xffffffffffff0000);
    local_178 = uVar8;
    uStack_170 = uVar13;
  }
  pppppuVar10 = &local_d8;
  if (7 < uStack_c0) {
    pppppuVar10 = (undefined8 *****)local_d8;
  }
  FUN_1801594f0(&local_98,pppppuVar10);
  uVar13 = _UNK_180274718;
  uVar8 = _DAT_180274710;
  if (lVar5 != 0) {
    local_178 = _DAT_180274710;
    uStack_170 = _UNK_180274718;
    local_188 = (wchar_t *)u_phase_180274020._0_8_;
    uStack_180 = (ulonglong)(ushort)u_phase_180274020[4];
    uVar11 = uVar11 | 0x10;
    local_168 = uVar11;
    cVar3 = FUN_180171d00(lVar5,&local_188);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_180157f20;
    }
  }
  bVar2 = false;
LAB_180157f20:
  if (((uVar11 & 0x10) != 0) && (7 < uStack_170)) {
    if ((0xfff < uStack_170 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_188 + (-8 - *(longlong *)(local_188 + -4))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
    uVar8 = _DAT_180274710;
    uVar13 = _UNK_180274718;
  }
  if (bVar2) {
    local_188 = (wchar_t *)u_phase_180274020._0_8_;
    uStack_180 = (ulonglong)(ushort)u_phase_180274020[4];
    local_178 = uVar8;
    uStack_170 = uVar13;
    puVar7 = (undefined8 *)FUN_180171930(lVar5,&local_160);
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    FUN_1801999fc(puVar7);
    if (0xf < uStack_148) {
      lVar1 = CONCAT62(uStack_15e,CONCAT11(uStack_15f,local_160));
      lVar5 = lVar1;
      if ((0xfff < uStack_148 + 1) &&
         (lVar5 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar5) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90(lVar5);
    }
    local_150 = _DAT_1802a29d0;
    uStack_148 = _UNK_1802a29d8;
    local_160 = 0;
    if (7 < uStack_170) {
      if ((0xfff < uStack_170 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_188 + (-8 - *(longlong *)(local_188 + -4))))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
    }
  }
  FUN_180176ca0(&local_f8);
  uVar8 = FUN_180008c90();
  FUN_18016d600(uVar8);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  Json::Value::Value((Value *)&local_78,0);
  uStack_b0 = 0;
  local_a8 = _DAT_1802a29d0;
  uStack_a0 = _UNK_1802a29d8;
  local_b8 = 0;
  if (local_e8 != 0) {
    puVar9 = &local_f8;
    if (0xf < local_e0) {
      puVar9 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
    }
    cVar3 = FUN_18016ee00(puVar9,&local_78);
    if (cVar3 != '\0') {
      local_178 = _DAT_180274720;
      uStack_170 = _UNK_180274728;
      local_188 = (wchar_t *)0x36352e302e302e30;
      uStack_180 = 0;
      uVar4 = FUN_180132b30(param_1,param_2);
      if (0xf < uStack_170) {
        pwVar12 = local_188;
        if ((0xfff < uStack_170 + 1) &&
           (pwVar12 = *(wchar_t **)(local_188 + -4),
           0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pwVar12)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1801aab90(pwVar12);
      }
      local_178 = _DAT_1802a29d0;
      uStack_170 = _UNK_1802a29d8;
      local_188 = (wchar_t *)((ulonglong)local_188 & 0xffffffffffffff00);
    }
  }
  if (0xf < uStack_a0) {
    if ((0xfff < uStack_a0 + 1) && (0x1f < (local_b8 - *(longlong *)(local_b8 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_a8 = _DAT_1802a29d0;
  uStack_a0 = _UNK_1802a29d8;
  Json::Value::~Value((Value *)&local_78);
  if (0xf < local_e0) {
    if ((0xfff < local_e0 + 1) &&
       (0x1f < (CONCAT71(uStack_f7,local_f8) - *(longlong *)(CONCAT71(uStack_f7,local_f8) + -8)) -
               8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  local_e8 = 0;
  local_e0 = 0xf;
  local_f8 = 0;
  if (7 < uStack_80) {
    if ((0xfff < uStack_80 * 2 + 2) &&
       (0x1f < (CONCAT62(uStack_96,local_98) - *(longlong *)(CONCAT62(uStack_96,local_98) + -8)) -
               8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  local_88 = _DAT_1802a29c0;
  uStack_80 = _UNK_1802a29c8;
  local_98 = 0;
  if (7 < uStack_c0) {
    if ((0xfff < uStack_c0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)local_d8[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  return uVar4;
}



// ===== FUN_180158420 @ 180158420 (size 3188) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180158420(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  Value *pVVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  undefined1 auStackY_258 [32];
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  ulonglong local_200;
  ulonglong uStack_1f8;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  ulonglong *local_1d0;
  ulonglong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  undefined **local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [12];
  char local_10c;
  undefined1 local_108 [48];
  undefined8 *local_d8;
  undefined1 local_c8 [40];
  undefined1 local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_1802ca0c0 ^ (ulonglong)auStackY_258;
  bVar16 = false;
  local_1e8 = (undefined *)((ulonglong)local_1e8 & 0xffffffff00000000);
  local_1e0 = param_3;
  local_1d8 = param_2;
  local_1d0 = param_1;
  FUN_180131f90();
  SetErrorMode(0x8003);
  FUN_180171d60();
  FUN_180156f30(param_1);
  if (param_1[2] == 0) {
    uVar10 = FUN_180008c90();
    FUN_18016d600(uVar10,0,3,"invalid electron app name");
    FUN_180155850(param_1);
    return 4;
  }
  lVar11 = FUN_180171760();
  if (lVar11 == 0) {
LAB_180158535:
    bVar4 = false;
  }
  else {
    local_210 = (wchar_t *)0x0;
    uStack_208 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = (wchar_t *)FUN_180153390(0x20);
    uVar10 = u_force_sync_180274110._8_8_;
    local_200 = _DAT_180274730;
    uStack_1f8 = _UNK_180274738;
    *(undefined8 *)local_210 = u_force_sync_180274110._0_8_;
    *(undefined8 *)(local_210 + 4) = uVar10;
    *(undefined4 *)(local_210 + 8) = u_force_sync_180274110._16_4_;
    local_210[10] = L'\0';
    bVar16 = true;
    local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,1);
    cVar6 = FUN_180171d00(lVar11,&local_210);
    bVar4 = true;
    if (cVar6 == '\0') goto LAB_180158535;
  }
  if ((bVar16) && (7 < uStack_1f8)) {
    if ((0xfff < uStack_1f8 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_210 + (-8 - *(longlong *)(local_210 + -4))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  uVar12 = _UNK_180274708;
  uVar10 = _DAT_180274700;
  bVar16 = false;
  if (lVar11 == 0) {
LAB_1801585d9:
    local_218 = 0;
  }
  else {
    uStack_208 = 0;
    local_200 = _DAT_180274700;
    uStack_1f8 = _UNK_180274708;
    local_210._0_6_ = CONCAT24(DAT_180274128._4_2_,(undefined4)DAT_180274128);
    local_210 = (wchar_t *)(ulonglong)(uint6)local_210;
    bVar16 = true;
    local_1e8 = (undefined *)((ulonglong)local_1e8 & 0xffffffff00000000 | 2);
    cVar6 = FUN_180171d00(lVar11,&local_210);
    local_218 = 1;
    if (cVar6 == '\0') goto LAB_1801585d9;
  }
  if ((bVar16) && (7 < uStack_1f8)) {
    if ((0xfff < uStack_1f8 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_210 + (-8 - *(longlong *)(local_210 + -4))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
    uVar10 = _DAT_180274700;
    uVar12 = _UNK_180274708;
  }
  uStack_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 7;
  local_1c8 = 0;
  uStack_208 = 0;
  local_210._0_6_ = CONCAT24(DAT_180274018._4_2_,(undefined4)DAT_180274018);
  local_210 = (wchar_t *)(ulonglong)(uint6)local_210;
  local_200 = uVar10;
  uStack_1f8 = uVar12;
  cVar6 = FUN_180171d00(lVar11,&local_210);
  if (7 < uStack_1f8) {
    uVar12 = (ulonglong)local_210;
    if ((0xfff < uStack_1f8 * 2 + 2) &&
       (uVar12 = *(ulonglong *)((longlong)local_210 - 8), 0x1f < ((longlong)local_210 - uVar12) - 8)
       ) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90(uVar12);
  }
  if (cVar6 != '\0') {
    uStack_208 = 0;
    local_200 = _DAT_180274700;
    uStack_1f8 = _UNK_180274708;
    local_210._0_6_ = CONCAT24(DAT_180274018._4_2_,(undefined4)DAT_180274018);
    local_210 = (wchar_t *)(ulonglong)(uint6)local_210;
    uVar10 = FUN_180171b00(lVar11,&local_1a8);
    FUN_180008f70(&local_1c8,uVar10);
    if (7 < uStack_190) {
      if ((0xfff < uStack_190 * 2 + 2) && (0x1f < (local_1a8 - *(longlong *)(local_1a8 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
    }
    local_198 = _DAT_1802a29c0;
    uStack_190 = _UNK_1802a29c8;
    local_1a8 = local_1a8 & 0xffffffffffff0000;
    if (7 < uStack_1f8) {
      if ((0xfff < uStack_1f8 * 2 + 2) &&
         (0x1f < ((longlong)local_210 - *(longlong *)((longlong)local_210 - 8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
    }
  }
  if (local_1b8 == 0) {
    FUN_180156cc0(param_1,&local_1c8);
  }
  local_178 = (undefined **)0x0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uVar10 = FUN_180003d90(&local_1a8,&local_1c8);
  local_1e8 = (undefined *)uVar10;
  FUN_180005a70(&local_178,param_1);
  local_178 = ElectronCookieSyncer::vftable;
  FUN_180003d90(&local_138,uVar10);
  FUN_180155850(uVar10);
  FUN_1801569c0(local_118);
  puVar18 = &local_1c8;
  if (local_1b8 == 0) {
    puVar18 = param_1;
  }
  local_1e8 = PTR_u_Software_OverwolfElectron__1802ca000;
  uVar12 = FUN_1801987f0(PTR_u_Software_OverwolfElectron__1802ca000);
  puVar1 = puVar18 + 2;
  if (0x7ffffffffffffffe - *puVar1 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_18000a950();
  }
  if (7 < puVar18[3]) {
    puVar18 = (ulonglong *)*puVar18;
  }
  local_210 = (wchar_t *)0x0;
  uStack_208 = 0;
  uVar2 = uVar12 + *puVar1;
  uVar17 = 7;
  puVar13 = &local_210;
  if (7 < uVar2) {
    uVar17 = uVar2 | 7;
    if (uVar17 < 0x7fffffffffffffff) {
      if (uVar17 < 10) {
        uVar17 = 10;
      }
      uVar15 = uVar17 + 1;
      if (0x7fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_180155810();
      }
    }
    else {
      uVar17 = 0x7ffffffffffffffe;
      uVar15 = 0x7fffffffffffffff;
    }
    puVar13 = (undefined8 *)FUN_180153390(uVar15 * 2);
    local_210 = (wchar_t *)puVar13;
  }
  local_200 = uVar2;
  uStack_1f8 = uVar17;
  FUN_180267840(puVar13,local_1e8,uVar12 * 2);
  FUN_180267840(uVar12 * 2 + (longlong)puVar13,puVar18);
  *(undefined2 *)((longlong)puVar13 + uVar2 * 2) = 0;
  FUN_180008f70(local_108,&local_210);
  if (7 < uStack_1f8) {
    if ((0xfff < uStack_1f8 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_210 + (-8 - *(longlong *)((longlong)local_210 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  local_a0 = local_218;
  iVar7 = FUN_180157ba0(&local_1c8,param_1,local_118);
  if ((iVar7 == 0) || (bVar4)) {
    if (local_10c != '\0') {
      FUN_180176ca0(&local_1a8);
      uVar10 = FUN_180008c90();
      FUN_18016d600(uVar10,0);
      if (0xf < uStack_190) {
        if ((0xfff < uStack_190 + 1) && (0x1f < (local_1a8 - *(longlong *)(local_1a8 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1801aab90();
      }
      FUN_180153970(local_80);
      FUN_180008dc0(local_90);
      FUN_180153970(local_c8);
      *(undefined8 *)local_d8[1] = 0;
      puVar13 = (undefined8 *)*local_d8;
      while (puVar13 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar13;
        thunk_FUN_1801aab90(puVar13,0x18);
        puVar13 = puVar3;
      }
      thunk_FUN_1801aab90(local_d8,0x18);
      FUN_180155850(local_108);
      local_178 = ElectronCookieSyncer::vftable;
      FUN_180155850(&local_138);
      FUN_180005b50(&local_178);
      if (local_1b0 < 8) {
LAB_180158d9e:
        local_1b8 = 0;
        local_1b0 = 7;
        local_1c8 = local_1c8 & 0xffffffffffff0000;
        FUN_180155850(param_1);
        return 0;
      }
      if ((local_1b0 * 2 + 2 < 0x1000) || ((local_1c8 - *(longlong *)(local_1c8 - 8)) - 8 < 0x20)) {
        thunk_FUN_1801aab90();
        goto LAB_180158d9e;
      }
      goto LAB_180158fdd;
    }
    FUN_180176ca0(&local_1a8,param_1);
    uVar10 = FUN_180008c90();
    uVar5 = local_1e0;
    FUN_18016d600(uVar10,0);
    if (0xf < uStack_190) {
      if ((0xfff < uStack_190 + 1) && (0x1f < (local_1a8 - *(longlong *)(local_1a8 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
    }
    iVar7 = FUN_180005bd0(&local_178,local_118,local_1d8,uVar5);
    FUN_180176ca0(&local_1a8,param_1);
    uVar10 = FUN_180008c90();
    FUN_18016d600(uVar10,0);
    if (0xf < uStack_190) {
      if ((0xfff < uStack_190 + 1) && (0x1f < (local_1a8 - *(longlong *)(local_1a8 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
    }
    switch(iVar7) {
    case 0:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
      iVar7 = 0;
    }
    FUN_180153970(local_80);
    FUN_180008dc0(local_90);
    FUN_180153970(local_c8);
    *(undefined8 *)local_d8[1] = 0;
    puVar13 = (undefined8 *)*local_d8;
    while (puVar13 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar13;
      thunk_FUN_1801aab90(puVar13,0x18);
      puVar13 = puVar3;
    }
    thunk_FUN_1801aab90(local_d8,0x18);
    FUN_180155850(local_108);
    local_178 = ElectronCookieSyncer::vftable;
    FUN_180155850(&local_138);
    FUN_180005b50(&local_178);
    if (local_1b0 < 8) goto LAB_180158bee;
    if (0xfff < local_1b0 * 2 + 2) {
      lVar11 = local_1c8 - *(longlong *)(local_1c8 - 8);
      goto joined_r0x000180158fbb;
    }
  }
  else {
    iVar8 = FUN_180004d50();
    cVar6 = FUN_180008ad0(&local_178);
    if (cVar6 != '\0') {
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      Json::Value::Value((Value *)&local_1a8,0);
      iVar9 = FUN_180004d50();
      Json::Value::Value((Value *)&local_210,iVar9);
      pVVar14 = Json::Value::operator[]((Value *)&local_1a8,"bid");
      Json::Value::operator=(pVVar14,(Value *)&local_210);
      Json::Value::~Value((Value *)&local_210);
      Json::Value::Value((Value *)&local_210,iVar8);
      pVVar14 = Json::Value::operator[]((Value *)&local_1a8,"sbid");
      Json::Value::operator=(pVVar14,(Value *)&local_210);
      Json::Value::~Value((Value *)&local_210);
      Json::Value::Value((Value *)&local_210,iVar7);
      pVVar14 = Json::Value::operator[]((Value *)&local_1a8,"error");
      Json::Value::operator=(pVVar14,(Value *)&local_210);
      Json::Value::~Value((Value *)&local_210);
      if (iVar7 == 3) {
        iVar8 = FUN_18000e150();
        Json::Value::Value((Value *)&local_210,iVar8);
        pVVar14 = Json::Value::operator[]((Value *)&local_1a8,"avid");
        Json::Value::operator=(pVVar14,(Value *)&local_210);
        Json::Value::~Value((Value *)&local_210);
      }
      FUN_1801572b0(&local_178,L"cs_error",&local_1a8);
      if ((code *)local_178[0x13] == FUN_180157a00) {
        FUN_180157a00();
      }
      else {
        (*(code *)local_178[0x13])(&local_178,iVar7);
      }
      Json::Value::~Value((Value *)&local_1a8);
    }
    switch(iVar7) {
    case 0:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
      iVar7 = 0;
    }
    FUN_180153970(local_80);
    FUN_180008dc0(local_90);
    FUN_180153970(local_c8);
    *(undefined8 *)local_d8[1] = 0;
    puVar13 = (undefined8 *)*local_d8;
    while (puVar13 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar13;
      thunk_FUN_1801aab90(puVar13,0x18);
      puVar13 = puVar3;
    }
    thunk_FUN_1801aab90(local_d8,0x18);
    FUN_180155850(local_108);
    local_178 = ElectronCookieSyncer::vftable;
    FUN_180155850(&local_138);
    FUN_180005b50(&local_178);
    if (local_1b0 < 8) goto LAB_180158bee;
    if (0xfff < local_1b0 * 2 + 2) {
      lVar11 = local_1c8 - *(longlong *)(local_1c8 - 8);
joined_r0x000180158fbb:
      if (0x1f < lVar11 - 8U) {
LAB_180158fdd:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  thunk_FUN_1801aab90();
LAB_180158bee:
  local_1c8 = local_1c8 & 0xffffffffffff0000;
  local_1b0 = 7;
  local_1b8 = 0;
  FUN_180155850(param_1);
  return iVar7;
}



// ===== RunSync @ 180159c70 (size 105) =====

undefined8 RunSync(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
                    /* 0x159c70  372  RunSync */
  if (param_1 == 0) {
    return 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_1801987f0();
  FUN_1801534b0(&local_28,param_1,uVar1);
  uVar1 = FUN_180158420(&local_28,param_2,0x12);
  return uVar1;
}



// ===== RunSync2 @ 180159ce0 (size 120) =====

undefined8 RunSync2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
                    /* 0x159ce0  373  RunSync2 */
  if (param_1 == 0) {
    return 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_1801987f0();
  FUN_1801534b0(&local_28,param_1,uVar1);
  uVar1 = FUN_180158420(&local_28,param_2,param_3);
  return uVar1;
}



// ===== Value @ 18015c720 (size 67) =====

/* public: __cdecl Json::Value::Value(int) __ptr64 */

Value * __thiscall Json::Value::Value(Value *this,int param_1)

{
                    /* 0x15c720  47  ??0Value@Json@@QEAA@H@Z */
  *(undefined8 *)(this + 0x10) = 0;
  initBasic(this,1,false);
  *(longlong *)this = (longlong)param_1;
  return this;
}



// ===== Value @ 18015c950 (size 166) =====

/* public: __cdecl Json::Value::Value(enum Json::ValueType) __ptr64 */

Value * __thiscall Json::Value::Value(Value *this,ValueType param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
                    /* 0x15c950  52  ??0Value@Json@@QEAA@W4ValueType@1@@Z */
  puVar3 = (undefined8 *)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  initBasic(this,param_1,false);
  switch(param_1) {
  case 1:
  case 2:
  case 3:
    *(undefined8 *)this = 0;
    break;
  case 4:
    *(undefined **)this = &DAT_180275e93;
    break;
  case 5:
    *this = (Value)0x0;
    break;
  case 6:
  case 7:
    puVar1 = (undefined8 *)FUN_18018c3ec(0x10);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar2 = FUN_18015f1a0(puVar1);
      *puVar1 = uVar2;
      puVar3 = puVar1;
    }
    *(undefined8 **)this = puVar3;
  }
  return this;
}



// ===== ~Value @ 18015d310 (size 89) =====

/* public: __cdecl Json::Value::~Value(void) __ptr64 */

void __thiscall Json::Value::~Value(Value *this)

{
  void *pvVar1;
  
                    /* 0x15d310  83  ??1Value@Json@@QEAA@XZ */
  releasePayload(this);
  *(undefined8 *)this = 0;
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x20,3,FUN_180003e30);
    thunk_FUN_1801aab90(pvVar1,0x60);
    return;
  }
  return;
}



// ===== operator= @ 18015da50 (size 32) =====

/* public: class Json::Value & __ptr64 __cdecl Json::Value::operator=(class Json::Value && __ptr64)
   __ptr64 */

Value * __thiscall Json::Value::operator=(Value *this,Value *param_1)

{
                    /* 0x15da50  110  ??4Value@Json@@QEAAAEAV01@$$QEAV01@@Z */
  swap(param_1,this);
  return this;
}



// ===== operator[] @ 18015e160 (size 34) =====

/* public: class Json::Value & __ptr64 __cdecl Json::Value::operator[](char const * __ptr64) __ptr64
    */

Value * __thiscall Json::Value::operator[](Value *this,char *param_1)

{
  Value *pVVar1;
  longlong lVar2;
  
                    /* 0x15e160  131  ??AValue@Json@@QEAAAEAV01@PEBD@Z */
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_1[lVar2] != '\0');
  pVVar1 = resolveReference(this,param_1,param_1 + lVar2);
  return pVVar1;
}



// ===== FUN_18016d600 @ 18016d600 (size 979) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18016d600(longlong param_1,char *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *******pppppppuVar2;
  ulonglong _Size;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStackY_138 [32];
  longlong local_f0;
  char *local_e8;
  undefined1 local_e0 [24];
  undefined8 *******local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_1802ca0c0 ^ (ulonglong)auStackY_138;
  iVar5 = *(int *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x58);
  uVar9 = 0;
  local_e8 = param_2;
  if ((lVar1 != 0) && (param_2 != (char *)0x0)) {
    local_c8 = (undefined8 *******)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    sVar6 = strlen(param_2);
    FUN_180153400(&local_c8,param_2,sVar6);
    uVar3 = local_b0;
    _Size = local_b8;
    pppppppuVar2 = local_c8;
    pppppppuVar10 = &local_c8;
    if (0xf < local_b0) {
      pppppppuVar10 = local_c8;
    }
    uVar11 = 0xcbf29ce484222325;
    if (local_b8 != 0) {
      do {
        uVar11 = (uVar11 ^ *(byte *)(uVar9 + (longlong)pppppppuVar10)) * 0x100000001b3;
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_b8);
    }
    uVar11 = *(ulonglong *)(lVar1 + 0x30) & uVar11;
    lVar12 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 8 + uVar11 * 0x10);
    local_f0 = *(longlong *)(lVar1 + 8);
    if (lVar12 != local_f0) {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + uVar11 * 0x10);
      while( true ) {
        puVar8 = (undefined8 *)(lVar12 + 0x10);
        if (0xf < *(ulonglong *)(lVar12 + 0x28)) {
          puVar8 = (undefined8 *)*puVar8;
        }
        pppppppuVar10 = &local_c8;
        if (0xf < uVar3) {
          pppppppuVar10 = pppppppuVar2;
        }
        if ((_Size == *(ulonglong *)(lVar12 + 0x20)) &&
           ((_Size == 0 || (iVar4 = memcmp(pppppppuVar10,puVar8,_Size), iVar4 == 0))))
        goto LAB_18016d744;
        if (lVar12 == lVar1) break;
        lVar12 = *(longlong *)(lVar12 + 8);
      }
    }
    lVar12 = 0;
LAB_18016d744:
    if (lVar12 == 0) {
      lVar12 = local_f0;
    }
    if (0xf < uVar3) {
      pppppppuVar10 = pppppppuVar2;
      if ((0xfff < uVar3 + 1) &&
         (pppppppuVar10 = (undefined8 *******)pppppppuVar2[-1],
         0x1f < (ulonglong)((longlong)pppppppuVar2 + (-8 - (longlong)pppppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90(pppppppuVar10);
    }
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8 = (undefined8 *******)((ulonglong)local_c8 & 0xffffffffffffff00);
    if (lVar12 != *(longlong *)(*(longlong *)(param_1 + 0x58) + 8)) {
      iVar5 = *(int *)(lVar12 + 0x30);
    }
  }
  if (iVar5 <= param_3) {
    local_f0 = FUN_18019c6b4(0);
    thunk_FUN_18019bf68(local_a8,&local_f0);
    FUN_18019c698(local_80,0x21,&DAT_180276f2c,local_a8);
    FUN_180178b00(local_e0,param_1 + 0x28,1);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      FUN_18016e0c0(&DAT_1802def00,0x3ff,0x3ff,"%s - %s: %s - ");
      DAT_1802df2ff = 0;
      OutputDebugStringA(&DAT_1802def00);
      FUN_180151460(&DAT_1802def00);
      puVar8 = (undefined8 *)FUN_180151450();
      FUN_180198004(*puVar8,&DAT_1802def00,0x3ff);
      DAT_1802df2ff = 0;
      OutputDebugStringA(&DAT_1802def00);
      OutputDebugStringA("\n");
      FUN_180151460(&DAT_180276f40,&DAT_1802def00);
    }
    else {
      if (param_3 == 0) {
        puVar7 = &DAT_180276fd4;
      }
      else if (param_3 == 1) {
        puVar7 = &DAT_180276fd8;
      }
      else if (param_3 == 2) {
        puVar7 = &DAT_180276fdc;
      }
      else if (param_3 == 3) {
        puVar7 = &DAT_180276fe0;
      }
      else {
        puVar7 = &DAT_180276fe4;
      }
      FUN_18016e130(*(longlong *)(param_1 + 0x18),"%s - %s: %s - ",local_80,puVar7);
      puVar8 = (undefined8 *)FUN_180151450();
      FUN_180197ee0(*puVar8,*(undefined8 *)(param_1 + 0x18),param_4,0);
      FUN_18016e130(*(undefined8 *)(param_1 + 0x18),&DAT_18027652c);
      fflush(*(FILE **)(param_1 + 0x18));
    }
    FUN_180178b40(local_e0);
  }
  return;
}



// ===== FUN_180171760 @ 180171760 (size 8) =====

undefined8 FUN_180171760(void)

{
  return DAT_1802df318;
}



// ===== FUN_180171b00 @ 180171b00 (size 507) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180171b00(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined1 auStackY_b8 [32];
  longlong local_80 [3];
  ulonglong uStack_68;
  undefined8 *local_60;
  undefined2 local_58;
  undefined6 uStack_56;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1802ca0c0 ^ (ulonglong)auStackY_b8;
  plVar5 = (longlong *)(param_1 + 0x18);
  local_60 = param_2;
  FUN_180170790(plVar5,local_80);
  lVar6 = local_80[2];
  if ((*(char *)(local_80[2] + 0x19) != '\0') ||
     (cVar4 = FUN_180170450(plVar5,param_3), cVar4 != '\0')) {
    lVar6 = *plVar5;
  }
  bVar7 = lVar6 != *plVar5;
  if (bVar7) {
    plVar5 = (longlong *)FUN_180003d90(&local_58,lVar6 + 0x40);
  }
  else {
    local_80[1] = 0;
    local_80[2] = _DAT_1802a29c0;
    uStack_68 = _UNK_1802a29c8;
    local_80[0] = 0;
    plVar5 = local_80;
  }
  uVar8 = _UNK_1802a29c8;
  lVar3 = _DAT_1802a29c0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = *(undefined4 *)((longlong)plVar5 + 4);
  lVar6 = plVar5[1];
  uVar2 = *(undefined4 *)((longlong)plVar5 + 0xc);
  *(int *)param_2 = (int)*plVar5;
  *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  *(int *)(param_2 + 1) = (int)lVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  uVar1 = *(undefined4 *)((longlong)plVar5 + 0x14);
  lVar6 = plVar5[3];
  uVar2 = *(undefined4 *)((longlong)plVar5 + 0x1c);
  *(int *)(param_2 + 2) = (int)plVar5[2];
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(int *)(param_2 + 3) = (int)lVar6;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar2;
  plVar5[2] = 0;
  plVar5[3] = 7;
  *(undefined2 *)plVar5 = 0;
  if (bVar7) {
    local_48 = lVar3;
    if (7 < uStack_40) {
      if ((0xfff < uStack_40 * 2 + 2) &&
         (0x1f < (CONCAT62(uStack_56,local_58) - *(longlong *)(CONCAT62(uStack_56,local_58) + -8)) -
                 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
      local_48 = _DAT_1802a29c0;
      uVar8 = _UNK_1802a29c8;
    }
    local_58 = 0;
    uStack_40 = uVar8;
  }
  if ((!bVar7) && (7 < uStack_68)) {
    if ((0xfff < uStack_68 * 2 + 2) && (0x1f < (local_80[0] - *(longlong *)(local_80[0] + -8)) - 8U)
       ) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1801aab90();
  }
  return param_2;
}



// ===== FUN_180171d00 @ 180171d00 (size 93) =====

bool FUN_180171d00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 local_28 [16];
  longlong local_18;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  FUN_180170790(plVar1,local_28,param_2);
  if (*(char *)(local_18 + 0x19) == '\0') {
    cVar2 = FUN_180170450(plVar1,param_2,local_18 + 0x20);
    if (cVar2 == '\0') goto LAB_180171d47;
  }
  local_18 = *plVar1;
LAB_180171d47:
  return local_18 != *plVar1;
}



// ===== FUN_180171d60 @ 180171d60 (size 282) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180171d60(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  LPWSTR pWVar4;
  undefined1 auStackY_68 [32];
  longlong local_30 [5];
  
  local_30[4] = DAT_1802ca0c0 ^ (ulonglong)auStackY_68;
  if (DAT_1802df318 == 0) {
    lVar2 = FUN_18018c3ec(0x30);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_1801708d0(lVar2,0);
    }
    DAT_1802df318 = lVar3;
    pWVar4 = GetCommandLineW();
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = 0;
    FUN_1801987f0(pWVar4);
    FUN_1801534b0(local_30,pWVar4);
    FUN_1801725d0(DAT_1802df318,local_30);
    if (7 < (ulonglong)local_30[3]) {
      if ((0xfff < local_30[3] * 2 + 2U) &&
         (0x1f < (local_30[0] - *(longlong *)(local_30[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1801aab90();
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_180176ca0 @ 180176ca0 (size 311) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180176ca0(undefined8 *param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPSTR lpMultiByteStr;
  LPCWSTR pWVar1;
  undefined1 auStackY_98 [32];
  CHAR local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1802ca0c0 ^ (ulonglong)auStackY_98;
  if (*(longlong *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    pWVar1 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      pWVar1 = *(LPCWSTR *)param_2;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,pWVar1,(int)*(longlong *)(param_2 + 8),(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    FUN_18014c4d0(&local_48,(longlong)cbMultiByte,0);
    lpMultiByteStr = &local_48;
    if (0xf < uStack_30) {
      lpMultiByteStr = (LPSTR)CONCAT71(uStack_47,local_48);
    }
    pWVar1 = param_2 + 8;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      param_2 = *(LPCWSTR *)param_2;
    }
    WideCharToMultiByte(0xfde9,0,param_2,*(int *)pWVar1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
    *param_1 = CONCAT71(uStack_47,local_48);
    param_1[1] = uStack_40;
    param_1[2] = local_38;
    param_1[3] = uStack_30;
  }
  return param_1;
}



// ===== __security_check_cookie @ 18018ca40 (size 30) =====

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1802ca0c0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_18018d4e0(_StackCookie);
  return;
}



// ===== _invoke_watson @ 180192b14 (size 71) =====

/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180192b42;
  FUN_1801927f8(2,0xc0000417);
  *(undefined8 *)(puVar3 + -8) = 0x180192b48;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180192b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}



// ===== FUN_1801987f0 @ 1801987f0 (size 328) =====

ulonglong FUN_1801987f0(undefined1 (*param_1) [32])

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  if (DAT_1802ca118 < 5) {
    pauVar2 = param_1;
    if (DAT_1802ca118 < 1) {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
             (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar3 != uVar4 >> 1) {
        return uVar3;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
      while( true ) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar2 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar2 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar2 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar2 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar2 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar2 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar2 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar2 + 0xe) == 0);
        if ((((((((((((((((SUB161(auVar5 >> 7,0) & 1) != 0 || (SUB161(auVar5 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar5 >> 0x17,0) & 1) != 0) || (SUB161(auVar5 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar5 >> 0x27,0) & 1) != 0) || (SUB161(auVar5 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar5 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar5 >> 0x3f,0) & 1) != 0) || (SUB161(auVar5 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar5 >> 0x4f,0) & 1) != 0) || (SUB161(auVar5 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || (SUB161(auVar5 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar5 >> 0x6f,0) & 1) != 0) || (auVar5._14_2_ >> 7 & 1) != 0) ||
            (auVar5._14_2_ & 0x8000) != 0) break;
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
      }
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (((ulonglong)param_1 & 1) == 0) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0x20 - uVar3;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
           (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
    if (uVar3 != uVar4 >> 1) {
      return uVar3;
    }
    pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
    while (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
          (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                       (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                            (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                           (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                          (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0')
                        && (SUB321(auVar1 >> 0x87,0) & 1) == 0) &&
                       (SUB321(auVar1 >> 0x8f,0) & 1) == 0) && (SUB321(auVar1 >> 0x97,0) & 1) == 0)
                     && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0)
                   && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                 && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
               (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
             (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
           (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
          -1 < auVar1[0x1f]) {
      pauVar2 = pauVar2 + 1;
    }
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}



// ===== FUN_180267840 @ 180267840 (size 1353) =====

void FUN_180267840(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (puVar26 <= param_1) {
    if (DAT_1802ca118 < 3) {
      if ((param_3 < 0x801) || (((byte)DAT_1802df794 & 2) == 0)) {
        if (0x80 < param_3) {
          lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
          param_1 = (undefined8 *)((longlong)param_1 - lVar30);
          param_2 = (undefined8 *)((longlong)param_2 - lVar30);
          param_3 = param_3 + lVar30;
          if (0x80 < param_3) {
            do {
              uVar10 = param_2[1];
              uVar11 = param_2[2];
              uVar12 = param_2[3];
              uVar13 = param_2[4];
              uVar32 = param_2[5];
              uVar33 = param_2[6];
              uVar14 = param_2[7];
              *param_1 = *param_2;
              param_1[1] = uVar10;
              param_1[2] = uVar11;
              param_1[3] = uVar12;
              param_1[4] = uVar13;
              param_1[5] = uVar32;
              param_1[6] = uVar33;
              param_1[7] = uVar14;
              uVar10 = param_2[9];
              uVar11 = param_2[10];
              uVar12 = param_2[0xb];
              uVar13 = param_2[0xc];
              uVar32 = param_2[0xd];
              uVar33 = param_2[0xe];
              uVar14 = param_2[0xf];
              param_1[8] = param_2[8];
              param_1[9] = uVar10;
              param_1[10] = uVar11;
              param_1[0xb] = uVar12;
              param_1[0xc] = uVar13;
              param_1[0xd] = uVar32;
              param_1[0xe] = uVar33;
              param_1[0xf] = uVar14;
              param_1 = param_1 + 0x10;
              param_2 = param_2 + 0x10;
              param_3 = param_3 - 0x80;
            } while (0x7f < param_3);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000180267d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulonglong)*(uint *)(&DAT_1802a2c88 + (param_3 + 0xf >> 4) * 4) + 0x180000000))()
        ;
        return;
      }
    }
    else if (((param_3 < 0x2001) || (0x180000 < param_3)) || (((byte)DAT_1802df794 & 2) == 0)) {
      uVar10 = *param_2;
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
      uVar32 = *puVar26;
      uVar33 = puVar26[1];
      uVar14 = puVar26[2];
      uVar15 = puVar26[3];
      if (0x100 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
        pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
        pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x100 < param_3) {
          if (0x180000 < param_3) {
            do {
              uVar29 = param_3;
              pauVar28 = pauVar27;
              pauVar24 = pauVar23;
              auVar3 = pauVar28[1];
              auVar4 = pauVar28[2];
              auVar5 = pauVar28[3];
              auVar6 = vmovntdq_avx(*pauVar28);
              *pauVar24 = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[1] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[2] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[3] = auVar3;
              auVar3 = pauVar28[5];
              auVar4 = pauVar28[6];
              auVar5 = pauVar28[7];
              auVar6 = vmovntdq_avx(pauVar28[4]);
              pauVar24[4] = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[5] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[6] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[7] = auVar3;
              pauVar23 = pauVar24 + 8;
              pauVar27 = pauVar28 + 8;
              param_3 = uVar29 - 0x100;
            } while (0xff < uVar29 - 0x100);
            uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
            switch(uVar29) {
            case 0x1e1:
            case 0x1e2:
            case 0x1e3:
            case 0x1e4:
            case 0x1e5:
            case 0x1e6:
            case 0x1e7:
            case 0x1e8:
            case 0x1e9:
            case 0x1ea:
            case 0x1eb:
            case 0x1ec:
            case 0x1ed:
            case 0x1ee:
            case 0x1ef:
            case 0x1f0:
            case 0x1f1:
            case 0x1f2:
            case 499:
            case 500:
            case 0x1f5:
            case 0x1f6:
            case 0x1f7:
            case 0x1f8:
            case 0x1f9:
            case 0x1fa:
            case 0x1fb:
            case 0x1fc:
            case 0x1fd:
            case 0x1fe:
            case 0x1ff:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
              *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
            case 0x1c1:
            case 0x1c2:
            case 0x1c3:
            case 0x1c4:
            case 0x1c5:
            case 0x1c6:
            case 0x1c7:
            case 0x1c8:
            case 0x1c9:
            case 0x1ca:
            case 0x1cb:
            case 0x1cc:
            case 0x1cd:
            case 0x1ce:
            case 0x1cf:
            case 0x1d0:
            case 0x1d1:
            case 0x1d2:
            case 0x1d3:
            case 0x1d4:
            case 0x1d5:
            case 0x1d6:
            case 0x1d7:
            case 0x1d8:
            case 0x1d9:
            case 0x1da:
            case 0x1db:
            case 0x1dc:
            case 0x1dd:
            case 0x1de:
            case 0x1df:
            case 0x1e0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
              *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
            case 0x1a1:
            case 0x1a2:
            case 0x1a3:
            case 0x1a4:
            case 0x1a5:
            case 0x1a6:
            case 0x1a7:
            case 0x1a8:
            case 0x1a9:
            case 0x1aa:
            case 0x1ab:
            case 0x1ac:
            case 0x1ad:
            case 0x1ae:
            case 0x1af:
            case 0x1b0:
            case 0x1b1:
            case 0x1b2:
            case 0x1b3:
            case 0x1b4:
            case 0x1b5:
            case 0x1b6:
            case 0x1b7:
            case 0x1b8:
            case 0x1b9:
            case 0x1ba:
            case 0x1bb:
            case 0x1bc:
            case 0x1bd:
            case 0x1be:
            case 0x1bf:
            case 0x1c0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
              *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
            case 0x181:
            case 0x182:
            case 0x183:
            case 0x184:
            case 0x185:
            case 0x186:
            case 0x187:
            case 0x188:
            case 0x189:
            case 0x18a:
            case 0x18b:
            case 0x18c:
            case 0x18d:
            case 0x18e:
            case 399:
            case 400:
            case 0x191:
            case 0x192:
            case 0x193:
            case 0x194:
            case 0x195:
            case 0x196:
            case 0x197:
            case 0x198:
            case 0x199:
            case 0x19a:
            case 0x19b:
            case 0x19c:
            case 0x19d:
            case 0x19e:
            case 0x19f:
            case 0x1a0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
              *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
            case 0x161:
            case 0x162:
            case 0x163:
            case 0x164:
            case 0x165:
            case 0x166:
            case 0x167:
            case 0x168:
            case 0x169:
            case 0x16a:
            case 0x16b:
            case 0x16c:
            case 0x16d:
            case 0x16e:
            case 0x16f:
            case 0x170:
            case 0x171:
            case 0x172:
            case 0x173:
            case 0x174:
            case 0x175:
            case 0x176:
            case 0x177:
            case 0x178:
            case 0x179:
            case 0x17a:
            case 0x17b:
            case 0x17c:
            case 0x17d:
            case 0x17e:
            case 0x17f:
            case 0x180:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
              *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
            case 0x141:
            case 0x142:
            case 0x143:
            case 0x144:
            case 0x145:
            case 0x146:
            case 0x147:
            case 0x148:
            case 0x149:
            case 0x14a:
            case 0x14b:
            case 0x14c:
            case 0x14d:
            case 0x14e:
            case 0x14f:
            case 0x150:
            case 0x151:
            case 0x152:
            case 0x153:
            case 0x154:
            case 0x155:
            case 0x156:
            case 0x157:
            case 0x158:
            case 0x159:
            case 0x15a:
            case 0x15b:
            case 0x15c:
            case 0x15d:
            case 0x15e:
            case 0x15f:
            case 0x160:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
              *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
            case 0x121:
            case 0x122:
            case 0x123:
            case 0x124:
            case 0x125:
            case 0x126:
            case 0x127:
            case 0x128:
            case 0x129:
            case 0x12a:
            case 299:
            case 300:
            case 0x12d:
            case 0x12e:
            case 0x12f:
            case 0x130:
            case 0x131:
            case 0x132:
            case 0x133:
            case 0x134:
            case 0x135:
            case 0x136:
            case 0x137:
            case 0x138:
            case 0x139:
            case 0x13a:
            case 0x13b:
            case 0x13c:
            case 0x13d:
            case 0x13e:
            case 0x13f:
            case 0x140:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
              *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
            default:
              puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
              *puVar26 = uVar32;
              puVar26[1] = uVar33;
              puVar26[2] = uVar14;
              puVar26[3] = uVar15;
            case 0x100:
              *param_1 = uVar10;
              param_1[1] = uVar11;
              param_1[2] = uVar12;
              param_1[3] = uVar13;
              return;
            }
          }
          do {
            uVar10 = *(undefined8 *)(*pauVar27 + 8);
            uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
            uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
            uVar13 = *(undefined8 *)pauVar27[1];
            uVar32 = *(undefined8 *)(pauVar27[1] + 8);
            uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
            uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
            uVar15 = *(undefined8 *)pauVar27[2];
            uVar16 = *(undefined8 *)(pauVar27[2] + 8);
            uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
            uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
            uVar19 = *(undefined8 *)pauVar27[3];
            uVar20 = *(undefined8 *)(pauVar27[3] + 8);
            uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
            uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
            *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
            *(undefined8 *)(*pauVar23 + 8) = uVar10;
            *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
            *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
            *(undefined8 *)pauVar23[1] = uVar13;
            *(undefined8 *)(pauVar23[1] + 8) = uVar32;
            *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[2] = uVar15;
            *(undefined8 *)(pauVar23[2] + 8) = uVar16;
            *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[3] = uVar19;
            *(undefined8 *)(pauVar23[3] + 8) = uVar20;
            *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
            uVar10 = *(undefined8 *)(pauVar27[4] + 8);
            uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
            uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
            uVar13 = *(undefined8 *)pauVar27[5];
            uVar32 = *(undefined8 *)(pauVar27[5] + 8);
            uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
            uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
            uVar15 = *(undefined8 *)pauVar27[6];
            uVar16 = *(undefined8 *)(pauVar27[6] + 8);
            uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
            uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
            uVar19 = *(undefined8 *)pauVar27[7];
            uVar20 = *(undefined8 *)(pauVar27[7] + 8);
            uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
            uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
            *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
            *(undefined8 *)(pauVar23[4] + 8) = uVar10;
            *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
            *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
            *(undefined8 *)pauVar23[5] = uVar13;
            *(undefined8 *)(pauVar23[5] + 8) = uVar32;
            *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[6] = uVar15;
            *(undefined8 *)(pauVar23[6] + 8) = uVar16;
            *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[7] = uVar19;
            *(undefined8 *)(pauVar23[7] + 8) = uVar20;
            *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
            pauVar23 = pauVar23 + 8;
            pauVar27 = pauVar27 + 8;
            param_3 = param_3 - 0x100;
          } while (0xff < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000180267ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_1802a2c40 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar26;
  uVar13 = puVar26[1];
  puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar26 = puVar25;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar25 & 0xf) != 0) {
    puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    *puVar25 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar26 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar25 = puVar26;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
      uVar13 = *puVar26;
      uVar32 = puVar26[1];
      puVar26 = puVar25 + -0x10;
      puVar25[-2] = *puVar1;
      puVar25[-1] = uVar12;
      puVar25[-4] = uVar13;
      puVar25[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar25[-6] = *puVar1;
      puVar25[-5] = uVar12;
      puVar25[-8] = uVar13;
      puVar25[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar25[-10] = *puVar1;
      puVar25[-9] = uVar12;
      puVar25[-0xc] = uVar13;
      puVar25[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      *puVar26 = uVar32;
      puVar25[-0xf] = uVar33;
      puVar25 = puVar26;
    }
    puVar25[-0xe] = uVar12;
    puVar25[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar26 = puVar26 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar26 = uVar32;
  puVar26[1] = uVar33;
  return;
}



// ===== SetErrorMode @ EXTERNAL:00000097 (size 0) =====
// <decompile failed>

// decompiled 41 ok, 1 failed
