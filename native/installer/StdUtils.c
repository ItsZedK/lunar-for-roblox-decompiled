// Program: 02-StdUtils.dll

// ===== FUN_10001000 @ 10001000 (size 272) =====

int __thiscall FUN_10001000(void *this,byte *param_1)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  puVar4 = this;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while ((byte)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"[uVar1] < 0x40);
  iVar5 = (int)puVar4 - (int)this >> 1;
  uVar6 = iVar5 - 1;
  pbVar3 = param_1;
  if (4 < uVar6) {
    pbVar2 = param_1;
    param_1 = (byte *)((iVar5 - 6U >> 2) + 1);
    do {
      *pbVar2 = (byte)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
                      [*(ushort *)((int)this + 2)] >> 4 |
                "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"[*(ushort *)this]
                << 2;
      pbVar2[1] = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
                  [*(ushort *)((int)this + 2)] << 4 |
                  (byte)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
                        [*(ushort *)((int)this + 4)] >> 2;
      pbVar3 = pbVar2 + 3;
      pbVar2[2] = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
                  [*(ushort *)((int)this + 4)] << 6 |
                  "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
                  [*(ushort *)((int)this + 6)];
      this = (void *)((int)this + 8);
      uVar6 = uVar6 - 4;
      param_1 = param_1 + -1;
      pbVar2 = pbVar3;
    } while (param_1 != (byte *)0x0);
  }
  if (1 < uVar6) {
    *pbVar3 = (byte)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
                    [*(ushort *)((int)this + 2)] >> 4 |
              "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"[*(ushort *)this]
              << 2;
    pbVar3 = pbVar3 + 1;
  }
  if (2 < uVar6) {
    *pbVar3 = (byte)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
                    [*(ushort *)((int)this + 4)] >> 2 |
              "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
              [*(ushort *)((int)this + 2)] << 4;
    pbVar3 = pbVar3 + 1;
  }
  if (3 < uVar6) {
    *pbVar3 = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
              [*(ushort *)((int)this + 4)] << 6 |
              "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"
              [*(ushort *)((int)this + 6)];
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = 0;
  return (iVar5 + 2U >> 2) * 3 - (-uVar6 & 3);
}



// ===== FUN_10001110 @ 10001110 (size 296) =====

int __cdecl FUN_10001110(wchar_t *param_1,int param_2,byte *param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)0x0;
  pwVar1 = param_1;
  if ((byte *)0x2 < param_3) {
    pbVar3 = (byte *)(param_2 + 1);
    do {
      *pwVar1 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[pbVar3[-1] >> 2]
      ;
      pwVar1[1] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(pbVar3[-1] & 3) << 4 | (uint)(*pbVar3 >> 4)];
      pwVar1[2] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(*pbVar3 & 0xf) << 2 | (uint)(pbVar3[1] >> 6)];
      pwVar1[3] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [pbVar3[1] & 0x3f];
      pbVar3 = pbVar3 + 3;
      pwVar1 = pwVar1 + 4;
      pbVar4 = pbVar4 + 3;
    } while (pbVar3 + (1 - param_2) < param_3);
  }
  if (pbVar4 < param_3) {
    pbVar3 = pbVar4 + param_2;
    *pwVar1 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar3 >> 2];
    if (pbVar4 == param_3 + -1) {
      pwVar1[1] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(*pbVar3 & 3) * 0x10];
      wVar2 = L'=';
    }
    else {
      pwVar1[1] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(*pbVar3 & 3) << 4 | (uint)(pbVar3[1] >> 4)];
      wVar2 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(pbVar3[1] & 0xf) * 4];
    }
    pwVar1[2] = wVar2;
    pwVar1[3] = L'=';
    pwVar1 = pwVar1 + 4;
  }
  *pwVar1 = L'\0';
  return (int)pwVar1 + (2 - (int)param_1) >> 1;
}



// ===== FUN_10001238 @ 10001238 (size 103) =====

wchar_t * __cdecl FUN_10001238(int param_1)

{
  uint uVar1;
  wchar_t *_Dst;
  int iVar2;
  byte *unaff_EDI;
  
  uVar1 = ((uint)(unaff_EDI + 2) / 3) * 4 + 1;
  if (uVar1 != 0) {
    _Dst = operator_new(-(uint)((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar1 * 2));
    iVar2 = FUN_10001110(_Dst,param_1,unaff_EDI);
    if (iVar2 == 0) {
      memset(_Dst,0,uVar1 * 2);
      operator_delete(_Dst);
      _Dst = (wchar_t *)0x0;
    }
    return _Dst;
  }
  return (wchar_t *)0x0;
}



// ===== FUN_1000129f @ 1000129f (size 105) =====

byte * __cdecl FUN_1000129f(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  byte *_Dst;
  int iVar3;
  uint _Size;
  int *unaff_ESI;
  
  *unaff_ESI = 0;
  puVar2 = param_1;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while ((byte)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>@@@?456789:;<=@@@@@@@"[uVar1] < 0x40);
  _Size = (((int)puVar2 - (int)param_1 >> 1) + 2U >> 2) * 3 + 1;
  if (_Size != 0) {
    _Dst = operator_new(_Size);
    iVar3 = FUN_10001000(param_1,_Dst);
    *unaff_ESI = iVar3;
    if (iVar3 == 0) {
      memset(_Dst,0,_Size);
      operator_delete(_Dst);
      _Dst = (byte *)0x0;
    }
    return _Dst;
  }
  return (byte *)0x0;
}



// ===== FUN_10001308 @ 10001308 (size 112) =====

undefined8 __fastcall FUN_10001308(undefined8 *param_1)

{
  return *param_1;
}



// ===== FUN_10001378 @ 10001378 (size 81) =====

void __cdecl FUN_10001378(undefined4 param_1,undefined4 param_2)

{
  undefined1 *in_EAX;
  
  *in_EAX = (char)param_1;
  in_EAX[1] = (char)((uint)param_1 >> 8);
  in_EAX[2] = (char)((uint)param_1 >> 0x10);
  in_EAX[3] = (char)((uint)param_1 >> 0x18);
  in_EAX[4] = (char)param_2;
  in_EAX[5] = (char)((uint)param_2 >> 8);
  in_EAX[6] = (char)((uint)param_2 >> 0x10);
  in_EAX[7] = (char)((uint)param_2 >> 0x18);
  return;
}



// ===== FUN_100013c9 @ 100013c9 (size 48) =====

ulonglong __cdecl FUN_100013c9(undefined4 param_1,uint param_2,byte param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = __allshl(0x40 - param_3,param_2);
  uVar2 = __aullshr(param_3,param_2);
  return uVar1 | uVar2;
}



// ===== FUN_100013f9 @ 100013f9 (size 46) =====

undefined4 __cdecl FUN_100013f9(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  
  puVar1 = (uint *)(in_EAX + 0x40);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_1;
  *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + param_2 + (uint)CARRY4(uVar3,param_1);
  if ((param_2 < *(uint *)(in_EAX + 0x44)) ||
     ((param_2 <= *(uint *)(in_EAX + 0x44) && (param_1 <= *(uint *)(in_EAX + 0x40))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  puVar1 = (uint *)(in_EAX + 0x48);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x4c) + (uint)CARRY4(uVar2,uVar3);
  return 0;
}



// ===== FUN_10001427 @ 10001427 (size 90) =====

undefined4 __cdecl FUN_10001427(int param_1)

{
  uint *in_EAX;
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  memset(in_EAX,0,0x180);
  iVar2 = 8;
  puVar1 = in_EAX;
  do {
    *puVar1 = *(uint *)((int)&DAT_100171a0 + -(int)in_EAX + (int)puVar1);
    puVar1[1] = *(uint *)((int)&UNK_100171a4 + -(int)in_EAX + (int)puVar1);
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = param_1 - (int)in_EAX;
  param_1 = 8;
  do {
    uVar3 = FUN_10001308((undefined8 *)(iVar2 + (int)in_EAX));
    *in_EAX = *in_EAX ^ (uint)uVar3;
    in_EAX[1] = in_EAX[1] ^ (uint)((ulonglong)uVar3 >> 0x20);
    in_EAX = in_EAX + 2;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return 0;
}



// ===== FUN_10001481 @ 10001481 (size 101) =====

undefined4 FUN_10001481(void)

{
  byte in_AL;
  undefined4 uVar1;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined2 local_38;
  undefined4 local_36;
  undefined4 uStack_32;
  undefined4 uStack_2e;
  undefined2 uStack_2a;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((in_AL == 0) || (0x40 < in_AL)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_47 = 0x10100;
    local_43 = 0;
    local_41 = 0;
    FUN_10001378(0,0);
    local_38 = 0;
    local_36 = 0;
    uStack_32 = 0;
    uStack_2e = 0;
    uStack_2a = 0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uVar1 = FUN_10001427((int)&local_48);
  }
  return uVar1;
}



// ===== FUN_100014e6 @ 100014e6 (size 17051) =====

undefined4 FUN_100014e6(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint local_108 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar6 = 0;
  do {
    uVar12 = FUN_10001308((undefined8 *)(in_EAX + iVar6 * 8));
    local_108[iVar6 * 2] = (uint)uVar12;
    local_108[iVar6 * 2 + 1] = (uint)((ulonglong)uVar12 >> 0x20);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  uVar5 = param_1[0x10];
  uVar1 = param_1[0x11];
  puVar7 = param_1;
  puVar9 = (uint *)&local_88;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_20 = *(ulonglong *)(param_1 + 0x12) ^ 0x9b05688c2b3e6c1f;
  local_18 = *(ulonglong *)(param_1 + 0x14) ^ 0x1f83d9abfb41bd6b;
  local_10 = *(ulonglong *)(param_1 + 0x16) ^ 0x5be0cd19137e2179;
  uVar8 = (uint)local_88 + local_108[0] + (uint)local_68;
  uVar10 = local_88._4_4_ +
           local_108[1] + local_68._4_4_ + (uint)CARRY4(local_108[0],(uint)local_68) +
           (uint)CARRY4((uint)local_88,local_108[0] + (uint)local_68);
  local_28 = FUN_100013c9(uVar8 ^ uVar5 ^ 0xade682d1,uVar10 ^ uVar1 ^ 0x510e527f,0x20);
  uVar5 = (uint)(local_28 + 0x6a09e667f3bcc908);
  local_48._4_4_ = (uint)(local_28 + 0x6a09e667f3bcc908 >> 0x20);
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = uVar13 + CONCAT44(local_108[3],local_108[2]) + CONCAT44(uVar10,uVar8);
  local_28 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                          (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  lVar3 = local_28 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  bVar11 = CARRY4((uint)local_80,local_108[4] + (uint)local_60);
  local_80._0_4_ = (uint)local_80 + local_108[4] + (uint)local_60;
  local_80._4_4_ =
       local_80._4_4_ + local_108[5] + local_60._4_4_ + (uint)CARRY4(local_108[4],(uint)local_60) +
       (uint)bVar11;
  local_20 = FUN_100013c9((uint)local_80 ^ (uint)local_20,local_80._4_4_ ^ local_20._4_4_,0x20);
  local_40 = local_20 + 0xbb67ae8584caa73b;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = uVar13 + CONCAT44(local_108[7],local_108[6]) + CONCAT44(local_80._4_4_,(uint)local_80);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  local_60 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                          local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  bVar11 = CARRY4((uint)local_78,local_108[8] + (uint)local_58);
  local_78._0_4_ = (uint)local_78 + local_108[8] + (uint)local_58;
  local_78._4_4_ =
       local_78._4_4_ + local_108[9] + local_58._4_4_ + (uint)CARRY4(local_108[8],(uint)local_58) +
       (uint)bVar11;
  local_18 = FUN_100013c9((uint)local_78 ^ (uint)local_18,local_78._4_4_ ^ local_18._4_4_,0x20);
  local_38 = local_18 + 0x3c6ef372fe94f82b;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = uVar13 + CONCAT44(local_108[0xb],local_108[10]) +
             CONCAT44(local_78._4_4_,(uint)local_78);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  bVar11 = CARRY4((uint)local_70,local_108[0xc] + (uint)local_50);
  local_70._0_4_ = (uint)local_70 + local_108[0xc] + (uint)local_50;
  local_70._4_4_ =
       local_70._4_4_ +
       local_108[0xd] + local_50._4_4_ + (uint)CARRY4(local_108[0xc],(uint)local_50) + (uint)bVar11;
  local_10 = FUN_100013c9((uint)local_70 ^ (uint)local_10,local_70._4_4_ ^ local_10._4_4_,0x20);
  local_30 = local_10 + 0xa54ff53a5f1d36f1;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = uVar13 + CONCAT44(local_108[0xf],local_108[0xe]) +
             CONCAT44(local_70._4_4_,(uint)local_70);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[0x11] + local_60._4_4_ +
                           (uint)CARRY4(local_108[0x10],(uint)local_60),
                           local_108[0x10] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x13],local_108[0x12]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0x15] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x14],(uint)local_58),local_108[0x14] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x17],local_108[0x16]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  local_58 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                          local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_78 = local_78 +
             CONCAT44(local_108[0x19] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x18],(uint)local_50),local_108[0x18] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0x1b],local_108[0x1a]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x1d] + local_68._4_4_ +
                      (uint)CARRY4(local_108[0x1c],(uint)local_68),local_108[0x1c] + (uint)local_68)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x1f],local_108[0x1e]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x1d],local_108[0x1c]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x15],local_108[0x14]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[9] + local_60._4_4_ + (uint)CARRY4(local_108[8],(uint)local_60),
                      local_108[8] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x11],local_108[0x10]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  local_60 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                          local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_78 = local_78 +
             CONCAT44(local_108[0x13] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x12],(uint)local_58),local_108[0x12] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0x1f],local_108[0x1e]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x1b] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x1a],(uint)local_50),local_108[0x1a] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0xd],local_108[0xc]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[3] + local_60._4_4_ + (uint)CARRY4(local_108[2],(uint)local_60)
                           ,local_108[2] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x19],local_108[0x18]);
  local_10 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                          (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_38 = local_10 + local_38;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[1] + local_58._4_4_ + (uint)CARRY4(local_108[0],(uint)local_58),
                      local_108[0] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[5],local_108[4]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  local_58 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                          local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_78 = local_78 +
             CONCAT44(local_108[0x17] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x16],(uint)local_50),local_108[0x16] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0xf],local_108[0xe]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0xb] + local_68._4_4_ + (uint)CARRY4(local_108[10],(uint)local_68),
                      local_108[10] + (uint)local_68);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  local_68 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                          local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_70 = local_70 + local_68 + CONCAT44(local_108[7],local_108[6]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x17],local_108[0x16]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x11],local_108[0x10]);
  local_28 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                          (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  lVar3 = local_28 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0x19] + local_60._4_4_ +
                      (uint)CARRY4(local_108[0x18],(uint)local_60),local_108[0x18] + (uint)local_60)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[1],local_108[0]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0xb] + local_58._4_4_ + (uint)CARRY4(local_108[10],(uint)local_58),
                      local_108[10] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[5],local_108[4]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x1f] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x1e],(uint)local_50),local_108[0x1e] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  local_50 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                          local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_70 = local_70 + local_50 + CONCAT44(local_108[0x1b],local_108[0x1a]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[0x15] + local_60._4_4_ +
                           (uint)CARRY4(local_108[0x14],(uint)local_60),
                           local_108[0x14] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x1d],local_108[0x1c]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[7] + local_58._4_4_ + (uint)CARRY4(local_108[6],(uint)local_58),
                      local_108[6] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0xd],local_108[0xc]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0xf] + local_50._4_4_ + (uint)CARRY4(local_108[0xe],(uint)local_50),
                      local_108[0xe] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[3],local_108[2]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x13] + local_68._4_4_ +
                      (uint)CARRY4(local_108[0x12],(uint)local_68),local_108[0x12] + (uint)local_68)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[9],local_108[8]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0xf],local_108[0xe]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x13],local_108[0x12]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[7] + local_60._4_4_ + (uint)CARRY4(local_108[6],(uint)local_60),
                      local_108[6] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[3],local_108[2]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x1b] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x1a],(uint)local_58),local_108[0x1a] + (uint)local_58)
  ;
  local_18 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                          (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_38 = local_18 + local_38;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0x19],local_108[0x18]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x17] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x16],(uint)local_50),local_108[0x16] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x1d],local_108[0x1c]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[5] + local_60._4_4_ + (uint)CARRY4(local_108[4],(uint)local_60)
                           ,local_108[4] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0xd],local_108[0xc]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  local_60 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                          local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_80 = local_80 +
             CONCAT44(local_108[0xb] + local_58._4_4_ + (uint)CARRY4(local_108[10],(uint)local_58),
                      local_108[10] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x15],local_108[0x14]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[9] + local_50._4_4_ + (uint)CARRY4(local_108[8],(uint)local_50),
                      local_108[8] + (uint)local_50);
  local_20 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                          (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  lVar3 = local_20 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[1],local_108[0]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x1f] + local_68._4_4_ +
                      (uint)CARRY4(local_108[0x1e],(uint)local_68),local_108[0x1e] + (uint)local_68)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x11],local_108[0x10]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x13],local_108[0x12]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[1],local_108[0]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  local_68 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_80 = local_80 +
             CONCAT44(local_108[0xb] + local_60._4_4_ + (uint)CARRY4(local_108[10],(uint)local_60),
                      local_108[10] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0xf],local_108[0xe]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[5] + local_58._4_4_ + (uint)CARRY4(local_108[4],(uint)local_58),
                      local_108[4] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[9],local_108[8]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x15] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x14],(uint)local_50),local_108[0x14] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x1f],local_108[0x1e]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[0x1d] + local_60._4_4_ +
                           (uint)CARRY4(local_108[0x1c],(uint)local_60),
                           local_108[0x1c] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[3],local_108[2]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  local_60 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                          local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_80 = local_80 +
             CONCAT44(local_108[0x17] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x16],(uint)local_58),local_108[0x16] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x19],local_108[0x18]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0xd] + local_50._4_4_ + (uint)CARRY4(local_108[0xc],(uint)local_50),
                      local_108[0xc] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0x11],local_108[0x10]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[7] + local_68._4_4_ + (uint)CARRY4(local_108[6],(uint)local_68),
                      local_108[6] + (uint)local_68);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x1b],local_108[0x1a]);
  local_18 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                          (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_40 = local_18 + local_40;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[5],local_108[4]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x19],local_108[0x18]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  local_68 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_80 = local_80 +
             CONCAT44(local_108[0xd] + local_60._4_4_ + (uint)CARRY4(local_108[0xc],(uint)local_60),
                      local_108[0xc] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x15],local_108[0x14]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[1] + local_58._4_4_ + (uint)CARRY4(local_108[0],(uint)local_58),
                      local_108[0] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  local_58 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                          local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_78 = local_78 + local_58 + CONCAT44(local_108[0x17],local_108[0x16]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x11] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x10],(uint)local_50),local_108[0x10] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[7],local_108[6]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[9] + local_60._4_4_ + (uint)CARRY4(local_108[8],(uint)local_60)
                           ,local_108[8] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x1b],local_108[0x1a]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0xf] + local_58._4_4_ + (uint)CARRY4(local_108[0xe],(uint)local_58),
                      local_108[0xe] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0xb],local_108[10]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x1f] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x1e],(uint)local_50),local_108[0x1e] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  local_50 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_78 = local_78 + local_50 + CONCAT44(local_108[0x1d],local_108[0x1c]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[3] + local_68._4_4_ + (uint)CARRY4(local_108[2],(uint)local_68),
                      local_108[2] + (uint)local_68);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x13],local_108[0x12]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x19],local_108[0x18]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0xb],local_108[10]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[3] + local_60._4_4_ + (uint)CARRY4(local_108[2],(uint)local_60),
                      local_108[2] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x1f],local_108[0x1e]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x1d] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x1c],(uint)local_58),local_108[0x1c] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0x1b],local_108[0x1a]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[9] + local_50._4_4_ + (uint)CARRY4(local_108[8],(uint)local_50),
                      local_108[8] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x15],local_108[0x14]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[1] + local_60._4_4_ + (uint)CARRY4(local_108[0],(uint)local_60)
                           ,local_108[0] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0xf],local_108[0xe]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0xd] + local_58._4_4_ + (uint)CARRY4(local_108[0xc],(uint)local_58),
                      local_108[0xc] + (uint)local_58);
  local_28 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                          (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_30 = local_28 + local_30;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[7],local_108[6]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x13] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x12],(uint)local_50),local_108[0x12] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[5],local_108[4]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x11] + local_68._4_4_ +
                      (uint)CARRY4(local_108[0x10],(uint)local_68),local_108[0x10] + (uint)local_68)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x17],local_108[0x16]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  local_68 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                          local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  lVar2 = lVar2 + local_68 + CONCAT44(local_108[0x1b],local_108[0x1a]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x17],local_108[0x16]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0xf] + local_60._4_4_ + (uint)CARRY4(local_108[0xe],(uint)local_60),
                      local_108[0xe] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x1d],local_108[0x1c]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x19] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x18],(uint)local_58),local_108[0x18] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[3],local_108[2]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[7] + local_50._4_4_ + (uint)CARRY4(local_108[6],(uint)local_50),
                      local_108[6] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x13],local_108[0x12]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  local_50 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                          local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  lVar2 = lVar2 + CONCAT44(local_108[0xb] + local_60._4_4_ +
                           (uint)CARRY4(local_108[10],(uint)local_60),local_108[10] + (uint)local_60
                          );
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[1],local_108[0]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0x1f] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x1e],(uint)local_58),local_108[0x1e] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[9],local_108[8]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x11] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x10],(uint)local_50),local_108[0x10] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0xd],local_108[0xc]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[5] + local_68._4_4_ + (uint)CARRY4(local_108[4],(uint)local_68),
                      local_108[4] + (uint)local_68);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x15],local_108[0x14]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  local_68 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                          local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  lVar2 = lVar2 + local_68 + CONCAT44(local_108[0xd],local_108[0xc]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x1f],local_108[0x1e]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0x1d] + local_60._4_4_ +
                      (uint)CARRY4(local_108[0x1c],(uint)local_60),local_108[0x1c] + (uint)local_60)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x13],local_108[0x12]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x17] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x16],(uint)local_58),local_108[0x16] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[7],local_108[6]);
  local_18 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                          (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_38 = local_18 + local_38;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[1] + local_50._4_4_ + (uint)CARRY4(local_108[0],(uint)local_50),
                      local_108[0] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x11],local_108[0x10]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  local_50 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                          local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  lVar2 = lVar2 + CONCAT44(local_108[0x19] + local_60._4_4_ +
                           (uint)CARRY4(local_108[0x18],(uint)local_60),
                           local_108[0x18] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[5],local_108[4]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0x1b] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x1a],(uint)local_58),local_108[0x1a] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  local_58 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                          local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_80 = local_80 + local_58 + CONCAT44(local_108[0xf],local_108[0xe]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[3] + local_50._4_4_ + (uint)CARRY4(local_108[2],(uint)local_50),
                      local_108[2] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[9],local_108[8]);
  local_20 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                          (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  lVar3 = local_20 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x15] + local_68._4_4_ +
                      (uint)CARRY4(local_108[0x14],(uint)local_68),local_108[0x14] + (uint)local_68)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0xb],local_108[10]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x15],local_108[0x14]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[5],local_108[4]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0x11] + local_60._4_4_ +
                      (uint)CARRY4(local_108[0x10],(uint)local_60),local_108[0x10] + (uint)local_60)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  local_60 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                          local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_80 = local_80 + local_60 + CONCAT44(local_108[9],local_108[8]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0xf] + local_58._4_4_ + (uint)CARRY4(local_108[0xe],(uint)local_58),
                      local_108[0xe] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0xd],local_108[0xc]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[3] + local_50._4_4_ + (uint)CARRY4(local_108[2],(uint)local_50),
                      local_108[2] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0xb],local_108[10]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[0x1f] + local_60._4_4_ +
                           (uint)CARRY4(local_108[0x1e],(uint)local_60),
                           local_108[0x1e] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x17],local_108[0x16]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0x13] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x12],(uint)local_58),local_108[0x12] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x1d],local_108[0x1c]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[7] + local_50._4_4_ + (uint)CARRY4(local_108[6],(uint)local_50),
                      local_108[6] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0x19],local_108[0x18]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 +
             CONCAT44(local_108[0x1b] + local_68._4_4_ +
                      (uint)CARRY4(local_108[0x1a],(uint)local_68),local_108[0x1a] + (uint)local_68)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[1],local_108[0]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[1],local_108[0]);
  local_28 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                          (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  lVar3 = local_28 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[3],local_108[2]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[5] + local_60._4_4_ + (uint)CARRY4(local_108[4],(uint)local_60),
                      local_108[4] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[7],local_108[6]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[9] + local_58._4_4_ + (uint)CARRY4(local_108[8],(uint)local_58),
                      local_108[8] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0xb],local_108[10]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  local_58 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                          local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_70 = local_70 +
             CONCAT44(local_108[0xd] + local_50._4_4_ + (uint)CARRY4(local_108[0xc],(uint)local_50),
                      local_108[0xc] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0xf],local_108[0xe]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[0x11] + local_60._4_4_ +
                           (uint)CARRY4(local_108[0x10],(uint)local_60),
                           local_108[0x10] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x13],local_108[0x12]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[0x15] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x14],(uint)local_58),local_108[0x14] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x17],local_108[0x16]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x19] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x18],(uint)local_50),local_108[0x18] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0x1b],local_108[0x1a]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  local_50 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x3f);
  local_70 = local_70 +
             CONCAT44(local_108[0x1d] + local_68._4_4_ +
                      (uint)CARRY4(local_108[0x1c],(uint)local_68),local_108[0x1c] + (uint)local_68)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0x1f],local_108[0x1e]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ (uint)local_40,
                        local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x1d],local_108[0x1c]);
  local_28 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                          (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  lVar3 = local_28 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + uVar13 + CONCAT44(local_108[0x15],local_108[0x14]);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x10);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  lVar3 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar3;
  local_48._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_68 ^ uVar5,local_68._4_4_ ^ local_48._4_4_,0x3f);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_68._0_4_ = (uint)uVar13;
  local_80 = local_80 +
             CONCAT44(local_108[9] + local_60._4_4_ + (uint)CARRY4(local_108[8],(uint)local_60),
                      local_108[8] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_80 = local_80 + uVar13 + CONCAT44(local_108[0x11],local_108[0x10]);
  uVar13 = FUN_100013c9((uint)local_80 ^ (uint)local_20,
                        (uint)((ulonglong)local_80 >> 0x20) ^ local_20._4_4_,0x10);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_40,
                        local_60._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_78 = local_78 +
             CONCAT44(local_108[0x13] + local_58._4_4_ +
                      (uint)CARRY4(local_108[0x12],(uint)local_58),local_108[0x12] + (uint)local_58)
  ;
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                        local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_78 = local_78 + uVar13 + CONCAT44(local_108[0x1f],local_108[0x1e]);
  uVar13 = FUN_100013c9((uint)local_78 ^ (uint)local_18,
                        (uint)((ulonglong)local_78 >> 0x20) ^ local_18._4_4_,0x10);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_18._0_4_ = (uint)uVar13;
  local_58 = FUN_100013c9((uint)local_58 ^ (uint)local_38,
                          local_58._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  local_70 = local_70 +
             CONCAT44(local_108[0x1b] + local_50._4_4_ +
                      (uint)CARRY4(local_108[0x1a],(uint)local_50),local_108[0x1a] + (uint)local_50)
  ;
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_70 = local_70 + uVar13 + CONCAT44(local_108[0xd],local_108[0xc]);
  uVar13 = FUN_100013c9((uint)local_70 ^ (uint)local_10,
                        (uint)((ulonglong)local_70 >> 0x20) ^ local_10._4_4_,0x10);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ (uint)local_30,
                        local_50._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x3f);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  lVar2 = lVar2 + CONCAT44(local_108[3] + local_60._4_4_ + (uint)CARRY4(local_108[2],(uint)local_60)
                           ,local_108[2] + (uint)local_60);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_10,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_10._4_4_,0x20);
  local_10._4_4_ = (uint)(uVar13 >> 0x20);
  local_38 = uVar13 + local_38;
  local_10._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                        local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x18);
  local_60._4_4_ = (uint)(uVar13 >> 0x20);
  local_60._0_4_ = (uint)uVar13;
  local_88 = lVar2 + uVar13 + CONCAT44(local_108[0x19],local_108[0x18]);
  local_10 = FUN_100013c9((uint)local_88 ^ (uint)local_10,
                          (uint)((ulonglong)local_88 >> 0x20) ^ local_10._4_4_,0x10);
  local_38 = local_10 + local_38;
  local_60 = FUN_100013c9((uint)local_60 ^ (uint)local_38,
                          local_60._4_4_ ^ (uint)((ulonglong)local_38 >> 0x20),0x3f);
  lVar2 = local_80 +
          CONCAT44(local_108[1] + local_58._4_4_ + (uint)CARRY4(local_108[0],(uint)local_58),
                   local_108[0] + (uint)local_58);
  uVar13 = FUN_100013c9((uint)lVar2 ^ (uint)local_28,
                        (uint)((ulonglong)lVar2 >> 0x20) ^ local_28._4_4_,0x20);
  local_28._4_4_ = (uint)(uVar13 >> 0x20);
  local_30 = uVar13 + local_30;
  local_28._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_58 ^ (uint)local_30,
                        local_58._4_4_ ^ (uint)((ulonglong)local_30 >> 0x20),0x18);
  local_58._4_4_ = (uint)(uVar13 >> 0x20);
  local_58._0_4_ = (uint)uVar13;
  local_80 = lVar2 + uVar13 + CONCAT44(local_108[5],local_108[4]);
  local_28 = FUN_100013c9((uint)local_80 ^ (uint)local_28,
                          (uint)((ulonglong)local_80 >> 0x20) ^ local_28._4_4_,0x10);
  lVar2 = local_30 + local_28;
  local_30 = local_28 + local_30;
  local_58 = FUN_100013c9((uint)local_58 ^ (uint)lVar2,
                          local_58._4_4_ ^ (uint)((ulonglong)lVar2 >> 0x20),0x3f);
  lVar3 = local_78 +
          CONCAT44(local_108[0x17] + local_50._4_4_ + (uint)CARRY4(local_108[0x16],(uint)local_50),
                   local_108[0x16] + (uint)local_50);
  uVar13 = FUN_100013c9((uint)lVar3 ^ (uint)local_20,
                        (uint)((ulonglong)lVar3 >> 0x20) ^ local_20._4_4_,0x20);
  local_20._4_4_ = (uint)(uVar13 >> 0x20);
  lVar2 = uVar13 + CONCAT44(local_48._4_4_,uVar5);
  uVar5 = (uint)lVar2;
  local_48._4_4_ = (uint)((ulonglong)lVar2 >> 0x20);
  local_20._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9((uint)local_50 ^ uVar5,local_50._4_4_ ^ local_48._4_4_,0x18);
  local_50._4_4_ = (uint)(uVar13 >> 0x20);
  local_50._0_4_ = (uint)uVar13;
  local_78 = lVar3 + uVar13 + CONCAT44(local_108[0xf],local_108[0xe]);
  local_20 = FUN_100013c9((uint)local_78 ^ (uint)local_20,
                          (uint)((ulonglong)local_78 >> 0x20) ^ local_20._4_4_,0x10);
  local_48 = local_20 + CONCAT44(local_48._4_4_,uVar5);
  local_50 = FUN_100013c9((uint)local_50 ^ (uint)local_48,
                          local_50._4_4_ ^ (uint)((ulonglong)local_48 >> 0x20),0x3f);
  uVar5 = (uint)local_68;
  lVar2 = CONCAT44(local_108[0xb] + local_68._4_4_ + (uint)CARRY4(local_108[10],(uint)local_68),
                   local_108[10] + (uint)local_68);
  lVar3 = local_70 + lVar2;
  lVar2 = local_70 + lVar2;
  uVar13 = FUN_100013c9((uint)lVar3 ^ (uint)local_18,
                        (uint)((ulonglong)lVar3 >> 0x20) ^ local_18._4_4_,0x20);
  local_18._4_4_ = (uint)(uVar13 >> 0x20);
  local_40 = uVar13 + local_40;
  local_18._0_4_ = (uint)uVar13;
  uVar13 = FUN_100013c9(uVar5 ^ (uint)local_40,local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),
                        0x18);
  local_68._4_4_ = (uint)(uVar13 >> 0x20);
  local_70 = uVar13 + CONCAT44(local_108[7],local_108[6]) + lVar2;
  local_18 = FUN_100013c9((uint)local_70 ^ (uint)local_18,
                          (uint)((ulonglong)local_70 >> 0x20) ^ local_18._4_4_,0x10);
  local_40 = local_18 + local_40;
  local_68 = FUN_100013c9((uint)uVar13 ^ (uint)local_40,
                          local_68._4_4_ ^ (uint)((ulonglong)local_40 >> 0x20),0x3f);
  iVar4 = (int)&local_88 - (int)param_1;
  iVar6 = 8;
  do {
    puVar7 = (uint *)(iVar4 + (int)param_1);
    uVar5 = puVar7[0x11];
    uVar1 = puVar7[1];
    *param_1 = *param_1 ^ puVar7[0x10] ^ *puVar7;
    param_1[1] = param_1[1] ^ uVar5 ^ uVar1;
    param_1 = param_1 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return 0;
}



// ===== FUN_10005781 @ 10005781 (size 202) =====

/* WARNING: Removing unreachable block (ram,0x10005809) */

undefined4 __cdecl FUN_10005781(uint *param_1,void *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint _Size;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  
  if (param_4 == 0) goto LAB_1000583a;
  do {
    do {
      uVar2 = param_3;
      uVar1 = param_1[0x58];
      _Size = 0x100 - uVar1;
      if ((param_4 == 0) && (param_3 <= _Size)) {
        memcpy((void *)((int)param_1 + uVar1 + 0x60),param_2,param_3);
        param_1[0x58] = param_1[0x58] + param_3;
        param_3 = 0;
        param_4 = 0;
        _Size = uVar2;
      }
      else {
        memcpy((void *)(uVar1 + (int)(param_1 + 0x18)),param_2,_Size);
        param_1[0x58] = param_1[0x58] + _Size;
        FUN_100013f9(0x80,0);
        FUN_100014e6(param_1);
        param_1[0x58] = param_1[0x58] - 0x80;
        bVar6 = param_3 < _Size;
        param_3 = param_3 - _Size;
        param_4 = param_4 - (uint)bVar6;
        puVar4 = param_1 + 0x38;
        puVar5 = param_1 + 0x18;
        for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      param_2 = (void *)((int)param_2 + _Size);
    } while (param_4 != 0);
LAB_1000583a:
  } while (param_3 != 0);
  return 0;
}



// ===== FUN_1000584b @ 1000584b (size 212) =====

undefined4 __cdecl FUN_1000584b(void *param_1,byte param_2)

{
  uint *in_EAX;
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_44 [64];
  
  if (0x80 < in_EAX[0x58]) {
    FUN_100013f9(0x80,0);
    FUN_100014e6(in_EAX);
    in_EAX[0x58] = in_EAX[0x58] - 0x80;
    memcpy(in_EAX + 0x18,in_EAX + 0x38,in_EAX[0x58]);
  }
  FUN_100013f9(in_EAX[0x58],0);
  if ((char)in_EAX[0x59] != '\0') {
    in_EAX[0x16] = 0xffffffff;
    in_EAX[0x17] = 0xffffffff;
  }
  in_EAX[0x14] = 0xffffffff;
  in_EAX[0x15] = 0xffffffff;
  memset((void *)(in_EAX[0x58] + 0x60 + (int)in_EAX),0,0x100 - in_EAX[0x58]);
  FUN_100014e6(in_EAX);
  puVar2 = local_44;
  iVar3 = (int)in_EAX - (int)puVar2;
  iVar4 = 8;
  do {
    iVar1 = FUN_10001378(*(undefined4 *)(puVar2 + iVar3),*(undefined4 *)(puVar2 + iVar3 + 4));
    puVar2 = (undefined1 *)(iVar1 + 8);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  memcpy(param_1,local_44,(uint)param_2);
  return 0;
}



// ===== FUN_1000591f @ 1000591f (size 73) =====

void __cdecl FUN_1000591f(undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  if (0x1f < DAT_1001956c) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(&DAT_100194d0 + DAT_1001956c * 4) = param_1;
  DAT_1001956c = DAT_1001956c + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  return;
}



// ===== FUN_10005968 @ 10005968 (size 73) =====

void FUN_10005968(void)

{
  code *pcVar1;
  
  while( true ) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
    pcVar1 = (code *)0x0;
    if (DAT_1001956c != 0) {
      pcVar1 = *(code **)(&DAT_100194cc + DAT_1001956c * 4);
      DAT_1001956c = DAT_1001956c + -1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
    if (pcVar1 == (code *)0x0) break;
    (*pcVar1)();
  }
  return;
}



// ===== FUN_100059b1 @ 100059b1 (size 77) =====

void FUN_100059b1(void)

{
  BOOL BVar1;
  int iVar2;
  tagMSG local_20;
  
  iVar2 = 0;
  do {
    BVar1 = PeekMessageW(&local_20,(HWND)0x0,0,0,1);
    if (BVar1 == 0) {
      return;
    }
    do {
      DispatchMessageW(&local_20);
      BVar1 = PeekMessageW(&local_20,(HWND)0x0,0,0,1);
    } while (BVar1 != 0);
    Sleep(0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}



// ===== FUN_100059fe @ 100059fe (size 96) =====

void FUN_100059fe(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *unaff_ESI;
  
  DVar2 = GetTickCount();
  DVar1 = *unaff_ESI;
  FUN_100059b1();
  DVar3 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,*unaff_ESI,0x5ff);
  while ((DVar3 != 0x102 && (DVar3 != 0xffffffff))) {
    DVar3 = GetTickCount();
    if (DVar2 + DVar1 * 10 < DVar3) break;
    FUN_100059b1();
    DVar3 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,*unaff_ESI,0x5ff);
  }
  FUN_100059b1();
  return;
}



// ===== FUN_10005a5e @ 10005a5e (size 37) =====

void FUN_10005a5e(void)

{
  undefined4 *unaff_ESI;
  
  if (*(char *)(unaff_ESI + 1) == '\0') {
    RaiseException(0x46b,1,0,(ULONG_PTR *)0x0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)*unaff_ESI);
  *(undefined1 *)(unaff_ESI + 1) = 0;
  return;
}



// ===== FUN_10005a83 @ 10005a83 (size 37) =====

void FUN_10005a83(void)

{
  undefined4 *unaff_ESI;
  
  if (*(char *)(unaff_ESI + 1) != '\0') {
    RaiseException(0x46b,1,0,(ULONG_PTR *)0x0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*unaff_ESI);
  *(undefined1 *)(unaff_ESI + 1) = 1;
  return;
}



// ===== FUN_10005aa8 @ 10005aa8 (size 681) =====

int __cdecl FUN_10005aa8(DWORD *param_1,DWORD *param_2,char *param_3)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  uint *unaff_EDI;
  DWORD local_124;
  DWORD local_120;
  int local_118;
  ushort local_14;
  
  *unaff_EDI = 0;
  *param_2 = 0;
  *param_1 = 0;
  *param_3 = '\0';
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  if (((DAT_10019570 == 0) && (DAT_10019574 == 0)) && (DAT_10019578 == 0)) {
    FUN_10005a5e();
    FUN_10006819();
    GetModuleHandleW((LPCWSTR)0x0);
    FUN_10006819();
    bVar3 = FUN_10006619();
    if (bVar3) {
      if (local_118 == 2) {
        *param_1 = local_124;
        *param_2 = local_120;
        *unaff_EDI = (uint)local_14;
      }
      else {
        bVar3 = FUN_100066ca(4,0,0);
        if (!bVar3) goto LAB_10005b52;
        *param_3 = '\x01';
        *param_1 = 4;
      }
      uVar1 = *param_1;
      while ((uVar1 = uVar1 + 1, uVar1 < 0x10000 && (bVar3 = FUN_100066ca(uVar1,0,0), bVar3))) {
        *unaff_EDI = 0;
        *param_2 = 0;
        *param_1 = uVar1;
        *param_3 = '\x01';
      }
      uVar1 = *param_2;
      while ((uVar1 = uVar1 + 1, uVar1 < 0x10000 && (bVar3 = FUN_100066ca(*param_1,uVar1,0), bVar3))
            ) {
        *param_2 = uVar1;
        *unaff_EDI = 0;
        *param_3 = '\x01';
      }
      uVar2 = (ushort)*unaff_EDI;
      while( true ) {
        uVar2 = uVar2 + 1;
        bVar3 = FUN_100066ca(*param_1,*param_2,uVar2);
        if (!bVar3) break;
        *unaff_EDI = (uint)uVar2;
        *param_3 = '\x01';
      }
      if (((*param_1 < 0xffff) && (*param_2 < 0xffff)) && (*unaff_EDI < 0xffff)) {
        FUN_10005a83();
        if (((DAT_10019570 == 0) && (DAT_10019574 == 0)) && (DAT_10019578 == 0)) {
          DAT_10019570 = *param_1;
          DAT_10019574 = *param_2;
          DAT_10019578 = *unaff_EDI;
          if ((DAT_10019580 == '\0') && (*param_3 == '\0')) {
            DAT_10019580 = '\0';
          }
          else {
            DAT_10019580 = '\x01';
          }
        }
        else {
          *param_1 = DAT_10019570;
          *param_2 = DAT_10019574;
          *unaff_EDI = DAT_10019578;
          *param_3 = DAT_10019580;
        }
        goto LAB_10005d43;
      }
    }
    else if (DAT_10019582 != '\0') {
      MessageBoxW((HWND)0x0,L"GetVersionEx() has failed, cannot detect Windows version!",
                  L"StdUtils::get_real_os_version",0x40010);
    }
LAB_10005b52:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
    iVar4 = (uint)extraout_var << 8;
  }
  else {
    *param_1 = DAT_10019570;
    *param_2 = DAT_10019574;
    *unaff_EDI = DAT_10019578;
    *param_3 = DAT_10019580;
LAB_10005d43:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
    iVar4 = CONCAT31(extraout_var_00,1);
  }
  return iVar4;
}



// ===== FUN_10005d51 @ 10005d51 (size 451) =====

int __cdecl FUN_10005d51(char *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint3 extraout_var_00;
  DWORD DVar3;
  uint *unaff_EDI;
  uint local_12c;
  undefined4 local_128 [3];
  uint local_11c;
  int local_118;
  
  *unaff_EDI = 0;
  *param_1 = '\0';
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  if (DAT_1001957c == 0) {
    FUN_10005a5e();
    memset(local_128,0,0x11c);
    local_128[0] = 0x11c;
    bVar2 = FUN_10006619();
    if (!bVar2) {
      if (DAT_10019582 != '\0') {
        MessageBoxW((HWND)0x0,L"GetVersionEx() has failed, cannot detect Windows version!",
                    L"StdUtils::get_real_os_buildNo",0x40010);
      }
LAB_10005df5:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
      return (uint)extraout_var_00 << 8;
    }
    if (local_118 == 2) {
      *unaff_EDI = local_11c;
    }
    else {
      bVar2 = FUN_100066ca(4,0,0);
      if (!bVar2) goto LAB_10005df5;
      *param_1 = '\x01';
      *unaff_EDI = 0x565;
    }
    uVar1 = *unaff_EDI;
    if ((uVar1 < 0x7fffffff) && (1 < 0x7fffffff - uVar1)) {
      DVar3 = uVar1 + 1;
    }
    else {
      DVar3 = 0x7fffffff;
    }
    bVar2 = FUN_1000678b(DVar3);
    if (bVar2) {
      local_12c = 1;
      do {
        if ((local_12c == 0xffffffff) || (-local_12c - 1 <= local_12c)) {
          local_12c = 0xffffffff;
        }
        else {
          local_12c = local_12c * 2;
        }
      } while (local_12c < 0x7fffffff);
      do {
        DVar3 = 0x7fffffff;
        while( true ) {
          if (0x7ffffffe < *unaff_EDI) goto LAB_10005e86;
          bVar2 = FUN_1000678b(DVar3);
          if (bVar2) {
            *unaff_EDI = DVar3;
            *param_1 = '\x01';
          }
          else {
            if (local_12c < 2) goto LAB_10005e86;
            local_12c = local_12c >> 1;
          }
          uVar1 = *unaff_EDI;
          if (((0x7ffffffe < uVar1) || (0x7ffffffe < local_12c)) ||
             (0x7fffffff - uVar1 <= local_12c)) break;
          DVar3 = uVar1 + local_12c;
        }
      } while( true );
    }
LAB_10005e86:
    FUN_10005a83();
    if (DAT_1001957c == 0) {
      DAT_1001957c = *unaff_EDI;
      if ((DAT_10019580 != '\0') || (*param_1 != '\0')) {
        DAT_10019580 = '\x01';
      }
    }
    else {
      *unaff_EDI = DAT_1001957c;
      *param_1 = DAT_10019580;
    }
  }
  else {
    *unaff_EDI = DAT_1001957c;
    *param_1 = DAT_10019580;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  return CONCAT31(extraout_var,1);
}



// ===== FUN_10005f17 @ 10005f17 (size 835) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

wchar_t * __cdecl FUN_10005f17(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  wchar_t local_200 [255];
  undefined2 local_2;
  
  if ((_DAT_10019d20 & 1) == 0) {
    DAT_1001985c = 0;
    DAT_10019858 = 4;
    pwVar6 = L"Windows NT 4.0";
    pwVar7 = (wchar_t *)&DAT_10019860;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar7 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    }
    *pwVar7 = *pwVar6;
    puVar8 = &DAT_1001987e;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    pwVar6 = L"Windows NT 4.0 (Server)";
    puVar8 = &DAT_100198a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    iVar1 = 5;
    DAT_100198d0 = 0;
    DAT_100198d4 = 0;
    DAT_100198d8 = 0;
    DAT_100198dc = 0;
    DAT_100198e4 = 0;
    DAT_100198e0 = 5;
    iVar4 = 6;
    pwVar6 = L"Windows 2000";
    pwVar7 = (wchar_t *)&DAT_100198e8;
    for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pwVar7 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    }
    *pwVar7 = *pwVar6;
    puVar8 = &DAT_10019902;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    pwVar6 = L"Windows 2000 (Server)";
    puVar8 = &DAT_10019928;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    DAT_10019954 = 0;
    DAT_10019958 = 0;
    DAT_1001995c = 0;
    DAT_10019960 = 0;
    DAT_10019964 = 0;
    _DAT_10019d20 = _DAT_10019d20 | 1;
    _DAT_10019968 = 5;
    _DAT_1001996c = 1;
    pwVar6 = L"Windows XP";
    pwVar7 = (wchar_t *)&DAT_10019970;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pwVar7 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    }
    *pwVar7 = *pwVar6;
    memset(&DAT_10019986,0,0x2a);
    pwVar6 = L"Windows XP (Server)";
    puVar8 = &DAT_100199b0;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    puVar8 = &DAT_100199d8;
    for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    _DAT_100199f0 = 5;
    _DAT_100199f4 = 2;
    pwVar6 = L"Windows XP (x64)";
    pwVar7 = (wchar_t *)&DAT_100199f8;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pwVar7 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    }
    *pwVar7 = *pwVar6;
    puVar8 = &DAT_10019a1a;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    pwVar6 = L"Windows Server 2003";
    puVar8 = &DAT_10019a38;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    puVar8 = &DAT_10019a60;
    for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    _DAT_10019a7c = 0;
    _DAT_10019a78 = 6;
    pwVar6 = L"Windows Vista";
    puVar8 = &DAT_10019a80;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    puVar8 = &DAT_10019a9c;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    pwVar6 = L"Windows Server 2008";
    puVar8 = &DAT_10019ac0;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    puVar8 = &DAT_10019ae8;
    for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    _DAT_10019b00 = 6;
    _DAT_10019b04 = 1;
    pwVar6 = L"Windows 7";
    puVar8 = &DAT_10019b08;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    memset(&DAT_10019b1c,0,0x2c);
    pwVar6 = L"Windows Server 2008 R2";
    pwVar7 = (wchar_t *)&DAT_10019b48;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pwVar7 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    }
    *pwVar7 = *pwVar6;
    DAT_10019b76 = 0;
    DAT_10019b7a = 0;
    DAT_10019b7e = 0;
    DAT_10019b82 = 0;
    DAT_10019b86 = 0;
    _DAT_10019b88 = 6;
    _DAT_10019b8c = 2;
    pwVar6 = L"Windows 8";
    puVar8 = &DAT_10019b90;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    memset(&DAT_10019ba4,0,0x2c);
    iVar2 = 10;
    pwVar6 = L"Windows Server 2012";
    puVar8 = &DAT_10019bd0;
    for (iVar3 = iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    puVar8 = &DAT_10019bf8;
    for (iVar3 = iVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    _DAT_10019c10 = 6;
    _DAT_10019c14 = 3;
    pwVar6 = L"Windows 8.1";
    puVar8 = &DAT_10019c18;
    for (iVar3 = iVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    puVar8 = &DAT_10019c30;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    pwVar6 = L"Windows Server 2012 R2";
    pwVar7 = (wchar_t *)&DAT_10019c58;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pwVar7 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    }
    *pwVar7 = *pwVar6;
    DAT_10019c86 = 0;
    DAT_10019c8a = 0;
    DAT_10019c8e = 0;
    DAT_10019c92 = 0;
    DAT_10019c96 = 0;
    _DAT_10019c9c = 0;
    _DAT_10019c98 = 10;
    pwVar6 = L"Windows 10";
    pwVar7 = (wchar_t *)&DAT_10019ca0;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar7 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    }
    *pwVar7 = *pwVar6;
    memset(&DAT_10019cb6,0,0x2a);
    pwVar6 = L"Windows Server 2016";
    puVar8 = &DAT_10019ce0;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar8 = *(undefined4 *)pwVar6;
      pwVar6 = pwVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    puVar8 = &DAT_10019d08;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  iVar1 = 0;
  uVar5 = 0;
  while ((*(int *)((int)&DAT_10019858 + uVar5) != param_1 ||
         (*(int *)((int)&DAT_1001985c + uVar5) != param_2))) {
    uVar5 = uVar5 + 0x88;
    iVar1 = iVar1 + 1;
    if (0x4c7 < uVar5) {
      if (DAT_10019582 != '\0') {
        _snwprintf(local_200,0x100,L"Running on an unknown windows version v%u.%u!",param_1,param_2)
        ;
        local_2 = 0;
        MessageBoxW((HWND)0x0,local_200,L"StdUtils::get_os_friendly_name",0x40030);
      }
      return L"unknown";
    }
  }
  if (param_3 != '\0') {
    return (wchar_t *)(&DAT_100198a0 + iVar1 * 0x22);
  }
  return (wchar_t *)(&DAT_10019860 + iVar1 * 0x22);
}



// ===== FUN_1000625a @ 1000625a (size 88) =====

undefined1 FUN_1000625a(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *unaff_EDI;
  undefined4 local_120 [70];
  byte local_6;
  
  uVar2 = 0;
  memset(local_120,0,0x11c);
  local_120[0] = 0x11c;
  bVar1 = FUN_10006619();
  if (bVar1) {
    if (local_6 == 1) {
      uVar2 = 1;
      *unaff_EDI = 0;
    }
    else if ((1 < local_6) && (local_6 < 4)) {
      uVar2 = 1;
      *unaff_EDI = 1;
    }
  }
  return uVar2;
}



// ===== FUN_100062b2 @ 100062b2 (size 489) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100062b2(void)

{
  int iVar1;
  uint uVar2;
  LSTATUS LVar3;
  DWORD *unaff_ESI;
  bool bVar4;
  char local_119;
  DWORD local_118;
  DWORD local_114;
  HKEY local_110;
  DWORD local_10c;
  DWORD local_108 [65];
  
  if ((_DAT_10019d5c & 1) == 0) {
    _DAT_10019d5c = _DAT_10019d5c | 1;
    DAT_10019d24 = 0x2800;
    _DAT_10019d28 = 0x5e3;
    DAT_10019d2c = 0x295a;
    DAT_10019d30 = 0x5e7;
    _DAT_10019d34 = 0x3839;
    _DAT_10019d38 = 0x647;
    _DAT_10019d3c = 0x3ad7;
    _DAT_10019d40 = 0x6a7;
    _DAT_10019d44 = 0x3fab;
    _DAT_10019d48 = 0x6ad;
    _DAT_10019d4c = 0x42ee;
    _DAT_10019d50 = 0x70b;
    _DAT_10019d54 = 0x4563;
    _DAT_10019d58 = 0x711;
  }
  *unaff_ESI = 0xffffffff;
  iVar1 = FUN_10005aa8(&local_118,&local_10c,&local_119);
  if ((char)iVar1 == '\0') {
    return -1;
  }
  if (local_118 < 10) {
    return 0;
  }
  iVar1 = FUN_10005d51(&local_119);
  if ((char)iVar1 != '\0') {
    uVar2 = 0;
    do {
      if (local_118 == (&DAT_10019d24)[uVar2 * 2]) {
        *unaff_ESI = *(DWORD *)(&DAT_10019d28 + uVar2 * 8);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 7);
  }
  LVar3 = RegOpenKeyExW((HKEY)0x80000002,L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",0,
                        0x20001,&local_110);
  if (LVar3 != 0) goto LAB_10006485;
  local_118 = 0;
  local_114 = 0x100;
  LVar3 = RegQueryValueExW(local_110,L"ReleaseId",(LPDWORD)0x0,&local_118,(LPBYTE)local_108,
                           &local_114);
  if (LVar3 == 0) {
    if ((((local_118 == 1) || (local_118 == 2)) || (local_118 == 7)) && (1 < local_114)) {
      iVar1 = swscanf((wchar_t *)local_108,L"%lu",&local_10c);
      local_108[0] = local_10c;
      if (iVar1 == 1) {
LAB_10006479:
        *unaff_ESI = local_108[0];
      }
    }
    else {
      if (local_118 == 4) {
        bVar4 = local_114 < 4;
      }
      else {
        if (local_118 != 0xb) goto LAB_1000647b;
        bVar4 = local_114 < 8;
      }
      if (!bVar4) goto LAB_10006479;
    }
  }
LAB_1000647b:
  RegCloseKey(local_110);
LAB_10006485:
  return (uint)(*unaff_ESI != 0xffffffff) * 2 + -1;
}



// ===== FUN_1000649b @ 1000649b (size 382) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

wchar_t * __cdecl FUN_1000649b(int param_1)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  
  uVar2 = 0;
  if ((_DAT_10019850 & 1) == 0) {
    DAT_10019630 = 0x5e3;
    _DAT_10019850 = _DAT_10019850 | 1;
    pwVar3 = L"Threshold 1";
    puVar4 = &DAT_10019634;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pwVar3;
      pwVar3 = pwVar3 + 2;
      puVar4 = puVar4 + 1;
    }
    puVar4 = &DAT_1001964c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DAT_10019674 = 0x5e7;
    pwVar3 = L"Threshold 2";
    puVar4 = &DAT_10019678;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pwVar3;
      pwVar3 = pwVar3 + 2;
      puVar4 = puVar4 + 1;
    }
    puVar4 = &DAT_10019690;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    _DAT_100196b8 = 0x647;
    pwVar3 = L"Redstone 1";
    pwVar5 = (wchar_t *)&DAT_100196bc;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
      pwVar3 = pwVar3 + 2;
      pwVar5 = pwVar5 + 2;
    }
    *pwVar5 = *pwVar3;
    memset(&DAT_100196d2,0,0x2a);
    _DAT_100196fc = 0x6a7;
    pwVar3 = L"Redstone 2";
    pwVar5 = (wchar_t *)&DAT_10019700;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
      pwVar3 = pwVar3 + 2;
      pwVar5 = pwVar5 + 2;
    }
    *pwVar5 = *pwVar3;
    memset(&DAT_10019716,0,0x2a);
    _DAT_10019740 = 0x6ad;
    pwVar3 = L"Redstone 3";
    pwVar5 = (wchar_t *)&DAT_10019744;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
      pwVar3 = pwVar3 + 2;
      pwVar5 = pwVar5 + 2;
    }
    *pwVar5 = *pwVar3;
    memset(&DAT_1001975a,0,0x2a);
    _DAT_10019784 = 0x70b;
    pwVar3 = L"Redstone 4";
    pwVar5 = (wchar_t *)&DAT_10019788;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
      pwVar3 = pwVar3 + 2;
      pwVar5 = pwVar5 + 2;
    }
    *pwVar5 = *pwVar3;
    memset(&DAT_1001979e,0,0x2a);
    _DAT_100197c8 = 0x711;
    pwVar3 = L"Redstone 5";
    pwVar5 = (wchar_t *)&DAT_100197cc;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
      pwVar3 = pwVar3 + 2;
      pwVar5 = pwVar5 + 2;
    }
    *pwVar5 = *pwVar3;
    memset(&DAT_100197e2,0,0x2a);
    _DAT_1001980c = 0x76f;
    DAT_10019810 = _DAT_1001622c;
    DAT_10019814 = DAT_10016230;
    DAT_10019818 = DAT_10016234;
    memset(&DAT_1001981a,0,0x36);
  }
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_10019630 + uVar2) == param_1) {
      return (wchar_t *)(&DAT_10019634 + iVar1 * 0x11);
    }
    uVar2 = uVar2 + 0x44;
    iVar1 = iVar1 + 1;
  } while (uVar2 < 0x220);
  return L"unknown";
}



// ===== FUN_10006619 @ 10006619 (size 95) =====

bool FUN_10006619(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  BOOL BVar3;
  LPOSVERSIONINFOW unaff_ESI;
  
  hModule = GetModuleHandleW(L"ntdll");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar1 = GetProcAddress(hModule,"RtlGetVersion"), pFVar1 != (FARPROC)0x0)) {
    memset(unaff_ESI,0,0x11c);
    unaff_ESI->dwOSVersionInfoSize = 0x11c;
    iVar2 = (*pFVar1)();
    if (iVar2 == 0) {
      return true;
    }
  }
  memset(unaff_ESI,0,0x11c);
  unaff_ESI->dwOSVersionInfoSize = 0x11c;
  BVar3 = GetVersionExW(unaff_ESI);
  return BVar3 != 0;
}



// ===== FUN_10006678 @ 10006678 (size 82) =====

bool __cdecl
FUN_10006678(LPOSVERSIONINFOEXW param_1,DWORD param_2,undefined4 param_3,undefined4 param_4)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  BOOL BVar3;
  
  hModule = GetModuleHandleW(L"ntdll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"RtlVerifyVersionInfo");
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
      if (iVar2 == 0) {
        return true;
      }
    }
  }
  BVar3 = VerifyVersionInfoW(param_1,param_2,(DWORDLONG)CONCAT44(param_4,param_3));
  return BVar3 != 0;
}



// ===== FUN_100066ca @ 100066ca (size 193) =====

bool __cdecl FUN_100066ca(DWORD param_1,DWORD param_2,WORD param_3)

{
  bool bVar1;
  DWORD DVar2;
  undefined8 uVar3;
  _OSVERSIONINFOEXW local_124;
  
  memset(&local_124,0,0x11c);
  local_124.dwMajorVersion = param_1;
  local_124.dwMinorVersion = param_2;
  local_124.wServicePackMajor = param_3;
  local_124.dwOSVersionInfoSize = 0x11c;
  local_124.dwPlatformId = 2;
  uVar3 = VerSetConditionMask(0,0,2,3);
  uVar3 = VerSetConditionMask(uVar3,1,3);
  uVar3 = VerSetConditionMask(uVar3,0x20,3);
  uVar3 = VerSetConditionMask(uVar3,8,1);
  bVar1 = FUN_10006678(&local_124,0x2b,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  if (!bVar1) {
    DVar2 = GetLastError();
    if ((DVar2 != 0x47e) && (DAT_10019582 != '\0')) {
      MessageBoxW((HWND)0x0,L"VerifyVersionInfo() has failed, cannot test Windows version!",
                  L"StdUtils::verify_os_version",0x40010);
    }
  }
  return bVar1;
}



// ===== FUN_1000678b @ 1000678b (size 142) =====

bool __cdecl FUN_1000678b(DWORD param_1)

{
  bool bVar1;
  DWORD DVar2;
  undefined8 uVar3;
  _OSVERSIONINFOEXW local_124;
  
  memset(&local_124,0,0x11c);
  local_124.dwOSVersionInfoSize = 0x11c;
  local_124.dwBuildNumber = param_1;
  uVar3 = VerSetConditionMask(0,0,4,3);
  bVar1 = FUN_10006678(&local_124,4,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  if (!bVar1) {
    DVar2 = GetLastError();
    if ((DVar2 != 0x47e) && (DAT_10019582 != '\0')) {
      MessageBoxW((HWND)0x0,L"VerifyVersionInfo() has failed, cannot test Windows version!",
                  L"StdUtils::verify_os_buildNo",0x40010);
    }
  }
  return bVar1;
}



// ===== FUN_10006819 @ 10006819 (size 151) =====

void FUN_10006819(void)

{
  HMODULE in_EAX;
  DWORD DVar1;
  int iVar2;
  HANDLE pvVar3;
  UINT UVar4;
  wchar_t local_464 [300];
  WCHAR local_20c [260];
  
  if ((in_EAX != (HMODULE)0x0) && (*(int *)((int)&in_EAX[0x13].unused + in_EAX[0xf].unused) != 0)) {
    DVar1 = GetModuleFileNameW(in_EAX,local_20c,0x104);
    if (DVar1 - 1 < 0x103) {
      iVar2 = _snwprintf(local_464,300,L"%s is not a valid Win32 application!",local_20c);
      if (0 < iVar2) {
        FatalAppExitW(0,local_464);
        UVar4 = 0xffffffff;
        pvVar3 = GetCurrentProcess();
        TerminateProcess(pvVar3,UVar4);
      }
    }
    FatalAppExitW(0,L"This is not a valid Win32 application!");
    UVar4 = 0xffffffff;
    pvVar3 = GetCurrentProcess();
    TerminateProcess(pvVar3,UVar4);
  }
  return;
}



// ===== FUN_100068b0 @ 100068b0 (size 44) =====

bool __thiscall
FUN_100068b0(void *this,HANDLE param_1,PLARGE_INTEGER param_2,undefined4 param_3,uint param_4)

{
  LARGE_INTEGER liDistanceToMove;
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  
  iVar3 = 8;
  puVar1 = &stack0xfffffff4;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  liDistanceToMove.s.HighPart = 0;
  liDistanceToMove.s.LowPart = param_4;
  BVar2 = SetFilePointerEx(param_1,liDistanceToMove,param_2,(DWORD)this);
  return BVar2 != 0;
}



// ===== FUN_100068dc @ 100068dc (size 787) =====

uint __cdecl
FUN_100068dc(LPCWSTR param_1,LPCWSTR param_2,void *param_3,void *param_4,void *param_5,int param_6,
            void *param_7,undefined4 param_8,DWORD param_9,undefined4 param_10,void *param_11,
            uint param_12)

{
  bool bVar1;
  HANDLE hObject;
  undefined4 *puVar2;
  BOOL BVar3;
  uint uVar4;
  HANDLE hFile;
  HANDLE pvVar5;
  void **ppvVar6;
  LPCWSTR *ppWVar7;
  uint *extraout_ECX;
  int iVar8;
  void *extraout_ECX_00;
  void *this;
  void *this_00;
  undefined1 uVar9;
  code *pcVar10;
  LPCWSTR pWVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  
  FUN_100138e0();
  uVar9 = 0;
  *extraout_ECX = 0;
  extraout_ECX[1] = 0;
  hObject = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if ((hObject == (HANDLE)0x0) || (hObject == (HANDLE)0xffffffff)) {
    pvVar5 = hObject;
    if (DAT_10019582 != '\0') {
      pvVar5 = (HANDLE)MessageBoxW((HWND)0x0,L"Failed to open source file for reading!",
                                   L"StdUtils::AppendToFile",0x40010);
    }
    if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
      pvVar5 = (HANDLE)CloseHandle(hObject);
    }
LAB_10006be6:
    uVar4 = (uint)pvVar5 & 0xffffff00;
  }
  else {
    iVar8 = 8;
    puVar2 = &param_5;
    do {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    BVar3 = GetFileSizeEx(hObject,(PLARGE_INTEGER)&param_5);
    iVar8 = param_6;
    if (BVar3 == 0) {
      if (DAT_10019582 != '\0') {
        pwVar13 = L"StdUtils::AppendToFile";
        pwVar12 = L"Failed to get size of source file!";
LAB_10006958:
        MessageBoxW((HWND)0x0,pwVar12,pwVar13,0x40010);
      }
    }
    else {
      this = extraout_ECX_00;
      if ((param_6 < 1) && ((param_6 < 0 || (this = param_5, param_5 <= param_3)))) {
        uVar9 = 1;
      }
      else {
        if ((param_3 == (void *)0x0) ||
           (bVar1 = FUN_100068b0(this,hObject,(PLARGE_INTEGER)0x0,param_3,0), bVar1)) {
          hFile = CreateFileW(param_2,4,0,(LPSECURITY_ATTRIBUTES)0x0,4,0,(HANDLE)0x0);
          if ((hFile == (HANDLE)0x0) || (hFile == (HANDLE)0xffffffff)) {
            if (DAT_10019582 != '\0') {
              MessageBoxW((HWND)0x0,L"Failed to open output file for writing!",
                          L"StdUtils::AppendToFile",0x40010);
            }
            pcVar10 = CloseHandle_exref;
            pvVar5 = (HANDLE)CloseHandle(hObject);
            if ((hFile == (HANDLE)0x0) || (hFile == (HANDLE)0xffffffff)) goto LAB_10006be6;
          }
          else {
            bVar1 = FUN_100068b0(this_00,hFile,(PLARGE_INTEGER)0x2,0,0);
            if (bVar1) {
              param_11 = (void *)((int)param_5 - (int)param_3);
              pWVar11 = (LPCWSTR)(iVar8 - (uint)(param_5 < param_3));
              param_12 = (uint)pWVar11;
              if (param_4 == (void *)0x0) {
                param_1 = param_11;
              }
              else {
                param_7 = param_4;
                param_8 = 0;
                if ((pWVar11 < (LPCWSTR)0x80000000) && ((0 < (int)pWVar11 || (param_4 < param_11))))
                {
                  ppvVar6 = &param_7;
                }
                else {
                  ppvVar6 = &param_11;
                }
                pWVar11 = ppvVar6[1];
                param_1 = *ppvVar6;
              }
              param_2 = pWVar11;
              if (((int)pWVar11 < 0) || (((int)pWVar11 < 1 && (param_1 == (LPCWSTR)0x0)))) {
LAB_10006b55:
                CloseHandle(hObject);
                CloseHandle(hFile);
                if (((int)pWVar11 < 1) && (((int)pWVar11 < 0 || (param_1 == (LPCWSTR)0x0)))) {
                  return 1;
                }
                return 0;
              }
              param_9 = 0x2000;
              param_10 = 0;
LAB_10006a92:
              param_2 = pWVar11;
              if (0 < (int)pWVar11) goto LAB_10006aa8;
              if ((-1 < (int)pWVar11) && ((LPCWSTR)0x1fff < param_1)) goto LAB_10006aa8;
              ppWVar7 = &param_1;
              do {
                pWVar11 = param_2;
                param_3 = (void *)0x0;
                BVar3 = ReadFile(hObject,&stack0x00000034,(DWORD)*ppWVar7,(LPDWORD)&param_3,
                                 (LPOVERLAPPED)0x0);
                if ((BVar3 == 0) || (param_3 == (void *)0x0)) {
                  if (DAT_10019582 != '\0') {
                    pwVar13 = L"StdUtils::AppendToFile";
                    pwVar12 = L"Failed to read from source file!";
LAB_10006b4e:
                    MessageBoxW((HWND)0x0,pwVar12,pwVar13,0x40010);
                  }
                  goto LAB_10006b55;
                }
                param_4 = (void *)0x0;
                BVar3 = WriteFile(hFile,&stack0x00000034,(DWORD)param_3,(LPDWORD)&param_4,
                                  (LPOVERLAPPED)0x0);
                if ((BVar3 == 0) || (param_4 != param_3)) {
                  if (DAT_10019582 != '\0') {
                    pwVar13 = L"StdUtils::AppendToFile";
                    pwVar12 = L"Failed to write to output file!";
                    goto LAB_10006b4e;
                  }
                  goto LAB_10006b55;
                }
                bVar1 = param_1 < param_4;
                param_1 = (LPCWSTR)((int)param_1 - (int)param_4);
                pWVar11 = (LPCWSTR)((int)pWVar11 - (uint)bVar1);
                uVar4 = *extraout_ECX;
                *extraout_ECX = *extraout_ECX + (int)param_4;
                param_2 = pWVar11;
                extraout_ECX[1] = extraout_ECX[1] + (uint)CARRY4(uVar4,(uint)param_4);
                if ((int)pWVar11 < 1) goto code_r0x10006b10;
LAB_10006aa8:
                ppWVar7 = (LPCWSTR *)&param_9;
              } while( true );
            }
            if (DAT_10019582 != '\0') {
              MessageBoxW((HWND)0x0,L"Failed to seek to the end of output file!",
                          L"StdUtils::AppendToFile",0x40010);
            }
            pcVar10 = CloseHandle_exref;
            CloseHandle(hObject);
          }
          pvVar5 = (HANDLE)(*pcVar10)(hFile);
          goto LAB_10006be6;
        }
        if (DAT_10019582 != '\0') {
          pwVar13 = L"StdUtils::AppendToFile";
          pwVar12 = L"Failed to skip the offset bytes!";
          goto LAB_10006958;
        }
      }
    }
    BVar3 = CloseHandle(hObject);
    uVar4 = CONCAT31((int3)((uint)BVar3 >> 8),uVar9);
  }
  return uVar4;
code_r0x10006b10:
  if (((int)pWVar11 < 0) || (param_1 == (LPCWSTR)0x0)) goto LAB_10006b55;
  goto LAB_10006a92;
}



// ===== FUN_10006bef @ 10006bef (size 59) =====

undefined4 FUN_10006bef(void)

{
  int in_EAX;
  
  if (in_EAX == 0xc) {
    return 0x1c;
  }
  if (in_EAX == 0xd) {
    return 0x20;
  }
  if (in_EAX == 0xe) {
    return 0x30;
  }
  if (in_EAX != 0xf) {
    MessageBoxW((HWND)0x0,L"Inconsistent state detected, going to abort!",L"StdUtils::Blake2_Size",
                0x40010);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return 0x40;
}



// ===== FUN_10006c2e @ 10006c2e (size 77) =====

undefined4 FUN_10006c2e(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 1:
    return 4;
  case 2:
    return 0x10;
  case 3:
    return 0x14;
  case 4:
  case 8:
  case 0xc:
    return 0x1c;
  case 5:
  case 9:
  case 0xd:
    return 0x20;
  case 6:
  case 10:
  case 0xe:
    return 0x30;
  case 7:
  case 0xb:
  case 0xf:
    return 0x40;
  }
  if (DAT_10019582 != '\0') {
    MessageBoxW((HWND)0x0,L"The specified hash type is unknown/unsupported!",L"StdUtils::HashUtils",
                0x40010);
  }
  return 0xffffffff;
}



// ===== FUN_10006cba @ 10006cba (size 454) =====

undefined4 __fastcall FUN_10006cba(int param_1)

{
  int *in_EAX;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  memset(in_EAX,0,0x200);
  uVar2 = param_1 - 1;
  *in_EAX = param_1;
  switch(uVar2) {
  case 0:
    in_EAX[0x10] = 0;
    break;
  case 1:
    in_EAX[0x20] = 0;
    in_EAX[0x21] = 0;
    in_EAX[0x22] = 0x67452301;
    in_EAX[0x23] = -0x10325477;
    in_EAX[0x24] = -0x67452302;
    in_EAX[0x25] = 0x10325476;
    break;
  case 2:
    in_EAX[0x20] = 0;
    in_EAX[0x21] = 0;
    in_EAX[0x22] = 0x67452301;
    in_EAX[0x23] = -0x10325477;
    in_EAX[0x24] = -0x67452302;
    in_EAX[0x25] = 0x10325476;
    in_EAX[0x26] = -0x3c2d1e10;
    break;
  case 3:
    in_EAX[0x20] = 0;
    in_EAX[0x21] = 0;
    in_EAX[0x2a] = 0x1c;
    piVar3 = &DAT_10015358;
    goto LAB_10006d88;
  case 4:
    in_EAX[0x20] = 0;
    in_EAX[0x21] = 0;
    in_EAX[0x2a] = 0x20;
    piVar3 = &DAT_10015338;
LAB_10006d88:
    piVar4 = in_EAX + 0x22;
    iVar1 = 8;
    goto code_r0x10006d8b;
  case 5:
    in_EAX[0x30] = 0;
    in_EAX[0x31] = 0;
    in_EAX[0x42] = 0x30;
    piVar4 = in_EAX + 0x32;
    iVar1 = 0x10;
    piVar3 = &DAT_100151f8;
    goto code_r0x10006d8b;
  case 6:
    in_EAX[0x30] = 0;
    in_EAX[0x31] = 0;
    in_EAX[0x42] = 0x40;
    piVar4 = in_EAX + 0x32;
    iVar1 = 0x10;
    piVar3 = &DAT_100151b8;
code_r0x10006d8b:
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    break;
  case 7:
    iVar1 = 0xe0;
    goto LAB_10006e04;
  case 8:
    iVar1 = 0x100;
    goto LAB_10006e04;
  case 9:
    iVar1 = 0x180;
    goto LAB_10006e04;
  case 10:
    iVar1 = 0x200;
LAB_10006e04:
    uVar2 = FUN_1000a815(iVar1);
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    FUN_10006bef();
    iVar1 = FUN_10001481();
    uVar2 = 0;
    if (iVar1 != 0) {
      MessageBoxW((HWND)0x0,L"Blake2_Init internal error, going to abort!",
                  L"StdUtils::HashFunction_Init",0x40010);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    break;
  default:
    if (DAT_10019582 != '\0') {
      uVar2 = MessageBoxW((HWND)0x0,L"The specified hash type is unknown/unsupported!",
                          L"StdUtils::HashUtils",0x40010);
    }
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}



// ===== FUN_10006ec2 @ 10006ec2 (size 179) =====

void __fastcall FUN_10006ec2(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  wchar_t *lpText;
  wchar_t *lpCaption;
  
  switch(*unaff_ESI) {
  case 1:
    uVar1 = FUN_1000840d(param_1,param_2,(uint)param_1);
    unaff_ESI[0x10] = uVar1;
    return;
  case 2:
    FUN_10008e47(unaff_ESI + 0x10,param_2,(uint)param_1);
    break;
  case 3:
    FUN_10009153(unaff_ESI + 0x10,param_2,(uint)param_1);
    break;
  case 4:
  case 5:
    FUN_1000a6d4(unaff_ESI + 0x10,param_2,param_1);
    break;
  case 6:
  case 7:
    FUN_1000e4d4(unaff_ESI + 0x10,param_2,(uint)param_1);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    FUN_1000b032(param_2,param_1);
    return;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    iVar2 = FUN_10005781(unaff_ESI + 0x10,param_2,(uint)param_1,0);
    if (iVar2 == 0) {
      return;
    }
    lpCaption = L"StdUtils::HashFunction_Update";
    lpText = L"Blake2_Update internal error, going to abort!";
    goto LAB_10006f65;
  default:
    lpCaption = L"StdUtils::HashFunction_Update";
    lpText = L"Inconsistent state detected, going to abort!";
LAB_10006f65:
    MessageBoxW((HWND)0x0,lpText,lpCaption,0x40010);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



// ===== FUN_10006fa1 @ 10006fa1 (size 180) =====

void FUN_10006fa1(void)

{
  uint uVar1;
  undefined4 *in_EAX;
  undefined4 uVar2;
  int iVar3;
  uint *unaff_EDI;
  
  switch(*in_EAX) {
  case 1:
    uVar1 = in_EAX[0x10];
    *unaff_EDI = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    return;
  case 2:
    FUN_10008ee7((int)(in_EAX + 0x10),unaff_EDI);
    break;
  case 3:
    FUN_100091f3((int)unaff_EDI);
    break;
  case 4:
  case 5:
    FUN_1000a778((int)unaff_EDI);
    break;
  case 6:
  case 7:
    FUN_1000e593(in_EAX + 0x10,unaff_EDI);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    FUN_1000b0ff(unaff_EDI);
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar2 = FUN_10006bef();
    iVar3 = FUN_1000584b(unaff_EDI,(byte)uVar2);
    if (iVar3 == 0) {
      return;
    }
    MessageBoxW((HWND)0x0,L"Blake2_Final internal error, going to abort!",
                L"StdUtils::HashFunction_Final",0x40010);
                    /* WARNING: Could not recover jumptable at 0x10007031. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    abort();
    return;
  default:
    MessageBoxW((HWND)0x0,L"Inconsistent state detected, going to abort!",
                L"StdUtils::HashFunction_Final",0x40010);
                    /* WARNING: Could not recover jumptable at 0x1000704f. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    abort();
    return;
  }
  return;
}



// ===== FUN_10007080 @ 10007080 (size 73) =====

void __fastcall FUN_10007080(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (param_3 != 0) {
    do {
      *(undefined2 *)(param_2 + iVar1 * 2) =
           *(undefined2 *)(&PTR_DAT_10016da0)[*(byte *)(param_4 + uVar2)];
      *(undefined2 *)(param_2 + 2 + iVar1 * 2) =
           *(undefined2 *)((&PTR_DAT_10016da0)[*(byte *)(param_4 + uVar2)] + 2);
      iVar1 = iVar1 + 2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  *(undefined2 *)(param_2 + iVar1 * 2) = 0;
  return;
}



// ===== FUN_100070c9 @ 100070c9 (size 386) =====

uint __cdecl FUN_100070c9(undefined4 param_1,LPCWSTR param_2,int param_3)

{
  uint uVar1;
  HANDLE hFile;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  wchar_t *lpText;
  wchar_t *lpCaption;
  uint *local_18;
  HANDLE local_14;
  HANDLE local_10;
  undefined1 local_c [8];
  
  FUN_100138e0();
  uVar1 = DAT_10019d64;
  hFile = (HANDLE)FUN_10006c2e();
  if (hFile == (HANDLE)0xffffffff) goto LAB_10007242;
  local_10 = hFile;
  if (hFile < (HANDLE)(uVar1 >> 1)) {
    hFile = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    local_14 = hFile;
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
      uVar2 = FUN_10006cba(param_1);
      if ((char)uVar2 != '\0') {
        local_18 = (uint *)0x0;
        iVar3 = ReadFile(hFile,&stack0x00000274,0x1000,(LPDWORD)&local_18,(LPOVERLAPPED)0x0);
        while (iVar3 != 0) {
          if (local_18 == (uint *)0x0) {
            CloseHandle(local_14);
            FUN_10006fa1();
            uVar2 = FUN_10007080(extraout_ECX,param_3,(uint)local_10,(int)local_c);
            return CONCAT31((int3)((uint)uVar2 >> 8),1);
          }
          FUN_10006ec2(local_18,(uint *)&stack0x00000274);
          local_18 = (uint *)0x0;
          iVar3 = ReadFile(local_14,&stack0x00000274,0x1000,(LPDWORD)&local_18,(LPOVERLAPPED)0x0);
        }
        hFile = local_14;
        if (DAT_10019582 != '\0') {
          MessageBoxW((HWND)0x0,L"Failed to read data from input file!",L"StdUtils::HashUtils",
                      0x40010);
          hFile = local_14;
        }
      }
      hFile = (HANDLE)CloseHandle(hFile);
      goto LAB_10007242;
    }
    if (DAT_10019582 == '\0') goto LAB_10007242;
    lpCaption = L"StdUtils::HashUtils";
    lpText = L"Failed to open input file for reading!";
  }
  else {
    if (DAT_10019582 == '\0') goto LAB_10007242;
    lpCaption = L"StdUtils::HashUtils";
    lpText = L"Output buffer is too small to hold the hash value!";
  }
  hFile = (HANDLE)MessageBoxW((HWND)0x0,lpText,lpCaption,0x40010);
LAB_10007242:
  return (uint)hFile & 0xffffff00;
}



// ===== FUN_1000724b @ 1000724b (size 186) =====

uint __cdecl FUN_1000724b(undefined4 param_1,LPCWSTR param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined1 local_2c0 [700];
  
  uVar1 = DAT_10019d64;
  uVar2 = FUN_10006c2e();
  uVar3 = uVar2;
  if (uVar2 != 0xffffffff) {
    if (uVar2 < uVar1 >> 1) {
      uVar3 = FUN_10006cba(param_1);
      if ((char)uVar3 != '\0') {
        puVar4 = (uint *)FUN_100134f1(param_2);
        uVar3 = 0;
        if (puVar4 != (uint *)0x0) {
          puVar5 = puVar4;
          do {
            uVar1 = *puVar5;
            puVar5 = (uint *)((int)puVar5 + 1);
          } while ((char)uVar1 != '\0');
          FUN_10006ec2((uint *)((int)puVar5 - ((int)puVar4 + 1)),puVar4);
          operator_delete(puVar4);
          FUN_10006fa1();
          uVar6 = FUN_10007080(extraout_ECX,param_3,uVar2,(int)local_2c0);
          return CONCAT31((int3)((uint)uVar6 >> 8),1);
        }
      }
    }
    else if (DAT_10019582 != '\0') {
      uVar3 = MessageBoxW((HWND)0x0,L"Output buffer is too small to hold the hash value!",
                          L"StdUtils::HashUtils",0x40010);
    }
  }
  return uVar3 & 0xffffff00;
}



// ===== FUN_10007305 @ 10007305 (size 49) =====

void FUN_10007305(OLECHAR *param_1)

{
  BSTR pOVar1;
  VARIANTARG *unaff_ESI;
  
  VariantInit(unaff_ESI);
  if (param_1 != (OLECHAR *)0x0) {
    VariantClear(unaff_ESI);
    pOVar1 = SysAllocString(param_1);
    if (pOVar1 != (BSTR)0x0) {
      (unaff_ESI->n1).n2.vt = 8;
      *(BSTR *)((int)&unaff_ESI->n1 + 8) = pOVar1;
    }
  }
  return;
}



// ===== FUN_10007336 @ 10007336 (size 143) =====

undefined1 __cdecl FUN_10007336(UINT *param_1,LPWSTR param_2)

{
  UINT *pUVar1;
  UINT UVar2;
  bool bVar3;
  int iVar4;
  undefined3 in_ECX;
  int iVar5;
  int *unaff_EDI;
  HINSTANCE local_c;
  undefined1 uVar6;
  
  memset(param_2,0,*unaff_EDI * 2);
  bVar3 = false;
  local_c = GetModuleHandleW(L"shell32");
  if (local_c == (HMODULE)0x0) {
    bVar3 = true;
    local_c = LoadLibraryW(L"shell32");
    if (local_c == (HMODULE)0x0) {
      return (char)((uint3)in_ECX >> 0x10);
    }
  }
  iVar5 = 0;
  UVar2 = *param_1;
  uVar6 = 0;
  pUVar1 = param_1;
  do {
    if (UVar2 == 0xffffffff) {
LAB_100073af:
      if (bVar3) {
        FreeLibrary(local_c);
      }
      return uVar6;
    }
    iVar4 = LoadStringW(local_c,*pUVar1,param_2,*unaff_EDI);
    if (0 < iVar4) {
      uVar6 = 1;
      goto LAB_100073af;
    }
    iVar5 = iVar5 + 1;
    pUVar1 = param_1 + iVar5;
    UVar2 = *pUVar1;
  } while( true );
}



// ===== FUN_100073c5 @ 100073c5 (size 671) =====

undefined4 __cdecl FUN_100073c5(int *param_1,undefined4 *param_2)

{
  char extraout_AL;
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int *unaff_EDI;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  BSTR _Str1;
  undefined1 auStack_25c [16];
  int *local_24c;
  VARIANTARG VStack_240;
  _union_2683 local_228;
  int *piStack_210;
  WCHAR local_208 [258];
  
  VStack_240.n1.decVal.Hi32 = 1;
  auStack_25c._4_4_ = (int *)0x100;
  FUN_10007336((UINT *)*param_2,local_208);
  if (extraout_AL != '\0') {
    local_24c = (int *)0x0;
    auStack_25c._12_4_ = 0;
    FUN_10007305((OLECHAR *)param_2[1]);
    iVar1 = (**(code **)(*param_1 + 0x24))
                      (param_1,local_228._0_4_,local_228.decVal.Hi32,local_228._8_4_,
                       local_228._12_4_);
    if ((-1 < iVar1) && (local_24c != (int *)0x0)) {
      FUN_10007305((OLECHAR *)param_2[2]);
      puVar6 = auStack_25c + 0xc;
      piVar5 = local_24c;
      iVar1 = (**(code **)(*local_24c + 0x30))();
      if ((iVar1 < 0) || (auStack_25c._0_4_ == 0)) {
        (**(code **)(*(int *)auStack_25c._4_4_ + 8))(auStack_25c._4_4_);
        uVar3 = 4;
      }
      else {
        piVar4 = (int *)auStack_25c._4_4_;
        (**(code **)(*(int *)auStack_25c._4_4_ + 8))();
        auStack_25c._0_4_ = 0;
        auStack_25c._8_4_ = 0;
        iVar1 = (**(code **)(*unaff_EBX + 0x58))(unaff_EBX,&stack0xfffffd9c);
        if ((iVar1 < 0) || (puVar6 == (undefined1 *)0x0)) {
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        }
        else {
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
          iVar1 = (**(code **)(*piStack_210 + 0x1c))(piStack_210,&stack0xfffffda0);
          if ((-1 < iVar1) && (0 < (int)unaff_EDI)) {
            FUN_100059fe();
            iVar1 = 0;
            if (0 < (int)unaff_EDI) {
              do {
                VariantInit((VARIANTARG *)auStack_25c);
                VariantClear((VARIANTARG *)auStack_25c);
                _Str1 = (wchar_t *)0x0;
                auStack_25c._0_2_ = 3;
                auStack_25c._8_4_ = iVar1;
                iVar2 = (**(code **)(*piVar4 + 0x28))
                                  (piVar4,auStack_25c._0_4_,auStack_25c._4_4_,iVar1,
                                   auStack_25c._12_4_,&stack0xfffffd94);
                if ((iVar2 < 0) || (_Str1 == (wchar_t *)0x0)) {
LAB_100075c7:
                  VariantClear((VARIANTARG *)auStack_25c);
                }
                else {
                  iVar2 = (**(code **)(*(int *)_Str1 + 0x24))(_Str1,&stack0xfffffd9c);
                  if ((iVar2 < 0) || (_Str1 == (wchar_t *)0x0)) {
                    (**(code **)(*piVar5 + 8))(piVar5);
                    goto LAB_100075c7;
                  }
                  iVar2 = _wcsicmp(_Str1,(wchar_t *)((int)&VStack_240.n1 + 0xc));
                  if ((iVar2 == 0) && (iVar2 = (**(code **)(*piVar5 + 0x28))(piVar5), -1 < iVar2)) {
                    unaff_EDI = (int *)0x0;
                  }
                  SysFreeString(_Str1);
                  (**(code **)(*piVar5 + 8))(piVar5);
                  VariantClear((VARIANTARG *)auStack_25c);
                  if (unaff_EBX == (int *)0x0) break;
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < (int)unaff_EDI);
            }
            (**(code **)(*piVar4 + 8))(piVar4);
            VariantClear(&VStack_240);
            VariantClear((VARIANTARG *)(auStack_25c + 0xc));
            return 0;
          }
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        uVar3 = 1;
      }
      VariantClear(&VStack_240);
      VariantClear((VARIANTARG *)(auStack_25c + 0xc));
      return uVar3;
    }
    VariantClear((VARIANTARG *)&local_228.n2);
  }
  return 4;
}



// ===== FUN_10007664 @ 10007664 (size 381) =====

undefined4 __cdecl FUN_10007664(short *param_1,short *param_2,undefined4 param_3)

{
  LPCWSTR pWVar1;
  short sVar2;
  short *psVar3;
  LPCWSTR lpFileName;
  uint uVar4;
  short *psVar5;
  DWORD DVar6;
  BOOL BVar7;
  uint uVar8;
  LPCWSTR pWVar9;
  _OSVERSIONINFOW local_130;
  undefined4 local_1c;
  short *local_18;
  short *local_14;
  undefined4 local_10;
  char local_c [7];
  char local_5;
  
  local_c[0] = '\x01';
  local_10 = 1;
  psVar5 = param_1;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  psVar3 = param_2;
  do {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  lpFileName = calloc(((int)psVar3 - (int)(param_2 + 1) >> 1) + 3 +
                      ((int)psVar5 - (int)(param_1 + 1) >> 1),2);
  psVar5 = param_1;
  if (lpFileName != (LPCWSTR)0x0) {
    do {
      sVar2 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    uVar4 = (int)psVar5 - (int)param_1;
    pWVar9 = lpFileName + -1;
    do {
      pWVar1 = pWVar9 + 1;
      pWVar9 = pWVar9 + 1;
    } while (*pWVar1 != L'\0');
    psVar5 = param_1;
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pWVar9 = *(undefined4 *)psVar5;
      psVar5 = psVar5 + 2;
      pWVar9 = pWVar9 + 2;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)pWVar9 = (char)*psVar5;
      psVar5 = (short *)((int)psVar5 + 1);
      pWVar9 = (LPCWSTR)((int)pWVar9 + 1);
    }
    pWVar9 = lpFileName + -1;
    do {
      pWVar1 = pWVar9 + 1;
      pWVar9 = pWVar9 + 1;
    } while (*pWVar1 != L'\0');
    *(undefined4 *)pWVar9 = DAT_100153a8;
    psVar5 = param_2;
    do {
      sVar2 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    pWVar9 = lpFileName + -1;
    do {
      pWVar1 = pWVar9 + 1;
      pWVar9 = pWVar9 + 1;
    } while (*pWVar1 != L'\0');
    psVar3 = param_2;
    for (uVar4 = (uint)((int)psVar5 - (int)param_2) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pWVar9 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + 2;
      pWVar9 = pWVar9 + 2;
    }
    for (uVar4 = (int)psVar5 - (int)param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)pWVar9 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      pWVar9 = (LPCWSTR)((int)pWVar9 + 1);
    }
    DVar6 = GetFileAttributesW(lpFileName);
    local_5 = DVar6 != 0xffffffff;
    free(lpFileName);
    if (local_5 == '\0') {
      return 4;
    }
  }
  memset(&local_130,0,0x114);
  local_130.dwOSVersionInfoSize = 0x114;
  BVar7 = GetVersionExW(&local_130);
  if (BVar7 != 0) {
    if ((local_130.dwPlatformId == 2) &&
       ((6 < local_130.dwMajorVersion ||
        ((local_130.dwMajorVersion == 6 && (local_130.dwMinorVersion != 0)))))) {
      local_1c = param_3;
      local_18 = param_1;
      local_14 = param_2;
      local_10 = FUN_1000ea22(FUN_100073c5,&local_1c,local_c);
    }
    else {
      local_10 = 3;
    }
  }
  return local_10;
}



// ===== FUN_100077e1 @ 100077e1 (size 121) =====

void FUN_100077e1(void)

{
  void *_Memory;
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  if (DAT_10019581 != '\0') {
    if (DAT_10019588 != (int *)0x0) {
      _Memory = (void *)*DAT_10019588;
      piVar1 = DAT_10019588;
      while (_Memory != (void *)0x0) {
        free(_Memory);
        piVar1 = piVar1 + 1;
        _Memory = (void *)*piVar1;
      }
      free(DAT_10019588);
      DAT_10019588 = (int *)0x0;
      DAT_10019584 = 0;
    }
    DAT_10019581 = '\0';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  return;
}



// ===== FUN_1000785a @ 1000785a (size 167) =====

int FUN_1000785a(void)

{
  int iVar1;
  DWORD DVar2;
  undefined3 extraout_var;
  uint3 extraout_var_00;
  _startupinfo local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  if (DAT_10019581 == '\0') {
    local_8.newmode = 0;
    iVar1 = __wgetmainargs(&DAT_10019584,(wchar_t ***)&DAT_10019588,(wchar_t ***)&DAT_1001958c,0,
                           &local_8);
    if (((iVar1 != 0) && (DVar2 = GetVersion(), 0x500 < (DVar2 >> 8 & 0xff | (DVar2 & 0xff) << 8)))
       || (DAT_10019588 == 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
      return (uint)extraout_var_00 << 8;
    }
    DAT_10019581 = '\x01';
    FUN_1000591f(FUN_100077e1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  return CONCAT31(extraout_var,1);
}



// ===== FUN_10007901 @ 10007901 (size 75) =====

uint __cdecl FUN_10007901(wint_t *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_1;
  uVar3 = (uint)uVar2;
  if (((uVar3 == 0x2f) || (uVar3 == 0x5c)) || (uVar3 == 0x2d)) {
LAB_10007946:
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    iVar4 = 0;
    puVar1 = param_1;
    while (uVar2 != 0) {
      uVar3 = iswgraph(*puVar1);
      if ((uVar3 == 0) || (*puVar1 == 0x3d)) goto LAB_10007946;
      iVar4 = iVar4 + 1;
      puVar1 = param_1 + iVar4;
      uVar2 = *puVar1;
    }
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}



// ===== FUN_1000794c @ 1000794c (size 246) =====

uint __cdecl FUN_1000794c(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  wchar_t wVar1;
  short *in_EAX;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  if (((*in_EAX != 0x2f) || (pwVar4 = in_EAX + 1, *pwVar4 == L'\0')) &&
     ((*in_EAX != 0x2d || ((in_EAX[1] != 0x2d || (pwVar4 = in_EAX + 2, *pwVar4 == L'\0')))))) {
    pwVar4 = (wchar_t *)0x0;
  }
  if (((pwVar4 != (wchar_t *)0x0) && (in_EAX = (short *)iswgraph(*pwVar4), in_EAX != (short *)0x0))
     && (*pwVar4 != L'=')) {
    pwVar2 = wcschr(pwVar4,L'=');
    if ((pwVar2 == (wchar_t *)0x0) || (*pwVar2 == L'\0')) {
      in_EAX = (short *)_wcsicmp(pwVar4,param_1);
      if (in_EAX == (short *)0x0) {
        pwVar4 = param_2;
        if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
          *param_2 = L'\0';
        }
        goto LAB_10007a37;
      }
    }
    else {
      pwVar3 = param_1;
      do {
        wVar1 = *pwVar3;
        pwVar3 = pwVar3 + 1;
      } while (wVar1 != L'\0');
      in_EAX = (short *)((int)pwVar3 - (int)(param_1 + 1) >> 1);
      if (((short *)((int)pwVar2 - (int)pwVar4 >> 1) == in_EAX) &&
         (in_EAX = (short *)_wcsnicmp(pwVar4,param_1,(size_t)in_EAX), in_EAX == (short *)0x0)) {
        pwVar4 = (wchar_t *)0x0;
        if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
          if (pwVar2 + 1 == (wchar_t *)0x0) {
            *param_2 = L'\0';
            pwVar4 = (wchar_t *)0x0;
          }
          else {
            wcsncpy(param_2,pwVar2 + 1,param_3);
            param_2[param_3 - 1] = L'\0';
            pwVar4 = (wchar_t *)0x0;
          }
        }
LAB_10007a37:
        return CONCAT31((int3)((uint)pwVar4 >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



// ===== FUN_10007a42 @ 10007a42 (size 110) =====

uint __cdecl FUN_10007a42(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  uint in_EAX;
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  
  if ((((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) &&
      (in_EAX = FUN_10007901((wint_t *)param_1), (char)in_EAX != '\0')) &&
     (((in_EAX = CONCAT31((int3)(in_EAX >> 8),DAT_10019581), DAT_10019581 != '\0' ||
       (in_EAX = FUN_1000785a(), (char)in_EAX != '\0')) && (iVar1 = 1, 1 < DAT_10019584)))) {
    do {
      pwVar2 = param_1;
      pwVar3 = param_2;
      sVar4 = param_3;
      FUN_100135f4();
      in_EAX = FUN_1000794c(pwVar2,pwVar3,sVar4);
      if ((char)in_EAX != '\0') {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10019584);
  }
  return in_EAX & 0xffffff00;
}



// ===== FUN_10007ab0 @ 10007ab0 (size 128) =====

wchar_t * FUN_10007ab0(void)

{
  bool bVar1;
  LPWSTR pWVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pWVar2 = GetCommandLineW();
  if ((pWVar2 == (LPWSTR)0x0) || (*pWVar2 == L'\0')) {
    pwVar4 = L"error";
  }
  else {
    iVar5 = 0;
    while( true ) {
      uVar3 = FUN_100135d0();
      if ((char)uVar3 == '\0') break;
      iVar5 = iVar5 + 1;
    }
    bVar1 = false;
    for (; pWVar2[iVar5] != L'\0'; iVar5 = iVar5 + 1) {
      if (pWVar2[iVar5] == L'\"') {
        bVar1 = !bVar1;
      }
      else if (!bVar1) {
        uVar3 = FUN_100135d0();
        if ((char)uVar3 != '\0') break;
      }
    }
    uVar3 = FUN_100135d0();
    while ((char)uVar3 != '\0') {
      iVar5 = iVar5 + 1;
      uVar3 = FUN_100135d0();
    }
    pwVar4 = pWVar2 + iVar5;
  }
  return pwVar4;
}



// ===== FUN_10007b30 @ 10007b30 (size 103) =====

undefined4 __fastcall FUN_10007b30(LPWSTR param_1)

{
  LPCWSTR in_EAX;
  LPCWSTR unaff_EDI;
  
  if ((((in_EAX != (LPCWSTR)0x0) && (*in_EAX != L'\0')) && (param_1 != (LPWSTR)0x0)) &&
     (unaff_EDI != (LPCWSTR)0x0)) {
    in_EAX = (LPCWSTR)GetFullPathNameW(in_EAX,(DWORD)unaff_EDI,param_1,(LPWSTR *)0x0);
    if ((in_EAX != (LPCWSTR)0x0) && (in_EAX < unaff_EDI)) {
      in_EAX = (LPCWSTR)FUN_10007b97();
      if ((LPCWSTR)0x3 < unaff_EDI) {
        in_EAX = (LPCWSTR)FUN_10013659();
        if ((((char)in_EAX != '\0') && (param_1[1] == L':')) && (param_1[2] == L'\0')) {
          param_1[2] = L'\\';
          in_EAX = (LPCWSTR)0x0;
          param_1[3] = L'\0';
        }
      }
      if (*param_1 != L'\0') {
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



// ===== FUN_10007b97 @ 10007b97 (size 64) =====

void FUN_10007b97(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *unaff_ESI;
  
  if ((unaff_ESI != (short *)0x0) && (*unaff_ESI != 0)) {
    psVar2 = unaff_ESI;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar2 - (int)(unaff_ESI + 1) >> 1;
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      if ((unaff_ESI[iVar3] != 0x2f) && (unaff_ESI[iVar3] != 0x5c)) {
        return;
      }
      unaff_ESI[iVar3] = 0;
    }
  }
  return;
}



// ===== FUN_10007bd7 @ 10007bd7 (size 64) =====

void FUN_10007bd7(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *unaff_ESI;
  
  if ((unaff_ESI != (short *)0x0) && (*unaff_ESI != 0)) {
    psVar2 = unaff_ESI;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar2 - (int)(unaff_ESI + 1) >> 1;
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      if (unaff_ESI[iVar3] == 0x2f) {
        return;
      }
      if (unaff_ESI[iVar3] == 0x5c) {
        return;
      }
      unaff_ESI[iVar3] = 0;
    }
  }
  return;
}



// ===== FUN_10007c17 @ 10007c17 (size 29) =====

void __thiscall FUN_10007c17(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  for (; this != (void *)0x0; this = (void *)((int)this + -1)) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x10007c2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



// ===== FUN_10007c34 @ 10007c34 (size 38) =====

void FUN_10007c34(void)

{
  undefined1 *puVar1;
  int iVar2;
  int *unaff_ESI;
  
  if ((unaff_ESI != (int *)0x0) &&
     (puVar1 = (undefined1 *)unaff_ESI[1], puVar1 != (undefined1 *)0x0)) {
    for (iVar2 = *unaff_ESI; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    LocalFree((HLOCAL)unaff_ESI[1]);
    unaff_ESI[1] = 0;
  }
  return;
}



// ===== FUN_10007c5a @ 10007c5a (size 47) =====

void * __cdecl FUN_10007c5a(void *param_1,uint param_2)

{
  void *_Dst;
  
  _Dst = (void *)0x0;
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    _Dst = operator_new(param_2);
    memcpy(_Dst,param_1,param_2);
  }
  return _Dst;
}



// ===== FUN_10007c89 @ 10007c89 (size 96) =====

void * __cdecl FUN_10007c89(void *param_1,void *param_2,size_t param_3)

{
  size_t unaff_ESI;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (((param_1 != (void *)0x0) || (param_2 != (void *)0x0)) && ((unaff_ESI != 0 || (param_3 != 0)))
     ) {
    _Dst = operator_new(unaff_ESI + param_3);
    if ((param_1 != (void *)0x0) && (unaff_ESI != 0)) {
      memcpy(_Dst,param_1,unaff_ESI);
    }
    if ((param_2 != (void *)0x0) && (param_3 != 0)) {
      memcpy((void *)((int)_Dst + unaff_ESI),param_2,param_3);
    }
  }
  return _Dst;
}



// ===== FUN_10007ce9 @ 10007ce9 (size 186) =====

undefined4 __fastcall
FUN_10007ce9(uint param_1,BYTE *param_2,undefined4 *param_3,uint *param_4,BYTE *param_5,
            DWORD param_6)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  void *pvVar4;
  DATA_BLOB local_1c;
  DATA_BLOB local_14;
  DATA_BLOB local_c;
  
  *param_4 = 0;
  *param_3 = 0;
  if (((param_5 == (BYTE *)0x0) || (param_1 == 0)) ||
     ((param_1 < 0x41 && ((param_2 == (BYTE *)0x0 || (param_6 == 0)))))) {
    uVar3 = 0;
  }
  else {
    if ((param_2 == (BYTE *)0x0) || (local_1c.pbData = param_5, param_6 == 0)) {
      param_6 = 0x40;
      local_1c.pbData = param_5 + 0x40;
      param_1 = param_1 - 0x40;
      param_2 = param_5;
    }
    local_c.cbData = 0;
    local_c.pbData = (BYTE *)0x0;
    local_1c.cbData = param_1;
    local_14.cbData = param_6;
    local_14.pbData = param_2;
    BVar2 = CryptUnprotectData(&local_1c,(LPWSTR *)0x0,&local_14,(PVOID)0x0,
                               (CRYPTPROTECT_PROMPTSTRUCT *)0x0,1,&local_c);
    if (BVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      pvVar4 = FUN_10007c5a(local_c.pbData,local_c.cbData);
      DVar1 = local_c.cbData;
      if (pvVar4 == (void *)0x0) {
        FUN_10007c34();
      }
      FUN_10007c34();
      *param_3 = pvVar4;
      *param_4 = DVar1;
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FUN_10007da3 @ 10007da3 (size 633) =====

/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_10007da3(int *param_1,LPCWSTR param_2,char param_3)

{
  BYTE BVar1;
  char cVar2;
  LPCWSTR in_EAX;
  BYTE *pBVar3;
  LPSTR pCVar4;
  BYTE *pBVar5;
  LPSTR pCVar6;
  BOOL BVar7;
  wchar_t *pwVar8;
  void *this;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  DATA_BLOB local_28;
  DATA_BLOB local_20;
  DATA_BLOB local_18;
  BYTE *local_10;
  void *local_c;
  char *local_8;
  
  pcVar9 = (char *)0x0;
  *param_1 = 0;
  if (param_2 == (LPCWSTR)0x0) {
    return 0;
  }
  pBVar3 = (BYTE *)FUN_100134f1(param_2);
  if (pBVar3 == (BYTE *)0x0) {
    return 0;
  }
  local_8 = (char *)0x0;
  local_10 = pBVar3;
  if ((in_EAX != (LPCWSTR)0x0) && (*in_EAX != L'\0')) {
    pCVar4 = FUN_100134f1(in_EAX);
    local_8 = pCVar4;
    if ((pCVar4 == (LPSTR)0x0) || (*pCVar4 == '\0')) {
      if (*pBVar3 == '\0') {
        pBVar5 = (BYTE *)0x0;
      }
      else {
        pBVar5 = pBVar3;
        do {
          BVar1 = *pBVar5;
          pBVar5 = pBVar5 + 1;
        } while (BVar1 != '\0');
        pBVar5 = pBVar5 + -(int)(pBVar3 + 1);
      }
      FUN_10007c17(pBVar5,pBVar3);
      if ((pCVar4 == (LPSTR)0x0) || (*pCVar4 == '\0')) {
        pcVar9 = (char *)0x0;
      }
      else {
        pCVar6 = pCVar4;
        do {
          cVar2 = *pCVar6;
          pCVar6 = pCVar6 + 1;
        } while (cVar2 != '\0');
        pcVar9 = pCVar6 + -(int)(pCVar4 + 1);
      }
      FUN_10007c17(pcVar9,pCVar4);
      return 0;
    }
    pCVar6 = pCVar4;
    do {
      cVar2 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (cVar2 != '\0');
    pcVar9 = pCVar6 + -(int)(pCVar4 + 1);
  }
  pBVar5 = pBVar3 + 1;
  do {
    BVar1 = *pBVar3;
    pBVar3 = pBVar3 + 1;
  } while (BVar1 != '\0');
  if (pBVar3 + (1 - (int)pBVar5) != (BYTE *)0x0) {
    if ((local_8 == (char *)0x0) || (pcVar9 == (char *)0x0)) {
      pcVar9 = (char *)0x40;
      param_2 = operator_new(0x40);
      FUN_10008336(this,0x40);
    }
    else {
      param_2 = FUN_10007c5a(local_8,(uint)pcVar9);
      if (param_2 == (LPCWSTR)0x0) goto LAB_10007e79;
    }
    local_28.pbData = local_10;
    local_20.pbData = (BYTE *)param_2;
    local_18.cbData = 0;
    local_18.pbData = (BYTE *)0x0;
    local_28.cbData = (DWORD)(pBVar3 + (1 - (int)pBVar5));
    local_20.cbData = (DWORD)pcVar9;
    BVar7 = CryptProtectData(&local_28,(LPCWSTR)0x0,&local_20,(PVOID)0x0,
                             (CRYPTPROTECT_PROMPTSTRUCT *)0x0,-(uint)(param_3 != '\0') & 4 | 1,
                             &local_18);
    uVar11 = local_18.cbData;
    if (BVar7 == 0) {
      FUN_10007c17(pcVar9,(undefined1 *)param_2);
      uVar10 = 0xffffffff;
      goto LAB_10007e7b;
    }
    if (local_8 == (char *)0x0) {
      uVar11 = local_18.cbData + (int)pcVar9;
      local_c = FUN_10007c89(param_2,local_18.pbData,local_18.cbData);
    }
    else {
      local_c = FUN_10007c5a(local_18.pbData,local_18.cbData);
    }
    if (local_c != (void *)0x0) {
      FUN_10007c17(pcVar9,(undefined1 *)param_2);
      FUN_10007c34();
      uVar10 = 1;
      if ((local_c != (void *)0x0) && (uVar11 != 0)) {
        pwVar8 = FUN_10001238((int)local_c);
        BVar1 = *local_10;
        *param_1 = (int)pwVar8;
        if (BVar1 == '\0') {
          pBVar3 = (BYTE *)0x0;
        }
        else {
          pBVar3 = local_10;
          do {
            BVar1 = *pBVar3;
            pBVar3 = pBVar3 + 1;
          } while (BVar1 != '\0');
          pBVar3 = pBVar3 + -(int)(local_10 + 1);
        }
        FUN_10007c17(pBVar3,local_10);
        if ((local_8 == (char *)0x0) || (*local_8 == '\0')) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = local_8;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          pcVar9 = pcVar9 + -(int)(local_8 + 1);
        }
        FUN_10007c17(pcVar9,local_8);
        return (uint)(*param_1 != 0);
      }
      goto LAB_10007e7b;
    }
    FUN_10007c17(pcVar9,(undefined1 *)param_2);
    FUN_10007c34();
  }
LAB_10007e79:
  uVar10 = 0;
LAB_10007e7b:
  if (*local_10 == '\0') {
    pBVar3 = (BYTE *)0x0;
  }
  else {
    pBVar3 = local_10;
    do {
      BVar1 = *pBVar3;
      pBVar3 = pBVar3 + 1;
    } while (BVar1 != '\0');
    pBVar3 = pBVar3 + -(int)(local_10 + 1);
  }
  FUN_10007c17(pBVar3,local_10);
  if ((local_8 == (char *)0x0) || (*local_8 == '\0')) {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = local_8;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -(int)(local_8 + 1);
  }
  FUN_10007c17(pcVar9,local_8);
  if (0 < (int)uVar10) {
    return 0;
  }
  return uVar10;
}



// ===== FUN_1000801c @ 1000801c (size 326) =====

uint __cdecl FUN_1000801c(int *param_1,ushort *param_2)

{
  BYTE BVar1;
  LPCWSTR in_EAX;
  byte *pbVar2;
  BYTE *pBVar3;
  DWORD DVar4;
  uint uVar5;
  LPWSTR pWVar6;
  BYTE *pBVar7;
  uint local_10;
  LPCSTR local_c;
  void *local_8;
  
  *param_1 = 0;
  if (param_2 == (ushort *)0x0) {
    return 0;
  }
  pbVar2 = FUN_1000129f(param_2);
  if (pbVar2 != (byte *)0x0) {
    pBVar7 = (BYTE *)0x0;
    if ((in_EAX == (LPCWSTR)0x0) || (*in_EAX == L'\0')) {
      DVar4 = 0;
    }
    else {
      pBVar7 = (BYTE *)FUN_100134f1(in_EAX);
      if ((pBVar7 == (BYTE *)0x0) || (*pBVar7 == '\0')) {
        FUN_10007c17(local_8,pbVar2);
        if ((pBVar7 == (BYTE *)0x0) || (*pBVar7 == '\0')) {
          pBVar3 = (BYTE *)0x0;
        }
        else {
          pBVar3 = pBVar7;
          do {
            BVar1 = *pBVar3;
            pBVar3 = pBVar3 + 1;
          } while (BVar1 != '\0');
          pBVar3 = pBVar3 + -(int)(pBVar7 + 1);
        }
        FUN_10007c17(pBVar3,pBVar7);
        return 0;
      }
      pBVar3 = pBVar7;
      do {
        BVar1 = *pBVar3;
        pBVar3 = pBVar3 + 1;
      } while (BVar1 != '\0');
      DVar4 = (int)pBVar3 - (int)(pBVar7 + 1);
    }
    uVar5 = FUN_10007ce9((uint)local_8,pBVar7,&local_c,&local_10,pbVar2,DVar4);
    if (((0 < (int)uVar5) && (local_c != (LPCSTR)0x0)) && (local_10 != 0)) {
      local_c[local_10 - 1] = '\0';
      pWVar6 = FUN_10013560(local_c);
      *param_1 = (int)pWVar6;
      FUN_10007c17(local_8,pbVar2);
      if ((pBVar7 == (BYTE *)0x0) || (*pBVar7 == '\0')) {
        pBVar3 = (BYTE *)0x0;
      }
      else {
        pBVar3 = pBVar7;
        do {
          BVar1 = *pBVar3;
          pBVar3 = pBVar3 + 1;
        } while (BVar1 != '\0');
        pBVar3 = pBVar3 + -(int)(pBVar7 + 1);
      }
      FUN_10007c17(pBVar3,pBVar7);
      return (uint)(*param_1 != 0);
    }
    FUN_10007c17(local_8,pbVar2);
    if ((pBVar7 == (BYTE *)0x0) || (*pBVar7 == '\0')) {
      pBVar3 = (BYTE *)0x0;
    }
    else {
      pBVar3 = pBVar7;
      do {
        BVar1 = *pBVar3;
        pBVar3 = pBVar3 + 1;
      } while (BVar1 != '\0');
      pBVar3 = pBVar3 + -(int)(pBVar7 + 1);
    }
    FUN_10007c17(pBVar3,pBVar7);
    if ((int)uVar5 < 1) {
      return uVar5;
    }
  }
  return 0;
}



// ===== FUN_10008162 @ 10008162 (size 106) =====

uint __fastcall FUN_10008162(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (param_3 - param_1) - param_2 ^ param_2 >> 0xd;
  uVar2 = (param_1 - uVar1) - param_2 ^ uVar1 << 8;
  uVar3 = (param_2 - uVar1) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 >> 5;
  uVar4 = uVar3 >> 3 ^ (uVar1 - uVar2) - uVar3;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar4) - uVar1 ^ uVar1 >> 0xf;
}



// ===== FUN_100081cc @ 100081cc (size 41) =====

void FUN_100081cc(void)

{
  uint uVar1;
  clock_t cVar2;
  time_t tVar3;
  
  uVar1 = _getpid();
  cVar2 = clock();
  tVar3 = time((time_t *)0x0);
  FUN_10008162(cVar2,uVar1,(int)tVar3);
  return;
}



// ===== FUN_100081f5 @ 100081f5 (size 201) =====

void FUN_100081f5(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = FUN_100081cc();
  local_8 = 0x2a;
  do {
    iVar1 = rand();
    iVar2 = rand();
    uVar3 = rand();
    uVar4 = rand();
    uVar3 = FUN_10008162(uVar4 & 0xffff | iVar2 << 0x10,uVar3 & 0xffff | iVar1 << 0x10,local_c);
    iVar1 = rand();
    iVar2 = rand();
    uVar4 = rand();
    uVar5 = rand();
    uVar3 = FUN_10008162(uVar3,uVar4 & 0xffff | iVar1 << 0x10,uVar5 & 0xffff | iVar2 << 0x10);
    iVar1 = rand();
    iVar2 = rand();
    uVar4 = rand();
    uVar5 = rand();
    local_c = FUN_10008162(uVar4 & 0xffff | iVar1 << 0x10,uVar3,uVar5 & 0xffff | iVar2 << 0x10);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}



// ===== FUN_100082be @ 100082be (size 78) =====

int FUN_100082be(void)

{
  int iVar1;
  uint _Seed;
  HMODULE hModule;
  
  while( true ) {
    LOCK();
    iVar1 = DAT_10019590;
    if (DAT_10019590 == 0) {
      DAT_10019590 = -1;
      iVar1 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) break;
    if (0 < iVar1) {
      return iVar1;
    }
  }
  _Seed = FUN_100081cc();
  srand(_Seed);
  hModule = GetModuleHandleW(L"Advapi32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_10019594 = GetProcAddress(hModule,"SystemFunction036");
  }
  LOCK();
  UNLOCK();
  iVar1 = DAT_10019590;
  DAT_10019590 = 1;
  return iVar1;
}



// ===== FUN_1000830c @ 1000830c (size 42) =====

undefined4 FUN_1000830c(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  FUN_100082be();
  if (DAT_10019594 != (code *)0x0) {
    cVar1 = (*DAT_10019594)(&local_8,4);
    if (cVar1 != '\0') {
      return local_8;
    }
  }
  uVar2 = FUN_100081f5();
  return uVar2;
}



// ===== FUN_10008336 @ 10008336 (size 64) =====

void __thiscall FUN_10008336(void *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  int unaff_ESI;
  
  FUN_100082be();
  uVar2 = 0;
  if (((DAT_10019594 == (code *)0x0) || (cVar1 = (*DAT_10019594)(), cVar1 == '\0')) &&
     (param_1 != 0)) {
    do {
      if ((uVar2 & 3) == 0) {
        this = (void *)FUN_100081f5();
      }
      *(char *)(uVar2 + unaff_ESI) = (char)this;
      this = (void *)((uint)this >> 8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  return;
}



// ===== FUN_10008376 @ 10008376 (size 72) =====

void __fastcall FUN_10008376(uint param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint *in_EAX;
  uint uVar3;
  uint uVar4;
  uint *unaff_EDI;
  
  uVar3 = 0;
  if ((((uint)unaff_EDI | (uint)in_EAX | param_1) & 3) == 0) {
    puVar1 = (uint *)((int)in_EAX + param_1);
    if (in_EAX < puVar1) {
      do {
        uVar3 = *in_EAX;
        in_EAX = in_EAX + 1;
        *unaff_EDI = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
        ;
        unaff_EDI = unaff_EDI + 1;
      } while (in_EAX < puVar1);
      return;
    }
  }
  else if (param_1 != 0) {
    do {
      puVar2 = (undefined1 *)(uVar3 + (int)in_EAX);
      uVar4 = uVar3 ^ 3;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(uVar4 + (int)unaff_EDI) = *puVar2;
    } while (uVar3 < param_1);
  }
  return;
}



// ===== FUN_100083be @ 100083be (size 79) =====

void __fastcall FUN_100083be(undefined4 param_1,uint *param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar2 = 0;
  if ((((uint)param_3 | (uint)param_2 | in_EAX) & 7) == 0) {
    puVar4 = (uint *)(in_EAX + (int)param_2);
    for (; param_2 < puVar4; param_2 = param_2 + 2) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      *param_3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      param_3[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      param_3 = param_3 + 2;
    }
  }
  else if (in_EAX != 0) {
    do {
      puVar1 = (undefined1 *)(uVar2 + (int)param_2);
      uVar3 = uVar2 ^ 7;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(uVar3 + (int)param_3) = *puVar1;
    } while (uVar2 < in_EAX);
  }
  return;
}



// ===== FUN_1000840d @ 1000840d (size 340) =====

uint __fastcall FUN_1000840d(undefined4 param_1,uint *param_2,uint param_3)

{
  uint in_EAX;
  uint uVar1;
  uint *puVar2;
  
  uVar1 = ~in_EAX;
  for (; (((uint)param_2 & 3) != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (((byte)*param_2 ^ uVar1) & 0xff) * 4);
    param_2 = (uint *)((int)param_2 + 1);
  }
  puVar2 = (uint *)((param_3 & 0xfffffff0) + (int)param_2);
  for (; param_2 < puVar2; param_2 = param_2 + 4) {
    uVar1 = (uVar1 ^ *param_2) >> 8 ^ *(uint *)(&DAT_100190c8 + ((uVar1 ^ *param_2) & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4) ^ param_2[1];
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4) ^ param_2[2];
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4) ^ param_2[3];
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (uVar1 & 0xff) * 4);
  }
  puVar2 = (uint *)((param_3 & 0xf) + (int)param_2);
  for (; param_2 < puVar2; param_2 = (uint *)((int)param_2 + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_100190c8 + (((byte)*param_2 ^ uVar1) & 0xff) * 4);
  }
  return ~uVar1;
}



// ===== FUN_10008561 @ 10008561 (size 2278) =====

void __fastcall FUN_10008561(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar1 = ((param_1[3] ^ uVar5) & uVar4 ^ param_1[3]) + *in_EAX + -0x28955b88 + *param_1;
  uVar3 = (uVar1 >> 0x19 ^ uVar1 * 0x80) + uVar4;
  uVar1 = param_1[3] + -0x173848aa + ((uVar5 ^ uVar4) & uVar3 ^ uVar5) + in_EAX[1];
  uVar6 = (uVar1 >> 0x14 ^ uVar1 * 0x1000) + uVar3;
  uVar1 = param_1[2] + 0x242070db + ((uVar4 ^ uVar3) & uVar6 ^ uVar4) + in_EAX[2];
  uVar7 = (uVar1 >> 0xf ^ uVar1 * 0x20000) + uVar6;
  uVar1 = param_1[1] + -0x3e423112 + ((uVar6 ^ uVar3) & uVar7 ^ uVar3) + in_EAX[3];
  uVar5 = (uVar1 * 0x400000 ^ uVar1 >> 10) + uVar7;
  uVar1 = uVar3 + 0xf57c0faf + ((uVar6 ^ uVar7) & uVar5 ^ uVar6) + in_EAX[4];
  uVar8 = (uVar1 >> 0x19 ^ uVar1 * 0x80) + uVar5;
  uVar1 = uVar6 + 0x4787c62a + ((uVar7 ^ uVar5) & uVar8 ^ uVar7) + in_EAX[5];
  uVar4 = (uVar1 >> 0x14 ^ uVar1 * 0x1000) + uVar8;
  uVar1 = uVar7 + 0xa8304613 + ((uVar5 ^ uVar8) & uVar4 ^ uVar5) + in_EAX[6];
  uVar3 = (uVar1 >> 0xf ^ uVar1 * 0x20000) + uVar4;
  uVar1 = uVar5 + 0xfd469501 + ((uVar4 ^ uVar8) & uVar3 ^ uVar8) + in_EAX[7];
  uVar5 = (uVar1 * 0x400000 ^ uVar1 >> 10) + uVar3;
  uVar1 = uVar8 + 0x698098d8 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4) + in_EAX[8];
  uVar6 = (uVar1 >> 0x19 ^ uVar1 * 0x80) + uVar5;
  uVar1 = uVar4 + 0x8b44f7af + ((uVar3 ^ uVar5) & uVar6 ^ uVar3) + in_EAX[9];
  uVar7 = (uVar1 >> 0x14 ^ uVar1 * 0x1000) + uVar6;
  uVar1 = (uVar3 - 0xa44f) + ((uVar5 ^ uVar6) & uVar7 ^ uVar5) + in_EAX[10];
  uVar4 = (uVar1 >> 0xf ^ uVar1 * 0x20000) + uVar7;
  uVar1 = uVar5 + 0x895cd7be + ((uVar7 ^ uVar6) & uVar4 ^ uVar6) + in_EAX[0xb];
  uVar3 = (uVar1 * 0x400000 ^ uVar1 >> 10) + uVar4;
  uVar1 = uVar6 + 0x6b901122 + ((uVar7 ^ uVar4) & uVar3 ^ uVar7) + in_EAX[0xc];
  uVar5 = (uVar1 >> 0x19 ^ uVar1 * 0x80) + uVar3;
  uVar1 = uVar7 + 0xfd987193 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4) + in_EAX[0xd];
  uVar6 = (uVar1 >> 0x14 ^ uVar1 * 0x1000) + uVar5;
  uVar1 = uVar4 + 0xa679438e + ((uVar3 ^ uVar5) & uVar6 ^ uVar3) + in_EAX[0xe];
  uVar7 = (uVar1 >> 0xf ^ uVar1 * 0x20000) + uVar6;
  uVar1 = uVar3 + 0x49b40821 + ((uVar6 ^ uVar5) & uVar7 ^ uVar5) + in_EAX[0xf];
  uVar8 = (uVar1 * 0x400000 ^ uVar1 >> 10) + uVar7;
  uVar1 = uVar5 + 0xf61e2562 + (~uVar6 & uVar7 | uVar6 & uVar8) + in_EAX[1];
  uVar9 = (uVar1 >> 0x1b ^ uVar1 * 0x20) + uVar8;
  uVar1 = uVar6 + 0xc040b340 + (~uVar7 & uVar8 | uVar7 & uVar9) + in_EAX[6];
  uVar4 = (uVar1 >> 0x17 ^ uVar1 * 0x200) + uVar9;
  uVar1 = uVar7 + 0x265e5a51 + (~uVar8 & uVar9 | uVar4 & uVar8) + in_EAX[0xb];
  uVar3 = (uVar1 >> 0x12 ^ uVar1 * 0x4000) + uVar4;
  uVar1 = uVar8 + 0xe9b6c7aa + (~uVar9 & uVar4 | uVar3 & uVar9) + *in_EAX;
  uVar5 = (uVar1 * 0x100000 ^ uVar1 >> 0xc) + uVar3;
  uVar1 = uVar9 + 0xd62f105d + (~uVar4 & uVar3 | uVar4 & uVar5) + in_EAX[5];
  uVar6 = (uVar1 >> 0x1b ^ uVar1 * 0x20) + uVar5;
  uVar1 = uVar4 + 0x2441453 + (~uVar3 & uVar5 | uVar3 & uVar6) + in_EAX[10];
  uVar7 = (uVar1 >> 0x17 ^ uVar1 * 0x200) + uVar6;
  uVar1 = uVar3 + 0xd8a1e681 + (~uVar5 & uVar6 | uVar7 & uVar5) + in_EAX[0xf];
  uVar3 = (uVar1 >> 0x12 ^ uVar1 * 0x4000) + uVar7;
  uVar1 = uVar5 + 0xe7d3fbc8 + (~uVar6 & uVar7 | uVar3 & uVar6) + in_EAX[4];
  uVar8 = (uVar1 * 0x100000 ^ uVar1 >> 0xc) + uVar3;
  uVar1 = uVar6 + 0x21e1cde6 + (~uVar7 & uVar3 | uVar7 & uVar8) + in_EAX[9];
  uVar4 = (uVar1 >> 0x1b ^ uVar1 * 0x20) + uVar8;
  uVar1 = uVar7 + 0xc33707d6 + (~uVar3 & uVar8 | uVar3 & uVar4) + in_EAX[0xe];
  uVar6 = (uVar1 >> 0x17 ^ uVar1 * 0x200) + uVar4;
  uVar1 = uVar3 + 0xf4d50d87 + (~uVar8 & uVar4 | uVar6 & uVar8) + in_EAX[3];
  uVar5 = (uVar1 >> 0x12 ^ uVar1 * 0x4000) + uVar6;
  uVar1 = uVar8 + 0x455a14ed + (~uVar4 & uVar6 | uVar5 & uVar4) + in_EAX[8];
  uVar7 = (uVar1 * 0x100000 ^ uVar1 >> 0xc) + uVar5;
  uVar1 = uVar4 + 0xa9e3e905 + (~uVar6 & uVar5 | uVar6 & uVar7) + in_EAX[0xd];
  uVar8 = (uVar1 >> 0x1b ^ uVar1 * 0x20) + uVar7;
  iVar2 = in_EAX[2];
  uVar1 = uVar6 + 0xfcefa3f8 + (~uVar5 & uVar7 | uVar5 & uVar8) + iVar2;
  uVar4 = (uVar1 >> 0x17 ^ uVar1 * 0x200) + uVar8;
  uVar1 = uVar5 + 0x676f02d9 + (~uVar7 & uVar8 | uVar4 & uVar7) + in_EAX[7];
  uVar3 = (uVar1 >> 0x12 ^ uVar1 * 0x4000) + uVar4;
  uVar1 = uVar7 + 0x8d2a4c8a + (~uVar8 & uVar4 | uVar3 & uVar8) + in_EAX[0xc];
  uVar5 = (uVar1 * 0x100000 ^ uVar1 >> 0xc) + uVar3;
  uVar1 = (uVar8 - 0x5c6be) + (uVar4 ^ uVar3 ^ uVar5) + in_EAX[5];
  uVar6 = (uVar1 >> 0x1c ^ uVar1 * 0x10) + uVar5;
  uVar1 = uVar4 + 0x8771f681 + (uVar3 ^ uVar5 ^ uVar6) + in_EAX[8];
  uVar7 = (uVar1 >> 0x15 ^ uVar1 * 0x800) + uVar6;
  uVar1 = uVar3 + 0x6d9d6122 + (uVar7 ^ uVar5 ^ uVar6) + in_EAX[0xb];
  uVar3 = (uVar1 >> 0x10 ^ uVar1 * 0x10000) + uVar7;
  uVar1 = uVar5 + 0xfde5380c + (uVar7 ^ uVar3 ^ uVar6) + in_EAX[0xe];
  uVar8 = (uVar1 * 0x800000 ^ uVar1 >> 9) + uVar3;
  uVar1 = uVar6 + 0xa4beea44 + (uVar7 ^ uVar3 ^ uVar8) + in_EAX[1];
  uVar4 = (uVar1 >> 0x1c ^ uVar1 * 0x10) + uVar8;
  uVar1 = uVar7 + 0x4bdecfa9 + (uVar3 ^ uVar8 ^ uVar4) + in_EAX[4];
  uVar5 = (uVar1 >> 0x15 ^ uVar1 * 0x800) + uVar4;
  uVar1 = uVar3 + 0xf6bb4b60 + (uVar5 ^ uVar8 ^ uVar4) + in_EAX[7];
  uVar3 = (uVar1 >> 0x10 ^ uVar1 * 0x10000) + uVar5;
  uVar1 = uVar8 + 0xbebfbc70 + (uVar5 ^ uVar3 ^ uVar4) + in_EAX[10];
  uVar7 = (uVar1 * 0x800000 ^ uVar1 >> 9) + uVar3;
  uVar1 = uVar4 + 0x289b7ec6 + (uVar5 ^ uVar3 ^ uVar7) + in_EAX[0xd];
  uVar6 = (uVar1 >> 0x1c ^ uVar1 * 0x10) + uVar7;
  uVar1 = uVar5 + 0xeaa127fa + (uVar3 ^ uVar7 ^ uVar6) + *in_EAX;
  uVar4 = (uVar1 >> 0x15 ^ uVar1 * 0x800) + uVar6;
  uVar1 = uVar3 + 0xd4ef3085 + (uVar4 ^ uVar7 ^ uVar6) + in_EAX[3];
  uVar5 = (uVar1 >> 0x10 ^ uVar1 * 0x10000) + uVar4;
  uVar1 = uVar7 + 0x4881d05 + (uVar4 ^ uVar5 ^ uVar6) + in_EAX[6];
  uVar3 = (uVar1 * 0x800000 ^ uVar1 >> 9) + uVar5;
  uVar1 = uVar6 + 0xd9d4d039 + (uVar4 ^ uVar5 ^ uVar3) + in_EAX[9];
  uVar7 = (uVar1 >> 0x1c ^ uVar1 * 0x10) + uVar3;
  uVar1 = uVar4 + 0xe6db99e5 + (uVar5 ^ uVar3 ^ uVar7) + in_EAX[0xc];
  uVar6 = (uVar1 >> 0x15 ^ uVar1 * 0x800) + uVar7;
  uVar1 = uVar5 + 0x1fa27cf8 + (uVar6 ^ uVar3 ^ uVar7) + in_EAX[0xf];
  uVar4 = (uVar1 >> 0x10 ^ uVar1 * 0x10000) + uVar6;
  uVar1 = uVar3 + 0xc4ac5665 + (uVar6 ^ uVar4 ^ uVar7) + iVar2;
  uVar5 = (uVar1 * 0x800000 ^ uVar1 >> 9) + uVar4;
  uVar1 = uVar7 + 0xf4292244 + ((~uVar6 | uVar5) ^ uVar4) + *in_EAX;
  uVar3 = (uVar1 >> 0x1a ^ uVar1 * 0x40) + uVar5;
  uVar1 = uVar6 + 0x432aff97 + ((~uVar4 | uVar3) ^ uVar5) + in_EAX[7];
  uVar8 = (uVar1 >> 0x16 ^ uVar1 * 0x400) + uVar3;
  uVar1 = uVar4 + 0xab9423a7 + ((~uVar5 | uVar8) ^ uVar3) + in_EAX[0xe];
  uVar7 = (uVar1 >> 0x11 ^ uVar1 * 0x8000) + uVar8;
  uVar1 = uVar5 + 0xfc93a039 + ((~uVar3 | uVar7) ^ uVar8) + in_EAX[5];
  uVar6 = (uVar1 * 0x200000 ^ uVar1 >> 0xb) + uVar7;
  uVar1 = uVar3 + 0x655b59c3 + ((~uVar8 | uVar6) ^ uVar7) + in_EAX[0xc];
  uVar4 = (uVar1 >> 0x1a ^ uVar1 * 0x40) + uVar6;
  uVar1 = uVar8 + 0x8f0ccc92 + ((~uVar7 | uVar4) ^ uVar6) + in_EAX[3];
  uVar5 = (uVar1 >> 0x16 ^ uVar1 * 0x400) + uVar4;
  uVar1 = (uVar7 - 0x100b83) + ((~uVar6 | uVar5) ^ uVar4) + in_EAX[10];
  uVar3 = (uVar1 >> 0x11 ^ uVar1 * 0x8000) + uVar5;
  uVar1 = uVar6 + 0x85845dd1 + ((~uVar4 | uVar3) ^ uVar5) + in_EAX[1];
  uVar6 = (uVar1 * 0x200000 ^ uVar1 >> 0xb) + uVar3;
  uVar1 = uVar4 + 0x6fa87e4f + ((~uVar5 | uVar6) ^ uVar3) + in_EAX[8];
  uVar4 = (uVar1 >> 0x1a ^ uVar1 * 0x40) + uVar6;
  uVar1 = uVar5 + 0xfe2ce6e0 + ((~uVar3 | uVar4) ^ uVar6) + in_EAX[0xf];
  uVar5 = (uVar1 >> 0x16 ^ uVar1 * 0x400) + uVar4;
  uVar1 = uVar3 + 0xa3014314 + ((~uVar6 | uVar5) ^ uVar4) + in_EAX[6];
  uVar3 = (uVar1 >> 0x11 ^ uVar1 * 0x8000) + uVar5;
  uVar1 = uVar6 + 0x4e0811a1 + ((~uVar4 | uVar3) ^ uVar5) + in_EAX[0xd];
  uVar6 = (uVar1 * 0x200000 ^ uVar1 >> 0xb) + uVar3;
  uVar1 = uVar4 + 0xf7537e82 + ((~uVar5 | uVar6) ^ uVar3) + in_EAX[4];
  uVar4 = (uVar1 >> 0x1a ^ uVar1 * 0x40) + uVar6;
  uVar1 = uVar5 + 0xbd3af235 + ((~uVar3 | uVar4) ^ uVar6) + in_EAX[0xb];
  uVar5 = (uVar1 >> 0x16 ^ uVar1 * 0x400) + uVar4;
  uVar1 = uVar3 + 0x2ad7d2bb + ((~uVar6 | uVar5) ^ uVar4) + iVar2;
  uVar3 = (uVar1 >> 0x11 ^ uVar1 * 0x8000) + uVar5;
  uVar1 = uVar6 + 0xeb86d391 + ((~uVar4 | uVar3) ^ uVar5) + in_EAX[9];
  *param_1 = *param_1 + uVar4;
  param_1[1] = (uVar1 * 0x200000 ^ uVar1 >> 0xb) + param_1[1] + uVar3;
  param_1[2] = param_1[2] + uVar3;
  param_1[3] = param_1[3] + uVar5;
  return;
}



// ===== FUN_10008e47 @ 10008e47 (size 160) =====

void __cdecl FUN_10008e47(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *_Dst;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  _Dst = param_1;
  uVar2 = param_1[0x10];
  puVar1 = param_1 + 0x10;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_3;
  param_1[0x11] = param_1[0x11] + (uint)CARRY4(uVar3,param_3);
  uVar2 = uVar2 & 0x3f;
  if (uVar2 != 0) {
    uVar5 = 0x40 - uVar2;
    uVar3 = param_3;
    if (uVar5 <= param_3) {
      uVar3 = uVar5;
    }
    memcpy((void *)(uVar2 + (int)param_1),param_2,uVar3);
    if (param_3 < uVar5) {
      return;
    }
    FUN_10008561(param_1 + 0x12);
    param_2 = (undefined4 *)((int)param_2 + uVar5);
    param_3 = param_3 - uVar5;
  }
  if (0x3f < param_3) {
    param_1 = (undefined4 *)(param_3 >> 6);
    do {
      if (((uint)param_2 & 3) != 0) {
        puVar6 = param_2;
        puVar7 = _Dst;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      FUN_10008561(_Dst + 0x12);
      param_2 = param_2 + 0x10;
      param_3 = param_3 - 0x40;
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
  }
  if (param_3 != 0) {
    memcpy(_Dst,param_2,param_3);
  }
  return;
}



// ===== FUN_10008ee7 @ 10008ee7 (size 150) =====

void __cdecl FUN_10008ee7(int param_1,undefined4 *param_2)

{
  uint uVar1;
  sbyte sVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  undefined4 *puVar4;
  bool bVar5;
  
  sVar2 = (sbyte)((*(uint *)(param_1 + 0x40) & 3) << 3);
  uVar1 = *(uint *)(param_1 + 0x40) >> 2 & 0xf;
  *(uint *)(param_1 + uVar1 * 4) = ~(-1 << sVar2) & *(uint *)(param_1 + uVar1 * 4) ^ 0x80 << sVar2;
  uVar1 = uVar1 + 1;
  bVar5 = uVar1 < 0xe;
  if (0xe < uVar1) {
    if (uVar1 < 0x10) {
      puVar4 = (undefined4 *)(param_1 + uVar1 * 4);
      for (iVar3 = 0x10 - uVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    FUN_10008561((int *)(param_1 + 0x48));
    uVar1 = 0;
    bVar5 = true;
  }
  if (bVar5) {
    puVar4 = (undefined4 *)(param_1 + uVar1 * 4);
    for (iVar3 = 0xe - uVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x40) << 3;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x40) >> 0x1d | *(int *)(param_1 + 0x44) << 3;
  FUN_10008561((int *)(param_1 + 0x48));
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *extraout_ECX;
    param_2[1] = extraout_ECX[1];
    param_2[2] = extraout_ECX[2];
    param_2[3] = extraout_ECX[3];
  }
  return;
}



// ===== FUN_10008f7d @ 10008f7d (size 470) =====

void __fastcall FUN_10008f7d(undefined4 param_1,int param_2)

{
  uint *in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint local_154 [20];
  uint auStack_104 [20];
  uint auStack_b4 [20];
  uint auStack_64 [20];
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar1 = 0;
  do {
    uVar2 = *(uint *)(param_2 + iVar1 * 4);
    local_154[iVar1] =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = 0x40;
  puVar6 = local_154 + 2;
  do {
    uVar2 = puVar6[0xb] ^ puVar6[6] ^ puVar6[-2] ^ *puVar6;
    iVar1 = iVar1 + -1;
    puVar6[0xe] = uVar2 >> 0x1f ^ uVar2 * 2;
    puVar6 = puVar6 + 1;
  } while (iVar1 != 0);
  local_14 = in_EAX[2];
  local_8 = 0;
  local_10 = *in_EAX;
  local_c = in_EAX[3];
  uVar2 = in_EAX[1];
  uVar4 = in_EAX[4];
  do {
    uVar5 = local_c;
    uVar3 = local_10;
    local_10 = (local_10 >> 0x1b ^ local_10 << 5) + ((local_c ^ local_14) & uVar2 ^ local_c) +
               local_154[local_8] + 0x5a827999 + uVar4;
    local_c = local_14;
    local_14 = uVar2 << 0x1e ^ uVar2 >> 2;
    local_8 = local_8 + 1;
    uVar2 = uVar3;
    uVar4 = uVar5;
  } while (local_8 < 0x14);
  local_8 = 0x14;
  do {
    uVar4 = local_10;
    uVar2 = local_c;
    local_10 = (uVar4 >> 0x1b ^ uVar4 << 5) + (local_c ^ local_14 ^ uVar3) + local_154[local_8] +
               0x6ed9eba1 + uVar5;
    local_c = local_14;
    local_14 = uVar3 << 0x1e ^ uVar3 >> 2;
    local_8 = local_8 + 1;
    uVar3 = uVar4;
    uVar5 = uVar2;
  } while (local_8 < 0x28);
  local_8 = 0x28;
  do {
    uVar5 = local_10;
    uVar3 = local_c;
    local_10 = ((local_14 | uVar4) & local_c | local_14 & uVar4) + (uVar5 >> 0x1b ^ uVar5 << 5) +
               local_154[local_8] + -0x70e44324 + uVar2;
    local_c = local_14;
    local_14 = uVar4 << 0x1e ^ uVar4 >> 2;
    local_8 = local_8 + 1;
    uVar4 = uVar5;
    uVar2 = uVar3;
  } while (local_8 < 0x3c);
  local_8 = 0x3c;
  do {
    uVar7 = local_14;
    uVar4 = local_10;
    uVar2 = local_c;
    local_10 = (uVar4 >> 0x1b ^ uVar4 << 5) + (local_c ^ uVar7 ^ uVar5) + local_154[local_8] +
               -0x359d3e2a + uVar3;
    local_c = uVar7;
    local_14 = uVar5 << 0x1e ^ uVar5 >> 2;
    local_8 = local_8 + 1;
    uVar5 = uVar4;
    uVar3 = uVar2;
  } while (local_8 < 0x50);
  in_EAX[2] = in_EAX[2] + local_14;
  in_EAX[3] = in_EAX[3] + uVar7;
  in_EAX[1] = in_EAX[1] + uVar4;
  *in_EAX = *in_EAX + local_10;
  in_EAX[4] = in_EAX[4] + uVar2;
  return;
}



// ===== FUN_10009153 @ 10009153 (size 160) =====

void __cdecl FUN_10009153(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *_Dst;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *extraout_ECX_00;
  undefined4 *puVar6;
  uint uVar7;
  
  _Dst = param_1;
  uVar2 = param_1[0x10];
  puVar1 = param_1 + 0x10;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_3;
  param_1[0x11] = param_1[0x11] + (uint)CARRY4(uVar3,param_3);
  uVar2 = uVar2 & 0x3f;
  if (uVar2 != 0) {
    uVar7 = 0x40 - uVar2;
    uVar3 = param_3;
    if (uVar7 <= param_3) {
      uVar3 = uVar7;
    }
    memcpy((void *)(uVar2 + (int)param_1),param_2,uVar3);
    if (param_3 < uVar7) {
      return;
    }
    FUN_10008f7d(extraout_ECX,(int)param_1);
    param_2 = (undefined4 *)((int)param_2 + uVar7);
    param_3 = param_3 - uVar7;
  }
  if (0x3f < param_3) {
    puVar4 = (undefined4 *)(param_3 >> 6);
    param_1 = puVar4;
    do {
      puVar6 = param_2;
      if (((uint)param_2 & 3) != 0) {
        puVar4 = param_2;
        puVar6 = _Dst;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = (undefined4 *)0x0;
        puVar6 = _Dst;
      }
      FUN_10008f7d(puVar4,(int)puVar6);
      param_2 = param_2 + 0x10;
      param_3 = param_3 - 0x40;
      param_1 = (undefined4 *)((int)param_1 + -1);
      puVar4 = extraout_ECX_00;
    } while (param_1 != (undefined4 *)0x0);
  }
  if (param_3 != 0) {
    memcpy(_Dst,param_2,param_3);
  }
  return;
}



// ===== FUN_100091f3 @ 100091f3 (size 135) =====

void __cdecl FUN_100091f3(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  undefined4 *puVar5;
  bool bVar6;
  
  uVar2 = *(uint *)(unaff_ESI + 0x40) & 0x3f;
  *(undefined1 *)(uVar2 + unaff_ESI) = 0x80;
  while (uVar2 = uVar2 + 1, (uVar2 & 3) != 0) {
    *(undefined1 *)(uVar2 + unaff_ESI) = 0;
  }
  uVar2 = uVar2 >> 2;
  bVar6 = uVar2 < 0xe;
  if (0xe < uVar2) {
    uVar4 = 0x10;
    if (uVar2 < 0x10) {
      puVar5 = (undefined4 *)(unaff_ESI + uVar2 * 4);
      for (iVar3 = 0x10 - uVar2; uVar4 = 0, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
    FUN_10008f7d(uVar4,unaff_ESI);
    uVar2 = 0;
    bVar6 = true;
  }
  if (bVar6) {
    puVar5 = (undefined4 *)(unaff_ESI + uVar2 * 4);
    for (iVar3 = 0xe - uVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  uVar2 = *(uint *)(unaff_ESI + 0x44);
  uVar1 = uVar2 << 3;
  *(uint *)(unaff_ESI + 0x38) =
       (uVar2 & 0x1fffffff) >> 0x15 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
       (*(uint *)(unaff_ESI + 0x40) >> 0x1d | uVar1) << 0x18;
  uVar1 = *(uint *)(unaff_ESI + 0x40);
  *(uint *)(unaff_ESI + 0x3c) =
       (uVar1 & 0x1fffffff) >> 0x15 | (uVar1 << 3 & 0xff0000) >> 8 | (uVar1 << 3 & 0xff00) << 8 |
       uVar1 << 0x1b;
  FUN_10008f7d(uVar2 >> 0x1d,unaff_ESI);
  if (param_1 != 0) {
    FUN_10008376(0x14);
  }
  return;
}



// ===== FUN_1000927a @ 1000927a (size 5210) =====

void __fastcall FUN_1000927a(undefined4 param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar10 = param_3[1];
  uVar7 = param_3[5];
  uVar9 = param_3[6];
  uVar6 = *param_2;
  uVar11 = *param_3;
  local_6c = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar8 = param_3[4];
  iVar5 = ((uVar9 ^ uVar7) & uVar8 ^ uVar9) +
          (((uVar8 >> 0xe ^ uVar8) >> 5 ^ uVar8) >> 6 ^ ((uVar8 << 5 ^ uVar8) << 0xe ^ uVar8) << 7)
          + param_3[7] + 0x428a2f98 + local_6c;
  uVar12 = param_3[3] + iVar5;
  uVar6 = ((uVar10 ^ uVar11) & param_3[2] ^ uVar10 & uVar11) +
          (((uVar11 >> 9 ^ uVar11) >> 0xb ^ uVar11) >> 2 ^
          ((uVar11 << 0xb ^ uVar11) << 9 ^ uVar11) << 10) + iVar5;
  uVar3 = param_2[1];
  local_68 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  iVar5 = ((uVar7 ^ uVar8) & uVar12 ^ uVar7) +
          (((uVar12 >> 0xe ^ uVar12) >> 5 ^ uVar12) >> 6 ^
          ((uVar12 * 0x20 ^ uVar12) << 0xe ^ uVar12) << 7) + local_68 + 0x71374491 + uVar9;
  uVar9 = param_3[2] + iVar5;
  uVar3 = param_2[2];
  local_64 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar2 = ((uVar6 ^ uVar11) & uVar10 ^ uVar6 & uVar11) +
          (((uVar6 >> 9 ^ uVar6) >> 0xb ^ uVar6) >> 2 ^ ((uVar6 * 0x800 ^ uVar6) << 9 ^ uVar6) << 10
          ) + iVar5;
  iVar5 = ((uVar8 ^ uVar12) & uVar9 ^ uVar8) +
          (((uVar9 >> 0xe ^ uVar9) >> 5 ^ uVar9) >> 6 ^ ((uVar9 * 0x20 ^ uVar9) << 0xe ^ uVar9) << 7
          ) + local_64 + -0x4a3f0431 + uVar7;
  uVar10 = uVar10 + iVar5;
  uVar7 = param_2[3];
  uVar4 = ((uVar6 ^ uVar2) & uVar11 ^ uVar6 & uVar2) +
          (((uVar2 >> 9 ^ uVar2) >> 0xb ^ uVar2) >> 2 ^ ((uVar2 * 0x800 ^ uVar2) << 9 ^ uVar2) << 10
          ) + iVar5;
  local_60 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  iVar5 = ((uVar12 ^ uVar9) & uVar10 ^ uVar12) +
          (((uVar10 >> 0xe ^ uVar10) >> 5 ^ uVar10) >> 6 ^
          ((uVar10 * 0x20 ^ uVar10) << 0xe ^ uVar10) << 7) + local_60 + -0x164a245b + uVar8;
  uVar11 = uVar11 + iVar5;
  uVar7 = ((uVar2 ^ uVar4) & uVar6 ^ uVar2 & uVar4) +
          (((uVar4 >> 9 ^ uVar4) >> 0xb ^ uVar4) >> 2 ^ ((uVar4 * 0x800 ^ uVar4) << 9 ^ uVar4) << 10
          ) + iVar5;
  uVar8 = param_2[4];
  local_5c = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  iVar5 = ((uVar9 ^ uVar10) & uVar11 ^ uVar9) +
          (((uVar11 >> 0xe ^ uVar11) >> 5 ^ uVar11) >> 6 ^
          ((uVar11 * 0x20 ^ uVar11) << 0xe ^ uVar11) << 7) + local_5c + 0x3956c25b + uVar12;
  uVar6 = uVar6 + iVar5;
  uVar8 = ((uVar4 ^ uVar7) & uVar2 ^ uVar4 & uVar7) +
          (((uVar7 >> 9 ^ uVar7) >> 0xb ^ uVar7) >> 2 ^ ((uVar7 * 0x800 ^ uVar7) << 9 ^ uVar7) << 10
          ) + iVar5;
  uVar3 = param_2[5];
  local_58 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  iVar5 = ((uVar10 ^ uVar11) & uVar6 ^ uVar10) +
          (((uVar6 >> 0xe ^ uVar6) >> 5 ^ uVar6) >> 6 ^ ((uVar6 * 0x20 ^ uVar6) << 0xe ^ uVar6) << 7
          ) + local_58 + 0x59f111f1 + uVar9;
  uVar2 = uVar2 + iVar5;
  uVar9 = ((uVar7 ^ uVar8) & uVar4 ^ uVar7 & uVar8) +
          (((uVar8 >> 9 ^ uVar8) >> 0xb ^ uVar8) >> 2 ^ ((uVar8 * 0x800 ^ uVar8) << 9 ^ uVar8) << 10
          ) + iVar5;
  uVar3 = param_2[6];
  local_54 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  iVar5 = ((uVar6 ^ uVar11) & uVar2 ^ uVar11) +
          (((uVar2 >> 0xe ^ uVar2) >> 5 ^ uVar2) >> 6 ^ ((uVar2 * 0x20 ^ uVar2) << 0xe ^ uVar2) << 7
          ) + local_54 + -0x6dc07d5c + uVar10;
  uVar4 = uVar4 + iVar5;
  uVar10 = ((uVar8 ^ uVar9) & uVar7 ^ uVar8 & uVar9) +
           (((uVar9 >> 9 ^ uVar9) >> 0xb ^ uVar9) >> 2 ^
           ((uVar9 * 0x800 ^ uVar9) << 9 ^ uVar9) << 10) + iVar5;
  uVar3 = param_2[7];
  local_50 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  iVar5 = ((uVar6 ^ uVar2) & uVar4 ^ uVar6) +
          (((uVar4 >> 0xe ^ uVar4) >> 5 ^ uVar4) >> 6 ^ ((uVar4 * 0x20 ^ uVar4) << 0xe ^ uVar4) << 7
          ) + local_50 + -0x54e3a12b + uVar11;
  uVar7 = uVar7 + iVar5;
  uVar11 = ((uVar9 ^ uVar10) & uVar8 ^ uVar9 & uVar10) +
           (((uVar10 >> 9 ^ uVar10) >> 0xb ^ uVar10) >> 2 ^
           ((uVar10 * 0x800 ^ uVar10) << 9 ^ uVar10) << 10) + iVar5;
  uVar3 = param_2[8];
  local_4c = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  iVar5 = ((uVar2 ^ uVar4) & uVar7 ^ uVar2) +
          (((uVar7 >> 0xe ^ uVar7) >> 5 ^ uVar7) >> 6 ^ ((uVar7 * 0x20 ^ uVar7) << 0xe ^ uVar7) << 7
          ) + local_4c + -0x27f85568 + uVar6;
  uVar8 = uVar8 + iVar5;
  uVar6 = param_2[9];
  local_48 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar3 = ((uVar10 ^ uVar11) & uVar9 ^ uVar10 & uVar11) +
          (((uVar11 >> 9 ^ uVar11) >> 0xb ^ uVar11) >> 2 ^
          ((uVar11 * 0x800 ^ uVar11) << 9 ^ uVar11) << 10) + iVar5;
  iVar5 = ((uVar4 ^ uVar7) & uVar8 ^ uVar4) +
          (((uVar8 >> 0xe ^ uVar8) >> 5 ^ uVar8) >> 6 ^ ((uVar8 * 0x20 ^ uVar8) << 0xe ^ uVar8) << 7
          ) + local_48 + 0x12835b01 + uVar2;
  uVar9 = uVar9 + iVar5;
  uVar2 = ((uVar3 ^ uVar11) & uVar10 ^ uVar3 & uVar11) +
          (((uVar3 >> 9 ^ uVar3) >> 0xb ^ uVar3) >> 2 ^ ((uVar3 * 0x800 ^ uVar3) << 9 ^ uVar3) << 10
          ) + iVar5;
  uVar6 = param_2[10];
  local_44 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  iVar5 = ((uVar7 ^ uVar8) & uVar9 ^ uVar7) +
          (((uVar9 >> 0xe ^ uVar9) >> 5 ^ uVar9) >> 6 ^ ((uVar9 * 0x20 ^ uVar9) << 0xe ^ uVar9) << 7
          ) + local_44 + 0x243185be + uVar4;
  uVar10 = uVar10 + iVar5;
  local_1c = ((uVar3 ^ uVar2) & uVar11 ^ uVar3 & uVar2) +
             (((uVar2 >> 9 ^ uVar2) >> 0xb ^ uVar2) >> 2 ^
             ((uVar2 * 0x800 ^ uVar2) << 9 ^ uVar2) << 10) + iVar5;
  uVar6 = param_2[0xb];
  local_40 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  iVar5 = ((uVar8 ^ uVar9) & uVar10 ^ uVar8) +
          (((uVar10 >> 0xe ^ uVar10) >> 5 ^ uVar10) >> 6 ^
          ((uVar10 * 0x20 ^ uVar10) << 0xe ^ uVar10) << 7) + local_40 + 0x550c7dc3 + uVar7;
  uVar11 = uVar11 + iVar5;
  local_18 = ((uVar2 ^ local_1c) & uVar3 ^ uVar2 & local_1c) +
             (((local_1c >> 9 ^ local_1c) >> 0xb ^ local_1c) >> 2 ^
             ((local_1c * 0x800 ^ local_1c) << 9 ^ local_1c) << 10) + iVar5;
  uVar6 = param_2[0xc];
  local_3c = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  iVar5 = ((uVar9 ^ uVar10) & uVar11 ^ uVar9) +
          (((uVar11 >> 0xe ^ uVar11) >> 5 ^ uVar11) >> 6 ^
          ((uVar11 * 0x20 ^ uVar11) << 0xe ^ uVar11) << 7) + local_3c + 0x72be5d74 + uVar8;
  uVar3 = uVar3 + iVar5;
  local_10 = ((local_1c ^ local_18) & uVar2 ^ local_1c & local_18) +
             (((local_18 >> 9 ^ local_18) >> 0xb ^ local_18) >> 2 ^
             ((local_18 * 0x800 ^ local_18) << 9 ^ local_18) << 10) + iVar5;
  uVar6 = param_2[0xd];
  local_38 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  iVar5 = ((uVar10 ^ uVar11) & uVar3 ^ uVar10) +
          (((uVar3 >> 0xe ^ uVar3) >> 5 ^ uVar3) >> 6 ^ ((uVar3 * 0x20 ^ uVar3) << 0xe ^ uVar3) << 7
          ) + local_38 + -0x7f214e02 + uVar9;
  uVar2 = uVar2 + iVar5;
  local_8 = ((local_18 ^ local_10) & local_1c ^ local_18 & local_10) +
            (((local_10 >> 9 ^ local_10) >> 0xb ^ local_10) >> 2 ^
            ((local_10 * 0x800 ^ local_10) << 9 ^ local_10) << 10) + iVar5;
  uVar9 = param_2[0xe];
  local_34 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  uVar9 = param_2[0xf];
  iVar5 = ((uVar3 ^ uVar11) & uVar2 ^ uVar11) +
          (((uVar2 >> 0xe ^ uVar2) >> 5 ^ uVar2) >> 6 ^ ((uVar2 * 0x20 ^ uVar2) << 0xe ^ uVar2) << 7
          ) + local_34 + -0x6423f959 + uVar10;
  local_1c = local_1c + iVar5;
  local_30 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  local_c = ((local_10 ^ local_8) & local_18 ^ local_10 & local_8) +
            (((local_8 >> 9 ^ local_8) >> 0xb ^ local_8) >> 2 ^
            ((local_8 * 0x800 ^ local_8) << 9 ^ local_8) << 10) + iVar5;
  iVar5 = ((uVar3 ^ uVar2) & local_1c ^ uVar3) +
          (((local_1c >> 0xe ^ local_1c) >> 5 ^ local_1c) >> 6 ^
          ((local_1c * 0x20 ^ local_1c) << 0xe ^ local_1c) << 7) + local_30 + -0x3e640e8c + uVar11;
  local_18 = local_18 + iVar5;
  local_14 = ((local_8 ^ local_c) & local_10 ^ local_8 & local_c) +
             (((local_c >> 9 ^ local_c) >> 0xb ^ local_c) >> 2 ^
             ((local_c * 0x800 ^ local_c) << 9 ^ local_c) << 10) + iVar5;
  local_20 = &DAT_10015280;
  local_2c = 3;
  do {
    local_6c = local_6c +
               (((local_68 >> 0xb ^ local_68) >> 4 ^ local_68) >> 3 ^
               (local_68 << 0xb ^ local_68) << 0xe) +
               (((local_34 >> 2 ^ local_34) >> 7 ^ local_34) >> 10 ^
               (local_34 << 2 ^ local_34) << 0xd) + local_48;
    iVar5 = (((local_18 >> 0xe ^ local_18) >> 5 ^ local_18) >> 6 ^
            ((local_18 << 5 ^ local_18) << 0xe ^ local_18) << 7) +
            ((uVar2 ^ local_1c) & local_18 ^ uVar2) + local_20[-2] + local_6c + uVar3;
    local_10 = local_10 + iVar5;
    uVar9 = ((local_c ^ local_14) & local_8 ^ local_c & local_14) +
            (((local_14 >> 9 ^ local_14) >> 0xb ^ local_14) >> 2 ^
            ((local_14 << 0xb ^ local_14) << 9 ^ local_14) << 10) + iVar5;
    local_68 = local_68 +
               (((local_64 >> 0xb ^ local_64) >> 4 ^ local_64) >> 3 ^
               (local_64 << 0xb ^ local_64) << 0xe) +
               (((local_30 >> 2 ^ local_30) >> 7 ^ local_30) >> 10 ^
               (local_30 << 2 ^ local_30) << 0xd) + local_44;
    iVar5 = (((local_10 >> 0xe ^ local_10) >> 5 ^ local_10) >> 6 ^
            ((local_10 * 0x20 ^ local_10) << 0xe ^ local_10) << 7) +
            ((local_1c ^ local_18) & local_10 ^ local_1c) + local_20[-1] + local_68 + uVar2;
    local_8 = local_8 + iVar5;
    uVar10 = ((uVar9 ^ local_14) & local_c ^ uVar9 & local_14) +
             (((uVar9 >> 9 ^ uVar9) >> 0xb ^ uVar9) >> 2 ^
             ((uVar9 * 0x800 ^ uVar9) << 9 ^ uVar9) << 10) + iVar5;
    local_64 = local_64 +
               (((local_6c >> 2 ^ local_6c) >> 7 ^ local_6c) >> 10 ^
               (local_6c * 4 ^ local_6c) << 0xd) +
               (((local_60 >> 0xb ^ local_60) >> 4 ^ local_60) >> 3 ^
               (local_60 << 0xb ^ local_60) << 0xe) + local_40;
    iVar5 = ((local_18 ^ local_10) & local_8 ^ local_18) +
            (((local_8 >> 0xe ^ local_8) >> 5 ^ local_8) >> 6 ^
            ((local_8 * 0x20 ^ local_8) << 0xe ^ local_8) << 7) + local_64 + local_1c + *local_20;
    local_c = local_c + iVar5;
    uVar4 = ((uVar9 ^ uVar10) & local_14 ^ uVar9 & uVar10) +
            (((uVar10 >> 9 ^ uVar10) >> 0xb ^ uVar10) >> 2 ^
            ((uVar10 * 0x800 ^ uVar10) << 9 ^ uVar10) << 10) + iVar5;
    local_60 = local_60 +
               (((local_68 >> 2 ^ local_68) >> 7 ^ local_68) >> 10 ^
               (local_68 * 4 ^ local_68) << 0xd) +
               (((local_5c >> 0xb ^ local_5c) >> 4 ^ local_5c) >> 3 ^
               (local_5c << 0xb ^ local_5c) << 0xe) + local_3c;
    iVar5 = (((local_c >> 0xe ^ local_c) >> 5 ^ local_c) >> 6 ^
            ((local_c * 0x20 ^ local_c) << 0xe ^ local_c) << 7) +
            ((local_10 ^ local_8) & local_c ^ local_10) + local_20[1] + local_60 + local_18;
    local_14 = local_14 + iVar5;
    uVar12 = ((uVar10 ^ uVar4) & uVar9 ^ uVar10 & uVar4) +
             (((uVar4 >> 9 ^ uVar4) >> 0xb ^ uVar4) >> 2 ^
             ((uVar4 * 0x800 ^ uVar4) << 9 ^ uVar4) << 10) + iVar5;
    local_5c = local_5c +
               (((local_64 >> 2 ^ local_64) >> 7 ^ local_64) >> 10 ^
               (local_64 * 4 ^ local_64) << 0xd) +
               (((local_58 >> 0xb ^ local_58) >> 4 ^ local_58) >> 3 ^
               (local_58 << 0xb ^ local_58) << 0xe) + local_38;
    iVar5 = (((local_14 >> 0xe ^ local_14) >> 5 ^ local_14) >> 6 ^
            ((local_14 * 0x20 ^ local_14) << 0xe ^ local_14) << 7) +
            ((local_8 ^ local_c) & local_14 ^ local_8) + local_20[2] + local_5c + local_10;
    uVar9 = uVar9 + iVar5;
    uVar11 = ((uVar4 ^ uVar12) & uVar10 ^ uVar4 & uVar12) +
             (((uVar12 >> 9 ^ uVar12) >> 0xb ^ uVar12) >> 2 ^
             ((uVar12 * 0x800 ^ uVar12) << 9 ^ uVar12) << 10) + iVar5;
    local_58 = local_58 +
               (((local_60 >> 2 ^ local_60) >> 7 ^ local_60) >> 10 ^
               (local_60 * 4 ^ local_60) << 0xd) +
               (((local_54 >> 0xb ^ local_54) >> 4 ^ local_54) >> 3 ^
               (local_54 << 0xb ^ local_54) << 0xe) + local_34;
    iVar5 = (((uVar9 >> 0xe ^ uVar9) >> 5 ^ uVar9) >> 6 ^
            ((uVar9 * 0x20 ^ uVar9) << 0xe ^ uVar9) << 7) + ((local_c ^ local_14) & uVar9 ^ local_c)
            + local_20[3] + local_58 + local_8;
    uVar10 = uVar10 + iVar5;
    uVar6 = ((uVar12 ^ uVar11) & uVar4 ^ uVar12 & uVar11) +
            (((uVar11 >> 9 ^ uVar11) >> 0xb ^ uVar11) >> 2 ^
            ((uVar11 * 0x800 ^ uVar11) << 9 ^ uVar11) << 10) + iVar5;
    local_54 = local_54 +
               (((local_5c >> 2 ^ local_5c) >> 7 ^ local_5c) >> 10 ^
               (local_5c * 4 ^ local_5c) << 0xd) +
               (((local_50 >> 0xb ^ local_50) >> 4 ^ local_50) >> 3 ^
               (local_50 << 0xb ^ local_50) << 0xe) + local_30;
    iVar5 = (((uVar10 >> 0xe ^ uVar10) >> 5 ^ uVar10) >> 6 ^
            ((uVar10 * 0x20 ^ uVar10) << 0xe ^ uVar10) << 7) +
            ((uVar9 ^ local_14) & uVar10 ^ local_14) + local_20[4] + local_54 + local_c;
    uVar4 = uVar4 + iVar5;
    uVar7 = ((uVar11 ^ uVar6) & uVar12 ^ uVar11 & uVar6) +
            (((uVar6 >> 9 ^ uVar6) >> 0xb ^ uVar6) >> 2 ^
            ((uVar6 * 0x800 ^ uVar6) << 9 ^ uVar6) << 10) + iVar5;
    local_50 = local_50 +
               (((local_58 >> 2 ^ local_58) >> 7 ^ local_58) >> 10 ^
               (local_58 * 4 ^ local_58) << 0xd) +
               (((local_4c >> 0xb ^ local_4c) >> 4 ^ local_4c) >> 3 ^
               (local_4c << 0xb ^ local_4c) << 0xe) + local_6c;
    iVar5 = (((uVar4 >> 0xe ^ uVar4) >> 5 ^ uVar4) >> 6 ^
            ((uVar4 * 0x20 ^ uVar4) << 0xe ^ uVar4) << 7) + ((uVar9 ^ uVar10) & uVar4 ^ uVar9) +
            local_20[5] + local_50 + local_14;
    uVar12 = uVar12 + iVar5;
    uVar8 = ((uVar6 ^ uVar7) & uVar11 ^ uVar6 & uVar7) +
            (((uVar7 >> 9 ^ uVar7) >> 0xb ^ uVar7) >> 2 ^
            ((uVar7 * 0x800 ^ uVar7) << 9 ^ uVar7) << 10) + iVar5;
    local_4c = local_4c +
               (((local_54 >> 2 ^ local_54) >> 7 ^ local_54) >> 10 ^
               (local_54 * 4 ^ local_54) << 0xd) +
               (((local_48 >> 0xb ^ local_48) >> 4 ^ local_48) >> 3 ^
               (local_48 << 0xb ^ local_48) << 0xe) + local_68;
    iVar5 = (((uVar12 >> 0xe ^ uVar12) >> 5 ^ uVar12) >> 6 ^
            ((uVar12 * 0x20 ^ uVar12) << 0xe ^ uVar12) << 7) + ((uVar10 ^ uVar4) & uVar12 ^ uVar10)
            + local_20[6] + local_4c + uVar9;
    uVar11 = uVar11 + iVar5;
    uVar3 = (uVar8 & uVar7 ^ (uVar7 ^ uVar8) & uVar6) +
            (((uVar8 >> 9 ^ uVar8) >> 0xb ^ uVar8) >> 2 ^
            ((uVar8 * 0x800 ^ uVar8) << 9 ^ uVar8) << 10) + iVar5;
    local_48 = local_48 +
               (((local_50 >> 2 ^ local_50) >> 7 ^ local_50) >> 10 ^
               (local_50 * 4 ^ local_50) << 0xd) +
               (((local_44 >> 0xb ^ local_44) >> 4 ^ local_44) >> 3 ^
               (local_44 << 0xb ^ local_44) << 0xe) + local_64;
    iVar5 = (((uVar11 >> 0xe ^ uVar11) >> 5 ^ uVar11) >> 6 ^
            ((uVar11 * 0x20 ^ uVar11) << 0xe ^ uVar11) << 7) + ((uVar4 ^ uVar12) & uVar11 ^ uVar4) +
            local_20[7] + local_48 + uVar10;
    uVar6 = uVar6 + iVar5;
    uVar2 = (((uVar3 >> 9 ^ uVar3) >> 0xb ^ uVar3) >> 2 ^
            ((uVar3 * 0x800 ^ uVar3) << 9 ^ uVar3) << 10) + iVar5 +
            ((uVar3 ^ uVar8) & uVar7 ^ uVar3 & uVar8);
    local_44 = local_44 +
               (((local_4c >> 2 ^ local_4c) >> 7 ^ local_4c) >> 10 ^
               (local_4c * 4 ^ local_4c) << 0xd) +
               (((local_40 >> 0xb ^ local_40) >> 4 ^ local_40) >> 3 ^
               (local_40 << 0xb ^ local_40) << 0xe) + local_60;
    iVar5 = (((uVar6 >> 0xe ^ uVar6) >> 5 ^ uVar6) >> 6 ^
            ((uVar6 * 0x20 ^ uVar6) << 0xe ^ uVar6) << 7) + ((uVar12 ^ uVar11) & uVar6 ^ uVar12) +
            local_20[8] + local_44 + uVar4;
    uVar7 = uVar7 + iVar5;
    local_1c = ((uVar3 ^ uVar2) & uVar8 ^ uVar3 & uVar2) +
               (((uVar2 >> 9 ^ uVar2) >> 0xb ^ uVar2) >> 2 ^
               ((uVar2 * 0x800 ^ uVar2) << 9 ^ uVar2) << 10) + iVar5;
    local_40 = local_40 +
               (((local_48 >> 2 ^ local_48) >> 7 ^ local_48) >> 10 ^
               (local_48 * 4 ^ local_48) << 0xd) +
               (((local_3c >> 0xb ^ local_3c) >> 4 ^ local_3c) >> 3 ^
               (local_3c << 0xb ^ local_3c) << 0xe) + local_5c;
    iVar5 = (((uVar7 >> 0xe ^ uVar7) >> 5 ^ uVar7) >> 6 ^
            ((uVar7 * 0x20 ^ uVar7) << 0xe ^ uVar7) << 7) + ((uVar11 ^ uVar6) & uVar7 ^ uVar11) +
            local_20[9] + local_40 + uVar12;
    uVar8 = uVar8 + iVar5;
    local_18 = ((uVar2 ^ local_1c) & uVar3 ^ uVar2 & local_1c) +
               (((local_1c >> 9 ^ local_1c) >> 0xb ^ local_1c) >> 2 ^
               ((local_1c * 0x800 ^ local_1c) << 9 ^ local_1c) << 10) + iVar5;
    local_3c = local_3c +
               (((local_44 >> 2 ^ local_44) >> 7 ^ local_44) >> 10 ^
               (local_44 * 4 ^ local_44) << 0xd) +
               (((local_38 >> 0xb ^ local_38) >> 4 ^ local_38) >> 3 ^
               (local_38 << 0xb ^ local_38) << 0xe) + local_58;
    iVar5 = (((uVar8 >> 0xe ^ uVar8) >> 5 ^ uVar8) >> 6 ^
            ((uVar8 * 0x20 ^ uVar8) << 0xe ^ uVar8) << 7) + ((uVar6 ^ uVar7) & uVar8 ^ uVar6) +
            local_20[10] + local_3c + uVar11;
    uVar3 = uVar3 + iVar5;
    local_10 = ((local_1c ^ local_18) & uVar2 ^ local_1c & local_18) +
               (((local_18 >> 9 ^ local_18) >> 0xb ^ local_18) >> 2 ^
               ((local_18 * 0x800 ^ local_18) << 9 ^ local_18) << 10) + iVar5;
    local_38 = local_38 +
               (((local_40 >> 2 ^ local_40) >> 7 ^ local_40) >> 10 ^
               (local_40 * 4 ^ local_40) << 0xd) +
               (((local_34 >> 0xb ^ local_34) >> 4 ^ local_34) >> 3 ^
               (local_34 << 0xb ^ local_34) << 0xe) + local_54;
    iVar5 = (((uVar3 >> 0xe ^ uVar3) >> 5 ^ uVar3) >> 6 ^
            ((uVar3 * 0x20 ^ uVar3) << 0xe ^ uVar3) << 7) + ((uVar7 ^ uVar8) & uVar3 ^ uVar7) +
            local_20[0xb] + local_38 + uVar6;
    uVar2 = uVar2 + iVar5;
    local_8 = ((local_18 ^ local_10) & local_1c ^ local_18 & local_10) +
              (((local_10 >> 9 ^ local_10) >> 0xb ^ local_10) >> 2 ^
              ((local_10 * 0x800 ^ local_10) << 9 ^ local_10) << 10) + iVar5;
    local_34 = local_34 +
               (((local_3c >> 2 ^ local_3c) >> 7 ^ local_3c) >> 10 ^
               (local_3c * 4 ^ local_3c) << 0xd) +
               (((local_30 >> 0xb ^ local_30) >> 4 ^ local_30) >> 3 ^
               (local_30 << 0xb ^ local_30) << 0xe) + local_50;
    iVar5 = (((uVar2 >> 0xe ^ uVar2) >> 5 ^ uVar2) >> 6 ^
            ((uVar2 * 0x20 ^ uVar2) << 0xe ^ uVar2) << 7) + ((uVar3 ^ uVar8) & uVar2 ^ uVar8) +
            local_20[0xc] + local_34 + uVar7;
    local_1c = local_1c + iVar5;
    local_c = ((local_10 ^ local_8) & local_18 ^ local_10 & local_8) +
              (((local_8 >> 9 ^ local_8) >> 0xb ^ local_8) >> 2 ^
              ((local_8 * 0x800 ^ local_8) << 9 ^ local_8) << 10) + iVar5;
    local_30 = local_30 +
               (((local_6c >> 0xb ^ local_6c) >> 4 ^ local_6c) >> 3 ^
               (local_6c * 0x800 ^ local_6c) << 0xe) +
               (((local_38 >> 2 ^ local_38) >> 7 ^ local_38) >> 10 ^
               (local_38 * 4 ^ local_38) << 0xd) + local_4c;
    piVar1 = local_20 + 0xd;
    local_20 = local_20 + 0x10;
    iVar5 = (((local_1c >> 0xe ^ local_1c) >> 5 ^ local_1c) >> 6 ^
            ((local_1c * 0x20 ^ local_1c) << 0xe ^ local_1c) << 7) +
            ((uVar3 ^ uVar2) & local_1c ^ uVar3) + *piVar1 + local_30 + uVar8;
    local_18 = local_18 + iVar5;
    local_14 = ((local_8 ^ local_c) & local_10 ^ local_8 & local_c) +
               (((local_c >> 9 ^ local_c) >> 0xb ^ local_c) >> 2 ^
               ((local_c * 0x800 ^ local_c) << 9 ^ local_c) << 10) + iVar5;
    local_2c = local_2c + -1;
  } while (local_2c != 0);
  param_3[1] = param_3[1] + local_c;
  param_3[2] = param_3[2] + local_8;
  param_3[3] = param_3[3] + local_10;
  *param_3 = *param_3 + local_14;
  param_3[4] = param_3[4] + local_18;
  param_3[5] = param_3[5] + local_1c;
  param_3[6] = param_3[6] + uVar2;
  param_3[7] = param_3[7] + uVar3;
  return;
}



// ===== FUN_1000a6d4 @ 1000a6d4 (size 164) =====

void __cdecl FUN_1000a6d4(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *_Dst;
  uint *puVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  
  _Dst = param_1;
  uVar3 = param_1[0x10];
  puVar5 = param_1 + 0x10;
  uVar1 = *puVar5;
  *puVar5 = *puVar5 + (int)param_3;
  param_1[0x11] = param_1[0x11] + (uint)CARRY4(uVar1,(uint)param_3);
  uVar3 = uVar3 & 0x3f;
  puVar5 = param_3;
  if (uVar3 != 0) {
    puVar6 = (uint *)(0x40 - uVar3);
    if (puVar6 <= param_3) {
      puVar5 = puVar6;
    }
    memcpy((void *)(uVar3 + (int)param_1),param_2,(size_t)puVar5);
    if (param_3 < puVar6) {
      return;
    }
    puVar5 = param_1 + 0x12;
    FUN_1000927a(extraout_ECX,param_1,puVar5);
    param_2 = (uint *)((int)param_2 + (int)puVar6);
    param_3 = (uint *)((int)param_3 - (int)puVar6);
  }
  if ((uint *)0x3f < param_3) {
    param_1 = (uint *)((uint)param_3 >> 6);
    do {
      puVar6 = param_2;
      if (((uint)param_2 & 3) != 0) {
        puVar5 = param_2;
        puVar6 = _Dst;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = (uint *)0x0;
        puVar6 = _Dst;
      }
      puVar2 = _Dst + 0x12;
      FUN_1000927a(puVar5,puVar6,_Dst + 0x12);
      puVar5 = puVar2;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -0x10;
      param_1 = (uint *)((int)param_1 + -1);
    } while (param_1 != (uint *)0x0);
  }
  if (param_3 != (uint *)0x0) {
    memcpy(_Dst,param_2,(size_t)param_3);
  }
  return;
}



// ===== FUN_1000a778 @ 1000a778 (size 157) =====

void __cdecl FUN_1000a778(int param_1)

{
  uint uVar1;
  uint uVar2;
  sbyte sVar3;
  int iVar4;
  undefined4 uVar5;
  uint *unaff_ESI;
  uint *puVar6;
  bool bVar7;
  
  sVar3 = (sbyte)((unaff_ESI[0x10] & 3) << 3);
  uVar2 = unaff_ESI[0x10] >> 2 & 0xf;
  unaff_ESI[uVar2] = ~(-1 << sVar3) & unaff_ESI[uVar2] ^ 0x80 << sVar3;
  uVar2 = uVar2 + 1;
  bVar7 = uVar2 < 0xe;
  if (0xe < uVar2) {
    uVar5 = 0x10;
    if (uVar2 < 0x10) {
      puVar6 = unaff_ESI + uVar2;
      for (iVar4 = 0x10 - uVar2; uVar5 = 0, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    FUN_1000927a(uVar5,unaff_ESI,unaff_ESI + 0x12);
    uVar2 = 0;
    bVar7 = true;
  }
  if (bVar7) {
    puVar6 = unaff_ESI + uVar2;
    for (iVar4 = 0xe - uVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  uVar2 = unaff_ESI[0x11];
  uVar1 = uVar2 << 3;
  unaff_ESI[0xe] =
       (uVar2 & 0x1fffffff) >> 0x15 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
       (unaff_ESI[0x10] >> 0x1d | uVar1) << 0x18;
  uVar1 = unaff_ESI[0x10];
  unaff_ESI[0xf] =
       (uVar1 & 0x1fffffff) >> 0x15 | (uVar1 << 3 & 0xff0000) >> 8 | (uVar1 << 3 & 0xff00) << 8 |
       uVar1 << 0x1b;
  FUN_1000927a(uVar2 >> 0x1d,unaff_ESI,unaff_ESI + 0x12);
  if (param_1 != 0) {
    FUN_10008376(unaff_ESI[0x1a]);
  }
  return;
}



// ===== FUN_1000a815 @ 1000a815 (size 37) =====

void __cdecl FUN_1000a815(int param_1)

{
  void *unaff_ESI;
  
  memset(unaff_ESI,0,400);
  *(uint *)((int)unaff_ESI + 0x18c) = (800U - param_1 & 0x7fffffff) >> 2;
  return;
}



// ===== FUN_1000a83a @ 1000a83a (size 300) =====

void __cdecl FUN_1000a83a(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint local_5c [22];
  
  uVar7 = 0;
  puVar6 = (uint *)(param_1 + 0x78);
  do {
    uVar1 = puVar6[-0x1d];
    uVar2 = puVar6[-0x13];
    uVar3 = puVar6[-9];
    uVar4 = puVar6[0xb];
    uVar5 = puVar6[1];
    local_5c[uVar7 * 2 + 10] = puVar6[-0x1e] ^ puVar6[-0x14] ^ puVar6[-10] ^ puVar6[10] ^ *puVar6;
    local_5c[uVar7 * 2 + 0xb] = uVar1 ^ uVar2 ^ uVar3 ^ uVar4 ^ uVar5;
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 2;
  } while (uVar7 < 5);
  local_5c[1] = (local_5c[0xd] << 1 | local_5c[0xc] >> 0x1f) ^ local_5c[0x13];
  local_5c[0] = local_5c[0xd] >> 0x1f ^ local_5c[0xc] * 2 ^ local_5c[0x12];
  local_5c[2] = local_5c[0xf] >> 0x1f ^ local_5c[0xe] * 2 ^ local_5c[10];
  local_5c[3] = (local_5c[0xf] << 1 | local_5c[0xe] >> 0x1f) ^ local_5c[0xb];
  local_5c[5] = (local_5c[0x11] << 1 | local_5c[0x10] >> 0x1f) ^ local_5c[0xd];
  local_5c[4] = local_5c[0x11] >> 0x1f ^ local_5c[0x10] * 2 ^ local_5c[0xc];
  local_5c[7] = (local_5c[0x13] << 1 | local_5c[0x12] >> 0x1f) ^ local_5c[0xf];
  local_5c[6] = local_5c[0x13] >> 0x1f ^ local_5c[0x12] * 2 ^ local_5c[0xe];
  local_5c[8] = local_5c[0xb] >> 0x1f ^ local_5c[10] * 2 ^ local_5c[0x10];
  uVar7 = 0;
  local_5c[9] = (local_5c[0xb] << 1 | local_5c[10] >> 0x1f) ^ local_5c[0x11];
  puVar6 = (uint *)(param_1 + 0x50);
  do {
    uVar1 = local_5c[uVar7 * 2];
    uVar2 = local_5c[uVar7 * 2 + 1];
    puVar6[-0x14] = puVar6[-0x14] ^ uVar1;
    puVar6[-0x13] = puVar6[-0x13] ^ uVar2;
    puVar6[-10] = puVar6[-10] ^ uVar1;
    puVar6[-9] = puVar6[-9] ^ uVar2;
    *puVar6 = *puVar6 ^ uVar1;
    puVar6[1] = puVar6[1] ^ uVar2;
    puVar6[10] = puVar6[10] ^ uVar1;
    puVar6[0xb] = puVar6[0xb] ^ uVar2;
    puVar6[0x14] = puVar6[0x14] ^ uVar1;
    puVar6[0x15] = puVar6[0x15] ^ uVar2;
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 2;
  } while (uVar7 < 5);
  return;
}



// ===== FUN_1000a966 @ 1000a966 (size 403) =====

void FUN_1000a966(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  
  uVar1 = *(undefined4 *)(in_EAX + 8);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 0x30);
  uVar2 = *(undefined4 *)(in_EAX + 0xb8);
  uVar3 = *(undefined4 *)(in_EAX + 0xc);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(in_EAX + 0x34);
  uVar4 = *(undefined4 *)(in_EAX + 0x48);
  *(undefined4 *)(in_EAX + 0x48) = *(undefined4 *)(in_EAX + 0xb0);
  *(undefined4 *)(in_EAX + 0x30) = uVar4;
  uVar4 = *(undefined4 *)(in_EAX + 0x4c);
  *(undefined4 *)(in_EAX + 0x4c) = *(undefined4 *)(in_EAX + 0xb4);
  *(undefined4 *)(in_EAX + 0xb0) = *(undefined4 *)(in_EAX + 0x70);
  *(undefined4 *)(in_EAX + 0xb4) = *(undefined4 *)(in_EAX + 0x74);
  *(undefined4 *)(in_EAX + 0x70) = *(undefined4 *)(in_EAX + 0xa0);
  *(undefined4 *)(in_EAX + 0x34) = uVar4;
  *(undefined4 *)(in_EAX + 0x74) = *(undefined4 *)(in_EAX + 0xa4);
  uVar4 = *(undefined4 *)(in_EAX + 0x10);
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(in_EAX + 0x60);
  *(undefined4 *)(in_EAX + 0xa0) = uVar4;
  uVar4 = *(undefined4 *)(in_EAX + 0x14);
  *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(in_EAX + 100);
  *(undefined4 *)(in_EAX + 0x60) = *(undefined4 *)(in_EAX + 0x68);
  *(undefined4 *)(in_EAX + 0xa4) = uVar4;
  *(undefined4 *)(in_EAX + 100) = *(undefined4 *)(in_EAX + 0x6c);
  *(undefined4 *)(in_EAX + 0x68) = *(undefined4 *)(in_EAX + 0x98);
  *(undefined4 *)(in_EAX + 0xb8) = *(undefined4 *)(in_EAX + 0x78);
  *(undefined4 *)(in_EAX + 0x6c) = *(undefined4 *)(in_EAX + 0x9c);
  *(undefined4 *)(in_EAX + 0x98) = uVar2;
  uVar2 = *(undefined4 *)(in_EAX + 0xbc);
  *(undefined4 *)(in_EAX + 0xbc) = *(undefined4 *)(in_EAX + 0x7c);
  uVar4 = *(undefined4 *)(in_EAX + 0x20);
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_EAX + 0xc0);
  *(undefined4 *)(in_EAX + 0x78) = uVar4;
  uVar4 = *(undefined4 *)(in_EAX + 0x24);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(in_EAX + 0xc4);
  *(undefined4 *)(in_EAX + 0x7c) = uVar4;
  uVar4 = *(undefined4 *)(in_EAX + 0x40);
  *(undefined4 *)(in_EAX + 0x40) = *(undefined4 *)(in_EAX + 0x80);
  *(undefined4 *)(in_EAX + 0x9c) = uVar2;
  uVar2 = *(undefined4 *)(in_EAX + 0xa8);
  *(undefined4 *)(in_EAX + 0xa8) = uVar4;
  uVar4 = *(undefined4 *)(in_EAX + 0x44);
  *(undefined4 *)(in_EAX + 0x44) = *(undefined4 *)(in_EAX + 0x84);
  *(undefined4 *)(in_EAX + 0x80) = *(undefined4 *)(in_EAX + 0x28);
  *(undefined4 *)(in_EAX + 0xc0) = uVar2;
  uVar2 = *(undefined4 *)(in_EAX + 0xac);
  *(undefined4 *)(in_EAX + 0xac) = uVar4;
  *(undefined4 *)(in_EAX + 0x84) = *(undefined4 *)(in_EAX + 0x2c);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(in_EAX + 0x18);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(in_EAX + 0x90);
  *(undefined4 *)(in_EAX + 0xc4) = uVar2;
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_EAX + 0x1c);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EAX + 0x94);
  uVar2 = *(undefined4 *)(in_EAX + 0x88);
  *(undefined4 *)(in_EAX + 0x88) = *(undefined4 *)(in_EAX + 0x58);
  *(undefined4 *)(in_EAX + 0x90) = uVar2;
  uVar2 = *(undefined4 *)(in_EAX + 0x8c);
  *(undefined4 *)(in_EAX + 0x8c) = *(undefined4 *)(in_EAX + 0x5c);
  *(undefined4 *)(in_EAX + 0x58) = *(undefined4 *)(in_EAX + 0x38);
  *(undefined4 *)(in_EAX + 0x5c) = *(undefined4 *)(in_EAX + 0x3c);
  *(undefined4 *)(in_EAX + 0x38) = *(undefined4 *)(in_EAX + 0x50);
  uVar4 = *(undefined4 *)(in_EAX + 0x54);
  *(undefined4 *)(in_EAX + 0x54) = uVar3;
  *(undefined4 *)(in_EAX + 0x50) = uVar1;
  *(undefined4 *)(in_EAX + 0x94) = uVar2;
  *(undefined4 *)(in_EAX + 0x3c) = uVar4;
  return;
}



// ===== FUN_1000aaf9 @ 1000aaf9 (size 176) =====

void FUN_1000aaf9(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_EAX;
  uint *puVar5;
  int local_8;
  
  puVar5 = (uint *)(in_EAX + 0x10);
  local_8 = 5;
  do {
    uVar1 = puVar5[-2];
    uVar2 = puVar5[-1];
    uVar3 = puVar5[-3];
    uVar4 = puVar5[-4];
    puVar5[-3] = ~uVar2 & puVar5[1] ^ uVar3;
    puVar5[-4] = ~uVar1 & *puVar5 ^ uVar4;
    puVar5[-2] = ~*puVar5 & puVar5[2] ^ puVar5[-2];
    *puVar5 = ~puVar5[2] & puVar5[4] ^ *puVar5;
    puVar5[-1] = ~puVar5[1] & puVar5[3] ^ puVar5[-1];
    puVar5[1] = ~puVar5[3] & puVar5[5] ^ puVar5[1];
    puVar5[2] = ~puVar5[4] & uVar4 ^ puVar5[2];
    puVar5[3] = ~puVar5[5] & uVar3 ^ puVar5[3];
    puVar5[4] = ~uVar4 & uVar1 ^ puVar5[4];
    puVar5[5] = ~uVar3 & uVar2 ^ puVar5[5];
    puVar5 = puVar5 + 10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}



// ===== FUN_1000aba9 @ 1000aba9 (size 883) =====

void FUN_1000aba9(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  uint *puVar3;
  
  puVar3 = &DAT_10019008;
  do {
    FUN_1000a83a((int)unaff_ESI);
    uVar1 = unaff_ESI[2];
    uVar2 = unaff_ESI[5];
    unaff_ESI[2] = unaff_ESI[3] >> 0x1f ^ uVar1 * 2;
    unaff_ESI[3] = unaff_ESI[3] << 1 | uVar1 >> 0x1f;
    uVar1 = unaff_ESI[6];
    unaff_ESI[5] = unaff_ESI[4] << 0x1e ^ uVar2 >> 2;
    unaff_ESI[4] = unaff_ESI[4] >> 2 | uVar2 << 0x1e;
    uVar2 = unaff_ESI[8];
    unaff_ESI[6] = unaff_ESI[7] >> 4 ^ uVar1 << 0x1c;
    unaff_ESI[7] = unaff_ESI[7] << 0x1c | uVar1 >> 4;
    uVar1 = unaff_ESI[0xb];
    unaff_ESI[8] = unaff_ESI[9] >> 5 ^ uVar2 << 0x1b;
    unaff_ESI[9] = unaff_ESI[9] << 0x1b | uVar2 >> 5;
    uVar2 = unaff_ESI[0xd];
    unaff_ESI[0xb] = unaff_ESI[10] << 4 ^ uVar1 >> 0x1c;
    unaff_ESI[10] = unaff_ESI[10] >> 0x1c | uVar1 << 4;
    uVar1 = unaff_ESI[0xe];
    unaff_ESI[0xd] = unaff_ESI[0xc] << 0xc ^ uVar2 >> 0x14;
    unaff_ESI[0xc] = unaff_ESI[0xc] >> 0x14 | uVar2 << 0xc;
    unaff_ESI[0xe] = unaff_ESI[0xf] >> 0x1a ^ uVar1 << 6;
    unaff_ESI[0xf] = unaff_ESI[0xf] << 6 | uVar1 >> 0x1a;
    uVar1 = unaff_ESI[0x11];
    uVar2 = unaff_ESI[0x12];
    unaff_ESI[0x11] = unaff_ESI[0x10] << 0x17 ^ uVar1 >> 9;
    unaff_ESI[0x10] = unaff_ESI[0x10] >> 9 | uVar1 << 0x17;
    uVar1 = unaff_ESI[0x14];
    unaff_ESI[0x12] = unaff_ESI[0x13] >> 0xc ^ uVar2 << 0x14;
    unaff_ESI[0x13] = unaff_ESI[0x13] << 0x14 | uVar2 >> 0xc;
    uVar2 = unaff_ESI[0x16];
    unaff_ESI[0x14] = unaff_ESI[0x15] >> 0x1d ^ uVar1 << 3;
    unaff_ESI[0x15] = unaff_ESI[0x15] << 3 | uVar1 >> 0x1d;
    uVar1 = unaff_ESI[0x19];
    unaff_ESI[0x16] = unaff_ESI[0x17] >> 0x16 ^ uVar2 << 10;
    unaff_ESI[0x17] = unaff_ESI[0x17] << 10 | uVar2 >> 0x16;
    uVar2 = unaff_ESI[0x1a];
    unaff_ESI[0x19] = unaff_ESI[0x18] << 0xb ^ uVar1 >> 0x15;
    unaff_ESI[0x18] = unaff_ESI[0x18] >> 0x15 | uVar1 << 0xb;
    uVar1 = unaff_ESI[0x1d];
    unaff_ESI[0x1a] = unaff_ESI[0x1b] >> 7 ^ uVar2 << 0x19;
    unaff_ESI[0x1b] = unaff_ESI[0x1b] << 0x19 | uVar2 >> 7;
    uVar2 = unaff_ESI[0x1f];
    unaff_ESI[0x1d] = unaff_ESI[0x1c] << 7 ^ uVar1 >> 0x19;
    unaff_ESI[0x1c] = unaff_ESI[0x1c] >> 0x19 | uVar1 << 7;
    uVar1 = unaff_ESI[0x21];
    unaff_ESI[0x1f] = unaff_ESI[0x1e] << 9 ^ uVar2 >> 0x17;
    unaff_ESI[0x1e] = unaff_ESI[0x1e] >> 0x17 | uVar2 << 9;
    uVar2 = unaff_ESI[0x22];
    unaff_ESI[0x21] = unaff_ESI[0x20] << 0xd ^ uVar1 >> 0x13;
    unaff_ESI[0x20] = unaff_ESI[0x20] >> 0x13 | uVar1 << 0xd;
    uVar1 = unaff_ESI[0x24];
    unaff_ESI[0x22] = unaff_ESI[0x23] >> 0x11 ^ uVar2 << 0xf;
    unaff_ESI[0x23] = unaff_ESI[0x23] << 0xf | uVar2 >> 0x11;
    uVar2 = unaff_ESI[0x26];
    unaff_ESI[0x24] = unaff_ESI[0x25] >> 0xb ^ uVar1 << 0x15;
    unaff_ESI[0x25] = unaff_ESI[0x25] << 0x15 | uVar1 >> 0xb;
    uVar1 = unaff_ESI[0x28];
    unaff_ESI[0x26] = unaff_ESI[0x27] >> 0x18 ^ uVar2 << 8;
    unaff_ESI[0x27] = unaff_ESI[0x27] << 8 | uVar2 >> 0x18;
    uVar2 = unaff_ESI[0x2a];
    unaff_ESI[0x28] = unaff_ESI[0x29] >> 0xe ^ uVar1 << 0x12;
    unaff_ESI[0x29] = unaff_ESI[0x29] << 0x12 | uVar1 >> 0xe;
    uVar1 = unaff_ESI[0x2d];
    unaff_ESI[0x2a] = unaff_ESI[0x2b] >> 0x1e ^ uVar2 << 2;
    unaff_ESI[0x2b] = unaff_ESI[0x2b] << 2 | uVar2 >> 0x1e;
    uVar2 = unaff_ESI[0x2f];
    unaff_ESI[0x2d] = unaff_ESI[0x2c] << 0x1d ^ uVar1 >> 3;
    unaff_ESI[0x2c] = unaff_ESI[0x2c] >> 3 | uVar1 << 0x1d;
    uVar1 = unaff_ESI[0x30];
    unaff_ESI[0x2f] = unaff_ESI[0x2e] << 0x18 ^ uVar2 >> 8;
    unaff_ESI[0x2e] = unaff_ESI[0x2e] >> 8 | uVar2 << 0x18;
    unaff_ESI[0x30] = unaff_ESI[0x31] >> 0x12 ^ uVar1 << 0xe;
    unaff_ESI[0x31] = unaff_ESI[0x31] << 0xe | uVar1 >> 0x12;
    FUN_1000a966();
    FUN_1000aaf9();
    *unaff_ESI = *unaff_ESI ^ *puVar3;
    unaff_ESI[1] = unaff_ESI[1] ^ puVar3[1];
    puVar3 = puVar3 + 2;
  } while ((int)puVar3 < 0x100190c8);
  return;
}



// ===== FUN_1000af1c @ 1000af1c (size 278) =====

void __thiscall FUN_1000af1c(void *this,uint param_1)

{
  uint *in_EAX;
  
  *(uint *)this = *(uint *)this ^ *in_EAX;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) ^ in_EAX[1];
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) ^ in_EAX[2];
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) ^ in_EAX[3];
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) ^ in_EAX[4];
  *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) ^ in_EAX[5];
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) ^ in_EAX[6];
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) ^ in_EAX[7];
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) ^ in_EAX[8];
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) ^ in_EAX[9];
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) ^ in_EAX[10];
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) ^ in_EAX[0xb];
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) ^ in_EAX[0xc];
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) ^ in_EAX[0xd];
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) ^ in_EAX[0xe];
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) ^ in_EAX[0xf];
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) ^ in_EAX[0x10];
  *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) ^ in_EAX[0x11];
  if (0x48 < param_1) {
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) ^ in_EAX[0x12];
    *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) ^ in_EAX[0x13];
    *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) ^ in_EAX[0x14];
    *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) ^ in_EAX[0x15];
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) ^ in_EAX[0x16];
    *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) ^ in_EAX[0x17];
    *(uint *)((int)this + 0x60) = *(uint *)((int)this + 0x60) ^ in_EAX[0x18];
    *(uint *)((int)this + 100) = *(uint *)((int)this + 100) ^ in_EAX[0x19];
    if (0x68 < param_1) {
      *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) ^ in_EAX[0x1a];
      *(uint *)((int)this + 0x6c) = *(uint *)((int)this + 0x6c) ^ in_EAX[0x1b];
      *(uint *)((int)this + 0x70) = *(uint *)((int)this + 0x70) ^ in_EAX[0x1c];
      *(uint *)((int)this + 0x74) = *(uint *)((int)this + 0x74) ^ in_EAX[0x1d];
      *(uint *)((int)this + 0x78) = *(uint *)((int)this + 0x78) ^ in_EAX[0x1e];
      *(uint *)((int)this + 0x7c) = *(uint *)((int)this + 0x7c) ^ in_EAX[0x1f];
      *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) ^ in_EAX[0x20];
      *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) ^ in_EAX[0x21];
      if (0x88 < param_1) {
        *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) ^ in_EAX[0x22];
        *(uint *)((int)this + 0x8c) = *(uint *)((int)this + 0x8c) ^ in_EAX[0x23];
      }
    }
  }
  FUN_1000aba9();
  return;
}



// ===== FUN_1000b032 @ 1000b032 (size 205) =====

void * __cdecl FUN_1000b032(void *param_1,void *param_2)

{
  int iVar1;
  void *_Size;
  void *in_EAX;
  void *pvVar2;
  void *pvVar3;
  
  iVar1 = *(int *)((int)in_EAX + 0x188);
  _Size = *(void **)((int)in_EAX + 0x18c);
  pvVar2 = _Size;
  if (-1 < iVar1) {
    pvVar2 = (void *)((uint)(iVar1 + (int)param_2) / (uint)_Size);
    *(uint *)((int)in_EAX + 0x188) = (uint)(iVar1 + (int)param_2) % (uint)_Size;
    if (iVar1 != 0) {
      pvVar3 = (void *)((int)_Size - iVar1);
      pvVar2 = param_2;
      if (pvVar3 <= param_2) {
        pvVar2 = pvVar3;
      }
      pvVar2 = memcpy((void *)(iVar1 + 200 + (int)in_EAX),param_1,(size_t)pvVar2);
      if (param_2 < pvVar3) {
        return pvVar2;
      }
      pvVar2 = (void *)FUN_1000af1c(in_EAX,(uint)_Size);
      param_1 = (void *)((int)param_1 + (int)pvVar3);
      param_2 = (void *)((int)param_2 - (int)pvVar3);
    }
    for (; _Size <= param_2; param_2 = (void *)((int)param_2 - (int)_Size)) {
      if (((uint)param_1 & 7) != 0) {
        memcpy((void *)((int)in_EAX + 200),param_1,(size_t)_Size);
      }
      FUN_1000af1c(in_EAX,(uint)_Size);
      param_1 = (void *)((int)param_1 + (int)_Size);
      pvVar2 = _Size;
    }
    if (param_2 != (void *)0x0) {
      pvVar2 = memcpy((void *)((int)in_EAX + 200),param_1,(size_t)param_2);
    }
  }
  return pvVar2;
}



// ===== FUN_1000b0ff @ 1000b0ff (size 131) =====

void __cdecl FUN_1000b0ff(void *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  void *unaff_ESI;
  
  uVar2 = *(uint *)((int)unaff_ESI + 0x18c);
  iVar3 = *(int *)((int)unaff_ESI + 0x188);
  if (-1 < iVar3) {
    memset((void *)(iVar3 + 200 + (int)unaff_ESI),0,uVar2 - iVar3);
    pbVar1 = (byte *)(*(int *)((int)unaff_ESI + 0x188) + 200 + (int)unaff_ESI);
    *pbVar1 = *pbVar1 | 6;
    pbVar1 = (byte *)(uVar2 + 199 + (int)unaff_ESI);
    *pbVar1 = *pbVar1 | 0x80;
    FUN_1000af1c(unaff_ESI,uVar2);
    *(undefined4 *)((int)unaff_ESI + 0x188) = 0x80000000;
  }
  if (param_1 != (void *)0x0) {
    memcpy(param_1,unaff_ESI,100 - (uVar2 >> 1));
  }
  return;
}



// ===== FUN_1000b182 @ 1000b182 (size 13138) =====

void FUN_1000b182(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  int local_190;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_150;
  uint local_14c;
  uint *local_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[4];
  uVar4 = param_1[10];
  uVar5 = param_1[0xc];
  uVar6 = param_1[9];
  uVar23 = *param_2;
  uVar17 = param_2[1];
  uVar7 = param_1[0xb];
  local_140 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
  uVar8 = param_1[0xe];
  local_13c = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
  uVar9 = param_1[3];
  uVar10 = param_1[5];
  uVar11 = param_1[8];
  uVar23 = uVar6 >> 0x17 ^ uVar6;
  uVar12 = param_1[0xd];
  uVar13 = *param_1;
  uVar24 = uVar23 >> 4 ^ uVar6;
  uVar27 = uVar11 << 4 ^ uVar11;
  uVar23 = ((((uVar6 << 9 ^ uVar11) >> 4 | uVar23 << 0x1c) ^ uVar11) >> 0xe | uVar24 << 0x12) ^
           uVar11 << 0x17;
  uVar35 = (uVar5 ^ uVar4) & uVar11 ^ uVar5;
  uVar17 = uVar23 + uVar35;
  uVar18 = uVar17 + uVar8;
  uVar14 = param_1[6];
  uVar19 = uVar18 + local_140;
  uVar20 = uVar19 + 0xd728ae22;
  iVar25 = (uVar24 >> 0xe ^ ((uVar27 >> 9 ^ uVar6) << 0x17 | (uVar27 << 0x17 ^ uVar11) >> 9)) +
           ((uVar12 ^ uVar7) & uVar6 ^ uVar12) + (uint)CARRY4(uVar23,uVar35) + param_1[0xf] +
           (uint)CARRY4(uVar17,uVar8) + local_13c + (uint)CARRY4(uVar18,local_140) + 0x428a2f98 +
           (uint)(0x28d751dd < uVar19);
  uVar36 = uVar14 + uVar20;
  uVar15 = param_1[7] + iVar25 + (uint)CARRY4(uVar14,uVar20);
  uVar24 = uVar13 << 6 ^ uVar13;
  uVar23 = uVar1 >> 5 ^ uVar1;
  uVar27 = uVar24 << 5 ^ uVar13;
  uVar18 = ((uVar23 << 0x1a ^ uVar13) >> 0x1c | (uVar23 >> 6 ^ uVar1) << 4) ^ uVar27 << 0x19;
  uVar23 = param_2[2];
  uVar17 = param_2[3];
  uVar35 = (uVar2 ^ uVar13) & uVar3 ^ uVar2 & uVar13;
  uVar19 = uVar18 + uVar35;
  uVar21 = uVar19 + uVar20;
  uVar26 = (uVar1 >> 0x1c ^
           ((((uVar13 >> 0x1a ^ uVar1) << 5 | uVar24 >> 0x1b) ^ uVar1) << 0x19 | uVar27 >> 7)) +
           ((uVar9 ^ uVar1) & uVar10 ^ uVar9 & uVar1) + (uint)CARRY4(uVar18,uVar35) + iVar25 +
           (uint)CARRY4(uVar19,uVar20);
  local_134 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
  local_138 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
  uVar23 = uVar15 >> 0x17 ^ uVar15;
  uVar27 = uVar23 >> 4 ^ uVar15;
  uVar24 = uVar36 * 0x10 ^ uVar36;
  uVar35 = (uVar4 ^ uVar11) & uVar36 ^ uVar4;
  uVar23 = ((((uVar15 * 0x200 ^ uVar36) >> 4 | uVar23 << 0x1c) ^ uVar36) >> 0xe | uVar27 << 0x12) ^
           uVar36 * 0x800000;
  uVar17 = uVar23 + uVar35;
  uVar18 = uVar17 + local_138;
  uVar19 = uVar18 + uVar5;
  uVar20 = uVar19 + 0x23ef65cd;
  iVar25 = (uVar27 >> 0xe ^ ((uVar24 >> 9 ^ uVar15) << 0x17 | (uVar24 << 0x17 ^ uVar36) >> 9)) +
           ((uVar7 ^ uVar6) & uVar15 ^ uVar7) + (uint)CARRY4(uVar23,uVar35) + local_134 +
           (uint)CARRY4(uVar17,local_138) + uVar12 + (uint)CARRY4(uVar18,uVar5) + 0x71374491 +
           (uint)(0xdc109a32 < uVar19);
  uVar23 = uVar3 + uVar20;
  uVar17 = uVar10 + iVar25 + (uint)CARRY4(uVar3,uVar20);
  uVar18 = uVar26 >> 5 ^ uVar26;
  uVar24 = uVar21 * 0x40 ^ uVar21;
  uVar27 = uVar24 << 5 ^ uVar21;
  uVar18 = ((uVar18 << 0x1a ^ uVar21) >> 0x1c | (uVar18 >> 6 ^ uVar26) << 4) ^ uVar27 << 0x19;
  uVar35 = (uVar21 ^ uVar13) & uVar2 ^ uVar21 & uVar13;
  uVar19 = uVar18 + uVar35;
  uVar30 = uVar19 + uVar20;
  uVar16 = (uVar26 >> 0x1c ^
           ((((uVar21 >> 0x1a ^ uVar26) << 5 | uVar24 >> 0x1b) ^ uVar26) << 0x19 | uVar27 >> 7)) +
           ((uVar26 ^ uVar1) & uVar9 ^ uVar26 & uVar1) + (uint)CARRY4(uVar18,uVar35) + iVar25 +
           (uint)CARRY4(uVar19,uVar20);
  uVar18 = param_2[4];
  uVar19 = param_2[5];
  local_12c = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
  local_130 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
  uVar18 = uVar17 >> 0x17 ^ uVar17;
  uVar35 = uVar18 >> 4 ^ uVar17;
  uVar28 = uVar23 * 0x10 ^ uVar23;
  uVar37 = (uVar11 ^ uVar36) & uVar23 ^ uVar11;
  uVar18 = ((((uVar17 * 0x200 ^ uVar23) >> 4 | uVar18 << 0x1c) ^ uVar23) >> 0xe | uVar35 << 0x12) ^
           uVar23 * 0x800000;
  uVar19 = uVar18 + uVar37;
  uVar20 = uVar19 + local_130;
  uVar24 = uVar20 + uVar4;
  uVar27 = uVar24 + 0xec4d3b2f;
  iVar25 = (uVar35 >> 0xe ^ ((uVar28 >> 9 ^ uVar17) << 0x17 | (uVar28 << 0x17 ^ uVar23) >> 9)) +
           ((uVar6 ^ uVar15) & uVar17 ^ uVar6) + (uint)CARRY4(uVar18,uVar37) + local_12c +
           (uint)CARRY4(uVar19,local_130) + uVar7 + (uint)CARRY4(uVar20,uVar4) + -0x4a3f0431 +
           (uint)(0x13b2c4d0 < uVar24);
  uVar18 = uVar2 + uVar27;
  uVar19 = uVar9 + iVar25 + (uint)CARRY4(uVar2,uVar27);
  uVar20 = uVar16 >> 5 ^ uVar16;
  uVar24 = uVar30 * 0x40 ^ uVar30;
  uVar35 = uVar24 << 5 ^ uVar30;
  uVar28 = ((uVar20 << 0x1a ^ uVar30) >> 0x1c | (uVar20 >> 6 ^ uVar16) << 4) ^ uVar35 << 0x19;
  uVar20 = (uVar21 ^ uVar30) & uVar13 ^ uVar21 & uVar30;
  uVar37 = uVar28 + uVar20;
  uVar38 = uVar37 + uVar27;
  uVar22 = (uVar16 >> 0x1c ^
           ((((uVar30 >> 0x1a ^ uVar16) << 5 | uVar24 >> 0x1b) ^ uVar16) << 0x19 | uVar35 >> 7)) +
           ((uVar26 ^ uVar16) & uVar1 ^ uVar26 & uVar16) + (uint)CARRY4(uVar28,uVar20) + iVar25 +
           (uint)CARRY4(uVar37,uVar27);
  uVar20 = param_2[6];
  uVar24 = param_2[7];
  local_124 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
  local_128 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
  uVar20 = uVar19 >> 0x17 ^ uVar19;
  uVar37 = uVar20 >> 4 ^ uVar19;
  uVar29 = uVar18 * 0x10 ^ uVar18;
  uVar31 = (uVar36 ^ uVar23) & uVar18 ^ uVar36;
  uVar20 = ((((uVar19 * 0x200 ^ uVar18) >> 4 | uVar20 << 0x1c) ^ uVar18) >> 0xe | uVar37 << 0x12) ^
           uVar18 * 0x800000;
  uVar24 = uVar20 + uVar31;
  uVar27 = uVar24 + local_128;
  uVar35 = uVar27 + uVar11;
  uVar28 = uVar35 + 0x8189dbbc;
  iVar25 = (uVar37 >> 0xe ^ ((uVar29 >> 9 ^ uVar19) << 0x17 | (uVar29 << 0x17 ^ uVar18) >> 9)) +
           ((uVar15 ^ uVar17) & uVar19 ^ uVar15) + (uint)CARRY4(uVar20,uVar31) + local_124 +
           (uint)CARRY4(uVar24,local_128) + uVar6 + (uint)CARRY4(uVar27,uVar11) + -0x164a245b +
           (uint)(0x7e762443 < uVar35);
  uVar20 = uVar13 + uVar28;
  uVar24 = uVar1 + iVar25 + (uint)CARRY4(uVar13,uVar28);
  uVar27 = uVar22 >> 5 ^ uVar22;
  uVar37 = uVar38 * 0x40 ^ uVar38;
  uVar29 = uVar37 << 5 ^ uVar38;
  uVar32 = ((uVar27 << 0x1a ^ uVar38) >> 0x1c | (uVar27 >> 6 ^ uVar22) << 4) ^ uVar29 << 0x19;
  uVar31 = (uVar30 ^ uVar38) & uVar21 ^ uVar30 & uVar38;
  uVar33 = uVar32 + uVar31;
  uVar27 = param_2[8];
  uVar35 = param_2[9];
  uVar34 = uVar33 + uVar28;
  local_120 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18;
  uVar31 = (uVar22 >> 0x1c ^
           ((((uVar38 >> 0x1a ^ uVar22) << 5 | uVar37 >> 0x1b) ^ uVar22) << 0x19 | uVar29 >> 7)) +
           ((uVar16 ^ uVar22) & uVar26 ^ uVar16 & uVar22) + (uint)CARRY4(uVar32,uVar31) + iVar25 +
           (uint)CARRY4(uVar33,uVar28);
  local_11c = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
  uVar27 = uVar24 >> 0x17 ^ uVar24;
  uVar32 = uVar27 >> 4 ^ uVar24;
  uVar33 = uVar20 * 0x10 ^ uVar20;
  uVar27 = ((((uVar24 * 0x200 ^ uVar20) >> 4 | uVar27 << 0x1c) ^ uVar20) >> 0xe | uVar32 << 0x12) ^
           uVar20 * 0x800000;
  uVar39 = (uVar23 ^ uVar18) & uVar20 ^ uVar23;
  uVar35 = uVar27 + uVar39;
  uVar28 = uVar35 + local_120;
  uVar37 = uVar28 + uVar36;
  uVar29 = uVar37 + 0xf348b538;
  iVar25 = (uVar32 >> 0xe ^ ((uVar33 >> 9 ^ uVar24) << 0x17 | (uVar33 << 0x17 ^ uVar20) >> 9)) +
           ((uVar17 ^ uVar19) & uVar24 ^ uVar17) + (uint)CARRY4(uVar27,uVar39) + local_11c +
           (uint)CARRY4(uVar35,local_120) + uVar15 + (uint)CARRY4(uVar28,uVar36) + 0x3956c25b +
           (uint)(0xcb74ac7 < uVar37);
  uVar27 = uVar21 + uVar29;
  uVar35 = uVar26 + iVar25 + (uint)CARRY4(uVar21,uVar29);
  uVar15 = uVar31 >> 5 ^ uVar31;
  uVar37 = uVar34 * 0x40 ^ uVar34;
  uVar21 = uVar37 << 5 ^ uVar34;
  uVar32 = ((uVar15 << 0x1a ^ uVar34) >> 0x1c | (uVar15 >> 6 ^ uVar31) << 4) ^ uVar21 << 0x19;
  uVar26 = (uVar38 ^ uVar34) & uVar30 ^ uVar38 & uVar34;
  uVar33 = uVar32 + uVar26;
  uVar15 = param_2[10];
  uVar28 = param_2[0xb];
  uVar39 = uVar33 + uVar29;
  local_118 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  uVar37 = (uVar31 >> 0x1c ^
           ((((uVar34 >> 0x1a ^ uVar31) << 5 | uVar37 >> 0x1b) ^ uVar31) << 0x19 | uVar21 >> 7)) +
           ((uVar22 ^ uVar31) & uVar16 ^ uVar22 & uVar31) + (uint)CARRY4(uVar32,uVar26) + iVar25 +
           (uint)CARRY4(uVar33,uVar29);
  local_114 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  uVar15 = uVar35 >> 0x17 ^ uVar35;
  uVar32 = uVar15 >> 4 ^ uVar35;
  uVar33 = uVar27 * 0x10 ^ uVar27;
  uVar36 = (uVar18 ^ uVar20) & uVar27 ^ uVar18;
  uVar15 = ((((uVar35 * 0x200 ^ uVar27) >> 4 | uVar15 << 0x1c) ^ uVar27) >> 0xe | uVar32 << 0x12) ^
           uVar27 * 0x800000;
  uVar28 = uVar15 + uVar36;
  uVar29 = uVar28 + local_118;
  uVar21 = uVar29 + uVar23;
  uVar26 = uVar21 + 0xb605d019;
  iVar25 = (uVar32 >> 0xe ^ ((uVar33 >> 9 ^ uVar35) << 0x17 | (uVar33 << 0x17 ^ uVar27) >> 9)) +
           ((uVar19 ^ uVar24) & uVar35 ^ uVar19) + (uint)CARRY4(uVar15,uVar36) + local_114 +
           (uint)CARRY4(uVar28,local_118) + uVar17 + (uint)CARRY4(uVar29,uVar23) + 0x59f111f1 +
           (uint)(0x49fa2fe6 < uVar21);
  uVar23 = uVar30 + uVar26;
  uVar17 = uVar16 + iVar25 + (uint)CARRY4(uVar30,uVar26);
  uVar16 = uVar37 >> 5 ^ uVar37;
  uVar15 = uVar39 * 0x40 ^ uVar39;
  uVar28 = uVar15 << 5 ^ uVar39;
  uVar29 = ((uVar16 << 0x1a ^ uVar39) >> 0x1c | (uVar16 >> 6 ^ uVar37) << 4) ^ uVar28 << 0x19;
  uVar16 = (uVar34 ^ uVar39) & uVar38 ^ uVar34 & uVar39;
  uVar21 = uVar29 + uVar16;
  uVar36 = uVar21 + uVar26;
  uVar26 = (uVar37 >> 0x1c ^
           ((((uVar39 >> 0x1a ^ uVar37) << 5 | uVar15 >> 0x1b) ^ uVar37) << 0x19 | uVar28 >> 7)) +
           ((uVar31 ^ uVar37) & uVar22 ^ uVar31 & uVar37) + (uint)CARRY4(uVar29,uVar16) + iVar25 +
           (uint)CARRY4(uVar21,uVar26);
  uVar15 = param_2[0xc];
  uVar28 = param_2[0xd];
  local_10c = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  local_110 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  uVar15 = uVar17 >> 0x17 ^ uVar17;
  uVar32 = uVar15 >> 4 ^ uVar17;
  uVar33 = uVar23 * 0x10 ^ uVar23;
  uVar30 = (uVar27 ^ uVar20) & uVar23 ^ uVar20;
  uVar15 = ((((uVar17 * 0x200 ^ uVar23) >> 4 | uVar15 << 0x1c) ^ uVar23) >> 0xe | uVar32 << 0x12) ^
           uVar23 * 0x800000;
  uVar28 = uVar15 + uVar30;
  uVar16 = uVar28 + local_110;
  uVar29 = uVar16 + uVar18;
  uVar21 = uVar29 + 0xaf194f9b;
  iVar25 = (uVar32 >> 0xe ^ ((uVar33 >> 9 ^ uVar17) << 0x17 | (uVar33 << 0x17 ^ uVar23) >> 9)) +
           ((uVar35 ^ uVar24) & uVar17 ^ uVar24) + (uint)CARRY4(uVar15,uVar30) + local_10c +
           (uint)CARRY4(uVar28,local_110) + uVar19 + (uint)CARRY4(uVar16,uVar18) + -0x6dc07d5c +
           (uint)(0x50e6b064 < uVar29);
  uVar18 = uVar38 + uVar21;
  uVar19 = uVar22 + iVar25 + (uint)CARRY4(uVar38,uVar21);
  uVar15 = uVar26 >> 5 ^ uVar26;
  uVar22 = uVar36 * 0x40 ^ uVar36;
  uVar32 = uVar22 << 5 ^ uVar36;
  uVar15 = ((uVar15 << 0x1a ^ uVar36) >> 0x1c | (uVar15 >> 6 ^ uVar26) << 4) ^ uVar32 << 0x19;
  uVar33 = (uVar39 ^ uVar36) & uVar34 ^ uVar39 & uVar36;
  uVar29 = uVar15 + uVar33;
  uVar28 = param_2[0xe];
  uVar16 = param_2[0xf];
  uVar38 = uVar29 + uVar21;
  uVar32 = (uVar26 >> 0x1c ^
           ((((uVar36 >> 0x1a ^ uVar26) << 5 | uVar22 >> 0x1b) ^ uVar26) << 0x19 | uVar32 >> 7)) +
           ((uVar37 ^ uVar26) & uVar31 ^ uVar37 & uVar26) + (uint)CARRY4(uVar15,uVar33) + iVar25 +
           (uint)CARRY4(uVar29,uVar21);
  local_104 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  local_108 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
  uVar15 = uVar19 >> 0x17 ^ uVar19;
  uVar22 = uVar15 >> 4 ^ uVar19;
  uVar33 = uVar18 * 0x10 ^ uVar18;
  uVar30 = (uVar27 ^ uVar23) & uVar18 ^ uVar27;
  uVar15 = ((((uVar19 * 0x200 ^ uVar18) >> 4 | uVar15 << 0x1c) ^ uVar18) >> 0xe | uVar22 << 0x12) ^
           uVar18 * 0x800000;
  uVar28 = uVar15 + uVar30;
  uVar16 = uVar28 + local_108;
  uVar29 = uVar16 + uVar20;
  uVar21 = uVar29 + 0xda6d8118;
  iVar25 = (uVar22 >> 0xe ^ ((uVar33 >> 9 ^ uVar19) << 0x17 | (uVar33 << 0x17 ^ uVar18) >> 9)) +
           ((uVar35 ^ uVar17) & uVar19 ^ uVar35) + (uint)CARRY4(uVar15,uVar30) + local_104 +
           (uint)CARRY4(uVar28,local_108) + uVar24 + (uint)CARRY4(uVar16,uVar20) + -0x54e3a12b +
           (uint)(0x25927ee7 < uVar29);
  uVar20 = uVar34 + uVar21;
  uVar24 = uVar31 + iVar25 + (uint)CARRY4(uVar34,uVar21);
  uVar15 = uVar32 >> 5 ^ uVar32;
  uVar16 = uVar38 * 0x40 ^ uVar38;
  uVar29 = uVar16 << 5 ^ uVar38;
  uVar15 = ((uVar15 << 0x1a ^ uVar38) >> 0x1c | (uVar15 >> 6 ^ uVar32) << 4) ^ uVar29 << 0x19;
  uVar31 = (uVar36 ^ uVar38) & uVar39 ^ uVar36 & uVar38;
  uVar28 = uVar15 + uVar31;
  uVar22 = uVar28 + uVar21;
  uVar16 = (uVar32 >> 0x1c ^
           ((((uVar38 >> 0x1a ^ uVar32) << 5 | uVar16 >> 0x1b) ^ uVar32) << 0x19 | uVar29 >> 7)) +
           ((uVar26 ^ uVar32) & uVar37 ^ uVar26 & uVar32) + (uint)CARRY4(uVar15,uVar31) + iVar25 +
           (uint)CARRY4(uVar28,uVar21);
  uVar15 = param_2[0x10];
  uVar28 = param_2[0x11];
  local_fc = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  local_100 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  uVar15 = uVar24 >> 0x17 ^ uVar24;
  uVar30 = uVar15 >> 4 ^ uVar24;
  uVar33 = uVar20 * 0x10 ^ uVar20;
  uVar15 = ((((uVar24 * 0x200 ^ uVar20) >> 4 | uVar15 << 0x1c) ^ uVar20) >> 0xe | uVar30 << 0x12) ^
           uVar20 * 0x800000;
  uVar34 = (uVar23 ^ uVar18) & uVar20 ^ uVar23;
  uVar28 = uVar15 + uVar34;
  uVar29 = uVar28 + local_100;
  uVar21 = uVar29 + uVar27;
  uVar31 = uVar21 + 0xa3030242;
  iVar25 = (uVar30 >> 0xe ^ ((uVar33 >> 9 ^ uVar24) << 0x17 | (uVar33 << 0x17 ^ uVar20) >> 9)) +
           ((uVar17 ^ uVar19) & uVar24 ^ uVar17) + (uint)CARRY4(uVar15,uVar34) + local_fc +
           (uint)CARRY4(uVar28,local_100) + uVar35 + (uint)CARRY4(uVar29,uVar27) + -0x27f85568 +
           (uint)(0x5cfcfdbd < uVar21);
  uVar27 = uVar39 + uVar31;
  uVar35 = uVar37 + iVar25 + (uint)CARRY4(uVar39,uVar31);
  uVar37 = uVar22 * 0x40 ^ uVar22;
  uVar15 = uVar16 >> 5 ^ uVar16;
  uVar29 = uVar37 << 5 ^ uVar22;
  uVar33 = ((uVar15 << 0x1a ^ uVar22) >> 0x1c | (uVar15 >> 6 ^ uVar16) << 4) ^ uVar29 << 0x19;
  uVar21 = (uVar38 ^ uVar22) & uVar36 ^ uVar38 & uVar22;
  uVar30 = uVar33 + uVar21;
  uVar15 = param_2[0x12];
  uVar28 = param_2[0x13];
  uVar34 = uVar30 + uVar31;
  local_f8 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  uVar39 = (uVar16 >> 0x1c ^
           ((((uVar22 >> 0x1a ^ uVar16) << 5 | uVar37 >> 0x1b) ^ uVar16) << 0x19 | uVar29 >> 7)) +
           ((uVar32 ^ uVar16) & uVar26 ^ uVar32 & uVar16) + (uint)CARRY4(uVar33,uVar21) + iVar25 +
           (uint)CARRY4(uVar30,uVar31);
  local_f4 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  uVar15 = uVar35 >> 0x17 ^ uVar35;
  uVar33 = uVar15 >> 4 ^ uVar35;
  uVar30 = uVar27 * 0x10 ^ uVar27;
  uVar31 = (uVar18 ^ uVar20) & uVar27 ^ uVar18;
  uVar15 = ((((uVar35 * 0x200 ^ uVar27) >> 4 | uVar15 << 0x1c) ^ uVar27) >> 0xe | uVar33 << 0x12) ^
           uVar27 * 0x800000;
  uVar28 = uVar15 + uVar31;
  uVar37 = uVar28 + local_f8;
  uVar29 = uVar37 + uVar23;
  uVar21 = uVar29 + 0x45706fbe;
  iVar25 = (uVar33 >> 0xe ^ ((uVar30 >> 9 ^ uVar35) << 0x17 | (uVar30 << 0x17 ^ uVar27) >> 9)) +
           ((uVar19 ^ uVar24) & uVar35 ^ uVar19) + (uint)CARRY4(uVar15,uVar31) + local_f4 +
           (uint)CARRY4(uVar28,local_f8) + uVar17 + (uint)CARRY4(uVar37,uVar23) + 0x12835b01 +
           (uint)(0xba8f9041 < uVar29);
  uVar23 = uVar36 + uVar21;
  uVar17 = uVar26 + iVar25 + (uint)CARRY4(uVar36,uVar21);
  uVar15 = uVar39 >> 5 ^ uVar39;
  uVar28 = uVar34 * 0x40 ^ uVar34;
  uVar37 = uVar28 << 5 ^ uVar34;
  uVar29 = ((uVar15 << 0x1a ^ uVar34) >> 0x1c | (uVar15 >> 6 ^ uVar39) << 4) ^ uVar37 << 0x19;
  uVar15 = (uVar34 ^ uVar22) & uVar38 ^ uVar34 & uVar22;
  uVar26 = uVar29 + uVar15;
  uVar33 = uVar26 + uVar21;
  uVar26 = (uVar39 >> 0x1c ^
           ((((uVar34 >> 0x1a ^ uVar39) << 5 | uVar28 >> 0x1b) ^ uVar39) << 0x19 | uVar37 >> 7)) +
           ((uVar39 ^ uVar16) & uVar32 ^ uVar39 & uVar16) + (uint)CARRY4(uVar29,uVar15) + iVar25 +
           (uint)CARRY4(uVar26,uVar21);
  uVar15 = param_2[0x14];
  uVar28 = param_2[0x15];
  local_ec = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  local_f0 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  uVar15 = uVar17 >> 0x17 ^ uVar17;
  uVar31 = uVar15 >> 4 ^ uVar17;
  uVar30 = uVar23 * 0x10 ^ uVar23;
  uVar36 = (uVar20 ^ uVar27) & uVar23 ^ uVar20;
  uVar15 = ((((uVar17 * 0x200 ^ uVar23) >> 4 | uVar15 << 0x1c) ^ uVar23) >> 0xe | uVar31 << 0x12) ^
           uVar23 * 0x800000;
  uVar28 = uVar15 + uVar36;
  uVar37 = uVar28 + local_f0;
  uVar29 = uVar37 + uVar18;
  uVar21 = uVar29 + 0x4ee4b28c;
  iVar25 = (uVar31 >> 0xe ^ ((uVar30 >> 9 ^ uVar17) << 0x17 | (uVar30 << 0x17 ^ uVar23) >> 9)) +
           ((uVar24 ^ uVar35) & uVar17 ^ uVar24) + (uint)CARRY4(uVar15,uVar36) + local_ec +
           (uint)CARRY4(uVar28,local_f0) + uVar19 + (uint)CARRY4(uVar37,uVar18) + 0x243185be +
           (uint)(0xb11b4d73 < uVar29);
  uVar18 = uVar38 + uVar21;
  uVar19 = uVar32 + iVar25 + (uint)CARRY4(uVar38,uVar21);
  uVar15 = uVar26 >> 5 ^ uVar26;
  uVar31 = uVar33 * 0x40 ^ uVar33;
  uVar32 = uVar31 << 5 ^ uVar33;
  uVar37 = ((uVar15 << 0x1a ^ uVar33) >> 0x1c | (uVar15 >> 6 ^ uVar26) << 4) ^ uVar32 << 0x19;
  uVar30 = (uVar34 ^ uVar33) & uVar22 ^ uVar34 & uVar33;
  uVar29 = uVar37 + uVar30;
  uVar15 = param_2[0x16];
  uVar28 = param_2[0x17];
  uVar36 = uVar29 + uVar21;
  local_e4 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  uVar31 = (uVar26 >> 0x1c ^
           ((((uVar33 >> 0x1a ^ uVar26) << 5 | uVar31 >> 0x1b) ^ uVar26) << 0x19 | uVar32 >> 7)) +
           ((uVar39 ^ uVar26) & uVar16 ^ uVar39 & uVar26) + (uint)CARRY4(uVar37,uVar30) + iVar25 +
           (uint)CARRY4(uVar29,uVar21);
  local_e8 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  uVar15 = uVar19 >> 0x17 ^ uVar19;
  uVar32 = uVar15 >> 4 ^ uVar19;
  uVar30 = uVar18 * 0x10 ^ uVar18;
  uVar38 = (uVar27 ^ uVar23) & uVar18 ^ uVar27;
  uVar15 = ((((uVar19 * 0x200 ^ uVar18) >> 4 | uVar15 << 0x1c) ^ uVar18) >> 0xe | uVar32 << 0x12) ^
           uVar18 * 0x800000;
  uVar28 = uVar15 + uVar38;
  uVar37 = uVar28 + local_e8;
  uVar29 = uVar37 + uVar20;
  uVar21 = uVar29 + 0xd5ffb4e2;
  iVar25 = (uVar32 >> 0xe ^ ((uVar30 >> 9 ^ uVar19) << 0x17 | (uVar30 << 0x17 ^ uVar18) >> 9)) +
           ((uVar35 ^ uVar17) & uVar19 ^ uVar35) + (uint)CARRY4(uVar15,uVar38) + local_e4 +
           (uint)CARRY4(uVar28,local_e8) + uVar24 + (uint)CARRY4(uVar37,uVar20) + 0x550c7dc3 +
           (uint)(0x2a004b1d < uVar29);
  uVar20 = uVar22 + uVar21;
  uVar24 = uVar16 + iVar25 + (uint)CARRY4(uVar22,uVar21);
  uVar15 = uVar31 >> 5 ^ uVar31;
  uVar29 = uVar36 * 0x40 ^ uVar36;
  uVar22 = uVar29 << 5 ^ uVar36;
  uVar15 = ((uVar15 << 0x1a ^ uVar36) >> 0x1c | (uVar15 >> 6 ^ uVar31) << 4) ^ uVar22 << 0x19;
  uVar32 = (uVar33 ^ uVar36) & uVar34 ^ uVar33 & uVar36;
  uVar37 = uVar15 + uVar32;
  uVar28 = param_2[0x18];
  uVar16 = param_2[0x19];
  uVar30 = uVar37 + uVar21;
  local_e0 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
  uVar16 = (uVar31 >> 0x1c ^
           ((((uVar36 >> 0x1a ^ uVar31) << 5 | uVar29 >> 0x1b) ^ uVar31) << 0x19 | uVar22 >> 7)) +
           ((uVar26 ^ uVar31) & uVar39 ^ uVar26 & uVar31) + (uint)CARRY4(uVar15,uVar32) + iVar25 +
           (uint)CARRY4(uVar37,uVar21);
  local_dc = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  uVar15 = uVar24 >> 0x17 ^ uVar24;
  uVar22 = uVar15 >> 4 ^ uVar24;
  uVar32 = uVar20 * 0x10 ^ uVar20;
  uVar15 = ((((uVar24 * 0x200 ^ uVar20) >> 4 | uVar15 << 0x1c) ^ uVar20) >> 0xe | uVar22 << 0x12) ^
           uVar20 * 0x800000;
  uVar38 = (uVar23 ^ uVar18) & uVar20 ^ uVar23;
  uVar28 = uVar15 + uVar38;
  uVar37 = uVar28 + local_e0;
  uVar29 = uVar37 + uVar27;
  uVar21 = uVar29 + 0xf27b896f;
  iVar25 = (uVar22 >> 0xe ^ ((uVar32 >> 9 ^ uVar24) << 0x17 | (uVar32 << 0x17 ^ uVar20) >> 9)) +
           ((uVar17 ^ uVar19) & uVar24 ^ uVar17) + (uint)CARRY4(uVar15,uVar38) + local_dc +
           (uint)CARRY4(uVar28,local_e0) + uVar35 + (uint)CARRY4(uVar37,uVar27) + 0x72be5d74 +
           (uint)(0xd847690 < uVar29);
  local_168 = uVar34 + uVar21;
  local_164 = uVar39 + iVar25 + (uint)CARRY4(uVar34,uVar21);
  uVar27 = uVar16 >> 5 ^ uVar16;
  uVar37 = uVar30 * 0x40 ^ uVar30;
  uVar29 = uVar37 << 5 ^ uVar30;
  uVar27 = ((uVar27 << 0x1a ^ uVar30) >> 0x1c | (uVar27 >> 6 ^ uVar16) << 4) ^ uVar29 << 0x19;
  uVar22 = (uVar36 ^ uVar30) & uVar33 ^ uVar36 & uVar30;
  uVar28 = uVar27 + uVar22;
  uVar35 = param_2[0x1a];
  uVar15 = param_2[0x1b];
  local_150 = uVar28 + uVar21;
  local_14c = (uVar16 >> 0x1c ^
              ((((uVar30 >> 0x1a ^ uVar16) << 5 | uVar37 >> 0x1b) ^ uVar16) << 0x19 | uVar29 >> 7))
              + ((uVar31 ^ uVar16) & uVar26 ^ uVar31 & uVar16) + (uint)CARRY4(uVar27,uVar22) +
              iVar25 + (uint)CARRY4(uVar28,uVar21);
  local_d8 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  local_d4 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18;
  uVar27 = local_164 >> 0x17 ^ local_164;
  uVar29 = uVar27 >> 4 ^ local_164;
  uVar21 = local_168 * 0x10 ^ local_168;
  uVar22 = (uVar18 ^ uVar20) & local_168 ^ uVar18;
  uVar27 = ((((local_164 * 0x200 ^ local_168) >> 4 | uVar27 << 0x1c) ^ local_168) >> 0xe |
           uVar29 << 0x12) ^ local_168 * 0x800000;
  uVar35 = uVar27 + uVar22;
  uVar15 = uVar35 + local_d8;
  uVar28 = uVar15 + uVar23;
  uVar37 = uVar28 + 0x3b1696b1;
  iVar25 = (uVar29 >> 0xe ^ ((uVar21 >> 9 ^ local_164) << 0x17 | (uVar21 << 0x17 ^ local_168) >> 9))
           + ((uVar19 ^ uVar24) & local_164 ^ uVar19) + (uint)CARRY4(uVar27,uVar22) + local_d4 +
           (uint)CARRY4(uVar35,local_d8) + uVar17 + (uint)CARRY4(uVar15,uVar23) + -0x7f214e02 +
           (uint)(0xc4e9694e < uVar28);
  local_170 = uVar33 + uVar37;
  local_16c = uVar26 + iVar25 + (uint)CARRY4(uVar33,uVar37);
  uVar23 = local_14c >> 5 ^ local_14c;
  uVar27 = local_150 * 0x40 ^ local_150;
  uVar35 = uVar27 << 5 ^ local_150;
  uVar23 = ((uVar23 << 0x1a ^ local_150) >> 0x1c | (uVar23 >> 6 ^ local_14c) << 4) ^ uVar35 << 0x19;
  uVar15 = (uVar30 ^ local_150) & uVar36 ^ uVar30 & local_150;
  uVar17 = uVar23 + uVar15;
  local_180 = uVar17 + uVar37;
  local_17c = (local_14c >> 0x1c ^
              ((((local_150 >> 0x1a ^ local_14c) << 5 | uVar27 >> 0x1b) ^ local_14c) << 0x19 |
              uVar35 >> 7)) + ((uVar16 ^ local_14c) & uVar31 ^ uVar16 & local_14c) +
              (uint)CARRY4(uVar23,uVar15) + iVar25 + (uint)CARRY4(uVar17,uVar37);
  uVar23 = param_2[0x1c];
  uVar17 = param_2[0x1d];
  local_cc = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
  local_d0 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
  uVar23 = local_16c >> 0x17 ^ local_16c;
  uVar37 = uVar23 >> 4 ^ local_16c;
  uVar28 = local_170 * 0x10 ^ local_170;
  uVar29 = (local_168 ^ uVar20) & local_170 ^ uVar20;
  uVar23 = ((((local_16c * 0x200 ^ local_170) >> 4 | uVar23 << 0x1c) ^ local_170) >> 0xe |
           uVar37 << 0x12) ^ local_170 * 0x800000;
  uVar17 = uVar23 + uVar29;
  uVar27 = uVar17 + local_d0;
  uVar35 = uVar27 + uVar18;
  uVar15 = uVar35 + 0x25c71235;
  iVar25 = (uVar37 >> 0xe ^ ((uVar28 >> 9 ^ local_16c) << 0x17 | (uVar28 << 0x17 ^ local_170) >> 9))
           + ((local_164 ^ uVar24) & local_16c ^ uVar24) + (uint)CARRY4(uVar23,uVar29) + local_cc +
           (uint)CARRY4(uVar17,local_d0) + uVar19 + (uint)CARRY4(uVar27,uVar18) + -0x6423f959 +
           (uint)(0xda38edca < uVar35);
  local_178 = uVar36 + uVar15;
  local_174 = uVar31 + iVar25 + (uint)CARRY4(uVar36,uVar15);
  uVar23 = local_17c >> 5 ^ local_17c;
  uVar18 = local_180 * 0x40 ^ local_180;
  uVar19 = uVar18 << 5 ^ local_180;
  uVar35 = ((uVar23 << 0x1a ^ local_180) >> 0x1c | (uVar23 >> 6 ^ local_17c) << 4) ^ uVar19 << 0x19;
  uVar27 = (local_150 ^ local_180) & uVar30 ^ local_150 & local_180;
  uVar28 = uVar35 + uVar27;
  uVar23 = param_2[0x1e];
  uVar17 = param_2[0x1f];
  local_158 = uVar28 + uVar15;
  uVar18 = (local_17c >> 0x1c ^
           ((((local_180 >> 0x1a ^ local_17c) << 5 | uVar18 >> 0x1b) ^ local_17c) << 0x19 |
           uVar19 >> 7)) + ((local_14c ^ local_17c) & uVar16 ^ local_14c & local_17c) +
           (uint)CARRY4(uVar35,uVar27) + iVar25 + (uint)CARRY4(uVar28,uVar15);
  local_c4 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
  local_c8 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
  uVar23 = local_174 >> 0x17 ^ local_174;
  uVar15 = uVar23 >> 4 ^ local_174;
  uVar28 = local_178 * 0x10 ^ local_178;
  uVar37 = (local_168 ^ local_170) & local_178 ^ local_168;
  uVar23 = ((((local_174 * 0x200 ^ local_178) >> 4 | uVar23 << 0x1c) ^ local_178) >> 0xe |
           uVar15 << 0x12) ^ local_178 * 0x800000;
  uVar17 = uVar23 + uVar37;
  uVar19 = uVar17 + local_c8;
  uVar27 = uVar19 + uVar20;
  uVar35 = uVar27 + 0xcf692694;
  iVar25 = (uVar15 >> 0xe ^ ((uVar28 >> 9 ^ local_174) << 0x17 | (uVar28 << 0x17 ^ local_178) >> 9))
           + ((local_164 ^ local_16c) & local_174 ^ local_164) + (uint)CARRY4(uVar23,uVar37) +
           local_c4 + (uint)CARRY4(uVar17,local_c8) + uVar24 + (uint)CARRY4(uVar19,uVar20) +
           -0x3e640e8c + (uint)(0x3096d96b < uVar27);
  local_160 = uVar30 + uVar35;
  local_15c = uVar16 + iVar25 + (uint)CARRY4(uVar30,uVar35);
  uVar23 = uVar18 >> 5 ^ uVar18;
  uVar19 = local_158 * 0x40 ^ local_158;
  uVar20 = uVar19 << 5 ^ local_158;
  uVar23 = ((uVar23 << 0x1a ^ local_158) >> 0x1c | (uVar23 >> 6 ^ uVar18) << 4) ^ uVar20 << 0x19;
  uVar24 = (local_180 ^ local_158) & local_150 ^ local_180 & local_158;
  uVar17 = uVar23 + uVar24;
  local_188 = uVar17 + uVar35;
  local_148 = &DAT_10014fc8;
  local_184 = (uVar18 >> 0x1c ^
              ((((local_158 >> 0x1a ^ uVar18) << 5 | uVar19 >> 0x1b) ^ uVar18) << 0x19 | uVar20 >> 7
              )) + ((local_17c ^ uVar18) & local_14c ^ local_17c & uVar18) +
              (uint)CARRY4(uVar23,uVar24) + iVar25 + (uint)CARRY4(uVar17,uVar35);
  local_190 = 4;
  do {
    uVar27 = local_cc >> 0xd ^ local_cc;
    uVar19 = ((((local_cc >> 10 ^ local_d0) >> 0xd | local_cc << 0x13) ^ local_d0) >> 6 |
             uVar27 << 0x1a) ^ local_d0 << 3;
    uVar23 = local_134 >> 1 ^ local_134;
    uVar17 = uVar23 >> 6 ^ local_134;
    uVar23 = ((((local_138 >> 1 | local_134 << 0x1f) ^ local_138) >> 6 | uVar23 << 0x1a) ^ local_138
             ) >> 1 | uVar17 << 0x1f;
    uVar20 = uVar19 + uVar23;
    uVar24 = uVar20 + local_f8;
    bVar40 = CARRY4(local_140,uVar24);
    local_140 = local_140 + uVar24;
    local_13c = local_13c +
                (uVar27 >> 6 ^ ((local_d0 << 10 ^ local_cc) << 3 | local_d0 >> 0x1d)) +
                (uVar17 >> 1 ^ (local_138 << 7 ^ local_138) << 0x18) + (uint)CARRY4(uVar19,uVar23) +
                local_f4 + (uint)CARRY4(uVar20,local_f8) + (uint)bVar40;
    uVar35 = local_160 << 4 ^ local_160;
    uVar23 = local_15c >> 0x17 ^ local_15c;
    uVar27 = uVar23 >> 4 ^ local_15c;
    uVar23 = ((((local_15c << 9 ^ local_160) >> 4 | uVar23 << 0x1c) ^ local_160) >> 0xe |
             uVar27 << 0x12) ^ local_160 << 0x17;
    uVar15 = (local_170 ^ local_178) & local_160 ^ local_170;
    uVar17 = uVar23 + uVar15;
    uVar19 = uVar17 + local_148[-4];
    uVar20 = uVar19 + local_140;
    uVar24 = uVar20 + local_168;
    iVar25 = (uVar27 >> 0xe ^
             ((uVar35 >> 9 ^ local_15c) << 0x17 | (uVar35 << 0x17 ^ local_160) >> 9)) +
             ((local_16c ^ local_174) & local_15c ^ local_16c) + (uint)CARRY4(uVar23,uVar15) +
             local_148[-3] + (uint)CARRY4(uVar17,local_148[-4]) + local_13c +
             (uint)CARRY4(uVar19,local_140) + local_164 + (uint)CARRY4(uVar20,local_168);
    uVar23 = local_150 + uVar24;
    uVar17 = local_14c + iVar25 + (uint)CARRY4(local_150,uVar24);
    uVar27 = local_188 << 6 ^ local_188;
    uVar19 = local_184 >> 5 ^ local_184;
    uVar35 = uVar27 << 5 ^ local_188;
    uVar19 = ((uVar19 << 0x1a ^ local_188) >> 0x1c | (uVar19 >> 6 ^ local_184) << 4) ^
             uVar35 << 0x19;
    uVar15 = (local_158 ^ local_188) & local_180 ^ local_158 & local_188;
    uVar20 = uVar19 + uVar15;
    uVar21 = uVar20 + uVar24;
    uVar33 = (local_184 >> 0x1c ^
             ((((local_188 >> 0x1a ^ local_184) << 5 | uVar27 >> 0x1b) ^ local_184) << 0x19 |
             uVar35 >> 7)) + ((uVar18 ^ local_184) & local_17c ^ uVar18 & local_184) +
             (uint)CARRY4(uVar19,uVar15) + iVar25 + (uint)CARRY4(uVar20,uVar24);
    uVar15 = local_c4 >> 0xd ^ local_c4;
    uVar24 = ((((local_c4 >> 10 ^ local_c8) >> 0xd | local_c4 << 0x13) ^ local_c8) >> 6 |
             uVar15 << 0x1a) ^ local_c8 << 3;
    uVar19 = local_12c >> 1 ^ local_12c;
    uVar20 = uVar19 >> 6 ^ local_12c;
    uVar19 = ((((local_130 >> 1 | local_12c << 0x1f) ^ local_130) >> 6 | uVar19 << 0x1a) ^ local_130
             ) >> 1 | uVar20 << 0x1f;
    uVar27 = uVar24 + uVar19;
    uVar35 = uVar27 + local_f0;
    bVar40 = CARRY4(local_138,uVar35);
    local_138 = local_138 + uVar35;
    local_134 = local_134 +
                (uVar15 >> 6 ^ ((local_c8 << 10 ^ local_c4) << 3 | local_c8 >> 0x1d)) +
                (uVar20 >> 1 ^ (local_130 << 7 ^ local_130) << 0x18) + (uint)CARRY4(uVar24,uVar19) +
                local_ec + (uint)CARRY4(uVar27,local_f0) + (uint)bVar40;
    uVar28 = uVar23 * 0x10 ^ uVar23;
    uVar19 = uVar17 >> 0x17 ^ uVar17;
    uVar15 = uVar19 >> 4 ^ uVar17;
    uVar19 = ((((uVar17 * 0x200 ^ uVar23) >> 4 | uVar19 << 0x1c) ^ uVar23) >> 0xe | uVar15 << 0x12)
             ^ uVar23 * 0x800000;
    uVar16 = (local_178 ^ local_160) & uVar23 ^ local_178;
    uVar20 = uVar19 + uVar16;
    uVar24 = uVar20 + local_148[-2];
    uVar27 = uVar24 + local_138;
    uVar35 = uVar27 + local_170;
    iVar25 = (uVar15 >> 0xe ^ ((uVar28 >> 9 ^ uVar17) << 0x17 | (uVar28 << 0x17 ^ uVar23) >> 9)) +
             ((local_174 ^ local_15c) & uVar17 ^ local_174) + (uint)CARRY4(uVar19,uVar16) +
             local_148[-1] + (uint)CARRY4(uVar20,local_148[-2]) + local_134 +
             (uint)CARRY4(uVar24,local_138) + local_16c + (uint)CARRY4(uVar27,local_170);
    uVar19 = local_180 + uVar35;
    uVar20 = local_17c + iVar25 + (uint)CARRY4(local_180,uVar35);
    uVar15 = uVar21 * 0x40 ^ uVar21;
    uVar28 = uVar15 << 5 ^ uVar21;
    uVar24 = uVar33 >> 5 ^ uVar33;
    uVar24 = ((uVar24 << 0x1a ^ uVar21) >> 0x1c | (uVar24 >> 6 ^ uVar33) << 4) ^ uVar28 << 0x19;
    uVar16 = (uVar21 ^ local_188) & local_158 ^ uVar21 & local_188;
    uVar27 = uVar24 + uVar16;
    uVar26 = uVar27 + uVar35;
    uVar30 = (uVar33 >> 0x1c ^
             ((((uVar21 >> 0x1a ^ uVar33) << 5 | uVar15 >> 0x1b) ^ uVar33) << 0x19 | uVar28 >> 7)) +
             ((uVar33 ^ local_184) & uVar18 ^ uVar33 & local_184) + (uint)CARRY4(uVar24,uVar16) +
             iVar25 + (uint)CARRY4(uVar27,uVar35);
    uVar24 = local_124 >> 1 ^ local_124;
    uVar28 = uVar24 >> 6 ^ local_124;
    uVar24 = ((((local_128 >> 1 | local_124 << 0x1f) ^ local_128) >> 6 | uVar24 << 0x1a) ^ local_128
             ) >> 1 | uVar28 << 0x1f;
    uVar15 = local_13c >> 0xd ^ local_13c;
    uVar16 = ((((local_13c >> 10 ^ local_140) >> 0xd | local_13c * 0x80000) ^ local_140) >> 6 |
             uVar15 << 0x1a) ^ local_140 * 8;
    uVar27 = uVar24 + uVar16;
    uVar35 = uVar27 + local_e8;
    bVar40 = CARRY4(local_130,uVar35);
    local_130 = local_130 + uVar35;
    local_12c = local_12c +
                (uVar28 >> 1 ^ (local_128 << 7 ^ local_128) << 0x18) +
                (uVar15 >> 6 ^ ((local_140 * 0x400 ^ local_13c) << 3 | local_140 >> 0x1d)) +
                (uint)CARRY4(uVar24,uVar16) + local_e4 + (uint)CARRY4(uVar27,local_e8) +
                (uint)bVar40;
    uVar37 = uVar19 * 0x10 ^ uVar19;
    uVar24 = uVar20 >> 0x17 ^ uVar20;
    uVar16 = uVar24 >> 4 ^ uVar20;
    uVar24 = ((((uVar20 * 0x200 ^ uVar19) >> 4 | uVar24 << 0x1c) ^ uVar19) >> 0xe | uVar16 << 0x12)
             ^ uVar19 * 0x800000;
    uVar29 = (local_160 ^ uVar23) & uVar19 ^ local_160;
    uVar27 = uVar24 + uVar29;
    uVar35 = uVar27 + local_130;
    uVar15 = uVar35 + local_178;
    uVar28 = uVar15 + *local_148;
    iVar25 = (uVar16 >> 0xe ^ ((uVar37 >> 9 ^ uVar20) << 0x17 | (uVar37 << 0x17 ^ uVar19) >> 9)) +
             ((local_15c ^ uVar17) & uVar20 ^ local_15c) + (uint)CARRY4(uVar24,uVar29) + local_12c +
             (uint)CARRY4(uVar27,local_130) + local_174 + (uint)CARRY4(uVar35,local_178) +
             local_148[1] + (uint)CARRY4(uVar15,*local_148);
    uVar24 = local_158 + uVar28;
    uVar18 = uVar18 + iVar25 + (uint)CARRY4(local_158,uVar28);
    uVar27 = uVar30 >> 5 ^ uVar30;
    uVar15 = uVar26 * 0x40 ^ uVar26;
    uVar16 = uVar15 << 5 ^ uVar26;
    uVar27 = ((uVar27 << 0x1a ^ uVar26) >> 0x1c | (uVar27 >> 6 ^ uVar30) << 4) ^ uVar16 << 0x19;
    uVar37 = (uVar21 ^ uVar26) & local_188 ^ uVar21 & uVar26;
    uVar35 = uVar27 + uVar37;
    uVar31 = uVar35 + uVar28;
    uVar34 = (uVar30 >> 0x1c ^
             ((((uVar26 >> 0x1a ^ uVar30) << 5 | uVar15 >> 0x1b) ^ uVar30) << 0x19 | uVar16 >> 7)) +
             ((uVar33 ^ uVar30) & local_184 ^ uVar33 & uVar30) + (uint)CARRY4(uVar27,uVar37) +
             iVar25 + (uint)CARRY4(uVar35,uVar28);
    uVar27 = local_11c >> 1 ^ local_11c;
    uVar16 = uVar27 >> 6 ^ local_11c;
    uVar27 = ((((local_120 >> 1 | local_11c << 0x1f) ^ local_120) >> 6 | uVar27 << 0x1a) ^ local_120
             ) >> 1 | uVar16 << 0x1f;
    uVar28 = local_134 >> 0xd ^ local_134;
    uVar37 = ((((local_134 >> 10 ^ local_138) >> 0xd | local_134 * 0x80000) ^ local_138) >> 6 |
             uVar28 << 0x1a) ^ local_138 * 8;
    uVar35 = uVar27 + uVar37;
    uVar15 = uVar35 + local_e0;
    bVar40 = CARRY4(local_128,uVar15);
    local_128 = local_128 + uVar15;
    local_124 = local_124 +
                (uVar16 >> 1 ^ (local_120 << 7 ^ local_120) << 0x18) +
                (uVar28 >> 6 ^ ((local_138 * 0x400 ^ local_134) << 3 | local_138 >> 0x1d)) +
                (uint)CARRY4(uVar27,uVar37) + local_dc + (uint)CARRY4(uVar35,local_e0) +
                (uint)bVar40;
    uVar27 = uVar18 >> 0x17 ^ uVar18;
    uVar29 = uVar24 * 0x10 ^ uVar24;
    uVar37 = uVar27 >> 4 ^ uVar18;
    uVar27 = ((((uVar18 * 0x200 ^ uVar24) >> 4 | uVar27 << 0x1c) ^ uVar24) >> 0xe | uVar37 << 0x12)
             ^ uVar24 * 0x800000;
    uVar22 = (uVar23 ^ uVar19) & uVar24 ^ uVar23;
    uVar35 = uVar27 + uVar22;
    uVar15 = uVar35 + local_148[2];
    uVar28 = uVar15 + local_128;
    uVar16 = uVar28 + local_160;
    iVar25 = (uVar37 >> 0xe ^ ((uVar29 >> 9 ^ uVar18) << 0x17 | (uVar29 << 0x17 ^ uVar24) >> 9)) +
             ((uVar17 ^ uVar20) & uVar18 ^ uVar17) + (uint)CARRY4(uVar27,uVar22) + local_148[3] +
             (uint)CARRY4(uVar35,local_148[2]) + local_124 + (uint)CARRY4(uVar15,local_128) +
             local_15c + (uint)CARRY4(uVar28,local_160);
    uVar27 = local_188 + uVar16;
    uVar35 = local_184 + iVar25 + (uint)CARRY4(local_188,uVar16);
    uVar37 = uVar31 * 0x40 ^ uVar31;
    uVar15 = uVar34 >> 5 ^ uVar34;
    uVar29 = uVar37 << 5 ^ uVar31;
    uVar15 = ((uVar15 << 0x1a ^ uVar31) >> 0x1c | (uVar15 >> 6 ^ uVar34) << 4) ^ uVar29 << 0x19;
    uVar22 = (uVar26 ^ uVar31) & uVar21 ^ uVar26 & uVar31;
    uVar28 = uVar15 + uVar22;
    uVar32 = uVar28 + uVar16;
    uVar36 = (uVar34 >> 0x1c ^
             ((((uVar31 >> 0x1a ^ uVar34) << 5 | uVar37 >> 0x1b) ^ uVar34) << 0x19 | uVar29 >> 7)) +
             ((uVar30 ^ uVar34) & uVar33 ^ uVar30 & uVar34) + (uint)CARRY4(uVar15,uVar22) + iVar25 +
             (uint)CARRY4(uVar28,uVar16);
    uVar15 = local_114 >> 1 ^ local_114;
    uVar29 = uVar15 >> 6 ^ local_114;
    uVar15 = ((((local_118 >> 1 | local_114 << 0x1f) ^ local_118) >> 6 | uVar15 << 0x1a) ^ local_118
             ) >> 1 | uVar29 << 0x1f;
    uVar37 = local_12c >> 0xd ^ local_12c;
    uVar22 = ((((local_12c >> 10 ^ local_130) >> 0xd | local_12c * 0x80000) ^ local_130) >> 6 |
             uVar37 << 0x1a) ^ local_130 * 8;
    uVar28 = uVar15 + uVar22;
    uVar16 = uVar28 + local_d8;
    bVar40 = CARRY4(local_120,uVar16);
    local_120 = local_120 + uVar16;
    local_11c = local_11c +
                (uVar29 >> 1 ^ (local_118 << 7 ^ local_118) << 0x18) +
                (uVar37 >> 6 ^ ((local_130 * 0x400 ^ local_12c) << 3 | local_130 >> 0x1d)) +
                (uint)CARRY4(uVar15,uVar22) + local_d4 + (uint)CARRY4(uVar28,local_d8) +
                (uint)bVar40;
    uVar15 = uVar35 >> 0x17 ^ uVar35;
    uVar38 = uVar27 * 0x10 ^ uVar27;
    uVar22 = uVar15 >> 4 ^ uVar35;
    uVar15 = ((((uVar35 * 0x200 ^ uVar27) >> 4 | uVar15 << 0x1c) ^ uVar27) >> 0xe | uVar22 << 0x12)
             ^ uVar27 * 0x800000;
    uVar39 = (uVar19 ^ uVar24) & uVar27 ^ uVar19;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[4];
    uVar37 = uVar16 + local_120;
    uVar29 = uVar37 + uVar23;
    iVar25 = (uVar22 >> 0xe ^ ((uVar38 >> 9 ^ uVar35) << 0x17 | (uVar38 << 0x17 ^ uVar27) >> 9)) +
             ((uVar20 ^ uVar18) & uVar35 ^ uVar20) + (uint)CARRY4(uVar15,uVar39) + local_148[5] +
             (uint)CARRY4(uVar28,local_148[4]) + local_11c + (uint)CARRY4(uVar16,local_120) + uVar17
             + (uint)CARRY4(uVar37,uVar23);
    uVar23 = uVar21 + uVar29;
    uVar17 = uVar33 + iVar25 + (uint)CARRY4(uVar21,uVar29);
    uVar16 = uVar32 * 0x40 ^ uVar32;
    uVar15 = uVar36 >> 5 ^ uVar36;
    uVar37 = uVar16 << 5 ^ uVar32;
    uVar15 = ((uVar15 << 0x1a ^ uVar32) >> 0x1c | (uVar15 >> 6 ^ uVar36) << 4) ^ uVar37 << 0x19;
    uVar21 = (uVar31 ^ uVar32) & uVar26 ^ uVar31 & uVar32;
    uVar28 = uVar15 + uVar21;
    uVar22 = uVar28 + uVar29;
    uVar33 = (uVar36 >> 0x1c ^
             ((((uVar32 >> 0x1a ^ uVar36) << 5 | uVar16 >> 0x1b) ^ uVar36) << 0x19 | uVar37 >> 7)) +
             ((uVar34 ^ uVar36) & uVar30 ^ uVar34 & uVar36) + (uint)CARRY4(uVar15,uVar21) + iVar25 +
             (uint)CARRY4(uVar28,uVar29);
    uVar15 = local_10c >> 1 ^ local_10c;
    uVar29 = uVar15 >> 6 ^ local_10c;
    uVar15 = ((((local_110 >> 1 | local_10c << 0x1f) ^ local_110) >> 6 | uVar15 << 0x1a) ^ local_110
             ) >> 1 | uVar29 << 0x1f;
    uVar37 = local_124 >> 0xd ^ local_124;
    uVar21 = ((((local_124 >> 10 ^ local_128) >> 0xd | local_124 * 0x80000) ^ local_128) >> 6 |
             uVar37 << 0x1a) ^ local_128 * 8;
    uVar28 = uVar15 + uVar21;
    uVar16 = uVar28 + local_d0;
    bVar40 = CARRY4(local_118,uVar16);
    local_118 = local_118 + uVar16;
    local_114 = local_114 +
                (uVar29 >> 1 ^ (local_110 << 7 ^ local_110) << 0x18) +
                (uVar37 >> 6 ^ ((local_128 * 0x400 ^ local_124) << 3 | local_128 >> 0x1d)) +
                (uint)CARRY4(uVar15,uVar21) + local_cc + (uint)CARRY4(uVar28,local_d0) +
                (uint)bVar40;
    uVar38 = uVar23 * 0x10 ^ uVar23;
    uVar15 = uVar17 >> 0x17 ^ uVar17;
    uVar21 = uVar15 >> 4 ^ uVar17;
    uVar15 = ((((uVar17 * 0x200 ^ uVar23) >> 4 | uVar15 << 0x1c) ^ uVar23) >> 0xe | uVar21 << 0x12)
             ^ uVar23 * 0x800000;
    uVar39 = (uVar24 ^ uVar27) & uVar23 ^ uVar24;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[6];
    uVar37 = uVar16 + local_118;
    uVar29 = uVar37 + uVar19;
    iVar25 = (uVar21 >> 0xe ^ ((uVar38 >> 9 ^ uVar17) << 0x17 | (uVar38 << 0x17 ^ uVar23) >> 9)) +
             ((uVar18 ^ uVar35) & uVar17 ^ uVar18) + (uint)CARRY4(uVar15,uVar39) + local_148[7] +
             (uint)CARRY4(uVar28,local_148[6]) + local_114 + (uint)CARRY4(uVar16,local_118) + uVar20
             + (uint)CARRY4(uVar37,uVar19);
    uVar19 = uVar26 + uVar29;
    uVar20 = uVar30 + iVar25 + (uint)CARRY4(uVar26,uVar29);
    uVar16 = uVar22 * 0x40 ^ uVar22;
    uVar15 = uVar33 >> 5 ^ uVar33;
    uVar37 = uVar16 << 5 ^ uVar22;
    uVar15 = ((uVar15 << 0x1a ^ uVar22) >> 0x1c | (uVar15 >> 6 ^ uVar33) << 4) ^ uVar37 << 0x19;
    uVar21 = (uVar32 ^ uVar22) & uVar31 ^ uVar32 & uVar22;
    uVar28 = uVar15 + uVar21;
    uVar26 = uVar28 + uVar29;
    uVar30 = (uVar33 >> 0x1c ^
             ((((uVar22 >> 0x1a ^ uVar33) << 5 | uVar16 >> 0x1b) ^ uVar33) << 0x19 | uVar37 >> 7)) +
             ((uVar36 ^ uVar33) & uVar34 ^ uVar36 & uVar33) + (uint)CARRY4(uVar15,uVar21) + iVar25 +
             (uint)CARRY4(uVar28,uVar29);
    uVar15 = local_104 >> 1 ^ local_104;
    uVar29 = uVar15 >> 6 ^ local_104;
    uVar15 = ((((local_108 >> 1 | local_104 << 0x1f) ^ local_108) >> 6 | uVar15 << 0x1a) ^ local_108
             ) >> 1 | uVar29 << 0x1f;
    uVar37 = local_11c >> 0xd ^ local_11c;
    uVar21 = ((((local_11c >> 10 ^ local_120) >> 0xd | local_11c * 0x80000) ^ local_120) >> 6 |
             uVar37 << 0x1a) ^ local_120 * 8;
    uVar28 = uVar15 + uVar21;
    uVar16 = uVar28 + local_c8;
    bVar40 = CARRY4(local_110,uVar16);
    local_110 = local_110 + uVar16;
    local_10c = local_10c +
                (uVar29 >> 1 ^ (local_108 << 7 ^ local_108) << 0x18) +
                (uVar37 >> 6 ^ ((local_120 * 0x400 ^ local_11c) << 3 | local_120 >> 0x1d)) +
                (uint)CARRY4(uVar15,uVar21) + local_c4 + (uint)CARRY4(uVar28,local_c8) +
                (uint)bVar40;
    uVar38 = uVar19 * 0x10 ^ uVar19;
    uVar15 = uVar20 >> 0x17 ^ uVar20;
    uVar21 = uVar15 >> 4 ^ uVar20;
    uVar15 = ((((uVar20 * 0x200 ^ uVar19) >> 4 | uVar15 << 0x1c) ^ uVar19) >> 0xe | uVar21 << 0x12)
             ^ uVar19 * 0x800000;
    uVar39 = (uVar23 ^ uVar27) & uVar19 ^ uVar27;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[8];
    uVar37 = uVar16 + local_110;
    uVar29 = uVar37 + uVar24;
    iVar25 = (uVar21 >> 0xe ^ ((uVar38 >> 9 ^ uVar20) << 0x17 | (uVar38 << 0x17 ^ uVar19) >> 9)) +
             ((uVar17 ^ uVar35) & uVar20 ^ uVar35) + (uint)CARRY4(uVar15,uVar39) + local_148[9] +
             (uint)CARRY4(uVar28,local_148[8]) + local_10c + (uint)CARRY4(uVar16,local_110) + uVar18
             + (uint)CARRY4(uVar37,uVar24);
    uVar18 = uVar31 + uVar29;
    uVar24 = uVar34 + iVar25 + (uint)CARRY4(uVar31,uVar29);
    uVar15 = uVar30 >> 5 ^ uVar30;
    uVar16 = uVar26 * 0x40 ^ uVar26;
    uVar37 = uVar16 << 5 ^ uVar26;
    uVar15 = ((uVar15 << 0x1a ^ uVar26) >> 0x1c | (uVar15 >> 6 ^ uVar30) << 4) ^ uVar37 << 0x19;
    uVar21 = (uVar22 ^ uVar26) & uVar32 ^ uVar22 & uVar26;
    uVar28 = uVar15 + uVar21;
    uVar31 = uVar28 + uVar29;
    uVar34 = (uVar30 >> 0x1c ^
             ((((uVar26 >> 0x1a ^ uVar30) << 5 | uVar16 >> 0x1b) ^ uVar30) << 0x19 | uVar37 >> 7)) +
             ((uVar33 ^ uVar30) & uVar36 ^ uVar33 & uVar30) + (uint)CARRY4(uVar15,uVar21) + iVar25 +
             (uint)CARRY4(uVar28,uVar29);
    uVar15 = local_fc >> 1 ^ local_fc;
    uVar29 = uVar15 >> 6 ^ local_fc;
    uVar15 = ((((local_100 >> 1 | local_fc << 0x1f) ^ local_100) >> 6 | uVar15 << 0x1a) ^ local_100)
             >> 1 | uVar29 << 0x1f;
    uVar37 = local_114 >> 0xd ^ local_114;
    uVar21 = ((((local_114 >> 10 ^ local_118) >> 0xd | local_114 * 0x80000) ^ local_118) >> 6 |
             uVar37 << 0x1a) ^ local_118 * 8;
    uVar28 = uVar15 + uVar21;
    uVar16 = uVar28 + local_140;
    bVar40 = CARRY4(local_108,uVar16);
    local_108 = local_108 + uVar16;
    local_104 = local_104 +
                (uVar29 >> 1 ^ (local_100 << 7 ^ local_100) << 0x18) +
                (uVar37 >> 6 ^ ((local_118 * 0x400 ^ local_114) << 3 | local_118 >> 0x1d)) +
                (uint)CARRY4(uVar15,uVar21) + local_13c + (uint)CARRY4(uVar28,local_140) +
                (uint)bVar40;
    uVar38 = uVar18 * 0x10 ^ uVar18;
    uVar15 = uVar24 >> 0x17 ^ uVar24;
    uVar21 = uVar15 >> 4 ^ uVar24;
    uVar15 = ((((uVar24 * 0x200 ^ uVar18) >> 4 | uVar15 << 0x1c) ^ uVar18) >> 0xe | uVar21 << 0x12)
             ^ uVar18 * 0x800000;
    uVar39 = (uVar23 ^ uVar19) & uVar18 ^ uVar23;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[10];
    uVar37 = uVar16 + local_108;
    uVar29 = uVar37 + uVar27;
    iVar25 = (uVar21 >> 0xe ^ ((uVar38 >> 9 ^ uVar24) << 0x17 | (uVar38 << 0x17 ^ uVar18) >> 9)) +
             ((uVar17 ^ uVar20) & uVar24 ^ uVar17) + (uint)CARRY4(uVar15,uVar39) + local_148[0xb] +
             (uint)CARRY4(uVar28,local_148[10]) + local_104 + (uint)CARRY4(uVar16,local_108) +
             uVar35 + (uint)CARRY4(uVar37,uVar27);
    uVar27 = uVar32 + uVar29;
    uVar35 = uVar36 + iVar25 + (uint)CARRY4(uVar32,uVar29);
    uVar15 = uVar34 >> 5 ^ uVar34;
    uVar16 = uVar31 * 0x40 ^ uVar31;
    uVar37 = uVar16 << 5 ^ uVar31;
    uVar15 = ((uVar15 << 0x1a ^ uVar31) >> 0x1c | (uVar15 >> 6 ^ uVar34) << 4) ^ uVar37 << 0x19;
    uVar21 = (uVar26 ^ uVar31) & uVar22 ^ uVar26 & uVar31;
    uVar28 = uVar15 + uVar21;
    uVar32 = uVar28 + uVar29;
    uVar36 = (uVar34 >> 0x1c ^
             ((((uVar31 >> 0x1a ^ uVar34) << 5 | uVar16 >> 0x1b) ^ uVar34) << 0x19 | uVar37 >> 7)) +
             ((uVar30 ^ uVar34) & uVar33 ^ uVar30 & uVar34) + (uint)CARRY4(uVar15,uVar21) + iVar25 +
             (uint)CARRY4(uVar28,uVar29);
    uVar15 = local_f4 >> 1 ^ local_f4;
    uVar29 = uVar15 >> 6 ^ local_f4;
    uVar15 = ((((local_f8 >> 1 | local_f4 << 0x1f) ^ local_f8) >> 6 | uVar15 << 0x1a) ^ local_f8) >>
             1 | uVar29 << 0x1f;
    uVar37 = local_10c >> 0xd ^ local_10c;
    uVar21 = ((((local_10c >> 10 ^ local_110) >> 0xd | local_10c * 0x80000) ^ local_110) >> 6 |
             uVar37 << 0x1a) ^ local_110 * 8;
    uVar28 = uVar15 + uVar21;
    uVar16 = uVar28 + local_138;
    bVar40 = CARRY4(local_100,uVar16);
    local_100 = local_100 + uVar16;
    local_fc = local_fc +
               (uVar29 >> 1 ^ (local_f8 << 7 ^ local_f8) << 0x18) +
               (uVar37 >> 6 ^ ((local_110 * 0x400 ^ local_10c) << 3 | local_110 >> 0x1d)) +
               (uint)CARRY4(uVar15,uVar21) + local_134 + (uint)CARRY4(uVar28,local_138) +
               (uint)bVar40;
    uVar15 = uVar35 >> 0x17 ^ uVar35;
    uVar38 = uVar27 * 0x10 ^ uVar27;
    uVar21 = uVar15 >> 4 ^ uVar35;
    uVar15 = ((((uVar35 * 0x200 ^ uVar27) >> 4 | uVar15 << 0x1c) ^ uVar27) >> 0xe | uVar21 << 0x12)
             ^ uVar27 * 0x800000;
    uVar39 = (uVar19 ^ uVar18) & uVar27 ^ uVar19;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[0xc];
    uVar37 = uVar16 + local_100;
    uVar29 = uVar37 + uVar23;
    iVar25 = (uVar21 >> 0xe ^ ((uVar38 >> 9 ^ uVar35) << 0x17 | (uVar38 << 0x17 ^ uVar27) >> 9)) +
             ((uVar20 ^ uVar24) & uVar35 ^ uVar20) + (uint)CARRY4(uVar15,uVar39) + local_148[0xd] +
             (uint)CARRY4(uVar28,local_148[0xc]) + local_fc + (uint)CARRY4(uVar16,local_100) +
             uVar17 + (uint)CARRY4(uVar37,uVar23);
    uVar23 = uVar22 + uVar29;
    uVar17 = uVar33 + iVar25 + (uint)CARRY4(uVar22,uVar29);
    uVar16 = uVar32 * 0x40 ^ uVar32;
    uVar15 = uVar36 >> 5 ^ uVar36;
    uVar37 = uVar16 << 5 ^ uVar32;
    uVar15 = ((uVar15 << 0x1a ^ uVar32) >> 0x1c | (uVar15 >> 6 ^ uVar36) << 4) ^ uVar37 << 0x19;
    uVar21 = (uVar31 ^ uVar32) & uVar26 ^ uVar31 & uVar32;
    uVar28 = uVar15 + uVar21;
    uVar22 = uVar28 + uVar29;
    uVar33 = (uVar36 >> 0x1c ^
             ((((uVar32 >> 0x1a ^ uVar36) << 5 | uVar16 >> 0x1b) ^ uVar36) << 0x19 | uVar37 >> 7)) +
             ((uVar34 ^ uVar36) & uVar30 ^ uVar34 & uVar36) + (uint)CARRY4(uVar15,uVar21) + iVar25 +
             (uint)CARRY4(uVar28,uVar29);
    uVar15 = local_ec >> 1 ^ local_ec;
    uVar29 = uVar15 >> 6 ^ local_ec;
    uVar15 = ((((local_f0 >> 1 | local_ec << 0x1f) ^ local_f0) >> 6 | uVar15 << 0x1a) ^ local_f0) >>
             1 | uVar29 << 0x1f;
    uVar37 = local_104 >> 0xd ^ local_104;
    uVar21 = ((((local_104 >> 10 ^ local_108) >> 0xd | local_104 * 0x80000) ^ local_108) >> 6 |
             uVar37 << 0x1a) ^ local_108 * 8;
    uVar28 = uVar15 + uVar21;
    uVar16 = uVar28 + local_130;
    bVar40 = CARRY4(local_f8,uVar16);
    local_f8 = local_f8 + uVar16;
    local_f4 = local_f4 +
               (uVar29 >> 1 ^ (local_f0 << 7 ^ local_f0) << 0x18) +
               (uVar37 >> 6 ^ ((local_108 * 0x400 ^ local_104) << 3 | local_108 >> 0x1d)) +
               (uint)CARRY4(uVar15,uVar21) + local_12c + (uint)CARRY4(uVar28,local_130) +
               (uint)bVar40;
    uVar38 = uVar23 * 0x10 ^ uVar23;
    uVar15 = uVar17 >> 0x17 ^ uVar17;
    uVar21 = uVar15 >> 4 ^ uVar17;
    uVar15 = ((((uVar17 * 0x200 ^ uVar23) >> 4 | uVar15 << 0x1c) ^ uVar23) >> 0xe | uVar21 << 0x12)
             ^ uVar23 * 0x800000;
    uVar39 = (uVar18 ^ uVar27) & uVar23 ^ uVar18;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[0xe];
    uVar37 = uVar16 + local_f8;
    uVar29 = uVar37 + uVar19;
    iVar25 = (uVar21 >> 0xe ^ ((uVar38 >> 9 ^ uVar17) << 0x17 | (uVar38 << 0x17 ^ uVar23) >> 9)) +
             ((uVar24 ^ uVar35) & uVar17 ^ uVar24) + (uint)CARRY4(uVar15,uVar39) + local_148[0xf] +
             (uint)CARRY4(uVar28,local_148[0xe]) + local_f4 + (uint)CARRY4(uVar16,local_f8) + uVar20
             + (uint)CARRY4(uVar37,uVar19);
    uVar19 = uVar26 + uVar29;
    uVar20 = uVar30 + iVar25 + (uint)CARRY4(uVar26,uVar29);
    uVar16 = uVar22 * 0x40 ^ uVar22;
    uVar15 = uVar33 >> 5 ^ uVar33;
    uVar37 = uVar16 << 5 ^ uVar22;
    uVar15 = ((uVar15 << 0x1a ^ uVar22) >> 0x1c | (uVar15 >> 6 ^ uVar33) << 4) ^ uVar37 << 0x19;
    uVar21 = (uVar22 ^ uVar32) & uVar31 ^ uVar22 & uVar32;
    uVar28 = uVar15 + uVar21;
    uVar26 = uVar28 + uVar29;
    uVar30 = (uVar33 >> 0x1c ^
             ((((uVar22 >> 0x1a ^ uVar33) << 5 | uVar16 >> 0x1b) ^ uVar33) << 0x19 | uVar37 >> 7)) +
             ((uVar33 ^ uVar36) & uVar34 ^ uVar33 & uVar36) + (uint)CARRY4(uVar15,uVar21) + iVar25 +
             (uint)CARRY4(uVar28,uVar29);
    uVar15 = local_e4 >> 1 ^ local_e4;
    uVar29 = uVar15 >> 6 ^ local_e4;
    uVar15 = ((((local_e8 >> 1 | local_e4 << 0x1f) ^ local_e8) >> 6 | uVar15 << 0x1a) ^ local_e8) >>
             1 | uVar29 << 0x1f;
    uVar37 = local_fc >> 0xd ^ local_fc;
    uVar21 = ((((local_fc >> 10 ^ local_100) >> 0xd | local_fc * 0x80000) ^ local_100) >> 6 |
             uVar37 << 0x1a) ^ local_100 * 8;
    uVar28 = uVar15 + uVar21;
    uVar16 = uVar28 + local_128;
    bVar40 = CARRY4(local_f0,uVar16);
    local_f0 = local_f0 + uVar16;
    local_ec = local_ec +
               (uVar29 >> 1 ^ (local_e8 << 7 ^ local_e8) << 0x18) +
               (uVar37 >> 6 ^ ((local_100 * 0x400 ^ local_fc) << 3 | local_100 >> 0x1d)) +
               (uint)CARRY4(uVar15,uVar21) + local_124 + (uint)CARRY4(uVar28,local_128) +
               (uint)bVar40;
    uVar38 = uVar19 * 0x10 ^ uVar19;
    uVar15 = uVar20 >> 0x17 ^ uVar20;
    uVar21 = uVar15 >> 4 ^ uVar20;
    uVar15 = ((((uVar20 * 0x200 ^ uVar19) >> 4 | uVar15 << 0x1c) ^ uVar19) >> 0xe | uVar21 << 0x12)
             ^ uVar19 * 0x800000;
    uVar39 = (uVar27 ^ uVar23) & uVar19 ^ uVar27;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[0x10];
    uVar37 = uVar16 + local_f0;
    uVar29 = uVar37 + uVar18;
    iVar25 = (uVar21 >> 0xe ^ ((uVar38 >> 9 ^ uVar20) << 0x17 | (uVar38 << 0x17 ^ uVar19) >> 9)) +
             ((uVar35 ^ uVar17) & uVar20 ^ uVar35) + (uint)CARRY4(uVar15,uVar39) + local_148[0x11] +
             (uint)CARRY4(uVar28,local_148[0x10]) + local_ec + (uint)CARRY4(uVar16,local_f0) +
             uVar24 + (uint)CARRY4(uVar37,uVar18);
    uVar18 = uVar31 + uVar29;
    uVar24 = uVar34 + iVar25 + (uint)CARRY4(uVar31,uVar29);
    uVar16 = uVar26 * 0x40 ^ uVar26;
    uVar37 = uVar16 << 5 ^ uVar26;
    uVar15 = uVar30 >> 5 ^ uVar30;
    uVar15 = ((uVar15 << 0x1a ^ uVar26) >> 0x1c | (uVar15 >> 6 ^ uVar30) << 4) ^ uVar37 << 0x19;
    uVar21 = (uVar22 ^ uVar26) & uVar32 ^ uVar22 & uVar26;
    uVar28 = uVar15 + uVar21;
    uVar31 = uVar28 + uVar29;
    uVar34 = (uVar30 >> 0x1c ^
             ((((uVar26 >> 0x1a ^ uVar30) << 5 | uVar16 >> 0x1b) ^ uVar30) << 0x19 | uVar37 >> 7)) +
             ((uVar33 ^ uVar30) & uVar36 ^ uVar33 & uVar30) + (uint)CARRY4(uVar15,uVar21) + iVar25 +
             (uint)CARRY4(uVar28,uVar29);
    uVar15 = local_dc >> 1 ^ local_dc;
    uVar29 = uVar15 >> 6 ^ local_dc;
    uVar15 = ((((local_e0 >> 1 | local_dc << 0x1f) ^ local_e0) >> 6 | uVar15 << 0x1a) ^ local_e0) >>
             1 | uVar29 << 0x1f;
    uVar37 = local_f4 >> 0xd ^ local_f4;
    uVar21 = ((((local_f4 >> 10 ^ local_f8) >> 0xd | local_f4 * 0x80000) ^ local_f8) >> 6 |
             uVar37 << 0x1a) ^ local_f8 * 8;
    uVar28 = uVar15 + uVar21;
    uVar16 = uVar28 + local_120;
    bVar40 = CARRY4(local_e8,uVar16);
    local_e8 = local_e8 + uVar16;
    local_e4 = local_e4 +
               (uVar29 >> 1 ^ (local_e0 << 7 ^ local_e0) << 0x18) +
               (uVar37 >> 6 ^ ((local_f8 * 0x400 ^ local_f4) << 3 | local_f8 >> 0x1d)) +
               (uint)CARRY4(uVar15,uVar21) + local_11c + (uint)CARRY4(uVar28,local_120) +
               (uint)bVar40;
    uVar38 = uVar18 * 0x10 ^ uVar18;
    uVar15 = uVar24 >> 0x17 ^ uVar24;
    uVar21 = uVar15 >> 4 ^ uVar24;
    uVar15 = ((((uVar24 * 0x200 ^ uVar18) >> 4 | uVar15 << 0x1c) ^ uVar18) >> 0xe | uVar21 << 0x12)
             ^ uVar18 * 0x800000;
    uVar39 = (uVar23 ^ uVar19) & uVar18 ^ uVar23;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[0x12];
    uVar37 = uVar16 + local_e8;
    uVar29 = uVar37 + uVar27;
    iVar25 = (uVar21 >> 0xe ^ ((uVar38 >> 9 ^ uVar24) << 0x17 | (uVar38 << 0x17 ^ uVar18) >> 9)) +
             ((uVar17 ^ uVar20) & uVar24 ^ uVar17) + (uint)CARRY4(uVar15,uVar39) + local_148[0x13] +
             (uint)CARRY4(uVar28,local_148[0x12]) + local_e4 + (uint)CARRY4(uVar16,local_e8) +
             uVar35 + (uint)CARRY4(uVar37,uVar27);
    uVar27 = uVar32 + uVar29;
    uVar35 = uVar36 + iVar25 + (uint)CARRY4(uVar32,uVar29);
    uVar15 = uVar34 >> 5 ^ uVar34;
    uVar16 = uVar31 * 0x40 ^ uVar31;
    uVar37 = uVar16 << 5 ^ uVar31;
    uVar15 = ((uVar15 << 0x1a ^ uVar31) >> 0x1c | (uVar15 >> 6 ^ uVar34) << 4) ^ uVar37 << 0x19;
    uVar21 = (uVar26 ^ uVar31) & uVar22 ^ uVar26 & uVar31;
    uVar28 = uVar15 + uVar21;
    uVar32 = uVar28 + uVar29;
    uVar36 = (uVar34 >> 0x1c ^
             ((((uVar31 >> 0x1a ^ uVar34) << 5 | uVar16 >> 0x1b) ^ uVar34) << 0x19 | uVar37 >> 7)) +
             ((uVar30 ^ uVar34) & uVar33 ^ uVar30 & uVar34) + (uint)CARRY4(uVar15,uVar21) + iVar25 +
             (uint)CARRY4(uVar28,uVar29);
    uVar15 = local_d4 >> 1 ^ local_d4;
    uVar29 = uVar15 >> 6 ^ local_d4;
    uVar15 = ((((local_d8 >> 1 | local_d4 << 0x1f) ^ local_d8) >> 6 | uVar15 << 0x1a) ^ local_d8) >>
             1 | uVar29 << 0x1f;
    uVar37 = local_ec >> 0xd ^ local_ec;
    uVar21 = ((((local_ec >> 10 ^ local_f0) >> 0xd | local_ec * 0x80000) ^ local_f0) >> 6 |
             uVar37 << 0x1a) ^ local_f0 * 8;
    uVar28 = uVar15 + uVar21;
    uVar16 = uVar28 + local_118;
    bVar40 = CARRY4(local_e0,uVar16);
    local_e0 = local_e0 + uVar16;
    local_dc = local_dc +
               (uVar29 >> 1 ^ (local_d8 << 7 ^ local_d8) << 0x18) +
               (uVar37 >> 6 ^ ((local_f0 * 0x400 ^ local_ec) << 3 | local_f0 >> 0x1d)) +
               (uint)CARRY4(uVar15,uVar21) + local_114 + (uint)CARRY4(uVar28,local_118) +
               (uint)bVar40;
    uVar38 = uVar27 * 0x10 ^ uVar27;
    uVar15 = uVar35 >> 0x17 ^ uVar35;
    uVar21 = uVar15 >> 4 ^ uVar35;
    uVar15 = ((((uVar35 * 0x200 ^ uVar27) >> 4 | uVar15 << 0x1c) ^ uVar27) >> 0xe | uVar21 << 0x12)
             ^ uVar27 * 0x800000;
    uVar39 = (uVar19 ^ uVar18) & uVar27 ^ uVar19;
    uVar28 = uVar15 + uVar39;
    uVar16 = uVar28 + local_148[0x14];
    uVar37 = uVar16 + local_e0;
    uVar29 = uVar37 + uVar23;
    iVar25 = (uVar21 >> 0xe ^ ((uVar38 >> 9 ^ uVar35) << 0x17 | (uVar38 << 0x17 ^ uVar27) >> 9)) +
             ((uVar20 ^ uVar24) & uVar35 ^ uVar20) + (uint)CARRY4(uVar15,uVar39) + local_148[0x15] +
             (uint)CARRY4(uVar28,local_148[0x14]) + local_dc + (uint)CARRY4(uVar16,local_e0) +
             uVar17 + (uint)CARRY4(uVar37,uVar23);
    local_168 = uVar22 + uVar29;
    local_164 = uVar33 + iVar25 + (uint)CARRY4(uVar22,uVar29);
    uVar15 = uVar32 * 0x40 ^ uVar32;
    uVar23 = uVar36 >> 5 ^ uVar36;
    uVar28 = uVar15 << 5 ^ uVar32;
    uVar23 = ((uVar23 << 0x1a ^ uVar32) >> 0x1c | (uVar23 >> 6 ^ uVar36) << 4) ^ uVar28 << 0x19;
    uVar16 = (uVar31 ^ uVar32) & uVar26 ^ uVar31 & uVar32;
    uVar17 = uVar23 + uVar16;
    local_150 = uVar17 + uVar29;
    local_14c = (uVar36 >> 0x1c ^
                ((((uVar32 >> 0x1a ^ uVar36) << 5 | uVar15 >> 0x1b) ^ uVar36) << 0x19 | uVar28 >> 7)
                ) + ((uVar34 ^ uVar36) & uVar30 ^ uVar34 & uVar36) + (uint)CARRY4(uVar23,uVar16) +
                iVar25 + (uint)CARRY4(uVar17,uVar29);
    uVar23 = local_cc >> 1 ^ local_cc;
    uVar16 = uVar23 >> 6 ^ local_cc;
    uVar23 = ((((local_d0 >> 1 | local_cc << 0x1f) ^ local_d0) >> 6 | uVar23 << 0x1a) ^ local_d0) >>
             1 | uVar16 << 0x1f;
    uVar28 = local_e4 >> 0xd ^ local_e4;
    uVar37 = ((((local_e4 >> 10 ^ local_e8) >> 0xd | local_e4 * 0x80000) ^ local_e8) >> 6 |
             uVar28 << 0x1a) ^ local_e8 * 8;
    uVar17 = uVar23 + uVar37;
    uVar15 = uVar17 + local_110;
    bVar40 = CARRY4(local_d8,uVar15);
    local_d8 = local_d8 + uVar15;
    local_d4 = local_d4 +
               (uVar16 >> 1 ^ (local_d0 << 7 ^ local_d0) << 0x18) +
               (uVar28 >> 6 ^ ((local_e8 * 0x400 ^ local_e4) << 3 | local_e8 >> 0x1d)) +
               (uint)CARRY4(uVar23,uVar37) + local_10c + (uint)CARRY4(uVar17,local_110) +
               (uint)bVar40;
    uVar23 = local_164 >> 0x17 ^ local_164;
    uVar37 = uVar23 >> 4 ^ local_164;
    uVar29 = local_168 * 0x10 ^ local_168;
    uVar23 = ((((local_164 * 0x200 ^ local_168) >> 4 | uVar23 << 0x1c) ^ local_168) >> 0xe |
             uVar37 << 0x12) ^ local_168 * 0x800000;
    uVar21 = (uVar18 ^ uVar27) & local_168 ^ uVar18;
    uVar17 = uVar23 + uVar21;
    uVar15 = uVar17 + local_148[0x16];
    uVar28 = uVar15 + local_d8;
    uVar16 = uVar28 + uVar19;
    iVar25 = (uVar37 >> 0xe ^
             ((uVar29 >> 9 ^ local_164) << 0x17 | (uVar29 << 0x17 ^ local_168) >> 9)) +
             ((uVar24 ^ uVar35) & local_164 ^ uVar24) + (uint)CARRY4(uVar23,uVar21) +
             local_148[0x17] + (uint)CARRY4(uVar17,local_148[0x16]) + local_d4 +
             (uint)CARRY4(uVar15,local_d8) + uVar20 + (uint)CARRY4(uVar28,uVar19);
    local_170 = uVar26 + uVar16;
    local_16c = uVar30 + iVar25 + (uint)CARRY4(uVar26,uVar16);
    uVar19 = local_150 * 0x40 ^ local_150;
    uVar23 = local_14c >> 5 ^ local_14c;
    uVar20 = uVar19 << 5 ^ local_150;
    uVar23 = ((uVar23 << 0x1a ^ local_150) >> 0x1c | (uVar23 >> 6 ^ local_14c) << 4) ^
             uVar20 << 0x19;
    uVar15 = (uVar32 ^ local_150) & uVar31 ^ uVar32 & local_150;
    uVar17 = uVar23 + uVar15;
    local_180 = uVar17 + uVar16;
    local_17c = (local_14c >> 0x1c ^
                ((((local_150 >> 0x1a ^ local_14c) << 5 | uVar19 >> 0x1b) ^ local_14c) << 0x19 |
                uVar20 >> 7)) + ((uVar36 ^ local_14c) & uVar34 ^ uVar36 & local_14c) +
                (uint)CARRY4(uVar23,uVar15) + iVar25 + (uint)CARRY4(uVar17,uVar16);
    uVar23 = local_c4 >> 1 ^ local_c4;
    uVar15 = uVar23 >> 6 ^ local_c4;
    uVar23 = ((((local_c8 >> 1 | local_c4 << 0x1f) ^ local_c8) >> 6 | uVar23 << 0x1a) ^ local_c8) >>
             1 | uVar15 << 0x1f;
    uVar20 = local_dc >> 0xd ^ local_dc;
    uVar28 = ((((local_dc >> 10 ^ local_e0) >> 0xd | local_dc * 0x80000) ^ local_e0) >> 6 |
             uVar20 << 0x1a) ^ local_e0 * 8;
    uVar17 = uVar23 + uVar28;
    uVar19 = uVar17 + local_108;
    bVar40 = CARRY4(local_d0,uVar19);
    local_d0 = local_d0 + uVar19;
    local_cc = local_cc +
               (uVar15 >> 1 ^ (local_c8 << 7 ^ local_c8) << 0x18) +
               (uVar20 >> 6 ^ ((local_e0 * 0x400 ^ local_dc) << 3 | local_e0 >> 0x1d)) +
               (uint)CARRY4(uVar23,uVar28) + local_104 + (uint)CARRY4(uVar17,local_108) +
               (uint)bVar40;
    uVar16 = local_170 * 0x10 ^ local_170;
    uVar23 = local_16c >> 0x17 ^ local_16c;
    uVar28 = uVar23 >> 4 ^ local_16c;
    uVar23 = ((((local_16c * 0x200 ^ local_170) >> 4 | uVar23 << 0x1c) ^ local_170) >> 0xe |
             uVar28 << 0x12) ^ local_170 * 0x800000;
    uVar37 = (local_168 ^ uVar27) & local_170 ^ uVar27;
    uVar17 = uVar23 + uVar37;
    uVar19 = uVar17 + local_148[0x18];
    uVar20 = uVar19 + local_d0;
    uVar15 = uVar20 + uVar18;
    iVar25 = (uVar28 >> 0xe ^
             ((uVar16 >> 9 ^ local_16c) << 0x17 | (uVar16 << 0x17 ^ local_170) >> 9)) +
             ((local_164 ^ uVar35) & local_16c ^ uVar35) + (uint)CARRY4(uVar23,uVar37) +
             local_148[0x19] + (uint)CARRY4(uVar17,local_148[0x18]) + local_cc +
             (uint)CARRY4(uVar19,local_d0) + uVar24 + (uint)CARRY4(uVar20,uVar18);
    local_178 = uVar31 + uVar15;
    local_174 = uVar34 + iVar25 + (uint)CARRY4(uVar31,uVar15);
    uVar18 = local_180 * 0x40 ^ local_180;
    uVar23 = local_17c >> 5 ^ local_17c;
    uVar19 = uVar18 << 5 ^ local_180;
    uVar23 = ((uVar23 << 0x1a ^ local_180) >> 0x1c | (uVar23 >> 6 ^ local_17c) << 4) ^
             uVar19 << 0x19;
    uVar20 = (local_150 ^ local_180) & uVar32 ^ local_150 & local_180;
    uVar17 = uVar23 + uVar20;
    local_158 = uVar17 + uVar15;
    uVar18 = (local_17c & local_14c ^ (local_14c ^ local_17c) & uVar36) +
             (local_17c >> 0x1c ^
             ((((local_180 >> 0x1a ^ local_17c) << 5 | uVar18 >> 0x1b) ^ local_17c) << 0x19 |
             uVar19 >> 7)) + (uint)CARRY4(uVar23,uVar20) + iVar25 + (uint)CARRY4(uVar17,uVar15);
    uVar15 = local_d4 >> 0xd ^ local_d4;
    uVar19 = ((((local_d4 >> 10 ^ local_d8) >> 0xd | local_d4 * 0x80000) ^ local_d8) >> 6 |
             uVar15 << 0x1a) ^ local_d8 * 8;
    uVar23 = local_13c >> 1 ^ local_13c;
    uVar17 = uVar23 >> 6 ^ local_13c;
    uVar23 = ((((local_140 >> 1 | local_13c * -0x80000000) ^ local_140) >> 6 | uVar23 << 0x1a) ^
             local_140) >> 1 | uVar17 << 0x1f;
    uVar20 = uVar19 + uVar23;
    uVar24 = uVar20 + local_100;
    bVar40 = CARRY4(local_c8,uVar24);
    local_c8 = local_c8 + uVar24;
    local_c4 = local_c4 +
               (uVar15 >> 6 ^ ((local_d8 * 0x400 ^ local_d4) << 3 | local_d8 >> 0x1d)) +
               (uVar17 >> 1 ^ (local_140 * 0x80 ^ local_140) << 0x18) + (uint)CARRY4(uVar19,uVar23)
               + local_fc + (uint)CARRY4(uVar20,local_100) + (uint)bVar40;
    uVar28 = local_178 * 0x10 ^ local_178;
    uVar23 = local_174 >> 0x17 ^ local_174;
    uVar15 = uVar23 >> 4 ^ local_174;
    uVar23 = ((((local_174 * 0x200 ^ local_178) >> 4 | uVar23 << 0x1c) ^ local_178) >> 0xe |
             uVar15 << 0x12) ^ local_178 * 0x800000;
    uVar16 = (local_168 ^ local_170) & local_178 ^ local_168;
    uVar17 = uVar23 + uVar16;
    uVar19 = uVar17 + local_148[0x1a];
    uVar20 = uVar19 + local_c8;
    uVar24 = uVar20 + uVar27;
    iVar25 = (uVar15 >> 0xe ^
             ((uVar28 >> 9 ^ local_174) << 0x17 | (uVar28 << 0x17 ^ local_178) >> 9)) +
             ((local_164 ^ local_16c) & local_174 ^ local_164) + (uint)CARRY4(uVar23,uVar16) +
             local_148[0x1b] + (uint)CARRY4(uVar17,local_148[0x1a]) + local_c4 +
             (uint)CARRY4(uVar19,local_c8) + uVar35 + (uint)CARRY4(uVar20,uVar27);
    local_160 = uVar32 + uVar24;
    local_15c = uVar36 + iVar25 + (uint)CARRY4(uVar32,uVar24);
    uVar23 = uVar18 >> 5 ^ uVar18;
    uVar19 = local_158 * 0x40 ^ local_158;
    uVar20 = uVar19 << 5 ^ local_158;
    uVar23 = ((uVar23 << 0x1a ^ local_158) >> 0x1c | (uVar23 >> 6 ^ uVar18) << 4) ^ uVar20 << 0x19;
    uVar27 = (local_180 ^ local_158) & local_150 ^ local_180 & local_158;
    uVar17 = uVar23 + uVar27;
    local_188 = uVar17 + uVar24;
    local_184 = (uVar18 >> 0x1c ^
                ((((local_158 >> 0x1a ^ uVar18) << 5 | uVar19 >> 0x1b) ^ uVar18) << 0x19 |
                uVar20 >> 7)) + ((local_17c ^ uVar18) & local_14c ^ local_17c & uVar18) +
                (uint)CARRY4(uVar23,uVar27) + iVar25 + (uint)CARRY4(uVar17,uVar24);
    local_148 = local_148 + 0x20;
    local_190 = local_190 + -1;
  } while (local_190 != 0);
  *param_1 = uVar13 + local_188;
  param_1[1] = uVar1 + local_184 + (uint)CARRY4(uVar13,local_188);
  param_1[2] = uVar2 + local_158;
  param_1[4] = uVar3 + local_180;
  param_1[5] = uVar10 + local_17c + (uint)CARRY4(uVar3,local_180);
  param_1[6] = uVar14 + local_150;
  param_1[7] = param_1[7] + local_14c + (uint)CARRY4(uVar14,local_150);
  param_1[8] = uVar11 + local_160;
  param_1[9] = uVar6 + local_15c + (uint)CARRY4(uVar11,local_160);
  param_1[10] = uVar4 + local_178;
  param_1[0xb] = uVar7 + local_174 + (uint)CARRY4(uVar4,local_178);
  param_1[0xc] = uVar5 + local_170;
  param_1[0xd] = uVar12 + local_16c + (uint)CARRY4(uVar5,local_170);
  param_1[3] = uVar9 + uVar18 + (uint)CARRY4(uVar2,local_158);
  param_1[0xe] = uVar8 + local_168;
  param_1[0xf] = param_1[0xf] + local_164 + (uint)CARRY4(uVar8,local_168);
  return;
}



// ===== FUN_1000e4d4 @ 1000e4d4 (size 191) =====

void __cdecl FUN_1000e4d4(uint *param_1,uint *param_2,uint param_3)

{
  uint *_Dst;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  _Dst = param_1;
  uVar3 = param_1[0x20];
  puVar2 = param_1 + 0x20;
  uVar1 = *puVar2;
  *puVar2 = *puVar2 + param_3;
  param_1[0x21] = param_1[0x21] + (uint)CARRY4(uVar1,param_3);
  uVar3 = uVar3 & 0x7f;
  if (uVar3 != 0) {
    uVar5 = 0x80 - uVar3;
    uVar1 = param_3;
    if (uVar5 <= param_3) {
      uVar1 = uVar5;
    }
    memcpy((void *)(uVar3 + (int)param_1),param_2,uVar1);
    if (param_3 < uVar5) {
      return;
    }
    FUN_1000b182(param_1 + 0x22,param_1);
    param_2 = (uint *)((int)param_2 + uVar5);
    param_3 = param_3 - uVar5;
  }
  if (0x7f < param_3) {
    param_1 = (uint *)(param_3 >> 7);
    do {
      puVar2 = param_2;
      if (((uint)param_2 & 7) != 0) {
        puVar6 = param_2;
        puVar7 = _Dst;
        for (iVar4 = 0x20; puVar2 = _Dst, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      FUN_1000b182(_Dst + 0x22,puVar2);
      param_2 = param_2 + 0x20;
      param_3 = param_3 - 0x80;
      param_1 = (uint *)((int)param_1 + -1);
    } while (param_1 != (uint *)0x0);
  }
  if (param_3 != 0) {
    memcpy(_Dst,param_2,param_3);
  }
  return;
}



// ===== FUN_1000e593 @ 1000e593 (size 209) =====

void __cdecl FUN_1000e593(uint *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined4 extraout_var;
  undefined4 uVar8;
  
  uVar5 = param_1[0x20] >> 3 & 0xf;
  puVar4 = param_1 + uVar5 * 2;
  bVar2 = (byte)((param_1[0x20] & 7) << 3);
  lVar7 = __allshl(bVar2,-1);
  *puVar4 = *puVar4 & ~(uint)lVar7;
  puVar4[1] = puVar4[1] & ~(uint)((ulonglong)lVar7 >> 0x20);
  uVar8 = extraout_var;
  lVar7 = __allshl(bVar2,0);
  *puVar4 = *puVar4 ^ (uint)lVar7;
  puVar4[1] = puVar4[1] ^ (uint)((ulonglong)lVar7 >> 0x20);
  uVar5 = uVar5 + 1;
  if (0xe < uVar5) {
    if (uVar5 == 0xf) {
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
    }
    FUN_1000b182(param_1 + 0x22,param_1);
    uVar5 = 0;
  }
  puVar4 = param_1 + uVar5 * 2;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar6 = puVar4 + 2;
  for (iVar3 = (0xe - uVar5 & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar5 = param_1[0x20];
  uVar1 = param_1[0x21] << 3;
  param_1[0x1e] =
       (param_1[0x21] & 0x1fffffff) >> 0x15 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
       (uVar1 | uVar5 >> 0x1d) << 0x18;
  param_1[0x1f] =
       (uVar5 & 0x1fffffff) >> 0x15 | (uVar5 << 3 & 0xff0000) >> 8 | (uVar5 << 3 & 0xff00) << 8 |
       uVar5 << 0x1b;
  FUN_1000b182(param_1 + 0x22,param_1);
  if (param_2 != (uint *)0x0) {
    FUN_100083be(uVar8,param_1 + 0x22,param_2);
  }
  return;
}



// ===== FUN_1000e664 @ 1000e664 (size 251) =====

undefined4 __cdecl FUN_1000e664(int *param_1,int param_2)

{
  int iVar1;
  _union_2683 _Stack_a0;
  _union_2683 _Stack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 local_28;
  ULONG UStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  _union_2683 local_18;
  
  local_60._0_4_ = 1;
  local_60._4_4_ = 0x7d;
  FUN_100059fe();
  uStack_78 = 0x1000e696;
  VariantInit((VARIANTARG *)&local_18.n2);
  uStack_78 = 0x1000e6a5;
  FUN_10007305(*(OLECHAR **)(param_2 + 4));
  uStack_78 = 0x1000e6b1;
  FUN_10007305(*(OLECHAR **)(param_2 + 8));
  uStack_78 = 0x1000e6bd;
  FUN_10007305(*(OLECHAR **)(param_2 + 0xc));
  uStack_78 = 0x1000e6c4;
  VariantInit((VARIANTARG *)(local_60 + 8));
  uStack_78 = 0x1000e6d1;
  VariantClear((VARIANTARG *)(local_60 + 8));
  local_60._8_2_ = 3;
  local_50 = 1;
  uStack_80 = local_60._8_4_;
  uStack_7c = local_60._12_4_;
  uStack_78 = 1;
  _Stack_90._0_4_ = local_28;
  _Stack_90.decVal.Hi32 = UStack_24;
  _Stack_90._8_4_ = uStack_20;
  _Stack_90._12_4_ = uStack_1c;
  _Stack_a0._0_4_ = local_18._0_4_;
  _Stack_a0.decVal.Hi32 = local_18.decVal.Hi32;
  _Stack_a0._8_4_ = local_18._8_4_;
  _Stack_a0._12_4_ = local_18._12_4_;
  iVar1 = (**(code **)(*param_1 + 0x7c))(param_1,local_30,local_48,uStack_44,uStack_40,uStack_3c);
  if (-1 < iVar1) {
    uStack_40 = 0;
  }
  VariantClear((VARIANTARG *)&_Stack_a0.n2);
  VariantClear((VARIANTARG *)&_Stack_90.n2);
  VariantClear((VARIANTARG *)&stack0xffffff80);
  VariantClear((VARIANTARG *)&stack0xffffff90);
  VariantClear((VARIANTARG *)local_60);
  return uStack_40;
}



// ===== FUN_1000e75f @ 1000e75f (size 205) =====

int __cdecl FUN_1000e75f(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,char *param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  HINSTANCE pHVar3;
  undefined4 *unaff_EDI;
  _OSVERSIONINFOW local_12c;
  undefined4 local_18;
  LPCWSTR local_14;
  LPCWSTR local_10;
  LPCWSTR local_c;
  int local_8;
  
  DVar1 = GetFileAttributesW(param_2);
  if (DVar1 == 0xffffffff) {
    local_8 = 4;
  }
  else {
    local_8 = 1;
    memset(&local_12c,0,0x114);
    local_12c.dwOSVersionInfoSize = 0x114;
    BVar2 = GetVersionExW(&local_12c);
    if (BVar2 != 0) {
      if ((local_12c.dwPlatformId == 2) && (5 < local_12c.dwMajorVersion)) {
        local_18 = *unaff_EDI;
        local_14 = param_1;
        local_c = param_3;
        local_10 = param_2;
        local_8 = FUN_1000ea22(FUN_1000e664,&local_18,param_4);
      }
      else {
        local_8 = 3;
      }
      if ((local_8 != 1) && (local_8 != 3)) {
        return local_8;
      }
    }
    pHVar3 = ShellExecuteW((HWND)*unaff_EDI,param_1,param_2,param_3,(LPCWSTR)0x0,1);
    if (0x20 < (int)pHVar3) {
      local_8 = 5;
    }
  }
  return local_8;
}



// ===== FUN_1000e82c @ 1000e82c (size 93) =====

undefined4 FUN_1000e82c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HRESULT HVar3;
  undefined4 uVar4;
  
  HVar3 = CoInitialize((LPVOID)0x0);
  puVar2 = param_1;
  if ((HVar3 == 0) || (HVar3 == 1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar1 = param_1 + 2;
      param_1 = (undefined4 *)((uint)param_1 & 0xffffff);
      uVar4 = FUN_1000ea22((undefined *)puVar2[1],*puVar1,(char *)((int)&param_1 + 3));
      *puVar2 = uVar4;
    }
    param_1 = (undefined4 *)0x3e8;
    FUN_100059fe();
    CoUninitialize();
  }
  else if (param_1 != (undefined4 *)0x0) {
    *param_1 = 1;
  }
  return 0;
}



// ===== FUN_1000e889 @ 1000e889 (size 409) =====

undefined4 __cdecl FUN_1000e889(undefined *param_1,undefined4 param_2)

{
  HRESULT HVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  VARIANTARG local_3c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  IUnknown *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  HWND local_8;
  
  uVar4 = 1;
  local_20 = (int *)0x0;
  HVar1 = CoCreateInstance((IID *)&DAT_100141d8,(LPUNKNOWN)0x0,4,(IID *)&DAT_10017424,&local_20);
  if (-1 < HVar1) {
    local_8 = (HWND)0x0;
    local_1c = (IUnknown *)0x0;
    VariantInit(&local_3c);
    iVar2 = (**(code **)(*local_20 + 0x3c))(local_20,&local_3c,&local_3c,8,&local_8,1,&local_1c);
    if (iVar2 == 0) {
      if ((local_8 != (HWND)0x0) && (local_8 != (HWND)0xffffffff)) {
        HVar1 = IUnknown_QueryService(local_1c,(GUID *)&DAT_100141c8,(IID *)&DAT_10017434,&local_24)
        ;
        if (-1 < HVar1) {
          local_18 = (int *)0x0;
          iVar2 = (**(code **)(*local_24 + 0x3c))(local_24,&local_18);
          if (-1 < iVar2) {
            local_14 = (int *)0x0;
            iVar2 = (**(code **)(*local_18 + 0x3c))(local_18,0,&DAT_10017444,&local_14);
            if (-1 < iVar2) {
              local_c = (int *)0x0;
              DVar3 = GetWindowThreadProcessId(local_8,(LPDWORD)&local_c);
              if ((DVar3 != 0) && (local_c != (int *)0x0)) {
                AllowSetForegroundWindow((DWORD)local_c);
              }
              local_10 = (int *)0x0;
              iVar2 = (**(code **)*local_14)(local_14,&DAT_10017454,&local_10);
              if (-1 < iVar2) {
                local_c = (int *)0x0;
                iVar2 = (**(code **)(*local_10 + 0x1c))(local_10,&local_c);
                if (-1 < iVar2) {
                  iVar2 = (**(code **)*local_c)(local_c,&DAT_10017464,&local_28);
                  if (-1 < iVar2) {
                    uVar4 = (*(code *)param_1)(local_28,param_2);
                  }
                  (**(code **)(*local_c + 8))(local_c);
                  local_c = (int *)0x0;
                }
                (**(code **)(*local_10 + 8))(local_10);
                local_10 = (int *)0x0;
              }
              (**(code **)(*local_14 + 8))(local_14);
              local_14 = (int *)0x0;
            }
            (**(code **)(*local_18 + 8))(local_18);
            local_18 = (int *)0x0;
          }
          (**(code **)(*local_24 + 8))(local_24);
        }
      }
      (*local_1c->lpVtbl->Release)(local_1c);
      local_1c = (IUnknown *)0x0;
    }
    (**(code **)(*local_20 + 8))(local_20);
    local_20 = (int *)0x0;
    VariantClear(&local_3c);
  }
  return uVar4;
}



// ===== FUN_1000ea22 @ 1000ea22 (size 151) =====

undefined4 __cdecl FUN_1000ea22(undefined *param_1,undefined4 param_2,char *param_3)

{
  HANDLE hHandle;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  
  uVar3 = 1;
  if (*param_3 == '\0') {
    uVar2 = FUN_1000e889(param_1,param_2);
  }
  else {
    local_14 = 0xffffffff;
    local_10 = param_1;
    local_c = param_2;
    hHandle = (HANDLE)_beginthreadex((void *)0x0,0,FUN_1000e82c,&local_14,0,(uint *)0x0);
    uVar2 = uVar3;
    if ((hHandle != (HANDLE)0x0) && (hHandle != (HANDLE)0xffffffff)) {
      DVar1 = WaitForSingleObject(hHandle,30000);
      uVar2 = local_14;
      if ((DVar1 != 0) && (uVar2 = uVar3, DVar1 == 0x102)) {
        TerminateThread(hHandle,1);
        uVar2 = 2;
      }
      CloseHandle(hHandle);
    }
  }
  return uVar2;
}



// ===== entry @ 1000eab9 (size 75) =====

undefined4 entry(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
    DAT_1001959c = 0;
    DAT_10019582 = 0;
    DAT_10019598 = param_1;
  }
  else if (param_2 == 0) {
    FUN_10005968();
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  }
  return 1;
}



// ===== FUN_1000eb20 @ 1000eb20 (size 46) =====

undefined8 FUN_1000eb20(void)

{
  BOOL BVar1;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  GetSystemTime(&local_1c);
  BVar1 = SystemTimeToFileTime(&local_1c,&local_c);
  if (BVar1 == 0) {
    return 0;
  }
  return local_c;
}



// ===== Time @ 1000eb4e (size 100) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Time(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  time_t tVar3;
  
                    /* 0xeb4e  47  Time */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  tVar3 = time((time_t *)0x0);
  FUN_100137eb((int)tVar3);
  return;
}



// ===== GetMinutes @ 1000ebb2 (size 115) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetMinutes(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
                    /* 0xebb2  15  GetMinutes */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  uVar3 = FUN_1000eb20();
  uVar3 = __aulldiv((uint)uVar3,(uint)((ulonglong)uVar3 >> 0x20),600000000,0);
  FUN_100137eb((int)uVar3);
  return;
}



// ===== GetHours @ 1000ec25 (size 115) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetHours(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
                    /* 0xec25  13  GetHours */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  uVar3 = FUN_1000eb20();
  uVar3 = __aulldiv((uint)uVar3,(uint)((ulonglong)uVar3 >> 0x20),0x61c46800,8);
  FUN_100137eb((int)uVar3);
  return;
}



// ===== GetDays @ 1000ec98 (size 118) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetDays(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
                    /* 0xec98  8  GetDays */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  uVar3 = FUN_1000eb20();
  uVar3 = __aulldiv((uint)uVar3,(uint)((ulonglong)uVar3 >> 0x20),0x2a69c000,0xc9);
  FUN_100137eb((int)uVar3);
  return;
}



// ===== FUN_1000ed0e @ 1000ed0e (size 65) =====

int __cdecl FUN_1000ed0e(int param_1)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (in_EAX <= param_1) {
    return param_1;
  }
  uVar2 = (in_EAX - param_1) + 1;
  if (uVar2 == 0) {
    iVar4 = FUN_1000830c();
    return iVar4;
  }
  uVar1 = -uVar2 / uVar2 + 1;
  uVar2 = uVar1 * uVar2;
  do {
    uVar3 = FUN_1000830c();
    if (uVar2 == 0) break;
  } while (uVar2 <= uVar3);
  return uVar3 / uVar1 + param_1;
}



// ===== Rand @ 1000ed4f (size 104) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Rand(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
                    /* 0xed4f  31  Rand */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_1000ed0e(0);
  FUN_100137eb(iVar1);
  return;
}



// ===== RandMax @ 1000edb7 (size 159) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
RandMax(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  
                    /* 0xedb7  34  RandMax */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (*(code *)param_5[3])(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_100137bb();
  if (iVar1 < 0) {
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    if (DAT_10019582 != '\0') {
      MessageBoxW((HWND)0x0,L"RandMax() was called with bad arguments!",L"StdUtils",0x2010);
    }
    FUN_100136d0(L"einval");
  }
  else {
    iVar1 = FUN_1000ed0e(0);
    FUN_100137eb(iVar1);
  }
  return;
}



// ===== RandMinMax @ 1000ee56 (size 167) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
RandMinMax(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
                    /* 0xee56  35  RandMinMax */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (*(code *)param_5[3])(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_100137bb();
  iVar3 = FUN_100137bb();
  if (iVar1 < iVar3) {
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    if (DAT_10019582 != '\0') {
      MessageBoxW((HWND)0x0,L"RandMinMax() was called with bad arguments!",L"StdUtils",0x2010);
    }
    FUN_100136d0(L"einval");
  }
  else {
    iVar1 = FUN_1000ed0e(iVar3);
    FUN_100137eb(iVar1);
  }
  return;
}



// ===== RandList @ 1000eefd (size 279) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
RandList(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  
                    /* 0xeefd  33  RandList */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (*(code *)param_5[3])(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_100137bb();
  iVar3 = FUN_100137bb();
  if (((iVar1 - 1U < 0x7fff) && (-1 < iVar3)) && ((int)(iVar1 - 1U) <= iVar3)) {
    uVar2 = iVar3 + 1;
    _Dst = operator_new(uVar2);
    memset(_Dst,0,uVar2);
    FUN_100136d0(L"EOL");
    param_2 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = FUN_1000ed0e(0);
        if (*(char *)(iVar3 + (int)_Dst) == '\0') {
          FUN_100137eb(iVar3);
          param_2 = param_2 + 1;
          *(char *)(iVar3 + (int)_Dst) = '\x01';
        }
      } while (param_2 < iVar1);
    }
    memset(_Dst,0,uVar2);
    operator_delete(_Dst);
  }
  else {
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    if (DAT_10019582 != '\0') {
      MessageBoxW((HWND)0x0,L"RandList() was called with bad arguments!",L"StdUtils",0x2010);
    }
    FUN_100136d0(L"einval");
  }
  return;
}



// ===== RandBytes @ 1000f014 (size 309) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
RandBytes(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  wchar_t wVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  void *this;
  
                    /* 0xf014  32  RandBytes */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar3 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar3 = 0;
    }
    UNLOCK();
    if (uVar3 == 0) {
      iVar2 = (*(code *)param_5[3])(DAT_10019598,&LAB_1000eb04);
      uVar3 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar3;
    }
  } while ((int)uVar3 < 0);
  uVar3 = FUN_100137bb();
  if (((int)uVar3 < 1) || (DAT_10019d64 <= ((uVar3 + 2) / 3) * 4 + 1)) {
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    pwVar4 = L"too_long";
    if ((int)uVar3 < 1) {
      pwVar4 = L"einval";
    }
    FUN_100136d0(pwVar4);
  }
  else {
    _Dst = operator_new(uVar3);
    FUN_10008336(this,uVar3);
    pwVar4 = FUN_10001238((int)_Dst);
    if (pwVar4 == (wchar_t *)0x0) {
      *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
      FUN_100136d0(L"error");
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,uVar3);
        operator_delete(_Dst);
      }
    }
    else {
      FUN_100136d0(pwVar4);
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,uVar3);
        operator_delete(_Dst);
      }
      pwVar5 = pwVar4;
      do {
        wVar1 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar1 != L'\0');
      memset(pwVar4,0,((int)pwVar5 - (int)(pwVar4 + 1) >> 1) * 2);
      operator_delete(pwVar4);
    }
  }
  return;
}



// ===== FormatStr @ 1000f149 (size 339) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FormatStr(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  wchar_t wVar2;
  int iVar3;
  LPWSTR _Format;
  wchar_t *_Dest;
  LPWSTR pWVar4;
  uint uVar5;
  wchar_t *pwVar6;
  
                    /* 0xf149  4  FormatStr */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    if (uVar5 == 0) {
      iVar3 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar3);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _Format = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)DAT_10019d64 * 2));
  uVar5 = DAT_10019d64;
  memset(_Format,0,DAT_10019d64 * 2);
  _Dest = operator_new(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar5 * 2));
  memset(_Dest,0,DAT_10019d64 * 2);
  iVar3 = FUN_100137bb();
  FUN_10013681(_Format,0);
  iVar3 = _snwprintf(_Dest,DAT_10019d64,_Format,iVar3);
  if (iVar3 < 0) {
    _Dest[DAT_10019d64 - 1] = L'\0';
  }
  FUN_100136d0(_Dest);
  if (_Format != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar4 = _Format;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar4 - (int)(_Format + 1) >> 1;
    }
    memset(_Format,0,uVar5 * 2);
    operator_delete(_Format);
  }
  if (_Dest != (wchar_t *)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pwVar6 = _Dest;
      do {
        wVar2 = *pwVar6;
        pwVar6 = pwVar6 + 1;
      } while (wVar2 != L'\0');
      uVar5 = (int)pwVar6 - (int)(_Dest + 1) >> 1;
    }
    memset(_Dest,0,uVar5 * 2);
    operator_delete(_Dest);
  }
  return;
}



// ===== FormatStr2 @ 1000f29c (size 350) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FormatStr2(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  wchar_t wVar2;
  int iVar3;
  LPWSTR _Format;
  wchar_t *_Dest;
  int iVar4;
  LPWSTR pWVar5;
  uint uVar6;
  wchar_t *pwVar7;
  
                    /* 0xf29c  5  FormatStr2 */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    if (uVar6 == 0) {
      iVar3 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar3);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  _Format = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)DAT_10019d64 * 2));
  uVar6 = DAT_10019d64;
  memset(_Format,0,DAT_10019d64 * 2);
  _Dest = operator_new(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar6 * 2));
  memset(_Dest,0,DAT_10019d64 * 2);
  iVar3 = FUN_100137bb();
  iVar4 = FUN_100137bb();
  FUN_10013681(_Format,0);
  iVar3 = _snwprintf(_Dest,DAT_10019d64,_Format,iVar4,iVar3);
  if (iVar3 < 0) {
    _Dest[DAT_10019d64 - 1] = L'\0';
  }
  FUN_100136d0(_Dest);
  if (_Format != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = _Format;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar5 - (int)(_Format + 1) >> 1;
    }
    memset(_Format,0,uVar6 * 2);
    operator_delete(_Format);
  }
  if (_Dest != (wchar_t *)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pwVar7 = _Dest;
      do {
        wVar2 = *pwVar7;
        pwVar7 = pwVar7 + 1;
      } while (wVar2 != L'\0');
      uVar6 = (int)pwVar7 - (int)(_Dest + 1) >> 1;
    }
    memset(_Dest,0,uVar6 * 2);
    operator_delete(_Dest);
  }
  return;
}



// ===== FormatStr3 @ 1000f3fa (size 361) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FormatStr3(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  wchar_t wVar2;
  int iVar3;
  LPWSTR _Format;
  wchar_t *_Dest;
  int iVar4;
  int iVar5;
  LPWSTR pWVar6;
  uint uVar7;
  wchar_t *pwVar8;
  
                    /* 0xf3fa  6  FormatStr3 */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar7 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar7 = 0;
    }
    UNLOCK();
    if (uVar7 == 0) {
      iVar3 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar7 = (uint)(-1 < iVar3);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar7;
    }
  } while ((int)uVar7 < 0);
  _Format = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)DAT_10019d64 * 2));
  uVar7 = DAT_10019d64;
  memset(_Format,0,DAT_10019d64 * 2);
  _Dest = operator_new(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar7 * 2));
  memset(_Dest,0,DAT_10019d64 * 2);
  iVar3 = FUN_100137bb();
  iVar4 = FUN_100137bb();
  iVar5 = FUN_100137bb();
  FUN_10013681(_Format,0);
  iVar3 = _snwprintf(_Dest,DAT_10019d64,_Format,iVar5,iVar4,iVar3);
  if (iVar3 < 0) {
    _Dest[DAT_10019d64 - 1] = L'\0';
  }
  FUN_100136d0(_Dest);
  if (_Format != (LPWSTR)0x0) {
    uVar7 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = _Format;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar7 = (int)pWVar6 - (int)(_Format + 1) >> 1;
    }
    memset(_Format,0,uVar7 * 2);
    operator_delete(_Format);
  }
  if (_Dest != (wchar_t *)0x0) {
    uVar7 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pwVar8 = _Dest;
      do {
        wVar2 = *pwVar8;
        pwVar8 = pwVar8 + 1;
      } while (wVar2 != L'\0');
      uVar7 = (int)pwVar8 - (int)(_Dest + 1) >> 1;
    }
    memset(_Dest,0,uVar7 * 2);
    operator_delete(_Dest);
  }
  return;
}



// ===== ScanStr @ 1000f563 (size 344) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ScanStr(undefined4 param_1,uint param_2,undefined4 param_3,LPWSTR param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  uint uVar4;
  LPWSTR pWVar5;
  
                    /* 0xf563  39  ScanStr */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  param_4 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)DAT_10019d64 * 2));
  uVar4 = DAT_10019d64;
  memset(param_4,0,DAT_10019d64 * 2);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar4 * 2));
  memset(pWVar3,0,DAT_10019d64 * 2);
  uVar4 = FUN_100137bb();
  FUN_10013681(param_4,0);
  FUN_10013681(pWVar3,0);
  param_2 = 0;
  iVar2 = swscanf(param_4,pWVar3,&param_2);
  if (iVar2 != 1) {
    param_2 = uVar4;
  }
  FUN_100137eb(param_2);
  if (pWVar3 != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = pWVar3;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar5 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar4 * 2);
    operator_delete(pWVar3);
  }
  pWVar3 = param_4;
  if (param_4 != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = param_4;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar5 - (int)(param_4 + 1) >> 1;
    }
    memset(param_4,0,uVar4 * 2);
    operator_delete(pWVar3);
  }
  return;
}



// ===== ScanStr2 @ 1000f6bb (size 379) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ScanStr2(undefined4 param_1,uint param_2,LPWSTR param_3,int param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  uint uVar4;
  int iVar5;
  LPWSTR pWVar6;
  
                    /* 0xf6bb  40  ScanStr2 */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  param_3 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)DAT_10019d64 * 2));
  uVar4 = DAT_10019d64;
  memset(param_3,0,DAT_10019d64 * 2);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar4 * 2));
  memset(pWVar3,0,DAT_10019d64 * 2);
  uVar4 = FUN_100137bb();
  iVar2 = FUN_100137bb();
  FUN_10013681(param_3,0);
  FUN_10013681(pWVar3,0);
  param_4 = 0;
  param_2 = 0;
  iVar5 = swscanf(param_3,pWVar3,&param_4,&param_2);
  if ((iVar5 != 2) && (param_2 = uVar4, iVar5 != 1)) {
    param_4 = iVar2;
  }
  FUN_100137eb(param_2);
  FUN_100137eb(param_4);
  if (pWVar3 != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = pWVar3;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar6 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar4 * 2);
    operator_delete(pWVar3);
  }
  pWVar3 = param_3;
  if (param_3 != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = param_3;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar6 - (int)(param_3 + 1) >> 1;
    }
    memset(param_3,0,uVar4 * 2);
    operator_delete(pWVar3);
  }
  return;
}



// ===== ScanStr3 @ 1000f836 (size 416) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ScanStr3(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Src;
  LPWSTR pWVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  LPWSTR pWVar7;
  
                    /* 0xf836  41  ScanStr3 */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    if (uVar5 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _Src = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  uVar5 = DAT_10019d64;
  memset(_Src,0,DAT_10019d64 * 2);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar5 * 2));
  memset(pWVar3,0,DAT_10019d64 * 2);
  iVar4 = FUN_100137bb();
  uVar5 = FUN_100137bb();
  iVar2 = FUN_100137bb();
  FUN_10013681(_Src,0);
  FUN_10013681(pWVar3,0);
  param_3 = 0;
  param_2 = 0;
  param_4 = 0;
  iVar6 = swscanf(_Src,pWVar3,&param_3,&param_2,&param_4);
  if ((iVar6 != 3) && ((param_4 = iVar4, iVar6 == 0 || (iVar2 = param_3, iVar6 == 1)))) {
    param_3 = iVar2;
    param_2 = uVar5;
  }
  FUN_100137eb(param_4);
  FUN_100137eb(param_2);
  FUN_100137eb(param_3);
  if (pWVar3 != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = pWVar3;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar7 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar5 * 2);
    operator_delete(pWVar3);
  }
  if (_Src != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Src;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar3 - (int)(_Src + 1) >> 1;
    }
    memset(_Src,0,uVar5 * 2);
    operator_delete(_Src);
  }
  return;
}



// ===== TrimStr @ 1000f9d6 (size 214) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TrimStr(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  short *psVar3;
  LPCWSTR pWVar4;
  LPWSTR pWVar5;
  uint uVar6;
  
                    /* 0xf9d6  50  TrimStr */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    if (uVar6 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst,0);
  psVar3 = FUN_100135f4();
  pWVar4 = FUN_10013616(psVar3);
  FUN_100136d0(pWVar4);
  if (_Dst != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = _Dst;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar5 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar6 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== TrimStrLeft @ 1000faac (size 207) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TrimStrLeft(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  LPCWSTR pWVar3;
  LPWSTR pWVar4;
  uint uVar5;
  
                    /* 0xfaac  51  TrimStrLeft */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    if (uVar5 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst,0);
  pWVar3 = FUN_100135f4();
  FUN_100136d0(pWVar3);
  if (_Dst != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar4 = _Dst;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar4 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar5 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== TrimStrRight @ 1000fb7b (size 207) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TrimStrRight(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  LPCWSTR pWVar3;
  LPWSTR pWVar4;
  uint uVar5;
  
                    /* 0xfb7b  52  TrimStrRight */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    if (uVar5 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst,0);
  pWVar3 = FUN_10013616(_Dst);
  FUN_100136d0(pWVar3);
  if (_Dst != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar4 = _Dst;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar4 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar5 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== RevStr @ 1000fc4a (size 251) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
RevStr(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  uint uVar3;
  LPWSTR pWVar4;
  uint uVar5;
  
                    /* 0xfc4a  36  RevStr */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    if (uVar5 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst,0);
  if (*_Dst != L'\0') {
    uVar5 = 0;
    pWVar4 = _Dst;
    do {
      WVar1 = *pWVar4;
      pWVar4 = pWVar4 + 1;
    } while (WVar1 != L'\0');
    uVar3 = ((int)pWVar4 - (int)(_Dst + 1) >> 1) - 1;
    if (uVar3 != 0) {
      do {
        WVar1 = _Dst[uVar5];
        _Dst[uVar5] = _Dst[uVar3];
        uVar5 = uVar5 + 1;
        _Dst[uVar3] = WVar1;
        uVar3 = uVar3 - 1;
      } while (uVar5 < uVar3);
    }
  }
  FUN_100136d0(_Dst);
  uVar5 = DAT_10019d64;
  if (DAT_10019d64 == 0) {
    pWVar4 = _Dst;
    do {
      WVar1 = *pWVar4;
      pWVar4 = pWVar4 + 1;
    } while (WVar1 != L'\0');
    uVar5 = (int)pWVar4 - (int)(_Dst + 1) >> 1;
  }
  memset(_Dst,0,uVar5 * 2);
  operator_delete(_Dst);
  return;
}



// ===== ValidFileName @ 1000fd45 (size 305) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ValidFileName(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  wchar_t *pwVar3;
  LPWSTR pWVar4;
  uint uVar5;
  int iVar6;
  WCHAR *pWVar7;
  
                    /* 0xfd45  55  ValidFileName */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    iVar6 = 0;
    if (uVar5 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(_Dst,0);
  pWVar7 = _Dst;
  if (*_Dst != L'\0') {
    do {
      iVar2 = iswcntrl(*pWVar7);
      if (iVar2 != 0) goto LAB_1000fe35;
      iVar2 = 0;
      if (DAT_1001456c != L'\0') {
        WVar1 = DAT_1001456c;
        do {
          if (*pWVar7 == WVar1) goto LAB_1000fe35;
          WVar1 = (&DAT_1001456e)[iVar2];
          iVar2 = iVar2 + 1;
        } while (WVar1 != L'\0');
      }
      WVar1 = *pWVar7;
      iVar6 = iVar6 + 1;
      pWVar7 = _Dst + iVar6;
    } while (_Dst[iVar6] != L'\0');
    if ((WVar1 != L' ') && (pwVar3 = L"ok", WVar1 != L'.')) goto LAB_1000fe3a;
  }
LAB_1000fe35:
  pwVar3 = L"invalid";
LAB_1000fe3a:
  FUN_100136d0(pwVar3);
  uVar5 = DAT_10019d64;
  if (DAT_10019d64 == 0) {
    pWVar4 = _Dst;
    do {
      WVar1 = *pWVar4;
      pWVar4 = pWVar4 + 1;
    } while (WVar1 != L'\0');
    uVar5 = (int)pWVar4 - (int)(_Dst + 1) >> 1;
  }
  memset(_Dst,0,uVar5 * 2);
  operator_delete(_Dst);
  return;
}



// ===== ValidPathSpec @ 1000fe76 (size 362) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ValidPathSpec(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  undefined4 uVar3;
  wchar_t *pwVar4;
  LPWSTR pWVar5;
  uint uVar6;
  int iVar7;
  WCHAR *pWVar8;
  bool bVar9;
  
                    /* 0xfe76  56  ValidPathSpec */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    iVar7 = 0;
    if (uVar6 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(_Dst,0);
  pWVar8 = _Dst;
  if (*_Dst != L'\0') {
    do {
      iVar2 = iswcntrl(*pWVar8);
      if (iVar2 != 0) goto LAB_1000ff9f;
      iVar2 = 0;
      if (DAT_1001459c != L'\0') {
        WVar1 = DAT_1001459c;
        do {
          if (*pWVar8 == WVar1) goto LAB_1000ff9f;
          WVar1 = (&DAT_1001459e)[iVar2];
          iVar2 = iVar2 + 1;
        } while (WVar1 != L'\0');
      }
      if ((iVar7 == 0) && (uVar3 = FUN_10013659(), (char)uVar3 == '\0')) goto LAB_1000ff9f;
      if (iVar7 == 1) {
        bVar9 = _Dst[1] == L':';
LAB_1000ff81:
        if (!bVar9) goto LAB_1000ff9f;
      }
      else {
        if (*pWVar8 == L':') goto LAB_1000ff9f;
        if ((iVar7 == 2) && (_Dst[2] != L'/')) {
          bVar9 = _Dst[2] == L'\\';
          goto LAB_1000ff81;
        }
      }
      WVar1 = *pWVar8;
      iVar7 = iVar7 + 1;
      pWVar8 = _Dst + iVar7;
    } while (_Dst[iVar7] != L'\0');
    if ((WVar1 != L' ') && (pwVar4 = L"ok", WVar1 != L'.')) goto LAB_1000ffa4;
  }
LAB_1000ff9f:
  pwVar4 = L"invalid";
LAB_1000ffa4:
  FUN_100136d0(pwVar4);
  uVar6 = DAT_10019d64;
  if (DAT_10019d64 == 0) {
    pWVar5 = _Dst;
    do {
      WVar1 = *pWVar5;
      pWVar5 = pWVar5 + 1;
    } while (WVar1 != L'\0');
    uVar6 = (int)pWVar5 - (int)(_Dst + 1) >> 1;
  }
  memset(_Dst,0,uVar6 * 2);
  operator_delete(_Dst);
  return;
}



// ===== ValidDomainName @ 1000ffe1 (size 331) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ValidDomainName(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  uint uVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  LPWSTR pWVar6;
  int extraout_EDX;
  uint uVar7;
  uint uVar8;
  
                    /* 0xffe1  54  ValidDomainName */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar3 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar3 = 0;
    }
    UNLOCK();
    uVar8 = 0;
    if (uVar3 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar3 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar3;
    }
  } while ((int)uVar3 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst,0);
  pWVar6 = _Dst;
  do {
    WVar1 = *pWVar6;
    pWVar6 = pWVar6 + 1;
  } while (WVar1 != L'\0');
  uVar3 = (int)pWVar6 - (int)(_Dst + 1) >> 1;
  if (uVar3 - 1 < 0xff) {
    iVar2 = 0;
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        if (_Dst[uVar7] == L'.') {
          if ((uVar8 == 0) || ((short)iVar2 == 0x2d)) goto LAB_100100e6;
          uVar8 = 0;
          iVar2 = 0x2e;
        }
        else {
          uVar4 = FUN_10013659();
          if ((((char)uVar4 == '\0') && ((uVar8 == 0 || (extraout_EDX != 0x2d)))) ||
             (uVar8 = uVar8 + 1, iVar2 = extraout_EDX, 0x40 < uVar8)) goto LAB_100100e6;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
      if (((short)iVar2 == 0x2d) || ((short)iVar2 == 0x2e)) goto LAB_100100e6;
    }
    pwVar5 = L"ok";
  }
  else {
LAB_100100e6:
    pwVar5 = L"invalid";
  }
  FUN_100136d0(pwVar5);
  if (_Dst != (LPWSTR)0x0) {
    uVar3 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = _Dst;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar3 = (int)pWVar6 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar3 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== StrToUtf8 @ 1001012c (size 418) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
StrToUtf8(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  wchar_t wVar2;
  WCHAR WVar3;
  int iVar4;
  LPWSTR _Dst;
  LPSTR _Dst_00;
  LPSTR pCVar5;
  wchar_t *_Dst_01;
  wchar_t *pwVar6;
  LPWSTR pWVar7;
  uint uVar8;
  
                    /* 0x1012c  45  StrToUtf8 */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar8 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar8 = 0;
    }
    UNLOCK();
    if (uVar8 == 0) {
      iVar4 = (*(code *)param_5[3])(DAT_10019598,&LAB_1000eb04);
      uVar8 = (uint)(-1 < iVar4);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar8;
    }
  } while ((int)uVar8 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst,0);
  _Dst_00 = FUN_100134f1(_Dst);
  if (_Dst_00 == (LPSTR)0x0) {
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    FUN_100136d0(L"error");
  }
  else {
    pCVar5 = _Dst_00;
    do {
      cVar1 = *pCVar5;
      pCVar5 = pCVar5 + 1;
    } while (cVar1 != '\0');
    _Dst_01 = FUN_10001238((int)_Dst_00);
    if (_Dst_01 == (wchar_t *)0x0) {
      *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
      FUN_100136d0(L"error");
    }
    else {
      pwVar6 = _Dst_01;
      do {
        wVar2 = *pwVar6;
        pwVar6 = pwVar6 + 1;
      } while (wVar2 != L'\0');
      uVar8 = (int)pwVar6 - (int)(_Dst_01 + 1) >> 1;
      pwVar6 = _Dst_01;
      if (DAT_10019d64 <= uVar8) {
        *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
        pwVar6 = L"too_long";
      }
      FUN_100136d0(pwVar6);
      if (uVar8 == 0) {
        pwVar6 = _Dst_01;
        do {
          wVar2 = *pwVar6;
          pwVar6 = pwVar6 + 1;
        } while (wVar2 != L'\0');
        uVar8 = (int)pwVar6 - (int)(_Dst_01 + 1) >> 1;
      }
      memset(_Dst_01,0,uVar8 * 2);
      operator_delete(_Dst_01);
    }
    memset(_Dst_00,0,(size_t)(pCVar5 + (1 - (int)(_Dst_00 + 1))));
    operator_delete(_Dst_00);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = _Dst;
      do {
        WVar3 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar3 != L'\0');
      uVar8 = (int)pWVar7 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar8 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== StrFromUtf8 @ 100102ce (size 427) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
StrFromUtf8(undefined4 param_1,size_t param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  byte *_Dst_00;
  LPWSTR pWVar3;
  LPWSTR pWVar4;
  uint uVar5;
  wchar_t *pwVar6;
  
                    /* 0x102ce  44  StrFromUtf8 */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    if (uVar5 == 0) {
      iVar2 = (*(code *)param_5[3])(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst,0);
  iVar2 = FUN_100137bb();
  _Dst_00 = FUN_1000129f((ushort *)_Dst);
  if (_Dst_00 == (byte *)0x0) {
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    FUN_100136d0(L"error");
  }
  else {
    _Dst_00[param_2 - 1] = 0;
    pWVar3 = FUN_10013560((LPCSTR)_Dst_00);
    if (pWVar3 == (LPWSTR)0x0) {
      *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
      FUN_100136d0(L"error");
    }
    else {
      pWVar4 = pWVar3;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar4 - (int)(pWVar3 + 1) >> 1;
      pwVar6 = pWVar3;
      if (DAT_10019d64 <= uVar5) {
        if (iVar2 < 1) {
          *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
          pwVar6 = L"too_long";
        }
        else {
          pWVar3[DAT_10019d64 - 1] = L'\0';
        }
      }
      FUN_100136d0(pwVar6);
      if (uVar5 == 0) {
        pWVar4 = pWVar3;
        do {
          WVar1 = *pWVar4;
          pWVar4 = pWVar4 + 1;
        } while (WVar1 != L'\0');
        uVar5 = (int)pWVar4 - (int)(pWVar3 + 1) >> 1;
      }
      memset(pWVar3,0,uVar5 * 2);
      operator_delete(pWVar3);
    }
    memset(_Dst_00,0,param_2);
    operator_delete(_Dst_00);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dst;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar3 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar5 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== SHFileMove @ 10010479 (size 484) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SHFileMove(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  LPWSTR _Dst;
  _SHFILEOPSTRUCTW *p_Var4;
  HWND pHVar5;
  wchar_t *pwVar6;
  LPWSTR pWVar7;
  uint uVar8;
  wchar_t local_824 [1023];
  undefined2 local_26;
  _SHFILEOPSTRUCTW local_24;
  
                    /* 0x10479  38  SHFileMove */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar8 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar8 = 0;
    }
    UNLOCK();
    if (uVar8 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar8 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar8;
    }
  } while ((int)uVar8 < 0);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar8 = DAT_10019d64;
  memset(pWVar3,0,DAT_10019d64 * 2);
  _Dst = operator_new(-(uint)((int)((ulonglong)uVar8 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar8 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  iVar2 = 0x1e;
  p_Var4 = &local_24;
  do {
    *(undefined1 *)&p_Var4->hwnd = 0;
    p_Var4 = (_SHFILEOPSTRUCTW *)((int)&p_Var4->hwnd + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pHVar5 = (HWND)FUN_100137bb();
  FUN_10013681(_Dst,0);
  FUN_10013681(pWVar3,0);
  local_24.wFunc = 1;
  local_24.fFlags = 0x610;
  if (pHVar5 == (HWND)0x0) {
    local_24.fFlags = 0x614;
  }
  local_24.hwnd = pHVar5;
  local_24.pFrom = pWVar3;
  local_24.pTo = _Dst;
  iVar2 = SHFileOperationW(&local_24);
  if (iVar2 == 0) {
    if (local_24.fAnyOperationsAborted == 0) {
      pwVar6 = L"OK";
    }
    else {
      pwVar6 = L"ABORTED";
    }
  }
  else {
    pwVar6 = L"ERROR";
  }
  FUN_100136d0(pwVar6);
  if ((iVar2 != 0) && (DAT_10019582 != '\0')) {
    _snwprintf(local_824,0x400,L"Failed with error code: 0x%X",iVar2);
    local_26 = 0;
    MessageBoxW((HWND)0x0,local_824,L"StdUtils::SHFileMove",0x40010);
  }
  if (pWVar3 != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = pWVar3;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar7 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar8 * 2);
    operator_delete(pWVar3);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dst;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar3 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar8 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== SHFileCopy @ 1001065d (size 482) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SHFileCopy(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  LPWSTR _Dst;
  _SHFILEOPSTRUCTW *p_Var4;
  HWND pHVar5;
  wchar_t *pwVar6;
  LPWSTR pWVar7;
  uint uVar8;
  char local_424 [1023];
  undefined1 local_25;
  _SHFILEOPSTRUCTW local_24;
  
                    /* 0x1065d  37  SHFileCopy */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar8 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar8 = 0;
    }
    UNLOCK();
    if (uVar8 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar8 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar8;
    }
  } while ((int)uVar8 < 0);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar8 = DAT_10019d64;
  memset(pWVar3,0,DAT_10019d64 * 2);
  _Dst = operator_new(-(uint)((int)((ulonglong)uVar8 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar8 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  iVar2 = 0x1e;
  p_Var4 = &local_24;
  do {
    *(undefined1 *)&p_Var4->hwnd = 0;
    p_Var4 = (_SHFILEOPSTRUCTW *)((int)&p_Var4->hwnd + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pHVar5 = (HWND)FUN_100137bb();
  FUN_10013681(_Dst,0);
  FUN_10013681(pWVar3,0);
  local_24.wFunc = 2;
  local_24.fFlags = 0x610;
  if (pHVar5 == (HWND)0x0) {
    local_24.fFlags = 0x614;
  }
  local_24.hwnd = pHVar5;
  local_24.pFrom = pWVar3;
  local_24.pTo = _Dst;
  iVar2 = SHFileOperationW(&local_24);
  if (iVar2 == 0) {
    if (local_24.fAnyOperationsAborted == 0) {
      pwVar6 = L"OK";
    }
    else {
      pwVar6 = L"ABORTED";
    }
  }
  else {
    pwVar6 = L"ERROR";
  }
  FUN_100136d0(pwVar6);
  if ((iVar2 != 0) && (DAT_10019582 != '\0')) {
    _snprintf(local_424,0x400,"Failed with error code: 0x%X",iVar2);
    local_25 = 0;
    MessageBoxA((HWND)0x0,local_424,"StdUtils::SHFileCopy",0x40010);
  }
  if (pWVar3 != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = pWVar3;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar7 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar8 * 2);
    operator_delete(pWVar3);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dst;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar3 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar8 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== AppendToFile @ 1001083f (size 433) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AppendToFile(undefined4 param_1,uint param_2,undefined4 param_3,LPWSTR param_4,int param_5)

{
  WCHAR WVar1;
  void *pvVar2;
  int iVar3;
  LPWSTR _Dst;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  LPWSTR pWVar7;
  LPWSTR pWVar8;
  void *unaff_EBX;
  uint unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint uVar9;
  undefined4 in_stack_fffffff4;
  
                    /* 0x1083f  1  AppendToFile */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar9 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar9 = 0;
    }
    UNLOCK();
    if (uVar9 == 0) {
      iVar3 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar9 = (uint)(-1 < iVar3);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar9;
    }
  } while ((int)uVar9 < 0);
  param_4 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)DAT_10019d64 * 2));
  uVar9 = DAT_10019d64;
  memset(param_4,0,DAT_10019d64 * 2);
  _Dst = operator_new(-(uint)((int)((ulonglong)uVar9 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar9 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  iVar3 = FUN_100137bb();
  param_3 = 0;
  puVar6 = &param_3;
  if (-1 < iVar3) {
    puVar6 = (undefined4 *)&stack0xfffffff8;
  }
  pvVar2 = (void *)*puVar6;
  pvVar4 = (void *)FUN_100137bb();
  param_3 = 0;
  puVar6 = &param_3;
  if (-1 < (int)pvVar4) {
    puVar6 = (undefined4 *)&stack0xfffffff8;
  }
  FUN_10013681(_Dst,0);
  FUN_10013681(param_4,0);
  pWVar8 = param_4;
  uVar9 = 0;
  iVar3 = 0;
  uVar5 = FUN_100068dc(param_4,_Dst,(void *)*puVar6,pvVar2,unaff_EDI,unaff_ESI,unaff_EBX,0,0,
                       in_stack_fffffff4,pvVar4,unaff_EBP);
  if ((char)uVar5 == '\0') {
    FUN_100136d0(L"error");
  }
  else {
    if ((iVar3 == 0) && (uVar9 < 0x7fffffff)) {
      puVar6 = (undefined4 *)&stack0xffffffec;
    }
    else {
      puVar6 = (undefined4 *)&stack0xfffffff4;
    }
    FUN_100137eb(*puVar6);
  }
  if (pWVar8 != (LPWSTR)0x0) {
    uVar9 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = pWVar8;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar9 = (int)pWVar7 - (int)(pWVar8 + 1) >> 1;
    }
    memset(pWVar8,0,uVar9 * 2);
    operator_delete(pWVar8);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar9 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar8 = _Dst;
      do {
        WVar1 = *pWVar8;
        pWVar8 = pWVar8 + 1;
      } while (WVar1 != L'\0');
      uVar9 = (int)pWVar8 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar9 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== ExecShellAsUser @ 100109f0 (size 687) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ExecShellAsUser(undefined4 param_1,uint param_2,LPWSTR param_3,LPWSTR param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  LPWSTR pWVar6;
  wchar_t *pwVar7;
  LPCWSTR local_8;
  
                    /* 0x109f0  2  ExecShellAsUser */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  local_8 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)DAT_10019d64 * 2));
  uVar4 = DAT_10019d64;
  memset(local_8,0,DAT_10019d64 * 2);
  param_3 = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar4 * 2));
  uVar4 = DAT_10019d64;
  memset(param_3,0,DAT_10019d64 * 2);
  param_4 = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar4 * 2));
  memset(param_4,0,DAT_10019d64 * 2);
  FUN_10013681(param_4,0);
  FUN_10013681(param_3,0);
  FUN_10013681(local_8,0);
  if (*local_8 == L'\0') {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = local_8;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar3 - (int)(local_8 + 1) >> 1;
    }
    memset(local_8,0,uVar4 * 2);
    operator_delete(local_8);
    local_8 = (LPCWSTR)0x0;
  }
  pWVar3 = param_3;
  if (*param_3 == L'\0') {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = param_3;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar6 - (int)(param_3 + 1) >> 1;
    }
    memset(param_3,0,uVar4 * 2);
    operator_delete(pWVar3);
    param_3 = (LPWSTR)0x0;
  }
  pWVar3 = param_4;
  if (*param_4 == L'\0') {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = param_4;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar6 - (int)(param_4 + 1) >> 1;
    }
    memset(param_4,0,uVar4 * 2);
    operator_delete(pWVar3);
    param_4 = (LPWSTR)0x0;
  }
  if (local_8 == (LPCWSTR)0x0) {
    pwVar7 = L"einval";
  }
  else {
    param_2 = CONCAT13(1,(undefined3)param_2);
    iVar2 = FUN_1000e75f(param_3,local_8,param_4,(char *)((int)&param_2 + 3));
    if (iVar2 == 0) {
      pwVar7 = L"ok";
    }
    else if (iVar2 == 1) {
      pwVar7 = L"error";
    }
    else if (iVar2 == 2) {
      pwVar7 = L"timeout";
    }
    else if (iVar2 == 3) {
      pwVar7 = L"unsupported";
    }
    else if (iVar2 == 4) {
      pwVar7 = L"not_found";
    }
    else if (iVar2 == 5) {
      pwVar7 = L"fallback";
    }
    else {
      pwVar7 = L"unknown";
    }
  }
  FUN_100136d0(pwVar7);
  pWVar3 = param_3;
  if (param_3 != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = param_3;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar6 - (int)(param_3 + 1) >> 1;
    }
    memset(param_3,0,uVar4 * 2);
    operator_delete(pWVar3);
  }
  if (local_8 != (LPCWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = local_8;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar5 - (int)(local_8 + 1) >> 1;
    }
    memset(local_8,0,uVar4 * 2);
    operator_delete(local_8);
  }
  pWVar3 = param_4;
  if (param_4 != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = param_4;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar6 - (int)(param_4 + 1) >> 1;
    }
    memset(param_4,0,uVar4 * 2);
    operator_delete(pWVar3);
  }
  return;
}



// ===== InvokeShellVerb @ 10010c9f (size 586) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
InvokeShellVerb(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  LPWSTR _Dst;
  uint uVar4;
  uint uVar5;
  LPWSTR pWVar6;
  wchar_t *pwVar7;
  
                    /* 0x10c9f  26  InvokeShellVerb */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar4 = DAT_10019d64;
  memset(pWVar3,0,DAT_10019d64 * 2);
  _Dst = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar4 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  uVar4 = FUN_100137bb();
  FUN_10013681(_Dst,0);
  FUN_10013681(pWVar3,0);
  if (*_Dst == L'\0') {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = _Dst;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar6 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar5 * 2);
    operator_delete(_Dst);
    _Dst = (LPWSTR)0x0;
  }
  if (*pWVar3 == L'\0') {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = pWVar3;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar6 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar5 * 2);
    operator_delete(pWVar3);
    pWVar3 = (LPWSTR)0x0;
  }
  if ((_Dst == (LPWSTR)0x0) || (pWVar3 == (LPWSTR)0x0)) {
    if (DAT_10019582 != '\0') {
      MessageBoxW((HWND)0x0,L"InvokeShellVerb: Specified file name and/or path is missing!",
                  L"StdUtils",0x2010);
    }
    pwVar7 = L"einval";
  }
  else if (uVar4 < 4) {
    iVar2 = FUN_10007664(pWVar3,_Dst,&DAT_10017474 + uVar4 * 0xc);
    if (iVar2 == 0) {
      pwVar7 = L"ok";
    }
    else if (iVar2 == 1) {
      pwVar7 = L"error";
    }
    else if (iVar2 == 2) {
      pwVar7 = L"timeout";
    }
    else if (iVar2 == 3) {
      pwVar7 = L"unsupported";
    }
    else if (iVar2 == 4) {
      pwVar7 = L"not_found";
    }
    else {
      pwVar7 = L"unknown";
    }
  }
  else {
    if (DAT_10019582 != '\0') {
      MessageBoxW((HWND)0x0,L"InvokeShellVerb: And invalid verb id has been specified!",L"StdUtils",
                  0x2010);
    }
    pwVar7 = L"einval";
  }
  FUN_100136d0(pwVar7);
  if (pWVar3 != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = pWVar3;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar6 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar4 * 2);
    operator_delete(pWVar3);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dst;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar3 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar4 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== ExecShellWaitEx @ 10010ee9 (size 618) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ExecShellWaitEx(HWND param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  LPWSTR _Dst_00;
  LPWSTR _Dst_01;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  LPWSTR pWVar6;
  wchar_t *pwVar7;
  wchar_t local_80 [32];
  SHELLEXECUTEINFOW local_40;
  
                    /* 0x10ee9  3  ExecShellWaitEx */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    if (uVar5 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  uVar5 = DAT_10019d64;
  memset(_Dst,0,DAT_10019d64 * 2);
  _Dst_00 = operator_new(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar5 * 2));
  uVar5 = DAT_10019d64;
  memset(_Dst_00,0,DAT_10019d64 * 2);
  _Dst_01 = operator_new(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar5 * 2));
  memset(_Dst_01,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst_01,0);
  FUN_10013681(_Dst_00,0);
  FUN_10013681(_Dst,0);
  memset(&local_40,0,0x3c);
  local_40.hwnd = param_1;
  local_40.cbSize = 0x3c;
  local_40.fMask = 0x140;
  pWVar6 = _Dst_00;
  do {
    WVar1 = *pWVar6;
    pWVar6 = pWVar6 + 1;
  } while (WVar1 != L'\0');
  local_40.lpVerb = (LPCWSTR)(-(uint)((int)pWVar6 - (int)(_Dst_00 + 1) >> 1 != 0) & (uint)_Dst_00);
  pWVar6 = _Dst_01;
  do {
    WVar1 = *pWVar6;
    pWVar6 = pWVar6 + 1;
  } while (WVar1 != L'\0');
  local_40.lpParameters =
       (LPCWSTR)(-(uint)((int)pWVar6 - (int)(_Dst_01 + 1) >> 1 != 0) & (uint)_Dst_01);
  local_40.nShow = 1;
  local_40.lpFile = _Dst;
  BVar3 = ShellExecuteExW(&local_40);
  if (BVar3 == 0) {
    DVar4 = GetLastError();
    FUN_100137eb(DVar4);
    pwVar7 = L"error";
  }
  else if ((local_40.hProcess == (HANDLE)0x0) || (local_40.hProcess == (HANDLE)0xffffffff)) {
    FUN_100137eb(0);
    pwVar7 = L"no_wait";
  }
  else {
    _snwprintf(local_80,0x20,L"hProc:%08X",local_40.hProcess);
    FUN_100136d0(local_80);
    pwVar7 = L"ok";
  }
  FUN_100136d0(pwVar7);
  if (_Dst != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = _Dst;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar6 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar5 * 2);
    operator_delete(_Dst);
  }
  if (_Dst_00 != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = _Dst_00;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar6 - (int)(_Dst_00 + 1) >> 1;
    }
    memset(_Dst_00,0,uVar5 * 2);
    operator_delete(_Dst_00);
  }
  if (_Dst_01 != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = _Dst_01;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar6 - (int)(_Dst_01 + 1) >> 1;
    }
    memset(_Dst_01,0,uVar5 * 2);
    operator_delete(_Dst_01);
  }
  return;
}



// ===== WaitForProcEx @ 10011153 (size 301) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl WaitForProcEx(undefined4 param_1,uint param_2,DWORD param_3,HANDLE param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Src;
  DWORD DVar3;
  BOOL BVar4;
  LPWSTR pWVar5;
  uint uVar6;
  bool bVar7;
  
                    /* 0x11153  59  WaitForProcEx */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    if (uVar6 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  _Src = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Src,0,DAT_10019d64 * 2);
  FUN_10013681(_Src,0);
  param_4 = (HANDLE)0x0;
  iVar2 = swscanf(_Src,L"hProc:%X",&param_4);
  param_3 = 0;
  bVar7 = false;
  if ((iVar2 == 1) && (param_4 != (HANDLE)0x0)) {
    DVar3 = WaitForSingleObject(param_4,0xffffffff);
    if (DVar3 == 0) {
      BVar4 = GetExitCodeProcess(param_4,&param_3);
      bVar7 = BVar4 != 0;
    }
    CloseHandle(param_4);
    if (bVar7) {
      FUN_100137eb(param_3);
      goto LAB_10011247;
    }
  }
  FUN_100136d0(L"error");
LAB_10011247:
  if (_Src != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = _Src;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar5 - (int)(_Src + 1) >> 1;
    }
    memset(_Src,0,uVar6 * 2);
    operator_delete(_Src);
  }
  return;
}



// ===== GetParameter @ 10011280 (size 358) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetParameter(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  LPWSTR _Dst;
  short *psVar4;
  wchar_t *pwVar5;
  LPCWSTR pWVar6;
  LPWSTR pWVar7;
  uint uVar8;
  
                    /* 0x11280  19  GetParameter */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar8 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar8 = 0;
    }
    UNLOCK();
    if (uVar8 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar8 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar8;
    }
  } while ((int)uVar8 < 0);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar8 = DAT_10019d64;
  memset(pWVar3,0,DAT_10019d64 * 2);
  _Dst = operator_new(-(uint)((int)((ulonglong)uVar8 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar8 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(pWVar3,0);
  FUN_10013681(_Dst,0);
  psVar4 = FUN_100135f4();
  pwVar5 = FUN_10013616(psVar4);
  FUN_10007a42(pwVar5,pWVar3,DAT_10019d64);
  psVar4 = FUN_100135f4();
  pWVar6 = FUN_10013616(psVar4);
  FUN_100136d0(pWVar6);
  if (pWVar3 != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = pWVar3;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar7 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar8 * 2);
    operator_delete(pWVar3);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dst;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar3 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar8 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== TestParameter @ 100113e6 (size 251) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TestParameter(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  short *psVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  LPWSTR pWVar6;
  uint uVar7;
  
                    /* 0x113e6  46  TestParameter */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar7 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar7 = 0;
    }
    UNLOCK();
    if (uVar7 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar7 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar7;
    }
  } while ((int)uVar7 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(_Dst,0);
  psVar3 = FUN_100135f4();
  pwVar4 = FUN_10013616(psVar3);
  uVar5 = FUN_10007a42(pwVar4,(wchar_t *)0x0,0);
  pwVar4 = L"true";
  if ((char)uVar5 == '\0') {
    pwVar4 = L"false";
  }
  FUN_100136d0(pwVar4);
  if (_Dst != (LPWSTR)0x0) {
    uVar7 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = _Dst;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar7 = (int)pWVar6 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar7 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== ParameterStr @ 100114e1 (size 300) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ParameterStr(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *_Dest;
  int iVar3;
  short *psVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
                    /* 0x114e1  29  ParameterStr */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    if (uVar6 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  _Dest = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Dest,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  iVar2 = FUN_100137bb();
  uVar6 = DAT_10019d64;
  if ((iVar2 < 0) ||
     (((DAT_10019581 == '\0' && (iVar3 = FUN_1000785a(), (char)iVar3 == '\0')) ||
      (DAT_10019584 <= iVar2 + 1)))) {
    pwVar5 = L"error";
  }
  else {
    wcsncpy(_Dest,*(wchar_t **)(DAT_10019588 + (iVar2 + 1) * 4),uVar6);
    _Dest[uVar6 - 1] = L'\0';
    psVar4 = FUN_100135f4();
    pwVar5 = FUN_10013616(psVar4);
  }
  FUN_100136d0(pwVar5);
  if (_Dest != (wchar_t *)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pwVar5 = _Dest;
      do {
        wVar1 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar1 != L'\0');
      uVar6 = (int)pwVar5 - (int)(_Dest + 1) >> 1;
    }
    memset(_Dest,0,uVar6 * 2);
    operator_delete(_Dest);
  }
  return;
}



// ===== ParameterCnt @ 1001160d (size 154) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ParameterCnt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  uint uVar2;
  
                    /* 0x1160d  28  ParameterCnt */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  _wsetlocale(0,L"C");
  if ((DAT_10019581 != '\0') || (iVar1 = FUN_1000785a(), (char)iVar1 != '\0')) {
    if (DAT_10019584 < 2) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_10019584 + -1;
    }
    if (-1 < iVar1) {
      FUN_100137eb(iVar1);
      return;
    }
  }
  FUN_100136d0(L"error");
  return;
}



// ===== GetAllParameters @ 100116a7 (size 159) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetAllParameters(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  wchar_t wVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
                    /* 0x116a7  7  GetAllParameters */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar3 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar3 = 0;
    }
    UNLOCK();
    if (uVar3 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar3 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar3;
    }
  } while ((int)uVar3 < 0);
  _wsetlocale(0,L"C");
  iVar2 = FUN_100137bb();
  pwVar4 = FUN_10007ab0();
  pwVar5 = pwVar4;
  do {
    wVar1 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  } while (wVar1 != L'\0');
  if ((DAT_10019d64 <= (uint)((int)pwVar5 - (int)(pwVar4 + 1) >> 1)) && (iVar2 == 0)) {
    pwVar4 = L"too_long";
  }
  FUN_100136d0(pwVar4);
  return;
}



// ===== GetRealOsVersion @ 10011746 (size 173) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetRealOsVersion(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  int iVar1;
  uint uVar2;
  DWORD local_10;
  DWORD local_c;
  undefined4 local_8;
  
                    /* 0x11746  23  GetRealOsVersion */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_10005aa8(&local_10,&local_c,(char *)((int)&param_2 + 3));
  if ((char)iVar1 == '\0') {
    FUN_100136d0(L"error");
    FUN_100136d0(L"error");
    FUN_100136d0(L"error");
    return;
  }
  FUN_100137eb(local_8);
  FUN_100137eb(local_c);
  FUN_100137eb(local_10);
  return;
}



// ===== GetRealOsBuildNo @ 100117f3 (size 124) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetRealOsBuildNo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x117f3  21  GetRealOsBuildNo */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_10005d51((char *)((int)&param_2 + 3));
  if ((char)iVar1 == '\0') {
    FUN_100136d0(L"error");
    return;
  }
  FUN_100137eb(param_4);
  return;
}



// ===== VerifyRealOsVersion @ 1001186f (size 211) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
VerifyRealOsVersion(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint local_1c [3];
  DWORD local_10 [3];
  
                    /* 0x1186f  58  VerifyRealOsVersion */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar3 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar3);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  uVar4 = FUN_100137bb();
  local_1c[2] = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  uVar4 = FUN_100137bb();
  local_1c[1] = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  uVar4 = FUN_100137bb();
  local_1c[0] = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  iVar3 = FUN_10005aa8(local_10,local_10 + 1,(char *)((int)&param_2 + 3));
  if ((char)iVar3 == '\0') {
    pwVar5 = L"error";
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)((int)local_10 + uVar4);
      uVar2 = *(uint *)((int)local_1c + uVar4);
      if (uVar1 >= uVar2 && uVar1 != uVar2) {
        pwVar5 = L"newer";
        goto LAB_1001192d;
      }
      if (uVar1 < uVar2) {
        pwVar5 = L"older";
        goto LAB_1001192d;
      }
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0xc);
    pwVar5 = L"ok";
  }
LAB_1001192d:
  FUN_100136d0(pwVar5);
  return;
}



// ===== VerifyRealOsBuildNo @ 10011942 (size 154) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
VerifyRealOsBuildNo(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                   int param_5)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  
                    /* 0x11942  57  VerifyRealOsBuildNo */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  uVar2 = FUN_100137bb();
  uVar2 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  iVar1 = FUN_10005d51((char *)((int)&param_2 + 3));
  if ((char)iVar1 == '\0') {
    pwVar3 = L"error";
  }
  else if (uVar2 < param_4) {
    pwVar3 = L"newer";
  }
  else if (param_4 < uVar2) {
    pwVar3 = L"older";
  }
  else {
    pwVar3 = L"ok";
  }
  FUN_100136d0(pwVar3);
  return;
}



// ===== GetRealOsName @ 100119dc (size 162) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetRealOsName(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  DWORD local_10;
  DWORD local_c [2];
  
                    /* 0x119dc  22  GetRealOsName */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar3 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar3 = 0;
    }
    UNLOCK();
    if (uVar3 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar3 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar3;
    }
  } while ((int)uVar3 < 0);
  iVar2 = FUN_10005aa8(&local_10,local_c,(char *)&param_2);
  if ((char)iVar2 == '\0') {
    pwVar4 = L"error";
  }
  else {
    cVar1 = FUN_1000625a();
    if (cVar1 == '\0') {
      param_2 = param_2 & 0xffffff00;
    }
    pwVar4 = FUN_10005f17(local_10,local_c[0],(char)param_2);
  }
  FUN_100136d0(pwVar4);
  return;
}



// ===== GetOsEdition @ 10011a7e (size 128) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetOsEdition(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  char cVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
                    /* 0x11a7e  16  GetOsEdition */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar3 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar3 = 0;
    }
    UNLOCK();
    if (uVar3 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar3 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar3;
    }
  } while ((int)uVar3 < 0);
  cVar1 = FUN_1000625a();
  if (cVar1 == '\0') {
    pwVar4 = L"error";
  }
  else {
    pwVar4 = L"server";
    if (param_2._3_1_ == '\0') {
      pwVar4 = L"workstation";
    }
  }
  FUN_100136d0(pwVar4);
  return;
}



// ===== GetOsReleaseId @ 10011afe (size 136) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetOsReleaseId(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  
                    /* 0x11afe  17  GetOsReleaseId */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_100062b2();
  if (iVar1 < 1) {
    pwVar3 = L"error";
    if (-1 < iVar1) {
      pwVar3 = L"unavail";
    }
    FUN_100136d0(pwVar3);
    return;
  }
  uVar2 = 0x7fffffff;
  if (param_2 < 0x80000000) {
    uVar2 = param_2;
  }
  FUN_100137eb(uVar2);
  return;
}



// ===== GetOsReleaseName @ 10011b86 (size 126) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetOsReleaseName(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  
                    /* 0x11b86  18  GetOsReleaseName */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_100062b2();
  if (iVar1 < 1) {
    pwVar3 = L"error";
    if (-1 < iVar1) {
      pwVar3 = L"unavail";
    }
  }
  else {
    pwVar3 = FUN_1000649b(param_2);
  }
  FUN_100136d0(pwVar3);
  return;
}



// ===== FUN_10011c04 @ 10011c04 (size 423) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10011c04(wchar_t *param_1)

{
  wchar_t **ppwVar1;
  int iVar2;
  int iVar3;
  
  if ((_DAT_10019628 & 1) == 0) {
    _DAT_10019628 = _DAT_10019628 | 1;
    _DAT_10019624 = 0xffffffff;
    DAT_100195a8 = L"CRC-32";
    DAT_100195ac = 1;
    DAT_100195b0 = L"MD5-128";
    _DAT_100195b4 = 2;
    _DAT_100195b8 = L"SHA1-160";
    _DAT_100195bc = 3;
    _DAT_100195c0 = L"SHA2-224";
    _DAT_100195c4 = 4;
    _DAT_100195c8 = L"SHA2-256";
    _DAT_100195cc = 5;
    _DAT_100195d0 = L"SHA2-384";
    _DAT_100195d4 = 6;
    _DAT_100195d8 = L"SHA2-512";
    _DAT_100195dc = 7;
    _DAT_100195e0 = L"SHA3-224";
    _DAT_100195e4 = 8;
    _DAT_100195e8 = L"SHA3-256";
    _DAT_100195ec = 9;
    _DAT_100195f0 = L"SHA3-384";
    _DAT_100195f4 = 10;
    _DAT_100195f8 = L"SHA3-512";
    _DAT_100195fc = 0xb;
    _DAT_10019600 = L"BLAKE2-224";
    _DAT_10019604 = 0xc;
    _DAT_10019608 = L"BLAKE2-256";
    _DAT_1001960c = 0xd;
    _DAT_10019610 = L"BLAKE2-384";
    _DAT_10019614 = 0xe;
    _DAT_10019618 = L"BLAKE2-512";
    _DAT_1001961c = 0xf;
    _DAT_10019620 = 0;
  }
  iVar3 = 0;
  if (DAT_100195a8 != (wchar_t *)0x0) {
    ppwVar1 = &DAT_100195a8;
    do {
      iVar2 = _wcsicmp(param_1,*ppwVar1);
      if (iVar2 == 0) {
        return (&DAT_100195ac)[iVar3 * 2];
      }
      iVar3 = iVar3 + 1;
      ppwVar1 = &DAT_100195a8 + iVar3 * 2;
    } while (*ppwVar1 != (wchar_t *)0x0);
  }
  if (DAT_10019582 != '\0') {
    MessageBoxW((HWND)0x0,L"And invalid hash function has been specified!",L"StdUtils",0x2010);
  }
  return 0xffffffff;
}



// ===== HashFile @ 10011dab (size 356) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
HashFile(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  LPWSTR _Dst;
  short *psVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  LPWSTR pWVar7;
  uint uVar8;
  
                    /* 0x11dab  24  HashFile */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar8 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar8 = 0;
    }
    UNLOCK();
    if (uVar8 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar8 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar8;
    }
  } while ((int)uVar8 < 0);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar8 = DAT_10019d64;
  memset(pWVar3,0,DAT_10019d64 * 2);
  _Dst = operator_new(-(uint)((int)((ulonglong)uVar8 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar8 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  FUN_10013681(pWVar3,0);
  FUN_10013681(_Dst,0);
  psVar4 = FUN_100135f4();
  pwVar5 = FUN_10013616(psVar4);
  iVar2 = FUN_10011c04(pwVar5);
  if (iVar2 < 0) {
    pwVar5 = L"einval";
  }
  else {
    uVar6 = FUN_100070c9(iVar2,pWVar3,(int)_Dst);
    pwVar5 = _Dst;
    if ((char)uVar6 == '\0') {
      pwVar5 = L"error";
    }
  }
  FUN_100136d0(pwVar5);
  if (pWVar3 != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = pWVar3;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar7 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar8 * 2);
    operator_delete(pWVar3);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dst;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar3 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar8 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== HashText @ 10011f11 (size 358) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
HashText(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Dst;
  LPWSTR pWVar3;
  short *psVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  LPWSTR pWVar7;
  uint uVar8;
  
                    /* 0x11f11  25  HashText */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar8 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar8 = 0;
    }
    UNLOCK();
    if (uVar8 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar8 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar8;
    }
  } while ((int)uVar8 < 0);
  _Dst = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  uVar8 = DAT_10019d64;
  memset(_Dst,0,DAT_10019d64 * 2);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)uVar8 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar8 * 2));
  memset(pWVar3,0,DAT_10019d64 * 2);
  FUN_10013681(pWVar3,0);
  FUN_10013681(_Dst,0);
  psVar4 = FUN_100135f4();
  pwVar5 = FUN_10013616(psVar4);
  iVar2 = FUN_10011c04(pwVar5);
  if (iVar2 < 0) {
    pwVar5 = L"einval";
  }
  else {
    uVar6 = FUN_1000724b(iVar2,pWVar3,(int)_Dst);
    pwVar5 = _Dst;
    if ((char)uVar6 == '\0') {
      pwVar5 = L"error";
    }
  }
  FUN_100136d0(pwVar5);
  if (pWVar3 != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = pWVar3;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar7 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar8 * 2);
    operator_delete(pWVar3);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar8 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dst;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar8 = (int)pWVar3 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar8 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== NormalizePath @ 10012077 (size 341) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
NormalizePath(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  LPWSTR _Dst;
  undefined4 uVar4;
  LPWSTR pWVar5;
  uint uVar6;
  LPCWSTR pWVar7;
  
                    /* 0x12077  27  NormalizePath */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    if (uVar6 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar6 = DAT_10019d64;
  memset(pWVar3,0,DAT_10019d64 * 2);
  _Dst = operator_new(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar6 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(pWVar3,0);
  uVar4 = FUN_10007b30(_Dst);
  pWVar7 = _Dst;
  if ((char)uVar4 == '\0') {
    pWVar7 = L"";
  }
  FUN_100136d0(pWVar7);
  if (pWVar3 != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = pWVar3;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar5 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar6 * 2);
    operator_delete(pWVar3);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dst;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar3 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar6 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== GetParentPath @ 100121cc (size 417) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetParentPath(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  char cVar2;
  int iVar3;
  LPWSTR pWVar4;
  LPWSTR _Dst;
  undefined4 uVar5;
  LPWSTR pWVar6;
  uint uVar7;
  LPCWSTR pWVar8;
  
                    /* 0x121cc  20  GetParentPath */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar7 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar7 = 0;
    }
    UNLOCK();
    if (uVar7 == 0) {
      iVar3 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar7 = (uint)(-1 < iVar3);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar7;
    }
  } while ((int)uVar7 < 0);
  pWVar4 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar7 = DAT_10019d64;
  memset(pWVar4,0,DAT_10019d64 * 2);
  _Dst = operator_new(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar7 * 2));
  memset(_Dst,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(pWVar4,0);
  uVar7 = DAT_10019d64;
  if (((((pWVar4 != (LPWSTR)0x0) && (*pWVar4 != L'\0')) && (_Dst != (LPWSTR)0x0)) &&
      ((DAT_10019d64 != 0 && (uVar5 = FUN_10007b30(_Dst), (char)uVar5 != '\0')))) &&
     (cVar2 = FUN_10007bd7(), cVar2 != '\0')) {
    FUN_10007b97();
    if (((3 < uVar7) && (uVar5 = FUN_10013659(), (char)uVar5 != '\0')) &&
       ((_Dst[1] == L':' && (_Dst[2] == L'\0')))) {
      _Dst[2] = L'\\';
      _Dst[3] = L'\0';
    }
    pWVar8 = _Dst;
    if (*_Dst != L'\0') goto LAB_100122f9;
  }
  pWVar8 = L"";
LAB_100122f9:
  FUN_100136d0(pWVar8);
  if (pWVar4 != (LPWSTR)0x0) {
    uVar7 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = pWVar4;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar7 = (int)pWVar6 - (int)(pWVar4 + 1) >> 1;
    }
    memset(pWVar4,0,uVar7 * 2);
    operator_delete(pWVar4);
  }
  if (_Dst != (LPWSTR)0x0) {
    uVar7 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar4 = _Dst;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      uVar7 = (int)pWVar4 - (int)(_Dst + 1) >> 1;
    }
    memset(_Dst,0,uVar7 * 2);
    operator_delete(_Dst);
  }
  return;
}



// ===== SplitPath @ 1001236d (size 639) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SplitPath(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _FullPath;
  LPCWSTR pWVar3;
  LPCWSTR _Dir;
  LPCWSTR _Filename;
  LPCWSTR _Ext;
  LPWSTR pWVar4;
  uint uVar5;
  LPCWSTR pWVar6;
  code *pcVar7;
  
                    /* 0x1236d  43  SplitPath */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar5 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar5 = 0;
    }
    UNLOCK();
    if (uVar5 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar5 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar5;
    }
  } while ((int)uVar5 < 0);
  _FullPath = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)DAT_10019d64 * 2));
  uVar5 = DAT_10019d64;
  memset(_FullPath,0,DAT_10019d64 * 2);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar5 * 2));
  uVar5 = DAT_10019d64;
  memset(pWVar3,0,DAT_10019d64 * 2);
  _Dir = operator_new(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar5 * 2));
  uVar5 = DAT_10019d64;
  memset(_Dir,0,DAT_10019d64 * 2);
  _Filename = operator_new(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar5 * 2));
  uVar5 = DAT_10019d64;
  memset(_Filename,0,DAT_10019d64 * 2);
  _Ext = operator_new(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar5 * 2));
  memset(_Ext,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(_FullPath,0);
  _wsplitpath(_FullPath,pWVar3,_Dir,_Filename,_Ext);
  FUN_100136d0(_Ext);
  FUN_100136d0(_Filename);
  FUN_100136d0(_Dir);
  FUN_100136d0(pWVar3);
  pcVar7 = operator_delete_exref;
  if (_FullPath != (LPWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar4 = _FullPath;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar4 - (int)(_FullPath + 1) >> 1;
    }
    memset(_FullPath,0,uVar5 * 2);
    pcVar7 = operator_delete_exref;
    operator_delete(_FullPath);
  }
  if (pWVar3 != (LPCWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar6 = pWVar3;
      do {
        WVar1 = *pWVar6;
        pWVar6 = pWVar6 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar6 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar5 * 2);
    (*pcVar7)(pWVar3);
  }
  if (_Dir != (LPCWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Dir;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar3 - (int)(_Dir + 1) >> 1;
    }
    memset(_Dir,0,uVar5 * 2);
    (*pcVar7)(_Dir);
  }
  if (_Filename != (LPCWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Filename;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar3 - (int)(_Filename + 1) >> 1;
    }
    memset(_Filename,0,uVar5 * 2);
    (*pcVar7)(_Filename);
  }
  if (_Ext != (LPCWSTR)0x0) {
    uVar5 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _Ext;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar5 = (int)pWVar3 - (int)(_Ext + 1) >> 1;
    }
    memset(_Ext,0,uVar5 * 2);
    (*pcVar7)(_Ext);
  }
  return;
}



// ===== GetDrivePart @ 100125ec (size 326) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetDrivePart(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _FullPath;
  LPCWSTR _Drive;
  LPWSTR pWVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  
                    /* 0x125ec  10  GetDrivePart */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  _FullPath = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)DAT_10019d64 * 2));
  uVar4 = DAT_10019d64;
  memset(_FullPath,0,DAT_10019d64 * 2);
  _Drive = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar4 * 2));
  memset(_Drive,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(_FullPath,0);
  _wsplitpath(_FullPath,_Drive,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
  FUN_100136d0(_Drive);
  if (_FullPath != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _FullPath;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar3 - (int)(_FullPath + 1) >> 1;
    }
    memset(_FullPath,0,uVar4 * 2);
    operator_delete(_FullPath);
  }
  if (_Drive != (LPCWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = _Drive;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar5 - (int)(_Drive + 1) >> 1;
    }
    memset(_Drive,0,uVar4 * 2);
    operator_delete(_Drive);
  }
  return;
}



// ===== GetDirectoryPart @ 10012732 (size 326) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetDirectoryPart(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _FullPath;
  LPCWSTR _Dir;
  LPWSTR pWVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  
                    /* 0x12732  9  GetDirectoryPart */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  _FullPath = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)DAT_10019d64 * 2));
  uVar4 = DAT_10019d64;
  memset(_FullPath,0,DAT_10019d64 * 2);
  _Dir = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar4 * 2));
  memset(_Dir,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(_FullPath,0);
  _wsplitpath(_FullPath,(wchar_t *)0x0,_Dir,(wchar_t *)0x0,(wchar_t *)0x0);
  FUN_100136d0(_Dir);
  if (_FullPath != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _FullPath;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar3 - (int)(_FullPath + 1) >> 1;
    }
    memset(_FullPath,0,uVar4 * 2);
    operator_delete(_FullPath);
  }
  if (_Dir != (LPCWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = _Dir;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar5 - (int)(_Dir + 1) >> 1;
    }
    memset(_Dir,0,uVar4 * 2);
    operator_delete(_Dir);
  }
  return;
}



// ===== GetFileNamePart @ 10012878 (size 326) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetFileNamePart(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _FullPath;
  LPCWSTR _Filename;
  LPWSTR pWVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  
                    /* 0x12878  12  GetFileNamePart */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  _FullPath = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)DAT_10019d64 * 2));
  uVar4 = DAT_10019d64;
  memset(_FullPath,0,DAT_10019d64 * 2);
  _Filename = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar4 * 2));
  memset(_Filename,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(_FullPath,0);
  _wsplitpath(_FullPath,(wchar_t *)0x0,(wchar_t *)0x0,_Filename,(wchar_t *)0x0);
  FUN_100136d0(_Filename);
  if (_FullPath != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _FullPath;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar3 - (int)(_FullPath + 1) >> 1;
    }
    memset(_FullPath,0,uVar4 * 2);
    operator_delete(_FullPath);
  }
  if (_Filename != (LPCWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = _Filename;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar5 - (int)(_Filename + 1) >> 1;
    }
    memset(_Filename,0,uVar4 * 2);
    operator_delete(_Filename);
  }
  return;
}



// ===== GetExtensionPart @ 100129be (size 326) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetExtensionPart(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _FullPath;
  LPCWSTR _Ext;
  LPWSTR pWVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  
                    /* 0x129be  11  GetExtensionPart */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar4 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar4 = 0;
    }
    UNLOCK();
    if (uVar4 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar4 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar4;
    }
  } while ((int)uVar4 < 0);
  _FullPath = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)DAT_10019d64 * 2));
  uVar4 = DAT_10019d64;
  memset(_FullPath,0,DAT_10019d64 * 2);
  _Ext = operator_new(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar4 * 2));
  memset(_Ext,0,DAT_10019d64 * 2);
  _wsetlocale(0,L"C");
  FUN_10013681(_FullPath,0);
  _wsplitpath(_FullPath,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,_Ext);
  FUN_100136d0(_Ext);
  if (_FullPath != (LPWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar3 = _FullPath;
      do {
        WVar1 = *pWVar3;
        pWVar3 = pWVar3 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar3 - (int)(_FullPath + 1) >> 1;
    }
    memset(_FullPath,0,uVar4 * 2);
    operator_delete(_FullPath);
  }
  if (_Ext != (LPCWSTR)0x0) {
    uVar4 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = _Ext;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar4 = (int)pWVar5 - (int)(_Ext + 1) >> 1;
    }
    memset(_Ext,0,uVar4 * 2);
    operator_delete(_Ext);
  }
  return;
}



// ===== TimerCreate @ 10012b04 (size 163) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TimerCreate(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  wchar_t local_44 [32];
  
                    /* 0x12b04  48  TimerCreate */
  iVar1 = param_5;
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar3 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar3 = 0;
    }
    UNLOCK();
    if (uVar3 == 0) {
      iVar2 = (**(code **)(iVar1 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar3 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar3;
    }
  } while ((int)uVar3 < 0);
  iVar2 = FUN_100137bb();
  iVar4 = FUN_100137bb();
  uVar5 = FUN_1001339b(iVar4,iVar2,param_1,iVar1,&param_2);
  if ((char)uVar5 == '\0') {
    pwVar6 = L"error";
  }
  else {
    _snwprintf(local_44,0x20,L"TimerId:%08X",param_2);
    pwVar6 = local_44;
  }
  FUN_100136d0(pwVar6);
  return;
}



// ===== TimerDestroy @ 10012ba7 (size 248) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TimerDestroy(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR _Src;
  undefined4 uVar3;
  wchar_t *pwVar4;
  LPWSTR pWVar5;
  uint uVar6;
  
                    /* 0x12ba7  49  TimerDestroy */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    if (uVar6 == 0) {
      iVar2 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  _Src = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)DAT_10019d64 * 2));
  memset(_Src,0,DAT_10019d64 * 2);
  FUN_10013681(_Src,0);
  iVar2 = swscanf(_Src,L"TimerId:%X",&param_2);
  if (iVar2 == 1) {
    uVar3 = FUN_10013475();
    pwVar4 = L"ok";
    if ((char)uVar3 != '\0') goto LAB_10012c5f;
  }
  pwVar4 = L"error";
LAB_10012c5f:
  FUN_100136d0(pwVar4);
  if (_Src != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = _Src;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar5 - (int)(_Src + 1) >> 1;
    }
    memset(_Src,0,uVar6 * 2);
    operator_delete(_Src);
  }
  return;
}



// ===== ProtectStr @ 10012c9f (size 678) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ProtectStr(undefined4 param_1,uint param_2,LPCWSTR param_3,LPWSTR param_4,int *param_5)

{
  WCHAR WVar1;
  LPCWSTR _Dst;
  char cVar2;
  int iVar3;
  LPWSTR pWVar4;
  LPWSTR _Dst_00;
  LPCWSTR pWVar5;
  uint uVar6;
  LPWSTR pWVar7;
  wchar_t *pwVar8;
  
                    /* 0x12c9f  30  ProtectStr */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    if (uVar6 == 0) {
      iVar3 = (*(code *)param_5[3])(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar3);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  pWVar4 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar6 = DAT_10019d64;
  memset(pWVar4,0,DAT_10019d64 * 2);
  param_4 = operator_new(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar6 * 2));
  uVar6 = DAT_10019d64;
  memset(param_4,0,DAT_10019d64 * 2);
  _Dst_00 = operator_new(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar6 * 2));
  memset(_Dst_00,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst_00,0);
  FUN_10013681(param_4,0);
  FUN_10013681(pWVar4,0);
  param_3 = (LPCWSTR)((uint)param_3 & 0xffffff00);
  iVar3 = _wcsicmp(pWVar4,L"CU");
  if (iVar3 == 0) {
LAB_10012df0:
    uVar6 = FUN_10007da3((int *)&param_3,_Dst_00,(char)param_3);
    _Dst = param_3;
    if ((0 < (int)uVar6) && (param_3 != (LPCWSTR)0x0)) {
      pWVar5 = param_3;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar5 - (int)(param_3 + 1) >> 1;
      pwVar8 = param_3;
      if (DAT_10019d64 <= uVar6) {
        *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
        pwVar8 = L"too_long";
      }
      FUN_100136d0(pwVar8);
      if (uVar6 == 0) {
        pWVar5 = _Dst;
        do {
          WVar1 = *pWVar5;
          pWVar5 = pWVar5 + 1;
        } while (WVar1 != L'\0');
        uVar6 = (int)pWVar5 - (int)(_Dst + 1) >> 1;
      }
      memset(_Dst,0,uVar6 * 2);
      operator_delete(_Dst);
      goto LAB_10012e98;
    }
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    pwVar8 = L"encr_failed";
    if (-1 < (int)uVar6) {
      pwVar8 = L"error";
    }
  }
  else {
    iVar3 = _wcsicmp(pWVar4,L"LM");
    cVar2 = '\x01' - (iVar3 != 0);
    param_3 = (LPCWSTR)CONCAT31(param_3._1_3_,cVar2);
    if (cVar2 != '\0') goto LAB_10012df0;
    if (DAT_10019582 != '\0') {
      MessageBoxW((HWND)0x0,L"ProtectStr() was called with bad \'scope\' value!",L"StdUtils",0x2010)
      ;
    }
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    pwVar8 = L"einval";
  }
  FUN_100136d0(pwVar8);
LAB_10012e98:
  if (pWVar4 != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = pWVar4;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar7 - (int)(pWVar4 + 1) >> 1;
    }
    memset(pWVar4,0,uVar6 * 2);
    operator_delete(pWVar4);
  }
  pWVar4 = param_4;
  if (param_4 != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar7 = param_4;
      do {
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar7 - (int)(param_4 + 1) >> 1;
    }
    memset(param_4,0,uVar6 * 2);
    operator_delete(pWVar4);
  }
  if (_Dst_00 != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar4 = _Dst_00;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar4 - (int)(_Dst_00 + 1) >> 1;
    }
    memset(_Dst_00,0,uVar6 * 2);
    operator_delete(_Dst_00);
  }
  return;
}



// ===== UnprotectStr @ 10012f45 (size 544) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UnprotectStr(undefined4 param_1,uint param_2,undefined4 param_3,LPCWSTR param_4,int *param_5)

{
  WCHAR WVar1;
  LPCWSTR _Dst;
  int iVar2;
  LPWSTR pWVar3;
  LPWSTR _Dst_00;
  LPCWSTR pWVar4;
  LPWSTR pWVar5;
  uint uVar6;
  wchar_t *pwVar7;
  
                    /* 0x12f45  53  UnprotectStr */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar6 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar6 = 0;
    }
    UNLOCK();
    if (uVar6 == 0) {
      iVar2 = (*(code *)param_5[3])(DAT_10019598,&LAB_1000eb04);
      uVar6 = (uint)(-1 < iVar2);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar6;
    }
  } while ((int)uVar6 < 0);
  pWVar3 = operator_new(-(uint)((int)((ulonglong)DAT_10019d64 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)DAT_10019d64 * 2));
  uVar6 = DAT_10019d64;
  memset(pWVar3,0,DAT_10019d64 * 2);
  _Dst_00 = operator_new(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar6 * 2));
  memset(_Dst_00,0,DAT_10019d64 * 2);
  FUN_10013681(_Dst_00,0);
  FUN_10013681(pWVar3,0);
  iVar2 = FUN_100137bb();
  if (*_Dst_00 == L'\0') {
    if (DAT_10019582 != '\0') {
      MessageBoxW((HWND)0x0,L"UnprotectStr() was called with empty \'data\' value!",L"StdUtils",
                  0x2010);
    }
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    pwVar7 = L"einval";
  }
  else {
    uVar6 = FUN_1000801c((int *)&param_4,(ushort *)_Dst_00);
    _Dst = param_4;
    if ((0 < (int)uVar6) && (param_4 != (LPCWSTR)0x0)) {
      pWVar4 = param_4;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar4 - (int)(param_4 + 1) >> 1;
      pwVar7 = param_4;
      if (DAT_10019d64 <= uVar6) {
        if (iVar2 < 1) {
          *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
          pwVar7 = L"too_long";
        }
        else {
          param_4[DAT_10019d64 - 1] = L'\0';
        }
      }
      FUN_100136d0(pwVar7);
      if (uVar6 == 0) {
        pWVar4 = _Dst;
        do {
          WVar1 = *pWVar4;
          pWVar4 = pWVar4 + 1;
        } while (WVar1 != L'\0');
        uVar6 = (int)pWVar4 - (int)(_Dst + 1) >> 1;
      }
      memset(_Dst,0,uVar6 * 2);
      operator_delete(_Dst);
      goto LAB_100130f7;
    }
    *(int *)(*param_5 + 8) = *(int *)(*param_5 + 8) + 1;
    pwVar7 = L"decr_failed";
    if (-1 < (int)uVar6) {
      pwVar7 = L"error";
    }
  }
  FUN_100136d0(pwVar7);
LAB_100130f7:
  if (pWVar3 != (LPWSTR)0x0) {
    uVar6 = DAT_10019d64;
    if (DAT_10019d64 == 0) {
      pWVar5 = pWVar3;
      do {
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      uVar6 = (int)pWVar5 - (int)(pWVar3 + 1) >> 1;
    }
    memset(pWVar3,0,uVar6 * 2);
    operator_delete(pWVar3);
  }
  uVar6 = DAT_10019d64;
  if (DAT_10019d64 == 0) {
    pWVar3 = _Dst_00;
    do {
      WVar1 = *pWVar3;
      pWVar3 = pWVar3 + 1;
    } while (WVar1 != L'\0');
    uVar6 = (int)pWVar3 - (int)(_Dst_00 + 1) >> 1;
  }
  memset(_Dst_00,0,uVar6 * 2);
  operator_delete(_Dst_00);
  return;
}



// ===== SetVerboseMode @ 10013165 (size 100) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SetVerboseMode(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              int param_5)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x13165  42  SetVerboseMode */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  iVar1 = FUN_100137bb();
  DAT_10019582 = 0 < iVar1;
  return;
}



// ===== GetLibVersion @ 100131c9 (size 105) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetLibVersion(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             int param_5)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x131c9  14  GetLibVersion */
  DAT_10019d64 = param_2;
  DAT_10019d60 = param_4;
  _DAT_10019d68 = param_3;
  do {
    LOCK();
    uVar2 = DAT_1001959c;
    if (DAT_1001959c == 0) {
      DAT_1001959c = 0xffffffff;
      uVar2 = 0;
    }
    UNLOCK();
    if (uVar2 == 0) {
      iVar1 = (**(code **)(param_5 + 0xc))(DAT_10019598,&LAB_1000eb04);
      uVar2 = (uint)(-1 < iVar1);
      LOCK();
      UNLOCK();
      DAT_1001959c = uVar2;
    }
  } while ((int)uVar2 < 0);
  FUN_100136d0(L"Oct 27 2018, 18:03:19");
  FUN_100136d0(L"1.1.4.0");
  return;
}



// ===== FUN_10013232 @ 10013232 (size 74) =====

bool __cdecl FUN_10013232(void *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE hHeap;
  BOOL BVar2;
  size_t sVar3;
  
  hModule = GetModuleHandleW(L"msvcrt");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"_get_heap_handle");
    if (pFVar1 != (FARPROC)0x0) {
      hHeap = (HANDLE)(*pFVar1)();
      BVar2 = HeapValidate(hHeap,0,param_1);
      if (BVar2 != 0) {
        sVar3 = _msize(param_1);
        return (bool)('\x01' - (sVar3 < 0x18));
      }
      return false;
    }
  }
  return true;
}



// ===== FUN_10013294 @ 10013294 (size 120) =====

void FUN_10013294(void)

{
  LONG LVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  if (DAT_100195a0 != 0) {
    LVar1 = InterlockedExchange((LONG *)&DAT_10019568,0);
    if (LVar1 != 0) {
      MessageBoxW((HWND)0x0,L"Whoops: Plug-in unloaded before all timers were destroyed!",
                  L"StdUtils::TimerCreate",0x40010);
    }
    UnregisterClassW((LPCWSTR)(uint)DAT_100195a0,DAT_10019598);
    DAT_100195a0 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  return;
}



// ===== FUN_1001330c @ 1001330c (size 143) =====

int FUN_1001330c(void)

{
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 uVar1;
  undefined3 uVar2;
  undefined3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  int iVar4;
  WNDCLASSW *pWVar5;
  WNDCLASSW local_34;
  char local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
  local_8 = '\x01';
  uVar1 = CONCAT22(extraout_var_01,DAT_100195a0);
  if (DAT_100195a0 == 0) {
    pWVar5 = &local_34;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      pWVar5->style = 0;
      pWVar5 = (WNDCLASSW *)&pWVar5->lpfnWndProc;
    }
    local_34.hInstance = DAT_10019598;
    local_34.lpfnWndProc = (WNDPROC)&LAB_1001327c;
    local_34.lpszClassName = L"{05D27C4B-7159-4291-8843-01FC5DA4A7DC}";
    DAT_100195a0 = RegisterClassW(&local_34);
    if (DAT_100195a0 == 0) {
      uVar3 = (uint3)(CONCAT22(extraout_var_02,DAT_100195a0) >> 8);
      if (local_8 != '\0') {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
        uVar3 = extraout_var_00;
      }
      return (uint)uVar3 << 8;
    }
    uVar1 = FUN_1000591f(FUN_10013294);
  }
  uVar2 = (undefined3)((uint)uVar1 >> 8);
  if (local_8 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10019550);
    uVar2 = extraout_var;
  }
  return CONCAT31(uVar2,1);
}



// ===== FUN_1001339b @ 1001339b (size 218) =====

uint __cdecl
FUN_1001339b(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  HWND hWnd;
  undefined4 *nIDEvent;
  UINT_PTR UVar2;
  undefined4 *extraout_EAX;
  LONG LVar3;
  int iVar4;
  
  *param_5 = 0;
  puVar1 = param_5;
  if (((0 < param_1) && (0 < param_2)) &&
     ((DAT_100195a0 != 0 || (puVar1 = (undefined4 *)FUN_1001330c(), (char)puVar1 != '\0')))) {
    hWnd = CreateWindowExW(0,(LPCWSTR)(uint)DAT_100195a0,(LPCWSTR)0x0,0,0,0,1,1,(HWND)0xfffffffd,
                           (HMENU)0x0,DAT_10019598,(LPVOID)0x0);
    puVar1 = (undefined4 *)0x0;
    if (hWnd != (HWND)0x0) {
      nIDEvent = operator_new(0x18);
      puVar1 = nIDEvent;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      nIDEvent[3] = param_3;
      *nIDEvent = 0xbb14de73;
      nIDEvent[1] = 0x71d7d671;
      nIDEvent[2] = hWnd;
      nIDEvent[4] = *(undefined4 *)(param_4 + 4);
      nIDEvent[5] = param_1;
      UVar2 = SetTimer(hWnd,(UINT_PTR)nIDEvent,0x5dc,(TIMERPROC)&LAB_10013282);
      if (UVar2 != 0) {
        *param_5 = nIDEvent;
        LVar3 = InterlockedIncrement((LONG *)&DAT_10019568);
        return CONCAT31((int3)((uint)LVar3 >> 8),1);
      }
      DestroyWindow(hWnd);
      operator_delete(nIDEvent);
      puVar1 = extraout_EAX;
    }
  }
  return (uint)puVar1 & 0xffffff00;
}



// ===== FUN_10013475 @ 10013475 (size 124) =====

undefined4 FUN_10013475(void)

{
  bool bVar1;
  int in_EAX;
  BOOL BVar2;
  BOOL BVar3;
  int extraout_EAX;
  int iVar4;
  undefined1 uVar5;
  int *unaff_ESI;
  int *piVar6;
  
  uVar5 = 0;
  if (unaff_ESI != (int *)0x0) {
    bVar1 = FUN_10013232(unaff_ESI);
    if (((bVar1) && (*unaff_ESI == -0x44eb218d)) && (unaff_ESI[1] == 0x71d7d671)) {
      BVar2 = KillTimer((HWND)unaff_ESI[2],(UINT_PTR)unaff_ESI);
      BVar3 = DestroyWindow((HWND)unaff_ESI[2]);
      uVar5 = 0;
      if ((BVar2 != 0) && (BVar3 != 0)) {
        InterlockedDecrement((LONG *)&DAT_10019568);
        uVar5 = 1;
      }
      piVar6 = unaff_ESI;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      operator_delete(unaff_ESI);
      in_EAX = extraout_EAX;
    }
    else {
      in_EAX = MessageBoxW((HWND)0x0,L"Whoops: Double destruction detected and prevented!",
                           L"StdUtils::TimerDestroy",0x40010);
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),uVar5);
}



// ===== FUN_100134f1 @ 100134f1 (size 111) =====

LPSTR __cdecl FUN_100134f1(LPCWSTR param_1)

{
  LPSTR pCVar1;
  uint cbMultiByte;
  LPSTR lpMultiByteStr;
  int iVar2;
  
  cbMultiByte = WideCharToMultiByte(0xfde9,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  if (0 < (int)cbMultiByte) {
    lpMultiByteStr = operator_new(cbMultiByte);
    iVar2 = WideCharToMultiByte(0xfde9,0,param_1,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                                (LPBOOL)0x0);
    pCVar1 = lpMultiByteStr;
    if ((0 < iVar2) && (iVar2 <= (int)cbMultiByte)) {
      return lpMultiByteStr;
    }
    for (; cbMultiByte != 0; cbMultiByte = cbMultiByte - 1) {
      *pCVar1 = '\0';
      pCVar1 = pCVar1 + 1;
    }
    operator_delete(lpMultiByteStr);
  }
  return (LPSTR)0x0;
}



// ===== FUN_10013560 @ 10013560 (size 112) =====

LPWSTR __cdecl FUN_10013560(LPCSTR param_1)

{
  uint cchWideChar;
  LPWSTR lpWideCharStr;
  int iVar1;
  LPWSTR pWVar2;
  
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  if (0 < (int)cchWideChar) {
    lpWideCharStr =
         operator_new(-(uint)((int)((ulonglong)cchWideChar * 2 >> 0x20) != 0) |
                      (uint)((ulonglong)cchWideChar * 2));
    iVar1 = MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,cchWideChar);
    if ((0 < iVar1) && (iVar1 <= (int)cchWideChar)) {
      return lpWideCharStr;
    }
    pWVar2 = lpWideCharStr;
    for (iVar1 = cchWideChar * 2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)pWVar2 = 0;
      pWVar2 = (LPWSTR)((int)pWVar2 + 1);
    }
    operator_delete(lpWideCharStr);
  }
  return (LPWSTR)0x0;
}



// ===== FUN_100135d0 @ 100135d0 (size 36) =====

undefined4 FUN_100135d0(void)

{
  int iVar1;
  wint_t unaff_SI;
  
  if (unaff_SI == 0) {
    return 0;
  }
  iVar1 = iswcntrl(unaff_SI);
  if ((iVar1 == 0) && (iVar1 = iswspace(unaff_SI), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// ===== FUN_100135f4 @ 100135f4 (size 34) =====

short * FUN_100135f4(void)

{
  undefined4 uVar1;
  int iVar2;
  short *unaff_EDI;
  
  iVar2 = 0;
  if (*unaff_EDI != 0) {
    while (uVar1 = FUN_100135d0(), (char)uVar1 != '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  return unaff_EDI + iVar2;
}



// ===== FUN_10013616 @ 10013616 (size 67) =====

short * __cdecl FUN_10013616(short *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*param_1 != 0) {
    psVar2 = param_1;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar2 - (int)(param_1 + 1) >> 1;
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      uVar4 = FUN_100135d0();
      if ((char)uVar4 == '\0') {
        return param_1;
      }
      param_1[iVar3] = 0;
    }
  }
  return param_1;
}



// ===== FUN_10013659 @ 10013659 (size 40) =====

undefined4 FUN_10013659(void)

{
  ushort in_AX;
  
  if ((((in_AX < 0x61) || (0x7a < in_AX)) && (0x19 < (ushort)(in_AX - 0x41))) &&
     ((in_AX < 0x30 || (0x39 < in_AX)))) {
    return 0;
  }
  return 1;
}



// ===== FUN_10013681 @ 10013681 (size 79) =====

undefined4 FUN_10013681(LPWSTR param_1,int param_2)

{
  int *hMem;
  undefined4 uVar1;
  
  if ((DAT_10019d60 == (int *)0x0) || (*DAT_10019d60 == 0)) {
    uVar1 = 1;
  }
  else {
    hMem = (int *)*DAT_10019d60;
    if (param_1 != (LPWSTR)0x0) {
      if (param_2 == 0) {
        param_2 = DAT_10019d64;
      }
      lstrcpynW(param_1,(LPCWSTR)(hMem + 1),param_2);
    }
    *DAT_10019d60 = *hMem;
    GlobalFree(hMem);
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_100136d0 @ 100136d0 (size 70) =====

void FUN_100136d0(LPCWSTR param_1)

{
  undefined4 *puVar1;
  
  if (DAT_10019d60 != (undefined4 *)0x0) {
    puVar1 = GlobalAlloc(0x40,DAT_10019d64 * 2 + 8);
    lstrcpynW((LPWSTR)(puVar1 + 1),param_1,DAT_10019d64);
    *puVar1 = *DAT_10019d60;
    *DAT_10019d60 = puVar1;
  }
  return;
}



// ===== FUN_10013716 @ 10013716 (size 165) =====

int FUN_10013716(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  
  iVar3 = 0;
  if (*param_1 == 0x30) {
    puVar6 = param_1 + 1;
    uVar1 = *puVar6;
    if ((uVar1 == 0x78) || (uVar1 == 0x58)) {
      do {
        puVar6 = puVar6 + 1;
        uVar4 = (uint)*puVar6;
        uVar5 = uVar4 - 0x30;
        if (9 < uVar5) {
          if (uVar4 - 0x61 < 6) {
            uVar5 = uVar4 - 0x57;
          }
          else {
            if (5 < uVar4 - 0x41) {
              return iVar3;
            }
            uVar5 = uVar4 - 0x37;
          }
        }
        iVar3 = iVar3 * 0x10 + uVar5;
      } while( true );
    }
    if ((uVar1 < 0x38) && (0x2f < uVar1)) {
      while( true ) {
        uVar5 = (uint)*puVar6;
        if (uVar5 < 0x30) {
          return iVar3;
        }
        if (0x37 < uVar5) break;
        iVar3 = (uVar5 - 0x30) + iVar3 * 8;
        puVar6 = puVar6 + 1;
      }
      return iVar3;
    }
  }
  bVar2 = false;
  if (*param_1 == 0x2d) {
    bVar2 = true;
  }
  else {
    param_1 = param_1 + -1;
  }
  while( true ) {
    param_1 = param_1 + 1;
    iVar7 = *param_1 - 0x30;
    if ((iVar7 < 0) || (9 < iVar7)) break;
    iVar3 = iVar3 * 10 + iVar7;
  }
  if (bVar2) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



// ===== FUN_100137bb @ 100137bb (size 48) =====

int FUN_100137bb(void)

{
  int iVar1;
  WCHAR local_104 [128];
  
  iVar1 = FUN_10013681(local_104,0x80);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_10013716((ushort *)local_104);
  return iVar1;
}



// ===== FUN_100137eb @ 100137eb (size 49) =====

void FUN_100137eb(undefined4 param_1)

{
  WCHAR local_804 [1024];
  
  wsprintfW(local_804,L"%d",param_1);
  FUN_100136d0(local_804);
  return;
}



// ===== __aullshr @ 10013830 (size 31) =====

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



// ===== __allshl @ 10013850 (size 31) =====

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



// ===== __aulldiv @ 10013870 (size 104) =====

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

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



// ===== FUN_100138e0 @ 100138e0 (size 47) =====

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100138e0(void)

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



// decompiled 177 ok, 0 failed, 177 total
