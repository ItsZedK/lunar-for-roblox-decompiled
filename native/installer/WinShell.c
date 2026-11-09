// Program: 08-WinShell.dll

// ===== SetLnkAUMI @ 10001100 (size 225) =====

void SetLnkAUMI(void)

{
  undefined4 *hMem;
  int *hMem_00;
  HRESULT HVar1;
  int iVar2;
  bool bVar3;
  int *in_stack_00000010;
  undefined2 local_1c [4];
  int *local_14;
  int *local_c;
  int *local_8;
  
                    /* 0x1100  1  SetLnkAUMI */
  hMem = (undefined4 *)*in_stack_00000010;
  hMem_00 = (int *)*hMem;
  *in_stack_00000010 = (int)hMem_00;
  *in_stack_00000010 = *hMem_00;
  HVar1 = CoCreateInstance((IID *)&DAT_1000104c,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_1000105c,&local_c);
  if (HVar1 == 0) {
    iVar2 = (**(code **)*local_c)(local_c,&DAT_10001018,&local_8);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*local_8 + 0x14))(local_8,hMem + 1,2);
      bVar3 = iVar2 < 0;
      if (iVar2 == 0) {
        iVar2 = (**(code **)*local_c)(local_c,&DAT_1000103c,&stack0x00000010);
        bVar3 = iVar2 < 0;
        if (iVar2 == 0) {
          local_14 = hMem_00 + 1;
          local_1c[0] = 0x1f;
          iVar2 = (**(code **)(*in_stack_00000010 + 0x18))(in_stack_00000010,&DAT_10001028,local_1c)
          ;
          if (-1 < iVar2) {
            (**(code **)(*in_stack_00000010 + 0x1c))(in_stack_00000010);
          }
          (**(code **)(*in_stack_00000010 + 8))(in_stack_00000010);
          bVar3 = iVar2 < 0;
        }
      }
      if (!bVar3) {
        (**(code **)(*local_8 + 0x18))(local_8,0,0);
      }
      (**(code **)(*local_8 + 8))(local_8);
    }
    (**(code **)(*local_c + 8))(local_c);
  }
  GlobalFree(hMem_00);
  GlobalFree(hMem);
  return;
}



// ===== UninstAppUserModelId @ 100011e1 (size 145) =====

void UninstAppUserModelId(void)

{
  int *hMem;
  HRESULT HVar1;
  int iVar2;
  int *in_stack_00000010;
  int *local_8;
  
                    /* 0x11e1  2  UninstAppUserModelId */
  hMem = (int *)*in_stack_00000010;
  *in_stack_00000010 = *hMem;
  HVar1 = CoCreateInstance((IID *)&DAT_1000106c,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_1000107c,
                           &stack0x00000010);
  if (HVar1 == 0) {
    (**(code **)(*in_stack_00000010 + 0x14))(in_stack_00000010);
    iVar2 = (**(code **)(*in_stack_00000010 + 0xc))(in_stack_00000010,hMem + 1);
    if (iVar2 == 0) {
      (**(code **)(*in_stack_00000010 + 0x14))(in_stack_00000010);
    }
    (**(code **)(*in_stack_00000010 + 8))(in_stack_00000010);
  }
  HVar1 = CoCreateInstance((IID *)&DAT_1000108c,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_1000109c,&local_8);
  if (HVar1 == 0) {
    (**(code **)(*local_8 + 0x28))(local_8,hMem + 1);
    (**(code **)(*local_8 + 8))(local_8);
  }
  GlobalFree(hMem);
  return;
}



// ===== UninstShortcut @ 10001272 (size 141) =====

void UninstShortcut(void)

{
  undefined4 *hMem;
  FARPROC pFVar1;
  HMODULE hModule;
  int iVar2;
  HRESULT HVar3;
  FARPROC in_stack_00000010;
  int *local_8;
  
                    /* 0x1272  3  UninstShortcut */
  hMem = *(undefined4 **)in_stack_00000010;
  *(undefined4 *)in_stack_00000010 = *hMem;
  hModule = LoadLibraryA("SHELL32");
  in_stack_00000010 = GetProcAddress(hModule,"SHCreateItemFromParsingName");
  if (in_stack_00000010 != (FARPROC)0x0) {
    iVar2 = (*in_stack_00000010)(hMem + 1,0,&LAB_100010cc,&stack0x00000010);
    if (iVar2 != 0) {
      in_stack_00000010 = (FARPROC)0x0;
    }
  }
  pFVar1 = in_stack_00000010;
  if (in_stack_00000010 != (FARPROC)0x0) {
    HVar3 = CoCreateInstance((IID *)&DAT_100010ac,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_100010bc,&local_8)
    ;
    if (HVar3 == 0) {
      (**(code **)(*local_8 + 0xc))(local_8,pFVar1);
      (**(code **)(*local_8 + 8))(local_8);
    }
    (**(code **)(*(int *)pFVar1 + 8))(pFVar1);
  }
  GlobalFree(hMem);
  return;
}



// ===== entry @ 100012ff (size 6) =====

undefined4 entry(void)

{
  return 1;
}



// decompiled 4 ok, 0 failed, 4 total
