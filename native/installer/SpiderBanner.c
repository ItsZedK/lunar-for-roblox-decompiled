// Program: 03-SpiderBanner.dll

// ===== FUN_10001000 @ 10001000 (size 604) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001000(HWND param_1)

{
  float fVar1;
  float fVar2;
  HDC hdc;
  HFONT h;
  HBRUSH pHVar3;
  UINT UVar4;
  INT *pIVar5;
  LONG local_3c;
  tagSIZE local_34;
  LOGBRUSH local_2c;
  RECT local_20;
  tagRECT local_10;
  
  hdc = BeginPaint(param_1,DAT_10004068);
  GetClientRect(param_1,&local_10);
  h = CreateFontW(0xc,7,0,0,400,0,0,0,0,0,0,0,0,L"MS SANS SERIF");
  fVar1 = (float)DAT_1000406c;
  if (DAT_1000406c < 0) {
    fVar1 = fVar1 + _DAT_100030e0;
  }
  fVar2 = (float)DAT_10004070;
  if (DAT_10004070 < 0) {
    fVar2 = fVar2 + _DAT_100030e0;
  }
  local_3c = (LONG)(longlong)ROUND((fVar1 / fVar2) * (float)_DAT_100030d8);
  wsprintfW(DAT_10004064,L"%u%%",local_3c);
  SelectObject(hdc,h);
  GetTextExtentPoint32W(hdc,DAT_10004064,4,&local_34);
  local_34.cy = local_34.cy + -1;
  local_2c.lbColor = 0xff0000;
  local_2c.lbHatch = 0;
  local_20.left = 0;
  local_20.top = 0;
  local_20.bottom = local_10.bottom;
  local_3c = (LONG)(longlong)ROUND((float)local_10.right * (fVar1 / fVar2));
  local_20.right = local_3c;
  pHVar3 = CreateBrushIndirect(&local_2c);
  FillRect(hdc,&local_20,pHVar3);
  DeleteObject(pHVar3);
  SetBkColor(hdc,0xff0000);
  SetTextColor(hdc,0xffffff);
  pIVar5 = (INT *)0x0;
  UVar4 = lstrlenW(DAT_10004064);
  ExtTextOutW(hdc,(local_10.right - local_34.cx) / 2,(local_10.bottom - local_34.cy) / 2,6,&local_20
              ,DAT_10004064,UVar4,pIVar5);
  local_20.left = local_20.right;
  local_20.right = local_10.right;
  local_2c.lbColor = 0xffffff;
  pHVar3 = CreateBrushIndirect(&local_2c);
  FillRect(hdc,&local_20,pHVar3);
  DeleteObject(pHVar3);
  SetBkColor(hdc,0xffffff);
  SetTextColor(hdc,0xff0000);
  pIVar5 = (INT *)0x0;
  UVar4 = lstrlenW(DAT_10004064);
  ExtTextOutW(hdc,(local_10.right - local_34.cx) / 2,(local_10.bottom - local_34.cy) / 2,6,&local_20
              ,DAT_10004064,UVar4,pIVar5);
  DrawEdge(hdc,&local_10,2,0xf);
  DeleteObject(h);
  EndPaint(param_1,DAT_10004068);
  return;
}



// ===== FUN_10001260 @ 10001260 (size 226) =====

void FUN_10001260(HWND param_1,UINT param_2,WPARAM param_3,uint param_4)

{
  if (param_2 == 1) {
    ShowWindow(param_1,5);
    DefWindowProcW(param_1,1,param_3,param_4);
    return;
  }
  if (param_2 == 0x402) {
    DAT_1000406c = param_3;
    InvalidateRect(param_1,(RECT *)0x0,1);
    DefWindowProcW(param_1,0x402,param_3,param_4);
    return;
  }
  if (param_2 == 0x401) {
    DAT_10004070 = param_4 >> 0x10;
    DefWindowProcW(param_1,0x401,param_3,param_4);
    return;
  }
  if (param_2 == 0xf) {
    FUN_10001000(param_1);
    DefWindowProcW(param_1,0xf,param_3,param_4);
    return;
  }
  if (param_2 == 0x10) {
    GlobalFree(DAT_10004068);
    GlobalFree(DAT_10004064);
    DestroyWindow(param_1);
  }
  DefWindowProcW(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_10001350 @ 10001350 (size 118) =====

HWND __cdecl FUN_10001350(HINSTANCE param_1,HWND param_2)

{
  HWND hWnd;
  
  hWnd = CreateWindowExW(0,L"static",(LPCWSTR)0x0,0x40000000,0,0,2,2,param_2,(HMENU)0x0,param_1,
                         (LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    return (HWND)0x0;
  }
  DAT_10004068 = GlobalAlloc(0x40,0x40);
  DAT_10004064 = GlobalAlloc(0x40,0x20);
  SetWindowLongW(hWnd,-4,0x10001260);
  SetWindowPos(hWnd,(HWND)0x0,0,0,0,0,0x23);
  return hWnd;
}



// ===== FUN_100013d0 @ 100013d0 (size 153) =====

int __cdecl FUN_100013d0(LPCWSTR param_1)

{
  int iVar1;
  
  iVar1 = lstrcmpiW(param_1,L"/TL");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = lstrcmpiW(param_1,L"/TR");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = lstrcmpiW(param_1,L"/BL");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = lstrcmpiW(param_1,L"/BR");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = lstrcmpiW(param_1,L"/CENTER");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = lstrcmpiW(param_1,L"/MODERN");
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = lstrcmpiW(param_1,L"/ICON");
  return (-(uint)(iVar1 != 0) & 0xfffffff9) + 7;
}



// ===== FUN_10001470 @ 10001470 (size 179) =====

void __cdecl FUN_10001470(int param_1)

{
  HWND pHVar1;
  uint nCmdShow;
  uint uVar2;
  
  nCmdShow = -(uint)(param_1 != 0) & 5;
  uVar2 = nCmdShow;
  pHVar1 = FindWindowExW(DAT_10004058,(HWND)0x0,L"#32770",(LPCWSTR)0x0);
  ShowWindow(pHVar1,uVar2);
  uVar2 = nCmdShow;
  pHVar1 = GetDlgItem(DAT_10004058,0x40a);
  ShowWindow(pHVar1,uVar2);
  uVar2 = nCmdShow;
  pHVar1 = GetDlgItem(DAT_10004058,0x40b);
  ShowWindow(pHVar1,uVar2);
  uVar2 = nCmdShow;
  pHVar1 = GetDlgItem(DAT_10004058,0x40c);
  ShowWindow(pHVar1,uVar2);
  uVar2 = nCmdShow;
  pHVar1 = GetDlgItem(DAT_10004058,0x40d);
  ShowWindow(pHVar1,uVar2);
  uVar2 = nCmdShow;
  pHVar1 = GetDlgItem(DAT_10004058,0x40e);
  ShowWindow(pHVar1,uVar2);
  uVar2 = nCmdShow;
  pHVar1 = GetDlgItem(DAT_10004058,0x40f);
  ShowWindow(pHVar1,uVar2);
  pHVar1 = GetDlgItem(DAT_10004058,0x416);
  ShowWindow(pHVar1,nCmdShow);
  return;
}



// ===== FUN_10001530 @ 10001530 (size 138) =====

void FUN_10001530(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UINT uFlags;
  
  iVar1 = GetSystemMetrics(7);
  iVar2 = GetSystemMetrics(1);
  iVar3 = DAT_1000404c / 2;
  iVar4 = GetSystemMetrics(7);
  iVar5 = GetSystemMetrics(0);
  uFlags = 4;
  iVar6 = DAT_10004048 / 2;
  iVar7 = GetSystemMetrics(4);
  iVar7 = iVar7 + iVar1 * 2 + DAT_1000404c;
  iVar1 = GetSystemMetrics(7);
  iVar1 = DAT_10004048 + iVar1 * 2;
  iVar8 = GetSystemMetrics(4);
  iVar8 = ((iVar2 / 2 - iVar3) + iVar4 * -2) - iVar8;
  iVar2 = GetSystemMetrics(7);
  SetWindowPos(DAT_10004058,(HWND)0x0,(iVar5 / 2 - iVar6) + iVar2 * -2,iVar8,iVar1,iVar7,uFlags);
  return;
}



// ===== FUN_100015c0 @ 100015c0 (size 318) =====

void __cdecl FUN_100015c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  tagRECT local_10;
  
  GetClientRect(DAT_10004018,&local_10);
  switch(param_1) {
  case 1:
    local_10.left = param_2;
    goto LAB_100016db;
  case 2:
    iVar1 = GetSystemMetrics(7);
    iVar2 = GetSystemMetrics(0);
    local_10.left = ((iVar2 + iVar1 * -2) - local_10.right) - param_2;
    goto LAB_100016db;
  case 3:
    local_10.left = param_2;
    iVar1 = GetSystemMetrics(7);
    iVar2 = GetSystemMetrics(1);
    iVar1 = ((iVar2 + iVar1 * -2) - local_10.bottom) - param_2;
    iVar2 = GetSystemMetrics(4);
    goto LAB_100016d5;
  case 4:
    iVar1 = GetSystemMetrics(7);
    iVar2 = GetSystemMetrics(0);
    local_10.left = ((iVar2 + iVar1 * -2) - local_10.right) - param_2;
    iVar1 = GetSystemMetrics(7);
    iVar2 = GetSystemMetrics(1);
    iVar1 = ((iVar2 + iVar1 * -2) - local_10.bottom) - param_2;
    break;
  default:
    iVar1 = GetSystemMetrics(0);
    iVar2 = GetSystemMetrics(7);
    local_10.left = (iVar1 / 2 - local_10.right / 2) + iVar2 * -2;
    iVar1 = GetSystemMetrics(1);
    iVar2 = GetSystemMetrics(7);
    iVar1 = (iVar1 / 2 - local_10.bottom / 2) + iVar2 * -2;
  }
  iVar2 = GetSystemMetrics(4);
LAB_100016d5:
  param_2 = iVar1 - iVar2;
LAB_100016db:
  local_10.top = param_2;
  SetWindowPos(DAT_10004058,(HWND)0x0,local_10.left,param_2,0,0,5);
  return;
}



// ===== FUN_10001710 @ 10001710 (size 257) =====

void FUN_10001710(void)

{
  LPWSTR hMem;
  LPWSTR name;
  int iVar1;
  HMODULE hInst;
  LPCWSTR name_00;
  UINT type;
  int iVar2;
  UINT fuLoad;
  
  hMem = GlobalAlloc(0x40,DAT_10004074 * 2);
  name = GlobalAlloc(0x40,DAT_10004074 * 2);
  do {
    iVar1 = FUN_10002197(hMem);
    if (0 < iVar1) goto LAB_100017dd;
    iVar1 = FUN_100013d0(hMem);
    switch(iVar1) {
    case 0:
      FUN_100021d7(hMem);
      goto LAB_100017dd;
    case 1:
    case 2:
    case 3:
    case 4:
      iVar2 = FUN_10002197(name);
      if ((iVar2 == 0) && (iVar2 = FUN_1000221d((ushort *)name), -1 < iVar2)) {
        DAT_10004010 = FUN_1000221d((ushort *)name);
      }
    case 5:
      DAT_10004004 = iVar1;
    default:
      if (iVar1 == 0) {
LAB_100017dd:
        if (DAT_10004060 == (HICON)0x0) {
          fuLoad = 0;
          iVar2 = 0x20;
          iVar1 = 0x20;
          type = 1;
          name_00 = (LPCWSTR)0x67;
          hInst = GetModuleHandleW((LPCWSTR)0x0);
          DAT_10004060 = LoadImageW(hInst,name_00,type,iVar1,iVar2,fuLoad);
        }
        GlobalFree(hMem);
        GlobalFree(name);
        return;
      }
      break;
    case 6:
      DAT_1000405c = 1;
      break;
    case 7:
      iVar1 = FUN_10002197(name);
      if (iVar1 == 0) {
        if (DAT_10004060 != (HICON)0x0) {
          DestroyIcon(DAT_10004060);
          DAT_10004060 = (HICON)0x0;
        }
        DAT_10004060 = LoadImageW((HINSTANCE)0x0,name,1,0x20,0x20,0x10);
      }
    }
  } while( true );
}



// ===== FUN_10001840 @ 10001840 (size 118) =====

void FUN_10001840(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if ((param_1 == DAT_10004058) && (param_2 == 0xf)) {
    if (DAT_10004018 != (HWND)0x0) {
      InvalidateRect(DAT_10004018,(RECT *)0x0,1);
      UpdateWindow(DAT_10004018);
    }
    if (DAT_10004034 != (HWND)0x0) {
      InvalidateRect(DAT_10004034,(RECT *)0x0,1);
      UpdateWindow(DAT_10004034);
    }
  }
  CallWindowProcW(DAT_1000402c,param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_100018c0 @ 100018c0 (size 77) =====

void FUN_100018c0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  HWND hWnd;
  
  if (param_2 == 0x402) {
    hWnd = DAT_10004034;
    if (DAT_10004034 == (HWND)0x0) {
      hWnd = DAT_10004030;
    }
    SendMessageW(hWnd,0x402,param_3,0);
  }
  CallWindowProcW(DAT_10004014,param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_10001910 @ 10001910 (size 66) =====

void FUN_10001910(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if (param_2 == 0xc) {
    SendDlgItemMessageW(DAT_10004018,0x3eb,0xc,0,param_4);
  }
  CallWindowProcW(DAT_10004028,param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_10001960 @ 10001960 (size 66) =====

void FUN_10001960(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if (param_2 == 0xc) {
    SendDlgItemMessageW(DAT_10004018,0x3ea,0xc,0,param_4);
  }
  CallWindowProcW(DAT_1000400c,param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_10001bd0 @ 10001bd0 (size 246) =====

undefined4 FUN_10001bd0(void)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  BOOL BVar4;
  tagMSG local_1c;
  
  pHVar1 = DAT_10004018;
  if (DAT_10004020 != 0) {
    pHVar1 = FindWindowExW(DAT_10004058,(HWND)0x0,L"#32770",(LPCWSTR)0x0);
  }
  DAT_10004034 = FUN_10001350(DAT_10004008,pHVar1);
  if (DAT_10004034 != (HWND)0x0) {
    LVar2 = SendMessageW(DAT_10004024,0x407,0,0);
    SendMessageW(DAT_10004034,0x401,0,LVar2 << 0x10);
    SendMessageW(DAT_10004034,0x402,1,0);
    iVar3 = IsWindow(DAT_10004034);
    while (iVar3 != 0) {
      BVar4 = PeekMessageW(&local_1c,DAT_10004034,0,0,1);
      if (BVar4 == 0) {
        WaitMessage();
      }
      else {
        DispatchMessageW(&local_1c);
      }
      iVar3 = IsWindow(DAT_10004034);
    }
    DAT_10004034 = (HWND)0x0;
  }
  return 0;
}



// ===== FUN_10001cd0 @ 10001cd0 (size 767) =====

void __cdecl FUN_10001cd0(HWND param_1)

{
  HWND pHVar1;
  HANDLE pvVar2;
  int iVar3;
  DWORD local_44;
  DWORD local_40;
  tagRECT local_3c;
  WINDOWPLACEMENT local_2c;
  
  if (DAT_10004050 == 0) {
    DAT_10004058 = param_1;
    DAT_10004018 = (HWND)0x0;
    DAT_10004034 = (HWND)0x0;
    DAT_10004004 = 5;
    DAT_10004010 = 0;
    DAT_1000405c = 0;
    DAT_10004060 = 0;
    FUN_10001710();
    iVar3 = 0x3ec;
    local_2c.length = 0x2c;
    pHVar1 = FindWindowExW(DAT_10004058,(HWND)0x0,L"#32770",(LPCWSTR)0x0);
    DAT_10004024 = GetDlgItem(pHVar1,iVar3);
    iVar3 = 0x3ee;
    pHVar1 = FindWindowExW(DAT_10004058,(HWND)0x0,L"#32770",(LPCWSTR)0x0);
    DAT_10004054 = GetDlgItem(pHVar1,iVar3);
    iVar3 = 0x3f3;
    pHVar1 = FindWindowExW(DAT_10004058,(HWND)0x0,L"#32770",(LPCWSTR)0x0);
    pHVar1 = GetDlgItem(pHVar1,iVar3);
    if (pHVar1 != (HWND)0x0) {
      iVar3 = 0x3f3;
      pHVar1 = FindWindowExW(DAT_10004058,(HWND)0x0,L"#32770",(LPCWSTR)0x0);
      DAT_1000401c = GetDlgItem(pHVar1,iVar3);
    }
    if (DAT_10004020 == 0) {
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_10001af0,
                            DAT_10004058,0,&local_44);
      if (pvVar2 == (HANDLE)0x0) {
        return;
      }
      while (DAT_10004018 == (HWND)0x0) {
        Sleep(10);
      }
      CloseHandle(pvVar2);
      SendMessageW(DAT_10004018,0xb,1,0);
      InvalidateRect(DAT_10004018,(RECT *)0x0,1);
      DAT_10004014 = SetWindowLongW(DAT_10004024,-4,0x100018c0);
      DAT_10004028 = SetWindowLongW(DAT_10004054,-4,0x10001910);
      DAT_1000400c = SetWindowLongW(DAT_1000401c,-4,0x10001960);
    }
    if (DAT_1000405c == 0) {
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10001bd0,DAT_10004058,0,&local_40);
      if (pvVar2 == (HANDLE)0x0) {
        return;
      }
      while (DAT_10004034 == (HWND)0x0) {
        Sleep(10);
      }
      CloseHandle(pvVar2);
    }
    if (DAT_10004020 == 0) {
      FUN_100015c0(DAT_10004004,DAT_10004010);
      if (DAT_1000405c == 0) {
        ShowWindow(DAT_10004030,0);
        GetWindowPlacement(DAT_10004030,&local_2c);
        GetClientRect(DAT_10004030,&local_3c);
        SetWindowPos(DAT_10004034,(HWND)0x0,local_2c.rcNormalPosition.left,
                     local_2c.rcNormalPosition.top,local_3c.right,local_3c.bottom,0x44);
        InvalidateRect(DAT_10004018,(RECT *)0x0,1);
        UpdateWindow(DAT_10004018);
      }
    }
    else {
      DAT_10004014 = SetWindowLongW(DAT_10004024,-4,0x100018c0);
      GetWindowPlacement(DAT_10004024,&local_2c);
      GetClientRect(DAT_10004024,&local_3c);
      ShowWindow(DAT_10004024,0);
      SetWindowPos(DAT_10004034,(HWND)0x0,local_2c.rcNormalPosition.left,
                   local_2c.rcNormalPosition.top,local_3c.right,local_3c.bottom,0x44);
    }
    DAT_1000402c = SetWindowLongW(DAT_10004058,-4,0x10001840);
    SetWindowPos(DAT_10004058,(HWND)0x0,0,0,0,0,0x37);
    DAT_10004050 = 1;
  }
  return;
}



// ===== FUN_10001fd0 @ 10001fd0 (size 219) =====

void FUN_10001fd0(void)

{
  HWND pHVar1;
  
  if (DAT_10004014 != 0) {
    SetWindowLongW(DAT_10004024,-4,DAT_10004014);
  }
  if (DAT_1000402c != 0) {
    SetWindowLongW(DAT_10004058,-4,DAT_1000402c);
  }
  if (DAT_10004028 != 0) {
    SetWindowLongW(DAT_10004054,-4,DAT_10004028);
  }
  if (DAT_1000400c != 0) {
    SetWindowLongW(DAT_1000401c,-4,DAT_1000400c);
  }
  pHVar1 = GetActiveWindow();
  if (pHVar1 != DAT_10004058) {
    ShowWindow(DAT_10004058,9);
  }
  if (DAT_10004034 != (HWND)0x0) {
    SendMessageW(DAT_10004034,0x10,0,0);
    DAT_10004034 = (HWND)0x0;
    ShowWindow(DAT_10004024,5);
  }
  if (DAT_10004060 != (HICON)0x0) {
    DestroyIcon(DAT_10004060);
    DAT_10004060 = (HICON)0x0;
  }
  if (DAT_10004018 != (HWND)0x0) {
    SendMessageW(DAT_10004018,0x10,0,0);
    DAT_10004018 = (HWND)0x0;
  }
  return;
}



// ===== Show @ 100020c0 (size 71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Show(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
                    /* 0x20c0  2  Show */
  DAT_10004074 = param_2;
  DAT_10004078 = param_4;
  _DAT_1000407c = param_3;
  (**(code **)(param_5 + 0xc))(DAT_10004008);
  DAT_10004020 = 0;
  FUN_10001cd0((HWND)&LAB_100020b0);
  return;
}



// ===== ShowPBOnly @ 10002110 (size 71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ShowPBOnly(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
                    /* 0x2110  3  ShowPBOnly */
  DAT_10004074 = param_2;
  DAT_10004078 = param_4;
  _DAT_1000407c = param_3;
  (**(code **)(param_5 + 0xc))(DAT_10004008);
  DAT_10004020 = 1;
  FUN_10001cd0((HWND)&LAB_100020b0);
  return;
}



// ===== entry @ 10002170 (size 39) =====

undefined4 entry(undefined4 param_1,int param_2)

{
  DAT_10004008 = param_1;
  DAT_10004050 = 0;
  if (param_2 == 0) {
    FUN_10001fd0();
  }
  return 1;
}



// ===== FUN_10002197 @ 10002197 (size 64) =====

undefined4 FUN_10002197(LPWSTR param_1)

{
  undefined4 *hMem;
  undefined4 uVar1;
  
  if ((DAT_10004078 == (undefined4 *)0x0) ||
     (hMem = (undefined4 *)*DAT_10004078, hMem == (undefined4 *)0x0)) {
    uVar1 = 1;
  }
  else {
    if (param_1 != (LPWSTR)0x0) {
      lstrcpyW(param_1,(LPCWSTR)(hMem + 1));
    }
    *DAT_10004078 = *hMem;
    GlobalFree(hMem);
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_100021d7 @ 100021d7 (size 70) =====

void FUN_100021d7(LPCWSTR param_1)

{
  undefined4 *puVar1;
  
  if (DAT_10004078 != (undefined4 *)0x0) {
    puVar1 = GlobalAlloc(0x40,DAT_10004074 * 2 + 8);
    lstrcpynW((LPWSTR)(puVar1 + 1),param_1,DAT_10004074);
    *puVar1 = *DAT_10004078;
    *DAT_10004078 = puVar1;
  }
  return;
}



// ===== FUN_1000221d @ 1000221d (size 175) =====

int FUN_1000221d(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  
  iVar3 = 0;
  if (*param_1 == 0x30) {
    puVar6 = param_1 + 1;
    uVar1 = *puVar6;
    if ((uVar1 == 0x78) || (uVar1 == 0x58)) {
      do {
        puVar6 = puVar6 + 1;
        uVar4 = (uint)*puVar6;
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
    if ((uVar1 < 0x38) && (0x2f < uVar1)) {
      while( true ) {
        uVar4 = (uint)*puVar6;
        if (uVar4 < 0x30) {
          return iVar3;
        }
        if (0x37 < uVar4) break;
        iVar3 = (uVar4 - 0x30) + iVar3 * 8;
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
    iVar5 = *param_1 - 0x30;
    if ((iVar5 < 0) || (9 < iVar5)) break;
    iVar3 = iVar5 + iVar3 * 10;
  }
  if (bVar2) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



// decompiled 21 ok, 0 failed, 21 total
