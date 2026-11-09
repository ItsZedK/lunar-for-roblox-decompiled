"use strict";
!(function () {
  try {
    var e =
      "undefined" != typeof window
        ? window
        : "undefined" != typeof global
          ? global
          : "undefined" != typeof globalThis
            ? globalThis
            : "undefined" != typeof self
              ? self
              : {};
    e.SENTRY_RELEASE = { id: "lunar-for-roblox@1.0.16" };
    var n = new e.Error().stack;
    n &&
      ((e._sentryDebugIds = e._sentryDebugIds || {}),
      (e._sentryDebugIds[n] = "e86f747a-9e4e-42be-92b6-60d920e28dc8"),
      (e._sentryDebugIdIdentifier =
        "sentry-dbid-e86f747a-9e4e-42be-92b6-60d920e28dc8"));
  } catch (e2) {}
})();
const consts = require("./chunks/consts-BnPo3Fh5.js");
const HC_ACTION = 0;
const WH_KEYBOARD_LL = 13;
const WH_MOUSE_LL = 14;
const WM_KEYDOWN = 256;
const WM_SYSKEYDOWN = 260;
const WM_LBUTTONDOWN = 513;
const WM_LBUTTONUP = 514;
const WM_RBUTTONDOWN = 516;
const WM_RBUTTONUP = 517;
const WM_MBUTTONDOWN = 519;
const WM_MBUTTONUP = 520;
const WM_MOUSEWHEEL = 522;
const LLKHF_EXTENDED = 1;
const LLKHF_INJECTED = 16;
const LLMHF_INJECTED = 1;
const PM_REMOVE = 1;
const VK_ESCAPE = 27;
const WHEEL_DELTA = 120;
const KBDLLHOOKSTRUCT_SIZE = 24;
const MSLLHOOKSTRUCT_SIZE = 32;
const WINDOWS_MOUSE_BUTTON_MESSAGES = /* @__PURE__ */ new Map([
  [WM_LBUTTONDOWN, { button: 0, dir: "down" }],
  [WM_LBUTTONUP, { button: 0, dir: "up" }],
  [WM_RBUTTONDOWN, { button: 1, dir: "down" }],
  [WM_RBUTTONUP, { button: 1, dir: "up" }],
  [WM_MBUTTONDOWN, { button: 2, dir: "down" }],
  [WM_MBUTTONUP, { button: 2, dir: "up" }],
]);
const CG_EVENT_TAP_SESSION = 1;
const CG_EVENT_TAP_HEAD_INSERT = 0;
const CG_EVENT_TAP_OPTION_LISTEN_ONLY = 1;
const CG_EVENT_LEFT_MOUSE_DOWN = 1;
const CG_EVENT_LEFT_MOUSE_UP = 2;
const CG_EVENT_RIGHT_MOUSE_DOWN = 3;
const CG_EVENT_RIGHT_MOUSE_UP = 4;
const CG_EVENT_KEY_DOWN = 10;
const CG_EVENT_KEY_UP = 11;
const CG_EVENT_FLAGS_CHANGED = 12;
const CG_EVENT_SCROLL_WHEEL = 22;
const CG_EVENT_OTHER_MOUSE_DOWN = 25;
const CG_EVENT_OTHER_MOUSE_UP = 26;
const CG_EVENT_TAP_DISABLED_BY_TIMEOUT = 4294967294;
const CG_EVENT_TAP_DISABLED_BY_USER_INPUT = 4294967295;
const CG_KEYBOARD_EVENT_KEYCODE = 9;
const CG_SCROLL_WHEEL_EVENT_DELTA_AXIS_1 = 11;
const CG_MOUSE_EVENT_BUTTON_NUMBER = 23;
const MAC_ESCAPE_KEYCODE = 53;
const CF_STRING_ENCODING_UTF8 = 134217984;
const CG_RECORD_EVENT_MASK =
  2 ** CG_EVENT_KEY_DOWN +
  2 ** CG_EVENT_KEY_UP +
  2 ** CG_EVENT_FLAGS_CHANGED +
  2 ** CG_EVENT_LEFT_MOUSE_DOWN +
  2 ** CG_EVENT_LEFT_MOUSE_UP +
  2 ** CG_EVENT_RIGHT_MOUSE_DOWN +
  2 ** CG_EVENT_RIGHT_MOUSE_UP +
  2 ** CG_EVENT_OTHER_MOUSE_DOWN +
  2 ** CG_EVENT_OTHER_MOUSE_UP +
  2 ** CG_EVENT_SCROLL_WHEEL;
const MACOS_MOUSE_EVENT_DIRECTIONS = /* @__PURE__ */ new Map([
  [CG_EVENT_LEFT_MOUSE_DOWN, "down"],
  [CG_EVENT_LEFT_MOUSE_UP, "up"],
  [CG_EVENT_RIGHT_MOUSE_DOWN, "down"],
  [CG_EVENT_RIGHT_MOUSE_UP, "up"],
  [CG_EVENT_OTHER_MOUSE_DOWN, "down"],
  [CG_EVENT_OTHER_MOUSE_UP, "up"],
]);
const MACOS_MODIFIER_KEYCODE_MASKS = /* @__PURE__ */ new Map([
  [54, 2 ** 20],
  // right command
  [55, 2 ** 20],
  // command
  [56, 2 ** 17],
  // shift
  [58, 2 ** 19],
  // alt
  [59, 2 ** 18],
  // control
  [60, 2 ** 17],
  // right shift
  [61, 2 ** 19],
  // right alt
  [62, 2 ** 18],
  // right control
]);
function createMacosRecorder(props) {
  const koffi = require("koffi");
  const cg = koffi.load(
    "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics",
  );
  const cf = koffi.load(
    "/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation",
  );
  const system = koffi.load("/usr/lib/libSystem.B.dylib");
  koffi.opaque("CGEvent");
  koffi.struct("MachTimebaseInfo", { numer: "uint32_t", denom: "uint32_t" });
  const TapCallback = koffi.proto(
    "CGEvent *RecorderTapCallback(void *proxy, uint32_t type, CGEvent *event, void *userInfo)",
  );
  const CGEventTapCreate = cg.func(
    "void *CGEventTapCreate(uint32_t tap, uint32_t place, uint32_t options, uint64_t eventsOfInterest, void *callback, void *userInfo)",
  );
  const CGEventTapEnable = cg.func(
    "void CGEventTapEnable(void *tap, bool enable)",
  );
  const CGEventGetIntegerValueField = cg.func(
    "int64_t CGEventGetIntegerValueField(CGEvent *event, uint32_t field)",
  );
  const CGEventGetFlags = cg.func("uint64_t CGEventGetFlags(CGEvent *event)");
  const CGEventGetTimestamp = cg.func(
    "uint64_t CGEventGetTimestamp(CGEvent *event)",
  );
  const CFMachPortCreateRunLoopSource = cf.func(
    "void *CFMachPortCreateRunLoopSource(void *allocator, void *port, intptr_t order)",
  );
  const CFRunLoopGetCurrent = cf.func("void *CFRunLoopGetCurrent()");
  const CFRunLoopAddSource = cf.func(
    "void CFRunLoopAddSource(void *rl, void *source, void *mode)",
  );
  const CFRunLoopRemoveSource = cf.func(
    "void CFRunLoopRemoveSource(void *rl, void *source, void *mode)",
  );
  const CFRunLoopRunInMode = cf.func(
    "int32_t CFRunLoopRunInMode(void *mode, double seconds, bool returnAfterSourceHandled)",
  );
  const CFStringCreateWithCString = cf.func(
    "void *CFStringCreateWithCString(void *alloc, const char *cStr, uint32_t encoding)",
  );
  const CFRelease = cf.func("void CFRelease(void *cf)");
  const machTimebaseInfo = system.func(
    "int mach_timebase_info(_Out_ MachTimebaseInfo *info)",
  );
  const heldModifierKeycodes = /* @__PURE__ */ new Set();
  let tapPort = null;
  const timebase = { numer: 1, denom: 1 };
  try {
    const info = {};
    machTimebaseInfo(info);
    if (
      typeof info.numer === "number" &&
      typeof info.denom === "number" &&
      info.numer > 0 &&
      info.denom > 0
    ) {
      timebase.numer = info.numer;
      timebase.denom = info.denom;
    }
  } catch (error) {
    console.warn("[Recorder worker] mach_timebase_info failed:", error);
  }
  const eventTimestampMs = (event) =>
    (Number(CGEventGetTimestamp(event)) * timebase.numer) /
    timebase.denom /
    1e6;
  const handleKey = (type, event) => {
    const keycode = Number(
      CGEventGetIntegerValueField(event, CG_KEYBOARD_EVENT_KEYCODE),
    );
    const down = type === CG_EVENT_KEY_DOWN;
    if (keycode === MAC_ESCAPE_KEYCODE) {
      if (down) {
        props.onEscape();
      }
      return;
    }
    props.emit({
      kind: "key",
      dir: down ? "down" : "up",
      code: keycode,
      extended: false,
      button: null,
      rotation: null,
      tMs: eventTimestampMs(event),
    });
  };
  const handleFlagsChanged = (event) => {
    const keycode = Number(
      CGEventGetIntegerValueField(event, CG_KEYBOARD_EVENT_KEYCODE),
    );
    const mask = MACOS_MODIFIER_KEYCODE_MASKS.get(keycode);
    if (mask === void 0) {
      return;
    }
    const flags = Number(CGEventGetFlags(event));
    const maskSet = Math.floor(flags / mask) % 2 === 1;
    if (maskSet && !heldModifierKeycodes.has(keycode)) {
      heldModifierKeycodes.add(keycode);
      props.emit({
        kind: "key",
        dir: "down",
        code: keycode,
        extended: false,
        button: null,
        rotation: null,
        tMs: eventTimestampMs(event),
      });
      return;
    }
    if (!heldModifierKeycodes.has(keycode)) {
      return;
    }
    heldModifierKeycodes.delete(keycode);
    props.emit({
      kind: "key",
      dir: "up",
      code: keycode,
      extended: false,
      button: null,
      rotation: null,
      tMs: eventTimestampMs(event),
    });
  };
  const handleMouse = (dir, event) => {
    const button = Number(
      CGEventGetIntegerValueField(event, CG_MOUSE_EVENT_BUTTON_NUMBER),
    );
    if (button > 2) {
      return;
    }
    props.emit({
      kind: "mouse",
      dir,
      code: 0,
      extended: false,
      button,
      rotation: null,
      tMs: eventTimestampMs(event),
    });
  };
  const handleScroll = (event) => {
    const delta = Number(
      CGEventGetIntegerValueField(event, CG_SCROLL_WHEEL_EVENT_DELTA_AXIS_1),
    );
    if (delta === 0) {
      return;
    }
    props.emit({
      kind: "wheel",
      dir: null,
      code: 0,
      extended: false,
      button: null,
      rotation: delta,
      tMs: eventTimestampMs(event),
    });
  };
  const tapCallback = (_proxy, type, event, _userInfo) => {
    if (
      type === CG_EVENT_TAP_DISABLED_BY_TIMEOUT ||
      type === CG_EVENT_TAP_DISABLED_BY_USER_INPUT
    ) {
      if (tapPort) {
        CGEventTapEnable(tapPort, true);
      }
      return event;
    }
    if (type === CG_EVENT_KEY_DOWN || type === CG_EVENT_KEY_UP) {
      handleKey(type, event);
      return event;
    }
    if (type === CG_EVENT_FLAGS_CHANGED) {
      handleFlagsChanged(event);
      return event;
    }
    if (type === CG_EVENT_SCROLL_WHEEL) {
      handleScroll(event);
      return event;
    }
    const mouseDir = MACOS_MOUSE_EVENT_DIRECTIONS.get(type);
    if (mouseDir) {
      handleMouse(mouseDir, event);
    }
    return event;
  };
  const registeredCallback = koffi.register(
    tapCallback,
    koffi.pointer(TapCallback),
  );
  tapPort = CGEventTapCreate(
    CG_EVENT_TAP_SESSION,
    CG_EVENT_TAP_HEAD_INSERT,
    CG_EVENT_TAP_OPTION_LISTEN_ONLY,
    CG_RECORD_EVENT_MASK,
    registeredCallback,
    null,
  );
  if (!tapPort) {
    koffi.unregister(registeredCallback);
    throw new Error(
      "Failed to create the event tap; Input Monitoring permission may be missing",
    );
  }
  const runLoopMode = CFStringCreateWithCString(
    null,
    "kCFRunLoopDefaultMode",
    CF_STRING_ENCODING_UTF8,
  );
  const runLoopSource = CFMachPortCreateRunLoopSource(null, tapPort, 0);
  const runLoop = CFRunLoopGetCurrent();
  CFRunLoopAddSource(runLoop, runLoopSource, runLoopMode);
  CGEventTapEnable(tapPort, true);
  let stopped2 = false;
  return {
    pump: () => {
      if (stopped2) {
        return;
      }
      CFRunLoopRunInMode(runLoopMode, consts.MACOS_RUNLOOP_SLICE_S, false);
    },
    pumpIntervalMs: consts.MACOS_PUMP_INTERVAL_MS,
    stop: () => {
      if (stopped2) {
        return;
      }
      stopped2 = true;
      CGEventTapEnable(tapPort, false);
      CFRunLoopRemoveSource(runLoop, runLoopSource, runLoopMode);
      CFRelease(runLoopSource);
      CFRelease(tapPort);
      CFRelease(runLoopMode);
      koffi.unregister(registeredCallback);
    },
  };
}
function createWindowsRecorder(props) {
  const koffi = require("koffi");
  const user32 = koffi.load("user32.dll");
  const kernel32 = koffi.load("kernel32.dll");
  const POINT = koffi.struct("POINT", { x: "long", y: "long" });
  const KBDLLHOOKSTRUCT = koffi.struct("KBDLLHOOKSTRUCT", {
    vkCode: "uint32_t",
    scanCode: "uint32_t",
    flags: "uint32_t",
    time: "uint32_t",
    dwExtraInfo: "uintptr_t",
  });
  const MSLLHOOKSTRUCT = koffi.struct("MSLLHOOKSTRUCT", {
    pt: POINT,
    mouseData: "uint32_t",
    flags: "uint32_t",
    time: "uint32_t",
    dwExtraInfo: "uintptr_t",
  });
  koffi.struct("MSG", {
    hwnd: "void *",
    message: "uint32_t",
    wParam: "uintptr_t",
    lParam: "intptr_t",
    time: "uint32_t",
    pt: POINT,
  });
  if (koffi.sizeof(KBDLLHOOKSTRUCT) !== KBDLLHOOKSTRUCT_SIZE) {
    throw new Error(
      `Unexpected KBDLLHOOKSTRUCT size ${koffi.sizeof(KBDLLHOOKSTRUCT)}`,
    );
  }
  if (koffi.sizeof(MSLLHOOKSTRUCT) !== MSLLHOOKSTRUCT_SIZE) {
    throw new Error(
      `Unexpected MSLLHOOKSTRUCT size ${koffi.sizeof(MSLLHOOKSTRUCT)}`,
    );
  }
  const KeyboardHookProc = koffi.proto(
    "intptr_t __stdcall RecorderKeyboardHookProc(int nCode, uintptr_t wParam, KBDLLHOOKSTRUCT *lParam)",
  );
  const MouseHookProc = koffi.proto(
    "intptr_t __stdcall RecorderMouseHookProc(int nCode, uintptr_t wParam, MSLLHOOKSTRUCT *lParam)",
  );
  const SetWindowsHookExW = user32.func(
    "void * __stdcall SetWindowsHookExW(int idHook, void *lpfn, void *hMod, uint32_t dwThreadId)",
  );
  const UnhookWindowsHookEx = user32.func(
    "int __stdcall UnhookWindowsHookEx(void *hhk)",
  );
  const CallNextHookEx = user32.func(
    "intptr_t __stdcall CallNextHookEx(void *hhk, int nCode, uintptr_t wParam, void *lParam)",
  );
  const PeekMessageW = user32.func(
    "int __stdcall PeekMessageW(_Out_ MSG *lpMsg, void *hWnd, uint32_t wMsgFilterMin, uint32_t wMsgFilterMax, uint32_t wRemoveMsg)",
  );
  const GetModuleHandleW = kernel32.func(
    "void * __stdcall GetModuleHandleW(void *lpModuleName)",
  );
  const handleKeyboardEvent = (wParam, lParam) => {
    const data = koffi.decode(lParam, KBDLLHOOKSTRUCT);
    if ((data.flags & LLKHF_INJECTED) !== 0) {
      return;
    }
    const down = wParam === WM_KEYDOWN || wParam === WM_SYSKEYDOWN;
    if (data.vkCode === VK_ESCAPE) {
      if (down) {
        props.onEscape();
      }
      return;
    }
    props.emit({
      kind: "key",
      dir: down ? "down" : "up",
      code: data.vkCode,
      // biome-ignore lint/suspicious/noBitwiseOperators: LLKHF flags are a bitmask
      extended: (data.flags & LLKHF_EXTENDED) !== 0,
      button: null,
      rotation: null,
      tMs: data.time,
    });
  };
  const handleMouseEvent = (wParam, lParam) => {
    const data = koffi.decode(lParam, MSLLHOOKSTRUCT);
    if ((data.flags & LLMHF_INJECTED) !== 0) {
      return;
    }
    const buttonMessage = WINDOWS_MOUSE_BUTTON_MESSAGES.get(wParam);
    if (buttonMessage) {
      props.emit({
        kind: "mouse",
        dir: buttonMessage.dir,
        code: 0,
        extended: false,
        button: buttonMessage.button,
        rotation: null,
        tMs: data.time,
      });
      return;
    }
    if (wParam === WM_MOUSEWHEEL) {
      let delta = Math.floor(data.mouseData / 65536);
      if (delta >= 32768) {
        delta -= 65536;
      }
      if (delta === 0) {
        return;
      }
      props.emit({
        kind: "wheel",
        dir: null,
        code: 0,
        extended: false,
        button: null,
        rotation: delta / WHEEL_DELTA,
        tMs: data.time,
      });
    }
  };
  const keyboardProc = (nCode, wParam, lParam) => {
    if (nCode === HC_ACTION) {
      handleKeyboardEvent(wParam, lParam);
    }
    return CallNextHookEx(null, nCode, wParam, lParam);
  };
  const mouseProc = (nCode, wParam, lParam) => {
    if (nCode === HC_ACTION) {
      handleMouseEvent(wParam, lParam);
    }
    return CallNextHookEx(null, nCode, wParam, lParam);
  };
  const registeredKeyboardProc = koffi.register(
    keyboardProc,
    koffi.pointer(KeyboardHookProc),
  );
  const registeredMouseProc = koffi.register(
    mouseProc,
    koffi.pointer(MouseHookProc),
  );
  const moduleHandle = GetModuleHandleW(null);
  const keyboardHook = SetWindowsHookExW(
    WH_KEYBOARD_LL,
    registeredKeyboardProc,
    moduleHandle,
    0,
  );
  const mouseHook = SetWindowsHookExW(
    WH_MOUSE_LL,
    registeredMouseProc,
    moduleHandle,
    0,
  );
  if (!(keyboardHook && mouseHook)) {
    if (keyboardHook) {
      UnhookWindowsHookEx(keyboardHook);
    }
    if (mouseHook) {
      UnhookWindowsHookEx(mouseHook);
    }
    koffi.unregister(registeredKeyboardProc);
    koffi.unregister(registeredMouseProc);
    throw new Error("SetWindowsHookExW failed");
  }
  const messageOut = {};
  let stopped2 = false;
  return {
    pump: () => {
      if (stopped2) {
        return;
      }
      for (
        let drained = 0;
        drained < consts.WINDOWS_PUMP_MAX_DRAIN;
        drained += 1
      ) {
        if (PeekMessageW(messageOut, null, 0, 0, PM_REMOVE) === 0) {
          break;
        }
      }
    },
    pumpIntervalMs: consts.WINDOWS_PUMP_INTERVAL_MS,
    stop: () => {
      if (stopped2) {
        return;
      }
      stopped2 = true;
      UnhookWindowsHookEx(keyboardHook);
      UnhookWindowsHookEx(mouseHook);
      koffi.unregister(registeredKeyboardProc);
      koffi.unregister(registeredMouseProc);
    },
  };
}
const parentPort = process.parentPort;
let buffer = [];
let recorder = null;
let pumpHandle = null;
let flushHandle = null;
let stopped = false;
let captureEnabled = false;
function post(message) {
  parentPort.postMessage(message);
}
function flush() {
  if (buffer.length === 0) {
    return;
  }
  const events = buffer;
  buffer = [];
  post({ type: "events", events });
}
function stop(reason) {
  if (stopped) {
    return;
  }
  stopped = true;
  if (pumpHandle !== null) {
    clearInterval(pumpHandle);
  }
  if (flushHandle !== null) {
    clearInterval(flushHandle);
  }
  flush();
  post({ type: "stopped", reason });
  setImmediate(() => {
    try {
      recorder?.stop();
    } catch (error) {
      console.warn("[Recorder worker] Hook teardown failed:", error);
    }
  });
  setTimeout(() => process.exit(0), consts.WORKER_EXIT_FALLBACK_MS);
}
function createPlatformRecorder() {
  const props = {
    emit: (event) => {
      if (captureEnabled && !stopped) {
        buffer.push(event);
      }
    },
    // Escape is the in-Roblox stop key, so it only acts while capturing;
    // the service's stop command covers stopping from anywhere else.
    onEscape: () => {
      if (captureEnabled) {
        stop("escape");
      }
    },
  };
  if (process.platform === "win32") {
    return createWindowsRecorder(props);
  }
  if (process.platform === "darwin") {
    return createMacosRecorder(props);
  }
  throw new Error(`Input recording is not supported on ${process.platform}`);
}
function main() {
  parentPort.on("message", (messageEvent) => {
    const command = messageEvent.data;
    if (command?.type === "stop") {
      stop("command");
    } else if (command?.type === "setCapture") {
      captureEnabled = command.enabled;
    }
  });
  try {
    recorder = createPlatformRecorder();
  } catch (error) {
    post({
      type: "error",
      message: error instanceof Error ? error.message : String(error),
    });
    setTimeout(() => process.exit(1), 0);
    return;
  }
  const activeRecorder = recorder;
  pumpHandle = setInterval(() => {
    try {
      activeRecorder.pump();
    } catch (error) {
      console.warn("[Recorder worker] Pump slice failed:", error);
    }
  }, activeRecorder.pumpIntervalMs);
  flushHandle = setInterval(flush, consts.EVENT_FLUSH_INTERVAL_MS);
  post({ type: "started" });
}
main();
