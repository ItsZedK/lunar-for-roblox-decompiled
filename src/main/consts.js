"use strict";
!(function() {
  try {
    var e = "undefined" != typeof window ? window : "undefined" != typeof global ? global : "undefined" != typeof globalThis ? globalThis : "undefined" != typeof self ? self : {};
    e.SENTRY_RELEASE = { id: "lunar-for-roblox@1.0.16" };
    var n = new e.Error().stack;
    n && (e._sentryDebugIds = e._sentryDebugIds || {}, e._sentryDebugIds[n] = "fc789607-2478-464c-9512-fdd40114e156", e._sentryDebugIdIdentifier = "sentry-dbid-fc789607-2478-464c-9512-fdd40114e156");
  } catch (e2) {
  }
})();
const RECORDING_EVENT_CHANNEL = "macros:recordingChanged";
const MAC_INPUT_MONITORING_URL = "x-apple.systempreferences:com.apple.preference.security?Privacy_ListenEvent";
const IOHID_REQUEST_TYPE_LISTEN_EVENT = 1;
const IOHID_ACCESS_TYPE_UNKNOWN = 2;
const MIN_DELAY_MS = 15;
const TAP_MAX_DWELL_MS = 200;
const WINDOWS_PUMP_INTERVAL_MS = 4;
const WINDOWS_PUMP_MAX_DRAIN = 128;
const MACOS_PUMP_INTERVAL_MS = 10;
const MACOS_RUNLOOP_SLICE_S = 0.05;
const EVENT_FLUSH_INTERVAL_MS = 50;
const STOP_ACK_TIMEOUT_MS = 2e3;
const START_ACK_TIMEOUT_MS = 5e3;
const WORKER_EXIT_FALLBACK_MS = 4e3;
const WINDOWS_LEFT_MODIFIER_VK_TO_NAME = /* @__PURE__ */ new Map([
  [160, "shift"],
  [162, "control"],
  [164, "alt"]
]);
const MACOS_EXTRA_KEYCODE_TO_NAME = /* @__PURE__ */ new Map(
  [[54, "command"]]
);
const MOUSE_BUTTON_NAMES = ["left", "right", "middle"];
exports.EVENT_FLUSH_INTERVAL_MS = EVENT_FLUSH_INTERVAL_MS;
exports.IOHID_ACCESS_TYPE_UNKNOWN = IOHID_ACCESS_TYPE_UNKNOWN;
exports.IOHID_REQUEST_TYPE_LISTEN_EVENT = IOHID_REQUEST_TYPE_LISTEN_EVENT;
exports.MACOS_EXTRA_KEYCODE_TO_NAME = MACOS_EXTRA_KEYCODE_TO_NAME;
exports.MACOS_PUMP_INTERVAL_MS = MACOS_PUMP_INTERVAL_MS;
exports.MACOS_RUNLOOP_SLICE_S = MACOS_RUNLOOP_SLICE_S;
exports.MAC_INPUT_MONITORING_URL = MAC_INPUT_MONITORING_URL;
exports.MIN_DELAY_MS = MIN_DELAY_MS;
exports.MOUSE_BUTTON_NAMES = MOUSE_BUTTON_NAMES;
exports.RECORDING_EVENT_CHANNEL = RECORDING_EVENT_CHANNEL;
exports.START_ACK_TIMEOUT_MS = START_ACK_TIMEOUT_MS;
exports.STOP_ACK_TIMEOUT_MS = STOP_ACK_TIMEOUT_MS;
exports.TAP_MAX_DWELL_MS = TAP_MAX_DWELL_MS;
exports.WINDOWS_LEFT_MODIFIER_VK_TO_NAME = WINDOWS_LEFT_MODIFIER_VK_TO_NAME;
exports.WINDOWS_PUMP_INTERVAL_MS = WINDOWS_PUMP_INTERVAL_MS;
exports.WINDOWS_PUMP_MAX_DRAIN = WINDOWS_PUMP_MAX_DRAIN;
exports.WORKER_EXIT_FALLBACK_MS = WORKER_EXIT_FALLBACK_MS;
