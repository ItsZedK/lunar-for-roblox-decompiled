// Program: node-get-windows.node

// ===== FUN_180001020 @ 180001020 (size 70) =====

HMODULE FUN_180001020(int param_1,longlong param_2)

{
  int iVar1;
  HMODULE pHVar2;
  
  if ((param_1 == 1) &&
     (iVar1 = FUN_18000bf60(*(byte **)(param_2 + 0x18),(byte *)"node.exe"), iVar1 == 0)) {
    pHVar2 = GetModuleHandleA("libnode.dll");
    if (pHVar2 != (HMODULE)0x0) {
      return pHVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000180001058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pHVar2 = GetModuleHandleA((LPCSTR)0x0);
    return pHVar2;
  }
  return (HMODULE)0x0;
}



// ===== FUN_180001090 @ 180001090 (size 40) =====

void FUN_180001090(longlong *param_1)

{
  code *pcVar1;
  
  if (DAT_180025d50 != (code *)0x0) {
    (*DAT_180025d50)();
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== _guard_check_icall @ 1800010c0 (size 3) =====

void _guard_check_icall(void)

{
  return;
}



// ===== FUN_1800010d0 @ 1800010d0 (size 43) =====

undefined8 * FUN_1800010d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1800214b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180006150(param_1);
  }
  return param_1;
}



// ===== FUN_180001110 @ 180001110 (size 25) =====

undefined8 * FUN_180001110(undefined8 *param_1)

{
  param_1[1] = "bad array new length";
  *param_1 = &PTR_FUN_1800214d0;
  return param_1;
}



// ===== FUN_180001140 @ 180001140 (size 24) =====

void FUN_180001140(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 local_18 [3];
  
  plVar2 = FUN_180001110(local_18);
  FUN_180001090(plVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== FUN_180001160 @ 180001160 (size 17) =====

void FUN_180001160(void)

{
  code *pcVar1;
  
  FUN_180006d50(0x180021148);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== FUN_180001180 @ 180001180 (size 135) =====

void FUN_180001180(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  code *pcVar3;
  LPVOID pvVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  if (0xf < (ulonglong)param_1[6]) {
    pvVar1 = (LPVOID)param_1[3];
    puVar5 = auStack_28;
    pvVar4 = pvVar1;
    if ((0xfff < param_1[6] + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar1 + -8), puVar5 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
      pcVar3 = (code *)swi(0x29);
      pvVar4 = (LPVOID)(*pcVar3)(5);
      puVar5 = auStack_20;
    }
    *(undefined8 *)(puVar5 + -8) = 0x1800011cd;
    thunk_FUN_180006150(pvVar4);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[1] != 0) {
    if (*(char *)(param_1 + 2) == '\0') {
      uVar2 = *param_1;
      *(undefined8 *)(puVar5 + -8) = 0x1800011f9;
      napi_delete_reference(uVar2);
    }
    param_1[1] = 0;
  }
  return;
}



// ===== FUN_180001210 @ 180001210 (size 47) =====

void FUN_180001210(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    if (*(char *)(param_1 + 2) == '\0') {
      napi_delete_reference(*param_1);
    }
    param_1[1] = 0;
  }
  return;
}



// ===== FUN_180001240 @ 180001240 (size 241) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180001240(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong local_48;
  char local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar7 = auStack_78;
  local_18 = DAT_180025040 ^ (ulonglong)auStack_78;
  iVar3 = napi_get_null(*param_1,local_58);
  uVar6 = *param_1;
  if (iVar3 == 0) {
LAB_180001307:
    *param_2 = uVar6;
    param_2[1] = *(undefined8 *)(puVar7 + 0x20);
  }
  else {
    puVar4 = FUN_180001aa0(&local_50,uVar6);
    FUN_180001f20(puVar4);
    if (0xf < local_20) {
      pvVar2 = (LPVOID)CONCAT71(uStack_37,local_38);
      pvVar5 = pvVar2;
      if ((0xfff < local_20 + 1) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
        uVar6 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar7 = auStack_70;
        goto LAB_180001307;
      }
      thunk_FUN_180006150(pvVar5);
    }
    local_28 = 0;
    local_20 = 0xf;
    local_38 = 0;
    if ((local_48 != 0) && (local_40 == '\0')) {
      napi_delete_reference(local_50);
    }
    *param_2 = 0;
    param_2[1] = 0;
    puVar7 = auStack_78;
  }
  *(undefined8 *)(puVar7 + -8) = 0x180001323;
  return param_2;
}



// ===== FUN_180001340 @ 180001340 (size 240) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180001340(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong local_48;
  char local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar6 = auStack_78;
  local_18 = DAT_180025040 ^ (ulonglong)auStack_78;
  iVar3 = napi_create_double(param_2,param_3,local_58);
  if (iVar3 == 0) {
LAB_180001406:
    param_1[1] = *(undefined8 *)(puVar6 + 0x20);
  }
  else {
    puVar4 = FUN_180001aa0(&local_50,param_2);
    FUN_180001f20(puVar4);
    if (0xf < local_20) {
      pvVar2 = (LPVOID)CONCAT71(uStack_37,local_38);
      pvVar5 = pvVar2;
      if ((0xfff < local_20 + 1) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_70;
        goto LAB_180001406;
      }
      thunk_FUN_180006150(pvVar5);
    }
    param_2 = 0;
    local_28 = 0;
    local_20 = 0xf;
    local_38 = 0;
    if ((local_48 != 0) && (local_40 == '\0')) {
      napi_delete_reference(local_50);
    }
    param_1[1] = 0;
    puVar6 = auStack_78;
  }
  *param_1 = param_2;
  *(undefined8 *)(puVar6 + -8) = 0x180001422;
  return param_1;
}



// ===== FUN_180001430 @ 180001430 (size 273) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180001430(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  size_t sVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong local_58;
  char local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  puVar7 = auStack_88;
  local_28 = DAT_180025040 ^ (ulonglong)auStack_88;
  if (param_3 == (char *)0x0) {
    puVar4 = FUN_180001aa0(&local_60,param_2);
    FUN_180001f20(puVar4);
LAB_1800014a6:
    if (0xf < local_30) {
      pvVar2 = (LPVOID)CONCAT71(uStack_47,local_48);
      pvVar6 = pvVar2;
      if ((0xfff < local_30 + 1) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar7 = auStack_80;
        goto LAB_18000151d;
      }
      thunk_FUN_180006150(pvVar6);
    }
    param_2 = 0;
    local_48 = 0;
    local_30 = 0xf;
    local_38 = 0;
    if ((local_58 != 0) && (local_50 == '\0')) {
      napi_delete_reference(local_60);
    }
    param_1[1] = 0;
    puVar7 = auStack_88;
  }
  else {
    sVar5 = strlen(param_3);
    iVar3 = napi_create_string_utf8(param_2,param_3,sVar5,local_68);
    if (iVar3 != 0) {
      puVar4 = FUN_180001aa0(&local_60,param_2);
      FUN_180001f20(puVar4);
      goto LAB_1800014a6;
    }
LAB_18000151d:
    param_1[1] = *(undefined8 *)(puVar7 + 0x20);
  }
  *param_1 = param_2;
  *(undefined8 *)(puVar7 + -8) = 0x180001539;
  return param_1;
}



// ===== FUN_180001550 @ 180001550 (size 856) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180001550(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  LPVOID pvVar10;
  undefined1 (*pauVar11) [32];
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  longlong **local_a8;
  longlong *local_98 [2];
  undefined1 (*local_88) [32];
  longlong lStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  puVar13 = auStack_c8;
  puVar12 = auStack_c8;
  local_30 = DAT_180025040 ^ (ulonglong)auStack_c8;
  pauVar11 = (undefined1 (*) [32])0x0;
  local_a8 = local_98;
  uVar15 = 0;
  local_98[0] = param_2;
  iVar5 = napi_get_value_string_utf8(*param_1,param_1[1],0,0);
  if (iVar5 != 0) {
    puVar6 = FUN_180001aa0(&local_68,*param_1);
    FUN_180001f20(puVar6);
    if (0xf < local_38) {
      pvVar4 = (LPVOID)CONCAT71(uStack_4f,local_50);
      pvVar10 = pvVar4;
      if ((0xfff < local_38 + 1) &&
         (pvVar10 = *(LPVOID *)((longlong)pvVar4 + -8), puVar12 = auStack_c8,
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) goto LAB_18000185d;
      thunk_FUN_180006150(pvVar10);
    }
    local_40 = 0;
    local_38 = 0xf;
    local_50 = 0;
    if ((local_60 != 0) && (local_58 == '\0')) {
      napi_delete_reference(local_68);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    puVar14 = auStack_c8;
    goto LAB_180001873;
  }
  lStack_80 = 0;
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0xf;
  local_88 = (undefined1 (*) [32])0x0;
  uVar1 = (longlong)local_98[0] + 1;
  if (uVar1 < 0x10) {
LAB_180001711:
    plVar7 = local_98[0];
    local_78 = (longlong *)0x0;
    if (local_98[0] == (longlong *)0x0) {
      local_78 = local_98[0];
      pauVar11 = (undefined1 (*) [32])&local_88;
      if ((longlong *)0xf < plStack_70) {
        pauVar11 = local_88;
      }
      (*pauVar11)[0] = 0;
    }
    else if (plStack_70 < local_98[0]) {
      FUN_180005960(&local_88,(ulonglong)local_98[0],uVar15,(ulonglong)local_98[0]);
    }
    else {
      local_78 = local_98[0];
      pauVar11 = (undefined1 (*) [32])&local_88;
      if ((longlong *)0xf < plStack_70) {
        pauVar11 = local_88;
      }
      FUN_180015d10(pauVar11,0,(ulonglong)local_98[0]);
      (*pauVar11)[(longlong)plVar7] = 0;
    }
    pauVar11 = (undefined1 (*) [32])&local_88;
    if ((longlong *)0xf < plStack_70) {
      pauVar11 = local_88;
    }
    local_a8 = (longlong **)0x0;
    iVar5 = napi_get_value_string_utf8(*param_1,param_1[1],pauVar11);
    if (iVar5 != 0) {
      puVar6 = FUN_180001aa0(&local_68,*param_1);
      FUN_180001f20(puVar6);
      if (0xf < local_38) {
        pvVar4 = (LPVOID)CONCAT71(uStack_4f,local_50);
        pvVar10 = pvVar4;
        if ((0xfff < local_38 + 1) &&
           (pvVar10 = *(LPVOID *)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) goto LAB_180001856;
        thunk_FUN_180006150(pvVar10);
      }
      local_40 = 0;
      local_38 = 0xf;
      local_50 = 0;
      if ((local_60 != 0) && (local_58 == '\0')) {
        napi_delete_reference(local_68);
      }
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar14 = auStack_c8;
      if (plStack_70 < (longlong *)0x10) goto LAB_180001873;
      pauVar11 = local_88;
      if (((longlong)plStack_70 + 1U < 0x1000) ||
         (pauVar11 = *(undefined1 (**) [32])(local_88[-1] + 0x18),
         (ulonglong)((longlong)local_88 + (-8 - (longlong)pauVar11)) < 0x20)) {
        thunk_FUN_180006150(pauVar11);
        puVar14 = auStack_c8;
        goto LAB_180001873;
      }
      goto LAB_18000185d;
    }
  }
  else {
    if (0x7fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180001160();
    }
    plVar7 = (longlong *)(uVar1 | 0xf);
    if (plVar7 < (longlong *)0x8000000000000000) {
      if (plVar7 < (longlong *)0x16) {
        plVar7 = (longlong *)0x16;
      }
      plVar2 = (longlong *)((longlong)plVar7 + 1);
      if (plVar2 != (longlong *)0x0) {
        if ((longlong *)0xfff < plVar2) {
          plVar9 = plVar7 + 5;
          if (plVar9 <= plVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_180001140();
          }
          goto LAB_180001696;
        }
        pauVar11 = (undefined1 (*) [32])FUN_180005d70((ulonglong)plVar2);
      }
LAB_1800016f1:
      (*pauVar11)[0] = local_88._0_1_;
      local_88 = pauVar11;
      plStack_70 = plVar7;
      goto LAB_180001711;
    }
    plVar9 = (longlong *)0x8000000000000027;
    plVar7 = (longlong *)0x7fffffffffffffff;
LAB_180001696:
    lVar8 = FUN_180005d70((ulonglong)plVar9);
    if (lVar8 != 0) {
      pauVar11 = (undefined1 (*) [32])(lVar8 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(pauVar11[-1] + 0x18) = lVar8;
      goto LAB_1800016f1;
    }
LAB_180001856:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar12 = auStack_c0;
LAB_18000185d:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar13 = puVar12 + 8;
  }
  *param_2 = (longlong)local_88;
  param_2[1] = lStack_80;
  param_2[2] = (longlong)local_78;
  param_2[3] = (longlong)plStack_70;
  puVar14 = puVar13;
LAB_180001873:
  *(undefined8 *)(puVar14 + -8) = 0x180001882;
  return param_2;
}



// ===== FUN_1800018b0 @ 1800018b0 (size 256) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800018b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong local_48;
  char local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar6 = auStack_78;
  local_18 = DAT_180025040 ^ (ulonglong)auStack_78;
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  iVar3 = napi_create_string_utf8(param_2,puVar4,param_3[2],local_58);
  if (iVar3 == 0) {
LAB_180001986:
    param_1[1] = *(undefined8 *)(puVar6 + 0x20);
  }
  else {
    puVar4 = FUN_180001aa0(&local_50,param_2);
    FUN_180001f20(puVar4);
    if (0xf < local_20) {
      pvVar2 = (LPVOID)CONCAT71(uStack_37,local_38);
      pvVar5 = pvVar2;
      if ((0xfff < local_20 + 1) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_70;
        goto LAB_180001986;
      }
      thunk_FUN_180006150(pvVar5);
    }
    param_2 = 0;
    local_28 = 0;
    local_20 = 0xf;
    local_38 = 0;
    if ((local_48 != 0) && (local_40 == '\0')) {
      napi_delete_reference(local_50);
    }
    param_1[1] = 0;
    puVar6 = auStack_78;
  }
  *param_1 = param_2;
  *(undefined8 *)(puVar6 + -8) = 0x1800019a2;
  return param_1;
}



// ===== FUN_1800019b0 @ 1800019b0 (size 237) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800019b0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong local_48;
  char local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar6 = auStack_78;
  local_18 = DAT_180025040 ^ (ulonglong)auStack_78;
  iVar3 = napi_create_object(param_2,local_58);
  if (iVar3 == 0) {
LAB_180001a73:
    param_1[1] = *(undefined8 *)(puVar6 + 0x20);
  }
  else {
    puVar4 = FUN_180001aa0(&local_50,param_2);
    FUN_180001f20(puVar4);
    if (0xf < local_20) {
      pvVar2 = (LPVOID)CONCAT71(uStack_37,local_38);
      pvVar5 = pvVar2;
      if ((0xfff < local_20 + 1) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_70;
        goto LAB_180001a73;
      }
      thunk_FUN_180006150(pvVar5);
    }
    param_2 = 0;
    local_28 = 0;
    local_20 = 0xf;
    local_38 = 0;
    if ((local_48 != 0) && (local_40 == '\0')) {
      napi_delete_reference(local_50);
    }
    param_1[1] = 0;
    puVar6 = auStack_78;
  }
  *param_1 = param_2;
  *(undefined8 *)(puVar6 + -8) = 0x180001a8f;
  return param_1;
}



// ===== FUN_180001aa0 @ 180001aa0 (size 628) =====

undefined8 * FUN_180001aa0(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  char *_Str;
  char local_res18 [8];
  longlong local_res20;
  undefined8 local_78;
  longlong *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  
  local_res20 = 0;
  iVar3 = napi_get_last_error_info(param_2,&local_70);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180001d20("Error::New","napi_get_last_error_info");
  }
  pcVar1 = (char *)*local_70;
  iVar3 = *(int *)((longlong)local_70 + 0x14);
  iVar4 = napi_is_exception_pending(param_2,local_res18);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180001d20("Error::New","napi_is_exception_pending");
  }
  if (local_res18[0] == '\0') {
    _Str = "Error in native callback";
    if (pcVar1 != (char *)0x0) {
      _Str = pcVar1;
    }
    sVar5 = strlen(_Str);
    iVar4 = napi_create_string_utf8(param_2,_Str,sVar5,&local_78);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180001d20("Error::New","napi_create_string_utf8");
    }
    if ((((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 6)) || (iVar3 == 7)) {
      iVar3 = napi_create_type_error(param_2,0,local_78,&local_res20);
    }
    else {
      iVar3 = napi_create_error(param_2,0,local_78,&local_res20);
    }
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180001d20("Error::New","napi_create_error");
    }
  }
  else {
    iVar3 = napi_get_and_clear_last_exception(param_2,&local_res20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180001d20("Error::New","napi_get_and_clear_last_exception");
    }
  }
  lVar2 = local_res20;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  if ((local_res20 != 0) &&
     (iVar3 = napi_create_reference(param_2,local_res20,1,param_1 + 1), iVar3 != 0)) {
    iVar3 = napi_create_object(param_2,&local_78);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180001d20("Error::Error","napi_create_object");
    }
    local_68 = "4bda9e7e-4913-4dbc-95de-891cbf66598e-errorVal";
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = lVar2;
    local_38 = 2;
    local_30 = 0;
    iVar3 = napi_define_properties(param_2,local_78,1,&local_68);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180001d20("Error::Error","napi_define_properties");
    }
    iVar3 = napi_create_reference(param_2,local_78,1,param_1 + 1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180001d20("Error::Error","napi_create_reference");
    }
  }
  return param_1;
}



// ===== FUN_180001d20 @ 180001d20 (size 24) =====

void FUN_180001d20(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  napi_fatal_error(param_1,0xffffffffffffffff,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== FUN_180001d40 @ 180001d40 (size 472) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180001d40(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  char local_98 [8];
  undefined8 local_90;
  int local_88 [2];
  char *local_80;
  undefined8 local_78 [2];
  undefined8 local_68 [2];
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  puVar7 = auStack_b8;
  puVar8 = auStack_b8;
  local_20 = DAT_180025040 ^ (ulonglong)auStack_b8;
  if (param_1[1] == 0) {
    *param_2 = *param_1;
    param_2[1] = 0;
    puVar8 = auStack_b8;
    goto LAB_180001ef6;
  }
  iVar3 = napi_get_reference_value(*param_1,param_1[1],&local_90);
  if (iVar3 == 0) {
    iVar3 = napi_typeof(*param_1,local_90,local_88);
    if (iVar3 != 0) {
      puVar4 = FUN_180001aa0(&local_58,*param_1);
      FUN_180001f20(puVar4);
      goto LAB_180001e6d;
    }
    if (local_88[0] != 5) {
      local_98[0] = '\0';
      local_80 = "4bda9e7e-4913-4dbc-95de-891cbf66598e-errorVal";
      puVar4 = FUN_180004c60(local_78,*param_1,&local_80);
      napi_has_property(*param_1,local_90,puVar4[1],local_98);
      if (local_98[0] == '\0') goto LAB_180001ee8;
      local_80 = "4bda9e7e-4913-4dbc-95de-891cbf66598e-errorVal";
      puVar4 = FUN_180004c60(local_68,*param_1,&local_80);
      iVar3 = napi_get_property(*param_1,local_90,puVar4[1],local_78);
      uVar6 = *param_1;
      if (iVar3 != 0) {
        puVar4 = FUN_180001aa0(&local_58,uVar6);
        FUN_180001f20(puVar4);
        goto LAB_180001e6d;
      }
      goto LAB_180001edf;
    }
LAB_180001ee8:
    *param_2 = *param_1;
    local_78[0] = local_90;
    puVar8 = auStack_b8;
LAB_180001ef2:
    param_2[1] = local_78[0];
  }
  else {
    puVar4 = FUN_180001aa0(&local_58,*param_1);
    FUN_180001f20(puVar4);
LAB_180001e6d:
    if (0xf < local_28) {
      pvVar2 = (LPVOID)CONCAT71(uStack_3f,local_40);
      pvVar5 = pvVar2;
      if ((0xfff < local_28 + 1) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
        uVar6 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar7 = auStack_b0;
LAB_180001edf:
        *param_2 = uVar6;
        puVar8 = puVar7;
        goto LAB_180001ef2;
      }
      thunk_FUN_180006150(pvVar5);
    }
    local_30 = 0;
    local_28 = 0xf;
    local_40 = 0;
    if ((local_50 != 0) && (local_48 == '\0')) {
      napi_delete_reference(local_58);
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
LAB_180001ef6:
  *(undefined8 *)(puVar8 + -8) = 0x180001f05;
  return param_2;
}



// ===== FUN_180001f20 @ 180001f20 (size 316) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180001f20(undefined8 *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  undefined1 *puVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  longlong local_40;
  char local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  puVar6 = auStack_88;
  local_10 = DAT_180025040 ^ (ulonglong)auStack_88;
  local_68 = *param_1;
  iVar3 = napi_open_handle_scope(local_68,&local_60);
  if (iVar3 != 0) {
    puVar4 = FUN_180001aa0(&local_48,local_68);
    FUN_180001f20(puVar4);
    if (0xf < local_18) {
      pvVar2 = (LPVOID)CONCAT71(uStack_2f,local_30);
      pvVar5 = pvVar2;
      if ((0xfff < local_18 + 1) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_80;
        goto LAB_180002036;
      }
      thunk_FUN_180006150(pvVar5);
    }
    local_20 = 0;
    local_18 = 0xf;
    local_30 = 0;
    if ((local_40 != 0) && (local_38 == '\0')) {
      napi_delete_reference(local_48);
    }
  }
  if (param_1[1] != 0) {
    puVar4 = FUN_180001d40(param_1,local_58);
    iVar3 = napi_throw(*param_1,puVar4[1]);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180001d20("Error::ThrowAsJavaScriptException","napi_throw");
    }
  }
  iVar3 = napi_close_handle_scope(local_68,local_60);
  if (iVar3 == 0) {
    return;
  }
LAB_180002036:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar6 + -8) = 0x180002049;
  FUN_180001d20("HandleScope::~HandleScope","napi_close_handle_scope");
}



// ===== FUN_180002060 @ 180002060 (size 407) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong * FUN_180002060(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  LPVOID pvVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  LPVOID pvVar8;
  undefined1 auStack_98 [32];
  ulonglong *local_78;
  ulonglong *local_70;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180025040 ^ (ulonglong)auStack_98;
  *param_1 = 6;
  param_1[1] = param_2;
  param_1[2] = param_3;
  local_78 = param_1 + 3;
  *local_78 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_70 = param_1 + 0xd;
  *local_70 = 0;
  param_1[4] = *param_1;
  param_1[5] = (ulonglong)(param_1 + 6);
  iVar4 = napi_get_cb_info(param_2,param_3,param_1 + 4);
  if (iVar4 == 0) {
    if (param_1[4] <= *param_1) {
      return param_1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1[4];
    uVar6 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    uVar6 = thunk_FUN_180005d70(uVar6);
    param_1[0xc] = uVar6;
    param_1[5] = uVar6;
    local_70 = (ulonglong *)0x0;
    local_78 = (ulonglong *)0x0;
    iVar4 = napi_get_cb_info(param_2,param_3,param_1 + 4,uVar6);
    if (iVar4 == 0) {
      return param_1;
    }
    puVar5 = FUN_180001aa0(&local_68,param_1[1]);
    FUN_180001f20(puVar5);
  }
  else {
    puVar5 = FUN_180001aa0(&local_68,param_1[1]);
    FUN_180001f20(puVar5);
  }
  if (0xf < local_38) {
    pvVar3 = (LPVOID)CONCAT71(uStack_4f,local_50);
    pvVar8 = pvVar3;
    if ((0xfff < local_38 + 1) &&
       (pvVar8 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      puVar7 = (ulonglong *)(*pcVar1)();
      return puVar7;
    }
    thunk_FUN_180006150(pvVar8);
  }
  local_50 = 0;
  local_38 = 0xf;
  local_40 = 0;
  if ((local_60 != 0) && (local_58 == '\0')) {
    napi_delete_reference(local_68);
  }
  return param_1;
}



// ===== FUN_180002210 @ 180002210 (size 45) =====

void FUN_180002210(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = napi_close_handle_scope(*param_1,param_1[1]);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001d20("HandleScope::~HandleScope","napi_close_handle_scope");
}



// ===== FUN_180002240 @ 180002240 (size 314) =====

longlong * FUN_180002240(longlong *param_1,LPCWSTR param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int cbMultiByte;
  longlong *plVar3;
  ulonglong uVar4;
  LPCWSTR pWVar5;
  ulonglong uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  pWVar5 = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    pWVar5 = *(LPCWSTR *)param_2;
  }
  cbMultiByte = WideCharToMultiByte(0xfde9,0,pWVar5,*(int *)(param_2 + 8),(LPSTR)0x0,0,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
  uVar6 = (ulonglong)cbMultiByte;
  if (0 < cbMultiByte) {
    uVar1 = param_1[2];
    if (uVar1 < uVar6) {
      uVar4 = uVar6 - uVar1;
      uVar2 = param_1[3];
      if (uVar2 - uVar1 < uVar4) {
        FUN_180005960(param_1,uVar4,uVar2,uVar4);
      }
      else {
        param_1[2] = uVar6;
        plVar3 = param_1;
        if (0xf < uVar2) {
          plVar3 = (longlong *)*param_1;
        }
        FUN_180015d10((undefined1 (*) [32])((longlong)plVar3 + uVar1),0,uVar4);
        *(undefined1 *)((longlong)((longlong)plVar3 + uVar1) + uVar4) = 0;
      }
    }
    else {
      param_1[2] = uVar6;
      plVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar3 = (longlong *)*param_1;
      }
      *(undefined1 *)(uVar6 + (longlong)plVar3) = 0;
    }
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    pWVar5 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      pWVar5 = *(LPCWSTR *)param_2;
    }
    WideCharToMultiByte(0xfde9,0,pWVar5,*(int *)(param_2 + 8),(LPSTR)plVar3,cbMultiByte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  return param_1;
}



// ===== FUN_180002380 @ 180002380 (size 232) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180002380(longlong *param_1,HWND param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  undefined1 (*lpString) [32];
  longlong *plVar5;
  LPVOID pvVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  LPVOID local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180025040 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  iVar3 = GetWindowTextLengthW(param_2);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(iVar3 + 1);
  uVar4 = SUB168(ZEXT816(2) * auVar2,0);
  if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  lpString = (undefined1 (*) [32])thunk_FUN_180005d70(uVar4);
  GetWindowTextW(param_2,(LPWSTR)lpString,iVar3 + 1);
  FUN_180005210(local_48,lpString);
  FUN_180002240(param_1,(LPCWSTR)local_48);
  if (7 < local_30) {
    pvVar6 = local_48[0];
    if ((0xfff < local_30 * 2 + 2) &&
       (pvVar6 = *(LPVOID *)((longlong)local_48[0] + -8),
       0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)pvVar6)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar1)();
      return plVar5;
    }
    thunk_FUN_180006150(pvVar6);
  }
  return param_1;
}



// ===== FUN_180002470 @ 180002470 (size 1267) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180002470(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD dwLen;
  BOOL BVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  undefined1 (*pauVar9) [32];
  LPVOID lpData;
  LPVOID pvVar10;
  undefined8 *puVar11;
  undefined8 *****pppppuVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [32];
  undefined8 *****pppppuVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *****unaff_R12;
  ulonglong unaff_R14;
  ulonglong uVar19;
  undefined1 auStack_548 [8];
  undefined1 auStack_540 [24];
  undefined4 local_528;
  DWORD local_524 [2];
  uint local_51c;
  undefined1 (*local_518) [32];
  uint local_50c;
  uint *local_508 [2];
  undefined8 *local_4f8;
  LPVOID local_4e8;
  undefined8 ****local_4e0;
  undefined8 uStack_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  undefined8 ****local_4c0;
  undefined8 uStack_4b8;
  ulonglong local_4b0;
  ulonglong local_4a8;
  undefined1 (*local_4a0 [2]) [32];
  ulonglong local_490;
  ulonglong local_488;
  LPVOID local_480 [3];
  ulonglong local_468;
  WCHAR local_458 [264];
  WCHAR local_248 [256];
  ulonglong local_48;
  
  puVar16 = auStack_548;
  puVar18 = auStack_548;
  local_48 = DAT_180025040 ^ (ulonglong)auStack_548;
  puVar11 = (undefined8 *)0x0;
  local_524[0] = 0x104;
  local_4f8 = param_1;
  FUN_180015d10((undefined1 (*) [32])local_458,0,0x208);
  QueryFullProcessImageNameW((HANDLE)*param_2,0,local_458,local_524);
  FUN_180005210(&local_4e0,(undefined1 (*) [32])local_458);
  FUN_180002240((longlong *)local_4a0,(LPCWSTR)&local_4e0);
  if (local_4c8 < 8) {
LAB_18000253e:
    local_4d0 = 0;
    local_4c8 = 7;
    local_4e0 = (undefined8 ****)((ulonglong)local_4e0 & 0xffffffffffff0000);
    pauVar9 = (undefined1 (*) [32])local_4a0;
    if (0xf < local_488) {
      pauVar9 = local_4a0[0];
    }
    if (((local_490 == 0) ||
        (pauVar14 = (undefined1 (*) [32])
                    ((longlong)pauVar9 + (local_490 - (local_490 - 1 < local_490)) + 1),
        pauVar7 = thunk_FUN_180006db0(pauVar9,pauVar14,0x5c), pauVar7 == pauVar14)) ||
       (lVar8 = (longlong)pauVar7 - (longlong)pauVar9, lVar8 == -1)) {
      uStack_4b8 = 0;
      local_4b0 = 0;
      local_4a8 = 0xf;
      local_4c0 = (undefined8 *****)0x0;
    }
    else {
      uVar19 = lVar8 + 1;
      local_4c0 = (undefined8 *****)0x0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      if (local_490 < uVar19) {
        FUN_180005b50();
        pcVar2 = (code *)swi(3);
        puVar11 = (undefined8 *)(*pcVar2)();
        return puVar11;
      }
      uVar13 = local_490 - lVar8;
      if (local_490 - uVar19 < local_490 - lVar8) {
        uVar13 = local_490 - uVar19;
      }
      pauVar9 = (undefined1 (*) [32])local_4a0;
      if (0xf < local_488) {
        pauVar9 = local_4a0[0];
      }
      FUN_1800054d0(&local_4c0,(undefined8 *)(uVar19 + (longlong)pauVar9),uVar13);
    }
    uVar19 = local_4a8;
    local_524[1] = 0;
    dwLen = GetFileVersionInfoSizeW(local_458,local_524 + 1);
    if (dwLen == 0) {
LAB_1800027af:
      FUN_1800053c0(param_1,local_4a0);
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      unaff_R12 = &local_4c0;
      if (0xf < uVar19) {
        unaff_R12 = (undefined8 *****)local_4c0;
      }
      lpData = (LPVOID)0x7fffffffffffffff;
      if (0x7fffffffffffffff < local_4b0) goto LAB_180002953;
      pppppuVar15 = (undefined8 *****)local_4c0;
      unaff_R14 = local_4b0;
      if (0xf < local_4b0) goto LAB_180002819;
      param_1[6] = local_4b0;
      param_1[7] = 0xf;
      uVar3 = *(undefined4 *)((longlong)unaff_R12 + 4);
      uVar4 = *(undefined4 *)(unaff_R12 + 1);
      uVar5 = *(undefined4 *)((longlong)unaff_R12 + 0xc);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)unaff_R12;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
      *(undefined4 *)(param_1 + 5) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
      puVar16 = auStack_548;
    }
    else {
      lpData = (LPVOID)thunk_FUN_180005d70((ulonglong)dwLen);
      local_4e8 = lpData;
      BVar6 = GetFileVersionInfoW(local_458,0,dwLen,lpData);
      if (BVar6 == 0) {
LAB_1800027a7:
        thunk_FUN_180006150(lpData);
        goto LAB_1800027af;
      }
      local_51c = 0;
      pppppuVar15 = (undefined8 *****)0x4e4;
      local_528 = 0x4e4;
      BVar6 = VerQueryValueW(lpData,L"\\VarFileInfo\\Translation",local_508,&local_51c);
      if (BVar6 != 0) {
        pppppuVar15 = (undefined8 *****)(ulonglong)(*local_508[0] & 0xffff);
      }
      wsprintfW(local_248,L"\\StringFileInfo\\%04x%04x\\FileDescription");
      local_518 = (undefined1 (*) [32])0x0;
      BVar6 = VerQueryValueW(lpData,local_248,&local_518,&local_50c);
      if (BVar6 == 0) {
        uStack_4d8 = 0;
        local_4d0 = 0;
        local_4c8 = 0xf;
        local_4e0 = (undefined8 *****)0x0;
LAB_180002747:
        if (local_4d0 != 0) {
          pppppuVar12 = &local_4e0;
          if (0xf < local_4c8) {
            pppppuVar12 = (undefined8 *****)local_4e0;
          }
          FUN_180005630((longlong *)&local_4c0,pppppuVar12,local_4d0);
          uVar19 = local_4a8;
        }
        if (0xf < local_4c8) {
          pppppuVar12 = (undefined8 *****)local_4e0;
          if ((0xfff < local_4c8 + 1) &&
             (pppppuVar12 = (undefined8 *****)local_4e0[-1],
             0x1f < (ulonglong)((longlong)local_4e0 + (-8 - (longlong)pppppuVar12))))
          goto LAB_180002812;
          thunk_FUN_180006150(pppppuVar12);
        }
        goto LAB_1800027a7;
      }
      FUN_180005210(local_480,local_518);
      FUN_180002240((longlong *)&local_4e0,(LPCWSTR)local_480);
      if (local_468 < 8) goto LAB_180002747;
      pvVar10 = local_480[0];
      if ((local_468 * 2 + 2 < 0x1000) ||
         (pvVar10 = *(LPVOID *)((longlong)local_480[0] + -8),
         (ulonglong)((longlong)local_480[0] + (-8 - (longlong)pvVar10)) < 0x20)) {
        thunk_FUN_180006150(pvVar10);
        goto LAB_180002747;
      }
LAB_180002812:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar16 = auStack_540;
LAB_180002819:
      pvVar10 = (LPVOID)(unaff_R14 | 0xf);
      if (pvVar10 <= lpData) goto LAB_180002847;
      uVar13 = 0x8000000000000027;
      pvVar10 = lpData;
      while( true ) {
        *(undefined8 *)(puVar16 + -8) = 0x180002838;
        lVar8 = FUN_180005d70(uVar13);
        if (lVar8 != 0) break;
        pcVar2 = (code *)swi(0x29);
        pvVar10 = (LPVOID)(*pcVar2)(5);
        puVar16 = puVar16 + 8;
LAB_180002847:
        if (pvVar10 < (LPVOID)0x16) {
          pvVar10 = (LPVOID)0x16;
        }
        uVar1 = (longlong)pvVar10 + 1;
        if (uVar1 == 0) goto LAB_180002891;
        if (uVar1 < 0x1000) {
          *(undefined8 *)(puVar16 + -8) = 0x180002891;
          puVar11 = (undefined8 *)FUN_180005d70(uVar1);
          goto LAB_180002891;
        }
        uVar13 = (longlong)pvVar10 + 0x28;
        if (uVar13 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar16 + -8) = 0x18000295e;
          FUN_180001140();
        }
      }
      puVar11 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      puVar11[-1] = lVar8;
LAB_180002891:
      param_1[4] = puVar11;
      param_1[6] = unaff_R14;
      param_1[7] = pvVar10;
      *(undefined8 *)(puVar16 + -8) = 0x1800028ac;
      FUN_180015660(puVar11,unaff_R12,unaff_R14 + 1);
    }
    if (0xf < uVar19) {
      pppppuVar12 = pppppuVar15;
      if ((0xfff < uVar19 + 1) &&
         (pppppuVar12 = (undefined8 *****)pppppuVar15[-1], puVar17 = puVar16,
         0x1f < (ulonglong)((longlong)pppppuVar15 + (-8 - (longlong)pppppuVar12))))
      goto LAB_180002945;
      *(undefined8 *)(puVar16 + -8) = 0x1800028e0;
      thunk_FUN_180006150(pppppuVar12);
    }
    if (local_488 < 0x10) {
LAB_180002918:
      *(undefined8 *)(puVar16 + -8) = 0x18000292a;
      return param_1;
    }
    pauVar9 = local_4a0[0];
    if ((local_488 + 1 < 0x1000) ||
       (pauVar9 = *(undefined1 (**) [32])((longlong)local_4a0[0][-1] + 0x18),
       (ulonglong)((longlong)local_4a0[0] + (-8 - (longlong)pauVar9)) < 0x20)) {
      *(undefined8 *)(puVar16 + -8) = 0x180002918;
      thunk_FUN_180006150(pauVar9);
      goto LAB_180002918;
    }
  }
  else {
    pppppuVar15 = (undefined8 *****)local_4e0;
    if ((local_4c8 * 2 + 2 < 0x1000) ||
       (pppppuVar15 = (undefined8 *****)local_4e0[-1], puVar17 = auStack_548,
       (ulonglong)((longlong)local_4e0 + (-8 - (longlong)pppppuVar15)) < 0x20)) {
      thunk_FUN_180006150(pppppuVar15);
      goto LAB_18000253e;
    }
LAB_180002945:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar16 = puVar17 + 8;
  }
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar18 = puVar16 + 8;
LAB_180002953:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar18 + -8) = &UNK_180002958;
  FUN_180001160();
}



// ===== FUN_180002970 @ 180002970 (size 182) =====

void FUN_180002970(longlong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  LPVOID pvVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  if ((ulonglong)param_1[7] < 0x10) {
LAB_1800029b6:
    param_1[6] = 0;
    param_1[7] = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    if ((ulonglong)param_1[3] < 0x10) goto LAB_180002a0d;
    pvVar3 = (LPVOID)*param_1;
    if ((0xfff < param_1[3] + 1U) &&
       (uVar2 = (longlong)pvVar3 + (-8 - (longlong)*(LPVOID *)((longlong)pvVar3 + -8)),
       puVar4 = auStack_28, pvVar3 = *(LPVOID *)((longlong)pvVar3 + -8), 0x1f < uVar2))
    goto LAB_1800029fb;
  }
  else {
    pvVar3 = (LPVOID)param_1[4];
    pvVar5 = pvVar3;
    if ((param_1[7] + 1U < 0x1000) ||
       (pvVar5 = *(LPVOID *)((longlong)pvVar3 + -8),
       (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5)) < 0x20)) {
      thunk_FUN_180006150(pvVar5);
      goto LAB_1800029b6;
    }
LAB_1800029fb:
    pcVar1 = (code *)swi(0x29);
    pvVar3 = (LPVOID)(*pcVar1)(5);
    puVar4 = auStack_20;
  }
  *(undefined8 *)(puVar4 + -8) = 0x180002a0d;
  thunk_FUN_180006150(pvVar3);
LAB_180002a0d:
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// ===== FUN_180002a30 @ 180002a30 (size 390) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_180002a30(HWND param_1,undefined8 *param_2)

{
  size_t _Size;
  code *pcVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined8 *_Buf2;
  bool bVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  DWORD local_68 [2];
  HANDLE local_60;
  LPVOID local_58 [3];
  ulonglong local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar7 = auStack_88;
  local_18 = DAT_180025040 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  GetWindowThreadProcessId(param_1,local_68);
  local_60 = OpenProcess(0x1000,0,local_68[0]);
  if (local_60 == (HANDLE)0x0) {
LAB_180002b8f:
    bVar8 = true;
  }
  else {
    plVar5 = FUN_180002470(local_58,&local_60);
    FUN_180002bc0((longlong *)&DAT_180025a60,plVar5);
    if (local_20 < 0x10) {
LAB_180002ae8:
      local_28 = 0;
      local_20 = 0xf;
      local_38 = 0;
      if (0xf < local_40) {
        pvVar6 = local_58[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar6 = *(LPVOID *)((longlong)local_58[0] + -8),
           0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)pvVar6)))) goto LAB_180002b84;
        thunk_FUN_180006150(pvVar6);
      }
      CloseHandle(param_1);
      _Size = param_2[2];
      _Buf2 = &DAT_180025a60;
      if (0xf < DAT_180025a78) {
        _Buf2 = DAT_180025a60;
      }
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      puVar3 = auStack_88;
      if (_Size == DAT_180025a70) {
        if (_Size != 0) {
          iVar4 = memcmp(param_2,_Buf2,_Size);
          bVar8 = iVar4 == 0;
          puVar7 = auStack_88;
          goto LAB_180002b94;
        }
        goto LAB_180002b8f;
      }
    }
    else {
      pvVar2 = (LPVOID)CONCAT71(uStack_37,local_38);
      pvVar6 = pvVar2;
      if ((local_20 + 1 < 0x1000) ||
         (pvVar6 = *(LPVOID *)((longlong)pvVar2 + -8),
         (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)) < 0x20)) {
        thunk_FUN_180006150(pvVar6);
        goto LAB_180002ae8;
      }
LAB_180002b84:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar3 = auStack_80;
    }
    puVar7 = puVar3;
    bVar8 = false;
  }
LAB_180002b94:
  *(undefined8 *)(puVar7 + -8) = 0x180002ba1;
  return bVar8;
}



// ===== FUN_180002bc0 @ 180002bc0 (size 268) =====

longlong * FUN_180002bc0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  LPVOID pvVar4;
  undefined1 *puVar5;
  longlong unaff_RSI;
  LPVOID pvVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  if (param_1 == param_2) {
    return param_1;
  }
  if ((ulonglong)param_1[3] < 0x10) {
LAB_180002c1a:
    param_1[3] = 0xf;
    unaff_RSI = 0;
    param_1[2] = 0;
    *(undefined1 *)param_1 = 0;
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    if ((ulonglong)param_1[7] < 0x10) goto LAB_180002c89;
    pvVar4 = (LPVOID)param_1[4];
    if ((0xfff < param_1[7] + 1U) &&
       (uVar3 = (longlong)pvVar4 + (-8 - (longlong)*(LPVOID *)((longlong)pvVar4 + -8)),
       pvVar4 = *(LPVOID *)((longlong)pvVar4 + -8), puVar5 = auStack_28, 0x1f < uVar3))
    goto LAB_180002c7a;
  }
  else {
    pvVar4 = (LPVOID)*param_1;
    pvVar6 = pvVar4;
    if ((param_1[3] + 1U < 0x1000) ||
       (pvVar6 = *(LPVOID *)((longlong)pvVar4 + -8),
       (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar6)) < 0x20)) {
      thunk_FUN_180006150(pvVar6);
      goto LAB_180002c1a;
    }
LAB_180002c7a:
    pcVar1 = (code *)swi(0x29);
    pvVar4 = (LPVOID)(*pcVar1)(5);
    puVar5 = auStack_20;
  }
  *(undefined8 *)(puVar5 + -8) = 0x180002c89;
  thunk_FUN_180006150(pvVar4);
LAB_180002c89:
  param_1[6] = unaff_RSI;
  param_1[7] = 0xf;
  *(char *)(param_1 + 4) = (char)unaff_RSI;
  lVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar2;
  lVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar2;
  param_2[6] = unaff_RSI;
  param_2[7] = 0xf;
  *(char *)(param_2 + 4) = (char)unaff_RSI;
  return param_1;
}



// ===== FUN_180002cd0 @ 180002cd0 (size 5723) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180002cd0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  LPVOID pvVar4;
  HANDLE hObject;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 *puVar7;
  BOOL BVar8;
  int iVar9;
  BOOL BVar10;
  undefined1 (*pauVar11) [32];
  longlong lVar12;
  undefined1 (*pauVar13) [32];
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  LPVOID pvVar17;
  undefined8 ****ppppuVar18;
  undefined1 (*pauVar19) [32];
  undefined1 *puVar20;
  int iVar21;
  HANDLE pvVar22;
  HANDLE pvVar23;
  ulonglong uVar24;
  HANDLE pvVar25;
  bool bVar26;
  undefined8 uStack_230;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [24];
  HANDLE local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  HANDLE pvStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  DWORD local_1d8 [2];
  tagPOINT local_1d0;
  tagPOINT local_1c8 [2];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  HANDLE pvStack_1a0;
  undefined8 local_198 [2];
  undefined8 local_188 [2];
  undefined8 local_178 [2];
  undefined8 local_168 [2];
  undefined8 ***local_158;
  longlong lStack_150;
  longlong local_148;
  LPVOID local_140;
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_128;
  undefined1 (*local_118 [2]) [32];
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8 [2];
  HANDLE local_e8;
  ulonglong local_e0;
  longlong local_d8;
  HANDLE pvStack_d0;
  tagRECT local_b8;
  tagRECT local_a8;
  undefined1 local_98 [16];
  ulonglong local_88 [8];
  ulonglong local_48;
  
  puVar20 = auStack_228;
  local_48 = DAT_180025040 ^ (ulonglong)auStack_228;
  pvVar23 = (HANDLE)0x0;
  pvVar25 = (HANDLE)0x0;
  lVar2 = *(longlong *)(param_3 + 8);
  puVar7 = auStack_228;
  local_d8 = lVar2;
  if ((HWND)*param_2 != (HWND)0x0) {
    local_1d8[0] = 0;
    GetWindowThreadProcessId((HWND)*param_2,local_1d8);
    local_208 = OpenProcess(0x1000,0,local_1d8[0]);
    puVar7 = auStack_228;
    if (local_208 != (HANDLE)0x0) {
      FUN_180002470(local_118,&local_208);
      pauVar13 = (undefined1 (*) [32])local_118;
      if (0xf < local_100) {
        pauVar13 = local_118[0];
      }
      if (((local_108 == 0) ||
          (pauVar19 = (undefined1 (*) [32])
                      ((longlong)pauVar13 + (local_108 - (local_108 - 1 < local_108)) + 1),
          pauVar11 = thunk_FUN_180006db0(pauVar13,pauVar19,0x5c), pauVar11 == pauVar19)) ||
         (lVar12 = (longlong)pauVar11 - (longlong)pauVar13, lVar12 == -1)) {
        lStack_150 = 0;
        local_148 = 0;
        local_140 = (LPVOID)0xf;
        local_158 = (undefined8 ****)0x0;
      }
      else {
        uVar1 = lVar12 + 1;
        local_158 = (undefined8 ****)0x0;
        lStack_150 = 0;
        local_148 = 0;
        local_140 = (LPVOID)0x0;
        if (local_108 < uVar1) {
          FUN_180005b50();
          pcVar3 = (code *)swi(3);
          puVar15 = (undefined8 *)(*pcVar3)();
          return puVar15;
        }
        uVar24 = local_108 - lVar12;
        if (local_108 - uVar1 < local_108 - lVar12) {
          uVar24 = local_108 - uVar1;
        }
        pauVar13 = (undefined1 (*) [32])local_118;
        if (0xf < local_100) {
          pauVar13 = local_118[0];
        }
        FUN_1800054d0(&local_158,(undefined8 *)(uVar1 + (longlong)pauVar13),uVar24);
      }
      pvVar17 = local_140;
      pppuVar6 = local_158;
      ppppuVar18 = &local_158;
      if ((LPVOID)0xf < local_140) {
        ppppuVar18 = (undefined8 ****)local_158;
      }
      if (local_148 == 0x18) {
        iVar9 = memcmp(ppppuVar18,"ApplicationFrameHost.exe",0x18);
        bVar26 = iVar9 == 0;
      }
      else {
        bVar26 = false;
      }
      pvVar22 = pvVar23;
      if (pvVar17 < (LPVOID)0x10) {
LAB_180002e77:
        if (bVar26) {
          puVar14 = (undefined8 *)FUN_180005d70(0x40);
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0xf;
          *(undefined1 *)puVar14 = 0;
          puVar15 = puVar14 + 4;
          *puVar15 = 0;
          puVar14[5] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0xf;
          *(undefined1 *)puVar15 = 0;
          FUN_1800053c0(&local_158,puVar14);
          FUN_1800053c0(&local_138,puVar15);
          FUN_180002bc0((longlong *)&DAT_180025a60,(longlong *)&local_158);
          FUN_180002970((longlong *)&local_158);
          BVar8 = EnumChildWindows((HWND)*param_2,FUN_180002a30,(LPARAM)local_118);
          if ((BVar8 == 0) && (DAT_180025a90 != 0)) {
            puVar15 = &DAT_180025a60;
            if (0xf < DAT_180025a78) {
              puVar15 = DAT_180025a60;
            }
            FUN_180005630((longlong *)local_118,puVar15,DAT_180025a70);
            puVar15 = &DAT_180025a80;
            if (0xf < DAT_180025a98) {
              puVar15 = DAT_180025a80;
            }
            FUN_180005630(local_f8,puVar15,DAT_180025a90);
          }
        }
        plVar16 = local_f8;
        if (0xf < local_e0) {
          plVar16 = (longlong *)CONCAT71(local_f8[0]._1_7_,(undefined1)local_f8[0]);
        }
        if ((local_e8 != (HANDLE)0xb) ||
           (iVar9 = memcmp(plVar16,"Widgets.exe",0xb), puVar7 = auStack_228, iVar9 != 0)) {
          hObject = local_208;
          iVar9 = K32GetProcessMemoryInfo(local_208,local_98,0x48);
          CloseHandle(hObject);
          puVar7 = auStack_228;
          if (iVar9 != 0) {
            BVar8 = GetWindowRect((HWND)*param_2,&local_b8);
            BVar10 = GetClientRect((HWND)*param_2,&local_a8);
            puVar7 = auStack_228;
            if ((BVar8 != 0) && (puVar7 = auStack_228, pvVar22 = pvVar25, BVar10 != 0)) {
              FUN_1800019b0(&local_1b8,lVar2);
              iVar9 = napi_create_string_utf8(lVar2,"processId",9,&local_208);
              pvVar22 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8), pvVar22 = pvVar23,
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar22 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_180001340(&local_1f8,local_1b8,SUB84((double)local_1d8[0],0));
              iVar9 = napi_set_property(local_1b8,uStack_1b0,pvVar22,pvStack_1f0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1b8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8), pvVar22 = pvVar23,
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              iVar9 = napi_create_string_utf8(lVar2,&DAT_1800213f4,4,&local_208);
              pvVar22 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8), pvVar22 = pvVar25,
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar22 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_1800018b0(&local_1f8,local_1b8,local_118);
              iVar9 = napi_set_property(local_1b8,uStack_1b0,pvVar22,pvStack_1f0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1b8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8), pvVar22 = pvVar25,
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              iVar9 = napi_create_string_utf8(lVar2,&DAT_1800213fc,4,&local_208);
              pvVar22 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8), pvVar22 = pvVar25,
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar22 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_1800018b0(&local_1f8,local_1b8,local_f8);
              iVar9 = napi_set_property(local_1b8,uStack_1b0,pvVar22,pvStack_1f0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1b8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8), pvVar22 = pvVar25,
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_1800019b0(&local_1a8,lVar2);
              iVar9 = napi_create_string_utf8(lVar2,&DAT_180021404,1,&local_208);
              pvVar22 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8), pvVar22 = pvVar25,
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar22 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_180001340(&local_1f8,local_1a8,SUB84((double)local_b8.left,0));
              iVar9 = napi_set_property(local_1a8,pvStack_1a0,pvVar22,pvStack_1f0);
              pvVar22 = pvStack_1a0;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1a8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              pvVar23 = (HANDLE)0x0;
              iVar9 = napi_create_string_utf8(lVar2,&DAT_180021408,1,&local_208);
              pvVar25 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar25 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_180001340(&local_1f8,local_1a8,SUB84((double)local_b8.top,0));
              iVar9 = napi_set_property(local_1a8,pvStack_1a0,pvVar25,pvStack_1f0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1a8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              iVar9 = napi_create_string_utf8(lVar2,"width",5,&local_208);
              pvVar25 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar25 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_180001340(&local_1f8,local_1a8,SUB84((double)(local_b8.right - local_b8.left),0));
              iVar9 = napi_set_property(local_1a8,pvStack_1a0,pvVar25,pvStack_1f0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1a8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              iVar9 = napi_create_string_utf8(lVar2,"height",6,&local_208);
              pvVar25 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
                pvVar25 = (HANDLE)0x0;
              }
              FUN_180001340(&local_1f8,local_1a8,SUB84((double)(local_b8.bottom - local_b8.top),0));
              iVar9 = napi_set_property(local_1a8,pvStack_1a0,pvVar25,pvStack_1f0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1a8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              pvVar23 = (HANDLE)0x0;
              local_1d0.x = local_a8.left;
              local_1d0.y = local_a8.top;
              ClientToScreen((HWND)*param_2,&local_1d0);
              local_1c8[0].x = local_a8.right;
              local_1c8[0].y = local_a8.bottom;
              ClientToScreen((HWND)*param_2,local_1c8);
              FUN_1800019b0(&local_1f8,lVar2);
              iVar9 = napi_create_string_utf8(lVar2,&DAT_180021404,1,&local_208);
              pvVar25 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar25 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_180001340(&local_1e8,local_1f8,SUB84((double)local_1d0.x,0));
              iVar9 = napi_set_property(local_1f8,pvStack_1f0,pvVar25,uStack_1e0);
              pvVar22 = pvStack_1f0;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1f8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              iVar9 = napi_create_string_utf8(lVar2,&DAT_180021408,1,&local_208);
              pvVar25 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar25 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_180001340(&local_1e8,local_1f8,SUB84((double)local_1d0.y,0));
              iVar9 = napi_set_property(local_1f8,pvStack_1f0,pvVar25,uStack_1e0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1f8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              iVar21 = local_1c8[0].x - local_1d0.x;
              iVar9 = napi_create_string_utf8(lVar2,"width",5,&local_208);
              pvVar25 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar25 = pvVar23;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              FUN_180001340(&local_1e8,local_1f8,SUB84((double)iVar21,0));
              iVar9 = napi_set_property(local_1f8,pvStack_1f0,pvVar25,uStack_1e0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1f8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              iVar21 = local_1c8[0].y - local_1d0.y;
              iVar9 = napi_create_string_utf8(lVar2,"height",6,&local_208);
              pvVar25 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
                pvVar25 = (HANDLE)0x0;
              }
              FUN_180001340(&local_1e8,local_1f8,SUB84((double)iVar21,0));
              iVar9 = napi_set_property(local_1f8,pvStack_1f0,pvVar25,uStack_1e0);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,local_1f8);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              pvVar25 = (HANDLE)0x0;
              FUN_1800019b0(&local_1e8,lVar2);
              iVar9 = napi_create_string_utf8(lVar2,"windows",7,&local_208);
              if (iVar9 == 0) {
                pvStack_d0 = local_208;
                local_d8 = lVar2;
              }
              else {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
                local_d8 = 0;
                pvStack_d0 = (HANDLE)0x0;
              }
              iVar9 = napi_create_string_utf8(lVar2,"platform",8,&local_208);
              pvVar23 = local_208;
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,lVar2);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  pvVar17 = local_140;
                  if ((0xfff < local_128 + 1) &&
                     (pvVar17 = *(LPVOID *)((longlong)local_140 + -8),
                     0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pvVar17))))
                  goto LAB_180004250;
                  thunk_FUN_180006150(pvVar17);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                pvVar23 = pvVar25;
                if ((lStack_150 != 0) && ((char)local_148 == '\0')) {
                  napi_delete_reference(local_158);
                }
              }
              uVar5 = local_1e8;
              FUN_180001550(&local_d8,(longlong *)&local_158);
              FUN_1800018b0(&local_208,uVar5,&local_158);
              if ((LPVOID)0xf < local_140) {
                ppppuVar18 = (undefined8 ****)local_158;
                if ((0xfff < (longlong)local_140 + 1U) &&
                   (ppppuVar18 = (undefined8 ****)local_158[-1],
                   0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)ppppuVar18))))
                goto LAB_180004250;
                thunk_FUN_180006150(ppppuVar18);
              }
              iVar9 = napi_set_property(uVar5,uStack_1e0,pvVar23,uStack_200);
              if (iVar9 != 0) {
                puVar15 = FUN_180001aa0(&local_158,uVar5);
                FUN_180001f20(puVar15);
                if (0xf < local_128) {
                  FUN_180005af0(puVar15,local_140,local_128);
                }
                local_130 = 0;
                local_128 = 0xf;
                local_140 = (LPVOID)((ulonglong)local_140 & 0xffffffffffffff00);
                FUN_180001210(&local_158);
              }
              local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)param_2);
              puVar15 = FUN_180001430(local_198,lVar2,"id");
              local_208 = (HANDLE)*puVar15;
              uStack_200 = puVar15[1];
              FUN_180004e80(&local_1e8,(longlong)&local_208,(int *)&local_d8);
              plVar16 = FUN_180002380(&local_d8,(HWND)*param_2);
              puVar15 = FUN_180001430(local_198,lVar2,"title");
              local_208 = (HANDLE)*puVar15;
              uStack_200 = puVar15[1];
              FUN_180004d80(&local_1e8,(longlong)&local_208,plVar16);
              FUN_180005350(&local_d8);
              puVar15 = FUN_180001430(local_188,lVar2,"owner");
              local_208 = (HANDLE)*puVar15;
              uStack_200 = puVar15[1];
              FUN_180004f80(&local_1e8,(longlong)&local_208,(longlong)&local_1b8);
              puVar15 = FUN_180001430(local_178,lVar2,"bounds");
              local_1b8 = *puVar15;
              uStack_1b0 = puVar15[1];
              FUN_180004f80(&local_1e8,(longlong)&local_1b8,(longlong)&local_1a8);
              puVar15 = FUN_180001430(local_168,lVar2,"contentBounds");
              local_1a8 = *puVar15;
              pvStack_1a0 = (HANDLE)puVar15[1];
              FUN_180004f80(&local_1e8,(longlong)&local_1a8,(longlong)&local_1f8);
              puVar15 = FUN_180001430(&local_158,lVar2,"memoryUsage");
              local_1f8 = *puVar15;
              pvStack_1f0 = (HANDLE)puVar15[1];
              FUN_180005070(&local_1e8,(longlong)&local_1f8,local_88);
              *param_1 = local_1e8;
              param_1[1] = uStack_1e0;
              FUN_180002970((longlong *)local_118);
              goto LAB_1800042f7;
            }
          }
        }
      }
      else {
        ppppuVar18 = (undefined8 ****)pppuVar6;
        if (((longlong)pvVar17 + 1U < 0x1000) ||
           (ppppuVar18 = (undefined8 ****)pppuVar6[-1],
           (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar18)) < 0x20)) {
          thunk_FUN_180006150(ppppuVar18);
          goto LAB_180002e77;
        }
LAB_180004250:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar7 = auStack_220;
      }
      puVar20 = puVar7;
      *(undefined8 *)(puVar20 + -8) = 0x180004263;
      FUN_180001240(&local_d8,param_1);
      if (local_e0 < 0x10) {
LAB_18000429b:
        local_e0 = 0xf;
        local_f8[0]._0_1_ = 0;
        if (local_100 < 0x10) goto LAB_1800042f7;
        pauVar13 = local_118[0];
        local_e8 = pvVar22;
        if ((local_100 + 1 < 0x1000) ||
           (pauVar13 = *(undefined1 (**) [32])((longlong)local_118[0][-1] + 0x18),
           (ulonglong)((longlong)local_118[0] + (-8 - (longlong)pauVar13)) < 0x20)) {
          *(undefined8 *)(puVar20 + -8) = 0x1800042e2;
          thunk_FUN_180006150(pauVar13);
          goto LAB_1800042f7;
        }
      }
      else {
        pvVar4 = (LPVOID)CONCAT71(local_f8[0]._1_7_,(undefined1)local_f8[0]);
        pvVar17 = pvVar4;
        if ((local_e0 + 1 < 0x1000) ||
           (pvVar17 = *(LPVOID *)((longlong)pvVar4 + -8),
           (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar17)) < 0x20)) {
          *(undefined8 *)(puVar20 + -8) = 0x18000429b;
          thunk_FUN_180006150(pvVar17);
          goto LAB_18000429b;
        }
      }
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar7 = puVar20 + 8;
    }
  }
  puVar20 = puVar7;
  *(undefined8 *)(puVar20 + -8) = 0x1800042f7;
  FUN_180001240(&local_d8,param_1);
LAB_1800042f7:
  *(undefined8 *)(puVar20 + -8) = 0x180004309;
  return param_1;
}



// ===== FUN_180004330 @ 180004330 (size 320) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180004330(HWND param_1)

{
  ulonglong uVar1;
  BOOL BVar2;
  HWND pHVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  int local_68 [2];
  HWND local_60;
  tagWINDOWINFO local_58;
  ulonglong local_18;
  
  local_18 = DAT_180025040 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  BVar2 = IsWindow(param_1);
  if (((BVar2 != 0) && (BVar2 = IsWindowEnabled(param_1), BVar2 != 0)) &&
     (BVar2 = IsWindowVisible(param_1), BVar2 != 0)) {
    local_58.rcClient.bottom = 0;
    local_58.dwStyle = 0;
    local_58.dwExStyle = 0;
    local_58.dwWindowStatus = 0;
    local_58.cxWindowBorders = 0;
    local_58.cyWindowBorders = 0;
    local_58.atomWindowType = 0;
    local_58.wCreatorVersion = 0;
    local_58.cbSize = 0;
    local_58.rcWindow.left = 0;
    local_58.rcWindow.top = 0;
    local_58.rcWindow.right = 0;
    local_58.rcWindow.bottom = 0;
    local_58.rcClient.left = 0;
    local_58.rcClient.top = 0;
    local_58.rcClient.right = 0;
    GetWindowInfo(param_1,&local_58);
    uVar4 = local_58.dwStyle & 0xc00000;
    uVar1 = local_58._32_8_ & 0x8000000000000000;
    pHVar3 = GetWindow(param_1,4);
    if ((((-1 < (char)local_58.dwExStyle) && ((uVar4 == 0xc00000 || (uVar1 != 0)))) &&
        ((pHVar3 == (HWND)0x0 || ((local_58.dwExStyle >> 0x12 & 1) != 0)))) &&
       (((local_58._32_8_ & 0x4000000000000000) == 0 &&
        (pHVar3 = param_1, DwmGetWindowAttribute(param_1,0xe,local_68,4), local_68[0] == 0)))) {
      if (DAT_1800267d0 == DAT_1800267d8) {
        FUN_1800057a0(pHVar3,DAT_1800267d0,&local_60);
      }
      else {
        *DAT_1800267d0 = param_1;
        DAT_1800267d0 = DAT_1800267d0 + 1;
      }
    }
  }
  return 1;
}



// ===== FUN_180004470 @ 180004470 (size 57) =====

undefined8 * FUN_180004470(undefined8 *param_1,longlong param_2)

{
  HWND local_res8;
  
  local_res8 = GetForegroundWindow();
  FUN_180002cd0(param_1,&local_res8,param_2);
  return param_1;
}



// ===== FUN_1800044b0 @ 1800044b0 (size 868) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800044b0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  BOOL BVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  LPVOID pvVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  char local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  char local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  puVar13 = auStack_c8;
  local_40 = DAT_180025040 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  local_90 = param_2;
  iVar6 = napi_create_array(uVar1,&local_a0);
  if (iVar6 == 0) {
    param_1[1] = local_a0;
    uVar10 = uVar1;
  }
  else {
    puVar9 = FUN_180001aa0(&local_78,uVar1);
    FUN_180001f20(puVar9);
    if (0xf < local_48) {
      pvVar3 = (LPVOID)CONCAT71(uStack_5f,local_60);
      pvVar12 = pvVar3;
      if ((0xfff < local_48 + 1) &&
         (pvVar12 = *(LPVOID *)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar12)))) {
LAB_1800047e3:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar13 = auStack_c0;
        goto LAB_1800047ea;
      }
      thunk_FUN_180006150(pvVar12);
    }
    local_50 = 0;
    local_48 = 0xf;
    local_60 = 0;
    if ((local_70 != 0) && (local_68 == '\0')) {
      napi_delete_reference(local_78);
    }
    param_1[1] = 0;
    uVar10 = 0;
  }
  *param_1 = uVar10;
  if (DAT_1800267c8 != DAT_1800267d0) {
    DAT_1800267d0 = DAT_1800267c8;
  }
  BVar7 = EnumDesktopWindows((HDESK)0x0,FUN_180004330,0);
  puVar9 = DAT_1800267d0;
  if (BVar7 != 0) {
    iVar6 = 0;
    for (puVar14 = DAT_1800267c8; puVar13 = auStack_c8, puVar14 != puVar9; puVar14 = puVar14 + 1) {
      local_a0 = *puVar14;
      FUN_180002cd0(&local_88,&local_a0,param_2);
      iVar8 = napi_get_null(uVar1,&local_98);
      uVar10 = local_98;
      if (iVar8 != 0) {
        puVar11 = FUN_180001aa0(&local_78,uVar1);
        FUN_180001f20(puVar11);
        if (0xf < local_48) {
          pvVar3 = (LPVOID)CONCAT71(uStack_5f,local_60);
          pvVar12 = pvVar3;
          if ((0xfff < local_48 + 1) &&
             (pvVar12 = *(LPVOID *)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar12)))) goto LAB_1800047e3;
          thunk_FUN_180006150(pvVar12);
        }
        local_50 = 0;
        local_48 = 0xf;
        local_60 = 0;
        if ((local_70 != 0) && (local_68 == '\0')) {
          napi_delete_reference(local_78);
        }
        uVar10 = 0;
      }
      uVar5 = local_80;
      uVar4 = local_88;
      iVar8 = napi_strict_equals(local_88,local_80,uVar10,local_a8);
      if (iVar8 == 0) {
        if (local_a8[0] == '\0') goto LAB_18000473d;
      }
      else {
        puVar11 = FUN_180001aa0(&local_78,uVar4);
        FUN_180001f20(puVar11);
        if (0xf < local_48) {
          pvVar3 = (LPVOID)CONCAT71(uStack_5f,local_60);
          pvVar12 = pvVar3;
          if ((0xfff < local_48 + 1) &&
             (pvVar12 = *(LPVOID *)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar12)))) goto LAB_1800047e3;
          thunk_FUN_180006150(pvVar12);
        }
        local_50 = 0;
        local_48 = 0xf;
        local_60 = 0;
        if ((local_70 != 0) && (local_68 == '\0')) {
          napi_delete_reference(local_78);
        }
LAB_18000473d:
        iVar15 = iVar6 + 1;
        iVar8 = napi_set_element(*param_1,param_1[1],iVar6,uVar5);
        iVar6 = iVar15;
        if (iVar8 != 0) {
          puVar11 = FUN_180001aa0(&local_78,*param_1);
          FUN_180001f20(puVar11);
          if (0xf < local_48) {
            pvVar3 = (LPVOID)CONCAT71(uStack_5f,local_60);
            pvVar12 = pvVar3;
            if ((0xfff < local_48 + 1) &&
               (pvVar12 = *(LPVOID *)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar12)))) goto LAB_1800047e3;
            thunk_FUN_180006150(pvVar12);
          }
          local_50 = 0;
          local_48 = 0xf;
          local_60 = 0;
          if ((local_70 != 0) && (local_68 == '\0')) {
            napi_delete_reference(local_78);
          }
        }
      }
      param_2 = local_90;
    }
  }
LAB_1800047ea:
  *(undefined8 *)(puVar13 + -8) = 0x1800047f9;
  return param_1;
}



// ===== FUN_180004820 @ 180004820 (size 1019) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180004820(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  puVar8 = auStack_b8;
  local_30 = DAT_180025040 ^ (ulonglong)auStack_b8;
  puVar4 = (undefined8 *)FUN_180005d70(0x10);
  *puVar4 = FUN_180004470;
  uVar9 = 0;
  puVar4[1] = 0;
  local_90 = &local_88;
  local_98 = puVar4;
  iVar3 = napi_create_function(param_2,0,0xffffffffffffffff,FUN_1800055d0);
  if (iVar3 == 0) {
    local_90 = (undefined8 *)0x0;
    local_98 = (undefined8 *)0x0;
    iVar3 = napi_add_finalizer(param_2,local_88,puVar4,&LAB_180005790);
    if (iVar3 != 0) goto LAB_1800048ce;
    uStack_70 = local_88;
    local_78 = param_2;
LAB_18000495d:
    iVar3 = napi_create_string_utf8(param_2,"getActiveWindow",0xf,&local_88);
    uVar5 = param_2;
    uVar6 = local_88;
    if (iVar3 != 0) {
      puVar4 = FUN_180001aa0(&local_68,param_2);
      FUN_180001f20(puVar4);
      if (0xf < local_38) {
        pvVar2 = (LPVOID)CONCAT71(uStack_4f,local_50);
        pvVar7 = pvVar2;
        if ((0xfff < local_38 + 1) &&
           (pvVar7 = *(LPVOID *)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7)))) goto LAB_180004bcb;
        thunk_FUN_180006150(pvVar7);
      }
      local_40 = 0;
      local_38 = 0xf;
      local_50 = 0;
      uVar5 = uVar9;
      uVar6 = uVar9;
      if ((local_60 != 0) && (local_58 == '\0')) {
        napi_delete_reference(local_68);
      }
    }
    local_88 = uVar5;
    local_80 = uVar6;
    FUN_180004f80(param_3,(longlong)&local_88,(longlong)&local_78);
    puVar4 = (undefined8 *)FUN_180005d70(0x10);
    *puVar4 = FUN_1800044b0;
    puVar4[1] = 0;
    local_90 = &local_88;
    local_98 = puVar4;
    iVar3 = napi_create_function(param_2,0,0xffffffffffffffff,FUN_1800055d0);
    if (iVar3 == 0) {
      local_90 = (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      iVar3 = napi_add_finalizer(param_2,local_88,puVar4,&LAB_180005790);
      if (iVar3 != 0) goto LAB_180004a9c;
      uStack_70 = local_88;
      local_78 = param_2;
    }
    else {
LAB_180004a9c:
      thunk_FUN_180006150(puVar4);
      puVar4 = FUN_180001aa0(&local_68,param_2);
      FUN_180001f20(puVar4);
      if (0xf < local_38) {
        pvVar2 = (LPVOID)CONCAT71(uStack_4f,local_50);
        pvVar7 = pvVar2;
        if ((0xfff < local_38 + 1) &&
           (pvVar7 = *(LPVOID *)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7)))) goto LAB_180004bcb;
        thunk_FUN_180006150(pvVar7);
      }
      local_40 = 0;
      local_38 = 0xf;
      local_50 = 0;
      if ((local_60 != 0) && (local_58 == '\0')) {
        napi_delete_reference(local_68);
      }
      local_78 = 0;
      uStack_70 = 0;
    }
    iVar3 = napi_create_string_utf8(param_2,"getOpenWindows",0xe,&local_88);
    uVar5 = local_88;
    if (iVar3 == 0) goto LAB_180004bd6;
    puVar4 = FUN_180001aa0(&local_68,param_2);
    FUN_180001f20(puVar4);
    if (0xf < local_38) {
      pvVar2 = (LPVOID)CONCAT71(uStack_4f,local_50);
      pvVar7 = pvVar2;
      if ((0xfff < local_38 + 1) &&
         (pvVar7 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7)))) goto LAB_180004bcb;
      thunk_FUN_180006150(pvVar7);
    }
    local_40 = 0;
    local_38 = 0xf;
    local_50 = 0;
    uVar5 = uVar9;
    param_2 = uVar9;
    puVar8 = auStack_b8;
    if ((local_60 != 0) && (puVar8 = auStack_b8, local_58 == '\0')) {
      napi_delete_reference(local_68);
      puVar8 = auStack_b8;
    }
  }
  else {
LAB_1800048ce:
    thunk_FUN_180006150(puVar4);
    puVar4 = FUN_180001aa0(&local_68,param_2);
    FUN_180001f20(puVar4);
    if (local_38 < 0x10) {
LAB_18000492c:
      local_40 = 0;
      local_38 = 0xf;
      local_50 = 0;
      if ((local_60 != 0) && (local_58 == '\0')) {
        napi_delete_reference(local_68);
      }
      local_78 = 0;
      uStack_70 = 0;
      goto LAB_18000495d;
    }
    pvVar2 = (LPVOID)CONCAT71(uStack_4f,local_50);
    pvVar7 = pvVar2;
    if ((local_38 + 1 < 0x1000) ||
       (pvVar7 = *(LPVOID *)((longlong)pvVar2 + -8),
       (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7)) < 0x20)) {
      thunk_FUN_180006150(pvVar7);
      goto LAB_18000492c;
    }
LAB_180004bcb:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_b0;
    uVar5 = local_88;
  }
LAB_180004bd6:
  *(undefined8 *)(puVar8 + -8) = 0x180004bee;
  local_88 = param_2;
  local_80 = uVar5;
  FUN_180004f80(param_3,(longlong)&local_88,(longlong)&local_78);
  uVar9 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar9;
  *(undefined8 *)(puVar8 + -8) = 0x180004c04;
  return param_1;
}



// ===== node_api_module_get_api_version_v1 @ 180004c20 (size 6) =====

undefined8 node_api_module_get_api_version_v1(void)

{
                    /* 0x4c20  2  node_api_module_get_api_version_v1 */
  return 10;
}



// ===== napi_register_module_v1 @ 180004c30 (size 41) =====

undefined8 napi_register_module_v1(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
                    /* 0x4c30  1  napi_register_module_v1 */
  local_28 = param_1;
  local_20 = param_2;
  puVar1 = FUN_180004820(local_18,param_1,&local_28);
  return puVar1[1];
}



// ===== FUN_180004c60 @ 180004c60 (size 274) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180004c60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *_Str;
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  size_t sVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong local_58;
  char local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  puVar7 = auStack_88;
  local_28 = DAT_180025040 ^ (ulonglong)auStack_88;
  _Str = (char *)*param_3;
  if (_Str == (char *)0x0) {
    puVar4 = FUN_180001aa0(&local_60,param_2);
    FUN_180001f20(puVar4);
LAB_180004c9d:
    if (0xf < local_30) {
      pvVar2 = (LPVOID)CONCAT71(uStack_47,local_48);
      pvVar6 = pvVar2;
      if ((0xfff < local_30 + 1) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar7 = auStack_80;
        goto LAB_180004d4e;
      }
      thunk_FUN_180006150(pvVar6);
    }
    param_2 = 0;
    local_38 = 0;
    local_30 = 0xf;
    local_48 = 0;
    if ((local_58 != 0) && (local_50 == '\0')) {
      napi_delete_reference(local_60);
    }
    param_1[1] = 0;
    puVar7 = auStack_88;
  }
  else {
    sVar5 = strlen(_Str);
    iVar3 = napi_create_string_utf8(param_2,_Str,sVar5,local_68);
    if (iVar3 != 0) {
      puVar4 = FUN_180001aa0(&local_60,param_2);
      FUN_180001f20(puVar4);
      goto LAB_180004c9d;
    }
LAB_180004d4e:
    param_1[1] = *(undefined8 *)(puVar7 + 0x20);
  }
  *param_1 = param_2;
  *(undefined8 *)(puVar7 + -8) = 0x180004d6a;
  return param_1;
}



// ===== FUN_180004d80 @ 180004d80 (size 245) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180004d80(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  puVar7 = auStack_78;
  local_10 = DAT_180025040 ^ (ulonglong)auStack_78;
  FUN_1800018b0(&local_58,*param_1,param_3);
  uVar3 = napi_set_property(*param_1,param_1[1],*(undefined8 *)(param_2 + 8),local_50);
  if ((int)uVar3 == 0) {
LAB_180004e58:
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    puVar4 = FUN_180001aa0(&local_48,*param_1);
    uVar5 = FUN_180001f20(puVar4);
    if (0xf < local_18) {
      pvVar2 = (LPVOID)CONCAT71(uStack_2f,local_30);
      pvVar6 = pvVar2;
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
        pcVar1 = (code *)swi(0x29);
        uVar3 = (*pcVar1)(5);
        puVar7 = auStack_70;
        goto LAB_180004e58;
      }
      uVar5 = thunk_FUN_180006150(pvVar6);
    }
    local_20 = 0;
    local_18 = 0xf;
    local_30 = 0;
    if ((local_40 != 0) && (local_38 == '\0')) {
      uVar5 = napi_delete_reference(local_48);
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
    puVar7 = auStack_78;
  }
  *(undefined8 *)(puVar7 + -8) = 0x180004e67;
  return uVar5;
}



// ===== FUN_180004e80 @ 180004e80 (size 254) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180004e80(undefined8 *param_1,longlong param_2,int *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  puVar7 = auStack_78;
  local_10 = DAT_180025040 ^ (ulonglong)auStack_78;
  FUN_180001340(&local_58,*param_1,SUB84((double)*param_3,0));
  uVar3 = napi_set_property(*param_1,param_1[1],*(undefined8 *)(param_2 + 8),local_50);
  if ((int)uVar3 == 0) {
LAB_180004f61:
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    puVar4 = FUN_180001aa0(&local_48,*param_1);
    uVar5 = FUN_180001f20(puVar4);
    if (0xf < local_18) {
      pvVar2 = (LPVOID)CONCAT71(uStack_2f,local_30);
      pvVar6 = pvVar2;
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
        pcVar1 = (code *)swi(0x29);
        uVar3 = (*pcVar1)(5);
        puVar7 = auStack_70;
        goto LAB_180004f61;
      }
      uVar5 = thunk_FUN_180006150(pvVar6);
    }
    local_20 = 0;
    local_18 = 0xf;
    local_30 = 0;
    if ((local_40 != 0) && (local_38 == '\0')) {
      uVar5 = napi_delete_reference(local_48);
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
    puVar7 = auStack_78;
  }
  *(undefined8 *)(puVar7 + -8) = 0x180004f70;
  return uVar5;
}



// ===== FUN_180004f80 @ 180004f80 (size 233) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180004f80(undefined8 *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 local_48;
  longlong local_40;
  char local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  puVar7 = auStack_68;
  local_10 = DAT_180025040 ^ (ulonglong)auStack_68;
  uVar3 = napi_set_property(*param_1,param_1[1],*(undefined8 *)(param_2 + 8),
                            *(undefined8 *)(param_3 + 8));
  if ((int)uVar3 == 0) {
LAB_180005054:
    *(undefined8 *)(puVar7 + -8) = 0x180005063;
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  puVar4 = FUN_180001aa0(&local_48,*param_1);
  uVar5 = FUN_180001f20(puVar4);
  if (0xf < local_18) {
    pvVar2 = (LPVOID)CONCAT71(uStack_2f,local_30);
    pvVar6 = pvVar2;
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
      pcVar1 = (code *)swi(0x29);
      uVar3 = (*pcVar1)(5);
      puVar7 = auStack_60;
      goto LAB_180005054;
    }
    uVar5 = thunk_FUN_180006150(pvVar6);
  }
  local_20 = 0;
  local_18 = 0xf;
  local_30 = 0;
  if ((local_40 != 0) && (local_38 == '\0')) {
    uVar5 = napi_delete_reference(local_48);
  }
  return uVar5 & 0xffffffffffffff00;
}



// ===== FUN_180005070 @ 180005070 (size 284) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180005070(undefined8 *param_1,longlong param_2,ulonglong *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  puVar7 = auStack_78;
  local_10 = DAT_180025040 ^ (ulonglong)auStack_78;
  FUN_180001340(&local_58,*param_1,SUB84((double)*param_3,0));
  uVar3 = napi_set_property(*param_1,param_1[1],*(undefined8 *)(param_2 + 8),local_50);
  if ((int)uVar3 == 0) {
LAB_18000516f:
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    puVar4 = FUN_180001aa0(&local_48,*param_1);
    uVar5 = FUN_180001f20(puVar4);
    if (0xf < local_18) {
      pvVar2 = (LPVOID)CONCAT71(uStack_2f,local_30);
      pvVar6 = pvVar2;
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
        pcVar1 = (code *)swi(0x29);
        uVar3 = (*pcVar1)(5);
        puVar7 = auStack_70;
        goto LAB_18000516f;
      }
      uVar5 = thunk_FUN_180006150(pvVar6);
    }
    local_20 = 0;
    local_18 = 0xf;
    local_30 = 0;
    if ((local_40 != 0) && (local_38 == '\0')) {
      uVar5 = napi_delete_reference(local_48);
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
    puVar7 = auStack_78;
  }
  *(undefined8 *)(puVar7 + -8) = 0x18000517e;
  return uVar5;
}



// ===== FUN_1800051a0 @ 1800051a0 (size 111) =====

void FUN_1800051a0(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (LPVOID)*param_1;
    puVar4 = auStack_28;
    pvVar3 = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8), puVar4 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      pcVar2 = (code *)swi(0x29);
      pvVar3 = (LPVOID)(*pcVar2)(5);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1800051f4;
    thunk_FUN_180006150(pvVar3);
  }
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[3] = 7;
  return;
}



// ===== FUN_180005210 @ 180005210 (size 314) =====

undefined8 * FUN_180005210(undefined8 *param_1,undefined1 (*param_2) [32])

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar6 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = FUN_180010fd0(param_2);
  if (0x7ffffffffffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180001160();
  }
  if (uVar2 < 8) {
    param_1[2] = uVar2;
    param_1[3] = 7;
    FUN_180015660(param_1,(undefined8 *)param_2,uVar2 * 2);
    *(undefined2 *)(uVar2 * 2 + (longlong)param_1) = 0;
  }
  else {
    uVar3 = uVar2 | 7;
    if (uVar3 < 0x7fffffffffffffff) goto LAB_1800052c7;
    uVar5 = 0xfffffffffffffffe;
    puVar6 = auStack_48;
    uVar3 = 0x7ffffffffffffffe;
    do {
      if (uVar5 < 0x1000) {
        *(undefined8 *)(puVar6 + -8) = 0x180005309;
        puVar7 = (undefined8 *)FUN_180005d70(uVar5);
        goto LAB_18000530c;
      }
      if (uVar5 + 0x27 <= uVar5) {
LAB_180005346:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_18000534b;
        FUN_180001140();
      }
      *(undefined8 *)(puVar6 + -8) = 0x1800052bb;
      lVar4 = FUN_180005d70(uVar5 + 0x27);
      if (lVar4 != 0) {
        puVar7 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        puVar7[-1] = lVar4;
        goto LAB_18000530c;
      }
      pcVar1 = (code *)swi(0x29);
      uVar3 = (*pcVar1)(5);
      puVar6 = puVar6 + 8;
LAB_1800052c7:
      if (uVar3 < 10) {
        uVar3 = 10;
      }
      if (0x7fffffffffffffff < uVar3 + 1) goto LAB_180005346;
      uVar5 = (uVar3 + 1) * 2;
    } while (uVar5 != 0);
    puVar7 = (undefined8 *)0x0;
LAB_18000530c:
    param_1[2] = uVar2;
    *param_1 = puVar7;
    param_1[3] = uVar3;
    *(undefined8 *)(puVar6 + -8) = 0x180005328;
    FUN_180015660(puVar7,(undefined8 *)param_2,uVar2 * 2);
    *(undefined2 *)(uVar2 * 2 + (longlong)puVar7) = 0;
  }
  return param_1;
}



// ===== FUN_180005350 @ 180005350 (size 101) =====

void FUN_180005350(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (LPVOID)*param_1;
    puVar4 = auStack_28;
    pvVar3 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8), puVar4 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      pcVar2 = (code *)swi(0x29);
      pvVar3 = (LPVOID)(*pcVar2)(5);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x18000539c;
    thunk_FUN_180006150(pvVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// ===== FUN_1800053c0 @ 1800053c0 (size 268) =====

undefined8 * FUN_1800053c0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar9 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = (undefined8 *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180001160();
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    return param_1;
  }
  uVar5 = uVar2 | 0xf;
  if (uVar5 < 0x8000000000000000) goto LAB_180005455;
  uVar8 = 0x8000000000000027;
  puVar9 = auStack_48;
  uVar5 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar9 + -8) = 0x180005446;
    lVar6 = FUN_180005d70(uVar8);
    if (lVar6 != 0) break;
    pcVar3 = (code *)swi(0x29);
    uVar5 = (*pcVar3)(5);
    puVar9 = puVar9 + 8;
LAB_180005455:
    if (uVar5 < 0x16) {
      uVar5 = 0x16;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) goto LAB_18000549b;
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar9 + -8) = 0x18000549b;
      puVar7 = (undefined8 *)FUN_180005d70(uVar1);
      goto LAB_18000549b;
    }
    uVar8 = uVar5 + 0x28;
    if (uVar8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar9 + -8) = &UNK_1800054cd;
      FUN_180001140();
    }
  }
  puVar7 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
  puVar7[-1] = lVar6;
LAB_18000549b:
  *param_1 = puVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  *(undefined8 *)(puVar9 + -8) = 0x1800054b5;
  FUN_180015660(puVar7,param_2,uVar2 + 1);
  return param_1;
}



// ===== FUN_1800054d0 @ 1800054d0 (size 250) =====

void FUN_1800054d0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar7 = auStack_48;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180001160();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    FUN_180015660(param_1,param_2,param_3);
    *(undefined1 *)((longlong)param_1 + param_3) = 0;
    return;
  }
  uVar3 = param_3 | 0xf;
  if (uVar3 < 0x8000000000000000) goto LAB_18000554c;
  uVar6 = 0x8000000000000027;
  puVar7 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  do {
    *(undefined8 *)(puVar7 + -8) = 0x180005540;
    lVar4 = FUN_180005d70(uVar6);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      puVar5[-1] = lVar4;
LAB_180005594:
      *param_1 = puVar5;
      param_1[2] = param_3;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar7 + -8) = 0x1800055ad;
      FUN_180015660(puVar5,param_2,param_3);
      *(undefined1 *)((longlong)puVar5 + param_3) = 0;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_18000554c:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_180005594;
    }
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x180005591;
      puVar5 = (undefined8 *)FUN_180005d70(uVar1);
      goto LAB_180005594;
    }
    uVar6 = uVar3 + 0x28;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_1800055cb;
      FUN_180001140();
    }
  } while( true );
}



// ===== FUN_1800055d0 @ 1800055d0 (size 89) =====

undefined8 FUN_1800055d0(ulonglong param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined1 local_88 [8];
  undefined8 local_80;
  ulonglong local_78 [12];
  LPVOID local_18;
  undefined8 *local_10;
  
  FUN_180002060(local_78,param_1,param_2);
  pcVar1 = (code *)*local_10;
  local_10 = (undefined8 *)local_10[1];
  (*pcVar1)(local_88,local_78);
  if (local_18 != (LPVOID)0x0) {
    thunk_FUN_180006150(local_18);
  }
  return local_80;
}



// ===== FUN_180005630 @ 180005630 (size 342) =====

longlong * FUN_180005630(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  LPVOID pvVar7;
  undefined1 *puVar8;
  undefined8 *unaff_RSI;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    plVar9 = param_1;
    if (0xf < uVar2) {
      plVar9 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_180015660(plVar9,param_2,param_3);
    *(undefined1 *)((longlong)plVar9 + param_3) = 0;
    return param_1;
  }
  uVar10 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180001160();
  }
  uVar6 = param_3 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar10 = uVar6;
    if (uVar6 < uVar1) {
      uVar10 = uVar1;
    }
    uVar1 = uVar10 + 1;
    if (uVar1 == 0) {
      unaff_RSI = (undefined8 *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar6 = uVar10 + 0x28;
        if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_180001140();
        }
        goto LAB_1800056ed;
      }
      unaff_RSI = (undefined8 *)FUN_180005d70(uVar1);
    }
LAB_180005710:
    param_1[2] = param_3;
    param_1[3] = uVar10;
    FUN_180015660(unaff_RSI,param_2,param_3);
    *(undefined1 *)((longlong)unaff_RSI + param_3) = 0;
    if (uVar2 < 0x10) goto LAB_180005769;
    pvVar3 = (LPVOID)*param_1;
    pvVar7 = pvVar3;
    puVar8 = auStack_58;
    if ((0xfff < uVar2 + 1) &&
       (pvVar7 = *(LPVOID *)((longlong)pvVar3 + -8), puVar8 = auStack_58,
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_180005757;
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_1800056ed:
    lVar5 = FUN_180005d70(uVar6);
    if (lVar5 != 0) {
      unaff_RSI = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar5;
      goto LAB_180005710;
    }
LAB_180005757:
    pvVar7 = (LPVOID)0x5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)();
    puVar8 = auStack_50;
  }
  *(undefined8 *)(puVar8 + -8) = 0x180005769;
  thunk_FUN_180006150(pvVar7);
LAB_180005769:
  *param_1 = (longlong)unaff_RSI;
  return param_1;
}



// ===== FUN_1800057a0 @ 1800057a0 (size 442) =====

undefined8 * FUN_1800057a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RBX;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar4 = DAT_1800267c8;
  if ((longlong)DAT_1800267d0 - (longlong)DAT_1800267c8 == -8) {
    FUN_180005b30();
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar2)();
    return puVar4;
  }
  uVar5 = (longlong)DAT_1800267d8 - (longlong)DAT_1800267c8 >> 3;
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
LAB_180005955:
                    /* WARNING: Subroutine does not return */
    FUN_180001140();
  }
  uVar5 = (uVar5 >> 1) + uVar5;
  uVar1 = ((longlong)DAT_1800267d0 - (longlong)DAT_1800267c8 >> 3) + 1;
  uVar8 = uVar1;
  if (uVar1 <= uVar5) {
    uVar8 = uVar5;
  }
  if (0x1fffffffffffffff < uVar8) goto LAB_180005955;
  uVar5 = uVar8 * 8;
  if (uVar5 == 0) {
    unaff_RBX = (undefined8 *)0x0;
LAB_180005873:
    puVar4 = (undefined8 *)
             (((longlong)param_2 - (longlong)puVar4 & 0xfffffffffffffff8U) + (longlong)unaff_RBX);
    *puVar4 = *param_3;
    if (param_2 == DAT_1800267d0) {
      uVar5 = (longlong)DAT_1800267d0 - (longlong)DAT_1800267c8;
      puVar6 = unaff_RBX;
      param_2 = DAT_1800267c8;
    }
    else {
      FUN_180015660(unaff_RBX,DAT_1800267c8,(longlong)param_2 - (longlong)DAT_1800267c8);
      puVar6 = puVar4 + 1;
      uVar5 = (longlong)DAT_1800267d0 - (longlong)param_2;
    }
    FUN_180015660(puVar6,param_2,uVar5);
    if (DAT_1800267c8 == (undefined8 *)0x0) goto LAB_180005917;
    puVar6 = DAT_1800267c8;
    puVar7 = auStack_38;
    if ((0xfff < (ulonglong)(((longlong)DAT_1800267d8 - (longlong)DAT_1800267c8 >> 3) * 8)) &&
       (puVar6 = (undefined8 *)DAT_1800267c8[-1], puVar7 = auStack_38,
       0x1f < (ulonglong)((longlong)DAT_1800267c8 + (-8 - (longlong)puVar6)))) goto LAB_180005905;
  }
  else {
    if (uVar5 < 0x1000) {
      unaff_RBX = (undefined8 *)FUN_180005d70(uVar5);
      goto LAB_180005873;
    }
    if (uVar5 + 0x27 <= uVar5) goto LAB_180005955;
    lVar3 = FUN_180005d70(uVar5 + 0x27);
    if (lVar3 != 0) {
      unaff_RBX = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      unaff_RBX[-1] = lVar3;
      goto LAB_180005873;
    }
LAB_180005905:
    puVar6 = (undefined8 *)0x5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar7 = auStack_30;
  }
  *(undefined8 *)(puVar7 + -8) = 0x180005917;
  thunk_FUN_180006150(puVar6);
LAB_180005917:
  DAT_1800267c8 = unaff_RBX;
  DAT_1800267d0 = unaff_RBX + uVar1;
  DAT_1800267d8 = unaff_RBX + uVar8;
  return puVar4;
}



// ===== FUN_180005960 @ 180005960 (size 383) =====

undefined8 *
FUN_180005960(undefined8 *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *unaff_RDI;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar9 = auStack_38;
  uVar3 = param_1[2];
  puVar8 = (undefined8 *)0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180001160();
  }
  uVar4 = param_1[3];
  puVar7 = (undefined8 *)(uVar3 + param_2 | 0xf);
  if ((puVar7 < (undefined8 *)0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    puVar1 = (undefined8 *)((uVar4 >> 1) + uVar4);
    puVar8 = puVar7;
    if (puVar7 < puVar1) {
      puVar8 = puVar1;
    }
    puVar1 = (undefined8 *)((longlong)puVar8 + 1);
    if (puVar1 == (undefined8 *)0x0) {
      unaff_RDI = (undefined8 *)0x0;
    }
    else {
      if ((undefined8 *)0xfff < puVar1) {
        puVar7 = puVar8 + 5;
        if (puVar7 <= puVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_180001140();
        }
        goto LAB_180005a05;
      }
      unaff_RDI = (undefined8 *)FUN_180005d70((ulonglong)puVar1);
    }
LAB_180005a28:
    param_1[2] = uVar3 + param_2;
    pauVar2 = (undefined1 (*) [32])((longlong)unaff_RDI + uVar3);
    param_1[3] = puVar8;
    if (uVar4 < 0x10) {
      FUN_180015660(unaff_RDI,param_1,uVar3);
      FUN_180015d10(pauVar2,0,param_4);
      (*pauVar2)[param_4] = 0;
      goto LAB_180005ab1;
    }
    puVar8 = (undefined8 *)*param_1;
    FUN_180015660(unaff_RDI,puVar8,uVar3);
    FUN_180015d10(pauVar2,0,param_4);
    (*pauVar2)[param_4] = 0;
    if (0xfff < uVar4 + 1) {
      puVar7 = puVar8 + -1;
      puVar8 = (undefined8 *)((longlong)puVar8 + (-8 - (longlong)*puVar7));
      if (puVar8 < (undefined8 *)0x20) {
        thunk_FUN_180006150((LPVOID)*puVar7);
        goto LAB_180005ab1;
      }
      goto LAB_180005a86;
    }
  }
  else {
    puVar7 = (undefined8 *)0x8000000000000027;
LAB_180005a05:
    lVar6 = FUN_180005d70((ulonglong)puVar7);
    if (lVar6 != 0) {
      unaff_RDI = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar6;
      goto LAB_180005a28;
    }
LAB_180005a86:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_30;
  }
  *(undefined8 *)(puVar9 + -8) = 0x180005a95;
  thunk_FUN_180006150(puVar8);
LAB_180005ab1:
  *param_1 = unaff_RDI;
  return param_1;
}



// ===== FUN_180005af0 @ 180005af0 (size 59) =====

void FUN_180005af0(undefined8 param_1,LPVOID param_2,longlong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  if (0xfff < param_3 + 1U) {
    puVar1 = (undefined8 *)((longlong)param_2 + -8);
    param_2 = (LPVOID)((longlong)param_2 + (-8 - (longlong)*puVar1));
    if (param_2 < (LPVOID)0x20) {
      thunk_FUN_180006150((LPVOID)*puVar1);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_180006150(param_2);
  return;
}



// ===== FUN_180005b30 @ 180005b30 (size 17) =====

void FUN_180005b30(void)

{
  code *pcVar1;
  
  FUN_180006d50(0x180021490);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== FUN_180005b50 @ 180005b50 (size 17) =====

void FUN_180005b50(void)

{
  code *pcVar1;
  
  FUN_180006d80(0x1800214a0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== FUN_180005b61 @ 180005b61 (size 121) =====

void FUN_180005b61(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *in_RAX;
  HMODULE UNRECOVERED_JUMPTABLE;
  undefined8 in_RCX;
  undefined8 in_XMM3_Qa;
  
  UNRECOVERED_JUMPTABLE = FUN_180014c6c(&ImgDelayDescr_180023e5c.grAttrs,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x000180005bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(in_RCX,param_2,param_3,in_XMM3_Qa);
  return;
}



// ===== DelayLoad_napi_create_function @ 180005bda (size 12) =====

void DelayLoad_napi_create_function
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_open_handle_scope @ 180005be6 (size 12) =====

void DelayLoad_napi_open_handle_scope
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_get_last_error_info @ 180005bf2 (size 12) =====

void DelayLoad_napi_get_last_error_info
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_create_error @ 180005bfe (size 12) =====

void DelayLoad_napi_create_error
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_get_null @ 180005c0a (size 12) =====

void DelayLoad_napi_get_null
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_delete_reference @ 180005c16 (size 12) =====

void DelayLoad_napi_delete_reference
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_fatal_error @ 180005c22 (size 12) =====

void DelayLoad_napi_fatal_error
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_is_exception_pending @ 180005c2e (size 12) =====

void DelayLoad_napi_is_exception_pending
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_set_element @ 180005c3a (size 12) =====

void DelayLoad_napi_set_element
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_get_value_string_utf8 @ 180005c46 (size 12) =====

void DelayLoad_napi_get_value_string_utf8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_strict_equals @ 180005c52 (size 12) =====

void DelayLoad_napi_strict_equals
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_get_property @ 180005c5e (size 12) =====

void DelayLoad_napi_get_property
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_add_finalizer @ 180005c6a (size 12) =====

void DelayLoad_napi_add_finalizer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_create_type_error @ 180005c76 (size 12) =====

void DelayLoad_napi_create_type_error
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_create_string_utf8 @ 180005c82 (size 12) =====

void DelayLoad_napi_create_string_utf8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_has_property @ 180005c8e (size 12) =====

void DelayLoad_napi_has_property
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_define_properties @ 180005c9a (size 12) =====

void DelayLoad_napi_define_properties
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_create_array @ 180005ca6 (size 12) =====

void DelayLoad_napi_create_array
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_typeof @ 180005cb2 (size 12) =====

void DelayLoad_napi_typeof
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_throw @ 180005cbe (size 12) =====

void DelayLoad_napi_throw
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_get_and_clear_last_exception @ 180005cca (size 12) =====

void DelayLoad_napi_get_and_clear_last_exception
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_create_object @ 180005cd6 (size 12) =====

void DelayLoad_napi_create_object
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_set_property @ 180005ce2 (size 12) =====

void DelayLoad_napi_set_property
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_get_cb_info @ 180005cee (size 12) =====

void DelayLoad_napi_get_cb_info
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_create_reference @ 180005cfa (size 12) =====

void DelayLoad_napi_create_reference
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_close_handle_scope @ 180005d06 (size 12) =====

void DelayLoad_napi_close_handle_scope
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_create_double @ 180005d12 (size 12) =====

void DelayLoad_napi_create_double
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== DelayLoad_napi_get_reference_value @ 180005d1e (size 12) =====

void DelayLoad_napi_get_reference_value
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005b61(param_1,param_2,param_3,param_4);
  return;
}



// ===== __security_check_cookie @ 180005d40 (size 30) =====

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180025040) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_180006500();
  return;
}



// ===== FUN_180005d70 @ 180005d70 (size 68) =====

void FUN_180005d70(ulonglong param_1)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  undefined7 extraout_var;
  
  pvVar3 = _malloc_base(param_1);
  while( true ) {
    if (pvVar3 != (LPVOID)0x0) {
      return;
    }
    bVar2 = FUN_18000c0f0(param_1);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) break;
    pvVar3 = _malloc_base(param_1);
  }
  if (param_1 == 0xffffffffffffffff) {
    FUN_1800066c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1800066a0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== FUN_180005dc0 @ 180005dc0 (size 71) =====

ulonglong FUN_180005dc0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  bVar3 = FUN_1800069c0();
  uVar4 = CONCAT71(extraout_var,bVar3);
  if ((int)uVar4 != 0) {
    uVar1 = *(ulonglong *)((longlong)Self + 8);
    uVar4 = 0;
    LOCK();
    bVar3 = DAT_180025ce0 == 0;
    uVar2 = uVar1;
    if (!bVar3) {
      uVar4 = DAT_180025ce0;
      uVar2 = DAT_180025ce0;
    }
    DAT_180025ce0 = uVar2;
    UNLOCK();
    uVar2 = DAT_180025ce0;
    while (DAT_180025ce0 = uVar2, !bVar3) {
      if (uVar1 == uVar4) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      uVar4 = 0;
      LOCK();
      bVar3 = uVar2 == 0;
      DAT_180025ce0 = uVar1;
      if (!bVar3) {
        uVar4 = uVar2;
        DAT_180025ce0 = uVar2;
      }
      UNLOCK();
      uVar2 = DAT_180025ce0;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// ===== FUN_180005e10 @ 180005e10 (size 60) =====

undefined8 FUN_180005e10(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = FUN_1800069c0();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    uVar2 = FUN_180006700();
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  uVar2 = FUN_1800069b0();
  uVar3 = FUN_18000c834((int)uVar2);
  if ((int)uVar3 != 0) {
    return uVar3 & 0xffffffffffffff00;
  }
  uVar2 = thunk_FUN_18000c9b4();
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// ===== FUN_180005e50 @ 180005e50 (size 121) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180005e50(void)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_180025ce9 == '\0') {
    bVar1 = FUN_1800069c0();
    in_RAX = CONCAT71(extraout_var,bVar1);
    if ((int)in_RAX == 0) {
      DAT_180025cf0 = _DAT_1800173f0;
      uRam0000000180025cf8 = _UNK_1800173f8;
      _DAT_180025d00 = 0xffffffffffffffff;
      _DAT_180025d08 = _DAT_1800173f0;
      uRam0000000180025d10 = _UNK_1800173f8;
      _DAT_180025d18 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180025cf0);
      if ((int)in_RAX != 0) {
LAB_180005e86:
        return in_RAX & 0xffffffffffffff00;
      }
      in_RAX = _initialize_onexit_table((longlong *)&DAT_180025d08);
      if ((int)in_RAX != 0) goto LAB_180005e86;
    }
    DAT_180025ce9 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// ===== FUN_180005ed0 @ 180005ed0 (size 41) =====

undefined1 FUN_180005ed0(void)

{
  bool bVar1;
  
  bVar1 = FUN_180007f00();
  if (bVar1) {
    bVar1 = FUN_18000d14c();
    if (bVar1) {
      return 1;
    }
    FUN_180007f20();
  }
  return 0;
}



// ===== FUN_180005f00 @ 180005f00 (size 21) =====

undefined1 FUN_180005f00(void)

{
  FUN_18000d160();
  FUN_180007f20();
  return 1;
}



// ===== FUN_180005f20 @ 180005f20 (size 73) =====

void FUN_180005f20(undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,int param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = FUN_1800069c0();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_180017328)(param_1,0,param_3);
  }
  FUN_18000c1f8(param_5,param_6);
  return;
}



// ===== FUN_180005f70 @ 180005f70 (size 52) =====

void FUN_180005f70(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_1800069c0();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_18000cf54(&DAT_180025cf0);
    return;
  }
  iVar2 = FUN_18000c60c();
  if (iVar2 == 0) {
    FUN_18000c5f0();
    return;
  }
  return;
}



// ===== FUN_180005fb0 @ 180005fb0 (size 20) =====

void FUN_180005fb0(void)

{
  FUN_18000d1a8();
  FUN_180007f50();
  return;
}



// ===== FUN_180005fd0 @ 180005fd0 (size 59) =====

ulonglong FUN_180005fd0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  ulonglong uVar3;
  uint7 extraout_var;
  
  if (param_1 == 0) {
    DAT_180025ce8 = 1;
  }
  FUN_180006700();
  uVar1 = FUN_180007ed0();
  uVar3 = CONCAT44(extraout_var_00,uVar1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_18000d138();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    FUN_180007f30('\0');
    uVar3 = (ulonglong)extraout_var << 8;
  }
  return uVar3 & 0xffffffffffffff00;
}



// ===== FUN_180006010 @ 180006010 (size 143) =====

/* WARNING: Enum "SectionFlags": Some values do not have unique names */

IMAGE_SECTION_HEADER * FUN_180006010(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVar4 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVar4 + 0x180000000) == 0x4550) &&
       (uVar1 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar4 + -4) == 0x20b)) {
      uVar2 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar4 + -8) +
              0x18 + lVar4 + 0x180000000;
      uVar1 = uVar2 + (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar4 + 6) * 0x28;
      while( true ) {
        uVar3 = (uint7)(uVar2 >> 8);
        if (uVar2 == uVar1) {
          return (IMAGE_SECTION_HEADER *)((ulonglong)uVar3 << 8);
        }
        if (((ulonglong)*(uint *)(uVar2 + 0xc) <= param_1 - 0x180000000U) &&
           (param_1 - 0x180000000U < (ulonglong)(*(int *)(uVar2 + 8) + *(uint *)(uVar2 + 0xc))))
        break;
        uVar2 = uVar2 + 0x28;
      }
      if (*(int *)(uVar2 + 0x24) < 0) {
        return (IMAGE_SECTION_HEADER *)(uVar2 & 0xffffffffffffff00);
      }
      return (IMAGE_SECTION_HEADER *)CONCAT71(uVar3,1);
    }
  }
  return (IMAGE_SECTION_HEADER *)(uVar1 & 0xffffffffffffff00);
}



// ===== FUN_1800060b0 @ 1800060b0 (size 37) =====

undefined8 FUN_1800060b0(char param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  bVar2 = FUN_1800069c0();
  uVar1 = DAT_180025ce0;
  uVar3 = CONCAT71(extraout_var,bVar2);
  if (((int)uVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180025ce0 = 0;
    UNLOCK();
    uVar3 = uVar1;
  }
  return uVar3;
}



// ===== FUN_1800060e0 @ 1800060e0 (size 43) =====

undefined8 FUN_1800060e0(bool param_1,char param_2)

{
  longlong in_RAX;
  uint7 extraout_var;
  
  if ((DAT_180025ce8 == '\0') || (param_2 == '\0')) {
    FUN_18000d170(param_1);
    FUN_180007f30(param_1);
    in_RAX = (ulonglong)extraout_var << 8;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



// ===== FUN_180006110 @ 180006110 (size 64) =====

int FUN_180006110(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180025cf0 == -1) {
    iVar1 = FUN_18000cf44(param_1);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180025cf0,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}



// ===== FUN_180006150 @ 180006150 (size 5) =====

void FUN_180006150(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_180026318,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_18000d82c(DVar2);
    p_Var4 = FUN_18000d96c();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}



// ===== FUN_180006170 @ 180006170 (size 86) =====

ulonglong FUN_180006170(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1800062e0(param_3 != 0);
    return uVar2;
  }
  if (param_2 == 1) {
    uVar2 = FUN_1800061d0(param_1,param_3);
    return uVar2;
  }
  if (param_2 == 2) {
    bVar1 = FUN_180005ed0();
    return (ulonglong)bVar1;
  }
  if (param_2 != 3) {
    return 1;
  }
  bVar1 = FUN_180005f00();
  return (ulonglong)bVar1;
}



// ===== FUN_1800061d0 @ 1800061d0 (size 261) =====

/* WARNING: Enum "SectionFlags": Some values do not have unique names */

undefined8 FUN_1800061d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  IMAGE_SECTION_HEADER *pIVar6;
  
  uVar3 = FUN_180005fd0(0);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_180005dc0();
    bVar2 = true;
    if (DAT_180025cd8 != 0) {
      FUN_1800069e0(7);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    DAT_180025cd8 = 1;
    uVar4 = FUN_180005e50();
    if ((char)uVar4 != '\0') {
      FUN_180006b20();
      FUN_180006ab0();
      FUN_180006af0();
      uVar4 = FUN_18000d200((undefined8 *)&DAT_180017370,(undefined8 *)&DAT_180017390);
      if ((int)uVar4 == 0) {
        uVar4 = FUN_180005e10();
        if ((char)uVar4 != '\0') {
          FUN_18000d1c8((undefined8 *)&DAT_180017350,(undefined8 *)&DAT_180017368);
          DAT_180025cd8 = 2;
          bVar2 = false;
        }
      }
    }
    FUN_1800060b0((char)uVar3);
    if (!bVar2) {
      plVar5 = (longlong *)FUN_180006b10();
      if (*plVar5 != 0) {
        pIVar6 = FUN_180006010((longlong)plVar5);
        if ((char)pIVar6 != '\0') {
          (*(code *)PTR__guard_dispatch_icall_180017328)(param_1,2,param_2);
        }
      }
      DAT_180025d20 = DAT_180025d20 + 1;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1800062e0 @ 1800062e0 (size 143) =====

ulonglong FUN_1800062e0(bool param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (DAT_180025d20 < 1) {
    return 0;
  }
  DAT_180025d20 = DAT_180025d20 + -1;
  uVar2 = FUN_180005dc0();
  if (DAT_180025cd8 == 2) {
    FUN_180005f70();
    FUN_180006ac0();
    FUN_180006b70();
    DAT_180025cd8 = 0;
    FUN_1800060b0((char)uVar2);
    uVar3 = FUN_1800060e0(param_1,'\0');
    FUN_180005fb0();
    return uVar3 & 0xff;
  }
  FUN_1800069e0(7);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



// ===== FUN_180006380 @ 180006380 (size 304) =====

ulonglong FUN_180006380(undefined8 param_1,int param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 == 0) && (DAT_180025d20 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (DAT_180017400 == 0) {
      uVar2 = 1;
    }
    else {
      uVar1 = (*(code *)PTR__guard_dispatch_icall_180017328)();
      uVar2 = (ulonglong)uVar1;
    }
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_180006170(param_1,param_2,param_3);
    if ((int)uVar2 == 0) {
      return uVar2 & 0xffffffff;
    }
  }
  uVar2 = FUN_1800069b0();
  uVar3 = uVar2 & 0xffffffff;
  if ((param_2 == 1) && ((int)uVar2 == 0)) {
    FUN_1800069b0();
    FUN_1800062e0(param_3 != 0);
    if (DAT_180017400 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180017328)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    uVar2 = FUN_180006170(param_1,param_2,param_3);
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      if (DAT_180017400 == 0) {
        uVar3 = 1;
      }
      else {
        uVar1 = (*(code *)PTR__guard_dispatch_icall_180017328)(param_1,param_2,param_3);
        uVar3 = (ulonglong)uVar1;
      }
    }
  }
  return uVar3;
}



// ===== entry @ 1800064c0 (size 61) =====

void entry(undefined8 param_1,int param_2,longlong param_3)

{
  if (param_2 == 1) {
    FUN_1800069f0();
  }
  FUN_180006380(param_1,param_2,param_3);
  return;
}



// ===== FUN_180006500 @ 180006500 (size 8) =====

void FUN_180006500(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}



// ===== FUN_180006510 @ 180006510 (size 60) =====

undefined8 * FUN_180006510(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180008180((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ===== FUN_180006550 @ 180006550 (size 33) =====

undefined8 * FUN_180006550(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ===== FUN_180006580 @ 180006580 (size 60) =====

undefined8 * FUN_180006580(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180008180((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



// ===== FUN_1800065c0 @ 1800065c0 (size 33) =====

undefined8 * FUN_1800065c0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



// ===== exception @ 1800065f0 (size 50) =====

/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(longlong *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  FUN_180008180((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}



// ===== FUN_180006650 @ 180006650 (size 66) =====

undefined8 * FUN_180006650(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  FUN_180008220(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180006150(param_1);
  }
  return param_1;
}



// ===== FUN_1800066a0 @ 1800066a0 (size 31) =====

void FUN_1800066a0(void)

{
  longlong local_28 [5];
  
  FUN_180006550(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_180008260(local_28,&DAT_180023c18);
}



// ===== FUN_1800066c0 @ 1800066c0 (size 31) =====

void FUN_1800066c0(void)

{
  longlong local_28 [5];
  
  FUN_1800065c0(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_180008260(local_28,&DAT_180023ca0);
}



// ===== FUN_1800066e0 @ 1800066e0 (size 19) =====

char * FUN_1800066e0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



// ===== FUN_180006700 @ 180006700 (size 680) =====

/* WARNING: Removing unreachable block (ram,0x000180006807) */
/* WARNING: Removing unreachable block (ram,0x0001800067f5) */
/* WARNING: Removing unreachable block (ram,0x0001800067e3) */
/* WARNING: Removing unreachable block (ram,0x0001800067bc) */
/* WARNING: Removing unreachable block (ram,0x000180006737) */
/* WARNING: Removing unreachable block (ram,0x000180006712) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180006700(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_180025090 = 0x8000;
    DAT_180025098 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180025d24 = DAT_180025d24 | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_180025d24 = DAT_180025d24 | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint *)(lVar3 + 4);
    }
    uVar11 = 0;
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint *)(lVar3 + 4);
    }
  }
  DAT_180025088 = 1;
  DAT_18002508c = 2;
  uVar6 = DAT_1800250a0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_180025088 = 2;
    DAT_18002508c = 6;
    uVar6 = DAT_1800250a0 & 0xffffffffffffffee;
  }
  DAT_1800250a0 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar6 = xinuse(0);
    uVar9 = in_XCR0 & uVar6 & 0xffffffff;
    uVar6 = DAT_1800250a0;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)uVar9, (bVar7 & 6) == 6)) {
      DAT_180025088 = 3;
      uVar5 = DAT_18002508c | 8;
      if ((uVar12 & 0x20) != 0) {
        DAT_180025088 = 5;
        uVar5 = DAT_18002508c | 0x28;
        uVar6 = DAT_1800250a0 & 0xfffffffffffffffd;
        if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_18002508c = DAT_18002508c | 0x68;
          DAT_180025088 = 6;
          uVar5 = DAT_18002508c;
          uVar6 = DAT_1800250a0 & 0xffffffffffffffd9;
        }
      }
      DAT_1800250a0 = uVar6;
      DAT_18002508c = uVar5;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_1800250a0 = DAT_1800250a0 & 0xfffffffffeffffff;
      }
      uVar6 = DAT_1800250a0;
      if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_180025d28 = uVar8 & 0xff;
        uVar6 = DAT_1800250a0 & 0xfffffffffeffffd0;
        if (1 < _DAT_180025d28) {
          uVar6 = DAT_1800250a0 & 0xfffffffffeffff90;
        }
      }
    }
    DAT_1800250a0 = uVar6;
    if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_1800250a0 = DAT_1800250a0 & 0xffffffffffffff7f;
    }
  }
  return 0;
}



// ===== FUN_1800069b0 @ 1800069b0 (size 6) =====

undefined8 FUN_1800069b0(void)

{
  return 1;
}



// ===== FUN_1800069c0 @ 1800069c0 (size 12) =====

bool FUN_1800069c0(void)

{
  return DAT_1800267e8 != 0;
}



// ===== FUN_1800069d0 @ 1800069d0 (size 11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800069d0(void)

{
  _DAT_180025d2c = 0;
  return;
}



// ===== FUN_1800069e0 @ 1800069e0 (size 5) =====

void FUN_1800069e0(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}



// ===== FUN_1800069f0 @ 1800069f0 (size 191) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800069f0(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10 [3];
  _FILETIME local_18 [2];
  
  if (DAT_180025040 != 0x2b992ddfa232) {
    _DAT_180025080 = ~DAT_180025040;
    return;
  }
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  local_18[0] = local_res8;
  DVar1 = GetCurrentThreadId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res10);
  DAT_180025040 =
       (local_res10[0].QuadPart << 0x20 ^ local_res10[0].QuadPart ^ (ulonglong)local_18[0] ^
       (ulonglong)local_18) & 0xffffffffffff;
  if (DAT_180025040 == 0x2b992ddfa232) {
    DAT_180025040 = 0x2b992ddfa233;
  }
  _DAT_180025080 = ~DAT_180025040;
  return;
}



// ===== FUN_180006ab0 @ 180006ab0 (size 14) =====

void FUN_180006ab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180006ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180025d30);
  return;
}



// ===== FUN_180006ac0 @ 180006ac0 (size 12) =====

void FUN_180006ac0(void)

{
  FUN_180008340((PSLIST_HEADER)&DAT_180025d30);
  return;
}



// ===== FUN_180006ad0 @ 180006ad0 (size 8) =====

undefined * FUN_180006ad0(void)

{
  return &DAT_180025d40;
}



// ===== FUN_180006ae0 @ 180006ae0 (size 8) =====

undefined * FUN_180006ae0(void)

{
  return &DAT_180025d48;
}



// ===== FUN_180006af0 @ 180006af0 (size 27) =====

void FUN_180006af0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180006ad0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_180006ae0();
  *puVar1 = *puVar1 | 2;
  return;
}



// ===== FUN_180006b10 @ 180006b10 (size 8) =====

undefined * FUN_180006b10(void)

{
  return &DAT_1800267e0;
}



// ===== FUN_180006b20 @ 180006b20 (size 66) =====

/* WARNING: Removing unreachable block (ram,0x000180006b40) */
/* WARNING: Removing unreachable block (ram,0x000180006b48) */
/* WARNING: Removing unreachable block (ram,0x000180006b4e) */

void FUN_180006b20(void)

{
  return;
}



// ===== FUN_180006b70 @ 180006b70 (size 66) =====

/* WARNING: Removing unreachable block (ram,0x000180006b90) */
/* WARNING: Removing unreachable block (ram,0x000180006b98) */
/* WARNING: Removing unreachable block (ram,0x000180006b9e) */

void FUN_180006b70(void)

{
  return;
}



// ===== FUN_180006bc0 @ 180006bc0 (size 43) =====

undefined8 * FUN_180006bc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180006150(param_1);
  }
  return param_1;
}



// ===== FUN_180006bf0 @ 180006bf0 (size 60) =====

undefined8 * FUN_180006bf0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180008180((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}



// ===== FUN_180006c30 @ 180006c30 (size 71) =====

undefined8 * FUN_180006c30(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_180008180(&local_18,param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}



// ===== FUN_180006c80 @ 180006c80 (size 60) =====

undefined8 * FUN_180006c80(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180008180((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::logic_error::vftable;
  return param_1;
}



// ===== FUN_180006cc0 @ 180006cc0 (size 60) =====

undefined8 * FUN_180006cc0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180008180((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}



// ===== FUN_180006d00 @ 180006d00 (size 71) =====

undefined8 * FUN_180006d00(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_180008180(&local_18,param_1 + 1);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}



// ===== FUN_180006d50 @ 180006d50 (size 34) =====

void FUN_180006d50(longlong param_1)

{
  longlong local_28 [5];
  
  FUN_180006c30(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_180008260(local_28,&DAT_180023d30);
}



// ===== FUN_180006d80 @ 180006d80 (size 34) =====

void FUN_180006d80(longlong param_1)

{
  longlong local_28 [5];
  
  FUN_180006d00(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_180008260(local_28,&DAT_180023d98);
}



// ===== FUN_180006db0 @ 180006db0 (size 282) =====

undefined1 (*) [32]
FUN_180006db0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  uint uVar19;
  undefined1 (*pauVar20) [32];
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  
  uVar21 = (longlong)param_2 - (longlong)param_1;
  pauVar20 = param_2;
  if (((uVar21 & 0xffffffffffffffe0) == 0) || ((DAT_18002508c & 0x20) == 0)) {
    if (((uVar21 & 0xfffffffffffffff0) != 0) && ((DAT_18002508c & 4) != 0)) {
      auVar24 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        pauVar3 = pauVar20 + -1;
        pauVar4 = pauVar20 + -1;
        pauVar5 = pauVar20 + -1;
        pauVar6 = pauVar20 + -1;
        pauVar7 = pauVar20 + -1;
        pauVar8 = pauVar20 + -1;
        pauVar9 = pauVar20 + -1;
        pauVar10 = pauVar20 + -1;
        pauVar11 = pauVar20 + -1;
        pauVar12 = pauVar20 + -1;
        pauVar13 = pauVar20 + -1;
        pauVar14 = pauVar20 + -1;
        pauVar15 = pauVar20 + -1;
        pauVar16 = pauVar20 + -1;
        pauVar17 = pauVar20 + -1;
        pauVar18 = pauVar20 + -1;
        pauVar20 = (undefined1 (*) [32])(pauVar20[-1] + 0x10);
        auVar23[0] = -((*pauVar3)[0x10] == auVar24[0]);
        auVar23[1] = -((*pauVar4)[0x11] == auVar24[1]);
        auVar23[2] = -((*pauVar5)[0x12] == auVar24[2]);
        auVar23[3] = -((*pauVar6)[0x13] == auVar24[3]);
        auVar23[4] = -((*pauVar7)[0x14] == auVar24[4]);
        auVar23[5] = -((*pauVar8)[0x15] == auVar24[5]);
        auVar23[6] = -((*pauVar9)[0x16] == auVar24[6]);
        auVar23[7] = -((*pauVar10)[0x17] == auVar24[7]);
        auVar23[8] = -((*pauVar11)[0x18] == auVar24[8]);
        auVar23[9] = -((*pauVar12)[0x19] == auVar24[9]);
        auVar23[10] = -((*pauVar13)[0x1a] == auVar24[10]);
        auVar23[0xb] = -((*pauVar14)[0x1b] == auVar24[0xb]);
        auVar23[0xc] = -((*pauVar15)[0x1c] == auVar24[0xc]);
        auVar23[0xd] = -((*pauVar16)[0x1d] == auVar24[0xd]);
        auVar23[0xe] = -((*pauVar17)[0x1e] == auVar24[0xe]);
        auVar23[0xf] = -((*pauVar18)[0x1f] == auVar24[0xf]);
        uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar19 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar19 == 0; uVar19 = uVar19 - 1) {
            }
          }
          return (undefined1 (*) [32])(*pauVar20 + uVar19);
        }
      } while (pauVar20 != (undefined1 (*) [32])((longlong)param_2 - (uVar21 & 0xfffffffffffffff0)))
      ;
    }
  }
  else {
    auVar24 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar25._16_16_ = auVar24;
    auVar25._0_16_ = auVar24;
    do {
      auVar2 = vpcmpeqb_avx2(auVar25,pauVar20[-1]);
      pauVar20 = pauVar20 + -1;
      uVar19 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar19 != 0) goto LAB_180006e69;
    } while (pauVar20 != (undefined1 (*) [32])((longlong)param_2 - (uVar21 & 0xffffffffffffffe0)));
    uVar22 = (ulonglong)((uint)uVar21 & 0x1c);
    if ((uVar21 & 0x1c) != 0) {
      pauVar20 = (undefined1 (*) [32])((longlong)pauVar20 - uVar22);
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800199e0 + -uVar22),*pauVar20);
      auVar25 = vpcmpeqb_avx2(auVar2,auVar25);
      auVar25 = vpand_avx2(auVar25,*(undefined1 (*) [32])(&DAT_1800199e0 + -uVar22));
      uVar19 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      if (uVar19 != 0) {
LAB_180006e69:
        return (undefined1 (*) [32])(*pauVar20 + (0x1f - LZCOUNT(uVar19)));
      }
    }
  }
  do {
    if (pauVar20 == param_1) {
      return param_2;
    }
    pauVar20 = (undefined1 (*) [32])(pauVar20[-1] + 0x1f);
  } while ((*pauVar20)[0] != param_3);
  return pauVar20;
}



// ===== FUN_180006ee0 @ 180006ee0 (size 80) =====

undefined4 FUN_180006ee0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  FUN_180008400();
  (*(code *)PTR__guard_dispatch_icall_180017328)(*param_1,&local_28);
  return 0;
}



// ===== FUN_180006f30 @ 180006f30 (size 80) =====

undefined4 FUN_180006f30(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  FUN_180008400();
  (*(code *)PTR__guard_dispatch_icall_180017328)(*param_1,&local_28);
  return 0;
}



// ===== FUN_180006f80 @ 180006f80 (size 272) =====

longlong FUN_180006f80(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  bVar2 = *param_1;
  pbVar9 = param_1 + 1;
  *param_2 = bVar2;
  if ((bVar2 & 4) != 0) {
    bVar3 = *pbVar9;
    pbVar9 = pbVar9 + -(longlong)(char)(&DAT_180019a00)[bVar3 & 0xf];
    *(uint *)(param_2 + 4) = *(uint *)(pbVar9 + -4) >> ((&DAT_180019a10)[bVar3 & 0xf] & 0x1f);
  }
  if ((bVar2 & 8) != 0) {
    uVar4 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    *(undefined4 *)(param_2 + 8) = uVar4;
  }
  if ((bVar2 & 0x10) != 0) {
    uVar4 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
  }
  pbVar8 = pbVar9 + 4;
  if ((param_5 == '\0') && ((bVar2 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar9 == 0) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(7);
    }
    else {
      pbVar9 = (byte *)(*(int *)pbVar9 + param_3);
      uVar6 = *pbVar9 & 0xf;
      pbVar9 = pbVar9 + -(longlong)(char)(&DAT_180019a00)[uVar6];
      uVar7 = 0;
      puVar1 = (uint *)(pbVar9 + -4);
      if (*puVar1 >> ((&DAT_180019a10)[uVar6] & 0x1f) != 0) {
        do {
          if (*(int *)pbVar9 == param_4) {
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pbVar9 + 4);
            break;
          }
          pbVar9 = pbVar9 + 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *puVar1 >> ((&DAT_180019a10)[uVar6] & 0x1f));
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar9;
  }
  if ((bVar2 & 1) != 0) {
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + -(longlong)(char)(&DAT_180019a00)[bVar2 & 0xf];
    *(uint *)(param_2 + 0x14) = *(uint *)(pbVar8 + -4) >> ((&DAT_180019a10)[bVar2 & 0xf] & 0x1f);
  }
  return (longlong)pbVar8 - (longlong)param_1;
}



// ===== FUN_180007090 @ 180007090 (size 102) =====

bool FUN_180007090(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  PVOID pvVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = FUN_180008770(param_2,param_1);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar5 = (ulonglong)uVar4;
  do {
    if (uVar4 == 0) {
      lVar3 = 0;
      break;
    }
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
    pvVar2 = FUN_180008400();
    lVar3 = (longlong)*(int *)(param_2 + 0x10) +
            *(longlong *)((longlong)pvVar2 + 0x60) + uVar5 * 0x14;
  } while ((iVar1 <= *(int *)(lVar3 + 4)) || (*(int *)(lVar3 + 8) < iVar1));
  return lVar3 != 0;
}



// ===== FUN_180007100 @ 180007100 (size 6) =====

byte FUN_180007100(undefined8 param_1,byte *param_2)

{
  return *param_2 & 1;
}



// ===== FUN_180007110 @ 180007110 (size 302) =====

void FUN_180007110(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  PVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong local_res8;
  ulonglong local_res18 [2];
  
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  iVar2 = FUN_180008770(param_3,param_2);
  local_res8 = *param_1;
  do {
    do {
      if (uVar9 == 0) goto LAB_1800071d5;
      uVar9 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar9;
      lVar7 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var4 = RtlLookupFunctionEntry(*param_2,local_res18,(PUNWIND_HISTORY_TABLE)0x0);
    lVar11 = (longlong)*(int *)(lVar7 + 0x10) + local_res18[0];
    uVar1 = *(uint *)(lVar7 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar11 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
        goto LAB_1800071c0;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
LAB_1800071c0:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar11 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_1800071d5:
  iVar2 = FUN_180008770(param_3,param_2);
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  do {
    if (uVar9 == 0) {
      iVar10 = -1;
      break;
    }
    pvVar6 = FUN_180008400();
    uVar9 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar9;
    lVar7 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)((longlong)pvVar6 + 0x60);
    iVar10 = *(int *)(lVar7 + 4 + uVar8 * 0x14);
  } while ((iVar2 <= iVar10) || (*(int *)(lVar7 + 8 + uVar8 * 0x14) < iVar2));
  FUN_18000b040(&local_res8,param_2,param_3,iVar10);
  return;
}



// ===== FUN_180007240 @ 180007240 (size 52) =====

void FUN_180007240(longlong *param_1,ulonglong *param_2,byte *param_3)

{
  longlong local_res8 [4];
  
  local_res8[0] = *param_1;
  if ((*param_3 & 1) != 0) {
    local_res8[0] = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_18000b1f0(local_res8,param_2,(longlong)param_3,-1);
  return;
}



// ===== FUN_180007280 @ 180007280 (size 243) =====

longlong * FUN_180007280(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  uVar7 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar7;
  iVar2 = FUN_180008770(param_3,param_2);
  *param_4 = *param_1;
  if (uVar7 == 0) {
    return param_4;
  }
  do {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    if ((*(int *)(lVar6 + 4) < iVar2) && (iVar2 <= *(int *)(lVar6 + 8))) {
      p_Var4 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
      lVar9 = (longlong)*(int *)(lVar6 + 0x10) + local_res8;
      uVar1 = *(uint *)(lVar6 + 0xc);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((longlong)*(int *)(lVar9 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
          goto LAB_180007330;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar1);
      }
      if ((uint)uVar5 < uVar1) {
LAB_180007330:
        *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVar7 == 0) {
      return param_4;
    }
  } while( true );
}



// ===== FUN_180007380 @ 180007380 (size 33) =====

longlong * FUN_180007380(longlong *param_1,undefined8 param_2,byte *param_3,longlong *param_4)

{
  *param_4 = *param_1;
  if ((*param_3 & 1) != 0) {
    *param_4 = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}



// ===== FUN_1800073b0 @ 1800073b0 (size 300) =====

undefined8 *
FUN_1800073b0(undefined8 *param_1,undefined8 param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_3c;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar2 = FUN_180008770(param_5,param_4);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = param_4[1];
  uVar9 = 0xffffffff;
  lVar7 = (longlong)*(int *)(param_5 + 0x10);
  uVar8 = 0xffffffff;
  lVar1 = uVar6 + lVar7;
  uVar4 = uVar3;
  while( true ) {
    uVar5 = uVar4 - 1;
    if ((*(int *)(uVar6 + (ulonglong)uVar5 * 0x14 + 4 + lVar7) < iVar2) &&
       (iVar2 <= *(int *)(lVar1 + 8 + (ulonglong)uVar5 * 0x14))) break;
    uVar4 = uVar5;
    if (uVar5 == 0) {
      lVar7 = 0;
LAB_18000743c:
      uVar4 = 0;
      uVar5 = uVar4;
      do {
        uVar6 = (ulonglong)uVar5;
        if ((((lVar7 == 0) ||
             ((*(int *)(lVar7 + 4) < *(int *)(lVar1 + uVar6 * 0x14) &&
              (*(int *)(lVar1 + 4 + uVar6 * 0x14) <= *(int *)(lVar7 + 8))))) &&
            (*(int *)(lVar1 + uVar6 * 0x14) <= param_3)) &&
           ((param_3 <= *(int *)(lVar1 + 4 + uVar6 * 0x14) && (uVar8 = uVar5, uVar9 == 0xffffffff)))
           ) {
          uVar9 = uVar5;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      *param_1 = param_2;
      param_1[2] = param_2;
      uVar3 = uVar4;
      if (uVar9 != 0xffffffff) {
        uVar3 = uVar9;
      }
      *(uint *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
      if (uVar9 != 0xffffffff) {
        uVar4 = uVar8 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_3c;
      *(uint *)(param_1 + 3) = uVar4;
      return param_1;
    }
  }
  lVar7 = uVar6 + (ulonglong)(uVar4 - 1) * 0x14 + lVar7;
  goto LAB_18000743c;
}



// ===== FUN_1800074e0 @ 1800074e0 (size 376) =====

undefined8 * FUN_1800074e0(undefined8 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int *local_38;
  int local_30;
  undefined4 local_2c;
  
  uVar6 = local_2c;
  iVar7 = 0;
  local_30 = 0;
  iVar11 = 0;
  local_38 = param_2;
  FUN_180007910((longlong)param_2,(longlong)&local_38);
  if (*param_2 != 0) {
    uVar10 = param_2[6];
    iVar9 = 0;
    pbVar12 = *(byte **)(param_2 + 2);
    iVar11 = 0;
    do {
      iVar4 = iVar7;
      if ((((int)uVar10 <= param_3) && (param_3 <= param_2[7])) &&
         (iVar4 = iVar9, iVar11 = iVar9, iVar7 == 0)) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      iVar9 = iVar9 + 1;
      lVar8 = (longlong)(char)(&DAT_180019a00)[*pbVar12 & 0xf];
      bVar1 = (&DAT_180019a10)[*pbVar12 & 0xf];
      pbVar5 = pbVar12 + -lVar8;
      uVar10 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      uVar10 = uVar10 >> (bVar1 & 0x1f);
      param_2[6] = uVar10;
      cVar2 = (&DAT_180019a00)[*pbVar5 & 0xf];
      bVar1 = (&DAT_180019a10)[*pbVar5 & 0xf];
      pbVar5 = pbVar12 + (-lVar8 - (longlong)cVar2);
      uVar3 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      param_2[7] = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180019a10)[*pbVar5 & 0xf];
      pbVar12 = pbVar12 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_180019a00)[*pbVar5 & 0xf]) -
                          lVar8);
      uVar3 = *(uint *)(pbVar12 + -4);
      *(byte **)(param_2 + 2) = pbVar12;
      param_2[8] = uVar3 >> (bVar1 & 0x1f);
      iVar4 = *(int *)pbVar12;
      pbVar12 = pbVar12 + 4;
      *(byte **)(param_2 + 2) = pbVar12;
      param_2[9] = iVar4;
      uVar6 = local_2c;
    } while (iVar9 != *param_2);
  }
  local_38 = param_2;
  local_30 = iVar7;
  local_2c = uVar6;
  FUN_180007910((longlong)param_2,(longlong)&local_38);
  *(int *)(param_1 + 3) = iVar11 + 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_2c;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar7;
  param_1[2] = param_2;
  return param_1;
}



// ===== FUN_180007660 @ 180007660 (size 302) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007660(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_180025040 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_180019ac0;
  local_b8.ExceptionRecord = _UNK_180019ac8;
  local_b8.ExceptionAddress = _DAT_180019ad0;
  local_b8._24_8_ = _UNK_180019ad8;
  local_b8.ExceptionInformation[9] = _UNK_180019b28;
  local_b8.ExceptionInformation[10] = _DAT_180019b30;
  local_b8.ExceptionInformation[0xb] = _UNK_180019b38;
  local_b8.ExceptionInformation[0xe] = DAT_180019b50;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_180019b40;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_180019b44;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_180019b48;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_180019b4c;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_18000a980;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}



// ===== FUN_180007790 @ 180007790 (size 372) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007790(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,undefined8 param_6,int param_7,int param_8,longlong param_9,
                  undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_180025040 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_180019a20;
  local_b8.ExceptionRecord = _UNK_180019a28;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_18000ab90;
  local_b8.ExceptionAddress = _DAT_180019a30;
  local_b8._24_8_ = _UNK_180019a38;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[5] = *(longlong *)(param_9 + 0x18) + param_10[1];
  local_b8.ExceptionInformation[9] = *(longlong *)(param_9 + 0x20) + param_10[1];
  local_b8.ExceptionInformation[0xb] = (ULONG_PTR)param_8;
  local_b8.ExceptionInformation[10] = _DAT_180019a90;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_180019aa0;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_180019aa4;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_180019aa8;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_180019aac;
  local_b8.ExceptionInformation[0xe] = DAT_180019ab0;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}



// ===== FUN_180007910 @ 180007910 (size 488) =====

void FUN_180007910(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  iVar3 = *(int *)(param_2 + 8);
  *(byte **)(param_1 + 8) = pbVar9;
  iVar6 = 0;
  pbVar7 = pbVar9 + -(longlong)(char)(&DAT_180019a00)[*pbVar9 & 0xf];
  *(uint *)(param_1 + 0x18) = *(uint *)(pbVar7 + -4) >> ((&DAT_180019a10)[*pbVar9 & 0xf] & 0x1f);
  *(byte **)(param_1 + 8) = pbVar7;
  bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf];
  uVar4 = *(uint *)(pbVar7 + -4);
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf];
  uVar4 = *(uint *)(pbVar7 + -4);
  pbVar9 = pbVar7 + 4;
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
  uVar5 = *(undefined4 *)pbVar7;
  *(byte **)(param_1 + 8) = pbVar9;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  if (iVar3 != 0) {
    do {
      iVar6 = iVar6 + 1;
      lVar8 = (longlong)(char)(&DAT_180019a00)[*pbVar9 & 0xf];
      bVar1 = (&DAT_180019a10)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_180019a00)[*pbVar7 & 0xf];
      bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      lVar8 = (longlong)(char)(&DAT_180019a00)[*pbVar9 & 0xf];
      bVar1 = (&DAT_180019a10)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_180019a00)[*pbVar7 & 0xf];
      bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
    } while (iVar6 != iVar3);
  }
  return;
}



// ===== _CreateFrameInfo @ 180007b00 (size 58) =====

/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  PVOID pvVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  pvVar1 = FUN_180008400();
  if (param_1 < *(undefined8 **)((longlong)pvVar1 + 0x58)) {
    pvVar1 = FUN_180008400();
    uVar2 = *(undefined8 *)((longlong)pvVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  pvVar1 = FUN_180008400();
  *(undefined8 **)((longlong)pvVar1 + 0x58) = param_1;
  return param_1;
}



// ===== FUN_180007b40 @ 180007b40 (size 82) =====

void FUN_180007b40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  PVOID pvVar3;
  bool bVar4;
  
  pvVar3 = FUN_180008400();
  if (param_1 == *(longlong *)((longlong)pvVar3 + 0x58)) {
    pvVar3 = FUN_180008400();
    lVar2 = *(longlong *)((longlong)pvVar3 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar4 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar4) {
        pvVar3 = FUN_180008400();
        *(longlong *)((longlong)pvVar3 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_180007ba0 @ 180007ba0 (size 18) =====

undefined8 FUN_180007ba0(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180008400();
  return *(undefined8 *)((longlong)pvVar1 + 0x60);
}



// ===== FUN_180007bc0 @ 180007bc0 (size 18) =====

undefined8 FUN_180007bc0(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180008400();
  return *(undefined8 *)((longlong)pvVar1 + 0x68);
}



// ===== FUN_180007be0 @ 180007be0 (size 24) =====

void FUN_180007be0(undefined8 param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar1 + 0x60) = param_1;
  return;
}



// ===== FUN_180007c00 @ 180007c00 (size 24) =====

void FUN_180007c00(undefined8 param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar1 + 0x68) = param_1;
  return;
}



// ===== FUN_180007c20 @ 180007c20 (size 113) =====

void FUN_180007c20(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  longlong local_res8 [4];
  
  uVar1 = param_4[1];
  local_res8[0] = param_2;
  pvVar3 = FUN_180008400();
  *(ulonglong *)((longlong)pvVar3 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  pvVar3 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar3 + 0x68) = uVar2;
  pvVar3 = FUN_180008400();
  FUN_18000a7b0(param_1,local_res8,param_3,param_4,
                (uint *)((ulonglong)*(uint *)param_4[7] + *(longlong *)((longlong)pvVar3 + 0x60)),0,
                0,0);
  return;
}



// ===== FUN_180007ca0 @ 180007ca0 (size 186) =====

void FUN_180007ca0(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  longlong local_res8;
  byte local_38 [4];
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  uVar1 = param_4[1];
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_38[0] = 0;
  local_res8 = param_2;
  pvVar3 = FUN_180008400();
  *(ulonglong *)((longlong)pvVar3 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  pvVar3 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar3 + 0x68) = uVar2;
  pvVar3 = FUN_180008400();
  FUN_180006f80((byte *)((ulonglong)*(uint *)param_4[7] + *(longlong *)((longlong)pvVar3 + 0x60)),
                local_38,param_4[1],*(int *)param_4[2],'\0');
  FUN_18000a7c0(param_1,&local_res8,param_3,param_4,local_38,0,0,0);
  return;
}



// ===== __DestructExceptionObject @ 180007d60 (size 107) =====

/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (**(longlong **)(param_1 + 10) != 0)) {
        (*(code *)PTR__guard_dispatch_icall_180017328)();
      }
    }
    else {
      FUN_180007dd0(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}



// ===== FUN_180007dd0 @ 180007dd0 (size 3) =====

void FUN_180007dd0(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000180007dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== FUN_180007de0 @ 180007de0 (size 56) =====

undefined8 FUN_180007de0(longlong param_1)

{
  longlong *plVar1;
  PVOID pvVar2;
  
  pvVar2 = FUN_180008400();
  plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}



// ===== FUN_180007e20 @ 180007e20 (size 40) =====

longlong FUN_180007e20(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (-1 < iVar1) {
    return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) +
           (longlong)iVar1 + *param_2 + param_1;
  }
  return *param_2 + param_1;
}



// ===== FUN_180007e50 @ 180007e50 (size 100) =====

undefined8 FUN_180007e50(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    pvVar4 = FUN_180008400();
    if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
      pvVar4 = FUN_180008400();
      *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    pvVar4 = FUN_180008400();
    *(int **)((longlong)pvVar4 + 0x20) = piVar2;
    uVar3 = param_1[1];
    pvVar4 = FUN_180008400();
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_18000d23c();
  }
  return 0;
}



// ===== Unwind@180007ec0 @ 180007ec0 (size 9) =====

void Unwind_180007ec0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_18000d23c();
}



// ===== FUN_180007ed0 @ 180007ed0 (size 41) =====

uint FUN_180007ed0(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint3 extraout_var;
  
  uVar1 = FUN_18000bbb0();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_1800085c0();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    FUN_18000bc40();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}



// ===== FUN_180007f00 @ 180007f00 (size 20) =====

bool FUN_180007f00(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_1800084e0();
  return pvVar1 != (PVOID)0x0;
}



// ===== FUN_180007f20 @ 180007f20 (size 16) =====

undefined1 FUN_180007f20(void)

{
  FUN_1800083a0();
  return 1;
}



// ===== FUN_180007f30 @ 180007f30 (size 25) =====

undefined1 FUN_180007f30(char param_1)

{
  if (param_1 == '\0') {
    FUN_180008630();
    FUN_18000bc40();
  }
  return 1;
}



// ===== FUN_180007f50 @ 180007f50 (size 16) =====

undefined1 FUN_180007f50(void)

{
  FUN_180008630();
  return 1;
}



// ===== FUN_180007f60 @ 180007f60 (size 538) =====

undefined8 FUN_180007f60(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_58;
  longlong local_50;
  
  __except_validate_context_record(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar1;
  uVar9 = *(uint *)(param_4 + 9);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVar9 < *puVar2) {
      do {
        if (((puVar2[(ulonglong)uVar9 * 4 + 1] <= uVar11) &&
            (uVar11 < puVar2[(ulonglong)uVar9 * 4 + 2])) && (puVar2[(ulonglong)uVar9 * 4 + 4] != 0))
        {
          if (puVar2[(ulonglong)uVar9 * 4 + 3] != 1) {
            iVar3 = (*(code *)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 3] + lVar1))
                              (&local_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_18000807b;
          }
          if (((param_1->ExceptionCode == 0xe06d7363) &&
              (PTR___DestructExceptionObject_180019b58 != (undefined *)0x0)) &&
             (uVar4 = FUN_180015250(0x180019b58), (int)uVar4 != 0)) {
            (*(code *)PTR___DestructExceptionObject_180019b58)(param_1,1);
          }
          FUN_18000bcc0();
          RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 4] + lVar1),param_1,
                      (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                      (PUNWIND_HISTORY_TABLE)param_4[8]);
          FUN_18000bcf0();
        }
LAB_18000807b:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar2);
    }
  }
  else {
    uVar10 = *puVar2;
    if (uVar9 < uVar10) {
      uVar4 = param_4[4] - lVar1;
      do {
        uVar5 = (ulonglong)uVar9;
        if ((puVar2[uVar5 * 4 + 1] <= uVar11) && (uVar11 < puVar2[uVar5 * 4 + 2])) {
          uVar8 = param_1->ExceptionFlags & 0x20;
          if (uVar8 != 0) {
            uVar7 = 0;
            if (uVar10 != 0) {
              do {
                if ((((puVar2[uVar7 * 4 + 1] <= uVar4) && (uVar4 < puVar2[uVar7 * 4 + 2])) &&
                    (puVar2[uVar7 * 4 + 4] == puVar2[uVar5 * 4 + 4])) &&
                   (puVar2[uVar7 * 4 + 3] == puVar2[uVar5 * 4 + 3])) break;
                uVar6 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar6;
              } while (uVar6 < uVar10);
            }
            if ((uint)uVar7 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar5 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVar9 + 1;
            (*(code *)((ulonglong)puVar2[uVar5 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar4 == puVar2[uVar5 * 4 + 4]) && (uVar8 != 0)) {
            return 1;
          }
        }
        uVar10 = *puVar2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return 1;
}



// ===== FUN_180008180 @ 180008180 (size 149) =====

void FUN_180008180(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  if (((char)param_1[1] != '\0') && (*param_1 != 0)) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(*param_1 + 1 + lVar2) != '\0');
    pcVar3 = _malloc_base(lVar2 + 2U);
    if (pcVar3 != (char *)0x0) {
      FUN_18000d2c0(pcVar3,lVar2 + 2U,*param_1);
      *param_2 = (longlong)pcVar3;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    thunk_FUN_18000e350((LPVOID)0x0);
    return;
  }
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}



// ===== FUN_180008220 @ 180008220 (size 57) =====

void FUN_180008220(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_18000e350((LPVOID)*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// ===== FUN_180008260 @ 180008260 (size 169) =====

void FUN_180008260(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (*(code *)PTR__guard_dispatch_icall_180017328)();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}



// ===== FUN_180008310 @ 180008310 (size 40) =====

uint FUN_180008310(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}



// ===== FUN_180008340 @ 180008340 (size 49) =====

void FUN_180008340(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_18000e350(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}



// ===== FUN_1800083a0 @ 1800083a0 (size 87) =====

void FUN_1800083a0(void)

{
  undefined *puVar1;
  
  if (DAT_1800250b0 != 0xffffffff) {
    puVar1 = FlsGetValue(DAT_1800250b0);
    FlsSetValue(DAT_1800250b0,(PVOID)0x0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_180025d60)) {
      thunk_FUN_18000e350(puVar1);
      return;
    }
  }
  return;
}



// ===== FUN_180008400 @ 180008400 (size 209) =====

PVOID FUN_180008400(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_1800250b0 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_1800250b0);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_180008498:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_1800250b0,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = _calloc_base(1,0x80);
        if (lpFlsData == (LPVOID)0x0) {
          FlsSetValue(DAT_1800250b0,(PVOID)0x0);
          lpFlsData = (LPVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_1800250b0,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_18000e350((LPVOID)0x0);
            goto LAB_180008498;
          }
          FlsSetValue(DAT_1800250b0,(PVOID)0x0);
        }
        thunk_FUN_18000e350(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_1800084e0 @ 1800084e0 (size 209) =====

PVOID FUN_1800084e0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  LPVOID pvVar2;
  LPVOID lpFlsData;
  LPVOID pvVar3;
  
  if (DAT_1800250b0 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar2 = FlsGetValue(DAT_1800250b0);
  if (pvVar2 != (PVOID)0xffffffffffffffff) {
    if (pvVar2 != (PVOID)0x0) goto LAB_180008597;
    BVar1 = FlsSetValue(DAT_1800250b0,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      lpFlsData = _calloc_base(1,0x80);
      if ((lpFlsData == (LPVOID)0x0) || (BVar1 = FlsSetValue(DAT_1800250b0,lpFlsData), BVar1 == 0))
      {
        FlsSetValue(DAT_1800250b0,(PVOID)0x0);
        pvVar2 = (PVOID)0x0;
        pvVar3 = lpFlsData;
      }
      else {
        *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
        pvVar3 = (LPVOID)0x0;
        pvVar2 = lpFlsData;
      }
      thunk_FUN_18000e350(pvVar3);
      goto LAB_180008597;
    }
  }
  pvVar2 = (PVOID)0x0;
LAB_180008597:
  SetLastError(dwErrCode);
  return pvVar2;
}



// ===== FUN_1800085c0 @ 1800085c0 (size 98) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1800085c0(void)

{
  uint dwFlsIndex;
  BOOL BVar1;
  
  dwFlsIndex = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_180008380);
  DAT_1800250b0 = dwFlsIndex;
  if (dwFlsIndex != 0xffffffff) {
    BVar1 = FlsSetValue(dwFlsIndex,&DAT_180025d60);
    if (BVar1 != 0) {
      _DAT_180025dd8 = 0xfffffffe;
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    dwFlsIndex = 0;
    if (DAT_1800250b0 != 0xffffffff) {
      dwFlsIndex = FlsFree(DAT_1800250b0);
      DAT_1800250b0 = 0xffffffff;
    }
  }
  return dwFlsIndex & 0xffffff00;
}



// ===== FUN_180008630 @ 180008630 (size 38) =====

undefined1 FUN_180008630(void)

{
  if (DAT_1800250b0 != 0xffffffff) {
    FlsFree(DAT_1800250b0);
    DAT_1800250b0 = 0xffffffff;
  }
  return 1;
}



// ===== FUN_180008660 @ 180008660 (size 128) =====

int FUN_180008660(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVar2 != -2) {
    return iVar2;
  }
  uVar3 = param_2[1];
  lVar1 = uVar3 + (longlong)*(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVar5 = 0;
    do {
      if (*param_2 < (longlong)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_3 + 0x14));
    if ((int)uVar5 != 0) {
      return *(int *)(uVar3 + (ulonglong)((int)uVar5 - 1) * 8 + 4 +
                     (longlong)*(int *)(param_3 + 0x18));
    }
  }
  return -1;
}



// ===== GetUnwindTryBlock @ 1800086f0 (size 41) =====

/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */

undefined4 GetUnwindTryBlock(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_180007280(param_1,param_2,param_3,local_res18);
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}



// ===== FUN_180008720 @ 180008720 (size 12) =====

void FUN_180008720(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) = param_4;
  return;
}



// ===== SetUnwindTryBlock @ 180008730 (size 59) =====

/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
    void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void SetUnwindTryBlock(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_180007280(param_1,param_2,param_3,local_res18);
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) < param_4) {
    *(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) = param_4;
  }
  return;
}



// ===== FUN_180008770 @ 180008770 (size 104) =====

undefined4 FUN_180008770(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar2 = param_2[1];
    lVar1 = uVar2 + (longlong)*(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (*param_2 < (longlong)*(int *)(lVar1 + uVar4 * 8) + uVar2) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (uVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_1800087e0 @ 1800087e0 (size 254) =====

int FUN_1800087e0(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0) {
    return -1;
  }
  uVar2 = param_2[1];
  uVar3 = *(byte *)(uVar2 + (longlong)iVar6) & 0xf;
  pbVar4 = (byte *)((uVar2 + (longlong)iVar6) - (longlong)(char)(&DAT_180019a00)[uVar3]);
  puVar1 = (uint *)(pbVar4 + -4);
  if (*puVar1 >> ((&DAT_180019a10)[uVar3] & 0x1f) != 0) {
    uVar7 = 0;
    uVar8 = 0;
    iVar6 = -1;
    do {
      pbVar5 = pbVar4 + -(longlong)(char)(&DAT_180019a00)[*pbVar4 & 0xf];
      uVar8 = uVar8 + (*(uint *)(pbVar5 + -4) >> ((&DAT_180019a10)[*pbVar4 & 0xf] & 0x1f));
      if (*param_2 < (ulonglong)uVar8 + *(uint *)param_2[2] + uVar2) break;
      uVar7 = uVar7 + 1;
      pbVar4 = pbVar5 + -(longlong)(char)(&DAT_180019a00)[*pbVar5 & 0xf];
      iVar6 = (*(uint *)(pbVar4 + -4) >> ((&DAT_180019a10)[*pbVar5 & 0xf] & 0x1f)) - 1;
    } while (uVar7 < *puVar1 >> ((&DAT_180019a10)[uVar3] & 0x1f));
    if (uVar7 != 0) {
      return iVar6;
    }
  }
  return -1;
}



// ===== FUN_1800088e0 @ 1800088e0 (size 104) =====

undefined4 FUN_1800088e0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = lVar2 + *(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar1 + uVar4 * 8) + lVar2)) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (lVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_180008950 @ 180008950 (size 232) =====

int FUN_180008950(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    uVar3 = *(byte *)(lVar2 + iVar4) & 0xf;
    pbVar5 = (byte *)((lVar2 + iVar4) - (longlong)(char)(&DAT_180019a00)[uVar3]);
    puVar1 = (uint *)(pbVar5 + -4);
    if (*puVar1 >> ((&DAT_180019a10)[uVar3] & 0x1f) != 0) {
      uVar7 = 0;
      uVar8 = 0;
      iVar4 = -1;
      do {
        pbVar6 = pbVar5 + -(longlong)(char)(&DAT_180019a00)[*pbVar5 & 0xf];
        uVar8 = uVar8 + (*(uint *)(pbVar6 + -4) >> ((&DAT_180019a10)[*pbVar5 & 0xf] & 0x1f));
        if (param_3 < (ulonglong)uVar8 + (ulonglong)**(uint **)(param_2 + 0x10) + lVar2) break;
        uVar7 = uVar7 + 1;
        pbVar5 = pbVar6 + -(longlong)(char)(&DAT_180019a00)[*pbVar6 & 0xf];
        iVar4 = (*(uint *)(pbVar5 + -4) >> ((&DAT_180019a10)[*pbVar6 & 0xf] & 0x1f)) - 1;
      } while (uVar7 < *puVar1 >> ((&DAT_180019a10)[uVar3] & 0x1f));
      if (uVar7 == 0) {
        iVar4 = -1;
      }
      return iVar4;
    }
  }
  return -1;
}



// ===== FUN_180008a40 @ 180008a40 (size 473) =====

ulonglong FUN_180008a40(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar3 = FUN_180007ba0(), lVar3 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_180007ba0();
      lVar3 = lVar3 + (int)uVar1;
    }
    uVar6 = 0;
    if ((*(char *)(lVar3 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_180025d58 != 0)) {
        lVar3 = (*(code *)PTR__guard_dispatch_icall_180017328)();
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar3;
        lVar3 = FUN_180007e20(lVar3,(int *)(param_4 + 8));
        *param_2 = lVar3;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar2 = *(int *)(param_4 + 0x18);
          uVar5 = uVar6;
          if (iVar2 != 0) {
            lVar3 = FUN_180007bc0();
            uVar5 = lVar3 + iVar2;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (uVar5 == 0) {
            if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            iVar2 = *(int *)(param_4 + 0x14);
            puVar4 = (undefined8 *)FUN_180007e20(lVar3,(int *)(param_4 + 8));
            FUN_180015660(param_2,puVar4,(longlong)iVar2);
          }
          else {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0 ||
                (lVar3 = FUN_180007bc0(), lVar3 + iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
          }
        }
        else {
          if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) ||
             (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          FUN_180015660(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14))
          ;
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar3 = FUN_180007e20(*param_2,(int *)(param_4 + 8));
            *param_2 = lVar3;
          }
        }
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar3;
        lVar3 = FUN_180007e20(lVar3,(int *)(param_4 + 8));
        *param_2 = lVar3;
      }
      return uVar6;
    }
  }
  return 0;
}



// ===== FUN_180008c20 @ 180008c20 (size 474) =====

ulonglong FUN_180008c20(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_3 + 8);
  if ((iVar1 != 0) && (lVar3 = FUN_180007ba0(), lVar3 + iVar1 != 0)) {
    iVar1 = *(int *)(param_3 + 8);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_180007ba0();
      lVar3 = lVar3 + iVar1;
    }
    uVar6 = 0;
    if ((*(char *)(lVar3 + 0x10) != '\0') &&
       ((*(uint *)(param_3 + 0xc) != 0 || (*(int *)(param_3 + 4) < 0)))) {
      uVar2 = *(uint *)(param_3 + 4);
      if (-1 < (int)uVar2) {
        param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
      }
      if ((((char)uVar2 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_180025d58 != 0)) {
        lVar3 = (*(code *)PTR__guard_dispatch_icall_180017328)();
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar3;
        lVar3 = FUN_180007e20(lVar3,(int *)(param_4 + 8));
        *param_2 = lVar3;
      }
      else if ((uVar2 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar1 = *(int *)(param_4 + 0x18);
          uVar5 = uVar6;
          if (iVar1 != 0) {
            lVar3 = FUN_180007bc0();
            uVar5 = lVar3 + iVar1;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (uVar5 == 0) {
            if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            iVar1 = *(int *)(param_4 + 0x14);
            puVar4 = (undefined8 *)FUN_180007e20(lVar3,(int *)(param_4 + 8));
            FUN_180015660(param_2,puVar4,(longlong)iVar1);
          }
          else {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar1 = *(int *)(param_4 + 0x18), iVar1 == 0 ||
                (lVar3 = FUN_180007bc0(), lVar3 + iVar1 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
          }
        }
        else {
          if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) ||
             (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          FUN_180015660(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14))
          ;
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar3 = FUN_180007e20(*param_2,(int *)(param_4 + 8));
            *param_2 = lVar3;
          }
        }
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar3;
        lVar3 = FUN_180007e20(lVar3,(int *)(param_4 + 8));
        *param_2 = lVar3;
      }
      return uVar6;
    }
  }
  return 0;
}



// ===== FUN_180008e10 @ 180008e10 (size 179) =====

void FUN_180008e10(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  
  plVar6 = param_2;
  if (-1 < (int)*param_3) {
    plVar6 = (longlong *)((longlong)(int)param_3[2] + *param_2);
  }
  uVar2 = FUN_180008a40(param_1,param_2,param_3,param_4);
  if ((int)uVar2 == 1) {
    lVar3 = FUN_180007e20(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_180007bc0();
      puVar5 = (undefined *)(lVar4 + iVar1);
    }
    FUN_18000b8c0(plVar6,puVar5,lVar3);
  }
  else if ((int)uVar2 == 2) {
    lVar3 = FUN_180007e20(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_180007bc0();
      puVar5 = (undefined *)(lVar4 + iVar1);
    }
    FUN_18000b8d0(plVar6,puVar5,lVar3,1);
  }
  return;
}



// ===== FUN_180008ed0 @ 180008ed0 (size 180) =====

void FUN_180008ed0(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  
  plVar6 = param_2;
  if (-1 < *(int *)(param_3 + 4)) {
    plVar6 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  uVar2 = FUN_180008c20(param_1,param_2,param_3,param_4);
  if ((int)uVar2 == 1) {
    lVar3 = FUN_180007e20(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_180007bc0();
      puVar5 = (undefined *)(lVar4 + iVar1);
    }
    FUN_18000b8c0(plVar6,puVar5,lVar3);
  }
  else if ((int)uVar2 == 2) {
    lVar3 = FUN_180007e20(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_180007bc0();
      puVar5 = (undefined *)(lVar4 + iVar1);
    }
    FUN_18000b8d0(plVar6,puVar5,lVar3,1);
  }
  return;
}



// ===== FUN_180008f90 @ 180008f90 (size 1443) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180008f90(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,byte param_6)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  PVOID pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_138 [32];
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar17;
  ULONG_PTR local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  int local_bc;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint *local_a0;
  ulonglong local_98;
  longlong *local_90;
  uint local_88;
  uint local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_180025040 ^ (ulonglong)auStackY_138;
  local_b8 = param_2;
  iVar5 = FUN_180008770((longlong)param_5,param_4);
  FUN_180007280(param_2,param_4,(longlong)param_5,(longlong *)&local_c8);
  iVar6 = GetUnwindTryBlock(param_2,param_4,(longlong)param_5);
  if (iVar6 < iVar5) {
    FUN_180008720((longlong *)&local_c8,param_4,(longlong)param_5,iVar5);
    SetUnwindTryBlock(param_2,param_4,(longlong)param_5,iVar5);
  }
  else {
    iVar5 = GetUnwindTryBlock(param_2,param_4,(longlong)param_5);
  }
  if ((-2 < iVar5) && (iVar5 < (int)param_5[1])) {
    local_d0 = param_3;
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0xc) == 0))
       )) {
      pvVar7 = FUN_180008400();
      if (*(longlong *)((longlong)pvVar7 + 0x20) == 0) {
        return;
      }
      pvVar7 = FUN_180008400();
      param_1 = *(int **)((longlong)pvVar7 + 0x20);
      pvVar7 = FUN_180008400();
      local_d0 = *(ULONG_PTR *)((longlong)pvVar7 + 0x28);
      FUN_180007c00(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_180009531;
      pvVar7 = FUN_180008400();
      if (*(longlong *)((longlong)pvVar7 + 0x38) != 0) {
        pvVar7 = FUN_180008400();
        piVar13 = *(int **)((longlong)pvVar7 + 0x38);
        pvVar7 = FUN_180008400();
        *(undefined8 *)((longlong)pvVar7 + 0x38) = 0;
        cVar3 = FUN_18000b680((longlong)param_1,piVar13);
        if (cVar3 == '\0') {
          uVar8 = FUN_18000b790(piVar13);
          if ((char)uVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_18000d23c();
          }
          __DestructExceptionObject(param_1);
          FUN_18000a950(&local_70);
                    /* WARNING: Subroutine does not return */
          FUN_180008260(&local_70,&DAT_180023e00);
        }
      }
    }
    uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
    local_98 = param_4[1];
    local_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        FUN_1800073b0(&local_90,&local_a0,iVar5,param_4,(longlong)param_5);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
        local_c8 = local_90;
        uVar15 = local_88;
        if (local_88 < local_78) {
          do {
            lVar12 = local_90[1];
            lVar9 = (longlong)*(int *)(*local_90 + 0x10) + (ulonglong)uVar15 * 0x14;
            local_bc = *(int *)(lVar9 + lVar12);
            if ((local_bc <= iVar5) && (iVar5 <= *(int *)(lVar9 + 4 + lVar12))) {
              local_c0 = *(undefined4 *)(lVar9 + 8 + lVar12);
              uVar8 = 0;
              uVar1 = *(uint *)(lVar9 + 0xc + lVar12);
              local_b0 = (longlong)*(int *)(lVar9 + 0x10 + lVar12) + param_4[1];
              param_2 = local_b8;
              if (uVar1 != 0) {
                do {
                  plVar11 = (longlong *)(local_b0 + uVar8 * 0x14);
                  local_70 = *plVar11;
                  uStack_68 = plVar11[1];
                  local_60 = *(undefined4 *)(local_b0 + 0x10 + uVar8 * 0x14);
                  iVar6 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar9 = FUN_180007bc0();
                  piVar13 = (int *)((longlong)iVar6 + lVar9 + 4);
                  iVar6 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar9 = FUN_180007bc0();
                  local_90 = local_c8;
                  param_2 = local_b8;
                  for (iVar6 = *(int *)(lVar9 + iVar6); local_c8 = local_90, local_b8 = param_2,
                      0 < iVar6; iVar6 = iVar6 + -1) {
                    iVar2 = *piVar13;
                    lVar9 = FUN_180007bc0();
                    pbVar14 = (byte *)(iVar2 + lVar9);
                    uVar10 = FUN_18000a0c0((byte *)&local_70,pbVar14,*(uint **)(param_1 + 0xc));
                    param_2 = local_b8;
                    uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
                    if ((int)uVar10 != 0) {
                      plVar11 = FUN_180007280(local_b8,param_4,(longlong)param_5,&local_a8);
                      if (pbVar14 != (byte *)0x0) {
                        FUN_180008e10((longlong)param_1,plVar11,(uint *)&local_70,pbVar14);
                      }
                      lVar12 = (longlong)uStack_68._4_4_;
                      lVar9 = FUN_180007ba0();
                      in_stack_ffffffffffffff00 = CONCAT44(uVar17,local_c0);
                      FUN_180007660(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar11,
                                    lVar9 + lVar12,(ULONG_PTR)param_5,local_bc,
                                    in_stack_ffffffffffffff00,&local_70,param_4,param_6);
                      local_90 = local_c8;
                      goto LAB_180009386;
                    }
                    piVar13 = piVar13 + 1;
                    local_90 = local_c8;
                  }
                  uVar16 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar16;
                } while (uVar16 != uVar1);
              }
            }
LAB_180009386:
            uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
            uVar15 = uVar15 + 1;
          } while (uVar15 < local_78);
        }
      }
      piVar13 = (int *)0x0;
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVar15 = param_5[8], uVar15 != 0 && (lVar9 = FUN_180007ba0(), lVar9 + (int)uVar15 != 0))
          || (((param_5[9] & 4) != 0 && (bVar4 = FUN_180007090(param_4,(longlong)param_5), !bVar4)))
          ))) {
        if ((param_5[9] & 4) != 0) {
          pvVar7 = FUN_180008400();
          *(int **)((longlong)pvVar7 + 0x20) = param_1;
          pvVar7 = FUN_180008400();
          *(ULONG_PTR *)((longlong)pvVar7 + 0x28) = local_d0;
                    /* WARNING: Subroutine does not return */
          FUN_18000d23c();
        }
        uVar15 = param_5[8];
        if (uVar15 != 0) {
          lVar9 = FUN_180007ba0();
          piVar13 = (int *)((int)uVar15 + lVar9);
        }
        cVar3 = FUN_18000b680((longlong)param_1,piVar13);
        if (cVar3 == '\0') {
          plVar11 = FUN_180007280(param_2,param_4,(longlong)param_5,&local_a8);
          FUN_180007660(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar11,0,(ULONG_PTR)param_5,
                        -1,CONCAT44(uVar17,0xffffffff),0,param_4,param_6);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != 0) goto LAB_180009531;
      FUN_180009af0(param_1,param_2,local_d0,param_4,(ULONG_PTR)param_5,iVar5);
    }
    pvVar7 = FUN_180008400();
    if (*(longlong *)((longlong)pvVar7 + 0x38) == 0) {
      return;
    }
  }
LAB_180009531:
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_180009540 @ 180009540 (size 1452) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180009540(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,byte *param_5
                  ,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  PVOID pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  undefined1 auStackY_1a8 [32];
  ULONG_PTR local_140;
  longlong local_118;
  uint local_110;
  uint local_100;
  longlong local_f8;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined4 local_80;
  uint local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_180025040 ^ (ulonglong)auStackY_1a8;
  iVar7 = FUN_18000b5d0(param_2,param_4,(longlong)param_5);
  if (-2 < iVar7) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar13 = 0;
    }
    else {
      pbVar20 = (byte *)(param_4[1] + (longlong)*(int *)(param_5 + 8));
      uVar13 = *pbVar20 & 0xf;
      uVar13 = *(uint *)(pbVar20 + (-4 - (longlong)(char)(&DAT_180019a00)[uVar13])) >>
               ((&DAT_180019a10)[uVar13] & 0x1f);
    }
    if (iVar7 < (int)uVar13) {
      local_140 = param_3;
      if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) &&
         (*(longlong *)(param_1 + 0xc) == 0)) {
        pvVar8 = FUN_180008400();
        if (*(longlong *)((longlong)pvVar8 + 0x20) == 0) {
          return;
        }
        pvVar8 = FUN_180008400();
        param_1 = *(int **)((longlong)pvVar8 + 0x20);
        pvVar8 = FUN_180008400();
        local_140 = *(ULONG_PTR *)((longlong)pvVar8 + 0x28);
        FUN_180007c00(*(undefined8 *)(param_1 + 0xe));
        if ((param_1 == (int *)0x0) ||
           (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
            ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
        goto LAB_180009aea;
        pvVar8 = FUN_180008400();
        if (*(longlong *)((longlong)pvVar8 + 0x38) != 0) {
          pvVar8 = FUN_180008400();
          piVar18 = *(int **)((longlong)pvVar8 + 0x38);
          pvVar8 = FUN_180008400();
          *(undefined8 *)((longlong)pvVar8 + 0x38) = 0;
          cVar5 = FUN_18000b680((longlong)param_1,piVar18);
          if (cVar5 == '\0') {
            uVar9 = FUN_18000b790(piVar18);
            if ((char)uVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_18000d23c();
            }
            __DestructExceptionObject(param_1);
            FUN_18000a950(&local_118);
                    /* WARNING: Subroutine does not return */
            FUN_180008260(&local_118,&DAT_180023e00);
          }
        }
      }
      FUN_18000a820(local_78,(longlong)param_5,param_4[1]);
      if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
        if ((local_78[0] != 0) &&
           (FUN_1800074e0(&local_118,(int *)local_78,iVar7), uVar13 = local_110,
           local_110 < local_100)) {
          do {
            iVar1 = *(int *)(local_118 + 0x18);
            if ((iVar1 <= iVar7) && (iVar7 <= *(int *)(local_118 + 0x1c))) {
              iVar2 = *(int *)(local_118 + 0x20);
              uVar21 = 0;
              iVar16 = *(int *)(local_118 + 0x24);
              local_88 = param_4[1];
              local_c0 = 0;
              local_b8 = 0;
              local_b0 = 0;
              local_80 = *(undefined4 *)param_4[2];
              local_ac = 0;
              local_a4 = 0;
              local_98 = 0;
              uStack_90 = 0;
              if (iVar16 == 0) {
                local_c8[0] = 0;
              }
              else {
                uVar19 = *(byte *)(local_88 + (longlong)iVar16) & 0xf;
                local_c0 = (local_88 - (longlong)(char)(&DAT_180019a00)[uVar19]) + (longlong)iVar16;
                local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_180019a10)[uVar19] & 0x1f);
                local_b8 = local_c0;
                FUN_18000adf0((longlong)local_c8);
              }
              uVar19 = local_c8[0];
              if (local_c8[0] != 0) {
                do {
                  local_f0 = local_b0;
                  local_ef = local_af;
                  local_ed = local_ad;
                  local_ec = (undefined4)local_ac;
                  local_e8 = local_ac._4_4_;
                  local_e4 = (undefined4)local_a4;
                  local_e0 = local_a4._4_4_;
                  local_dc = local_9c;
                  local_d8 = local_98;
                  local_d0 = uStack_90;
                  iVar16 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar10 = FUN_180007bc0();
                  piVar18 = (int *)((longlong)iVar16 + lVar10 + 4);
                  iVar16 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar10 = FUN_180007bc0();
                  for (iVar16 = *(int *)(lVar10 + iVar16); 0 < iVar16; iVar16 = iVar16 + -1) {
                    iVar3 = *piVar18;
                    lVar10 = FUN_180007bc0();
                    pbVar20 = (byte *)(iVar3 + lVar10);
                    uVar11 = FUN_18000a1f0((longlong)&local_f0,pbVar20,*(uint **)(param_1 + 0xc));
                    if ((int)uVar11 != 0) {
                      plVar12 = FUN_180007380(param_2,param_4,param_5,&local_f8);
                      if (pbVar20 != (byte *)0x0) {
                        FUN_180008ed0((longlong)param_1,plVar12,(longlong)&local_f0,pbVar20);
                      }
                      lVar17 = (longlong)local_e0;
                      lVar10 = FUN_180007ba0();
                      FUN_180007790(param_2,(ULONG_PTR)param_1,local_140,(ULONG_PTR)plVar12,
                                    lVar10 + lVar17,param_5,iVar1,iVar2,(longlong)&local_f0,param_4,
                                    param_6);
                      goto LAB_1800098da;
                    }
                    piVar18 = piVar18 + 1;
                  }
                  FUN_18000adf0((longlong)local_c8);
                  uVar21 = uVar21 + 1;
                } while (uVar21 != uVar19);
              }
            }
LAB_1800098da:
            pbVar20 = *(byte **)(local_118 + 8);
            uVar13 = uVar13 + 1;
            lVar10 = (longlong)(char)(&DAT_180019a00)[*pbVar20 & 0xf];
            bVar6 = (&DAT_180019a10)[*pbVar20 & 0xf];
            pbVar14 = pbVar20 + -lVar10;
            uVar21 = *(uint *)(pbVar14 + -4);
            *(byte **)(local_118 + 8) = pbVar14;
            *(uint *)(local_118 + 0x18) = uVar21 >> (bVar6 & 0x1f);
            cVar5 = (&DAT_180019a00)[*pbVar14 & 0xf];
            pbVar15 = pbVar20 + (-lVar10 - (longlong)cVar5);
            *(uint *)(local_118 + 0x1c) =
                 *(uint *)(pbVar15 + -4) >> ((&DAT_180019a10)[*pbVar14 & 0xf] & 0x1f);
            *(byte **)(local_118 + 8) = pbVar15;
            pbVar20 = pbVar20 + ((-(longlong)cVar5 -
                                 (longlong)(char)(&DAT_180019a00)[*pbVar15 & 0xf]) - lVar10);
            *(uint *)(local_118 + 0x20) =
                 *(uint *)(pbVar20 + -4) >> ((&DAT_180019a10)[*pbVar15 & 0xf] & 0x1f);
            *(byte **)(local_118 + 8) = pbVar20;
            uVar4 = *(undefined4 *)pbVar20;
            *(byte **)(local_118 + 8) = pbVar20 + 4;
            *(undefined4 *)(local_118 + 0x24) = uVar4;
          } while (uVar13 < local_100);
        }
        if (((*param_5 & 0x40) != 0) && (bVar6 = FUN_180007100(param_4,param_5), bVar6 == 0)) {
          pvVar8 = FUN_180008400();
          *(int **)((longlong)pvVar8 + 0x20) = param_1;
          pvVar8 = FUN_180008400();
          *(ULONG_PTR *)((longlong)pvVar8 + 0x28) = local_140;
                    /* WARNING: Subroutine does not return */
          FUN_18000d23c();
        }
      }
      else if (local_78[0] != 0) {
        if (param_6 != 0) goto LAB_180009aea;
        FUN_180009d50(param_1,param_2,local_140,param_4,param_5,iVar7);
      }
      pvVar8 = FUN_180008400();
      if (*(longlong *)((longlong)pvVar8 + 0x38) == 0) {
        return;
      }
    }
  }
LAB_180009aea:
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_180009af0 @ 180009af0 (size 592) =====

void FUN_180009af0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                  ULONG_PTR param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PVOID pvVar4;
  PVOID pvVar5;
  longlong lVar6;
  longlong *plVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined4 in_stack_ffffffffffffff64;
  longlong local_70;
  ULONG_PTR local_68;
  ulonglong local_60;
  longlong *local_58;
  uint local_50;
  uint local_40;
  
  if (*param_1 != -0x7ffffffd) {
    pvVar4 = FUN_180008400();
    if (*(longlong *)((longlong)pvVar4 + 0x10) != 0) {
      pvVar4 = FUN_180008400();
      pvVar4 = *(PVOID *)((longlong)pvVar4 + 0x10);
      pvVar5 = EncodePointer((PVOID)0x0);
      if ((((pvVar4 != pvVar5) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (iVar3 = FUN_180006ee0(param_1,param_2,param_3), iVar3 != 0)) {
        return;
      }
    }
    local_60 = param_4[1];
    local_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_1800073b0(&local_58,&local_68,param_6,param_4,param_5);
    uVar9 = local_50;
    if (local_50 < local_40) {
      do {
        piVar10 = (int *)((longlong)*(int *)(*local_58 + 0x10) + (ulonglong)uVar9 * 0x14 +
                         local_58[1]);
        iVar3 = *piVar10;
        if ((iVar3 <= param_6) && (param_6 <= piVar10[1])) {
          iVar1 = piVar10[2];
          pbVar8 = (byte *)((param_4[1] - 0x14) +
                           (longlong)piVar10[4] + (ulonglong)(uint)piVar10[3] * 0x14);
          iVar2 = *(int *)(pbVar8 + 4);
          if ((iVar2 != 0) && (lVar6 = FUN_180007ba0(), lVar6 + iVar2 != 0)) {
            iVar2 = *(int *)(pbVar8 + 4);
            if (iVar2 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = FUN_180007ba0();
              lVar6 = lVar6 + iVar2;
            }
            if (*(char *)(lVar6 + 0x10) != '\0') goto LAB_180009cfd;
          }
          if ((*pbVar8 & 0x40) == 0) {
            plVar7 = FUN_180007280(param_2,param_4,param_5,&local_70);
            lVar6 = FUN_180007ba0();
            FUN_180007660(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar7,
                          *(int *)(pbVar8 + 0xc) + lVar6,param_5,iVar3,
                          CONCAT44(in_stack_ffffffffffffff64,iVar1),pbVar8,param_4,0);
          }
        }
LAB_180009cfd:
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_40);
    }
  }
  return;
}



// ===== FUN_180009d50 @ 180009d50 (size 874) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180009d50(int *param_1,longlong *param_2,ULONG_PTR param_3,undefined8 *param_4,
                  byte *param_5,int param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  PVOID pvVar7;
  PVOID pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong lVar15;
  byte *pbVar16;
  undefined1 auStackY_178 [32];
  uint local_118;
  longlong local_f0;
  uint local_e8;
  uint local_d8;
  longlong local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  uint local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_180025040 ^ (ulonglong)auStackY_178;
  if (*param_1 != -0x7ffffffd) {
    pvVar7 = FUN_180008400();
    if (*(longlong *)((longlong)pvVar7 + 0x10) != 0) {
      pvVar7 = FUN_180008400();
      pvVar7 = *(PVOID *)((longlong)pvVar7 + 0x10);
      pvVar8 = EncodePointer((PVOID)0x0);
      if ((((pvVar7 != pvVar8) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (iVar6 = FUN_180006f30(param_1,param_2,param_3), iVar6 != 0)) {
        return;
      }
    }
    FUN_18000a820(local_78,(longlong)param_5,param_4[1]);
    if (local_78[0] == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_1800074e0(&local_f0,(int *)local_78,param_6);
    local_118 = local_e8;
    if (local_e8 < local_d8) {
      do {
        lVar10 = 0;
        iVar6 = *(int *)(local_f0 + 0x18);
        if ((iVar6 <= param_6) && (param_6 <= *(int *)(local_f0 + 0x1c))) {
          iVar3 = *(int *)(local_f0 + 0x20);
          iVar4 = *(int *)(local_f0 + 0x24);
          local_88 = param_4[1];
          local_80 = *(undefined4 *)param_4[2];
          local_c0 = 0;
          local_b8 = 0;
          local_b0[0] = 0;
          local_ac = 0;
          local_a4 = 0;
          local_98 = 0;
          uStack_90 = 0;
          if (iVar4 == 0) {
            local_c8[0] = 0;
          }
          else {
            uVar12 = *(byte *)(iVar4 + local_88) & 0xf;
            local_c0 = ((longlong)iVar4 - (longlong)(char)(&DAT_180019a00)[uVar12]) + local_88;
            local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_180019a10)[uVar12] & 0x1f);
            local_b8 = local_c0;
            FUN_18000adf0((longlong)local_c8);
          }
          FUN_18000b9c0((longlong)local_c8,0);
          FUN_18000b9c0((longlong)local_c8,local_c8[0] - 1);
          lVar15 = (longlong)local_ac._4_4_;
          if ((local_ac._4_4_ != 0) && (lVar9 = FUN_180007ba0(), lVar9 + lVar15 != 0)) {
            lVar15 = (longlong)local_ac._4_4_;
            if (local_ac._4_4_ != 0) {
              lVar10 = FUN_180007ba0();
              lVar10 = lVar10 + lVar15;
            }
            if (*(char *)(lVar10 + 0x10) != '\0') goto LAB_180009fd6;
          }
          if ((local_ac & 0x40) == 0) {
            plVar11 = FUN_180007380(param_2,param_4,param_5,&local_d0);
            lVar15 = (longlong)local_a4._4_4_;
            lVar10 = FUN_180007ba0();
            FUN_180007790(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar11,lVar10 + lVar15,
                          param_5,iVar6,iVar3,(longlong)local_b0,param_4,0);
          }
        }
LAB_180009fd6:
        pbVar16 = *(byte **)(local_f0 + 8);
        lVar10 = (longlong)(char)(&DAT_180019a00)[*pbVar16 & 0xf];
        bVar1 = (&DAT_180019a10)[*pbVar16 & 0xf];
        pbVar13 = pbVar16 + -lVar10;
        uVar12 = *(uint *)(pbVar13 + -4);
        *(byte **)(local_f0 + 8) = pbVar13;
        *(uint *)(local_f0 + 0x18) = uVar12 >> (bVar1 & 0x1f);
        cVar2 = (&DAT_180019a00)[*pbVar13 & 0xf];
        pbVar14 = pbVar16 + (-lVar10 - (longlong)cVar2);
        *(uint *)(local_f0 + 0x1c) =
             *(uint *)(pbVar14 + -4) >> ((&DAT_180019a10)[*pbVar13 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar14;
        pbVar16 = pbVar16 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_180019a00)[*pbVar14 & 0xf]) -
                            lVar10);
        *(uint *)(local_f0 + 0x20) =
             *(uint *)(pbVar16 + -4) >> ((&DAT_180019a10)[*pbVar14 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar16;
        uVar5 = *(undefined4 *)pbVar16;
        *(byte **)(local_f0 + 8) = pbVar16 + 4;
        local_118 = local_118 + 1;
        *(undefined4 *)(local_f0 + 0x24) = uVar5;
      } while (local_118 < local_d8);
    }
  }
  return;
}



// ===== FUN_18000a0c0 @ 18000a0c0 (size 293) =====

undefined8 FUN_18000a0c0(byte *param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_180007ba0();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_180007ba0();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*param_1 & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_180007ba0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_180007bc0();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_180007ba0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_180007bc0();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*param_1 & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*param_1 & 2) != 0)))) {
    return 1;
  }
  return 0;
}



// ===== FUN_18000a1f0 @ 18000a1f0 (size 298) =====

undefined8 FUN_18000a1f0(longlong param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_180007ba0();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_180007ba0();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*(byte *)(param_1 + 4) & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_180007ba0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_180007bc0();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_180007ba0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_180007bc0();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*(byte *)(param_1 + 4) & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*(byte *)(param_1 + 4) & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*(byte *)(param_1 + 4) & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*(byte *)(param_1 + 4) & 2) != 0)))) {
    return 1;
  }
  return 0;
}



// ===== FUN_18000a320 @ 18000a320 (size 552) =====

undefined8
FUN_18000a320(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  uint uVar1;
  int iVar2;
  PVOID pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  __except_validate_context_record(param_3);
  pvVar3 = FUN_180008400();
  if ((*(int *)((longlong)pvVar3 + 0x40) == 0) && (iVar2 = *param_1, iVar2 != -0x1f928c9d)) {
    if (iVar2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar6 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_18000a379;
      }
    }
    else {
      bVar6 = iVar2 == -0x7fffffda;
LAB_18000a379:
      if (bVar6) goto LAB_18000a393;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((param_5[9] & 1) != 0)) {
      return 1;
    }
  }
LAB_18000a393:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVar1 = param_5[8], uVar1 == 0)) ||
        (lVar4 = FUN_180007ba0(), lVar4 + (int)uVar1 == 0)))) {
      if ((*param_5 & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5[9] & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        ((iVar2 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar2 != 0 &&
         (lVar4 = FUN_180007bc0(), lVar4 + iVar2 != 0)))))) {
      uVar5 = (*(code *)PTR__guard_dispatch_icall_180017328)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar7,(uint)param_8));
      return uVar5;
    }
    FUN_180008f90(param_1,param_2,param_3,param_4,param_5,param_8);
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_18000a42d:
    FUN_180007110(param_2,param_4,(longlong)param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVar2 = FUN_1800088e0((longlong)param_5,(longlong)param_4,param_4[4]);
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_18000b040(param_2,param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_18000a42d;
    iVar2 = param_1[0xe];
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_18000b040(*(longlong **)(param_1 + 10),param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_18000a550 @ 18000a550 (size 600) =====

undefined8
FUN_18000a550(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,byte *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  int iVar1;
  PVOID pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar8;
  uint local_68 [14];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  __except_validate_context_record(param_3);
  pvVar2 = FUN_180008400();
  if ((*(int *)((longlong)pvVar2 + 0x40) == 0) && (iVar1 = *param_1, iVar1 != -0x1f928c9d)) {
    if (iVar1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar7 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_18000a5ac;
      }
    }
    else {
      bVar7 = iVar1 == -0x7fffffda;
LAB_18000a5ac:
      if (bVar7) goto LAB_18000a5b7;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_18000a5b7:
  if ((param_1[1] & 0x66U) == 0) {
    FUN_18000a820(local_68,(longlong)param_5,param_4[1]);
    if ((local_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         ((((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)) &&
          (lVar3 = FUN_180007bc0(), lVar3 + iVar1 != 0)))) {
        uVar4 = (*(code *)PTR__guard_dispatch_icall_180017328)
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           CONCAT44(uVar8,(uint)param_8));
        return uVar4;
      }
      FUN_180009540(param_1,param_2,param_3,param_4,param_5,param_8);
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pbVar6 = (byte *)(param_4[1] + (longlong)*(int *)(param_5 + 8)), uVar5 = *pbVar6 & 0xf,
           *(uint *)(pbVar6 + (-4 - (longlong)(char)(&DAT_180019a00)[uVar5])) >>
           ((&DAT_180019a10)[uVar5] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVar1 = FUN_180008950((longlong)param_5,(longlong)param_4,param_4[4]);
        if ((-2 < iVar1) &&
           (uVar5 = FUN_18000b640((longlong)param_4,(longlong)param_5), iVar1 < (int)uVar5)) {
          FUN_18000b1f0(param_2,param_4,(longlong)param_5,iVar1);
          return 1;
        }
LAB_18000a7a3:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*param_1 == -0x7fffffd7) {
        iVar1 = param_1[0xe];
        if ((-2 < iVar1) &&
           (uVar5 = FUN_18000b640((longlong)param_4,(longlong)param_5), iVar1 < (int)uVar5)) {
          FUN_18000b1f0(*(longlong **)(param_1 + 10),param_4,(longlong)param_5,iVar1);
          return 1;
        }
        goto LAB_18000a7a3;
      }
    }
    FUN_180007240(param_2,param_4,param_5);
  }
  return 1;
}



// ===== FUN_18000a7b0 @ 18000a7b0 (size 14) =====

void FUN_18000a7b0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,int param_6,undefined8 param_7,byte param_8)

{
  FUN_18000a320(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// ===== FUN_18000a7c0 @ 18000a7c0 (size 76) =====

ulonglong FUN_18000a7c0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                       byte *param_5,int param_6,undefined8 param_7,byte param_8)

{
  ulonglong uVar1;
  PVOID pvVar2;
  
  uVar1 = FUN_18000a550(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pvVar2 = FUN_180008400();
  *(undefined4 *)((longlong)pvVar2 + 0x78) = 0xfffffffe;
  return uVar1 & 0xffffffff;
}



// ===== FUN_18000a820 @ 18000a820 (size 236) =====

uint * FUN_18000a820(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    pbVar3 = (byte *)(param_3 + *(int *)(param_2 + 0xc));
    *(byte **)(param_1 + 2) = pbVar3;
    bVar1 = (&DAT_180019a10)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_180019a00)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    *param_1 = uVar2 >> (bVar1 & 0x1f);
    *(byte **)(param_1 + 4) = pbVar3;
    bVar1 = (&DAT_180019a10)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_180019a00)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    param_1[6] = uVar2 >> (bVar1 & 0x1f);
    pbVar4 = pbVar3 + -(longlong)(char)(&DAT_180019a00)[*pbVar3 & 0xf];
    param_1[7] = *(uint *)(pbVar4 + -4) >> ((&DAT_180019a10)[*pbVar3 & 0xf] & 0x1f);
    *(byte **)(param_1 + 2) = pbVar4;
    puVar5 = (uint *)(pbVar4 + -(longlong)(char)(&DAT_180019a00)[*pbVar4 & 0xf]);
    param_1[8] = puVar5[-1] >> ((&DAT_180019a10)[*pbVar4 & 0xf] & 0x1f);
    *(uint **)(param_1 + 2) = puVar5;
    uVar2 = *puVar5;
    *(uint **)(param_1 + 2) = puVar5 + 1;
    param_1[9] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// ===== FUN_18000a910 @ 18000a910 (size 60) =====

undefined8 * FUN_18000a910(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180008180((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



// ===== FUN_18000a950 @ 18000a950 (size 33) =====

undefined8 * FUN_18000a950(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



// ===== FUN_18000a980 @ 18000a980 (size 404) =====

undefined8 FUN_18000a980(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  PVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48 [2];
  
  pvVar7 = FUN_180008400();
  uVar1 = *(undefined8 *)((longlong)pvVar7 + 0x28);
  pvVar7 = FUN_180008400();
  uVar2 = *(undefined8 *)((longlong)pvVar7 + 0x20);
  piVar3 = *(int **)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_1 + 0x40);
  plVar6 = *(longlong **)(param_1 + 0x28);
  __except_validate_context_record(lVar5);
  pvVar7 = FUN_180008400();
  *(int **)((longlong)pvVar7 + 0x20) = piVar3;
  pvVar7 = FUN_180008400();
  *(longlong *)((longlong)pvVar7 + 0x28) = lVar5;
  pvVar7 = FUN_180008400();
  puVar8 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)((longlong)pvVar7 + 0x20) + 0x28))
  ;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_180008400();
  }
  uVar9 = _CallSettingFrame();
  FUN_180007b40((longlong)puVar8);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (uVar10 = FUN_180007de0(*(longlong *)(piVar3 + 10)), (int)uVar10 != 0)) {
    __DestructExceptionObject(piVar3);
  }
  pvVar7 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar7 + 0x20) = uVar2;
  pvVar7 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar7 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(lVar4 + 0x1c) + *plVar6) = 0xfffffffffffffffe;
  return uVar9;
}



// ===== FUN_18000ab90 @ 18000ab90 (size 481) =====

longlong FUN_18000ab90(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  PVOID pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_60 [5];
  
  pvVar5 = FUN_180008400();
  uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x28);
  pvVar5 = FUN_180008400();
  uVar3 = *(undefined8 *)((longlong)pvVar5 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  lVar7 = *(longlong *)(param_1 + 0x40);
  local_60[0] = *(longlong *)(param_1 + 0x48);
  local_60[1] = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  __except_validate_context_record(lVar7);
  pvVar5 = FUN_180008400();
  *(int **)((longlong)pvVar5 + 0x20) = piVar4;
  pvVar5 = FUN_180008400();
  *(longlong *)((longlong)pvVar5 + 0x28) = lVar7;
  pvVar5 = FUN_180008400();
  puVar6 = _CreateFrameInfo(local_60 + 2,
                            *(undefined8 *)(*(longlong *)((longlong)pvVar5 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_180008400();
  }
  lVar7 = FUN_18000bdc0();
  if ((lVar7 < 2) && (lVar7 = local_60[lVar7], lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_18000bdf0();
  FUN_180007b40((longlong)puVar6);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) && (piVar4[8] + 0xe66cfae0U < 3)) &&
     (uVar8 = FUN_180007de0(*(longlong *)(piVar4 + 10)), (int)uVar8 != 0)) {
    __DestructExceptionObject(piVar4);
  }
  pvVar5 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar5 + 0x20) = uVar3;
  pvVar5 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar5 + 0x28) = uVar2;
  pvVar5 = FUN_180008400();
  *(undefined4 *)((longlong)pvVar5 + 0x78) = uVar1;
  pvVar5 = FUN_180008400();
  *(undefined4 *)((longlong)pvVar5 + 0x78) = 0xfffffffe;
  return lVar7;
}



// ===== FUN_18000adf0 @ 18000adf0 (size 400) =====

void FUN_18000adf0(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  bVar1 = **(byte **)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 8) + 1;
  *(byte *)(param_1 + 0x18) = bVar1;
  *(byte **)(param_1 + 8) = pbVar6;
  if ((bVar1 & 1) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180019a00)[bVar5 & 0xf];
    *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar6 + -4) >> ((&DAT_180019a10)[bVar5 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar6;
  }
  if ((bVar1 & 2) != 0) {
    uVar2 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    *(byte **)(param_1 + 8) = pbVar6;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  if ((bVar1 & 4) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180019a00)[bVar5 & 0xf];
    *(uint *)(param_1 + 0x24) = *(uint *)(pbVar6 + -4) >> ((&DAT_180019a10)[bVar5 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar6;
  }
  pbVar7 = pbVar6 + 4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar6;
  bVar5 = bVar1 & 0x30;
  *(byte **)(param_1 + 8) = pbVar7;
  if ((bVar1 & 8) == 0) {
    if (bVar5 == 0x10) {
      bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(((longlong)pbVar7 - (longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar7 - (longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf];
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      return;
    }
    if (bVar5 == 0x20) {
      bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      bVar1 = (&DAT_180019a10)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(((longlong)pbVar7 - (longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar7 - (longlong)(char)(&DAT_180019a00)[*pbVar7 & 0xf];
      *(ulonglong *)(param_1 + 0x38) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
    }
  }
  else {
    if (bVar5 == 0x10) {
      iVar3 = *(int *)pbVar7;
      *(byte **)(param_1 + 8) = pbVar6 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      return;
    }
    if (bVar5 == 0x20) {
      iVar3 = *(int *)pbVar7;
      *(byte **)(param_1 + 8) = pbVar6 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      iVar3 = *(int *)(pbVar6 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 0xc;
      *(longlong *)(param_1 + 0x38) = (longlong)iVar3;
      return;
    }
  }
  return;
}



// ===== FUN_18000af80 @ 18000af80 (size 141) =====

undefined8 FUN_18000af80(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  PVOID pvVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      pvVar2 = FUN_180008400();
      *(undefined4 *)((longlong)pvVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}



// ===== ExFilterRethrowFH4 @ 18000b010 (size 48) =====

/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  uVar1 = FUN_18000af80(&param_1->ExceptionRecord,(longlong)param_2,param_4);
  if ((int)uVar1 == 0) {
    pvVar2 = FUN_180008400();
    *(int *)((longlong)pvVar2 + 0x78) = param_3;
  }
  return (int)uVar1;
}



// ===== FUN_18000b040 @ 18000b040 (size 380) =====

void FUN_18000b040(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = FUN_180007ba0();
  iVar2 = FUN_180008660(param_1,param_2,param_3);
  pvVar4 = FUN_180008400();
  *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = FUN_180007ba0();
    lVar6 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar6 + lVar5);
    iVar1 = *(int *)(param_3 + 8);
    lVar5 = FUN_180007ba0();
    if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar5 = FUN_180007ba0();
      iVar1 = *(int *)(lVar5 + iVar1 + 4 + lVar6);
      lVar5 = FUN_180007ba0();
      if (lVar5 + iVar1 != 0) {
        FUN_180008720(param_1,param_2,param_3,iVar2);
        iVar1 = *(int *)(param_3 + 8);
        lVar5 = FUN_180007ba0();
        if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
          FUN_180007ba0();
          FUN_180007ba0();
        }
        _CallSettingFrame();
        FUN_180007be0(uVar3);
      }
    }
  }
  pvVar4 = FUN_180008400();
  if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
    pvVar4 = FUN_180008400();
    *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_180008720(param_1,param_2,param_3,iVar2);
  return;
}



// ===== FUN_18000b1f0 @ 18000b1f0 (size 928) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000b1f0(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  PVOID pvVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  int iVar13;
  byte *pbVar14;
  undefined1 auStackY_138 [32];
  uint *local_f8;
  byte *pbStack_f0;
  uint local_e8;
  ulonglong *local_e0;
  int local_d8;
  uint *local_d0;
  byte *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  byte *local_90;
  uint *local_88;
  byte *local_80;
  uint *local_78;
  byte *pbStack_70;
  uint local_68 [2];
  byte *local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180025040 ^ (ulonglong)auStackY_138;
  local_e0 = param_2;
  local_d8 = param_4;
  local_b8 = param_1;
  local_a0 = param_1;
  local_98 = param_2;
  uVar6 = FUN_180007ba0();
  local_c0 = uVar6;
  iVar5 = FUN_18000b5d0(param_1,param_2,param_3);
  pvVar7 = FUN_180008400();
  *(int *)((longlong)pvVar7 + 0x30) = *(int *)((longlong)pvVar7 + 0x30) + 1;
  local_60 = (byte *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    local_68[0] = 0;
  }
  else {
    local_60 = (byte *)(param_2[1] + (longlong)*(int *)(param_3 + 8));
    uVar8 = *local_60 & 0xf;
    local_60 = local_60 + -(longlong)(char)(&DAT_180019a00)[uVar8];
    local_68[0] = *(uint *)(local_60 + -4) >> ((&DAT_180019a10)[uVar8] & 0x1f);
  }
  local_f8 = local_68;
  local_88 = local_68;
  pbVar9 = local_60 + -1;
  bVar2 = false;
  bVar3 = false;
  iVar13 = 0;
  pbVar11 = local_60;
  local_90 = pbVar9;
  pbStack_f0 = pbVar9;
  local_b0 = param_1;
  local_a8 = uVar6;
  local_80 = pbVar9;
  pbVar14 = pbVar9;
  if (0 < (int)local_68[0]) {
    do {
      if (iVar13 == iVar5) {
        bVar2 = true;
        pbVar9 = pbVar11;
      }
      if (iVar13 == param_4) {
        bVar3 = true;
        local_90 = pbVar11;
      }
      pbStack_f0 = pbVar9;
      local_80 = local_90;
      param_2 = local_e0;
      pbVar14 = local_90;
      if ((bVar2) && (bVar3)) break;
      pbVar10 = pbVar11 + -(longlong)(char)(&DAT_180019a00)[*pbVar11 & 0xf];
      uVar8 = *(uint *)(pbVar10 + -4) >> ((&DAT_180019a10)[*pbVar11 & 0xf] & 0x1f);
      local_58 = CONCAT44(uVar8,uVar8 >> 2) & 0x3ffffffff;
      if ((uVar8 & 3) - 1 < 2) {
        pbVar11 = pbVar10 + (4 - (longlong)(char)(&DAT_180019a00)[pbVar10[4] & 0xf]);
        uStack_50 = CONCAT44(*(uint *)(pbVar11 + -4) >> ((&DAT_180019a10)[pbVar10[4] & 0xf] & 0x1f),
                             *(undefined4 *)pbVar10);
      }
      else {
        pbVar11 = pbVar10;
        if ((uVar8 & 3) == 3) {
          pbVar11 = pbVar10 + 4;
          uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)pbVar10);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)local_68[0]);
  }
  while ((local_d0 = local_68, local_c8 = local_60, local_60 <= pbVar9 && (pbVar14 < pbVar9))) {
    FUN_18000b820((longlong)local_f8,(longlong *)&pbStack_f0);
    puVar4 = local_f8;
    uVar8 = local_f8[5];
    uVar1 = local_f8[6];
    local_e0 = (ulonglong *)CONCAT44(local_e0._4_4_,local_f8[7]);
    local_78 = local_f8;
    pbStack_f0 = pbVar9;
    pbStack_70 = pbVar9;
    FUN_18000b820((longlong)local_f8,(longlong *)&pbStack_f0);
    pbVar9 = pbVar9 + -(ulonglong)puVar4[4];
    pbStack_f0 = pbVar9;
    iVar5 = FUN_18000b8e0((longlong *)&local_88,param_4,(longlong)&local_78,iVar5,
                          (longlong *)&local_f8);
    local_d0 = (uint *)CONCAT44(local_d0._4_4_,iVar5);
    local_e8 = 0;
    if (uVar8 != 0) {
      local_e8 = uVar1;
    }
    if (local_e8 != 0) {
      *(int *)(param_2 + 9) = iVar5 + 2;
      if (uVar8 - 1 < 2) {
        puVar12 = (undefined8 *)(((ulonglong)local_e0 & 0xffffffff) + *local_b0);
        if (uVar8 == 2) {
          puVar12 = (undefined8 *)*puVar12;
        }
        _CallSettingFrameEncoded(param_2[1] + (longlong)(int)local_e8,*local_b0,puVar12);
      }
      else {
        _CallSettingFrame();
      }
      FUN_180007be0(local_c0);
    }
  }
  pvVar7 = FUN_180008400();
  if (0 < *(int *)((longlong)pvVar7 + 0x30)) {
    pvVar7 = FUN_180008400();
    *(int *)((longlong)pvVar7 + 0x30) = *(int *)((longlong)pvVar7 + 0x30) + -1;
  }
  return;
}



// ===== FUN_18000b5d0 @ 18000b5d0 (size 108) =====

int FUN_18000b5d0(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  PVOID pvVar2;
  
  iVar1 = FUN_1800087e0(param_3,param_2);
  if ((int)param_2[9] == 0) {
    pvVar2 = FUN_180008400();
    if (*(int *)((longlong)pvVar2 + 0x78) != -2) {
      pvVar2 = FUN_180008400();
      iVar1 = *(int *)((longlong)pvVar2 + 0x78);
      pvVar2 = FUN_180008400();
      *(undefined4 *)((longlong)pvVar2 + 0x78) = 0xfffffffe;
    }
    return iVar1;
  }
  pvVar2 = FUN_180008400();
  if (*(int *)((longlong)pvVar2 + 0x78) == -2) {
    return (int)param_2[9] + -2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_18000b640 @ 18000b640 (size 59) =====

uint FUN_18000b640(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_2 + 8));
    uVar1 = *pbVar2 & 0xf;
    return *(uint *)(pbVar2 + (-4 - (longlong)(char)(&DAT_180019a00)[uVar1])) >>
           ((&DAT_180019a10)[uVar1] & 0x1f);
  }
  return 0;
}



// ===== FUN_18000b680 @ 18000b680 (size 264) =====

undefined1 FUN_18000b680(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  undefined1 local_res10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = 0;
  iVar10 = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    do {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_180007bc0();
      piVar9 = (int *)((longlong)iVar7 + lVar4 + 4);
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_180007bc0();
      iVar7 = *(int *)(lVar4 + iVar7);
      if (0 < iVar7) {
        do {
          iVar1 = *piVar9;
          lVar4 = FUN_180007bc0();
          puVar3 = *(uint **)(param_1 + 0x30);
          iVar2 = param_2[1];
          lVar5 = FUN_180007ba0();
          uVar6 = FUN_18000a0c0((byte *)(lVar5 + (longlong)iVar10 * 0x14 + (longlong)iVar2),
                                (byte *)(iVar1 + lVar4),puVar3);
          if ((int)uVar6 != 0) {
            local_res10 = 1;
            uVar8 = 1;
            break;
          }
          iVar7 = iVar7 + -1;
          piVar9 = piVar9 + 1;
          uVar8 = local_res10;
        } while (0 < iVar7);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *param_2);
  }
  return uVar8;
}



// ===== FUN_18000b790 @ 18000b790 (size 129) =====

ulonglong FUN_18000b790(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined4 extraout_var;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar3 = FUN_180007ba0();
      if (*(int *)(lVar3 + iVar1 + 4 + (longlong)iVar4 * 0x14) == 0) {
        lVar3 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar3 = FUN_180007ba0();
        iVar1 = *(int *)(lVar3 + (longlong)iVar4 * 0x14 + 4 + (longlong)iVar1);
        lVar3 = FUN_180007ba0();
        lVar3 = lVar3 + iVar1;
      }
      uVar2 = FUN_180008310(lVar3 + 8,0x180025ba0);
      in_RAX = CONCAT44(extraout_var,uVar2);
      if (uVar2 == 0) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// ===== FUN_18000b820 @ 18000b820 (size 158) =====

void FUN_18000b820(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar3 = *(byte *)*param_2 & 0xf;
  lVar5 = *param_2 - (longlong)(char)(&DAT_180019a00)[uVar3];
  uVar3 = *(uint *)(lVar5 + -4) >> ((&DAT_180019a10)[uVar3] & 0x1f);
  *param_2 = lVar5;
  uVar4 = uVar3 & 3;
  *(uint *)(param_1 + 0x10) = uVar3 >> 2;
  *(uint *)(param_1 + 0x14) = uVar4;
  if (uVar4 - 1 < 2) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar3 = *(byte *)*param_2 & 0xf;
    bVar1 = (&DAT_180019a10)[uVar3];
    lVar5 = *param_2 - (longlong)(char)(&DAT_180019a00)[uVar3];
    uVar3 = *(uint *)(lVar5 + -4);
    *param_2 = lVar5;
    *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  }
  else if (uVar4 == 3) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}



// ===== FUN_18000b8c0 @ 18000b8c0 (size 9) =====

void FUN_18000b8c0(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00018000b8c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}



// ===== FUN_18000b8d0 @ 18000b8d0 (size 15) =====

void FUN_18000b8d0(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3,
                  undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00018000b8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}



// ===== FUN_18000b8e0 @ 18000b8e0 (size 216) =====

int FUN_18000b8e0(longlong *param_1,int param_2,longlong param_3,int param_4,longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_10;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  uVar2 = param_5[1];
  if ((uVar2 <= uVar1) && (local_10 = param_1[1], local_10 <= uVar2)) {
    if ((longlong)(uVar2 - local_10) < (longlong)(uVar1 - uVar2)) {
      lVar3 = *param_1;
      if (local_10 < uVar2) {
        do {
          FUN_18000b820(lVar3,(longlong *)&local_10);
          param_2 = param_2 + 1;
        } while (local_10 < (ulonglong)param_5[1]);
      }
    }
    else {
      lVar3 = *param_5;
      param_2 = param_4;
      local_10 = uVar2;
      if (uVar2 < uVar1) {
        do {
          FUN_18000b820(lVar3,(longlong *)&local_10);
          param_2 = param_4 + -1;
          param_4 = param_2;
        } while (local_10 < *(ulonglong *)(param_3 + 8));
      }
    }
    return param_2;
  }
  return -1;
}



// ===== FUN_18000b9c0 @ 18000b9c0 (size 485) =====

void FUN_18000b9c0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  FUN_18000adf0(param_1);
  uVar10 = 0;
  if (param_2 != 0) {
    do {
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      bVar2 = **(byte **)(param_1 + 8);
      pbVar9 = *(byte **)(param_1 + 8) + 1;
      *(byte *)(param_1 + 0x18) = bVar2;
      *(byte **)(param_1 + 8) = pbVar9;
      if ((bVar2 & 1) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(longlong)(char)(&DAT_180019a00)[bVar7 & 0xf];
        *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar9 + -4) >> ((&DAT_180019a10)[bVar7 & 0xf] & 0x1f)
        ;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      if ((bVar2 & 2) != 0) {
        uVar4 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        *(byte **)(param_1 + 8) = pbVar9;
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      if ((bVar2 & 4) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(longlong)(char)(&DAT_180019a00)[bVar7 & 0xf];
        *(uint *)(param_1 + 0x24) = *(uint *)(pbVar9 + -4) >> ((&DAT_180019a10)[bVar7 & 0xf] & 0x1f)
        ;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      pbVar1 = pbVar9 + 4;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar9;
      bVar7 = bVar2 & 0x30;
      *(byte **)(param_1 + 8) = pbVar1;
      if ((bVar2 & 8) == 0) {
        if (bVar7 == 0x10) {
          bVar2 = (&DAT_180019a10)[*pbVar1 & 0xf];
          uVar6 = *(uint *)(((longlong)pbVar1 - (longlong)(char)(&DAT_180019a00)[*pbVar1 & 0xf]) +
                           -4);
          *(longlong *)(param_1 + 8) =
               (longlong)pbVar1 - (longlong)(char)(&DAT_180019a00)[*pbVar1 & 0xf];
          *(ulonglong *)(param_1 + 0x30) =
               (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
        }
        else if (bVar7 == 0x20) {
          cVar3 = (&DAT_180019a00)[*pbVar1 & 0xf];
          bVar2 = (&DAT_180019a10)[*pbVar1 & 0xf];
          pbVar9 = pbVar1 + -(longlong)cVar3;
          uVar6 = *(uint *)(pbVar9 + -4);
          *(byte **)(param_1 + 8) = pbVar9;
          *(ulonglong *)(param_1 + 0x30) =
               (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          bVar2 = (&DAT_180019a10)[*pbVar9 & 0xf];
          uVar6 = *(uint *)(pbVar1 + (-(longlong)cVar3 -
                                     (longlong)(char)(&DAT_180019a00)[*pbVar9 & 0xf]) + -4);
          *(byte **)(param_1 + 8) =
               pbVar1 + (-(longlong)cVar3 - (longlong)(char)(&DAT_180019a00)[*pbVar9 & 0xf]);
          uVar8 = (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          goto LAB_18000bb80;
        }
      }
      else if (bVar7 == 0x10) {
        iVar5 = *(int *)pbVar1;
        *(byte **)(param_1 + 8) = pbVar9 + 8;
        *(longlong *)(param_1 + 0x30) = (longlong)iVar5;
      }
      else if (bVar7 == 0x20) {
        iVar5 = *(int *)pbVar1;
        *(byte **)(param_1 + 8) = pbVar9 + 8;
        *(longlong *)(param_1 + 0x30) = (longlong)iVar5;
        uVar8 = (ulonglong)*(int *)(pbVar9 + 8);
        *(byte **)(param_1 + 8) = pbVar9 + 0xc;
LAB_18000bb80:
        *(ulonglong *)(param_1 + 0x38) = uVar8;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
  }
  return;
}



// ===== FUN_18000bbb0 @ 18000bbb0 (size 135) =====

undefined4 FUN_18000bbb0(void)

{
  BOOL BVar1;
  uint extraout_EAX;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180025de0 + uVar4 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar4 = (ulonglong)DAT_180025e08;
      uVar2 = 0;
      uVar3 = DAT_180025e08;
      while (uVar3 != 0) {
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulonglong)uVar3;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180025de0 + uVar4 * 0x28));
        DAT_180025e08 = DAT_180025e08 - 1;
        uVar2 = extraout_EAX;
      }
      return uVar2 & 0xffffff00;
    }
    DAT_180025e08 = DAT_180025e08 + 1;
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}



// ===== FUN_18000bc40 @ 18000bc40 (size 71) =====

undefined1 FUN_18000bc40(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_180025e08;
  uVar1 = DAT_180025e08;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180025de0 + uVar2 * 0x28));
    DAT_180025e08 = DAT_180025e08 - 1;
  }
  return 1;
}



// ===== FUN_18000bcc0 @ 18000bcc0 (size 27) =====

void FUN_18000bcc0(void)

{
  FUN_18000bce0();
  return;
}



// ===== FUN_18000bce0 @ 18000bce0 (size 1) =====

void FUN_18000bce0(void)

{
  return;
}



// ===== FUN_18000bcf0 @ 18000bcf0 (size 1) =====

void FUN_18000bcf0(void)

{
  return;
}



// ===== __except_validate_context_record @ 18000bd00 (size 55) =====

/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_180017318 != _guard_check_icall) {
    if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < *(ulonglong *)(param_1 + 0x98))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}



// ===== _CallSettingFrame @ 18000bd80 (size 64) =====

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18000bcc0();
  (*pcVar1)();
  FUN_18000bcf0();
  FUN_18000bcc0();
  return;
}



// ===== FUN_18000bdc0 @ 18000bdc0 (size 42) =====

void FUN_18000bdc0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18000bcc0();
  (*pcVar1)();
  FUN_18000bcf0();
  return;
}



// ===== FUN_18000bdf0 @ 18000bdf0 (size 38) =====

void FUN_18000bdf0(void)

{
  FUN_18000bcc0();
  return;
}



// ===== _CallSettingFrameEncoded @ 18000be20 (size 71) =====

/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _CallSettingFrameEncoded(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18000bcc0();
  (*pcVar1)(param_3);
  FUN_18000bcf0();
  FUN_18000bcc0();
  return;
}



// ===== FUN_18000be70 @ 18000be70 (size 181) =====

longlong * FUN_18000be70(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 3) = 0;
  puVar2 = PTR_DAT_180025240;
  if (param_2 != (longlong *)0x0) {
    lVar3 = param_2[1];
    param_1[1] = *param_2;
    param_1[2] = lVar3;
    return param_1;
  }
  if (DAT_180025fa4 == 0) {
    param_1[1] = (longlong)PTR_PTR_180025238;
    param_1[2] = (longlong)puVar2;
    return param_1;
  }
  lVar3 = FUN_18000de10();
  *param_1 = lVar3;
  param_1[1] = *(longlong *)(lVar3 + 0x90);
  param_1[2] = *(longlong *)(lVar3 + 0x88);
  __acrt_update_locale_info(lVar3,param_1 + 1);
  FUN_18000e030(*param_1,param_1 + 2);
  uVar1 = *(uint *)(*param_1 + 0x3a8);
  if ((uVar1 & 2) == 0) {
    *(uint *)(*param_1 + 0x3a8) = uVar1 | 2;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



// ===== FUN_18000bf30 @ 18000bf30 (size 40) =====

undefined8 FUN_18000bf30(longlong param_1,longlong param_2)

{
  __acrt_ptd *p_Var1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_18000d7c4();
  }
  return 0x7fffffff;
}



// ===== FUN_18000bf60 @ 18000bf60 (size 106) =====

void FUN_18000bf60(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_180025fa4 != 0) {
    FUN_18000bfd0(param_1,param_2,(undefined8 *)0x0);
    return;
  }
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      param_1 = param_1 + 1;
      bVar2 = *param_2;
      uVar4 = (uint)bVar2;
      param_2 = param_2 + 1;
      if ((uint)bVar1 != (uint)bVar2) {
        uVar3 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar3 = (uint)bVar1;
        }
        if (bVar2 - 0x41 < 0x1a) {
          uVar4 = bVar2 + 0x20;
        }
      }
      if (uVar3 != uVar4) break;
      if (uVar3 == 0) {
        return;
      }
    }
    return;
  }
  FUN_18000bf30((longlong)param_1,(longlong)param_2);
  return;
}



// ===== FUN_18000bfd0 @ 18000bfd0 (size 287) =====

int FUN_18000bfd0(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  longlong local_28;
  undefined *local_20;
  longlong lStack_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    p_Var3 = FUN_18000d96c();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_18000d7c4();
    return 0x7fffffff;
  }
  local_10 = '\0';
  if (param_3 == (undefined8 *)0x0) {
    if (DAT_180025fa4 == 0) {
      local_20 = PTR_PTR_180025238;
      local_10 = '\0';
    }
    else {
      local_28 = FUN_18000de10();
      local_20 = *(undefined **)(local_28 + 0x90);
      lStack_18 = *(longlong *)(local_28 + 0x88);
      __acrt_update_locale_info(local_28,(longlong *)&local_20);
      FUN_18000e030(local_28,&lStack_18);
      if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = (undefined *)*param_3;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if (iVar2 != 0) break;
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}



// ===== FUN_18000c0f0 @ 18000c0f0 (size 51) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_18000c0f0(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_18000c140();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



// ===== FUN_18000c130 @ 18000c130 (size 8) =====

void FUN_18000c130(undefined8 param_1)

{
  DAT_180025e18 = param_1;
  return;
}



// ===== FUN_18000c140 @ 18000c140 (size 55) =====

ulonglong FUN_18000c140(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_180025040 & 0x3f;
  uVar2 = DAT_180025e18 ^ DAT_180025040;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



// ===== _set_new_handler @ 18000c180 (size 89) =====

/* Library Function - Single Match
    _set_new_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  __acrt_lock(0);
  bVar2 = (byte)DAT_180025040 & 0x3f;
  uVar3 = DAT_180025040 ^ DAT_180025e18;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_180025e18 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_180025040;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}



// ===== FUN_18000c1f8 @ 18000c1f8 (size 19) =====

undefined4 FUN_18000c1f8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_18000c20c(-0x1f928c9d,param_2);
  return uVar1;
}



// ===== FUN_18000c20c @ 18000c20c (size 363) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_18000c20c(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  __acrt_ptd *p_Var5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  p_Var5 = FUN_18000de70();
  if (p_Var5 != (__acrt_ptd *)0x0) {
    piVar2 = *(int **)p_Var5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)0x5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
          uVar4 = *(undefined8 *)(p_Var5 + 8);
          *(undefined8 *)(p_Var5 + 8) = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(p_Var5 + 0x10);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_18000c34a:
              *(undefined4 *)(p_Var5 + 0x10) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_18000c34a;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_18000c34a;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_18000c34a;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_18000c34a;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_18000c34a;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_18000c34a;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_18000c34a;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_18000c34a;
              }
            }
            (*pcVar3)(8,uVar8);
            *(undefined4 *)(p_Var5 + 0x10) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          *(undefined8 *)(p_Var5 + 8) = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}



// ===== operator()<> @ 18000c378 (size 56) =====

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  FUN_18000c3b0(param_3);
  __acrt_unlock(*param_4);
  return;
}



// ===== FUN_18000c3b0 @ 18000c3b0 (size 186) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000c3b0(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_180025e30 != '\0') {
    return;
  }
  LOCK();
  DAT_180025e20 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_180025e28 != DAT_180025040) {
      bVar1 = (byte)DAT_180025040 & 0x3f;
      (*(code *)((DAT_180025040 ^ DAT_180025e28) >> bVar1 |
                (DAT_180025040 ^ DAT_180025e28) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_180025f68;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_18000c41f;
    puVar2 = &DAT_180025f80;
  }
  FUN_18000cf54(puVar2);
LAB_18000c41f:
  if (*(int *)*param_1 == 0) {
    FUN_18000d1c8((undefined8 *)&DAT_180017398,(undefined8 *)&DAT_1800173b8);
  }
  FUN_18000d1c8((undefined8 *)&DAT_1800173c0,(undefined8 *)&DAT_1800173c8);
  if (*(int *)param_1[1] == 0) {
    DAT_180025e30 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}



// ===== FUN_18000c470 @ 18000c470 (size 227) =====

void FUN_18000c470(uint param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  HMODULE pHVar4;
  undefined7 extraout_var;
  int *piVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34 [3];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar4 != (HMODULE)0x0) && ((short)pHVar4->unused == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)&pHVar4->unused + (longlong)pHVar4[0xf].unused),
        *piVar5 == 0x4550)) &&
       ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_18000c584(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34[0] = 2;
  local_34[1] = 2;
  operator()<>(local_38,local_34 + 1,&local_20,local_34);
  if (local_res18[0] == 0) {
    bVar2 = FUN_18000e294();
    if ((int)CONCAT71(extraout_var,bVar2) == 1) {
      bVar2 = false;
    }
    else {
      uVar3 = FUN_18000e260();
      bVar2 = (char)uVar3 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_18000c554(param_1,bVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



// ===== FUN_18000c554 @ 18000c554 (size 44) =====

void FUN_18000c554(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_18000c584(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



// ===== FUN_18000c584 @ 18000c584 (size 100) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000c584(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) &&
     (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*pFVar2)((ulonglong)param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}



// ===== FUN_18000c5e8 @ 18000c5e8 (size 8) =====

void FUN_18000c5e8(undefined8 param_1)

{
  DAT_180025e28 = param_1;
  return;
}



// ===== FUN_18000c5f0 @ 18000c5f0 (size 13) =====

void FUN_18000c5f0(void)

{
  FUN_18000c470(0,0,1);
  return;
}



// ===== FUN_18000c600 @ 18000c600 (size 12) =====

void FUN_18000c600(uint param_1)

{
  FUN_18000c470(param_1,2,0);
  return;
}



// ===== FUN_18000c60c @ 18000c60c (size 8) =====

undefined4 FUN_18000c60c(void)

{
  return DAT_180025e20;
}



// ===== FUN_18000c614 @ 18000c614 (size 445) =====

void FUN_18000c614(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar2 = !bVar2;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = FUN_18000fc30((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_18000c6c6;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_18000c6c6:
  bVar2 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar2 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar1) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = FUN_18000fc30((int)*pcVar6);
        if (iVar5 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// ===== __acrt_allocate_buffer_for_argv @ 18000c7d4 (size 93) =====

/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_18000e350((LPVOID)0x0);
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}



// ===== FUN_18000c834 @ 18000c834 (size 381) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18000c834(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  __acrt_ptd *p_Var3;
  longlong *plVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    p_Var3 = FUN_18000d96c();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_18000d7c4();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_18000ef4c((HMODULE)0x0,&DAT_180025e40,0x104);
  _DAT_180026230 = &DAT_180025e40;
  if ((DAT_180026250 == (char *)0x0) || (pcVar6 = DAT_180026250, *DAT_180026250 == '\0')) {
    pcVar6 = &DAT_180025e40;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_18000c614(pcVar6,(undefined8 *)0x0,(char *)0x0,(longlong *)&local_res18,
                (longlong *)&local_res20);
  uVar5 = local_res18;
  plVar4 = __acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar4 == (longlong *)0x0) {
    p_Var3 = FUN_18000d96c();
    uVar7 = 0xc;
    *(undefined4 *)p_Var3 = 0xc;
  }
  else {
    FUN_18000c614(pcVar6,plVar4,(char *)(plVar4 + uVar5),(longlong *)&local_res18,
                  (longlong *)&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      uVar5 = thunk_FUN_18000e708(plVar4,&local_res10);
      plVar2 = local_res10;
      if ((int)uVar5 != 0) {
        FUN_18000e350(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_18000e350(plVar4);
        return uVar5 & 0xffffffff;
      }
      _DAT_180026238 = 0;
      lVar1 = *local_res10;
      uVar5 = uVar7;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        uVar5 = uVar5 + 1;
        _DAT_180026238 = (int)uVar5;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_180026240 = plVar2;
      FUN_18000e350((LPVOID)0x0);
      local_res10 = (longlong *)0x0;
      goto LAB_18000c999;
    }
    _DAT_180026238 = (int)local_res18 + -1;
    DAT_180026240 = plVar4;
  }
  plVar4 = (longlong *)0x0;
LAB_18000c999:
  FUN_18000e350(plVar4);
  return uVar7;
}



// ===== FUN_18000c9b4 @ 18000c9b4 (size 115) =====

undefined8 FUN_18000c9b4(void)

{
  undefined8 *puVar1;
  LPSTR pCVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_180025f48 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pCVar2 = FUN_18000fddc();
    if (pCVar2 == (LPSTR)0x0) {
      FUN_18000e350((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_18000ca28(pCVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_180025f48;
        puVar1 = DAT_180025f60;
      }
      DAT_180025f60 = puVar1;
      DAT_180025f48 = puVar4;
      FUN_18000e350((LPVOID)0x0);
      FUN_18000e350(pCVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_18000ca28 @ 18000ca28 (size 273) =====

undefined8 * FUN_18000ca28(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  cVar6 = *param_1;
  lVar7 = 0;
  pcVar4 = param_1;
  while (cVar6 != '\0') {
    lVar1 = lVar7 + 1;
    if (cVar6 == '=') {
      lVar1 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar2 = lVar7;
      lVar7 = lVar2 + 1;
    } while (pcVar4[lVar7] != '\0');
    pcVar4 = pcVar4 + lVar2 + 2;
    lVar7 = lVar1;
    cVar6 = *pcVar4;
  }
  puVar3 = _calloc_base(lVar7 + 1,8);
  puVar9 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
LAB_18000ca8b:
    FUN_18000e350((LPVOID)0x0);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + uVar8) {
      lVar7 = -1;
      do {
        lVar1 = lVar7;
        lVar7 = lVar1 + 1;
      } while (param_1[lVar7] != '\0');
      uVar8 = lVar1 + 2;
      if (*param_1 != '=') {
        pcVar4 = _calloc_base(uVar8,1);
        if (pcVar4 == (char *)0x0) {
          free_environment<>(puVar3);
          FUN_18000e350((LPVOID)0x0);
          goto LAB_18000ca8b;
        }
        uVar5 = FUN_18000d2c0(pcVar4,uVar8,(longlong)param_1);
        if ((int)uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar9 = pcVar4;
        puVar9 = puVar9 + 1;
        FUN_18000e350((LPVOID)0x0);
      }
    }
    FUN_18000e350((LPVOID)0x0);
  }
  return puVar3;
}



// ===== free_environment<> @ 18000cb3c (size 65) =====

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_18000e350(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_18000e350(param_1);
  }
  return;
}



// ===== uninitialize_environment_internal<> @ 18000cb80 (size 26) =====

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_180025f60) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}



// ===== uninitialize_environment_internal<> @ 18000cb9c (size 26) =====

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_180025f58) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}



// ===== FUN_18000cbb8 @ 18000cbb8 (size 67) =====

void FUN_18000cbb8(void)

{
  uninitialize_environment_internal<>(&DAT_180025f48);
  uninitialize_environment_internal<>((undefined8 *)&DAT_180025f50);
  free_environment<>(DAT_180025f60);
  free_environment<>(DAT_180025f58);
  return;
}



// ===== operator()<> @ 18000cc04 (size 59) =====

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_18000cc7c(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}



// ===== operator()<> @ 18000cc40 (size 59) =====

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
   __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
   <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
   <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
   <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_18000ce2c(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}



// ===== FUN_18000cc7c @ 18000cc7c (size 430) =====

undefined8 FUN_18000cc7c(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4 == (ulonglong *)0x0) {
LAB_18000ce0e:
    uVar2 = 0xffffffff;
  }
  else {
    bVar3 = (byte)DAT_180025040 & 0x3f;
    pvVar6 = (LPVOID)((DAT_180025040 ^ *puVar4) >> bVar3 | (DAT_180025040 ^ *puVar4) << 0x40 - bVar3
                     );
    puVar10 = (ulonglong *)
              ((DAT_180025040 ^ puVar4[1]) >> bVar3 | (DAT_180025040 ^ puVar4[1]) << 0x40 - bVar3);
    puVar4 = (ulonglong *)
             ((DAT_180025040 ^ puVar4[2]) >> bVar3 | (DAT_180025040 ^ puVar4[2]) << 0x40 - bVar3);
    if (puVar10 == puVar4) {
      uVar5 = (longlong)puVar4 - (longlong)pvVar6 >> 3;
      uVar7 = uVar5;
      if (0x200 < uVar5) {
        uVar7 = 0x200;
      }
      uVar8 = uVar7 + uVar5;
      if (uVar7 + uVar5 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar5) {
LAB_18000cd1e:
        uVar8 = uVar5 + 4;
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_18000e350((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_18000ce0e;
      }
      else {
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_18000e350((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_18000cd1e;
      }
      pvVar6 = pvVar1;
      uVar7 = DAT_180025040;
      puVar10 = (ulonglong *)((longlong)pvVar6 + uVar5 * 8);
      puVar4 = (ulonglong *)((longlong)pvVar6 + uVar8 * 8);
      uVar5 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar10)) >> 3;
      if (puVar4 < puVar10) {
        uVar5 = 0;
      }
      puVar9 = puVar10;
      if (uVar5 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = uVar7;
          puVar9 = puVar9 + 1;
        }
      }
    }
    bVar3 = -((byte)DAT_180025040 & 0x3f) & 0x3f;
    *puVar10 = (*(ulonglong *)param_1[1] >> bVar3 | *(ulonglong *)param_1[1] << 0x40 - bVar3) ^
               DAT_180025040;
    bVar3 = -((byte)DAT_180025040 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 =
         ((ulonglong)pvVar6 >> bVar3 | (longlong)pvVar6 << 0x40 - bVar3) ^ DAT_180025040;
    bVar3 = -((byte)DAT_180025040 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar10 + 1) >> bVar3 | (longlong)(puVar10 + 1) << 0x40 - bVar3) ^
         DAT_180025040;
    bVar3 = 0x40 - ((byte)DAT_180025040 & 0x3f) & 0x3f;
    uVar2 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar4 >> bVar3 | (longlong)puVar4 << 0x40 - bVar3) ^ DAT_180025040;
  }
  return uVar2;
}



// ===== FUN_18000ce2c @ 18000ce2c (size 277) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18000ce2c(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  uVar1 = DAT_180025040;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_180025040 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_180025040 ^ *puVar8) >> bVar5 | (DAT_180025040 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_180025040 ^ puVar8[1]) >> bVar5 | (DAT_180025040 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_180025040 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_180025040;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint)DAT_180025040 & 0x3f;
          uVar11 = DAT_180025040 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_180025040 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_180025040;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_18000e350(puVar10);
        uVar3 = DAT_180025040;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_18000cf44 @ 18000cf44 (size 15) =====

void FUN_18000cf44(undefined8 param_1)

{
  _register_onexit_function(&DAT_180025f68,param_1);
  return;
}



// ===== FUN_18000cf54 @ 18000cf54 (size 67) =====

void FUN_18000cf54(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}



// ===== _initialize_onexit_table @ 18000cf98 (size 39) =====

/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180025040;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_180025040;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}



// ===== _register_onexit_function @ 18000cfc0 (size 72) =====

/* Library Function - Single Match
    _register_onexit_function
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void _register_onexit_function(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}



// ===== FUN_18000d01c @ 18000d01c (size 35) =====

undefined8 FUN_18000d01c(void)

{
  undefined8 uVar1;
  
  _initialize_onexit_table((longlong *)&DAT_180025f68);
  uVar1 = _initialize_onexit_table((longlong *)&DAT_180025f80);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}



// ===== FUN_18000d044 @ 18000d044 (size 16) =====

undefined1 FUN_18000d044(void)

{
  FUN_18000cbb8();
  return 1;
}



// ===== FUN_18000d054 @ 18000d054 (size 61) =====

undefined1 FUN_18000d054(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_180025040;
  FUN_18000d668(DAT_180025040);
  FUN_18000c130(uVar1);
  FUN_180010860(uVar1);
  FUN_180010ae0(uVar1);
  FUN_18000c5e8(uVar1);
  return 1;
}



// ===== FUN_18000d09c @ 18000d09c (size 64) =====

undefined8 FUN_18000d09c(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_180026220;
  uVar2 = (ulonglong)uVar1;
  *DAT_180026220 = *DAT_180026220 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_180026220 != (uint *)&DAT_180025250)) {
    uVar2 = FUN_18000e350(DAT_180026220);
    DAT_180026220 = (uint *)&DAT_180025250;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// ===== FUN_18000d0dc @ 18000d0dc (size 91) =====

undefined1 FUN_18000d0dc(void)

{
  FUN_18000e350(DAT_180026760);
  DAT_180026760 = (LPVOID)0x0;
  FUN_18000e350(DAT_180026768);
  DAT_180026768 = (LPVOID)0x0;
  FUN_18000e350(DAT_180026240);
  DAT_180026240 = (LPVOID)0x0;
  FUN_18000e350(DAT_180026248);
  DAT_180026248 = (LPVOID)0x0;
  return 1;
}



// ===== FUN_18000d138 @ 18000d138 (size 19) =====

void FUN_18000d138(void)

{
  FUN_18001072c(&PTR_LAB_18001ab10,(undefined8 *)&DAT_18001ac10);
  return;
}



// ===== FUN_18000d14c @ 18000d14c (size 20) =====

bool FUN_18000d14c(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_18000de70();
  return p_Var1 != (__acrt_ptd *)0x0;
}



// ===== FUN_18000d160 @ 18000d160 (size 16) =====

undefined1 FUN_18000d160(void)

{
  FUN_18000ddc0();
  return 1;
}



// ===== FUN_18000d170 @ 18000d170 (size 53) =====

undefined8 FUN_18000d170(bool param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (param_1) {
    if (DAT_180026758 != 0) {
      iVar1 = common_flush_all(true);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_1800107ac(0x18001ab10,0x18001ac10);
  return uVar2;
}



// ===== FUN_18000d1a8 @ 18000d1a8 (size 16) =====

undefined4 FUN_18000d1a8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18000dfa0();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



// ===== FUN_18000d1c8 @ 18000d1c8 (size 54) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000d1c8(undefined8 *param_1,undefined8 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// ===== FUN_18000d200 @ 18000d200 (size 60) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18000d200(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}



// ===== FUN_18000d23c @ 18000d23c (size 30) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000d23c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000de10();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== abort @ 18000d25c (size 86) =====

/* Library Function - Single Match
    abort
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_180010880(0x16);
  }
  if ((DAT_1800250c0 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x18000d2a7;
    FUN_18000d4f8(3,0x40000015,1);
  }
  *(undefined8 *)(puVar4 + -8) = 0x18000d2b1;
  FUN_18000c600(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== FUN_18000d2c0 @ 18000d2c0 (size 126) =====

undefined8 FUN_18000d2c0(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (longlong)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      p_Var2 = FUN_18000d96c();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_18000d7c4();
      return 0x22;
    }
    *param_1 = '\0';
  }
  p_Var2 = FUN_18000d96c();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_18000d7c4();
  return 0x16;
}



// ===== FUN_18000d350 @ 18000d350 (size 102) =====

longlong FUN_18000d350(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      lVar2 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_18000df00(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}



// ===== FUN_18000d3c0 @ 18000d3c0 (size 118) =====

void FUN_18000d3c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18000d350(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_18000dff8(lVar1,param_1 + 3,param_1[1]);
  FUN_18000e064(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}



// ===== FUN_18000d440 @ 18000d440 (size 106) =====

__acrt_ptd * FUN_18000d440(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  p_Var1 = (__acrt_ptd *)*param_1;
  lVar2 = 0;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_18000df00(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
  }
  return p_Var1;
}



// ===== FUN_18000d4ac @ 18000d4ac (size 76) =====

longlong FUN_18000d4ac(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}



// ===== FUN_18000d4f8 @ 18000d4f8 (size 365) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000d4f8(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 local_res8 [8];
  undefined1 auStackY_608 [32];
  ulonglong local_5c8 [2];
  PVOID local_5b8;
  _EXCEPTION_POINTERS local_5b0;
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_180025040 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_1800069d0();
  }
  FUN_180015d10((undefined1 (*) [32])&local_598,0,0x98);
  FUN_180015d10((undefined1 (*) [32])&local_4f8,0,0x4d0);
  local_5c8[1] = 0;
  local_5b0.ExceptionRecord = &local_598;
  local_5c8[0] = 0;
  local_5b8 = (PVOID)0x0;
  local_5b0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8[0],local_4f8.Rip,FunctionEntry,&local_4f8,&local_5b8,local_5c8 + 1,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)local_res8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5b0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_1800069d0();
  }
  return;
}



// ===== FUN_18000d668 @ 18000d668 (size 8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000d668(undefined8 param_1)

{
  _DAT_180025f98 = param_1;
  return;
}



// ===== FUN_18000d670 @ 18000d670 (size 155) =====

void FUN_18000d670(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  )

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180025fa4 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_180025238;
    puStack_28 = PTR_DAT_180025240;
  }
  FUN_18000d70c(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_18000d350(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_18000d350(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}



// ===== FUN_18000d70c @ 18000d70c (size 182) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000d70c(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,longlong *param_6)

{
  __acrt_ptd *p_Var1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  
  p_Var1 = FUN_18000d440(param_6);
  if ((p_Var1 == (__acrt_ptd *)0x0) || (pcVar4 = *(code **)(p_Var1 + 0x3b8), pcVar4 == (code *)0x0))
  {
    puVar2 = (ulonglong *)FUN_18000d4ac(0x180025f98,(longlong)param_6);
    bVar3 = (byte)DAT_180025040 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_180025040) >> bVar3 | (*puVar2 ^ DAT_180025040) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}



// ===== FUN_18000d7c4 @ 18000d7c4 (size 30) =====

void FUN_18000d7c4(void)

{
  FUN_18000d670((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



// ===== _invoke_watson @ 18000d7e4 (size 71) =====

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
  *(undefined8 *)(puVar3 + -8) = 0x18000d812;
  FUN_18000d4f8(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x18000d818;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00018000d824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}



// ===== FUN_18000d82c @ 18000d82c (size 207) =====

uint FUN_18000d82c(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(&DAT_18001ac14 + (ulonglong)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar7 = 0;
      uVar8 = 0x2c;
      do {
        uVar9 = uVar5 >> 1;
        if (uVar9 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint *)(&DAT_18001ac10 + uVar7 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint *)0x0;
            }
LAB_18000d8cd:
            if (puVar4 != (uint *)0x0) {
              return puVar4[1];
            }
          }
          break;
        }
        uVar6 = uVar9 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar9;
        }
        lVar1 = uVar6 + uVar7;
        puVar4 = (uint *)(&DAT_18001ac10 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_18000d8cd;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*puVar4 <= param_1) {
          uVar7 = lVar1 + 1;
          uVar3 = uVar8;
          uVar5 = uVar9;
        }
        uVar8 = uVar3;
      } while (uVar7 <= uVar3);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVar2 = 8;
    }
  }
  return uVar2;
}



// ===== FUN_18000d8fc @ 18000d8fc (size 37) =====

void FUN_18000d8fc(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = FUN_18000d948();
  *(uint *)p_Var2 = param_1;
  uVar1 = FUN_18000d82c(param_1);
  p_Var2 = FUN_18000d96c();
  *(uint *)p_Var2 = uVar1;
  return;
}



// ===== FUN_18000d924 @ 18000d924 (size 34) =====

void FUN_18000d924(uint param_1,longlong param_2)

{
  uint uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(uint *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_18000d82c(param_1);
  *(uint *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}



// ===== FUN_18000d948 @ 18000d948 (size 35) =====

__acrt_ptd * FUN_18000d948(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_18000de70();
  p_Var2 = p_Var1 + 0x24;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_1800250d4;
  }
  return p_Var2;
}



// ===== FUN_18000d96c @ 18000d96c (size 35) =====

__acrt_ptd * FUN_18000d96c(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_18000de70();
  p_Var2 = p_Var1 + 0x20;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_1800250d0;
  }
  return p_Var2;
}



// ===== operator()<> @ 18000d990 (size 63) =====

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



// ===== operator()<> @ 18000d9d0 (size 61) =====

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}



// ===== operator()<> @ 18000da10 (size 69) =====

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}



// ===== operator()<> @ 18000da58 (size 95) =====

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_180025250)) {
      FUN_18000e350(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}



// ===== construct_ptd_array @ 18000dab8 (size 205) =====

/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_180025fa8;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_18001a970;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_180025250;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}



// ===== FUN_18000db88 @ 18000db88 (size 32) =====

void FUN_18000db88(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_18000e350(param_1);
  }
  return;
}



// ===== destroy_ptd_array @ 18000dba8 (size 245) =====

/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(undefined **)param_1 != &DAT_18001a970) {
    FUN_18000e350(*(undefined **)param_1);
  }
  FUN_18000e350(*(LPVOID *)(local_20 + 0x70));
  FUN_18000e350(*(LPVOID *)(local_20 + 0x58));
  FUN_18000e350(*(LPVOID *)(local_20 + 0x60));
  FUN_18000e350(*(LPVOID *)(local_20 + 0x68));
  FUN_18000e350(*(LPVOID *)(local_20 + 0x48));
  FUN_18000e350(*(LPVOID *)(local_20 + 0x50));
  FUN_18000e350(*(LPVOID *)(local_20 + 0x78));
  FUN_18000e350(*(LPVOID *)(local_20 + 0x80));
  FUN_18000e350(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}



// ===== FUN_18000dca0 @ 18000dca0 (size 181) =====

__acrt_ptd * FUN_18000dca0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_1800250d8,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = _calloc_base(1,0x3c8);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_1800250d8,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_1800250d8,(PVOID)0x0);
        FUN_18000e350(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_18000e350((LPVOID)0x0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_1800250d8,(PVOID)0x0);
    FUN_18000e350((LPVOID)0x0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}



// ===== replace_current_thread_locale_nolock @ 18000dd58 (size 103) =====

/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_180025fa8) && (ppuVar1 != &PTR_DAT_1800250e0)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref((longlong)param_2);
  }
  return;
}



// ===== FUN_18000ddc0 @ 18000ddc0 (size 78) =====

void FUN_18000ddc0(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_1800250d8 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_1800250d8);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_1800250d8,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    FUN_18000e350(p_Var1);
  }
  return;
}



// ===== FUN_18000de10 @ 18000de10 (size 24) =====

void FUN_18000de10(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_18000de70();
  if (p_Var1 != (__acrt_ptd *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_18000de2c @ 18000de2c (size 65) =====

void FUN_18000de2c(void)

{
  PVOID pvVar1;
  __acrt_ptd *p_Var2;
  
  if (DAT_1800250d8 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_1800250d8);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      p_Var2 = FUN_18000dca0();
      if (p_Var2 == (__acrt_ptd *)0x0) goto LAB_18000de68;
    }
    return;
  }
LAB_18000de68:
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== FUN_18000de70 @ 18000de70 (size 144) =====

__acrt_ptd * FUN_18000de70(void)

{
  DWORD dwErrCode;
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_180025fa0 == '\0') {
    dwErrCode = GetLastError();
    p_Var1 = p_Var2;
    if (DAT_1800250d8 != 0xffffffff) {
      p_Var1 = FlsGetValue(DAT_1800250d8);
    }
    if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
       (p_Var2 = p_Var1, p_Var1 == (__acrt_ptd *)0x0)) {
      p_Var2 = FUN_18000dca0();
    }
    SetLastError(dwErrCode);
  }
  else {
    p_Var1 = p_Var2;
    if (DAT_1800250d8 != 0xffffffff) {
      p_Var1 = (__acrt_ptd *)FUN_18001020c();
    }
    if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
       (p_Var2 = p_Var1, p_Var1 == (__acrt_ptd *)0x0)) {
      p_Var2 = FUN_18000dca0();
    }
  }
  return p_Var2;
}



// ===== FUN_18000df00 @ 18000df00 (size 91) =====

__acrt_ptd * FUN_18000df00(undefined8 param_1,longlong param_2)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  p_Var1 = p_Var2;
  if (DAT_1800250d8 != 0xffffffff) {
    p_Var1 = FlsGetValue(DAT_1800250d8);
  }
  if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
     ((p_Var1 != (__acrt_ptd *)0x0 || (p_Var1 = FUN_18000dca0(), p_Var1 != (__acrt_ptd *)0x0)))) {
    p_Var2 = p_Var1 + param_2 * 0x3c8;
  }
  return p_Var2;
}



// ===== FUN_18000df5c @ 18000df5c (size 68) =====

ulonglong FUN_18000df5c(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var_00;
  undefined4 extraout_var;
  
  DAT_180025fa0 = FUN_1800103b0();
  DAT_1800250d8 = FlsAlloc(FUN_18000db88);
  uVar2 = CONCAT44(extraout_var,DAT_1800250d8);
  if (DAT_1800250d8 != 0xffffffff) {
    p_Var3 = FUN_18000de70();
    if (p_Var3 != (__acrt_ptd *)0x0) {
      return CONCAT71((int7)((ulonglong)p_Var3 >> 8),1);
    }
    uVar1 = FUN_18000dfa0();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// ===== FUN_18000dfa0 @ 18000dfa0 (size 34) =====

undefined4 FUN_18000dfa0(void)

{
  BOOL in_EAX;
  
  if (DAT_1800250d8 != 0xffffffff) {
    in_EAX = FlsFree(DAT_1800250d8);
    DAT_1800250d8 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



// ===== __acrt_update_locale_info @ 18000dfc4 (size 49) =====

/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_180025fa8) && ((DAT_180025898 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}



// ===== FUN_18000dff8 @ 18000dff8 (size 53) =====

void FUN_18000dff8(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined **ppuVar1;
  
  if ((*param_2 != (&DAT_180025fa8)[param_3]) && ((DAT_180025898 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}



// ===== FUN_18000e030 @ 18000e030 (size 49) =====

void FUN_18000e030(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_180026220) && ((DAT_180025898 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_18000f8d8();
    *param_2 = lVar1;
  }
  return;
}



// ===== FUN_18000e064 @ 18000e064 (size 53) =====

void FUN_18000e064(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_180026220)[param_3]) && ((DAT_180025898 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_18000f8d8();
    *param_2 = lVar1;
  }
  return;
}



// ===== operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_> @ 18000e09c (size 110) =====

/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  
  __acrt_lock(*(int *)param_1);
  for (plVar2 = &DAT_180025fa8; plVar2 != &DAT_180025fb0; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_1800250e0) {
      ppuVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_1800250e0);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}



// ===== FUN_18000e10c @ 18000e10c (size 12) =====

undefined4 FUN_18000e10c(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_180025fa4;
  LOCK();
  DAT_180025fa4 = 1;
  UNLOCK();
  return uVar1;
}



// ===== __acrt_uninitialize_locale @ 18000e118 (size 46) =====

/* Library Function - Single Match
    __acrt_uninitialize_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_uninitialize_locale(void)

{
  <lambda_3e16ef9562a7dcce91392c22ab16ea36> local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 4;
  local_res18[0] = 4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_>
            ((__crt_seh_guarded_call<void> *)local_res8,
             (<lambda_410d79af7f07d98d83a3f525b3859a53> *)local_res18,local_res8,
             (<lambda_38119f0e861e05405d8a144b9b982f0a> *)local_res10);
  return;
}



// ===== __acrt_initialize_locks @ 18000e148 (size 72) =====

/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_initialize_locks(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180025fb0 + uVar2 * 5),4000,0);
    if (BVar1 == 0) {
      uVar2 = __acrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_180026208 = DAT_180026208 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xf);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}



// ===== __acrt_lock @ 18000e190 (size 25) =====

/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000e1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(&DAT_180025fb0 + (longlong)param_1 * 5);
  return;
}



// ===== __acrt_uninitialize_locks @ 18000e1ac (size 55) =====

/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_180026208;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180025fb0 + uVar1 * 5));
    DAT_180026208 = DAT_180026208 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



// ===== __acrt_unlock @ 18000e1e4 (size 25) =====

/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000e1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(&DAT_180025fb0 + (longlong)param_1 * 5);
  return;
}



// ===== _malloc_base @ 18000e200 (size 94) =====

/* Library Function - Single Match
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_180026318,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_180011f40();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_18000c0f0(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_18000d96c();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}



// ===== FUN_18000e260 @ 18000e260 (size 25) =====

uint FUN_18000e260(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}



// ===== FUN_18000e27c @ 18000e27c (size 24) =====

uint FUN_18000e27c(void)

{
  return *(uint *)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x20) + 8) >> 0x1f;
}



// ===== FUN_18000e294 @ 18000e294 (size 47) =====

bool FUN_18000e294(void)

{
  uint uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_18000e27c();
  if ((char)uVar1 == '\0') {
    FUN_18001014c(local_res8);
  }
  return local_res8[0] != 1;
}



// ===== _calloc_base @ 18000e2d0 (size 117) =====

/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_180026318,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_180011f40();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_18000c0f0(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_18000d96c();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}



// ===== FUN_18000e350 @ 18000e350 (size 60) =====

void FUN_18000e350(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_180026318,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_18000d82c(DVar2);
    p_Var4 = FUN_18000d96c();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}



// ===== FUN_18000e3bc @ 18000e3bc (size 413) =====

uint FUN_18000e3bc(char *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_18000e350(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_18000fc6c(param_4,9);
      uVar6 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < uVar6) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_18000e350(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = _malloc_base(uVar6 * 2);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_18000fc6c(param_4,9);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18000d8fc(DVar2);
      p_Var4 = FUN_18000d96c();
      return *(uint *)p_Var4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_18000e350(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = _malloc_base(2);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      bVar7 = pvVar3 != (LPVOID)0x0;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      if (bVar7) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar7;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar7;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



// ===== FUN_18000e55c @ 18000e55c (size 428) =====

uint FUN_18000e55c(LPCWSTR param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_1 == (LPCWSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_18000e350(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      iVar1 = FUN_18000fcfc(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_18000e350(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = _malloc_base(uVar7);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar6 = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar7;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_18000fcfc(param_4,0,param_1,-1,*(LPSTR *)(param_2 + 0x10),(int)uVar6,(LPBOOL)0x0
                              ,(LPBOOL)0x0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18000d8fc(DVar2);
      p_Var4 = FUN_18000d96c();
      return *(uint *)p_Var4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_18000e350(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = _malloc_base(1);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      bVar8 = pvVar3 != (LPVOID)0x0;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



// ===== FUN_18000e708 @ 18000e708 (size 569) =====

ulonglong FUN_18000e708(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  byte *pbVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong local_res10;
  ulonglong local_res18;
  char *local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  
  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_18000d96c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_18000d7c4();
    uVar3 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar4 = (byte *)*param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar7 = plStack_50, plVar8 = local_58, pbVar4 != (byte *)0x0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      pbVar4 = FUN_1800124f0(pbVar4,(byte *)&local_res10);
      if (pbVar4 == (byte *)0x0) {
        uVar10 = FUN_18000e944((longlong)*param_1,0,0,(longlong *)&local_58);
        plVar8 = local_58;
        uVar3 = uVar10 & 0xffffffff;
        if ((int)uVar10 != 0) {
          plVar7 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_18000e350((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_18000e857;
        }
      }
      else {
        uVar10 = FUN_18000eac8((uchar *)*param_1,pbVar4,(longlong *)&local_58);
        plVar8 = local_58;
        uVar3 = uVar10 & 0xffffffff;
        if ((int)uVar10 != 0) {
          plVar7 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_18000e350((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_18000e857;
        }
      }
      param_1 = param_1 + 1;
      pbVar4 = (byte *)*param_1;
    }
    uVar10 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    local_res18 = 0;
    for (plVar11 = local_58; plVar11 != plStack_50; plVar11 = plVar11 + 1) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(*plVar11 + lVar6) != '\0');
      local_res18 = local_res18 + 1 + lVar6;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar10,local_res18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_18000e350((LPVOID)0x0);
      for (plVar11 = plVar8; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_18000e350((LPVOID)*plVar11);
      }
      uVar3 = 0xffffffff;
LAB_18000e857:
      FUN_18000e350(plVar8);
    }
    else {
      pcVar9 = (char *)((longlong)pvVar5 + uVar10 * 8);
      local_res20 = pcVar9;
      if (plVar8 != plVar7) {
        local_res10 = (longlong)pvVar5 - (longlong)plVar8;
        plVar11 = plVar8;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar11 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_180012320(pcVar9,(longlong)(local_res20 + (local_res18 - (longlong)pcVar9)),
                                *plVar11,lVar12);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(local_res10 + (longlong)plVar11) = pcVar9;
          pcVar9 = pcVar9 + lVar12;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar7);
      }
      *param_2 = pvVar5;
      FUN_18000e350((LPVOID)0x0);
      for (plVar11 = plVar8; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_18000e350((LPVOID)*plVar11);
      }
      FUN_18000e350(plVar8);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ===== FUN_18000e944 @ 18000e944 (size 387) =====

undefined8 FUN_18000e944(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  char *pcVar2;
  LPVOID pvVar3;
  longlong lVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar5;
  
  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  pcVar2 = _calloc_base(uVar8,1);
  if (((param_3 != 0) && (iVar1 = FUN_180012320(pcVar2,uVar8,param_2,param_3), iVar1 != 0)) ||
     (iVar1 = FUN_180012320(pcVar2 + param_3,uVar8 - param_3,param_1,uVar6), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_18000e350((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_18000ea9a;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_18000e350((LPVOID)0x0);
          goto LAB_18000ea9a;
        }
        FUN_18000e350((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_18000e350(pcVar2);
  }
  else {
LAB_18000ea9a:
    *(char **)param_4[1] = pcVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_18000e350((LPVOID)0x0);
  return uVar7;
}



// ===== FUN_18000eac8 @ 18000eac8 (size 862) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18000eac8(uchar *param_1,uchar *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  HANDLE hFindFile;
  INT_PTR IVar6;
  ulonglong uVar7;
  LPCWSTR lpFileName;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_180025040 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2f) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2f) & 0x3fU) & 1) == 0))))) {
    param_2 = (uchar *)FUN_1800128a8(param_1,param_2);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    uVar5 = FUN_18000e944((longlong)param_1,0,0,param_3);
  }
  else {
    bVar11 = *param_2 - 0x2f;
    uVar3 = 0;
    if ((0x2d < bVar11) ||
       (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar11 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    uVar5 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar5;
    FUN_180015d10((undefined1 (*) [32])&local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    FUN_18000be70(&local_308,(longlong *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0xfde9;
    }
    else {
      IVar6 = FUN_1800101a8();
      if ((int)IVar6 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
    }
    uVar3 = FUN_18000e3bc((char *)param_1,(longlong)&local_338,local_348,uVar3);
    lpFileName = local_328;
    if (uVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      uVar5 = FUN_18000e944((longlong)param_1,0,0,param_3);
      uVar5 = uVar5 & 0xffffffff;
      if (local_310 != '\0') {
        FUN_18000e350(local_328);
      }
    }
    else {
      lVar10 = param_3[1] - *param_3 >> 3;
      do {
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        FUN_18000be70(&local_2e8,(longlong *)0x0);
        uVar3 = 0xfde9;
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        else {
          IVar6 = FUN_1800101a8();
          if ((int)IVar6 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 1;
          }
          else {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 0;
          }
        }
        uVar3 = FUN_18000e55c(local_298.cFileName,(longlong)&local_2c8,local_348,uVar3);
        pcVar2 = local_2b8;
        pcVar8 = local_2b8;
        if (uVar3 != 0) {
          pcVar8 = (char *)0x0;
        }
        if ((*pcVar8 == '.') && ((pcVar8[1] == '\0' || ((pcVar8[1] == '.' && (pcVar8[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_18000e350(local_2b8);
          }
        }
        else {
          uVar7 = FUN_18000e944((longlong)pcVar8,(longlong)param_1,uVar5,param_3);
          if ((int)uVar7 != 0) {
            if (local_2a0 != '\0') {
              FUN_18000e350(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 == '\0') {
              return uVar7 & 0xffffffff;
            }
            FUN_18000e350(local_328);
            return uVar7 & 0xffffffff;
          }
          uVar5 = local_340;
          if (local_2a0 != (char)uVar7) {
            FUN_18000e350(pcVar2);
            uVar5 = local_340;
          }
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar9 = param_3[1] - *param_3 >> 3;
      if (lVar10 != lVar9) {
        FUN_180011f80((undefined1 *)(*param_3 + lVar10 * 8),lVar9 - lVar10,8,&LAB_18000e3a8);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_18000e350(local_328);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



// ===== FUN_18000ee30 @ 18000ee30 (size 281) =====

undefined4 FUN_18000ee30(LPCWSTR param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  __acrt_ptd *p_Var3;
  
  if (param_1 == (LPCWSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      iVar1 = FUN_18000fcfc(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_18000ee84;
        }
        iVar1 = FUN_18000fcfc(param_4,0,param_1,-1,*(LPSTR *)(param_2 + 0x10),
                              (int)*(ulonglong *)(param_2 + 0x18),(LPBOOL)0x0,(LPBOOL)0x0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18000d8fc(DVar2);
      p_Var3 = FUN_18000d96c();
      return *(undefined4 *)p_Var3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_18000ee84:
      p_Var3 = FUN_18000d96c();
      *(undefined4 *)p_Var3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



// ===== FUN_18000ef4c @ 18000ef4c (size 289) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18000ef4c(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  INT_PTR IVar2;
  uint uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined1 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180025040 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_18000d8fc(DVar1);
    local_240 = 0;
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    FUN_18000be70(&local_280,(longlong *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      IVar2 = FUN_1800101a8();
      if ((int)IVar2 == 0) {
        if (local_268 != (char)IVar2) {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_18000ee30(local_228,(longlong)&local_260,local_288,uVar3);
    local_240 = local_240 & 0xffffffff;
  }
  return local_240;
}



// ===== FUN_18000f070 @ 18000f070 (size 462) =====

void FUN_18000f070(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  __acrt_ptd *p_Var5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  
  __acrt_lock(*param_2);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_180026210 == (undefined1 (*) [32])0x0) {
LAB_18000f123:
    p_Var5 = FUN_18000d96c();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_18000d7c4();
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      FUN_180015d10(DAT_180026210,0,0x101);
      goto LAB_18000f123;
    }
    lVar8 = 2;
    pauVar7 = DAT_180026210;
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)*pauVar7 = *puVar4;
      *(undefined8 *)(*pauVar7 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
      *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
      uVar3 = puVar4[5];
      *(undefined8 *)pauVar7[1] = puVar4[4];
      *(undefined8 *)(pauVar7[1] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
      *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
      uVar3 = puVar4[9];
      *(undefined8 *)pauVar7[2] = puVar4[8];
      *(undefined8 *)(pauVar7[2] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
      *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
      uVar3 = puVar4[0xd];
      *(undefined8 *)pauVar7[3] = puVar4[0xc];
      *(undefined8 *)(pauVar7[3] + 8) = uVar3;
      pauVar6 = pauVar7 + 4;
      uVar3 = puVar4[0xf];
      *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
      *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar8 = lVar8 + -1;
      pauVar7 = pauVar6;
    } while (lVar8 != 0);
    (*pauVar6)[0] = *(undefined1 *)puVar4;
  }
  lVar8 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_180026218 != (undefined1 (*) [32])0x0) {
    pauVar7 = DAT_180026218;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(undefined8 *)*pauVar7 = *puVar4;
        *(undefined8 *)(*pauVar7 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
        *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
        uVar3 = puVar4[5];
        *(undefined8 *)pauVar7[1] = puVar4[4];
        *(undefined8 *)(pauVar7[1] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
        *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
        uVar3 = puVar4[9];
        *(undefined8 *)pauVar7[2] = puVar4[8];
        *(undefined8 *)(pauVar7[2] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
        *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
        uVar3 = puVar4[0xd];
        *(undefined8 *)pauVar7[3] = puVar4[0xc];
        *(undefined8 *)(pauVar7[3] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
        *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar8 = lVar8 + -1;
        pauVar7 = pauVar7 + 4;
      } while (lVar8 != 0);
      goto LAB_18000f1d4;
    }
    FUN_180015d10(DAT_180026218,0,0x100);
  }
  p_Var5 = FUN_18000d96c();
  *(undefined4 *)p_Var5 = 0x16;
  FUN_18000d7c4();
LAB_18000f1d4:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_180025250)) {
    FUN_18000e350((LPVOID)**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



// ===== getSystemCP @ 18000f240 (size 125) =====

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  FUN_18000be70(&local_28,(longlong *)0x0);
  DAT_180026228 = 0;
  if (param_1 == -2) {
    DAT_180026228 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_180026228 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_180026228 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}



// ===== FUN_18000f2c0 @ 18000f2c0 (size 152) =====

void FUN_18000f2c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_180015d10((undefined1 (*) [32])(param_1 + 0x18),0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar4 = lVar2, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    lVar1 = lVar4 + 1;
    *(undefined1 *)(param_1 + lVar4 + 0x18) = (&DAT_180025268)[lVar4];
    lVar4 = lVar1;
  } while (lVar1 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_180025369)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}



// ===== FUN_18000f358 @ 18000f358 (size 501) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000f358(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  BYTE *pBVar8;
  WORD *pWVar9;
  longlong lVar10;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  char local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_180025040 ^ (ulonglong)auStackY_788;
  local_738.LeadByte[10] = '\0';
  local_738.LeadByte[0xb] = '\0';
  local_738._18_2_ = 0;
  local_738.MaxCharSize = 0;
  local_738.DefaultChar[0] = '\0';
  local_738.DefaultChar[1] = '\0';
  local_738.LeadByte[0] = '\0';
  local_738.LeadByte[1] = '\0';
  local_738.LeadByte[2] = '\0';
  local_738.LeadByte[3] = '\0';
  local_738.LeadByte[4] = '\0';
  local_738.LeadByte[5] = '\0';
  local_738.LeadByte[6] = '\0';
  local_738.LeadByte[7] = '\0';
  local_738.LeadByte[8] = '\0';
  local_738.LeadByte[9] = '\0';
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar3 == 0)) {
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x20;
        bVar2 = (char)uVar4 - 0x20;
      }
      else {
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    pcVar6 = local_718;
    lVar10 = 0x100;
    do {
      *pcVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = ' ';
    bVar2 = local_738.LeadByte[0];
    while (bVar2 != 0) {
      bVar1 = pBVar8[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = ' ';
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      bVar2 = *pBVar8;
    }
    FUN_180011da4((longlong *)0x0,1,local_718,0x100,local_418,*(uint *)(param_1 + 4),0);
    __acrt_LCMapStringA((longlong *)0x0,*(ushort **)(param_1 + 0x220),0x100,local_718,0x100,
                        local_618,0x100,*(uint *)(param_1 + 4),0);
    __acrt_LCMapStringA((longlong *)0x0,*(ushort **)(param_1 + 0x220),0x200,local_718,0x100,
                        local_518,0x100,*(uint *)(param_1 + 4),0);
    pWVar9 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pWVar9 & 1) == 0) {
        if ((*pWVar9 & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = pbVar5[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = pbVar5[(longlong)(abStack_631 + -param_1)];
      }
      pbVar5[0x100] = bVar2;
      pWVar9 = pWVar9 + 1;
      pbVar5 = pbVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// ===== FUN_18000f550 @ 18000f550 (size 623) =====

ulonglong FUN_18000f550(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  __acrt_ptd *p_Var13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_268 [4];
  int local_264 [3];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  undefined8 local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar8 = getSystemCP(param_1);
  if (iVar8 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    uVar10 = 0;
  }
  else {
    puVar9 = _malloc_base(0x228);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_18000e350((LPVOID)0x0);
      uVar10 = 0xffffffff;
    }
    else {
      lVar15 = 4;
      lVar16 = 4;
      puVar6 = *(undefined8 **)(local_res18 + 0x88);
      puVar7 = local_248;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar16 = lVar16 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar16 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      puVar6 = local_248;
      puVar7 = puVar9;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar15 = lVar15 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      *(undefined4 *)puVar9 = 0;
      uVar12 = FUN_18000f8f4(iVar8,(longlong)puVar9);
      uVar10 = uVar12 & 0xffffffff;
      if ((int)uVar12 == -1) {
        p_Var13 = FUN_18000d96c();
        *(undefined4 *)p_Var13 = 0x16;
        FUN_18000e350(puVar9);
        uVar10 = 0xffffffff;
      }
      else {
        if (param_2 == '\0') {
          FUN_18000e10c();
        }
        piVar2 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_180025250)) {
          FUN_18000e350(*(undefined **)(local_res18 + 0x88));
        }
        *(undefined4 *)puVar9 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar9;
        if ((DAT_180025898 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264[0] = 5;
          local_264[1] = 5;
          FUN_18000f070(local_268,local_264 + 1,&local_258,local_264);
          if (param_2 != '\0') {
            PTR_DAT_180025240 = *local_res20;
          }
        }
        FUN_18000e350((LPVOID)0x0);
      }
    }
  }
  return uVar10;
}



// ===== update_thread_multibyte_data_internal @ 18000f7c0 (size 183) =====

/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_180025898) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_180025250)) {
          FUN_18000e350(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== __acrt_initialize_multibyte @ 18000f878 (size 96) =====

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  ulonglong in_RAX;
  __acrt_ptd *p_Var1;
  
  if (DAT_18002622c == '\0') {
    DAT_180026218 = &DAT_180025590;
    DAT_180026220 = &DAT_180025250;
    DAT_180026210 = &DAT_180025480;
    p_Var1 = (__acrt_ptd *)FUN_18000de2c();
    in_RAX = FUN_18000f550(-3,'\x01',p_Var1,(__crt_multibyte_data **)&DAT_180026220);
    DAT_18002622c = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// ===== FUN_18000f8d8 @ 18000f8d8 (size 28) =====

void FUN_18000f8d8(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_18000de10();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_180026220);
  return;
}



// ===== FUN_18000f8f4 @ 18000f8f4 (size 712) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18000f8f4(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined *puVar8;
  longlong lVar9;
  BYTE *pBVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined2 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_180025040 ^ (ulonglong)auStack_68;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  uVar4 = getSystemCP(param_1);
  puVar14 = (undefined *)0x0;
  if (uVar4 == 0) {
LAB_18000fb8c:
    FUN_18000f2c0(param_2);
    return 0;
  }
  puVar6 = &DAT_1800256a0;
  uVar16 = 1;
  puVar8 = puVar14;
  do {
    if (*puVar6 == uVar4) {
      FUN_180015d10((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
      pbVar19 = &DAT_180025690;
      lVar9 = 4;
      pbVar7 = &DAT_1800256b0 + (longlong)puVar8 * 0x30;
      do {
        bVar2 = *pbVar7;
        pbVar12 = pbVar7;
        while ((bVar2 != 0 && (pbVar12[1] != 0))) {
          bVar2 = *pbVar12;
          uVar18 = (uint)bVar2;
          if (bVar2 <= pbVar12[1]) {
            uVar17 = (uint)bVar2;
            do {
              uVar17 = uVar17 + 1;
              if (0x100 < uVar17) break;
              uVar18 = uVar18 + 1;
              pbVar1 = (byte *)((ulonglong)uVar17 + 0x18 + param_2);
              *pbVar1 = *pbVar1 | *pbVar19;
            } while (uVar18 <= pbVar12[1]);
          }
          pbVar12 = pbVar12 + 2;
          bVar2 = *pbVar12;
        }
        pbVar7 = pbVar7 + 8;
        pbVar19 = pbVar19 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      *(uint *)(param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 8) = 1;
      puVar15 = PTR_u_ja_JP_18001b400;
      if (((uVar4 != 0x3a4) && (puVar15 = PTR_u_zh_CN_18001b408, uVar4 != 0x3a8)) &&
         ((puVar15 = PTR_u_ko_KR_18001b410, uVar4 != 0x3b5 && (puVar15 = puVar14, uVar4 == 0x3b6))))
      {
        puVar15 = PTR_u_zh_TW_18001b418;
      }
      *(undefined **)(param_2 + 0x220) = puVar15;
      puVar13 = (undefined2 *)(param_2 + 0xc);
      lVar9 = 6;
      do {
        *puVar13 = *(undefined2 *)
                    (((longlong)puVar8 * 0x30 - param_2) + 0x180025698 + (longlong)puVar13);
        puVar13 = puVar13 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_18000fb82;
    }
    uVar18 = (int)puVar8 + 1;
    puVar8 = (undefined *)(ulonglong)uVar18;
    puVar6 = puVar6 + 0xc;
  } while (uVar18 < 5);
  if ((uVar4 == 65000) || (BVar5 = IsValidCodePage(uVar4 & 0xffff), BVar5 == 0)) {
    return 0xffffffff;
  }
  if (uVar4 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVar4,&local_48);
    if (BVar5 == 0) {
      if (DAT_180026228 == 0) {
        return 0xffffffff;
      }
      goto LAB_18000fb8c;
    }
    FUN_180015d10((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar10 = local_48.LeadByte;
      bVar2 = local_48.LeadByte[0];
      while ((bVar2 != 0 && (pBVar10[1] != 0))) {
        bVar2 = *pBVar10;
        if ((uint)bVar2 <= (uint)pBVar10[1]) {
          uVar4 = (uint)bVar2;
          uVar11 = (ulonglong)(((uint)pBVar10[1] - (uint)bVar2) + 1);
          do {
            uVar4 = uVar4 + 1;
            pbVar7 = (byte *)((ulonglong)uVar4 + 0x18 + param_2);
            *pbVar7 = *pbVar7 | 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        pBVar10 = pBVar10 + 2;
        bVar2 = *pBVar10;
      }
      pbVar7 = (byte *)(param_2 + 0x1a);
      lVar9 = 0xfe;
      do {
        *pbVar7 = *pbVar7 | 8;
        pbVar7 = pbVar7 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar3 = *(int *)(param_2 + 4);
      puVar8 = PTR_u_ja_JP_18001b400;
      if ((((iVar3 != 0x3a4) && (puVar8 = PTR_u_zh_CN_18001b408, iVar3 != 0x3a8)) &&
          (puVar8 = PTR_u_ko_KR_18001b410, iVar3 != 0x3b5)) &&
         (puVar8 = PTR_u_zh_TW_18001b418, iVar3 != 0x3b6)) {
        puVar8 = puVar14;
      }
      *(undefined **)(param_2 + 0x220) = puVar8;
    }
    else {
      uVar16 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar16;
  }
  puVar13 = (undefined2 *)(param_2 + 0xc);
  for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
LAB_18000fb82:
  FUN_18000f358(param_2);
  return 0;
}



// ===== FUN_18000fbbc @ 18000fbbc (size 115) =====

undefined8 FUN_18000fbbc(longlong *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;
  
  FUN_18000be70(&local_28,param_1);
  if (((*(byte *)((ulonglong)(param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + (ulonglong)(param_2 & 0xff) * 2)) == 0)))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}



// ===== FUN_18000fc30 @ 18000fc30 (size 18) =====

void FUN_18000fc30(uint param_1)

{
  FUN_18000fbbc((longlong *)0x0,param_1,0,4);
  return;
}



// ===== FUN_18000fc44 @ 18000fc44 (size 37) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_18000fc44(void)

{
  DAT_180026250 = GetCommandLineA();
  _DAT_180026258 = GetCommandLineW();
  return 1;
}



// ===== FUN_18000fc6c @ 18000fc6c (size 144) =====

void FUN_18000fc6c(uint param_1,ulonglong param_2)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_18000fcb9:
          if (!bVar1) goto LAB_18000fcbd;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_18000fcf7;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_18000fcb9;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_18000fcbd;
LAB_18000fcf7:
    param_2 = (ulonglong)((uint)param_2 & 8);
    goto LAB_18000fcbd;
  }
  param_2 = 0;
LAB_18000fcbd:
                    /* WARNING: Could not recover jumptable at 0x00018000fcbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2);
  return;
}



// ===== FUN_18000fcfc @ 18000fcfc (size 222) =====

void FUN_18000fcfc(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,
                  LPBOOL param_7,LPBOOL param_8)

{
  LPBOOL lpUsedDefaultChar;
  int iVar1;
  DWORD dwFlags;
  LPBOOL pBVar2;
  bool bVar3;
  
  pBVar2 = (LPBOOL)0x0;
  dwFlags = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto LAB_18000fd9c;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto LAB_18000fd9c;
      iVar1 = param_1 - 0xdeaa;
      goto LAB_18000fd8d;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto LAB_18000fd9c;
    bVar3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) ||
       ((param_1 == 0xdeb2 || (param_1 == 0xdeb3)))) goto LAB_18000fd9c;
    iVar1 = param_1 - 65000;
LAB_18000fd8d:
    if (iVar1 == 0) goto LAB_18000fd9c;
    bVar3 = iVar1 == 1;
  }
  if (!bVar3) {
    dwFlags = param_2 & 0xffffff7f;
  }
LAB_18000fd9c:
  lpUsedDefaultChar = param_8;
  if ((param_1 - 65000 < 2) &&
     (param_7 = pBVar2, lpUsedDefaultChar = pBVar2, param_8 != (LPBOOL)0x0)) {
    *param_8 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000fdd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,dwFlags,param_3,param_4,param_5,param_6,(LPCSTR)param_7,
                      lpUsedDefaultChar);
  return;
}



// ===== FUN_18000fddc @ 18000fddc (size 270) =====

LPSTR FUN_18000fddc(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar4;
  LPSTR pCVar6;
  int iVar7;
  WCHAR *pWVar8;
  longlong lVar5;
  
  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    iVar7 = (int)((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1);
    iVar2 = FUN_18000fcfc(0,0,pWVar3,iVar7,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
    if (iVar2 != 0) {
      pCVar6 = _malloc_base((longlong)iVar2);
      if (pCVar6 != (LPSTR)0x0) {
        iVar2 = FUN_18000fcfc(0,0,pWVar3,iVar7,pCVar6,iVar2,(LPBOOL)0x0,(LPBOOL)0x0);
        if (iVar2 == 0) {
          FUN_18000e350(pCVar6);
          pCVar6 = (LPSTR)0x0;
        }
        else {
          FUN_18000e350((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return pCVar6;
      }
      FUN_18000e350((LPVOID)0x0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return (LPSTR)0x0;
}



// ===== _recalloc_base @ 18000fef0 (size 149) =====

/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _recalloc_base(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _msize_base((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_180015d10((undefined1 (*) [32])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}



// ===== FUN_18000ff98 @ 18000ff98 (size 433) =====

FARPROC FUN_18000ff98(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  HMODULE hLibModule;
  FARPROC pFVar6;
  FARPROC pFVar7;
  DWORD local_res18 [2];
  
  do {
    if (param_3 == param_4) {
      pFVar7 = (FARPROC)0x0;
LAB_18001008a:
      __acrt_lock(0xe);
      local_res18[0] = 0;
      BVar5 = VirtualProtect(&DAT_180029000,0x100,4,local_res18);
      if (BVar5 != 0) {
        pFVar6 = pFVar7;
        if (pFVar7 == (FARPROC)0x0) {
          pFVar6 = (FARPROC)0xffffffffffffffff;
        }
        LOCK();
        (&DAT_180029000)[param_1] = pFVar6;
        UNLOCK();
        BVar5 = VirtualProtect(&DAT_180029000,0x100,2,local_res18);
        if (BVar5 != 0) {
          __acrt_unlock(0xe);
          return pFVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = *param_3;
    hLibModule = (HMODULE)(&DAT_180026260)[uVar2];
    if (hLibModule == (HMODULE)0x0) {
      lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_18001b460)[uVar2];
      hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((hLibModule != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
            (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
          (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0))))
      {
        LOCK();
        lVar1 = (&DAT_180026260)[uVar2];
        (&DAT_180026260)[uVar2] = hLibModule;
        UNLOCK();
        if (lVar1 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_180010130;
      }
      LOCK();
      (&DAT_180026260)[uVar2] = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_180010130:
      pFVar7 = GetProcAddress(hLibModule,param_2);
      goto LAB_18001008a;
    }
    param_3 = param_3 + 1;
  } while( true );
}



// ===== FUN_18001014c @ 18001014c (size 92) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_18001014c(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_1800290d0 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1800290d0;
  if ((DAT_1800290d0 == (FARPROC)0x0) &&
     (pFVar1 = FUN_18000ff98(0x1a,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_18001bb1c,
                             (uint *)"AppPolicyGetProcessTerminationMethod"), pFVar1 == (FARPROC)0x0
     )) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}



// ===== FUN_1800101a8 @ 1800101a8 (size 74) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_1800101a8(void)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_180029000 == (FARPROC)0xffffffffffffffff) {
    return 1;
  }
  pFVar1 = DAT_180029000;
  if ((DAT_180029000 == (FARPROC)0x0) &&
     (pFVar1 = FUN_18000ff98(0,"AreFileApisANSI",(uint *)&DAT_18001bab8,(uint *)&DAT_18001babc),
     pFVar1 == (FARPROC)0x0)) {
    return 1;
  }
  IVar2 = (*pFVar1)();
  return IVar2;
}



// ===== FUN_18001020c @ 18001020c (size 10) =====

void FUN_18001020c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180010213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180029018)();
  return;
}



// ===== FUN_180010228 @ 180010228 (size 242) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180010228(ushort *param_1,uint param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  if (DAT_180029090 == (FARPROC)0xffffffffffffffff) {
LAB_1800102d3:
    Locale = FUN_18001031c(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pFVar1 = DAT_180029090;
    if (DAT_180029090 == (FARPROC)0x0) {
      pFVar1 = FUN_18000ff98(0x12,"LCMapStringEx",(uint *)&DAT_18001bae8,(uint *)"LCMapStringEx");
      if (pFVar1 == (FARPROC)0x0) goto LAB_1800102d3;
    }
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



// ===== FUN_18001031c @ 18001031c (size 98) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18001031c(ushort *param_1,uint param_2)

{
  FARPROC pFVar1;
  
  if (DAT_1800290a0 == (FARPROC)0xffffffffffffffff) {
LAB_18001036b:
    FUN_180012dfc(param_1);
  }
  else {
    pFVar1 = DAT_1800290a0;
    if (DAT_1800290a0 == (FARPROC)0x0) {
      pFVar1 = FUN_18000ff98(0x14,"LocaleNameToLCID",(uint *)&DAT_18001bb00,
                             (uint *)"LocaleNameToLCID");
      if (pFVar1 == (FARPROC)0x0) goto LAB_18001036b;
    }
    (*pFVar1)(param_1,(ulonglong)param_2);
  }
  return;
}



// ===== FUN_180010380 @ 180010380 (size 48) =====

bool FUN_180010380(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_180029000,0x100,2,local_res8);
  return BVar1 != 0;
}



// ===== FUN_1800103b0 @ 1800103b0 (size 66) =====

bool FUN_1800103b0(void)

{
  FARPROC pFVar1;
  bool bVar2;
  
  if (DAT_180029018 == -1) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    bVar2 = DAT_180029018 == 0;
    if (!bVar2) goto LAB_1800103ea;
    pFVar1 = FUN_18000ff98(3,"FlsGetValue2",(uint *)&DAT_18001bad0,(uint *)"FlsGetValue2");
  }
  bVar2 = pFVar1 == (FARPROC)0x0;
LAB_1800103ea:
  return !bVar2;
}



// ===== __acrt_uninitialize_winapi_thunks @ 1800103f4 (size 65) =====

/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined8 *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_180026260;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_180026318;
    } while (puVar1 != &DAT_180026318);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



// ===== FUN_180010450 @ 180010450 (size 28) =====

bool FUN_180010450(void)

{
  DAT_180026318 = GetProcessHeap();
  return DAT_180026318 != (HANDLE)0x0;
}



// ===== FUN_1800104a8 @ 1800104a8 (size 253) =====

void FUN_1800104a8(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;
  
  FUN_180015d10((undefined1 (*) [32])&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  lVar5 = 0;
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_180026720 < (int)uVar7) {
      uVar7 = DAT_180026720;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      do {
        if ((((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0))
           && (((*puVar6 & 8) != 0 || (DVar2 = GetFileType(*(HANDLE *)pbVar4), DVar2 != 0)))) {
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_180026320)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// ===== FUN_1800105a8 @ 1800105a8 (size 264) =====

void FUN_1800105a8(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_180026320)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_180010686;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_180026758 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_180026758) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_180010686:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}



// ===== __acrt_initialize_lowio @ 1800106b0 (size 59) =====

/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  longlong lVar1;
  bool bVar2;
  
  __acrt_lock(7);
  lVar1 = __acrt_lowio_ensure_fh_exists(0);
  bVar2 = (int)lVar1 == 0;
  if (bVar2) {
    FUN_1800104a8();
    FUN_1800105a8();
  }
  __acrt_unlock(7);
  return bVar2;
}



// ===== __acrt_uninitialize_lowio @ 1800106ec (size 64) =====

/* Library Function - Single Match
    __acrt_uninitialize_lowio
   
   Library: Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(LPCRITICAL_SECTION *)((longlong)&DAT_180026320 + uVar1) != (LPCRITICAL_SECTION)0x0) {
      __acrt_lowio_destroy_handle_array(*(LPCRITICAL_SECTION *)((longlong)&DAT_180026320 + uVar1));
      *(undefined8 *)((longlong)&DAT_180026320 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}



// ===== FUN_18001072c @ 18001072c (size 126) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18001072c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      in_RAX = (undefined8 *)0x0;
      if (((code *)*puVar1 != (code *)0x0) &&
         (in_RAX = (undefined8 *)(*(code *)*puVar1)(), (char)in_RAX == '\0')) break;
      puVar1 = puVar1 + 2;
    } while (puVar1 != param_2);
    if (puVar1 != param_2) {
      if (puVar1 != param_1) {
        puVar1 = puVar1 + -1;
        do {
          if ((puVar1[-1] != 0) && ((code *)*puVar1 != (code *)0x0)) {
            (*(code *)*puVar1)(0);
          }
          in_RAX = puVar1 + -1;
          puVar1 = puVar1 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



// ===== FUN_1800107ac @ 1800107ac (size 59) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1800107ac(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    in_RAX = 0;
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      in_RAX = (**(code **)(param_2 + -8))(0);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



// ===== FUN_1800107e8 @ 1800107e8 (size 72) =====

ulonglong FUN_1800107e8(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_180025040 & 0x3f;
  uVar2 = DAT_180026738 ^ DAT_180025040;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



// ===== __acrt_get_sigabrt_handler @ 180010830 (size 46) =====

/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_1800107e8(local_res8,local_res18,local_res8,local_res10);
  return;
}



// ===== FUN_180010860 @ 180010860 (size 29) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180010860(undefined8 param_1)

{
  _DAT_180026728 = param_1;
  _DAT_180026730 = param_1;
  DAT_180026738 = param_1;
  _DAT_180026740 = param_1;
  return;
}



// ===== FUN_180010880 @ 180010880 (size 604) =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180010880(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong *puVar8;
  __acrt_ptd *p_Var9;
  undefined4 local_res10;
  __acrt_ptd *p_Var10;
  
  p_Var10 = (__acrt_ptd *)0x0;
  p_Var9 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_1800108d7:
    if (param_1 == 2) {
      puVar8 = (ulonglong *)&DAT_180026728;
    }
    else if (param_1 == 6) {
LAB_180010979:
      puVar8 = &DAT_180026738;
      p_Var9 = p_Var10;
    }
    else if (param_1 == 0xf) {
      puVar8 = (ulonglong *)&DAT_180026740;
    }
    else if (param_1 == 0x15) {
      puVar8 = (ulonglong *)&DAT_180026730;
      p_Var9 = p_Var10;
    }
    else {
      if (param_1 == 0x16) goto LAB_180010979;
      puVar8 = (ulonglong *)0x0;
      p_Var9 = p_Var10;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_180010907;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_180010959;
      }
      goto LAB_1800108d7;
    }
LAB_180010907:
    p_Var9 = FUN_18000de70();
    if (p_Var9 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar3 = *(longlong *)p_Var9;
    lVar2 = DAT_18001aa30 * 0x10 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
      if (*(uint *)(lVar3 + 4) == param_1) goto LAB_180010954;
    }
    lVar3 = 0;
LAB_180010954:
    if (lVar3 == 0) {
LAB_180010959:
      p_Var9 = FUN_18000d96c();
      *(undefined4 *)p_Var9 = 0x16;
      FUN_18000d7c4();
      return 0xffffffff;
    }
    puVar8 = (ulonglong *)(lVar3 + 8);
    bVar1 = false;
  }
  lVar3 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar7 = (code *)*puVar8;
  if (bVar1) {
    bVar5 = (byte)DAT_180025040 & 0x3f;
    pcVar7 = (code *)(((ulonglong)pcVar7 ^ DAT_180025040) >> bVar5 |
                     ((ulonglong)pcVar7 ^ DAT_180025040) << 0x40 - bVar5);
  }
  if (pcVar7 == (code *)0x1) goto LAB_180010a62;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_18000c600(3);
    pcVar7 = (code *)swi(3);
    uVar4 = (*pcVar7)();
    return uVar4;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar3 = *(longlong *)(p_Var9 + 8);
    *(longlong *)(p_Var9 + 8) = 0;
    if (param_1 == 8) {
      lVar2 = FUN_18000de10();
      local_res10 = *(undefined4 *)(lVar2 + 0x10);
      lVar2 = FUN_18000de10();
      *(undefined4 *)(lVar2 + 0x10) = 0x8c;
      goto LAB_180010a1a;
    }
  }
  else {
LAB_180010a1a:
    if (param_1 == 8) {
      lVar2 = DAT_18001aa38 * 0x10 + *(longlong *)p_Var9;
      lVar6 = DAT_18001aa40 * 0x10 + lVar2;
      for (; lVar2 != lVar6; lVar2 = lVar2 + 0x10) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      goto LAB_180010a62;
    }
  }
  *puVar8 = DAT_180025040;
LAB_180010a62:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar7 != (code *)0x1) {
    if (param_1 == 8) {
      lVar2 = FUN_18000de10();
      (*pcVar7)(8,*(undefined4 *)(lVar2 + 0x10));
    }
    else {
      (*pcVar7)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var9 + 8) = lVar3, param_1 == 8)) {
      lVar3 = FUN_18000de10();
      *(undefined4 *)(lVar3 + 0x10) = local_res10;
    }
  }
  return 0;
}



// ===== FUN_180010ae0 @ 180010ae0 (size 8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180010ae0(undefined8 param_1)

{
  _DAT_180026748 = param_1;
  return;
}



// ===== FUN_180010ae8 @ 180010ae8 (size 156) =====

void FUN_180010ae8(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_180010fac(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_180010d54(*(int **)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_180010fb8(*param_4);
  return;
}



// ===== FUN_180010b84 @ 180010b84 (size 225) =====

void FUN_180010b84(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  int *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = DAT_180026758 + DAT_180026750;
  for (plVar3 = DAT_180026758; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_180010ae8(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}



// ===== common_flush_all @ 180010c68 (size 93) =====

/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28[0] = 8;
  local_28[1] = 8;
  local_res8[0] = param_1;
  FUN_180010b84(local_res10,local_28 + 1,&local_20,local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}



// ===== FUN_180010cc8 @ 180010cc8 (size 140) =====

undefined8 FUN_180010cc8(int *param_1,longlong *param_2)

{
  WCHAR *pWVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((byte)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    param_1[4] = 0;
    pWVar1 = *(WCHAR **)(param_1 + 2);
    *(WCHAR **)param_1 = pWVar1;
    if (0 < (int)uVar3) {
      uVar2 = FUN_180011688((longlong)param_1);
      uVar2 = FUN_180013b14(uVar2,pWVar1,uVar3,param_2);
      if (uVar3 != uVar2) {
        LOCK();
        param_1[5] = param_1[5] | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)param_1[5] >> 2 & 1) != 0) {
        LOCK();
        param_1[5] = param_1[5] & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}



// ===== FUN_180010d54 @ 180010d54 (size 210) =====

int FUN_180010d54(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180025fa4 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_180025238;
    puStack_28 = PTR_DAT_180025240;
  }
  if (param_1 == (int *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_180010dd9;
  }
  uVar2 = FUN_180010cc8(param_1,local_48);
  if ((int)uVar2 == 0) {
    if (((uint)param_1[5] >> 0xb & 1) != 0) {
      iVar1 = FUN_180011688((longlong)param_1);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_180010db4;
    }
    iVar1 = 0;
  }
  else {
LAB_180010db4:
    iVar1 = -1;
  }
LAB_180010dd9:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_18000d350(local_48);
    *(undefined4 *)(lVar3 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_18000d350(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar1;
}



// ===== FUN_180010e30 @ 180010e30 (size 288) =====

undefined8 FUN_180010e30(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  
  lVar1 = 0;
  lVar5 = 3;
  if (DAT_180026750 == 0) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = 3;
    if (2 < DAT_180026750) goto LAB_180010e6d;
  }
  DAT_180026750 = iVar4;
LAB_180010e6d:
  DAT_180026758 = _calloc_base((longlong)DAT_180026750,8);
  FUN_18000e350((LPVOID)0x0);
  if (DAT_180026758 == (LPVOID)0x0) {
    DAT_180026750 = 3;
    DAT_180026758 = _calloc_base(3,8);
    FUN_18000e350((LPVOID)0x0);
    if (DAT_180026758 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_1800257a8;
  puVar6 = &DAT_180025790;
  lVar2 = lVar1;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_180026758) = puVar6;
    if (*(longlong *)((&DAT_180026320)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar6 = puVar6 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}



// ===== __acrt_uninitialize_stdio @ 180010f50 (size 91) =====

/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_180013f64();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_180026758));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_180026758) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_18000e350(DAT_180026758);
  DAT_180026758 = (LPVOID)0x0;
  return;
}



// ===== FUN_180010fac @ 180010fac (size 11) =====

void FUN_180010fac(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180010fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(param_1 + 0x30);
  return;
}



// ===== FUN_180010fb8 @ 180010fb8 (size 11) =====

void FUN_180010fb8(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180010fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1 + 0x30);
  return;
}



// ===== FUN_180010fd0 @ 180010fd0 (size 328) =====

ulonglong FUN_180010fd0(undefined1 (*param_1) [32])

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  if (DAT_180025088 < 5) {
    pauVar2 = param_1;
    if (DAT_180025088 < 1) {
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



// ===== FUN_180011118 @ 180011118 (size 376) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180011118(ushort *param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_180026770 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_18000d3c0(param_4);
      }
      plVar2 = (longlong *)param_4[3];
      uVar1 = *(uint *)((longlong)plVar2 + 0xc);
      if (uVar1 != 0xfde9) {
        if (plVar2[0x27] == 0) {
          if (param_1 != (ushort *)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
          if ((((1 < (int)plVar2[1]) && ((int)plVar2[1] <= (int)param_3)) &&
              (iVar3 = FUN_18000fc6c(uVar1,9), iVar3 != 0)) ||
             (((ulonglong)(longlong)*(int *)(param_4[3] + 8) <= param_3 && (param_2[1] != 0)))) {
            return *(int *)(param_4[3] + 8);
          }
        }
        else {
          iVar3 = FUN_18000fc6c(uVar1,9);
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_4 + 6) = 1;
        *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
        return -1;
      }
      iVar3 = FUN_180011488(param_1,param_2,param_3,(uint *)&DAT_180026770,(longlong)param_4);
      if (iVar3 < 0) {
        return -1;
      }
      return iVar3;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}



// ===== FUN_180011290 @ 180011290 (size 56) =====

ulonglong FUN_180011290(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (ulonglong)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVar2 = 0xffffffff;
  if ((bVar1 & 0xf8) == 0xf0) {
    uVar2 = 4;
  }
  return uVar2;
}



// ===== FUN_1800112c8 @ 1800112c8 (size 445) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800112c8(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                       longlong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_180025040 ^ (ulonglong)auStack_78;
  puVar5 = (uint *)&DAT_180026778;
  if (param_4 != (uint *)0x0) {
    puVar5 = param_4;
  }
  pbVar6 = &DAT_180021158;
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) {
LAB_18001132a:
    uVar2 = 0xfffffffffffffffe;
  }
  else {
    if (*(short *)((longlong)puVar5 + 6) == 0) {
      uVar3 = FUN_180011290(pbVar6);
      uVar4 = (uint)uVar3;
      uVar8 = (ulonglong)(int)uVar4;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (uVar4 < 2) {
        if (puVar10 == (uint *)0x0) {
          return uVar8;
        }
        *puVar10 = (uint)bVar1;
        return uVar8;
      }
      if (uVar4 - 2 < 3) {
        bVar7 = (byte)uVar3;
        uVar4 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)bVar1;
LAB_1800113b5:
        uVar9 = (ulonglong)bVar7;
        uVar3 = uVar9;
        if (uVar2 <= uVar9) {
          uVar3 = uVar2;
        }
        while ((ulonglong)((longlong)pbVar6 - (longlong)param_2) < uVar3) {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_18001145e;
          uVar4 = bVar1 & 0x3f | uVar4 << 6;
        }
        if (uVar3 < uVar9) {
          *(ushort *)(puVar5 + 1) = (ushort)uVar8 & 0xff;
          *(ushort *)((longlong)puVar5 + 6) = (ushort)(byte)(bVar7 - (char)uVar3);
          *puVar5 = uVar4;
          goto LAB_18001132a;
        }
        if ((0x7ff < uVar4 - 0xd800) && (uVar4 < 0x110000)) {
          auStack_60[2] = 0x80;
          auStack_60[3] = 0x800;
          auStack_60[4] = 0x10000;
          if (auStack_60[uVar8 & 0xff] <= uVar4) {
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar4;
            }
            uVar2 = FUN_1800140bc(-(ulonglong)(uVar4 != 0) & uVar9,(undefined8 *)puVar5);
            return uVar2;
          }
        }
      }
    }
    else {
      bVar1 = (byte)puVar5[1];
      uVar8 = (ulonglong)bVar1;
      uVar4 = *puVar5;
      bVar7 = *(byte *)((longlong)puVar5 + 6);
      if ((((byte)(bVar1 - 2) < 3) && (bVar7 != 0)) && (bVar7 < bVar1)) goto LAB_1800113b5;
    }
LAB_18001145e:
    uVar2 = FUN_1800140c4((undefined8 *)puVar5,param_5);
  }
  return uVar2;
}



// ===== FUN_180011488 @ 180011488 (size 71) =====

void FUN_180011488(undefined2 *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_1800112c8((ulonglong)local_18,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}



// ===== FUN_1800114d0 @ 1800114d0 (size 437) =====

byte * FUN_1800114d0(ushort *param_1,undefined8 *param_2,ulonglong param_3,uint *param_4,
                    longlong param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  pbVar4 = (byte *)*param_2;
  pbVar3 = (byte *)0x0;
  puVar2 = param_1;
  if (param_1 == (ushort *)0x0) {
    while( true ) {
      if (*pbVar4 == 0) {
        uVar5 = 1;
      }
      else if (pbVar4[1] == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)(pbVar4[2] != 0) + 3;
      }
      uVar5 = FUN_1800112c8(0,pbVar4,uVar5,param_4,param_5);
      if (uVar5 == 0xffffffffffffffff) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return (byte *)0xffffffffffffffff;
      }
      if (uVar5 == 0) break;
      pbVar4 = pbVar4 + uVar5;
      pbVar1 = pbVar3 + 1;
      if (uVar5 != 4) {
        pbVar1 = pbVar3;
      }
      pbVar3 = pbVar1 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pbVar4 == 0) {
        uVar5 = 1;
      }
      else if (pbVar4[1] == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)(pbVar4[2] != 0) + 3;
      }
      local_res8[0] = 0;
      uVar5 = FUN_1800112c8((ulonglong)local_res8,pbVar4,uVar5,param_4,param_5);
      if (uVar5 == 0xffffffffffffffff) {
        *param_2 = pbVar4;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return (byte *)0xffffffffffffffff;
      }
      if (uVar5 == 0) {
        *puVar2 = 0;
        pbVar4 = pbVar3;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar2 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar2 = puVar2 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar2 = (ushort)local_res8[0];
      pbVar4 = pbVar4 + uVar5;
      puVar2 = puVar2 + 1;
    }
    *param_2 = pbVar4;
    pbVar3 = (byte *)((longlong)puVar2 - (longlong)param_1 >> 1);
  }
  return pbVar3;
}



// ===== FUN_180011688 @ 180011688 (size 39) =====

undefined4 FUN_180011688(longlong param_1)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 == 0) {
    p_Var2 = FUN_18000d96c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_18000d7c4();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}



// ===== __acrt_add_locale_ref @ 1800116b0 (size 139) =====

/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_180025248) &&
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
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  return;
}



// ===== __acrt_free_locale @ 18001173c (size 374) =====

/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(LPVOID param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(undefined ***)((longlong)param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_1800258a0)) &&
      (*(int **)((longlong)param_1 + 0xe0) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_18000e350(piVar1);
      __acrt_locale_free_monetary(*(longlong *)((longlong)param_1 + 0xf8));
    }
    piVar1 = *(int **)((longlong)param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_18000e350(piVar1);
      __acrt_locale_free_numeric(*(undefined8 **)((longlong)param_1 + 0xf8));
    }
    FUN_18000e350(*(LPVOID *)((longlong)param_1 + 0xe0));
    FUN_18000e350(*(LPVOID *)((longlong)param_1 + 0xf8));
  }
  if ((*(int **)((longlong)param_1 + 0x100) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0x100) == 0)) {
    FUN_18000e350((LPVOID)(*(longlong *)((longlong)param_1 + 0x108) + -0xfe));
    FUN_18000e350((LPVOID)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
    FUN_18000e350((LPVOID)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
    FUN_18000e350(*(LPVOID *)((longlong)param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((longlong)param_1 + 0x120));
  puVar3 = (undefined8 *)((longlong)param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x38);
  do {
    if ((((undefined *)puVar4[-2] != &DAT_180025248) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_18000e350(piVar1);
      FUN_18000e350((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_18000e350(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_18000e350(param_1);
  return;
}



// ===== __acrt_locale_add_lc_time_reference @ 1800118b4 (size 39) =====

/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_18001ad80)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}



// ===== __acrt_locale_free_lc_time_if_unreferenced @ 1800118dc (size 55) =====

/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_18001ad80)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    FUN_18000e350(param_1);
  }
  return;
}



// ===== __acrt_locale_release_lc_time_reference @ 180011914 (size 37) =====

/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_18001ad80)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}



// ===== __acrt_release_locale_ref @ 18001193c (size 168) =====

/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_180025248) &&
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
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  }
  return;
}



// ===== __acrt_update_thread_locale_data @ 1800119e4 (size 109) =====

/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  lVar1 = FUN_18000de10();
  if (((DAT_180025898 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(undefined ***)(lVar1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_180025fa8);
    __acrt_unlock(4);
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return ppuVar2;
}



// ===== _updatetlocinfoEx_nolock @ 180011a54 (size 101) =====

/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** _updatetlocinfoEx_nolock(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1800250e0)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}



// ===== __acrt_locale_free_monetary @ 180011abc (size 266) =====

/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1800258b8) {
      FUN_18000e350(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1800258c0) {
      FUN_18000e350(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_1800258c8) {
      FUN_18000e350(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_1800258d0) {
      FUN_18000e350(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_1800258d8) {
      FUN_18000e350(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_1800258e0) {
      FUN_18000e350(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_1800258e8) {
      FUN_18000e350(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_180025908) {
      FUN_18000e350(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_180025910) {
      FUN_18000e350(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_180025918) {
      FUN_18000e350(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_180025920) {
      FUN_18000e350(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_180025928) {
      FUN_18000e350(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_180025930) {
      FUN_18000e350(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}



// ===== __acrt_locale_free_numeric @ 180011bc8 (size 108) =====

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1800258a0) {
      FUN_18000e350((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1800258a8) {
      FUN_18000e350((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1800258b0) {
      FUN_18000e350((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_1800258f8) {
      FUN_18000e350((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_180025900) {
      FUN_18000e350((undefined *)param_1[0xc]);
    }
  }
  return;
}



// ===== FUN_180011c34 @ 180011c34 (size 50) =====

void FUN_180011c34(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_18000e350((LPVOID)*param_1);
  }
  return;
}



// ===== __acrt_locale_free_time @ 180011c68 (size 264) =====

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_180011c34(param_1,7);
    FUN_180011c34(param_1 + 7,7);
    FUN_180011c34(param_1 + 0xe,0xc);
    FUN_180011c34(param_1 + 0x1a,0xc);
    FUN_180011c34(param_1 + 0x26,2);
    FUN_18000e350((LPVOID)param_1[0x28]);
    FUN_18000e350((LPVOID)param_1[0x29]);
    FUN_18000e350((LPVOID)param_1[0x2a]);
    FUN_180011c34(param_1 + 0x2c,7);
    FUN_180011c34(param_1 + 0x33,7);
    FUN_180011c34(param_1 + 0x3a,0xc);
    FUN_180011c34(param_1 + 0x46,0xc);
    FUN_180011c34(param_1 + 0x52,2);
    FUN_18000e350((LPVOID)param_1[0x54]);
    FUN_18000e350((LPVOID)param_1[0x55]);
    FUN_18000e350((LPVOID)param_1[0x56]);
    FUN_18000e350((LPVOID)param_1[0x57]);
  }
  return;
}



// ===== wcsncmp @ 180011d70 (size 52) =====

/* Library Function - Single Match
    wcsncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}



// ===== FUN_180011da4 @ 180011da4 (size 399) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

BOOL FUN_180011da4(longlong *param_1,DWORD param_2,undefined8 param_3,undefined8 param_4,
                  LPWORD param_5,uint param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 (*lpSrcStr) [32];
  undefined1 *puVar8;
  undefined1 *puVar9;
  BOOL BVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  local_30 = DAT_180025040 ^ (ulonglong)local_58;
  FUN_18000be70(&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = FUN_18000fc6c(param_6,(ulonglong)((-(uint)(param_7 != 0) & 8) + 1));
  if (iVar3 == 0) {
    BVar10 = 0;
    puVar9 = auStack_88;
    goto LAB_180011efa;
  }
  uVar1 = (longlong)iVar3 * 2;
  uVar7 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar7 == 0) {
    lpSrcStr = (undefined1 (*) [32])0x0;
LAB_180011ee2:
    BVar10 = 0;
    BVar4 = 0;
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_180011efa;
  }
  else {
    if (uVar7 < 0x401) {
      uVar5 = uVar7 + 0xf;
      if (uVar5 <= uVar7) {
        uVar5 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar5 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar2;
      puVar8 = auStack_88 + lVar2;
      puVar6 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_180011ee2;
      *puVar6 = 0xcccc;
LAB_180011e90:
      lpSrcStr = (undefined1 (*) [32])(puVar6 + 4);
      puVar9 = puVar8;
    }
    else {
      puVar6 = _malloc_base(uVar7);
      lpSrcStr = (undefined1 (*) [32])0x0;
      puVar9 = auStack_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_180011e90;
      }
    }
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_180011ee2;
    *(undefined8 *)(puVar9 + -8) = 0x180011ea6;
    FUN_180015d10(lpSrcStr,0,uVar1);
    *(int *)(puVar9 + 0x28) = iVar3;
    *(undefined1 (**) [32])(puVar9 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar9 + -8) = 0x180011ec2;
    iVar3 = FUN_18000fc6c(param_6,1);
    if (iVar3 == 0) goto LAB_180011ee2;
    *(undefined8 *)(puVar9 + -8) = 0x180011edc;
    BVar4 = GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar3,param_5);
  }
  BVar10 = BVar4;
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x180011efa;
    FUN_18000e350(lpSrcStr[-1] + 0x10);
  }
LAB_180011efa:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar9 + -8) = 0x180011f19;
  return BVar10;
}



// ===== FUN_180011f40 @ 180011f40 (size 8) =====

undefined4 FUN_180011f40(void)

{
  return DAT_180026788;
}



// ===== FUN_180011f50 @ 180011f50 (size 43) =====

uint FUN_180011f50(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = DAT_180026788;
    DAT_180026788 = param_1;
  }
  else {
    p_Var2 = FUN_18000d96c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_18000d7c4();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_180011f80 @ 180011f80 (size 916) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180011f80(undefined1 *param_1,ulonglong param_2,ulonglong param_3,undefined *param_4)

{
  undefined1 uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 local_438 [62];
  undefined8 local_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_180025040 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    p_Var3 = FUN_18000d96c();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_18000d7c4();
  }
  else {
    FUN_180014148();
    FUN_180015d10((undefined1 (*) [32])local_438,0,0x1f0);
    FUN_180015d10((undefined1 (*) [32])local_248,0,0x1f0);
    if (1 < param_2) {
      local_448 = 0;
      puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_180012040:
      while (uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1, 8 < uVar9) {
        lVar5 = (uVar9 >> 1) * param_3;
        puVar7 = param_1 + lVar5;
        iVar2 = (*(code *)param_4)(param_1,puVar7);
        if ((0 < iVar2) && (puVar6 = puVar7, uVar9 = param_3, param_1 != puVar7)) {
          do {
            uVar1 = puVar6[-lVar5];
            puVar6[-lVar5] = *puVar6;
            *puVar6 = uVar1;
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar9 != 0);
        }
        iVar2 = (*(code *)param_4)(param_1,puVar10);
        if ((0 < iVar2) && (param_1 != puVar10)) {
          puVar6 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
            puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar2 = (*(code *)param_4)(puVar7);
        puVar6 = param_1;
        puVar8 = puVar10;
        if ((0 < iVar2) && (puVar7 != puVar10)) {
          puVar4 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar4[(longlong)puVar7 - (longlong)puVar10];
            puVar4[(longlong)puVar7 - (longlong)puVar10] = *puVar4;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
LAB_1800121b0:
        puVar4 = puVar7;
        if (puVar6 < puVar4) {
          do {
            puVar6 = puVar6 + param_3;
            if (puVar4 <= puVar6) goto LAB_1800121d0;
            iVar2 = (*(code *)param_4)(puVar6);
          } while (iVar2 < 1);
        }
        else {
LAB_1800121d0:
          do {
            puVar6 = puVar6 + param_3;
            if (puVar10 < puVar6) break;
            iVar2 = (*(code *)param_4)(puVar6);
          } while (iVar2 < 1);
        }
        do {
          puVar7 = puVar8;
          puVar8 = puVar7 + -param_3;
          if (puVar8 <= puVar4) break;
          iVar2 = (*(code *)param_4)(puVar8);
        } while (0 < iVar2);
        if (puVar6 <= puVar8) {
          if (puVar8 != puVar6) {
            puVar7 = puVar8;
            uVar9 = param_3;
            do {
              uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
              puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar7 = puVar6;
          if (puVar4 != puVar8) {
            puVar7 = puVar4;
          }
          goto LAB_1800121b0;
        }
        if (puVar4 < puVar7) {
          do {
            puVar7 = puVar7 + -param_3;
            if (puVar7 <= puVar4) goto LAB_180012257;
            iVar2 = (*(code *)param_4)(puVar7);
          } while (iVar2 == 0);
        }
        else {
LAB_180012257:
          do {
            puVar7 = puVar7 + -param_3;
            if (puVar7 <= param_1) break;
            iVar2 = (*(code *)param_4)(puVar7);
          } while (iVar2 == 0);
        }
        if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6)
        goto LAB_1800122ad;
        if (param_1 < puVar7) {
          local_438[local_448] = param_1;
          local_248[local_448] = puVar7;
          local_448 = local_448 + 1;
        }
        param_1 = puVar6;
        if (puVar10 <= puVar6) goto LAB_1800120c3;
      }
      for (; puVar6 = param_1, puVar7 = param_1, param_1 < puVar10; puVar10 = puVar10 + -param_3) {
        while (puVar8 = puVar6, puVar7 = puVar7 + param_3, puVar7 <= puVar10) {
          iVar2 = (*(code *)param_4)(puVar7,puVar8);
          puVar6 = puVar7;
          if (iVar2 < 1) {
            puVar6 = puVar8;
          }
        }
        if (puVar8 != puVar10) {
          puVar7 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar7[(longlong)puVar8 - (longlong)puVar10];
            puVar7[(longlong)puVar8 - (longlong)puVar10] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      goto LAB_1800120c3;
    }
  }
  return;
LAB_1800122ad:
  if (puVar6 < puVar10) {
    local_438[local_448] = puVar6;
    local_248[local_448] = puVar10;
    local_448 = local_448 + 1;
  }
  puVar10 = puVar7;
  if (puVar7 <= param_1) {
LAB_1800120c3:
    local_448 = local_448 + -1;
    if (local_448 < 0) {
      return;
    }
    param_1 = (undefined1 *)local_438[local_448];
    puVar10 = (undefined1 *)local_248[local_448];
  }
  goto LAB_180012040;
}



// ===== FUN_180012320 @ 180012320 (size 289) =====

undefined4 FUN_180012320(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_180012379;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_180012379;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      p_Var2 = FUN_18000d96c();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_18000d7c4();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_180012379:
  p_Var2 = FUN_18000d96c();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_18000d7c4();
  return 0x16;
}



// ===== FUN_180012450 @ 180012450 (size 154) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_180012450(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte local_38 [56];
  
  bVar2 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  local_38[0x13] = 0;
  local_38[0x14] = 0;
  local_38[0x15] = 0;
  local_38[0x16] = 0;
  local_38[0x17] = 0;
  local_38[0x18] = 0;
  local_38[0x19] = 0;
  local_38[0x1a] = 0;
  local_38[0x1b] = 0;
  local_38[0x1c] = 0;
  local_38[0x1d] = 0;
  local_38[0x1e] = 0;
  local_38[0x1f] = 0;
  while (bVar2 != 0) {
    local_38[(longlong)(int)(uint)bVar2 >> 3] =
         local_38[(longlong)(int)(uint)bVar2 >> 3] | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    if ((local_38[bVar2 >> 3] >> (bVar2 & 7) & 1) != 0) break;
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}



// ===== FUN_1800124f0 @ 1800124f0 (size 762) =====

/* WARNING: Removing unreachable block (ram,0x00018001278c) */
/* WARNING: Removing unreachable block (ram,0x000180012785) */
/* WARNING: Removing unreachable block (ram,0x00018001277e) */
/* WARNING: Removing unreachable block (ram,0x000180012777) */
/* WARNING: Removing unreachable block (ram,0x000180012770) */
/* WARNING: Removing unreachable block (ram,0x000180012769) */
/* WARNING: Removing unreachable block (ram,0x000180012762) */
/* WARNING: Removing unreachable block (ram,0x00018001275b) */
/* WARNING: Removing unreachable block (ram,0x000180012754) */
/* WARNING: Removing unreachable block (ram,0x00018001274d) */
/* WARNING: Removing unreachable block (ram,0x000180012746) */
/* WARNING: Removing unreachable block (ram,0x00018001273f) */
/* WARNING: Removing unreachable block (ram,0x000180012738) */
/* WARNING: Removing unreachable block (ram,0x000180012731) */
/* WARNING: Removing unreachable block (ram,0x00018001272a) */
/* WARNING: Removing unreachable block (ram,0x0001800125ed) */
/* WARNING: Removing unreachable block (ram,0x0001800125fc) */
/* WARNING: Removing unreachable block (ram,0x00018001260b) */
/* WARNING: Removing unreachable block (ram,0x00018001261a) */
/* WARNING: Removing unreachable block (ram,0x000180012629) */
/* WARNING: Removing unreachable block (ram,0x000180012635) */
/* WARNING: Removing unreachable block (ram,0x000180012641) */
/* WARNING: Removing unreachable block (ram,0x00018001264d) */
/* WARNING: Removing unreachable block (ram,0x000180012659) */
/* WARNING: Removing unreachable block (ram,0x000180012665) */
/* WARNING: Removing unreachable block (ram,0x000180012671) */
/* WARNING: Removing unreachable block (ram,0x00018001267d) */
/* WARNING: Removing unreachable block (ram,0x000180012689) */
/* WARNING: Removing unreachable block (ram,0x000180012695) */
/* WARNING: Removing unreachable block (ram,0x0001800126a1) */

byte * FUN_1800124f0(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte *pbVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  longlong lVar25;
  
  uVar21 = (ulonglong)((uint)param_2 & 0xf);
  pauVar20 = (undefined1 (*) [16])(param_2 + -uVar21);
  auVar33 = *pauVar20;
  switch(uVar21) {
  case 1:
    auVar33 = auVar33 >> 8;
    break;
  case 2:
    auVar33 = auVar33 >> 0x10;
    break;
  case 3:
    auVar33 = auVar33 >> 0x18;
    break;
  case 4:
    auVar33 = auVar33 >> 0x20;
    break;
  case 5:
    auVar33 = auVar33 >> 0x28;
    break;
  case 6:
    auVar33 = auVar33 >> 0x30;
    break;
  case 7:
    auVar33 = auVar33 >> 0x38;
    break;
  case 8:
    auVar33 = auVar33 >> 0x40;
    break;
  case 9:
    auVar33 = auVar33 >> 0x48;
    break;
  case 10:
    auVar33 = auVar33 >> 0x50;
    break;
  case 0xb:
    auVar33 = auVar33 >> 0x58;
    break;
  case 0xc:
    auVar33 = auVar33 >> 0x60;
    break;
  case 0xd:
    auVar33 = auVar33 >> 0x68;
    break;
  case 0xe:
    auVar33 = auVar33 >> 0x70;
    break;
  case 0xf:
    auVar33 = auVar33 >> 0x78;
  }
  auVar22[0] = -(auVar33[0] == '\0');
  auVar22[1] = -(auVar33[1] == '\0');
  auVar22[2] = -(auVar33[2] == '\0');
  auVar22[3] = -(auVar33[3] == '\0');
  auVar22[4] = -(auVar33[4] == '\0');
  auVar22[5] = -(auVar33[5] == '\0');
  auVar22[6] = -(auVar33[6] == '\0');
  auVar22[7] = -(auVar33[7] == '\0');
  auVar22[8] = -(auVar33[8] == '\0');
  auVar22[9] = -(auVar33[9] == '\0');
  auVar22[10] = -(auVar33[10] == '\0');
  auVar22[0xb] = -(auVar33[0xb] == '\0');
  auVar22[0xc] = -(auVar33[0xc] == '\0');
  auVar22[0xd] = -(auVar33[0xd] == '\0');
  auVar22[0xe] = -(auVar33[0xe] == '\0');
  auVar22[0xf] = -(auVar33[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar20)[1] != '\0') {
        pbVar19 = FUN_180012450(param_1,param_2);
        return pbVar19;
      }
      goto LAB_180012799;
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    lVar25 = auVar33._8_8_;
    switch(-uVar2) {
    case 0:
      auVar33 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar26._0_8_ = auVar33._0_8_ << 8;
      auVar26._8_8_ = lVar25 << 8 | auVar33._0_8_ >> 0x38;
      auVar33 = auVar26 >> 8;
      break;
    case 0xfffffff2:
      auVar27._0_8_ = auVar33._0_8_ << 0x10;
      auVar27._8_8_ = lVar25 << 0x10 | auVar33._0_8_ >> 0x30;
      auVar33 = auVar27 >> 0x10;
      break;
    case 0xfffffff3:
      auVar28._0_8_ = auVar33._0_8_ << 0x18;
      auVar28._8_8_ = lVar25 << 0x18 | auVar33._0_8_ >> 0x28;
      auVar33 = auVar28 >> 0x18;
      break;
    case 0xfffffff4:
      auVar29._0_8_ = auVar33._0_8_ << 0x20;
      auVar29._8_8_ = lVar25 << 0x20 | auVar33._0_8_ >> 0x20;
      auVar33 = auVar29 >> 0x20;
      break;
    case 0xfffffff5:
      auVar30._0_8_ = auVar33._0_8_ << 0x28;
      auVar30._8_8_ = lVar25 << 0x28 | auVar33._0_8_ >> 0x18;
      auVar33 = auVar30 >> 0x28;
      break;
    case 0xfffffff6:
      auVar31._0_8_ = auVar33._0_8_ << 0x30;
      auVar31._8_8_ = lVar25 << 0x30 | auVar33._0_8_ >> 0x10;
      auVar33 = auVar31 >> 0x30;
      break;
    case 0xfffffff7:
      auVar32._0_8_ = auVar33._0_8_ << 0x38;
      auVar32._8_8_ = lVar25 << 0x38 | auVar33._0_8_ >> 8;
      auVar33 = auVar32 >> 0x38;
      break;
    case 0xfffffff8:
      auVar33._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar33._0_8_ << 8;
      auVar33 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_ << 0x10;
      auVar33 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_ << 0x18;
      auVar33 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._0_8_ << 0x20;
      auVar33 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar33._0_8_ << 0x28;
      auVar33 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar33._0_8_ << 0x30;
      auVar33 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar33._0_8_ << 0x38;
      auVar33 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar21 == 0 || (ulonglong)uVar2 < 0x10 - uVar21) goto LAB_180012799;
  }
  auVar34 = pauVar20[1];
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  lVar25 = auVar34._8_8_;
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      uVar21 = auVar34._0_8_;
      switch(-uVar2) {
      case 0:
        auVar34 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar34._0_8_ = uVar21 << 8;
        auVar34._8_8_ = lVar25 << 8 | uVar21 >> 0x38;
        break;
      case 0xfffffff2:
        auVar34._0_8_ = uVar21 << 0x10;
        auVar34._8_8_ = lVar25 << 0x10 | uVar21 >> 0x30;
        break;
      case 0xfffffff3:
        auVar34._0_8_ = uVar21 << 0x18;
        auVar34._8_8_ = lVar25 << 0x18 | uVar21 >> 0x28;
        break;
      case 0xfffffff4:
        auVar34._0_8_ = uVar21 << 0x20;
        auVar34._8_8_ = lVar25 << 0x20 | uVar21 >> 0x20;
        break;
      case 0xfffffff5:
        auVar34._0_8_ = uVar21 << 0x28;
        auVar34._8_8_ = lVar25 << 0x28 | uVar21 >> 0x18;
        break;
      case 0xfffffff6:
        auVar34._0_8_ = uVar21 << 0x30;
        auVar34._8_8_ = lVar25 << 0x30 | uVar21 >> 0x10;
        break;
      case 0xfffffff7:
        auVar34._0_8_ = uVar21 << 0x38;
        auVar34._8_8_ = lVar25 << 0x38 | uVar21 >> 8;
        break;
      case 0xfffffff8:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar21;
        auVar34 = auVar18 << 0x40;
        break;
      case 0xfffffff9:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar21 << 8;
        auVar34 = auVar11 << 0x40;
        break;
      case 0xfffffffa:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar21 << 0x10;
        auVar34 = auVar12 << 0x40;
        break;
      case 0xfffffffb:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21 << 0x18;
        auVar34 = auVar13 << 0x40;
        break;
      case 0xfffffffc:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar21 << 0x20;
        auVar34 = auVar14 << 0x40;
        break;
      case 0xfffffffd:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar21 << 0x28;
        auVar34 = auVar15 << 0x40;
        break;
      case 0xfffffffe:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar21 << 0x30;
        auVar34 = auVar16 << 0x40;
        break;
      case 0xffffffff:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar21 << 0x38;
        auVar34 = auVar17 << 0x40;
      }
      auVar33 = auVar33 | auVar34;
LAB_180012799:
      bVar1 = *param_1;
      while( true ) {
        if (bVar1 == 0) {
          return (byte *)0x0;
        }
        auVar24[0] = -(bVar1 == auVar33[0]);
        auVar24[1] = -(bVar1 == auVar33[1]);
        auVar24[2] = -(bVar1 == auVar33[2]);
        auVar24[3] = -(bVar1 == auVar33[3]);
        auVar24[4] = -(bVar1 == auVar33[4]);
        auVar24[5] = -(bVar1 == auVar33[5]);
        auVar24[6] = -(bVar1 == auVar33[6]);
        auVar24[7] = -(bVar1 == auVar33[7]);
        auVar24[8] = -(bVar1 == auVar33[8]);
        auVar24[9] = -(bVar1 == auVar33[9]);
        auVar24[10] = -(bVar1 == auVar33[10]);
        auVar24[0xb] = -(bVar1 == auVar33[0xb]);
        auVar24[0xc] = -(bVar1 == auVar33[0xc]);
        auVar24[0xd] = -(bVar1 == auVar33[0xd]);
        auVar24[0xe] = -(bVar1 == auVar33[0xe]);
        auVar24[0xf] = -(bVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        bVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pbVar19 = FUN_180012450(param_1,param_2);
  return pbVar19;
}



// ===== FUN_1800128a8 @ 1800128a8 (size 8) =====

void FUN_1800128a8(uchar *param_1,uchar *param_2)

{
  _mbsdec_l(param_1,param_2,(_locale_t)0x0);
  return;
}



// ===== _mbsdec_l @ 1800128b0 (size 148) =====

/* Library Function - Single Match
    _mbsdec_l
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uchar * __cdecl _mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  __acrt_ptd *p_Var1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((_Start == (uchar *)0x0) || (_Pos == (uchar *)0x0)) {
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_18000d7c4();
  }
  else if (_Start < _Pos) {
    FUN_18000be70(local_28,(longlong *)_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = _Pos + (-1 - (ulonglong)((int)_Pos - (int)pbVar2 & 1));
    }
    if (local_10 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    return pbVar2;
  }
  return (uchar *)0x0;
}



// ===== FUN_180012944 @ 180012944 (size 817) =====

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180012944(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                       undefined8 param_6,int param_7,uint param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  LPCWSTR pWVar8;
  LPCWSTR pWVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  puVar10 = auStack_88;
  puVar12 = auStack_88;
  local_30 = DAT_180025040 ^ (ulonglong)local_38;
  if (0 < param_5) {
    __strncnt(param_4,(longlong)param_5);
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  uVar5 = FUN_18000fc6c(param_8,(ulonglong)((-(uint)(param_9 != 0) & 8) + 1));
  pWVar8 = (LPCWSTR)0x0;
  uVar3 = (uint)uVar5;
  puVar13 = auStack_88;
  if (uVar3 == 0) goto LAB_180012c4f;
  uVar5 = (longlong)(int)uVar3 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)(int)uVar3 * 2) < uVar5) & uVar5;
  if (uVar5 == 0) {
LAB_180012c35:
    uVar5 = 0;
    if (pWVar8 != (LPCWSTR)0x0) goto LAB_180012c3c;
  }
  else {
    if (uVar5 < 0x401) {
      uVar7 = uVar5 + 0xf;
      if (uVar7 <= uVar5) {
        uVar7 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar7 & 0xfffffffffffffff0);
      puVar12 = auStack_88 + lVar1;
      puVar10 = auStack_88 + lVar1;
      puVar6 = (undefined4 *)((longlong)local_38 + lVar1);
      pWVar8 = (LPCWSTR)0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_180012c35;
      *puVar6 = 0xcccc;
LAB_180012a50:
      pWVar8 = (LPCWSTR)(puVar6 + 4);
      puVar12 = puVar10;
    }
    else {
      puVar6 = _malloc_base(uVar5);
      pWVar8 = (LPCWSTR)0x0;
      puVar12 = auStack_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_180012a50;
      }
    }
    if (pWVar8 == (LPCWSTR)0x0) goto LAB_180012c35;
    *(uint *)(puVar12 + 0x28) = uVar3;
    *(LPCWSTR *)(puVar12 + 0x20) = pWVar8;
    *(undefined8 *)(puVar12 + -8) = 0x180012a7a;
    iVar2 = FUN_18000fc6c(param_8,1);
    if (iVar2 == 0) goto LAB_180012c35;
    *(undefined8 *)(puVar12 + 0x40) = 0;
    *(undefined8 *)(puVar12 + 0x38) = 0;
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined4 *)(puVar12 + 0x28) = 0;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + -8) = 0x180012aad;
    iVar2 = FUN_180010228(param_2,param_3,pWVar8,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                          *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                          *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
    pWVar9 = (LPCWSTR)0x0;
    uVar5 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_180012c35;
    if ((param_3 & 0x400) == 0) {
      uVar7 = uVar5 * 2 + 0x10;
      uVar7 = -(ulonglong)(uVar5 * 2 < uVar7) & uVar7;
      if (uVar7 == 0) goto LAB_180012c18;
      if (uVar7 < 0x401) {
        uVar5 = uVar7 + 0xf;
        if (uVar5 <= uVar7) {
          uVar5 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar12 + -8) = 0x180012b50;
        lVar1 = -(uVar5 & 0xfffffffffffffff0);
        puVar11 = puVar12 + lVar1;
        puVar6 = (undefined4 *)(puVar12 + lVar1 + 0x50);
        puVar12 = puVar12 + lVar1;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xcccc;
          puVar12 = puVar11;
LAB_180012b7e:
          pWVar9 = (LPCWSTR)(puVar6 + 4);
          goto LAB_180012b82;
        }
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x180012b6e;
        puVar6 = _malloc_base(uVar7);
        pWVar9 = (LPCWSTR)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xdddd;
          goto LAB_180012b7e;
        }
LAB_180012b82:
        if (pWVar9 != (LPCWSTR)0x0) {
          *(undefined8 *)(puVar12 + 0x40) = 0;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          *(int *)(puVar12 + 0x28) = iVar2;
          *(LPCWSTR *)(puVar12 + 0x20) = pWVar9;
          *(undefined8 *)(puVar12 + -8) = 0x180012bb4;
          iVar4 = FUN_180010228(param_2,param_3,pWVar8,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                                *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                                *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
          if (iVar4 != 0) {
            *(undefined8 *)(puVar12 + 0x38) = 0;
            *(undefined8 *)(puVar12 + 0x30) = 0;
            if (param_7 == 0) {
              *(undefined4 *)(puVar12 + 0x28) = 0;
              *(undefined8 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x180012be2;
              uVar3 = FUN_18000fcfc(param_8,0,pWVar9,iVar2,*(LPSTR *)(puVar12 + 0x20),
                                    *(int *)(puVar12 + 0x28),*(LPBOOL *)(puVar12 + 0x30),
                                    *(LPBOOL *)(puVar12 + 0x38));
              if (uVar3 == 0) goto LAB_180012c18;
            }
            else {
              *(int *)(puVar12 + 0x28) = param_7;
              *(undefined8 *)(puVar12 + 0x20) = param_6;
              *(undefined8 *)(puVar12 + -8) = 0x180012bfc;
              uVar3 = FUN_18000fcfc(param_8,0,pWVar9,iVar2,*(LPSTR *)(puVar12 + 0x20),
                                    *(int *)(puVar12 + 0x28),*(LPBOOL *)(puVar12 + 0x30),
                                    *(LPBOOL *)(puVar12 + 0x38));
              if (uVar3 == 0) goto LAB_180012c1d;
            }
            uVar5 = (ulonglong)uVar3;
            if (*(int *)(pWVar9 + -8) == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x180012c13;
              FUN_18000e350(pWVar9 + -8);
            }
            goto LAB_180012c3c;
          }
LAB_180012c18:
          if (pWVar9 != (LPCWSTR)0x0) {
LAB_180012c1d:
            if (*(int *)(pWVar9 + -8) == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x180012c2e;
              FUN_18000e350(pWVar9 + -8);
            }
          }
        }
      }
      uVar5 = 0;
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(undefined8 *)(puVar12 + 0x40) = 0;
        *(undefined8 *)(puVar12 + 0x38) = 0;
        *(undefined8 *)(puVar12 + 0x30) = 0;
        *(int *)(puVar12 + 0x28) = param_7;
        *(undefined8 *)(puVar12 + 0x20) = param_6;
        *(undefined8 *)(puVar12 + -8) = 0x180012b05;
        uVar3 = FUN_180010228(param_2,param_3,pWVar8,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                              *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                              *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
        uVar5 = (ulonglong)uVar3;
        if (uVar3 != 0) goto LAB_180012c3c;
      }
      goto LAB_180012c35;
    }
LAB_180012c3c:
    if (*(int *)(pWVar8 + -8) == 0xdddd) {
      *(undefined8 *)(puVar12 + -8) = 0x180012c4d;
      FUN_18000e350(pWVar8 + -8);
    }
  }
  uVar5 = uVar5 & 0xffffffff;
  puVar13 = puVar12;
LAB_180012c4f:
  *(undefined8 *)(puVar13 + -8) = 0x180012c5b;
  return uVar5;
}



// ===== __acrt_LCMapStringA @ 180012c78 (size 150) =====

/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                        undefined8 param_6,int param_7,uint param_8,int param_9)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  FUN_18000be70(&local_28,param_1);
  FUN_180012944(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}



// ===== FUN_180012d10 @ 180012d10 (size 20) =====

uint FUN_180012d10(void)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_initialize_multibyte();
  return (uint)uVar1 & 0xff ^ 1;
}



// ===== _msize_base @ 180012d30 (size 57) =====

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_18000d7c4();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000180012d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_180026318,0,param_1);
  return uVar2;
}



// ===== _realloc_base @ 180012d80 (size 122) =====

/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  undefined7 extraout_var;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar3 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_18000e350(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar3 = HeapReAlloc(DAT_180026318,0,param_1,param_2);
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
          iVar2 = FUN_180011f40();
        } while ((iVar2 != 0) &&
                (bVar1 = FUN_18000c0f0(param_2), (int)CONCAT71(extraout_var,bVar1) != 0));
      }
      p_Var4 = FUN_18000d96c();
      *(undefined4 *)p_Var4 = 0xc;
    }
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}



// ===== FUN_180012dfc @ 180012dfc (size 167) =====

undefined4 FUN_180012dfc(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (ushort *)0x0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_1800140e0(param_1,(ushort *)(&PTR_DAT_18001dbc0)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_18001dbc8 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if (0xe3 < (ulonglong)(longlong)iVar5) {
          return 0;
        }
        return *(undefined4 *)(&DAT_18001c160 + (longlong)iVar5 * 0x10);
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}



// ===== __acrt_lowio_create_handle_array @ 180012ea4 (size 165) =====

/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined8 * __acrt_lowio_create_handle_array(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar3;
  
  puVar2 = _calloc_base(0x40,0x48);
  puVar5 = (undefined8 *)0x0;
  if ((puVar2 != (undefined8 *)0x0) && (puVar5 = puVar2, puVar2 != puVar2 + 0x240)) {
    puVar6 = puVar2 + 6;
    do {
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + -6),4000,0);
      puVar6[-1] = 0xffffffffffffffff;
      puVar4 = (undefined1 *)((longlong)puVar6 + 0xe);
      *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) & 0xf8;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0xa0a0000;
      *(undefined1 *)((longlong)puVar6 + 0xc) = 10;
      puVar3 = (undefined8 *)0x0;
      do {
        *puVar4 = 0;
        uVar1 = (int)puVar3 + 1;
        puVar3 = (undefined8 *)(ulonglong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 < 5);
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 9;
    } while (puVar3 != puVar2 + 0x240);
  }
  FUN_18000e350((LPVOID)0x0);
  return puVar5;
}



// ===== __acrt_lowio_destroy_handle_array @ 180012f4c (size 80) =====

/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2019 Release */

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_18000e350(param_1);
  }
  return;
}



// ===== __acrt_lowio_ensure_fh_exists @ 180012f9c (size 168) =====

/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

longlong __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_180026720;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_180026320)[lVar5] == 0) {
        puVar4 = __acrt_lowio_create_handle_array();
        (&DAT_180026320)[lVar5] = puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_180026720 + 0x40;
        DAT_180026720 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    p_Var2 = FUN_18000d96c();
    *(undefined4 *)p_Var2 = 9;
    FUN_18000d7c4();
    lVar3 = 9;
  }
  return lVar3;
}



// ===== FUN_180013044 @ 180013044 (size 39) =====

void FUN_180013044(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180013064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((&DAT_180026320)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}



// ===== FUN_18001306c @ 18001306c (size 39) =====

void FUN_18001306c(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018001308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((&DAT_180026320)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}



// ===== FUN_180013094 @ 180013094 (size 186) =====

undefined8 FUN_180013094(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180026720)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_180026320)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_180026320)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_180014178();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180013114;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_180013114:
      *(undefined8 *)
       ((&DAT_180026320)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  p_Var3 = FUN_18000d96c();
  *(undefined4 *)p_Var3 = 9;
  p_Var3 = FUN_18000d948();
  *(undefined4 *)p_Var3 = 0;
  return 0xffffffff;
}



// ===== FUN_180013150 @ 180013150 (size 117) =====

undefined8 FUN_180013150(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_18000d948();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180026720)) {
      if ((*(byte *)((&DAT_180026320)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_180026320)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    p_Var1 = FUN_18000d948();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 9;
    FUN_18000d7c4();
  }
  return 0xffffffffffffffff;
}



// ===== FUN_1800131c8 @ 1800131c8 (size 139) =====

undefined8 FUN_1800131c8(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  
  FUN_180013044(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_180026320)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_180013150(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_18001323f;
    DVar3 = GetLastError();
    p_Var4 = FUN_18000d948();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_18000d96c();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_18001323f:
  FUN_18001306c(*param_4);
  return uVar5;
}



// ===== _commit @ 180013254 (size 145) =====

/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180026720)) &&
       ((*(byte *)((&DAT_180026320)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      uVar2 = FUN_1800131c8(local_res10,local_res20,local_18,local_res18);
      return (int)uVar2;
    }
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 9;
    FUN_18000d7c4();
  }
  return -1;
}



// ===== FUN_1800132e8 @ 1800132e8 (size 1171) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_1800132e8(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong *param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  WCHAR local_c4 [2];
  DWORD local_c0 [2];
  byte *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  uint local_88 [2];
  undefined8 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  byte local_4f;
  CHAR local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_180025040 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar16 = (longlong)(int)param_2 >> 6;
  uVar6 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_180026320)[lVar16] + 0x28 + uVar6 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar16;
  local_a0 = GetConsoleOutputCP();
  uVar13 = 0;
  if ((char)local_b0[5] == '\0') {
    FUN_18000d3c0(local_b0);
  }
  local_9c = *(int *)(local_b0[3] + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar15 = uVar13;
  local_68 = lVar16;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    do {
      local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
      local_c4[0] = L'\0';
      local_c4[1] = L'\0';
      uVar10 = 1;
      if (local_9c == 0xfde9) {
        pcVar8 = (char *)(uVar6 * 0x48 + 0x3e + (&DAT_180026320)[local_68]);
        uVar15 = uVar13;
        uVar17 = uVar13;
        do {
          uVar10 = (uint)uVar15;
          if (*pcVar8 == '\0') break;
          uVar10 = uVar10 + 1;
          uVar15 = (ulonglong)uVar10;
          uVar17 = uVar17 + 1;
          pcVar8 = pcVar8 + 1;
        } while ((longlong)uVar17 < 5);
        if ((longlong)uVar17 < 1) {
          cVar1 = (&DAT_180025940)[*param_3];
          iVar3 = cVar1 + 1;
          lVar16 = (longlong)local_b8 - (longlong)param_3;
          if (lVar16 < iVar3) {
            uVar15 = uVar13;
            if (0 < lVar16) {
              do {
                *(byte *)(uVar15 + uVar6 * 0x48 + 0x3e + (&DAT_180026320)[local_90]) =
                     param_3[uVar15];
                uVar10 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar10;
                uVar15 = uVar15 + 1;
              } while ((int)uVar10 < lVar16);
            }
            param_1[1] = param_1[1] + (int)lVar16;
            return param_1;
          }
          local_a8[0] = 0;
          local_a8[1] = 0;
          uVar10 = (iVar3 == 4) + 1;
          local_78 = param_3;
          pbVar7 = FUN_1800114d0((ushort *)local_c4,&local_78,(ulonglong)uVar10,local_a8,
                                 (longlong)local_b0);
          if (pbVar7 == (byte *)0xffffffffffffffff) {
            return param_1;
          }
          pbVar7 = param_3 + cVar1;
          lVar16 = local_90;
        }
        else {
          cVar1 = (&DAT_180025940)[*(byte *)((&DAT_180026320)[lVar16] + 0x3e + uVar6 * 0x48)];
          iVar3 = (cVar1 + 1) - uVar10;
          local_a8[0] = iVar3;
          lVar14 = (longlong)local_b8 - (longlong)param_3;
          uVar15 = (ulonglong)iVar3;
          if (lVar14 < (longlong)uVar15) {
            if (0 < lVar14) {
              uVar15 = uVar17;
              do {
                *(byte *)(uVar15 + uVar6 * 0x48 + 0x3e + (&DAT_180026320)[lVar16]) =
                     param_3[uVar15 - uVar17];
                uVar10 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar10;
                uVar15 = uVar15 + 1;
              } while ((int)uVar10 < lVar14);
            }
            param_1[1] = param_1[1] + (int)lVar14;
            return param_1;
          }
          puVar12 = (undefined1 *)(uVar6 * 0x48 + 0x3e + (&DAT_180026320)[local_68]);
          uVar9 = uVar13;
          do {
            *(undefined1 *)((longlong)&local_58 + uVar9) = *puVar12;
            uVar9 = uVar9 + 1;
            puVar12 = puVar12 + 1;
          } while ((longlong)uVar9 < (longlong)uVar17);
          uVar9 = uVar13;
          if (0 < (longlong)uVar15) {
            FUN_180015660((undefined8 *)((longlong)&local_58 + uVar17),(undefined8 *)param_3,uVar15)
            ;
          }
          do {
            *(undefined1 *)(uVar9 + uVar6 * 0x48 + 0x3e + (&DAT_180026320)[lVar16]) = 0;
            uVar9 = uVar9 + 1;
          } while ((longlong)uVar9 < (longlong)uVar17);
          local_88[0] = 0;
          local_88[1] = 0;
          local_80 = &local_58;
          uVar10 = (cVar1 + 1 == 4) + 1;
          pbVar7 = FUN_1800114d0((ushort *)local_c4,&local_80,(ulonglong)uVar10,local_88,
                                 (longlong)local_b0);
          if (pbVar7 == (byte *)0xffffffffffffffff) {
            return param_1;
          }
          pbVar7 = param_3 + (int)(local_a8[0] - 1);
        }
      }
      else {
        lVar14 = (&DAT_180026320)[lVar16];
        bVar2 = *(byte *)(lVar14 + 0x3d + uVar6 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(*(longlong *)local_b0[3] + (ulonglong)*param_3 * 2) < 0) {
            pbVar7 = param_3 + 1;
            if (local_b8 <= pbVar7) {
              *(byte *)(lVar14 + 0x3e + uVar6 * 0x48) = *param_3;
              pbVar7 = (byte *)((&DAT_180026320)[lVar16] + 0x3d + uVar6 * 0x48);
              *pbVar7 = *pbVar7 | 4;
              param_1[1] = (int)uVar15 + 1;
              return param_1;
            }
            iVar3 = FUN_180011118((ushort *)local_c4,param_3,2,local_b0);
            if (iVar3 == -1) {
              return param_1;
            }
            goto LAB_1800135f0;
          }
          uVar15 = 1;
          pbVar7 = param_3;
        }
        else {
          local_50 = *(byte *)(lVar14 + 0x3e + uVar6 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVar14 + 0x3d + uVar6 * 0x48) = bVar2 & 0xfb;
          uVar15 = 2;
          pbVar7 = &local_50;
        }
        iVar3 = FUN_180011118((ushort *)local_c4,pbVar7,uVar15,local_b0);
        pbVar7 = param_3;
        if (iVar3 == -1) {
          return param_1;
        }
      }
LAB_1800135f0:
      param_3 = pbVar7 + 1;
      uVar10 = FUN_18000fcfc(local_a0,0,local_c4,uVar10,local_48,5,(LPBOOL)0x0,(LPBOOL)0x0);
      hFile = local_70;
      if (uVar10 == 0) {
        return param_1;
      }
      local_c0[0] = 0;
      BVar4 = WriteFile(local_70,local_48,uVar10,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
LAB_180013749:
        DVar5 = GetLastError();
        *param_1 = DVar5;
        return param_1;
      }
      uVar11 = (param_1[2] - (int)local_98) + (int)param_3;
      param_1[1] = uVar11;
      if (local_c0[0] < uVar10) {
        return param_1;
      }
      if ((char)local_c8[0] == '\n') {
        local_c8[0] = 0xd;
        BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_180013749;
        if (local_c0[0] == 0) {
          return param_1;
        }
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        uVar11 = param_1[1];
      }
      uVar15 = (ulonglong)uVar11;
    } while (param_3 < local_b8);
  }
  return param_1;
}



// ===== FUN_18001377c @ 18001377c (size 263) =====

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18001377c(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x180013794;
  local_28 = DAT_180025040 ^ (ulonglong)auStackY_1468;
  pcVar5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_180026320)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pcVar5 <= param_3) {
      return param_1;
    }
    pcVar4 = local_1428;
    do {
      if (pcVar5 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)pcVar4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}



// ===== FUN_180013884 @ 180013884 (size 283) =====

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_180013884(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x18001389c;
  local_28 = DAT_180025040 ^ (ulonglong)auStackY_1468;
  psVar5 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_180026320)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar5 <= param_3) {
      return param_1;
    }
    psVar4 = local_1428;
    do {
      if (psVar5 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)((longlong)psVar4 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}



// ===== FUN_1800139a0 @ 1800139a0 (size 372) =====

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_1800139a0(DWORD *param_1,uint param_2,WCHAR *param_3,uint param_4)

{
  WCHAR WVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  WCHAR *pWVar7;
  WCHAR *pWVar8;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  WCHAR local_1448 [856];
  CHAR local_d98 [3424];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1800139bc;
  local_38 = DAT_180025040 ^ (ulonglong)auStackY_1498;
  hFile = *(HANDLE *)
           ((&DAT_180026320)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pWVar7 = param_3;
  do {
    if ((WCHAR *)((ulonglong)param_4 + (longlong)param_3) <= pWVar7) {
      return param_1;
    }
    pWVar8 = local_1448;
    do {
      if ((WCHAR *)((ulonglong)param_4 + (longlong)param_3) <= pWVar7) break;
      WVar1 = *pWVar7;
      pWVar7 = pWVar7 + 1;
      if (WVar1 == L'\n') {
        *pWVar8 = L'\r';
        pWVar8 = pWVar8 + 1;
      }
      *pWVar8 = WVar1;
      pWVar8 = pWVar8 + 1;
    } while (pWVar8 < local_1448 + 0x354);
    uVar2 = FUN_18000fcfc(0xfde9,0,local_1448,(int)((longlong)pWVar8 - (longlong)local_1448 >> 1),
                          local_d98,0xd55,(LPBOOL)0x0,(LPBOOL)0x0);
    if (uVar2 == 0) {
LAB_180013add:
      DVar4 = GetLastError();
      *param_1 = DVar4;
      return param_1;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        local_1458[0] = 0;
        BVar3 = WriteFile(hFile,local_d98 + uVar6,uVar2 - (int)uVar6,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_180013add;
        uVar5 = (int)uVar6 + local_1458[0];
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    param_1[1] = (int)pWVar7 - (int)param_3;
  } while( true );
}



// ===== FUN_180013b14 @ 180013b14 (size 285) =====

int FUN_180013b14(uint param_1,WCHAR *param_2,uint param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180026720 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180026320)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_180013044(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_180026320)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          iVar2 = FUN_180013c34(param_1,param_2,param_3,param_4);
        }
        FUN_18001306c(param_1);
        return iVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_18000d70c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}



// ===== FUN_180013c34 @ 180013c34 (size 815) =====

int FUN_180013c34(uint param_1,WCHAR *param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  WCHAR WVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  WCHAR WVar6;
  short sVar7;
  BOOL BVar8;
  DWORD DVar9;
  int iVar10;
  ulonglong uVar11;
  undefined7 extraout_var;
  DWORD *pDVar12;
  DWORD DVar13;
  longlong lVar14;
  ulonglong uVar15;
  WCHAR *pWVar16;
  undefined8 local_70;
  DWORD local_68;
  undefined8 local_60;
  DWORD local_50 [4];
  
  DVar13 = 0;
  uVar15 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (WCHAR *)0x0) {
LAB_180013c64:
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_18000d70c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  uVar11 = (ulonglong)(param_1 & 0x3f);
  lVar14 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_180026320)[lVar14] + 0x39 + uVar11 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_180013c64;
  if ((*(byte *)((&DAT_180026320)[lVar14] + 0x38 + uVar11 * 0x48) & 0x20) != 0) {
    thunk_FUN_180014180(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_60 = 0;
  bVar5 = FUN_18001405c(param_1);
  if (((int)CONCAT71(extraout_var,bVar5) == 0) ||
     (-1 < *(char *)((&DAT_180026320)[lVar14] + 0x38 + uVar11 * 0x48))) {
LAB_180013e1c:
    if (-1 < *(char *)((&DAT_180026320)[lVar14] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar8 = WriteFile(*(HANDLE *)
                         ((&DAT_180026320)[lVar14] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      DVar13 = local_68;
      uVar4 = local_70;
      if (BVar8 == 0) {
        DVar13 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar13);
        DVar13 = local_68;
        uVar4 = local_70;
      }
      goto LAB_180013ed1;
    }
    if (cVar1 == '\0') {
      pDVar12 = FUN_18001377c((DWORD *)&local_70,param_1,(char *)param_2,uVar15);
    }
    else if (cVar1 == '\x01') {
      pDVar12 = FUN_1800139a0((DWORD *)&local_70,param_1,param_2,param_3);
    }
    else {
      DVar13 = 0;
      uVar4 = local_60;
      if (cVar1 != '\x02') goto LAB_180013ed1;
      pDVar12 = FUN_180013884((DWORD *)&local_70,param_1,param_2,uVar15);
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_18000d3c0(param_4);
    }
    if ((*(longlong *)(param_4[3] + 0x138) == 0) &&
       (*(char *)((&DAT_180026320)[lVar14] + 0x39 + uVar11 * 0x48) == '\0')) goto LAB_180013e1c;
    local_50[0] = 0;
    BVar8 = GetConsoleMode(*(HANDLE *)((&DAT_180026320)[lVar14] + 0x28 + uVar11 * 0x48),local_50);
    if (BVar8 == 0) goto LAB_180013e1c;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar4 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar4 = local_70;
        if (param_2 < (WCHAR *)((longlong)param_2 + uVar15)) {
          local_70._4_4_ = 0;
          pWVar16 = param_2;
          iVar10 = local_70._4_4_;
          do {
            WVar2 = *pWVar16;
            WVar6 = FUN_180014238(WVar2);
            if (WVar6 != WVar2) {
LAB_180013de4:
              DVar9 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar9);
              uVar4 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar10 + 2,(DWORD)local_70);
            iVar3 = iVar10 + 2;
            if (WVar2 == L'\n') {
              sVar7 = FUN_180014238(0xd);
              if (sVar7 != 0xd) goto LAB_180013de4;
              local_70 = CONCAT44(iVar10 + 3,(DWORD)local_70);
              DVar13 = DVar13 + 1;
              iVar3 = iVar10 + 3;
            }
            iVar10 = iVar3;
            pWVar16 = pWVar16 + 1;
            uVar4 = local_70;
          } while (pWVar16 < (WCHAR *)((longlong)param_2 + uVar15));
        }
      }
      goto LAB_180013ed1;
    }
    pDVar12 = FUN_1800132e8((DWORD *)&local_70,param_1,(byte *)param_2,uVar15,param_4);
  }
  DVar13 = pDVar12[2];
  uVar4 = *(undefined8 *)pDVar12;
LAB_180013ed1:
  local_60 = uVar4;
  iVar10 = (int)((ulonglong)local_60 >> 0x20);
  if (iVar10 != 0) {
    return iVar10 - DVar13;
  }
  if ((uint)local_60 != 0) {
    if ((uint)local_60 == 5) {
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 7) = 1;
      *(undefined4 *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_18000d924((uint)local_60,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_180026320)[lVar14] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) != 0
      ) && ((char)*param_2 == '\x1a')) {
    return 0;
  }
  *(undefined4 *)((longlong)param_4 + 0x34) = 0;
  *(undefined1 *)(param_4 + 6) = 1;
  *(undefined4 *)((longlong)param_4 + 0x2c) = 0x1c;
  *(undefined1 *)(param_4 + 7) = 1;
  return -1;
}



// ===== FUN_180013f64 @ 180013f64 (size 178) =====

int FUN_180013f64(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_180026750; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_180026758 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_18001439c(*(int **)(DAT_180026758 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_180026758 + lVar4 * 8) + 0x30));
      FUN_18000e350(*(LPVOID *)(DAT_180026758 + lVar4 * 8));
      *(undefined8 *)(DAT_180026758 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}



// ===== __acrt_stdio_free_buffer_nolock @ 180014018 (size 66) =====

/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_18000e350((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



// ===== FUN_18001405c @ 18001405c (size 95) =====

byte FUN_18001405c(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180026720)) {
      return *(byte *)((&DAT_180026320)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    p_Var1 = FUN_18000d96c();
    *(undefined4 *)p_Var1 = 9;
    FUN_18000d7c4();
  }
  return 0;
}



// ===== FUN_1800140bc @ 1800140bc (size 8) =====

undefined8 FUN_1800140bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}



// ===== FUN_1800140c4 @ 1800140c4 (size 20) =====

undefined8 FUN_1800140c4(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}



// ===== FUN_1800140e0 @ 1800140e0 (size 88) =====

int FUN_1800140e0(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    do {
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = (uint)uVar2;
      if ((uint)uVar1 != (uint)uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = (uint)uVar1;
        }
        uVar4 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar4 = (uint)uVar2;
        }
      }
    } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    return uVar3 - uVar4;
  }
  return 0;
}



// ===== FUN_180014148 @ 180014148 (size 21) =====

void FUN_180014148(void)

{
  (*(code *)PTR__guard_check_icall_180017318)();
  return;
}



// ===== __strncnt @ 180014160 (size 21) =====

/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}



// ===== FUN_180014178 @ 180014178 (size 7) =====

undefined4 FUN_180014178(void)

{
  return DAT_18002678c;
}



// ===== FUN_180014180 @ 180014180 (size 175) =====

longlong FUN_180014180(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)FUN_180013150(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_18000d924(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_180026320)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)local_18[0].s;
    }
  }
  return -1;
}



// ===== FUN_180014238 @ 180014238 (size 64) =====

undefined2 FUN_180014238(undefined2 param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  undefined2 local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = param_1;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    local_res10[0] = 0;
    BVar2 = __dcrt_write_console(local_res8,1,local_res10);
    if (BVar2 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}



// ===== FUN_180014278 @ 180014278 (size 122) =====

ulonglong FUN_180014278(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18000d70c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1[5] >> 0xc & 1) == 0) {
      FUN_180010fac((longlong)param_1);
      uVar1 = FUN_1800142f4(param_1,param_2);
      FUN_180010fb8((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    FUN_18001477c((undefined8 *)param_1);
  }
  return 0xffffffff;
}



// ===== FUN_1800142f4 @ 1800142f4 (size 165) =====

ulonglong FUN_1800142f4(int *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18000d70c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if (((uint)param_1[5] >> 0xd & 1) != 0) {
      uVar2 = FUN_180010cc8(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      __acrt_stdio_free_buffer_nolock((undefined8 *)param_1);
      uVar1 = FUN_180011688((longlong)param_1);
      uVar3 = FUN_1800145e8(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (*(LPVOID *)(param_1 + 10) != (LPVOID)0x0) {
        FUN_18000e350(*(LPVOID *)(param_1 + 10));
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
    FUN_18001477c((undefined8 *)param_1);
  }
  return uVar2;
}



// ===== FUN_18001439c @ 18001439c (size 152) =====

ulonglong FUN_18001439c(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180025fa4 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_180025238;
    puStack_28 = PTR_DAT_180025240;
  }
  uVar1 = FUN_180014278(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000d350(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000d350(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}



// ===== __dcrt_lowio_ensure_console_output_initialized @ 180014440 (size 82) =====

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_180025a40 == (HANDLE)0xfffffffffffffffe) {
    DAT_180025a40 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_180025a40 != (HANDLE)0xffffffffffffffff;
}



// ===== FUN_180014494 @ 180014494 (size 28) =====

void FUN_180014494(void)

{
  if (DAT_180025a40 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_180025a40);
  }
  return;
}



// ===== __dcrt_write_console @ 1800144b0 (size 190) =====

/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_180025a40,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_180025a40 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_180025a40);
      }
      DAT_180025a40 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_180025a40,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}



// ===== FUN_180014570 @ 180014570 (size 119) =====

ulonglong FUN_180014570(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_180013044(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_180026320)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined4 *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1800146ac(uVar1,lVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  FUN_18001306c(*param_4);
  return uVar3;
}



// ===== FUN_1800145e8 @ 1800145e8 (size 193) =====

ulonglong FUN_1800145e8(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong *local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_180026720)) &&
       ((*(byte *)((&DAT_180026320)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_180014570(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
    FUN_18000d70c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}



// ===== FUN_1800146ac @ 1800146ac (size 205) =====

undefined8 FUN_1800146ac(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_180013150(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_180026320 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_180026320 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_180013150(2);
      lVar4 = FUN_180013150(1);
      if (lVar4 == lVar3) goto LAB_1800146ce;
    }
    hObject = (HANDLE)FUN_180013150(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_18001472c;
    }
  }
LAB_1800146ce:
  DVar2 = 0;
LAB_18001472c:
  FUN_180013094(param_1);
  *(undefined1 *)
   ((&DAT_180026320)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_18000d924(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// ===== FUN_18001477c @ 18001477c (size 28) =====

undefined4 FUN_18001477c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return uVar1;
}



// ===== FUN_1800147a0 @ 1800147a0 (size 178) =====

/* WARNING: Removing unreachable block (ram,0x000180014820) */
/* WARNING: Removing unreachable block (ram,0x000180014812) */
/* WARNING: Removing unreachable block (ram,0x0001800147b7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800147a0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  _DAT_180026790 = 0;
  DAT_180026794 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      _DAT_180026790 = 1;
      DAT_180026794 = 1;
    }
    else {
      _DAT_180026790 = 0;
    }
  }
  if ((_DAT_180026790 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_180026794 = 3;
      _DAT_180026790 = 3;
      return 0;
    }
  }
  return 0;
}



// ===== FUN_180014854 @ 180014854 (size 186) =====

/* WARNING: Removing unreachable block (ram,0x0001800148a9) */
/* WARNING: Switch with 1 destination removed at 0x0001800148f6 */

void FUN_180014854(void)

{
  bool bVar1;
  
  if (((IMAGE_LOAD_CONFIG_DIRECTORY64_180020fb0.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0
      ) && (DAT_180020fa8 != 0)) {
    bVar1 = FUN_180014910();
    if (bVar1) {
      (*(code *)PTR__guard_dispatch_icall_180017328)();
    }
    else {
      do {
      } while (DAT_1800267b0 != 0);
      LOCK();
      DAT_1800267b0 = 1;
      UNLOCK();
    }
    DAT_1800267b8 = DAT_1800267b8 + 1;
    if (DAT_1800267b8 == 1) {
      FUN_180014adc((LPCVOID)0x0,0,4,&DAT_1800267bc);
    }
    bVar1 = FUN_180014910();
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001800154f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1800267a8)(&DAT_1800267b0);
      return;
    }
    DAT_1800267b0 = 0;
  }
  return;
}



// ===== FUN_180014910 @ 180014910 (size 158) =====

bool FUN_180014910(void)

{
  HMODULE pHVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  HMODULE pHVar3;
  bool bVar4;
  
  if (DAT_180026798 != (HMODULE)0x1) {
    if (DAT_180026798 != (HMODULE)0x0) {
      return true;
    }
    hModule = GetModuleHandleW(L"KERNEL32.DLL");
    if (((hModule == (HMODULE)0x0) ||
        (pFVar2 = GetProcAddress(hModule,"AcquireSRWLockExclusive"), pFVar2 == (FARPROC)0x0)) ||
       (DAT_1800267a0 = pFVar2, pFVar2 = GetProcAddress(hModule,"ReleaseSRWLockExclusive"),
       pFVar2 == (FARPROC)0x0)) {
      hModule = (HMODULE)0x1;
      pFVar2 = DAT_1800267a8;
    }
    DAT_1800267a8 = pFVar2;
    pHVar3 = (HMODULE)0x0;
    LOCK();
    bVar4 = DAT_180026798 != (HMODULE)0x0;
    pHVar1 = hModule;
    if (bVar4) {
      pHVar3 = DAT_180026798;
      pHVar1 = DAT_180026798;
    }
    DAT_180026798 = pHVar1;
    UNLOCK();
    if ((bVar4) || (hModule != (HMODULE)0x1)) {
      return pHVar3 != (HMODULE)0x1;
    }
  }
  return false;
}



// ===== FUN_1800149b0 @ 1800149b0 (size 152) =====

void FUN_1800149b0(LPCVOID param_1,ulonglong param_2)

{
  code *pcVar1;
  SIZE_T SVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  _MEMORY_BASIC_INFORMATION local_68 [2];
  
  puVar6 = auStack_88;
  SVar2 = VirtualQuery(param_1,local_68,0x30);
  if (SVar2 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
    puVar6 = auStack_80;
  }
  if ((puVar6[0x44] & 0x44) != 0) {
    *(undefined8 *)(puVar6 + -8) = 0x1800149f0;
    GetSystemInfo((LPSYSTEM_INFO)(puVar6 + 0x50));
    uVar8 = (ulonglong)*(uint *)(puVar6 + 0x54);
    puVar7 = (undefined4 *)(-uVar8 & (ulonglong)param_1);
    uVar4 = *(uint *)(puVar6 + 0x54) - 1;
    uVar5 = (((ulonglong)(((uint)param_2 & uVar4) + ((uint)param_1 & uVar4)) - 1) + uVar8) / uVar8 +
            param_2 / uVar8;
    uVar3 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      do {
        LOCK();
        *puVar7 = *puVar7;
        UNLOCK();
        puVar7 = (undefined4 *)((longlong)puVar7 + uVar8);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// ===== FUN_180014a48 @ 180014a48 (size 145) =====

/* WARNING: Enum "SectionFlags": Some values do not have unique names */

longlong FUN_180014a48(dword *param_1,SectionFlags *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
  if ((0xd < *(uint *)(&UNK_180000080.field_0x4 + lVar3)) &&
     (*(uint *)(&UNK_180000080.field_0x70 + lVar3) != 0)) {
    uVar2 = 0;
    lVar1 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -8) +
            lVar3 + 0x180000018;
    if (*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar3 + 6) != 0) {
      do {
        if ((*(uint *)(lVar1 + 0xc) <=
             *(uint *)(IMAGE_DOS_HEADER_180000000.e_magic +
                      (ulonglong)*(uint *)(&UNK_180000080.field_0x70 + lVar3) + 0xc)) &&
           (*(uint *)(IMAGE_DOS_HEADER_180000000.e_magic +
                     (ulonglong)*(uint *)(&UNK_180000080.field_0x70 + lVar3) + 0xc) <
            *(uint *)(lVar1 + 0xc) + *(dword *)(lVar1 + 8))) {
          *param_1 = *(dword *)(lVar1 + 8);
          *param_2 = *(SectionFlags *)(lVar1 + 0x24);
          return (ulonglong)*(uint *)(lVar1 + 0xc) + 0x180000000;
        }
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x28;
      } while (uVar2 < *(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar3 + 6));
    }
  }
  return 0;
}



// ===== FUN_180014adc @ 180014adc (size 226) =====

/* WARNING: Enum "SectionFlags": Some values do not have unique names */

void FUN_180014adc(LPCVOID param_1,SIZE_T param_2,DWORD param_3,PDWORD param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  LPCVOID lpAddress;
  LPCVOID pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  dword local_48;
  SectionFlags local_44 [5];
  
  puVar6 = auStack_68;
  lpAddress = (LPCVOID)FUN_180014a48(&local_48,local_44);
  if (lpAddress == (LPCVOID)0x0) {
    *param_4 = 4;
    return;
  }
  if (DAT_1800267c0 == 0) {
    DAT_1800267c0 = 1;
    puVar6 = auStack_68;
    if ((local_44[0] & IMAGE_SCN_MEM_WRITE) == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = auStack_60;
    }
    *(undefined8 *)(puVar6 + -8) = 0x180014b4d;
    FUN_1800149b0(lpAddress,(ulonglong)*(uint *)(puVar6 + 0x20));
  }
  if (param_1 == (LPCVOID)0x0) {
    if (param_2 != 0) goto LAB_180014b5e;
LAB_180014b8e:
    param_2 = (SIZE_T)*(uint *)(puVar6 + 0x20);
  }
  else {
    puVar2 = puVar6;
    if (param_2 == 0) {
LAB_180014b5e:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar5 = puVar6 + 8;
      puVar6 = puVar6 + 8;
      puVar2 = puVar5;
      if (param_1 == (LPCVOID)0x0) goto LAB_180014b8e;
    }
    puVar6 = puVar2;
    pvVar4 = (LPCVOID)((ulonglong)*(uint *)(puVar6 + 0x20) + (longlong)lpAddress);
    if ((((pvVar4 <= lpAddress) || ((LPCVOID)((longlong)param_1 + param_2) <= param_1)) ||
        (param_1 < lpAddress)) ||
       (lpAddress = param_1, pvVar4 < (LPCVOID)((longlong)param_1 + param_2))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = puVar6 + 8;
      lpAddress = param_1;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x180014ba7;
  BVar3 = VirtualProtect(lpAddress,param_2,param_3,param_4);
  if (BVar3 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
  }
  return;
}



// ===== FUN_180014bc0 @ 180014bc0 (size 169) =====

/* WARNING: Removing unreachable block (ram,0x000180014c11) */

void FUN_180014bc0(void)

{
  bool bVar1;
  DWORD local_res10 [6];
  
  if (((IMAGE_LOAD_CONFIG_DIRECTORY64_180020fb0.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0
      ) && (DAT_180020fa8 != 0)) {
    bVar1 = FUN_180014910();
    if (bVar1) {
      (*(code *)PTR__guard_dispatch_icall_180017328)();
    }
    else {
      do {
      } while (DAT_1800267b0 != 0);
      LOCK();
      DAT_1800267b0 = 1;
      UNLOCK();
    }
    DAT_1800267b8 = DAT_1800267b8 + -1;
    if (DAT_1800267b8 == 0) {
      FUN_180014adc((LPCVOID)0x0,0,DAT_1800267bc,local_res10);
    }
    bVar1 = FUN_180014910();
    if (bVar1) {
      (*(code *)PTR__guard_dispatch_icall_180017328)(&DAT_1800267b0);
    }
    else {
      DAT_1800267b0 = 0;
    }
  }
  return;
}



// ===== FUN_180014c6c @ 180014c6c (size 911) =====

/* WARNING: Removing unreachable block (ram,0x000180014f54) */

HMODULE FUN_180014c6c(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  HMODULE pHVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  HMODULE pHVar6;
  HMODULE hLibModule;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *local_res8 [4];
  undefined4 local_98 [2];
  uint *local_90;
  longlong *local_88;
  LPCSTR local_80;
  ulonglong local_78;
  char *pcStack_70;
  HMODULE local_68;
  HMODULE local_60;
  DWORD local_58;
  
  FUN_180014854();
  local_80 = (LPCSTR)((ulonglong)param_1[1] + 0x180000000);
  uVar3 = param_1[5];
  plVar8 = (longlong *)((ulonglong)param_1[2] + 0x180000000);
  local_res8[0] = (undefined4 *)CONCAT44(local_res8[0]._4_4_,param_1[7]);
  local_98[0] = 0x48;
  local_68 = (HMODULE)0x0;
  local_60 = (HMODULE)0x0;
  local_58 = 0;
  local_78 = 0;
  pcStack_70 = (char *)0x0;
  local_90 = param_1;
  local_88 = param_2;
  if ((*param_1 & 1) == 0) {
    local_res8[0] = local_98;
    FUN_180014bc0();
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)local_res8);
    pHVar6 = (HMODULE)0x0;
  }
  else {
    hLibModule = (HMODULE)*plVar8;
    lVar1 = ((longlong)((longlong)param_2 + (-0x180000000 - (ulonglong)param_1[3])) >> 3 &
            0xffffffffU) * 8;
    lVar7 = (ulonglong)param_1[4] + lVar1;
    uVar5 = -(int)((longlong)*(undefined8 *)(lVar7 + 0x180000000) >> 0x3f);
    local_78 = (ulonglong)uVar5 ^ 1;
    if (uVar5 == 1) {
      pcStack_70 = (char *)(ulonglong)*(ushort *)(lVar7 + 0x180000000);
    }
    else {
      pcStack_70 = IMAGE_DOS_HEADER_180000000.e_magic +
                   (ulonglong)*(uint *)(lVar7 + 0x180000000) + 2;
    }
    pHVar6 = (HMODULE)0x0;
    if ((PTR_FUN_180021110 == (undefined *)0x0) ||
       (pHVar6 = (HMODULE)(*(code *)PTR__guard_dispatch_icall_180017328)(0,local_98),
       pHVar6 == (HMODULE)0x0)) {
      if (hLibModule == (HMODULE)0x0) {
        if ((((PTR_FUN_180021110 == (undefined *)0x0) ||
             (hLibModule = (HMODULE)(*(code *)PTR__guard_dispatch_icall_180017328)(1,local_98),
             hLibModule == (HMODULE)0x0)) &&
            (hLibModule = LoadLibraryExA(local_80,(HANDLE)0x0,0), hLibModule == (HMODULE)0x0)) &&
           ((local_58 = GetLastError(), DAT_180020fa0 == 0 ||
            (hLibModule = (HMODULE)(*(code *)PTR__guard_dispatch_icall_180017328)(3,local_98),
            hLibModule == (HMODULE)0x0)))) {
          local_res8[0] = local_98;
          FUN_180014bc0();
          RaiseException(0xc06d007e,0,1,(ULONG_PTR *)local_res8);
          return local_60;
        }
        LOCK();
        pHVar2 = (HMODULE)*plVar8;
        *plVar8 = (longlong)hLibModule;
        UNLOCK();
        if (pHVar2 == hLibModule) {
          FreeLibrary(hLibModule);
        }
      }
      local_68 = hLibModule;
      if (PTR_FUN_180021110 != (undefined *)0x0) {
        pHVar6 = (HMODULE)(*(code *)PTR__guard_dispatch_icall_180017328)(2,local_98);
      }
      if (((pHVar6 == (HMODULE)0x0) &&
          ((((param_1[5] == 0 || (param_1[7] == 0)) ||
            ((lVar7 = (longlong)hLibModule[0xf].unused,
             *(int *)((longlong)&hLibModule->unused + lVar7) != 0x4550 ||
             (((*(int *)((longlong)&hLibModule[2].unused + lVar7) != (DWORD)local_res8[0] ||
               (hLibModule != *(HMODULE *)((longlong)&hLibModule[0xc].unused + lVar7))) ||
              (pHVar6 = *(HMODULE *)((ulonglong)uVar3 + 0x180000000 + lVar1), pHVar6 == (HMODULE)0x0
              )))))) &&
           (pHVar6 = (HMODULE)GetProcAddress(hLibModule,pcStack_70), pHVar6 == (HMODULE)0x0)))) &&
         ((local_58 = GetLastError(), DAT_180020fa0 == 0 ||
          (pHVar6 = (HMODULE)(*(code *)PTR__guard_dispatch_icall_180017328)(4,local_98),
          pHVar6 == (HMODULE)0x0)))) {
        local_res8[0] = local_98;
        FUN_180014bc0();
        RaiseException(0xc06d007f,0,1,(ULONG_PTR *)local_res8);
        FUN_180014854();
        pHVar6 = local_60;
      }
      if (((IMAGE_LOAD_CONFIG_DIRECTORY64_180020fb0.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT)
           == 0) || (DAT_180020fa8 != 0)) {
        *param_2 = (longlong)pHVar6;
      }
      else {
        bVar4 = FUN_180014910();
        if (bVar4) {
          (*(code *)PTR__guard_dispatch_icall_180017328)(&DAT_1800267b0);
        }
        else {
          do {
          } while (DAT_1800267b0 != 0);
          LOCK();
          DAT_1800267b0 = 1;
          UNLOCK();
        }
        FUN_180014adc(param_2,8,4,(PDWORD)local_res8);
        *param_2 = (longlong)pHVar6;
        FUN_180014adc(param_2,8,(DWORD)local_res8[0],(PDWORD)local_res8);
        bVar4 = FUN_180014910();
        if (bVar4) {
          (*(code *)PTR__guard_dispatch_icall_180017328)(&DAT_1800267b0);
        }
        else {
          DAT_1800267b0 = 0;
        }
      }
    }
    if (PTR_FUN_180021110 != (undefined *)0x0) {
      local_58 = 0;
      local_68 = hLibModule;
      local_60 = pHVar6;
      (*(code *)PTR__guard_dispatch_icall_180017328)(5,local_98);
    }
    FUN_180014bc0();
  }
  return pHVar6;
}



// ===== FUN_180015000 @ 180015000 (size 29) =====

undefined8 FUN_180015000(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_180015020(param_2,param_4,*(int **)(param_4 + 0x38));
  return 1;
}



// ===== FUN_180015020 @ 180015020 (size 425) =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180015020(undefined8 param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  
  pbVar7 = (byte *)(*(longlong *)(param_2 + 8) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar1 = pbVar7[3];
  if (2 < (*pbVar7 & 7)) {
    uVar9 = bVar1 & 0x1f;
    if ((bVar1 & 0x1f) != 0) {
      if ((*pbVar7 & 0x40) == 0) {
        lVar4 = (ulonglong)uVar9 + 4;
      }
      else {
        lVar4 = (ulonglong)uVar9 * 2 + 5;
      }
      pbVar7 = pbVar7 + lVar4;
      uVar6 = 0;
      pbVar8 = pbVar7;
      if (bVar1 >> 5 != 0) {
        do {
          pbVar7 = pbVar8 + 3;
          uVar3 = (uint)(*pbVar8 >> 3);
          if (uVar3 != 0) {
            if ((*pbVar8 & 2) == 0) {
              pbVar7 = pbVar8 + (ulonglong)uVar3 + 6;
            }
            else {
              pbVar7 = pbVar7 + (ulonglong)uVar3 * 2 + 4;
            }
          }
          uVar6 = uVar6 + 1;
          pbVar8 = pbVar7;
        } while (uVar6 < bVar1 >> 5);
      }
      uVar6 = 0;
      if ((bVar1 & 0x1f) != 0) {
        do {
          bVar1 = *pbVar7;
          bVar10 = bVar1;
          if (((bVar1 < 4) || (bVar10 = bVar1 & 0xf, (byte)(bVar10 - 8) < 3)) ||
             (bVar10 = bVar1 & 7, (byte)(bVar10 - 4) < 4)) {
            if (bVar10 == 0) break;
            if (0x20 < bVar10) goto switchD_18001515f_caseD_4;
          }
          else {
            if ((bVar1 & 0x3f) != 0x20) goto switchD_18001515f_caseD_4;
            bVar10 = 0x20;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(byte *)((longlong)&UINT_1800151d8 + (ulonglong)bVar10)) {
          case 0:
            lVar4 = 2;
            break;
          case 1:
            lVar4 = 5;
            break;
          case 2:
            lVar4 = 3;
            break;
          case 3:
            lVar4 = 1;
            break;
          case 4:
switchD_18001515f_caseD_4:
            FUN_180006500();
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
          case 5:
            return (ulonglong)
                   (*(byte *)((longlong)&UINT_1800151d8 + (ulonglong)bVar10) ^ 0x8b256438);
          }
          pbVar7 = pbVar7 + lVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar9);
      }
    }
  }
  return (longlong)*param_3 & 0xfffffffffffffff8;
}



// ===== FUN_180015200 @ 180015200 (size 67) =====

longlong FUN_180015200(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 0;
  lVar2 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (ulonglong)*(ushort *)(lVar2 + 0x14) + 0x18 + lVar2;
  if (*(ushort *)(lVar2 + 6) != 0) {
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar3 < *(ushort *)(lVar2 + 6));
  }
  return 0;
}



// ===== FUN_180015250 @ 180015250 (size 72) =====

ulonglong FUN_180015250(longlong param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  longlong lVar3;
  ulonglong uVar2;
  
  bVar1 = FUN_1800152a0((short *)&IMAGE_DOS_HEADER_180000000);
  uVar2 = CONCAT71(extraout_var,bVar1);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_180015200(0x180000000,param_1 - 0x180000000);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = (ulonglong)(~*(uint *)(lVar3 + 0x24) >> 0x1f);
    }
  }
  return uVar2;
}



// ===== FUN_1800152a0 @ 1800152a0 (size 43) =====

bool FUN_1800152a0(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}



// ===== FUN_1800152d0 @ 1800152d0 (size 114) =====

undefined8 FUN_1800152d0(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  puVar2 = (uint *)param_4[7];
  uVar1 = *puVar2;
  FUN_180015020(param_2,(longlong)param_4,(int *)(puVar2 + (ulonglong)uVar1 * 4 + 1));
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    uVar3 = FUN_180007f60(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  return 1;
}



// ===== FUN_180015350 @ 180015350 (size 104) =====

undefined8 FUN_180015350(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4[7];
  FUN_180015020(param_2,(longlong)param_4,(int *)(uVar1 + 4));
  if ((*(uint *)(uVar1 + 4) & ((*(byte *)(param_1 + 1) & 0x66) != 0) + 1) != 0) {
    uVar2 = FUN_180007c20(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}



// ===== __chkstk @ 1800153d0 (size 78) =====

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



// ===== FUN_180015420 @ 180015420 (size 74) =====

void FUN_180015420(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  uVar1 = FUN_180007f60(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    pvVar2 = FUN_180008400();
    *(PEXCEPTION_RECORD *)((longlong)pvVar2 + 0x20) = param_1;
    pvVar2 = FUN_180008400();
    *(longlong *)((longlong)pvVar2 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_18000d23c();
  }
  return;
}



// ===== FUN_180015470 @ 180015470 (size 104) =====

undefined8 FUN_180015470(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4[7];
  FUN_180015020(param_2,(longlong)param_4,(int *)(uVar1 + 4));
  if ((*(uint *)(uVar1 + 4) & ((*(byte *)(param_1 + 1) & 0x66) != 0) + 1) != 0) {
    uVar2 = FUN_180007ca0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}



// ===== _guard_dispatch_icall @ 1800154f0 (size 2) =====

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001800154f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== memcmp @ 180015560 (size 198) =====

/* Library Function - Single Match
    memcmp
   
   Library: Visual Studio */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar3 = (longlong)_Buf2 - (longlong)_Buf1;
  if (7 < _Size) {
    for (; ((ulonglong)_Buf1 & 7) != 0; _Buf1 = (void *)((longlong)_Buf1 + 1)) {
      bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
      if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) goto LAB_1800155a3;
      _Size = _Size - 1;
    }
    if (_Size >> 3 != 0) {
      uVar4 = _Size >> 5;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) goto LAB_180015614;
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 8);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 8)) {
LAB_180015610:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180015614;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x10);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x10)) {
LAB_18001560c:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180015610;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x18);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x18)) {
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_18001560c;
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 0x1f;
      }
      uVar4 = _Size >> 3;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) {
LAB_180015614:
            uVar4 = *(ulonglong *)(lVar3 + (longlong)_Buf1);
            uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                            (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                            (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                           (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                           (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38));
            return (1 - uVar1) - (uint)(uVar1 != 0);
          }
          _Buf1 = (void *)((longlong)_Buf1 + 8);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
    bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
    if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) break;
    _Buf1 = (void *)((longlong)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_1800155a3:
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}



// ===== FUN_180015650 @ 180015650 (size 16) =====

void FUN_180015650(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// ===== FUN_180015660 @ 180015660 (size 1369) =====

void FUN_180015660(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

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
  undefined1 (*pauVar26) [32];
  undefined1 (*pauVar27) [32];
  undefined8 *puVar28;
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
    puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar25;
    uVar12 = puVar25[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar25 = uVar11;
    puVar25[1] = uVar12;
    return;
  }
  puVar25 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar25 = param_1;
  }
  if (param_1 < puVar25) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (longlong)param_2 - (longlong)param_1;
    puVar25 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar25;
    uVar13 = puVar25[1];
    puVar28 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar25 = puVar28;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((ulonglong)puVar28 & 0xf) != 0) {
      puVar25 = (undefined8 *)((ulonglong)puVar28 & 0xfffffffffffffff0);
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
      *puVar28 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (longlong)puVar25 - (longlong)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar25 = uVar32;
      puVar25[1] = uVar33;
      puVar28 = puVar25;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar25 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x20);
        uVar13 = *puVar25;
        uVar32 = puVar25[1];
        puVar25 = puVar28 + -0x10;
        puVar28[-2] = *puVar1;
        puVar28[-1] = uVar12;
        puVar28[-4] = uVar13;
        puVar28[-3] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar28[-6] = *puVar1;
        puVar28[-5] = uVar12;
        puVar28[-8] = uVar13;
        puVar28[-7] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar28[-10] = *puVar1;
        puVar28[-9] = uVar12;
        puVar28[-0xc] = uVar13;
        puVar28[-0xb] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
        uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar28[-0xe] = uVar12;
        puVar28[-0xd] = uVar13;
        *puVar25 = uVar32;
        puVar28[-0xf] = uVar33;
        puVar28 = puVar25;
      }
      puVar28[-0xe] = uVar12;
      puVar28[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar25 = uVar32;
      puVar25[1] = uVar33;
      puVar25 = puVar25 + -2;
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    return;
  }
  if (2 < DAT_180025088) {
    if ((0x2000 < param_3) && (param_3 < 0x180001)) {
      puVar25 = param_1 + 8;
      if (param_2 < param_1) {
        puVar25 = param_2;
      }
      if ((puVar25 <= param_2) && (((byte)DAT_180025d24 & 2) != 0)) goto code_r0x00018001565b;
    }
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
    uVar32 = *puVar25;
    uVar33 = puVar25[1];
    uVar14 = puVar25[2];
    uVar15 = puVar25[3];
    if (0x100 < param_3) {
      lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
      pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
      pauVar26 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
      param_3 = param_3 + lVar30;
      if (0x100 < param_3) {
        if (0x180000 < param_3) {
          do {
            uVar29 = param_3;
            pauVar27 = pauVar26;
            pauVar24 = pauVar23;
            auVar3 = pauVar27[1];
            auVar4 = pauVar27[2];
            auVar5 = pauVar27[3];
            auVar6 = vmovntdq_avx(*pauVar27);
            *pauVar24 = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[1] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[2] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[3] = auVar3;
            auVar3 = pauVar27[5];
            auVar4 = pauVar27[6];
            auVar5 = pauVar27[7];
            auVar6 = vmovntdq_avx(pauVar27[4]);
            pauVar24[4] = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[5] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[6] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[7] = auVar3;
            pauVar23 = pauVar24 + 8;
            pauVar26 = pauVar27 + 8;
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
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar27 + uVar31));
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
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[1] + uVar31));
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
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[2] + uVar31));
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
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[3] + uVar31));
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
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[4] + uVar31));
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
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[5] + uVar31));
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
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[6] + uVar31));
            *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
          default:
            puVar25 = (undefined8 *)(pauVar24[-1] + uVar29);
            *puVar25 = uVar32;
            puVar25[1] = uVar33;
            puVar25[2] = uVar14;
            puVar25[3] = uVar15;
          case 0x100:
            *param_1 = uVar10;
            param_1[1] = uVar11;
            param_1[2] = uVar12;
            param_1[3] = uVar13;
            return;
          }
        }
        do {
          uVar10 = *(undefined8 *)(*pauVar26 + 8);
          uVar11 = *(undefined8 *)(*pauVar26 + 0x10);
          uVar12 = *(undefined8 *)(*pauVar26 + 0x18);
          uVar13 = *(undefined8 *)pauVar26[1];
          uVar32 = *(undefined8 *)(pauVar26[1] + 8);
          uVar33 = *(undefined8 *)(pauVar26[1] + 0x10);
          uVar14 = *(undefined8 *)(pauVar26[1] + 0x18);
          uVar15 = *(undefined8 *)pauVar26[2];
          uVar16 = *(undefined8 *)(pauVar26[2] + 8);
          uVar17 = *(undefined8 *)(pauVar26[2] + 0x10);
          uVar18 = *(undefined8 *)(pauVar26[2] + 0x18);
          uVar19 = *(undefined8 *)pauVar26[3];
          uVar20 = *(undefined8 *)(pauVar26[3] + 8);
          uVar21 = *(undefined8 *)(pauVar26[3] + 0x10);
          uVar22 = *(undefined8 *)(pauVar26[3] + 0x18);
          *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar26;
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
          uVar10 = *(undefined8 *)(pauVar26[4] + 8);
          uVar11 = *(undefined8 *)(pauVar26[4] + 0x10);
          uVar12 = *(undefined8 *)(pauVar26[4] + 0x18);
          uVar13 = *(undefined8 *)pauVar26[5];
          uVar32 = *(undefined8 *)(pauVar26[5] + 8);
          uVar33 = *(undefined8 *)(pauVar26[5] + 0x10);
          uVar14 = *(undefined8 *)(pauVar26[5] + 0x18);
          uVar15 = *(undefined8 *)pauVar26[6];
          uVar16 = *(undefined8 *)(pauVar26[6] + 8);
          uVar17 = *(undefined8 *)(pauVar26[6] + 0x10);
          uVar18 = *(undefined8 *)(pauVar26[6] + 0x18);
          uVar19 = *(undefined8 *)pauVar26[7];
          uVar20 = *(undefined8 *)(pauVar26[7] + 8);
          uVar21 = *(undefined8 *)(pauVar26[7] + 0x10);
          uVar22 = *(undefined8 *)(pauVar26[7] + 0x18);
          *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar26[4];
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
          pauVar26 = pauVar26 + 8;
          param_3 = param_3 - 0x100;
        } while (0xff < param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001800158e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&DAT_1800215a0 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
    return;
  }
  if ((param_3 < 0x801) || (((byte)DAT_180025d24 & 2) == 0)) {
    if (0x80 < param_3) {
      lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
      puVar25 = (undefined8 *)((longlong)param_1 - lVar30);
      puVar28 = (undefined8 *)((longlong)param_2 - lVar30);
      param_3 = param_3 + lVar30;
      if (0x80 < param_3) {
        do {
          uVar10 = puVar28[1];
          uVar11 = puVar28[2];
          uVar12 = puVar28[3];
          uVar13 = puVar28[4];
          uVar32 = puVar28[5];
          uVar33 = puVar28[6];
          uVar14 = puVar28[7];
          *puVar25 = *puVar28;
          puVar25[1] = uVar10;
          puVar25[2] = uVar11;
          puVar25[3] = uVar12;
          puVar25[4] = uVar13;
          puVar25[5] = uVar32;
          puVar25[6] = uVar33;
          puVar25[7] = uVar14;
          uVar10 = puVar28[9];
          uVar11 = puVar28[10];
          uVar12 = puVar28[0xb];
          uVar13 = puVar28[0xc];
          uVar32 = puVar28[0xd];
          uVar33 = puVar28[0xe];
          uVar14 = puVar28[0xf];
          puVar25[8] = puVar28[8];
          puVar25[9] = uVar10;
          puVar25[10] = uVar11;
          puVar25[0xb] = uVar12;
          puVar25[0xc] = uVar13;
          puVar25[0xd] = uVar32;
          puVar25[0xe] = uVar33;
          puVar25[0xf] = uVar14;
          puVar25 = puVar25 + 0x10;
          puVar28 = puVar28 + 0x10;
          param_3 = param_3 - 0x80;
        } while (0x7f < param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000180015b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&DAT_1800215e8 + (param_3 + 0xf >> 4) * 4) + 0x180000000))();
    return;
  }
code_r0x00018001565b:
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((longlong)param_2 + 1);
    param_1 = (undefined8 *)((longlong)param_1 + 1);
  }
  return;
}



// ===== FUN_180015d00 @ 180015d00 (size 16) =====

undefined8 FUN_180015d00(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}



// ===== FUN_180015d10 @ 180015d10 (size 725) =====

undefined1 (*) [32] FUN_180015d10(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined2 uVar9;
  undefined4 uVar10;
  
  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  pauVar2 = param_1;
  if (DAT_180025088 < 3) {
    if ((param_3 <= DAT_180025090) || (((byte)DAT_180025d24 & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      uVar6 = param_3 + lVar11;
      if (0x80 < uVar6) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          uVar6 = uVar6 - 0x80;
        } while (0x7f < uVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x000180016058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)((ulonglong)*(uint *)(&DAT_180021698 + (uVar6 + 0xf >> 4) * 4) +
                          0x180000000))(pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_180025090) || (DAT_180025098 < param_3)) ||
          (((byte)DAT_180025d24 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar7 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar7);
    uVar6 = param_3 + lVar7;
    if (0x100 < uVar6) {
      if (DAT_180025098 < uVar6) {
        do {
          uVar5 = uVar6;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar6 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        uVar6 = uVar6 - 0x100;
      } while (0xff < uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x000180015ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)((ulonglong)*(uint *)(&DAT_180021650 + (uVar6 + 0x1f >> 5) * 4) +
                        0x180000000))(lVar11,uVar5 - lVar7);
    return pauVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}



// ===== strncmp @ 1800160b0 (size 125) =====

/* Library Function - Single Match
    strncmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    do {
      if (((ulonglong)_Str1 & 7) == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
    } while ((_MaxCount != 0) && (bVar1 != 0));
  }
  return 0;
}



// ===== strlen @ 180016140 (size 168) =====

/* Library Function - Single Match
    strlen
   
   Library: Visual Studio */

size_t __cdecl strlen(char *_Str)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar3 = -(longlong)_Str;
  do {
    if (((ulonglong)_Str & 7) == 0) goto LAB_180016171;
    uVar1 = *(ulonglong *)_Str;
    _Str = (char *)((longlong)_Str + 1);
  } while ((char)uVar1 != '\0');
LAB_1800161b8:
  return (size_t)(char *)((longlong)_Str + lVar3 + -1);
LAB_180016171:
  do {
    do {
      puVar2 = (ulonglong *)_Str;
      _Str = (char *)(puVar2 + 1);
    } while (((~*puVar2 ^ *puVar2 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar1 = *puVar2;
    if ((char)uVar1 == '\0') {
      return (longlong)puVar2 + lVar3;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 1);
    }
    if ((char)(uVar1 >> 0x10) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 2);
    }
    if ((char)(uVar1 >> 0x18) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 3);
    }
    if ((char)(uVar1 >> 0x20) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 4);
    }
    if ((char)(uVar1 >> 0x28) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 5);
    }
    if ((char)(uVar1 >> 0x30) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 6);
    }
  } while ((char)(uVar1 >> 0x38) != '\0');
  goto LAB_1800161b8;
}



// ===== FUN_1800162d0 @ 1800162d0 (size 41) =====

void FUN_1800162d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_180005350(*(longlong **)(param_2 + 0x90));
  }
  return;
}



// ===== FUN_180016530 @ 180016530 (size 23) =====

bool FUN_180016530(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



// ===== FUN_180016550 @ 180016550 (size 23) =====

void FUN_180016550(undefined8 param_1,longlong param_2)

{
  FUN_1800060b0(*(char *)(param_2 + 0x60));
  return;
}



// ===== FUN_180016570 @ 180016570 (size 25) =====

void FUN_180016570(undefined8 param_1,longlong param_2)

{
  FUN_1800060b0(*(char *)(param_2 + 0x20));
  return;
}



// ===== FUN_18001658a @ 18001658a (size 19) =====

void FUN_18001658a(void)

{
  FUN_180005fb0();
  return;
}



// ===== FUN_1800165a0 @ 1800165a0 (size 53) =====

void FUN_1800165a0(undefined8 *param_1,longlong param_2)

{
  FUN_180005f20(*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
                *(undefined8 *)(param_2 + 0x70),FUN_180006170,*(int *)*param_1,param_1);
  return;
}



// ===== FUN_1800165e0 @ 1800165e0 (size 172) =====

undefined4 FUN_1800165e0(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  pvVar4 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  puVar1 = *(ulonglong **)(param_2 + 0x98);
  uVar2 = puVar1[1];
  pvVar4 = FUN_180008400();
  *(ulonglong *)((longlong)pvVar4 + 0x60) = uVar2;
  uVar3 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  pvVar4 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar3;
  FUN_18000a7b0((int *)**(undefined8 **)(param_2 + 0x48),*(longlong **)(param_2 + 0x88),
                *(ULONG_PTR *)(param_2 + 0x90),puVar1,*(uint **)(param_2 + 0xa0),0,0,1);
  pvVar4 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



// ===== FUN_180016690 @ 180016690 (size 186) =====

undefined4 FUN_180016690(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  pvVar4 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  puVar1 = *(ulonglong **)(param_2 + 0x98);
  uVar2 = puVar1[1];
  pvVar4 = FUN_180008400();
  *(ulonglong *)((longlong)pvVar4 + 0x60) = uVar2;
  uVar3 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  pvVar4 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar3;
  pvVar4 = FUN_180008400();
  *(undefined4 *)((longlong)pvVar4 + 0x78) = *(undefined4 *)(param_2 + 0xb8);
  FUN_18000a7c0((int *)**(undefined8 **)(param_2 + 0x48),*(longlong **)(param_2 + 0x88),
                *(ULONG_PTR *)(param_2 + 0x90),puVar1,*(byte **)(param_2 + 0xa0),0,0,1);
  pvVar4 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



// ===== FUN_180016750 @ 180016750 (size 144) =====

undefined4 FUN_180016750(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if ((((*(char *)(param_2 + 0x58) != '\0') &&
       (*(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30),
       **(int **)(param_2 + 0x28) == -0x1f928c9d)) &&
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
     (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
       (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521)) ||
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))) {
    pvVar2 = FUN_180008400();
    *(undefined8 *)((longlong)pvVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    pvVar2 = FUN_180008400();
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_18000d23c();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



// ===== FUN_1800167f0 @ 1800167f0 (size 27) =====

void FUN_1800167f0(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180008400();
  *(undefined4 *)((longlong)pvVar1 + 0x78) = 0xfffffffe;
  return;
}



// ===== FUN_180016810 @ 180016810 (size 32) =====

void FUN_180016810(undefined8 *param_1,longlong param_2)

{
  FUN_18000af80(param_1,*(longlong *)(param_2 + 0xd8),(undefined4 *)(param_2 + 0x20));
  return;
}



// ===== FUN_180016831 @ 180016831 (size 130) =====

void FUN_180016831(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  
  FUN_180007b40(*(longlong *)(param_2 + 0x30));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    uVar2 = FUN_180007de0(*(longlong *)(piVar1 + 10));
    if ((int)uVar2 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  pvVar3 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar3 + 0x20) = *(undefined8 *)(param_2 + 0x70);
  pvVar3 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar3 + 0x28) = *(undefined8 *)(param_2 + 0x78);
  return;
}



// ===== FUN_1800168c0 @ 1800168c0 (size 36) =====

void FUN_1800168c0(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0x28),*(int *)(param_2 + 0xf0),
                     (int *)(param_2 + 0x20));
  return;
}



// ===== FUN_1800168e5 @ 1800168e5 (size 141) =====

void FUN_1800168e5(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  
  FUN_180007b40(*(longlong *)(param_2 + 0x48));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0x28), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    uVar2 = FUN_180007de0(*(longlong *)(piVar1 + 10));
    if ((int)uVar2 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  pvVar3 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar3 + 0x20) = *(undefined8 *)(param_2 + 0x78);
  pvVar3 = FUN_180008400();
  *(undefined8 *)((longlong)pvVar3 + 0x28) = *(undefined8 *)(param_2 + 0x80);
  pvVar3 = FUN_180008400();
  *(undefined4 *)((longlong)pvVar3 + 0x78) = *(undefined4 *)(param_2 + 0x30);
  return;
}



// ===== FUN_180016980 @ 180016980 (size 21) =====

void FUN_180016980(undefined8 *param_1)

{
  FUN_180007e50(param_1);
  return;
}



// ===== FUN_180016996 @ 180016996 (size 34) =====

void FUN_180016996(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180008400();
  if (0 < *(int *)((longlong)pvVar1 + 0x30)) {
    pvVar1 = FUN_180008400();
    *(int *)((longlong)pvVar1 + 0x30) = *(int *)((longlong)pvVar1 + 0x30) + -1;
  }
  return;
}



// ===== FUN_1800169c0 @ 1800169c0 (size 21) =====

void FUN_1800169c0(undefined8 *param_1)

{
  FUN_180007e50(param_1);
  return;
}



// ===== FUN_1800169d6 @ 1800169d6 (size 34) =====

void FUN_1800169d6(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180008400();
  if (0 < *(int *)((longlong)pvVar1 + 0x30)) {
    pvVar1 = FUN_180008400();
    *(int *)((longlong)pvVar1 + 0x30) = *(int *)((longlong)pvVar1 + 0x30) + -1;
  }
  return;
}



// ===== FUN_180016a00 @ 180016a00 (size 21) =====

void FUN_180016a00(void)

{
  __acrt_unlock(0);
  return;
}



// ===== FUN_180016a16 @ 180016a16 (size 21) =====

void FUN_180016a16(void)

{
  __acrt_unlock(0);
  return;
}



// ===== FUN_180016a2c @ 180016a2c (size 25) =====

void FUN_180016a2c(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}



// ===== FUN_180016a46 @ 180016a46 (size 44) =====

undefined4 FUN_180016a46(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}



// ===== FUN_180016a73 @ 180016a73 (size 25) =====

void FUN_180016a73(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x58));
  return;
}



// ===== FUN_180016a8d @ 180016a8d (size 25) =====

void FUN_180016a8d(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x68));
  return;
}



// ===== FUN_180016aa7 @ 180016aa7 (size 24) =====

void FUN_180016aa7(void)

{
  __acrt_unlock(5);
  return;
}



// ===== FUN_180016ac0 @ 180016ac0 (size 24) =====

void FUN_180016ac0(void)

{
  __acrt_unlock(7);
  return;
}



// ===== FUN_180016ad9 @ 180016ad9 (size 32) =====

void FUN_180016ad9(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}



// ===== FUN_180016afa @ 180016afa (size 26) =====

void FUN_180016afa(undefined8 param_1,longlong param_2)

{
  FUN_180010fb8(**(longlong **)(param_2 + 0x48));
  return;
}



// ===== FUN_180016b15 @ 180016b15 (size 28) =====

void FUN_180016b15(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x98));
  return;
}



// ===== FUN_180016b32 @ 180016b32 (size 24) =====

void FUN_180016b32(void)

{
  __acrt_unlock(4);
  return;
}



// ===== FUN_180016b4b @ 180016b4b (size 25) =====

void FUN_180016b4b(undefined8 param_1,longlong param_2)

{
  FUN_18001306c(**(uint **)(param_2 + 0x48));
  return;
}



// ===== FUN_180016b65 @ 180016b65 (size 22) =====

void FUN_180016b65(undefined8 param_1,longlong param_2)

{
  FUN_18001306c(*(uint *)(param_2 + 0x60));
  return;
}



// ===== FUN_180016b7c @ 180016b7c (size 24) =====

void FUN_180016b7c(void)

{
  __acrt_unlock(8);
  return;
}



// ===== FUN_180016b95 @ 180016b95 (size 23) =====

void FUN_180016b95(undefined8 param_1,longlong param_2)

{
  FUN_180010fb8(*(longlong *)(param_2 + 0x40));
  return;
}



// ===== FUN_180016bb0 @ 180016bb0 (size 31) =====

bool FUN_180016bb0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



// ===== FUN_180016bd0 @ 180016bd0 (size 201) =====

void FUN_180016bd0(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  
  if (0xf < DAT_180025a98) {
    pvVar2 = (LPVOID)CONCAT71(DAT_180025a80._1_7_,(undefined1)DAT_180025a80);
    pvVar3 = pvVar2;
    if ((0xfff < DAT_180025a98 + 1) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) goto LAB_180016c91;
    thunk_FUN_180006150(pvVar3);
  }
  DAT_180025a90 = 0;
  DAT_180025a98 = 0xf;
  DAT_180025a80._0_1_ = 0;
  if (0xf < DAT_180025a78) {
    pvVar2 = (LPVOID)CONCAT71(DAT_180025a60._1_7_,(undefined1)DAT_180025a60);
    pvVar3 = pvVar2;
    if ((0xfff < DAT_180025a78 + 1) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
LAB_180016c91:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_180006150(pvVar3);
  }
  DAT_180025a70 = 0;
  DAT_180025a78 = 0xf;
  DAT_180025a60._0_1_ = 0;
  return;
}



// ===== FUN_180016ca0 @ 180016ca0 (size 115) =====

void FUN_180016ca0(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1800267c8 != (LPVOID)0x0) {
    pvVar2 = DAT_1800267c8;
    puVar3 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1800267d8 - (longlong)DAT_1800267c8 >> 3) * 8)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1800267c8 + -8), puVar3 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1800267c8 + (-8 - (longlong)pvVar2)))) {
      pvVar2 = (LPVOID)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar3 = auStack_20;
    }
    *(undefined8 *)(puVar3 + -8) = 0x180016cf8;
    thunk_FUN_180006150(pvVar2);
    DAT_1800267d8 = 0;
    DAT_1800267c8 = (LPVOID)0x0;
    DAT_1800267d0 = 0;
  }
  return;
}



// decompiled 515 ok, 0 failed, 515 total
