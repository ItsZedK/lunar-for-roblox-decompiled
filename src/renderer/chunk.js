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
      (e._sentryDebugIds[n] = "c28601eb-41f3-4b9f-936e-a686a87ac345"),
      (e._sentryDebugIdIdentifier =
        "sentry-dbid-c28601eb-41f3-4b9f-936e-a686a87ac345"));
  } catch (e2) {}
})();
import {
  z as jsxRuntimeExports,
  k as PiPointerCursorDefaultStroke,
  i as PiPaintBrushStroke,
  j as PiPencilEditStroke,
  r as PiTextStroke,
  e as PiEraserDefaultStroke,
  d as PiCropStroke,
  n as PiSquareStroke,
  c as PiCircleStroke,
  o as PiStarStroke,
  g as PiMinusDefaultStroke,
  P as PiArrowRightUpStroke,
  l as PiRotateLeftStroke,
  m as PiRotateRightStroke,
  p as PiSwapArrowHorizontalStroke,
  q as PiSwapArrowVerticalStroke,
  E as reactExports,
  G as useTranslation,
  F as toast,
  A as logger,
  y as isTypingTarget,
  I as Input,
  T as Tooltip,
  w as TooltipTrigger,
  x as cn,
  v as TooltipContent,
  s as Popover,
  u as PopoverTrigger,
  t as PopoverContent,
  f as PiEyedropperDefaultStroke,
  B as Button,
  D as Dialog,
  a as DialogContent,
  b as DialogTitle,
  h as PiMultipleCrossCancelDefaultStroke,
  C as ConfirmationDialog,
} from "./index-Hd8rcnh0.js";
const TRIANGLE_ICON_VIEW_BOX = "0 0 24 24";
const TRIANGLE_ICON_PATH = "M12 4.5 L20.5 19 H3.5 Z";
const TRIANGLE_ICON_STROKE_WIDTH = 1.8;
function EditorTriangleIcon(props) {
  return /* @__PURE__ */ jsxRuntimeExports.jsx("svg", {
    "aria-hidden": "true",
    fill: "none",
    viewBox: TRIANGLE_ICON_VIEW_BOX,
    ...props,
    children: /* @__PURE__ */ jsxRuntimeExports.jsx("path", {
      d: TRIANGLE_ICON_PATH,
      stroke: "currentColor",
      strokeLinejoin: "round",
      strokeWidth: TRIANGLE_ICON_STROKE_WIDTH,
    }),
  });
}
const TOOL_CURSORS = {
  crop: "crosshair",
  eraser: "cell",
  pen: "crosshair",
  select: "default",
  shape: "crosshair",
  text: "text",
};
const DEFAULT_TOOL = "pen";
const EDITOR_TOOLS = [
  {
    icon: PiPointerCursorDefaultStroke,
    id: "select",
    labelKey: "captures.editor.tools.select",
  },
  {
    icon: PiPaintBrushStroke,
    id: "pen",
    labelKey: "captures.editor.tools.pen",
  },
  {
    icon: PiPencilEditStroke,
    id: "shape",
    labelKey: "captures.editor.tools.shape",
  },
  { icon: PiTextStroke, id: "text", labelKey: "captures.editor.tools.text" },
  {
    icon: PiEraserDefaultStroke,
    id: "eraser",
    labelKey: "captures.editor.tools.eraser",
  },
  { icon: PiCropStroke, id: "crop", labelKey: "captures.editor.tools.crop" },
];
const DEFAULT_SHAPE_KIND = "rect";
const SHAPE_KINDS = [
  {
    icon: PiSquareStroke,
    id: "rect",
    labelKey: "captures.editor.shapes.rect",
  },
  {
    icon: PiCircleStroke,
    id: "ellipse",
    labelKey: "captures.editor.shapes.ellipse",
  },
  {
    icon: EditorTriangleIcon,
    id: "triangle",
    labelKey: "captures.editor.shapes.triangle",
  },
  { icon: PiStarStroke, id: "star", labelKey: "captures.editor.shapes.star" },
  {
    icon: PiMinusDefaultStroke,
    id: "line",
    labelKey: "captures.editor.shapes.line",
  },
  {
    icon: PiArrowRightUpStroke,
    id: "arrow",
    labelKey: "captures.editor.shapes.arrow",
  },
];
const CANVAS_TRANSFORMS = [
  {
    icon: PiRotateLeftStroke,
    id: "rotateCcw",
    labelKey: "captures.editor.transforms.rotateCcw",
  },
  {
    icon: PiRotateRightStroke,
    id: "rotateCw",
    labelKey: "captures.editor.transforms.rotateCw",
  },
  {
    icon: PiSwapArrowHorizontalStroke,
    id: "flipHorizontal",
    labelKey: "captures.editor.transforms.flipHorizontal",
  },
  {
    icon: PiSwapArrowVerticalStroke,
    id: "flipVertical",
    labelKey: "captures.editor.transforms.flipVertical",
  },
];
const EDITOR_COLORS = [
  { labelKey: "captures.editor.colors.red", value: "#ff3b30" },
  { labelKey: "captures.editor.colors.orange", value: "#ff9f0a" },
  { labelKey: "captures.editor.colors.yellow", value: "#ffd60a" },
  { labelKey: "captures.editor.colors.green", value: "#30d158" },
  { labelKey: "captures.editor.colors.blue", value: "#0a84ff" },
  { labelKey: "captures.editor.colors.white", value: "#ffffff" },
  { labelKey: "captures.editor.colors.black", value: "#000000" },
];
const DEFAULT_EDITOR_COLOR = "#ff3b30";
const STROKE_SIZES = [4, 8, 14];
const DEFAULT_STROKE_SIZE = 8;
const TEXT_SIZE_MULTIPLIER = 5;
const MIN_CROP_SIZE = 8;
const MIN_SHAPE_DRAG_DISTANCE = 2;
const MIN_STROKE_POINT_DISTANCE = 2;
const HIT_TEST_TOLERANCE = 10;
const SELECTION_PADDING = 8;
const HANDLE_SIZE = 11;
const ROTATION_HANDLE_OFFSET = 30;
const HANDLE_HIT_SLACK = 6;
const ROTATION_SNAP = Math.PI / 12;
const MIN_RESIZE_SIZE = 8;
const MIN_TEXT_FONT_SIZE = 6;
const STROKE_REFERENCE_WIDTH = 1920;
const ARROW_HEAD_SCALE = 3;
const ARROW_HEAD_MIN_LENGTH = 12;
const ARROW_HEAD_ANGLE = Math.PI / 6;
const STAR_INNER_RADIUS_RATIO = 0.45;
const STAR_POINTS = 5;
const TEXT_LINE_HEIGHT_RATIO = 1.25;
const TEXT_FONT_WEIGHT = 600;
const TEXT_FONT_FAMILY = "sans-serif";
const TEXT_SHADOW_COLOR = "rgba(0, 0, 0, 0.45)";
const TEXT_SHADOW_MIN_BLUR = 2;
const TEXT_SHADOW_BLUR_DIVISOR = 10;
const CROP_MASK_FILL = "rgba(0, 0, 0, 0.55)";
const CROP_BORDER_MIN_WIDTH = 2;
const CROP_BORDER_REFERENCE_WIDTH = 800;
const CROP_BORDER_COLOR = "#ffffff";
const CROP_DASH_ON_FACTOR = 4;
const CROP_DASH_OFF_FACTOR = 3;
const SELECTION_STROKE_COLOR = "rgba(255, 255, 255, 0.9)";
const SELECTION_DASH_FACTOR = 3;
const HANDLE_FILL = "#ffffff";
const HANDLE_STROKE = "rgba(15, 18, 25, 0.9)";
const LOUPE_SIZE = 110;
const LOUPE_SOURCE_PIXELS = 11;
const LOUPE_CENTER_STROKE = "#ffffff";
const LOUPE_CENTER_LINE_WIDTH = 1.5;
const HIDDEN_CURSOR = "none";
const DEFAULT_CURSOR = "default";
const MOVE_CURSOR = "move";
const GRAB_CURSOR = "grab";
const TEXT_INPUT_MIN_FONT_PX = 10;
const TEXT_INPUT_PADDING_CH = 2;
const TEXT_INPUT_MIN_WIDTH_CH = 8;
const PRIMARY_POINTER_BUTTON$1 = 0;
const EXPORT_MIME_TYPE = "image/png";
const EDITOR_CONTENT_CLASSES =
  "flex h-[88vh] w-[92vw] max-w-[1500px] flex-col gap-3 p-4 sm:max-w-[1500px]";
const EDITOR_HEADER_CLASSES = "flex w-full items-center justify-between gap-2";
const EDITOR_TITLE_CLASSES =
  "min-w-0 select-none truncate font-semibold text-base text-space-12 leading-normal";
const EDITOR_CLOSE_CLASSES =
  "flex size-8 shrink-0 cursor-pointer items-center justify-center rounded-md text-space-12 outline-none transition-colors hover:bg-space-4 focus-visible:ring-2 focus-visible:ring-sky-blue-a5 [&_svg]:size-5";
const EDITOR_FOOTER_CLASSES = "flex w-full items-center justify-between gap-3";
const EDITOR_FOOTER_HINT_CLASSES = "min-w-0 truncate text-space-10 text-xs";
const EDITOR_FOOTER_ACTIONS_CLASSES = "flex shrink-0 items-center gap-2";
function normalizeAngle(angle) {
  return Math.atan2(Math.sin(angle), Math.cos(angle));
}
function trianglePoints(rect) {
  return [
    { x: rect.x + rect.width / 2, y: rect.y },
    { x: rect.x + rect.width, y: rect.y + rect.height },
    { x: rect.x, y: rect.y + rect.height },
  ];
}
function starPoints(rect) {
  const centerX = rect.x + rect.width / 2;
  const centerY = rect.y + rect.height / 2;
  const outerX = rect.width / 2;
  const outerY = rect.height / 2;
  const points = [];
  for (let index = 0; index < STAR_POINTS * 2; index += 1) {
    const ratio = index % 2 === 0 ? 1 : STAR_INNER_RADIUS_RATIO;
    const angle = -Math.PI / 2 + (index * Math.PI) / STAR_POINTS;
    points.push({
      x: centerX + Math.cos(angle) * outerX * ratio,
      y: centerY + Math.sin(angle) * outerY * ratio,
    });
  }
  return points;
}
function rotatePoint(props) {
  const { angle, center, point } = props;
  const cos = Math.cos(angle);
  const sin = Math.sin(angle);
  const dx = point.x - center.x;
  const dy = point.y - center.y;
  return {
    x: center.x + dx * cos - dy * sin,
    y: center.y + dx * sin + dy * cos,
  };
}
function normalizeRect(a, b) {
  return {
    height: Math.round(Math.abs(a.y - b.y)),
    width: Math.round(Math.abs(a.x - b.x)),
    x: Math.round(Math.min(a.x, b.x)),
    y: Math.round(Math.min(a.y, b.y)),
  };
}
function getShapeCenter(annotation) {
  const rect = normalizeRect(annotation.from, annotation.to);
  return { x: rect.x + rect.width / 2, y: rect.y + rect.height / 2 };
}
function toAnnotationLocalPoint(annotation, point) {
  if (annotation.kind === "shape" && annotation.rotation) {
    return rotatePoint({
      angle: -annotation.rotation,
      center: getShapeCenter(annotation),
      point,
    });
  }
  return point;
}
function clampPoint(props) {
  return {
    x: Math.min(Math.max(props.point.x, 0), props.width),
    y: Math.min(Math.max(props.point.y, 0), props.height),
  };
}
function expandRect(rect, padding) {
  return {
    height: rect.height + padding * 2,
    width: rect.width + padding * 2,
    x: rect.x - padding,
    y: rect.y - padding,
  };
}
function rectContainsPoint(rect, point) {
  return (
    point.x >= rect.x &&
    point.x <= rect.x + rect.width &&
    point.y >= rect.y &&
    point.y <= rect.y + rect.height
  );
}
function isCropLargeEnough(rect) {
  return rect.width >= MIN_CROP_SIZE && rect.height >= MIN_CROP_SIZE;
}
function scaleStrokeWidth(strokeWidth, canvasWidth) {
  return strokeWidth * Math.max(1, canvasWidth / STROKE_REFERENCE_WIDTH);
}
function getTextFont(fontSize) {
  return `${TEXT_FONT_WEIGHT} ${fontSize}px ${TEXT_FONT_FAMILY}`;
}
function cloneCanvas(source) {
  const copy = document.createElement("canvas");
  copy.width = source.width;
  copy.height = source.height;
  copy.getContext("2d")?.drawImage(source, 0, 0);
  return copy;
}
function distanceToSegment(props) {
  const { a, b, point } = props;
  const abx = b.x - a.x;
  const aby = b.y - a.y;
  const lengthSquared = abx * abx + aby * aby;
  if (lengthSquared === 0) {
    return Math.hypot(point.x - a.x, point.y - a.y);
  }
  const projection =
    ((point.x - a.x) * abx + (point.y - a.y) * aby) / lengthSquared;
  const t = Math.min(Math.max(projection, 0), 1);
  return Math.hypot(point.x - (a.x + t * abx), point.y - (a.y + t * aby));
}
function distanceToPolyline(props) {
  const { closed, point, vertices } = props;
  let minDistance = Number.POSITIVE_INFINITY;
  for (let index = 0; index < vertices.length - 1; index += 1) {
    const a = vertices[index];
    const b = vertices[index + 1];
    if (a && b) {
      minDistance = Math.min(minDistance, distanceToSegment({ a, b, point }));
    }
  }
  const first = vertices[0];
  const last = vertices.at(-1);
  if (closed && first && last && vertices.length > 2) {
    minDistance = Math.min(
      minDistance,
      distanceToSegment({ a: last, b: first, point }),
    );
  }
  return minDistance;
}
function getAnnotationBounds(props) {
  const { annotation, canvasWidth, ctx } = props;
  if (annotation.kind === "stroke") {
    const xs = annotation.points.map((point) => point.x);
    const ys = annotation.points.map((point) => point.y);
    const pad = scaleStrokeWidth(annotation.strokeWidth, canvasWidth) / 2;
    const minX = Math.min(...xs);
    const minY = Math.min(...ys);
    return expandRect(
      {
        height: Math.max(...ys) - minY,
        width: Math.max(...xs) - minX,
        x: minX,
        y: minY,
      },
      pad,
    );
  }
  if (annotation.kind === "shape") {
    const pad = scaleStrokeWidth(annotation.strokeWidth, canvasWidth) / 2;
    return expandRect(normalizeRect(annotation.from, annotation.to), pad);
  }
  const fontSize = scaleStrokeWidth(annotation.fontSize, canvasWidth);
  ctx.font = getTextFont(fontSize);
  return {
    height: fontSize * TEXT_LINE_HEIGHT_RATIO,
    width: ctx.measureText(annotation.text).width,
    x: annotation.position.x,
    y: annotation.position.y,
  };
}
function hitsShapeOutline(props) {
  const { annotation, probe, reach } = props;
  const rect = normalizeRect(annotation.from, annotation.to);
  switch (annotation.shape) {
    case "rect":
      return (
        distanceToPolyline({
          closed: true,
          point: probe,
          vertices: [
            { x: rect.x, y: rect.y },
            { x: rect.x + rect.width, y: rect.y },
            { x: rect.x + rect.width, y: rect.y + rect.height },
            { x: rect.x, y: rect.y + rect.height },
          ],
        }) <= reach
      );
    case "ellipse": {
      const rx = rect.width / 2;
      const ry = rect.height / 2;
      if (rx < 1 || ry < 1) {
        return (
          distanceToSegment({
            a: annotation.from,
            b: annotation.to,
            point: probe,
          }) <= reach
        );
      }
      const radial = Math.hypot(
        (probe.x - (rect.x + rx)) / rx,
        (probe.y - (rect.y + ry)) / ry,
      );
      return Math.abs(radial - 1) * Math.min(rx, ry) <= reach;
    }
    case "triangle":
      return (
        distanceToPolyline({
          closed: true,
          point: probe,
          vertices: trianglePoints(rect),
        }) <= reach
      );
    case "star":
      return (
        distanceToPolyline({
          closed: true,
          point: probe,
          vertices: starPoints(rect),
        }) <= reach
      );
    default:
      return (
        distanceToSegment({
          a: annotation.from,
          b: annotation.to,
          point: probe,
        }) <= reach
      );
  }
}
function hitsAnnotationOutline(annotation, props) {
  const { canvasWidth, ctx, point, tolerance } = props;
  if (annotation.kind === "text") {
    return rectContainsPoint(
      expandRect(
        getAnnotationBounds({ annotation, canvasWidth, ctx }),
        tolerance,
      ),
      point,
    );
  }
  const reach =
    tolerance + scaleStrokeWidth(annotation.strokeWidth, canvasWidth) / 2;
  if (annotation.kind === "stroke") {
    const [only] = annotation.points;
    if (annotation.points.length === 1 && only) {
      return Math.hypot(point.x - only.x, point.y - only.y) <= reach;
    }
    return (
      distanceToPolyline({
        closed: false,
        point,
        vertices: annotation.points,
      }) <= reach
    );
  }
  return hitsShapeOutline({
    annotation,
    probe: toAnnotationLocalPoint(annotation, point),
    reach,
  });
}
function hitTestAnnotationOutlines(annotations, props) {
  for (let index = annotations.length - 1; index >= 0; index -= 1) {
    const annotation = annotations[index];
    if (annotation && hitsAnnotationOutline(annotation, props)) {
      return annotation;
    }
  }
  return null;
}
function hitTestAnnotations(annotations, props) {
  const { canvasWidth, ctx, point, tolerance } = props;
  for (let index = annotations.length - 1; index >= 0; index -= 1) {
    const annotation = annotations[index];
    if (!annotation) {
      continue;
    }
    const bounds = expandRect(
      getAnnotationBounds({ annotation, canvasWidth, ctx }),
      tolerance,
    );
    if (rectContainsPoint(bounds, toAnnotationLocalPoint(annotation, point))) {
      return annotation;
    }
  }
  return null;
}
function translateAnnotation(props) {
  const { annotation, dx, dy } = props;
  if (annotation.kind === "stroke") {
    return {
      ...annotation,
      points: annotation.points.map((point) => ({
        x: point.x + dx,
        y: point.y + dy,
      })),
    };
  }
  if (annotation.kind === "shape") {
    return {
      ...annotation,
      from: { x: annotation.from.x + dx, y: annotation.from.y + dy },
      to: { x: annotation.to.x + dx, y: annotation.to.y + dy },
    };
  }
  return {
    ...annotation,
    position: {
      x: annotation.position.x + dx,
      y: annotation.position.y + dy,
    },
  };
}
function getSelectionLayout(props) {
  const { annotation, canvasWidth } = props;
  if (
    annotation.kind === "shape" &&
    (annotation.shape === "line" || annotation.shape === "arrow")
  ) {
    return { from: annotation.from, kind: "endpoints", to: annotation.to };
  }
  const box = expandRect(getAnnotationBounds(props), SELECTION_PADDING);
  const center = { x: box.x + box.width / 2, y: box.y + box.height / 2 };
  const right = box.x + box.width;
  const bottom = box.y + box.height;
  const corners = [
    { id: "nw", x: box.x, y: box.y },
    { id: "ne", x: right, y: box.y },
    { id: "se", x: right, y: bottom },
    { id: "sw", x: box.x, y: bottom },
  ];
  const edges = [
    { id: "n", x: center.x, y: box.y },
    { id: "e", x: right, y: center.y },
    { id: "s", x: center.x, y: bottom },
    { id: "w", x: box.x, y: center.y },
  ];
  const isText = annotation.kind === "text";
  return {
    box,
    center,
    handles: isText ? corners : [...corners, ...edges],
    kind: "box",
    rotation: annotation.kind === "shape" ? (annotation.rotation ?? 0) : 0,
    rotationHandle: isText
      ? null
      : {
          x: center.x,
          y: box.y - scaleStrokeWidth(ROTATION_HANDLE_OFFSET, canvasWidth),
        },
  };
}
function cropEntry({ entry, rect }) {
  const x = Math.floor(rect.x);
  const y = Math.floor(rect.y);
  const base = document.createElement("canvas");
  base.width = Math.max(
    1,
    Math.min(entry.base.width - x, Math.round(rect.width)),
  );
  base.height = Math.max(
    1,
    Math.min(entry.base.height - y, Math.round(rect.height)),
  );
  const ctx = base.getContext("2d");
  if (!ctx) {
    throw new Error("Could not create crop canvas");
  }
  ctx.drawImage(
    entry.base,
    x,
    y,
    base.width,
    base.height,
    0,
    0,
    base.width,
    base.height,
  );
  const sizeScale =
    Math.max(1, entry.base.width / STROKE_REFERENCE_WIDTH) /
    Math.max(1, base.width / STROKE_REFERENCE_WIDTH);
  const annotations = entry.annotations.map((annotation) => {
    const moved = translateAnnotation({ annotation, dx: -x, dy: -y });
    return moved.kind === "text"
      ? { ...moved, fontSize: moved.fontSize * sizeScale }
      : { ...moved, strokeWidth: moved.strokeWidth * sizeScale };
  });
  return { annotations, base };
}
function isQuarterTurn(transform) {
  return transform === "rotateCw" || transform === "rotateCcw";
}
function transformPoint(props) {
  const { height, point, transform, width } = props;
  switch (transform) {
    case "rotateCw":
      return { x: height - point.y, y: point.x };
    case "rotateCcw":
      return { x: point.y, y: width - point.x };
    case "flipHorizontal":
      return { x: width - point.x, y: point.y };
    default:
      return { x: point.x, y: height - point.y };
  }
}
function transformCanvas(source, transform) {
  const rotated = isQuarterTurn(transform);
  const result = document.createElement("canvas");
  result.width = rotated ? source.height : source.width;
  result.height = rotated ? source.width : source.height;
  const ctx = result.getContext("2d");
  if (!ctx) {
    return result;
  }
  switch (transform) {
    case "rotateCw":
      ctx.translate(source.height, 0);
      ctx.rotate(Math.PI / 2);
      break;
    case "rotateCcw":
      ctx.translate(0, source.width);
      ctx.rotate(-Math.PI / 2);
      break;
    case "flipHorizontal":
      ctx.translate(source.width, 0);
      ctx.scale(-1, 1);
      break;
    default:
      ctx.translate(0, source.height);
      ctx.scale(1, -1);
      break;
  }
  ctx.drawImage(source, 0, 0);
  return result;
}
function transformBoxedShape({ annotation, props, sizeScale }) {
  const { height, transform, width } = props;
  const map = (point) => transformPoint({ height, point, transform, width });
  const rotation = annotation.rotation ?? 0;
  if (transform === "flipHorizontal" || transform === "flipVertical") {
    const halfTurn =
      transform === "flipVertical" &&
      (annotation.shape === "triangle" || annotation.shape === "star")
        ? Math.PI
        : 0;
    return {
      ...annotation,
      from: map(annotation.from),
      rotation: normalizeAngle(halfTurn - rotation),
      to: map(annotation.to),
    };
  }
  if (annotation.shape === "rect" || annotation.shape === "ellipse") {
    return {
      ...annotation,
      from: map(annotation.from),
      strokeWidth: annotation.strokeWidth * sizeScale,
      to: map(annotation.to),
    };
  }
  const rect = normalizeRect(annotation.from, annotation.to);
  const center = map({
    x: rect.x + rect.width / 2,
    y: rect.y + rect.height / 2,
  });
  const quarter = transform === "rotateCw" ? Math.PI / 2 : -Math.PI / 2;
  return {
    ...annotation,
    from: { x: center.x - rect.width / 2, y: center.y - rect.height / 2 },
    rotation: normalizeAngle(rotation + quarter),
    strokeWidth: annotation.strokeWidth * sizeScale,
    to: { x: center.x + rect.width / 2, y: center.y + rect.height / 2 },
  };
}
function transformAnnotation(props) {
  const { annotation, ctx, height, transform, width } = props;
  const map = (point) => transformPoint({ height, point, transform, width });
  const sizeScale = isQuarterTurn(transform)
    ? Math.max(1, width / STROKE_REFERENCE_WIDTH) /
      Math.max(1, height / STROKE_REFERENCE_WIDTH)
    : 1;
  if (annotation.kind === "stroke") {
    return {
      ...annotation,
      points: annotation.points.map(map),
      strokeWidth: annotation.strokeWidth * sizeScale,
    };
  }
  if (annotation.kind === "text") {
    const bounds = getAnnotationBounds({
      annotation,
      canvasWidth: width,
      ctx,
    });
    const center = map({
      x: bounds.x + bounds.width / 2,
      y: bounds.y + bounds.height / 2,
    });
    return {
      ...annotation,
      fontSize: annotation.fontSize * sizeScale,
      position: {
        x: center.x - bounds.width / 2,
        y: center.y - bounds.height / 2,
      },
    };
  }
  if (annotation.shape === "line" || annotation.shape === "arrow") {
    return {
      ...annotation,
      from: map(annotation.from),
      strokeWidth: annotation.strokeWidth * sizeScale,
      to: map(annotation.to),
    };
  }
  return transformBoxedShape({ annotation, props, sizeScale });
}
function chromeBorderWidth(canvasWidth) {
  return Math.max(
    CROP_BORDER_MIN_WIDTH,
    canvasWidth / CROP_BORDER_REFERENCE_WIDTH,
  );
}
function drawHandleSquare(props) {
  const { borderWidth, ctx, point, size } = props;
  ctx.fillStyle = HANDLE_FILL;
  ctx.strokeStyle = HANDLE_STROKE;
  ctx.lineWidth = borderWidth;
  ctx.beginPath();
  ctx.rect(point.x - size / 2, point.y - size / 2, size, size);
  ctx.fill();
  ctx.stroke();
}
function drawHandleCircle(props) {
  const { borderWidth, ctx, point, size } = props;
  ctx.fillStyle = HANDLE_FILL;
  ctx.strokeStyle = HANDLE_STROKE;
  ctx.lineWidth = borderWidth;
  ctx.beginPath();
  ctx.arc(point.x, point.y, size / 2, 0, Math.PI * 2);
  ctx.fill();
  ctx.stroke();
}
function drawSelectionChrome(props) {
  const { canvasWidth, ctx, layout } = props;
  const borderWidth = chromeBorderWidth(canvasWidth);
  const size = scaleStrokeWidth(HANDLE_SIZE, canvasWidth);
  const dash = [
    borderWidth * SELECTION_DASH_FACTOR,
    borderWidth * SELECTION_DASH_FACTOR,
  ];
  ctx.save();
  ctx.strokeStyle = SELECTION_STROKE_COLOR;
  ctx.lineWidth = borderWidth;
  if (layout.kind === "endpoints") {
    ctx.setLineDash(dash);
    ctx.beginPath();
    ctx.moveTo(layout.from.x, layout.from.y);
    ctx.lineTo(layout.to.x, layout.to.y);
    ctx.stroke();
    ctx.setLineDash([]);
    drawHandleCircle({ borderWidth, ctx, point: layout.from, size });
    drawHandleCircle({ borderWidth, ctx, point: layout.to, size });
    ctx.restore();
    return;
  }
  const { box, center, handles, rotation, rotationHandle } = layout;
  if (rotation !== 0) {
    ctx.translate(center.x, center.y);
    ctx.rotate(rotation);
    ctx.translate(-center.x, -center.y);
  }
  ctx.setLineDash(dash);
  ctx.strokeRect(box.x, box.y, box.width, box.height);
  ctx.setLineDash([]);
  if (rotationHandle) {
    ctx.beginPath();
    ctx.moveTo(center.x, box.y);
    ctx.lineTo(rotationHandle.x, rotationHandle.y);
    ctx.stroke();
    drawHandleCircle({ borderWidth, ctx, point: rotationHandle, size });
  }
  for (const handle of handles) {
    drawHandleSquare({ borderWidth, ctx, point: handle, size });
  }
  ctx.restore();
}
function drawCropMask(props) {
  const { canvasHeight, canvasWidth, ctx, rect } = props;
  ctx.save();
  ctx.fillStyle = CROP_MASK_FILL;
  ctx.fillRect(0, 0, canvasWidth, rect.y);
  ctx.fillRect(0, rect.y, rect.x, rect.height);
  ctx.fillRect(
    rect.x + rect.width,
    rect.y,
    canvasWidth - rect.x - rect.width,
    rect.height,
  );
  ctx.fillRect(
    0,
    rect.y + rect.height,
    canvasWidth,
    canvasHeight - rect.y - rect.height,
  );
  const borderWidth = chromeBorderWidth(canvasWidth);
  ctx.strokeStyle = CROP_BORDER_COLOR;
  ctx.lineWidth = borderWidth;
  ctx.setLineDash([
    borderWidth * CROP_DASH_ON_FACTOR,
    borderWidth * CROP_DASH_OFF_FACTOR,
  ]);
  ctx.strokeRect(rect.x, rect.y, rect.width, rect.height);
  ctx.restore();
}
function applyStrokeStyle(props) {
  const { color, ctx, strokeWidth } = props;
  ctx.strokeStyle = color;
  ctx.fillStyle = color;
  ctx.lineWidth = strokeWidth;
  ctx.lineCap = "round";
  ctx.lineJoin = "round";
}
function drawArrowHead(props) {
  const { ctx, from, strokeWidth, to } = props;
  const headLength = Math.max(
    strokeWidth * ARROW_HEAD_SCALE,
    ARROW_HEAD_MIN_LENGTH,
  );
  const angle = Math.atan2(to.y - from.y, to.x - from.x);
  for (const offset of [-ARROW_HEAD_ANGLE, ARROW_HEAD_ANGLE]) {
    ctx.beginPath();
    ctx.moveTo(to.x, to.y);
    ctx.lineTo(
      to.x - headLength * Math.cos(angle + offset),
      to.y - headLength * Math.sin(angle + offset),
    );
    ctx.stroke();
  }
}
function strokePolygon(ctx, vertices) {
  const [first, ...rest] = vertices;
  if (!first) {
    return;
  }
  ctx.beginPath();
  ctx.moveTo(first.x, first.y);
  for (const vertex of rest) {
    ctx.lineTo(vertex.x, vertex.y);
  }
  ctx.closePath();
  ctx.stroke();
}
function drawShapeGeometry(props) {
  const { annotation, ctx, strokeWidth } = props;
  const rect = normalizeRect(annotation.from, annotation.to);
  switch (annotation.shape) {
    case "rect":
      ctx.lineJoin = "miter";
      ctx.strokeRect(rect.x, rect.y, rect.width, rect.height);
      return;
    case "triangle":
      strokePolygon(ctx, trianglePoints(rect));
      return;
    case "star":
      strokePolygon(ctx, starPoints(rect));
      return;
    case "ellipse":
      ctx.beginPath();
      ctx.ellipse(
        rect.x + rect.width / 2,
        rect.y + rect.height / 2,
        rect.width / 2,
        rect.height / 2,
        0,
        0,
        Math.PI * 2,
      );
      ctx.stroke();
      return;
    case "line":
      ctx.beginPath();
      ctx.moveTo(annotation.from.x, annotation.from.y);
      ctx.lineTo(annotation.to.x, annotation.to.y);
      ctx.stroke();
      return;
    default:
      ctx.beginPath();
      ctx.moveTo(annotation.from.x, annotation.from.y);
      ctx.lineTo(annotation.to.x, annotation.to.y);
      ctx.stroke();
      drawArrowHead({
        ctx,
        from: annotation.from,
        strokeWidth,
        to: annotation.to,
      });
  }
}
function drawStroke({ ctx, annotation, canvasWidth }) {
  const strokeWidth = scaleStrokeWidth(annotation.strokeWidth, canvasWidth);
  applyStrokeStyle({ color: annotation.color, ctx, strokeWidth });
  const [first, ...rest] = annotation.points;
  if (!first) {
    return;
  }
  if (rest.length === 0) {
    ctx.beginPath();
    ctx.arc(first.x, first.y, strokeWidth / 2, 0, Math.PI * 2);
    ctx.fill();
    return;
  }
  ctx.beginPath();
  ctx.moveTo(first.x, first.y);
  for (const point of rest) {
    ctx.lineTo(point.x, point.y);
  }
  ctx.stroke();
}
function drawText({ ctx, annotation, canvasWidth }) {
  const fontSize = scaleStrokeWidth(annotation.fontSize, canvasWidth);
  ctx.font = getTextFont(fontSize);
  ctx.textBaseline = "top";
  ctx.fillStyle = annotation.color;
  ctx.save();
  ctx.shadowColor = TEXT_SHADOW_COLOR;
  ctx.shadowBlur = Math.max(
    TEXT_SHADOW_MIN_BLUR,
    fontSize / TEXT_SHADOW_BLUR_DIVISOR,
  );
  ctx.fillText(annotation.text, annotation.position.x, annotation.position.y);
  ctx.restore();
}
function drawAnnotation(props) {
  const { annotation, canvasWidth, ctx } = props;
  if (annotation.kind === "stroke") {
    drawStroke({ ctx, annotation, canvasWidth });
    return;
  }
  if (annotation.kind === "text") {
    drawText({ ctx, annotation, canvasWidth });
    return;
  }
  const strokeWidth = scaleStrokeWidth(annotation.strokeWidth, canvasWidth);
  applyStrokeStyle({ color: annotation.color, ctx, strokeWidth });
  if (!annotation.rotation) {
    drawShapeGeometry({ annotation, ctx, strokeWidth });
    return;
  }
  const center = getShapeCenter(annotation);
  ctx.save();
  ctx.translate(center.x, center.y);
  ctx.rotate(annotation.rotation);
  ctx.translate(-center.x, -center.y);
  drawShapeGeometry({ annotation, ctx, strokeWidth });
  ctx.restore();
}
function renderAnnotations(props) {
  for (const annotation of props.annotations) {
    drawAnnotation({
      annotation,
      canvasWidth: props.canvasWidth,
      ctx: props.ctx,
    });
  }
}
function useEditorCanvas(props) {
  const areaRef = reactExports.useRef(null);
  const displayRef = reactExports.useRef(null);
  const onLoad = reactExports.useEffectEvent(props.initialize);
  const onError = reactExports.useEffectEvent(props.onLoadError);
  const [size, setSize] = reactExports.useState({ width: 0, height: 0 });
  const {
    crop,
    entry,
    hiddenTextId,
    imageDataUrl,
    overlayRef,
    preview,
    selectedId,
  } = props;
  const base = entry?.base;
  reactExports.useEffect(() => {
    let cancelled = false;
    const image = new Image();
    image.onload = () => {
      if (cancelled) {
        return;
      }
      const canvas = document.createElement("canvas");
      canvas.width = image.naturalWidth;
      canvas.height = image.naturalHeight;
      const ctx = canvas.getContext("2d");
      if (!(ctx && canvas.width && canvas.height)) {
        onError();
        return;
      }
      ctx.drawImage(image, 0, 0);
      onLoad(canvas);
    };
    image.onerror = () => {
      if (!cancelled) {
        onError();
      }
    };
    image.src = imageDataUrl;
    return () => {
      cancelled = true;
      image.onload = null;
      image.onerror = null;
    };
  }, [imageDataUrl]);
  reactExports.useLayoutEffect(() => {
    const area = areaRef.current;
    if (!(area && base)) {
      return;
    }
    const measure = () => {
      const scale = Math.min(
        area.clientWidth / base.width,
        area.clientHeight / base.height,
        1,
      );
      setSize({ width: base.width * scale, height: base.height * scale });
    };
    measure();
    const observer = new ResizeObserver(measure);
    observer.observe(area);
    return () => observer.disconnect();
  }, [base]);
  reactExports.useLayoutEffect(() => {
    const display = displayRef.current;
    if (!(display && base)) {
      return;
    }
    display.width = base.width;
    display.height = base.height;
    display.getContext("2d")?.drawImage(base, 0, 0);
  }, [base]);
  reactExports.useLayoutEffect(() => {
    const canvas = overlayRef.current;
    const ctx = canvas?.getContext("2d");
    if (!(canvas && ctx && entry)) {
      return;
    }
    if (
      canvas.width !== entry.base.width ||
      canvas.height !== entry.base.height
    ) {
      canvas.width = entry.base.width;
      canvas.height = entry.base.height;
    } else {
      ctx.clearRect(0, 0, canvas.width, canvas.height);
    }
    const annotations = preview ?? entry.annotations;
    renderAnnotations({
      ctx,
      canvasWidth: canvas.width,
      annotations: annotations.filter((item) => item.id !== hiddenTextId),
    });
    const selected = annotations.find((item) => item.id === selectedId);
    if (selected) {
      const layout = getSelectionLayout({
        annotation: selected,
        canvasWidth: canvas.width,
        ctx,
      });
      drawSelectionChrome({ canvasWidth: canvas.width, ctx, layout });
    }
    if (crop) {
      drawCropMask({
        canvasHeight: canvas.height,
        canvasWidth: canvas.width,
        ctx,
        rect: crop,
      });
    }
  }, [entry, crop, hiddenTextId, overlayRef, preview, selectedId]);
  return { areaRef, displayRef, overlayRef, size };
}
function buildExportCanvas(entry) {
  const canvas = cloneCanvas(entry.base);
  const ctx = canvas.getContext("2d");
  if (!ctx) {
    throw new Error("Could not create export canvas");
  }
  renderAnnotations({
    annotations: entry.annotations,
    canvasWidth: canvas.width,
    ctx,
  });
  return canvas;
}
function canvasPoint({ canvas, clientX, clientY }) {
  const rect = canvas.getBoundingClientRect();
  return clampPoint({
    width: canvas.width,
    height: canvas.height,
    point: {
      x: ((clientX - rect.left) / Math.max(1, rect.width)) * canvas.width,
      y: ((clientY - rect.top) / Math.max(1, rect.height)) * canvas.height,
    },
  });
}
function useEditorExport({ commitText, crop, history, item, onSaved }) {
  const { t } = useTranslation();
  const inFlight = reactExports.useRef(false);
  const mounted = reactExports.useRef(true);
  const [busy, setBusy] = reactExports.useState(false);
  const exportData = reactExports.useCallback(() => {
    commitText();
    const entry = history.entryRef.current;
    if (!entry) {
      throw new Error("Editor image is not ready");
    }
    return buildExportCanvas(
      crop ? cropEntry({ entry, rect: crop }) : entry,
    ).toDataURL(EXPORT_MIME_TYPE);
  }, [commitText, crop, history.entryRef]);
  const save = reactExports.useCallback(
    async (mode) => {
      if (inFlight.current) {
        return;
      }
      inFlight.current = true;
      setBusy(true);
      try {
        const result = await window.api.captures.saveEditedCapture({
          captureId: item.id,
          dataUrl: exportData(),
          mode,
        });
        if (!mounted.current) {
          return;
        }
        if (!result.ok) {
          throw new Error(result.error.message);
        }
        onSaved(result.item, mode);
        toast({
          title: t("captures.toast.saved"),
          body: result.item.fileName,
        });
      } catch (error) {
        logger.error("Failed to save edited capture", {
          captureId: item.id,
          mode,
          error,
        });
        if (mounted.current) {
          toast({
            title: t("captures.toast.saveFailed"),
            body: t("captures.toast.saveFailedBody"),
          });
        }
      } finally {
        inFlight.current = false;
        if (mounted.current) {
          setBusy(false);
        }
      }
    },
    [exportData, item.id, onSaved, t],
  );
  const copy = reactExports.useCallback(async () => {
    if (inFlight.current) {
      return;
    }
    inFlight.current = true;
    setBusy(true);
    try {
      const result = await window.api.captures.copyImage({
        source: "editor",
        dataUrl: exportData(),
      });
      if (!mounted.current) {
        return;
      }
      if (!result.ok) {
        throw new Error(result.error.message);
      }
      toast({ title: t("captures.toast.copied"), body: item.fileName });
    } catch (error) {
      logger.error("Failed to copy edited capture", {
        captureId: item.id,
        error,
      });
      if (mounted.current) {
        toast({
          title: t("captures.toast.copyFailed"),
          body: item.fileName,
        });
      }
    } finally {
      inFlight.current = false;
      if (mounted.current) {
        setBusy(false);
      }
    }
  }, [exportData, item.fileName, item.id, t]);
  reactExports.useEffect(() => {
    mounted.current = true;
    return () => {
      mounted.current = false;
    };
  }, []);
  return { busy, copy, save };
}
function useEditorEyedropper({ active, entry, onPick }) {
  const canvasRef = reactExports.useRef(null);
  const cachedEntry = reactExports.useRef(null);
  const cache = reactExports.useRef(null);
  const sampleRef = reactExports.useRef(null);
  const [loupe, setLoupe] = reactExports.useState(null);
  const clear = reactExports.useCallback(() => setLoupe(null), []);
  const sample = reactExports.useCallback(
    (event) => {
      if (!(active && entry)) {
        return null;
      }
      if (cachedEntry.current !== entry) {
        cache.current = buildExportCanvas(entry).getContext("2d", {
          willReadFrequently: true,
        });
        cachedEntry.current = entry;
      }
      const ctx = cache.current;
      if (!ctx) {
        return null;
      }
      const point = canvasPoint({
        canvas: event.currentTarget,
        clientX: event.clientX,
        clientY: event.clientY,
      });
      point.x = Math.min(Math.floor(point.x), ctx.canvas.width - 1);
      point.y = Math.min(Math.floor(point.y), ctx.canvas.height - 1);
      const [red = 0, green = 0, blue = 0] = ctx.getImageData(
        point.x,
        point.y,
        1,
        1,
      ).data;
      const color = `#${[red, green, blue].map((channel) => channel.toString(16).padStart(2, "0")).join("")}`;
      sampleRef.current = { ctx, point };
      return color;
    },
    [active, entry],
  );
  const move = reactExports.useCallback(
    (event) => {
      const color = sample(event);
      if (!color) {
        return;
      }
      const rect = event.currentTarget.getBoundingClientRect();
      setLoupe({
        color,
        left: event.clientX - rect.left - LOUPE_SIZE / 2,
        top: event.clientY - rect.top - LOUPE_SIZE / 2,
      });
    },
    [sample],
  );
  const pick = reactExports.useCallback(
    (event) => {
      if (event.button !== 0) {
        return;
      }
      const color = sample(event);
      if (color) {
        event.preventDefault();
        onPick(color);
        clear();
      }
    },
    [clear, onPick, sample],
  );
  reactExports.useLayoutEffect(() => {
    const ctx = canvasRef.current?.getContext("2d");
    const sample2 = sampleRef.current;
    if (!(loupe && ctx && sample2)) {
      return;
    }
    const scale = LOUPE_SIZE / LOUPE_SOURCE_PIXELS;
    ctx.imageSmoothingEnabled = false;
    ctx.clearRect(0, 0, LOUPE_SIZE, LOUPE_SIZE);
    ctx.drawImage(
      sample2.ctx.canvas,
      sample2.point.x - Math.floor(LOUPE_SOURCE_PIXELS / 2),
      sample2.point.y - Math.floor(LOUPE_SOURCE_PIXELS / 2),
      LOUPE_SOURCE_PIXELS,
      LOUPE_SOURCE_PIXELS,
      0,
      0,
      LOUPE_SIZE,
      LOUPE_SIZE,
    );
    ctx.strokeStyle = LOUPE_CENTER_STROKE;
    ctx.lineWidth = LOUPE_CENTER_LINE_WIDTH;
    ctx.strokeRect(
      (LOUPE_SIZE - scale) / 2,
      (LOUPE_SIZE - scale) / 2,
      scale,
      scale,
    );
  }, [loupe]);
  return { canvasRef, clear, loupe: active ? loupe : null, move, pick };
}
function useEditorHistory() {
  const current = reactExports.useRef(null);
  const original = reactExports.useRef(null);
  const undoStack = reactExports.useRef([]);
  const redoStack = reactExports.useRef([]);
  const [entry, setEntry] = reactExports.useState(null);
  const publish = reactExports.useCallback((next) => {
    current.current = next;
    setEntry(next);
  }, []);
  const initialize = reactExports.useCallback(
    (base) => {
      const initial = { annotations: [], base };
      original.current = initial;
      undoStack.current = [];
      redoStack.current = [];
      publish(initial);
    },
    [publish],
  );
  const commit = reactExports.useCallback(
    (next) => {
      if (!current.current || next === current.current) {
        return;
      }
      undoStack.current = [...undoStack.current, current.current].slice(-30);
      redoStack.current = [];
      publish(next);
    },
    [publish],
  );
  const undo = reactExports.useCallback(() => {
    const next = undoStack.current.pop();
    if (next && current.current) {
      redoStack.current.push(current.current);
      publish(next);
    }
  }, [publish]);
  const redo = reactExports.useCallback(() => {
    const next = redoStack.current.pop();
    if (next && current.current) {
      undoStack.current.push(current.current);
      publish(next);
    }
  }, [publish]);
  return {
    canRedo: redoStack.current.length > 0,
    canUndo: undoStack.current.length > 0,
    commit,
    entryRef: current,
    dirty: entry !== original.current,
    entry,
    initialize,
    redo,
    undo,
  };
}
const DELETE_KEYS = /* @__PURE__ */ new Set(["Delete", "Backspace"]);
function useEditorKeyboard(props) {
  const onKeyDown = reactExports.useEffectEvent((event) => {
    if (
      !props.enabled ||
      event.defaultPrevented ||
      isTypingTarget(event.target) ||
      event.altKey
    ) {
      return;
    }
    if ((event.ctrlKey || event.metaKey) && event.key.toLowerCase() === "z") {
      event.preventDefault();
      if (event.shiftKey) {
        props.onRedo();
      } else {
        props.onUndo();
      }
    } else if (
      !(event.ctrlKey || event.metaKey) &&
      DELETE_KEYS.has(event.key)
    ) {
      event.preventDefault();
      props.onDelete();
    }
  });
  reactExports.useEffect(() => {
    const listener = (event) => onKeyDown(event);
    window.addEventListener("keydown", listener);
    return () => window.removeEventListener("keydown", listener);
  }, []);
}
const HANDLE_ANGLES = {
  e: 0,
  n: 270,
  ne: 315,
  nw: 225,
  s: 90,
  se: 45,
  sw: 135,
  w: 180,
};
const RESIZE_CURSORS = ["ew-resize", "nwse-resize", "ns-resize", "nesw-resize"];
const DEGREES_PER_CURSOR_STEP = 45;
const DEGREES_PER_HALF_TURN = 180;
function hitTestSelectionHandle(props) {
  const { canvasWidth, layout, point } = props;
  const reach = scaleStrokeWidth(
    HANDLE_SIZE / 2 + HANDLE_HIT_SLACK,
    canvasWidth,
  );
  if (layout.kind === "endpoints") {
    if (Math.hypot(point.x - layout.to.x, point.y - layout.to.y) <= reach) {
      return { end: "to", kind: "endpoint" };
    }
    if (Math.hypot(point.x - layout.from.x, point.y - layout.from.y) <= reach) {
      return { end: "from", kind: "endpoint" };
    }
    return null;
  }
  const probe =
    layout.rotation === 0
      ? point
      : rotatePoint({
          angle: -layout.rotation,
          center: layout.center,
          point,
        });
  if (
    layout.rotationHandle &&
    Math.hypot(
      probe.x - layout.rotationHandle.x,
      probe.y - layout.rotationHandle.y,
    ) <= reach
  ) {
    return { kind: "rotate" };
  }
  for (const handle of layout.handles) {
    if (
      Math.abs(probe.x - handle.x) <= reach &&
      Math.abs(probe.y - handle.y) <= reach
    ) {
      return { handle: handle.id, kind: "resize" };
    }
  }
  return null;
}
function getResizeCursor(handle, rotation) {
  const degrees =
    HANDLE_ANGLES[handle] + (rotation * DEGREES_PER_HALF_TURN) / Math.PI;
  const steps = Math.round(degrees / DEGREES_PER_CURSOR_STEP);
  const index =
    ((steps % RESIZE_CURSORS.length) + RESIZE_CURSORS.length) %
    RESIZE_CURSORS.length;
  return RESIZE_CURSORS[index] ?? "default";
}
function selectionCursor({ ctx, entry, point, selectedId }) {
  const canvasWidth = entry.base.width;
  const selected = entry.annotations.find((item) => item.id === selectedId);
  if (selected) {
    const layout = getSelectionLayout({
      annotation: selected,
      canvasWidth,
      ctx,
    });
    const hit = hitTestSelectionHandle({ canvasWidth, layout, point });
    if (hit?.kind === "rotate") {
      return GRAB_CURSOR;
    }
    if (hit?.kind === "endpoint") {
      return MOVE_CURSOR;
    }
    if (hit?.kind === "resize") {
      return getResizeCursor(
        hit.handle,
        layout.kind === "box" ? layout.rotation : 0,
      );
    }
  }
  return hitTestAnnotations(entry.annotations, {
    canvasWidth,
    ctx,
    point,
    tolerance: scaleStrokeWidth(HIT_TEST_TOLERANCE, canvasWidth),
  })
    ? MOVE_CURSOR
    : DEFAULT_CURSOR;
}
function getGeometryRect(props) {
  const { annotation } = props;
  if (annotation.kind === "shape") {
    return normalizeRect(annotation.from, annotation.to);
  }
  if (annotation.kind === "stroke") {
    const xs = annotation.points.map((point) => point.x);
    const ys = annotation.points.map((point) => point.y);
    const minX = Math.min(...xs);
    const minY = Math.min(...ys);
    return {
      height: Math.max(...ys) - minY,
      width: Math.max(...xs) - minX,
      x: minX,
      y: minY,
    };
  }
  return getAnnotationBounds(props);
}
function rotationOf(annotation) {
  return annotation.kind === "shape" ? (annotation.rotation ?? 0) : 0;
}
function rectCenter(rect) {
  return { x: rect.x + rect.width / 2, y: rect.y + rect.height / 2 };
}
function getResizeGrabOffset(props) {
  const { annotation, canvasWidth, ctx, handle, pointer } = props;
  const rect = getGeometryRect({ annotation, canvasWidth, ctx });
  const rotation = rotationOf(annotation);
  const local =
    rotation === 0
      ? pointer
      : rotatePoint({
          angle: -rotation,
          center: rectCenter(rect),
          point: pointer,
        });
  let x = 0;
  if (handle.includes("w")) {
    x = local.x - rect.x;
  } else if (handle.includes("e")) {
    x = local.x - (rect.x + rect.width);
  }
  let y = 0;
  if (handle.includes("n")) {
    y = local.y - rect.y;
  } else if (handle.includes("s")) {
    y = local.y - (rect.y + rect.height);
  }
  return { x, y };
}
function resizeAnnotation(props) {
  const { annotation, canvasWidth, ctx, grabOffset, handle, pointer } = props;
  const initialRect = getGeometryRect({ annotation, canvasWidth, ctx });
  if (initialRect.width === 0 && initialRect.height === 0) {
    return annotation;
  }
  const rotation = rotationOf(annotation);
  const center = rectCenter(initialRect);
  const localPointer =
    rotation === 0
      ? pointer
      : rotatePoint({ angle: -rotation, center, point: pointer });
  const local = {
    x: localPointer.x - (grabOffset?.x ?? 0),
    y: localPointer.y - (grabOffset?.y ?? 0),
  };
  let left = initialRect.x;
  let right = initialRect.x + initialRect.width;
  let top = initialRect.y;
  let bottom = initialRect.y + initialRect.height;
  if (handle.includes("w")) {
    left = Math.min(local.x, right - MIN_RESIZE_SIZE);
  }
  if (handle.includes("e")) {
    right = Math.max(local.x, left + MIN_RESIZE_SIZE);
  }
  if (handle.includes("n")) {
    top = Math.min(local.y, bottom - MIN_RESIZE_SIZE);
  }
  if (handle.includes("s")) {
    bottom = Math.max(local.y, top + MIN_RESIZE_SIZE);
  }
  const newRect = {
    height: bottom - top,
    width: right - left,
    x: left,
    y: top,
  };
  let offsetX = 0;
  let offsetY = 0;
  if (rotation !== 0) {
    const localCenter = rectCenter(newRect);
    const worldCenter = rotatePoint({
      angle: rotation,
      center,
      point: localCenter,
    });
    offsetX = worldCenter.x - localCenter.x;
    offsetY = worldCenter.y - localCenter.y;
  }
  if (annotation.kind === "shape") {
    return {
      ...annotation,
      from: { x: newRect.x + offsetX, y: newRect.y + offsetY },
      to: {
        x: newRect.x + newRect.width + offsetX,
        y: newRect.y + newRect.height + offsetY,
      },
    };
  }
  if (annotation.kind === "stroke") {
    const scaleX =
      initialRect.width > 0 ? newRect.width / initialRect.width : 1;
    const scaleY =
      initialRect.height > 0 ? newRect.height / initialRect.height : 1;
    return {
      ...annotation,
      points: annotation.points.map((point) => ({
        x: newRect.x + (point.x - initialRect.x) * scaleX,
        y: newRect.y + (point.y - initialRect.y) * scaleY,
      })),
    };
  }
  const scale = Math.max(
    initialRect.width > 0 ? newRect.width / initialRect.width : 1,
    MIN_TEXT_FONT_SIZE / annotation.fontSize,
  );
  return {
    ...annotation,
    fontSize: annotation.fontSize * scale,
    position: {
      x: handle.includes("w")
        ? initialRect.x + initialRect.width * (1 - scale)
        : initialRect.x,
      y: handle.includes("n")
        ? initialRect.y + initialRect.height * (1 - scale)
        : initialRect.y,
    },
  };
}
function rotateAnnotation(props) {
  const { annotation, center, delta, snap } = props;
  if (annotation.kind === "shape") {
    const raw = (annotation.rotation ?? 0) + delta;
    const rotation = snap
      ? Math.round(raw / ROTATION_SNAP) * ROTATION_SNAP
      : raw;
    return { ...annotation, rotation: normalizeAngle(rotation) };
  }
  if (annotation.kind === "stroke") {
    const applied = snap
      ? Math.round(delta / ROTATION_SNAP) * ROTATION_SNAP
      : delta;
    return {
      ...annotation,
      points: annotation.points.map((point) =>
        rotatePoint({ angle: applied, center, point }),
      ),
    };
  }
  return annotation;
}
function beginSelection({ ctx, gesture, selectedId }) {
  const canvasWidth = gesture.entry.base.width;
  const selected = gesture.entry.annotations.find(
    (item) => item.id === selectedId,
  );
  if (selected) {
    const layout = getSelectionLayout({
      annotation: selected,
      canvasWidth,
      ctx,
    });
    const handle = hitTestSelectionHandle({
      canvasWidth,
      layout,
      point: gesture.start,
    });
    if (handle) {
      gesture.handle = handle;
      gesture.initial = selected;
      if (layout.kind === "box") {
        gesture.center = layout.center;
      }
      if (handle.kind === "resize") {
        gesture.grabOffset = getResizeGrabOffset({
          annotation: selected,
          canvasWidth,
          ctx,
          handle: handle.handle,
          pointer: gesture.start,
        });
      }
      return selected;
    }
  }
  const hit = hitTestAnnotations(gesture.entry.annotations, {
    canvasWidth,
    ctx,
    point: gesture.start,
    tolerance: scaleStrokeWidth(HIT_TEST_TOLERANCE, canvasWidth),
  });
  gesture.initial = hit ?? null;
  return hit ?? null;
}
function updateSelection({ gesture, point, ctx, shift }) {
  const { initial: annotation, handle, center, start } = gesture;
  if (!annotation) {
    return null;
  }
  if (handle?.kind === "resize") {
    return resizeAnnotation({
      annotation,
      canvasWidth: gesture.entry.base.width,
      ctx,
      grabOffset: gesture.grabOffset,
      handle: handle.handle,
      pointer: point,
    });
  }
  if (handle?.kind === "rotate" && center) {
    const delta =
      Math.atan2(point.y - center.y, point.x - center.x) -
      Math.atan2(start.y - center.y, start.x - center.x);
    return rotateAnnotation({ annotation, center, delta, snap: shift });
  }
  if (handle?.kind === "endpoint" && annotation.kind === "shape") {
    return { ...annotation, [handle.end]: point };
  }
  return translateAnnotation({
    annotation,
    dx: point.x - start.x,
    dy: point.y - start.y,
  });
}
function updateGesture(props) {
  const { gesture, point, ctx } = props;
  const canvasWidth = gesture.entry.base.width;
  if (gesture.kind === "select") {
    const updated = updateSelection(props);
    if (!updated) {
      return gesture.annotations;
    }
    return gesture.entry.annotations.map((item) =>
      item.id === updated.id ? updated : item,
    );
  }
  if (gesture.kind === "eraser") {
    const hit = hitTestAnnotationOutlines(gesture.annotations, {
      canvasWidth,
      ctx,
      point,
      tolerance: scaleStrokeWidth(HIT_TEST_TOLERANCE, canvasWidth),
    });
    return hit
      ? gesture.annotations.filter((item) => item.id !== hit.id)
      : gesture.annotations;
  }
  const draft = gesture.initial;
  if (draft?.kind === "stroke") {
    const last = gesture.points.at(-1) ?? gesture.start;
    const moved =
      Math.hypot(point.x - last.x, point.y - last.y) >=
      MIN_STROKE_POINT_DISTANCE;
    if (!moved && gesture.annotations !== gesture.entry.annotations) {
      return gesture.annotations;
    }
    if (moved) {
      gesture.points.push(point);
    }
    return [
      ...gesture.entry.annotations,
      { ...draft, points: [...gesture.points] },
    ];
  }
  if (draft?.kind === "shape") {
    return [...gesture.entry.annotations, { ...draft, to: point }];
  }
  return gesture.annotations;
}
function useEditorPointer(props) {
  const gestureRef = reactExports.useRef(null);
  const previewFrameRef = reactExports.useRef(null);
  const pendingPreviewRef = reactExports.useRef(null);
  const [preview, setPreview] = reactExports.useState(null);
  const [dragging, setDragging] = reactExports.useState(false);
  const [cursor, setCursor] = reactExports.useState(DEFAULT_CURSOR);
  const {
    canvasRef,
    color,
    enabled,
    history,
    nextId,
    onText,
    selectedId,
    setCrop,
    setSelectedId,
    shape,
    strokeSize,
    tool,
  } = props;
  const schedulePreview = reactExports.useCallback((annotations) => {
    pendingPreviewRef.current = annotations;
    previewFrameRef.current ??= requestAnimationFrame(() => {
      previewFrameRef.current = null;
      setPreview(pendingPreviewRef.current);
    });
  }, []);
  const dropPendingPreview = reactExports.useCallback(() => {
    if (previewFrameRef.current !== null) {
      cancelAnimationFrame(previewFrameRef.current);
      previewFrameRef.current = null;
    }
    pendingPreviewRef.current = null;
  }, []);
  const cancel = reactExports.useCallback(() => {
    const gesture = gestureRef.current;
    gestureRef.current = null;
    dropPendingPreview();
    setPreview(null);
    setDragging(false);
    if (gesture?.kind === "crop") {
      setCrop(null);
    }
    const canvas = canvasRef.current;
    if (gesture && canvas?.hasPointerCapture(gesture.pointerId)) {
      canvas.releasePointerCapture(gesture.pointerId);
    }
  }, [canvasRef, dropPendingPreview, setCrop]);
  const onPointerDown = reactExports.useCallback(
    (event) => {
      const entry = history.entryRef.current;
      const canvas = event.currentTarget;
      const ctx = canvas.getContext("2d");
      if (
        !enabled ||
        event.button !== PRIMARY_POINTER_BUTTON$1 ||
        !entry ||
        !ctx ||
        gestureRef.current
      ) {
        return;
      }
      event.preventDefault();
      canvas.focus();
      const start = canvasPoint({
        canvas,
        clientX: event.clientX,
        clientY: event.clientY,
      });
      if (tool === "text") {
        onText(start);
        return;
      }
      const gesture = {
        annotations: entry.annotations,
        center: null,
        entry,
        grabOffset: null,
        handle: null,
        id: nextId(),
        initial: null,
        kind: tool,
        pointerId: event.pointerId,
        points: [start],
        start,
      };
      if (tool === "select") {
        setSelectedId(beginSelection({ ctx, gesture, selectedId })?.id ?? null);
      } else {
        setSelectedId(null);
      }
      if (tool === "pen") {
        gesture.initial = {
          color,
          id: gesture.id,
          kind: "stroke",
          points: [start],
          strokeWidth: strokeSize,
        };
      } else if (tool === "shape") {
        gesture.initial = {
          color,
          from: start,
          id: gesture.id,
          kind: "shape",
          shape,
          strokeWidth: strokeSize,
          to: start,
        };
      } else if (tool === "crop") {
        setCrop(null);
      }
      gestureRef.current = gesture;
      setDragging(true);
      canvas.setPointerCapture(event.pointerId);
      if (tool === "eraser" || tool === "pen") {
        gesture.annotations = updateGesture({
          ctx,
          gesture,
          point: start,
          shift: event.shiftKey,
        });
        setPreview(gesture.annotations);
      }
    },
    [
      color,
      enabled,
      history.entryRef,
      nextId,
      onText,
      selectedId,
      setCrop,
      setSelectedId,
      shape,
      strokeSize,
      tool,
    ],
  );
  const onPointerMove = reactExports.useCallback(
    (event) => {
      const gesture = gestureRef.current;
      const canvas = event.currentTarget;
      const ctx = canvas.getContext("2d");
      if (!ctx) {
        return;
      }
      const point = canvasPoint({
        canvas,
        clientX: event.clientX,
        clientY: event.clientY,
      });
      if (!gesture) {
        const entry = history.entryRef.current;
        if (enabled && tool === "select" && entry) {
          setCursor(selectionCursor({ ctx, entry, point, selectedId }));
        }
        return;
      }
      if (gesture.pointerId !== event.pointerId) {
        return;
      }
      if (gesture.kind === "crop") {
        setCrop(normalizeRect(gesture.start, point));
        return;
      }
      const annotations = updateGesture({
        ctx,
        gesture,
        point,
        shift: event.shiftKey,
      });
      if (annotations !== gesture.annotations) {
        gesture.annotations = annotations;
        schedulePreview(annotations);
      }
    },
    [enabled, history.entryRef, schedulePreview, selectedId, setCrop, tool],
  );
  const onPointerUp = reactExports.useCallback(
    (event) => {
      const gesture = gestureRef.current;
      if (!gesture || gesture.pointerId !== event.pointerId) {
        return;
      }
      onPointerMove(event);
      gestureRef.current = null;
      setDragging(false);
      dropPendingPreview();
      setPreview(null);
      const point = canvasPoint({
        canvas: event.currentTarget,
        clientX: event.clientX,
        clientY: event.clientY,
      });
      const distance = Math.hypot(
        point.x - gesture.start.x,
        point.y - gesture.start.y,
      );
      const isShortShapeDrag =
        (gesture.kind === "select" || gesture.kind === "shape") &&
        distance < MIN_SHAPE_DRAG_DISTANCE;
      if (gesture.kind === "crop") {
        const rect = normalizeRect(gesture.start, point);
        setCrop(isCropLargeEnough(rect) ? rect : null);
      } else if (
        gesture.annotations !== gesture.entry.annotations &&
        !isShortShapeDrag
      ) {
        history.commit({
          ...gesture.entry,
          annotations: gesture.annotations,
        });
      }
      if (event.currentTarget.hasPointerCapture(event.pointerId)) {
        event.currentTarget.releasePointerCapture(event.pointerId);
      }
    },
    [dropPendingPreview, history.commit, onPointerMove, setCrop],
  );
  const onDoubleClick = reactExports.useCallback(
    (event) => {
      const entry = history.entryRef.current;
      const canvas = event.currentTarget;
      const ctx = canvas.getContext("2d");
      if (!enabled || tool !== "select" || !entry || !ctx) {
        return;
      }
      const point = canvasPoint({
        canvas,
        clientX: event.clientX,
        clientY: event.clientY,
      });
      const hit = hitTestAnnotations(entry.annotations, {
        canvasWidth: canvas.width,
        ctx,
        point,
        tolerance: scaleStrokeWidth(HIT_TEST_TOLERANCE, canvas.width),
      });
      if (hit?.kind === "text") {
        onText(point, hit);
      }
    },
    [enabled, history.entryRef, onText, tool],
  );
  reactExports.useEffect(() => dropPendingPreview, [dropPendingPreview]);
  return {
    cursor,
    cancel,
    dragging,
    onDoubleClick,
    onPointerDown,
    onPointerMove,
    onPointerUp,
    preview,
  };
}
function useEditorTextTool({ color, history, nextId, strokeSize }) {
  const draftRef = reactExports.useRef(null);
  const [draft, setDraft] = reactExports.useState(null);
  const cancel = reactExports.useCallback(() => {
    draftRef.current = null;
    setDraft(null);
  }, []);
  const commit = reactExports.useCallback(() => {
    const editing = draftRef.current;
    const entry = history.entryRef.current;
    cancel();
    if (!(editing && entry)) {
      return;
    }
    const text = editing.value.trim();
    const existing = entry.annotations.find((item) => item.id === editing.id);
    if (
      (!text && editing.id === null) ||
      (existing?.kind === "text" && existing.text === text)
    ) {
      return;
    }
    const annotations = entry.annotations.filter(
      (item) => item.id !== editing.id,
    );
    if (text) {
      const annotation = {
        color: editing.color,
        fontSize: editing.fontSize,
        id: editing.id ?? nextId(),
        kind: "text",
        position: editing.position,
        text,
      };
      if (existing) {
        history.commit({
          ...entry,
          annotations: entry.annotations.map((item) =>
            item.id === editing.id ? annotation : item,
          ),
        });
        return;
      }
      annotations.push(annotation);
    }
    history.commit({ ...entry, annotations });
  }, [cancel, history.commit, history.entryRef, nextId]);
  const begin = reactExports.useCallback(
    (point, annotation) => {
      commit();
      const existing = annotation?.kind === "text" ? annotation : null;
      const next = {
        color: existing?.color ?? color,
        fontSize: existing?.fontSize ?? strokeSize * TEXT_SIZE_MULTIPLIER,
        id: existing?.id ?? null,
        position: existing?.position ?? point,
        value: existing?.text ?? "",
      };
      draftRef.current = next;
      setDraft(next);
    },
    [color, commit, strokeSize],
  );
  const change = reactExports.useCallback((value) => {
    if (!draftRef.current) {
      return;
    }
    const next = { ...draftRef.current, value };
    draftRef.current = next;
    setDraft(next);
  }, []);
  return { begin, cancel, change, commit, draft };
}
function useEditorSession(props) {
  const { t } = useTranslation();
  const overlayRef = reactExports.useRef(null);
  const counter = reactExports.useRef(0);
  const history = useEditorHistory();
  const [tool, setTool] = reactExports.useState(DEFAULT_TOOL);
  const [shape, setShape] = reactExports.useState(DEFAULT_SHAPE_KIND);
  const [color, setColor] = reactExports.useState(DEFAULT_EDITOR_COLOR);
  const [strokeSize, setStrokeSize] =
    reactExports.useState(DEFAULT_STROKE_SIZE);
  const [selectedId, setSelectedId] = reactExports.useState(null);
  const [crop, setCrop] = reactExports.useState(null);
  const [dropper, setDropper] = reactExports.useState(false);
  const nextId = reactExports.useCallback(() => {
    counter.current += 1;
    return counter.current;
  }, []);
  const text = useEditorTextTool({ color, history, nextId, strokeSize });
  const exports = useEditorExport({
    commitText: text.commit,
    crop,
    history,
    item: props.item,
    onSaved: props.onSaved,
  });
  const disabled = exports.busy || props.suspended || !history.entry;
  const pointer = useEditorPointer({
    canvasRef: overlayRef,
    color,
    enabled: !(disabled || dropper),
    history,
    nextId,
    onText: text.begin,
    selectedId,
    setCrop,
    setSelectedId,
    shape,
    strokeSize,
    tool,
  });
  const handleLoadError = reactExports.useCallback(() => {
    logger.error("Failed to decode capture for editing", {
      captureId: props.item.id,
    });
    toast({
      title: t("captures.toast.loadFailed"),
      body: props.item.fileName,
    });
    props.onClose();
  }, [props.item.id, props.item.fileName, props.onClose, t]);
  const canvas = useEditorCanvas({
    crop,
    entry: history.entry,
    hiddenTextId: text.draft?.id ?? null,
    imageDataUrl: props.imageDataUrl,
    initialize: history.initialize,
    onLoadError: handleLoadError,
    overlayRef,
    preview: pointer.preview,
    selectedId: tool === "select" ? selectedId : null,
  });
  const selectColor = reactExports.useCallback((value) => {
    setColor(value);
    setDropper(false);
  }, []);
  const eyedropper = useEditorEyedropper({
    active: dropper && !disabled,
    entry: history.entry,
    onPick: selectColor,
  });
  const cancelCrop = reactExports.useCallback(() => setCrop(null), []);
  const clearTransient = reactExports.useCallback(() => {
    pointer.cancel();
    text.cancel();
    setSelectedId(null);
    setCrop(null);
  }, [pointer.cancel, text.cancel]);
  const undo = reactExports.useCallback(() => {
    if (crop) {
      cancelCrop();
      return;
    }
    clearTransient();
    history.undo();
  }, [cancelCrop, clearTransient, crop, history.undo]);
  const redo = reactExports.useCallback(() => {
    clearTransient();
    history.redo();
  }, [clearTransient, history.redo]);
  const applyCrop = reactExports.useCallback(() => {
    text.commit();
    const entry = history.entryRef.current;
    if (!(entry && crop)) {
      return;
    }
    history.commit(cropEntry({ entry, rect: crop }));
    setCrop(null);
    setSelectedId(null);
  }, [crop, history.commit, history.entryRef, text.commit]);
  const transform = reactExports.useCallback(
    (operation) => {
      text.commit();
      const current = history.entryRef.current;
      if (!current) {
        return;
      }
      const entry = crop ? cropEntry({ entry: current, rect: crop }) : current;
      const { width, height } = entry.base;
      const ctx = entry.base.getContext("2d");
      if (!ctx) {
        return;
      }
      history.commit({
        base: transformCanvas(entry.base, operation),
        annotations: entry.annotations.map((annotation) =>
          transformAnnotation({
            annotation,
            ctx,
            height,
            transform: operation,
            width,
          }),
        ),
      });
      setCrop(null);
      setSelectedId(null);
    },
    [crop, history.commit, history.entryRef, text.commit],
  );
  const selectTool = reactExports.useCallback(
    (next) => {
      text.commit();
      if (crop && next !== "crop") {
        applyCrop();
      }
      setDropper(false);
      setTool(next);
      setSelectedId(null);
    },
    [applyCrop, crop, text.commit],
  );
  const toggleDropper = reactExports.useCallback(() => {
    text.commit();
    setDropper((current) => !current);
  }, [text.commit]);
  const deleteSelected = reactExports.useCallback(() => {
    const entry = history.entryRef.current;
    if (
      !entry ||
      selectedId === null ||
      !entry.annotations.some((item) => item.id === selectedId)
    ) {
      return;
    }
    history.commit({
      ...entry,
      annotations: entry.annotations.filter((item) => item.id !== selectedId),
    });
    setSelectedId(null);
  }, [history.commit, history.entryRef, selectedId]);
  useEditorKeyboard({
    enabled: !(disabled || pointer.dragging),
    onDelete: deleteSelected,
    onRedo: redo,
    onUndo: undo,
  });
  return {
    applyCrop,
    canvas,
    cancelCrop,
    color,
    crop,
    dirty: history.dirty || crop !== null || text.draft !== null,
    disabled,
    dropper,
    exports,
    eyedropper,
    history,
    pointer,
    redo,
    selectColor,
    selectTool,
    setShape,
    setStrokeSize,
    shape,
    strokeSize,
    text,
    toggleDropper,
    tool,
    transform,
    undo,
  };
}
const LOUPE_CLASSES =
  "pointer-events-none absolute z-10 overflow-hidden rounded-full border-2 border-white/90 shadow-[0_6px_20px_rgba(0,0,0,0.5)]";
const LOUPE_CANVAS_CLASSES = "h-full w-full";
const LOUPE_LABEL_CLASSES =
  "absolute inset-x-0 bottom-0 pb-1 text-center font-mono text-white text-xs [text-shadow:0_1px_2px_rgba(0,0,0,0.9)]";
function EditorLoupe({ canvasRef, loupe }) {
  return /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
    className: LOUPE_CLASSES,
    style: {
      height: LOUPE_SIZE,
      left: loupe.left,
      top: loupe.top,
      width: LOUPE_SIZE,
    },
    children: [
      /* @__PURE__ */ jsxRuntimeExports.jsx("canvas", {
        className: LOUPE_CANVAS_CLASSES,
        height: LOUPE_SIZE,
        ref: canvasRef,
        width: LOUPE_SIZE,
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: LOUPE_LABEL_CLASSES,
        children: loupe.color,
      }),
    ],
  });
}
const TEXT_INPUT_CLASSES =
  "absolute rounded-sm border border-white/60 border-dashed bg-transparent font-semibold outline-none";
const ENTER_KEY$1 = "Enter";
const ESCAPE_KEY = "Escape";
function EditorTextInput({ onCancel, onChange, onCommit, style, value }) {
  const { t } = useTranslation();
  const handleChange = reactExports.useCallback(
    (event) => onChange(event.target.value),
    [onChange],
  );
  const handleKeyDown = reactExports.useCallback(
    (event) => {
      if (event.key === ENTER_KEY$1) {
        event.preventDefault();
        event.stopPropagation();
        onCommit();
      } else if (event.key === ESCAPE_KEY) {
        event.preventDefault();
        event.stopPropagation();
        onCancel();
      }
    },
    [onCancel, onCommit],
  );
  const handleFocus = reactExports.useCallback(
    (event) => event.currentTarget.select(),
    [],
  );
  return /* @__PURE__ */ jsxRuntimeExports.jsx("input", {
    "aria-label": t("captures.editor.textInput"),
    autoFocus: true,
    className: TEXT_INPUT_CLASSES,
    onBlur: onCommit,
    onChange: handleChange,
    onFocus: handleFocus,
    onKeyDown: handleKeyDown,
    style,
    type: "text",
    value,
  });
}
const AREA_CLASSES =
  "relative flex min-h-0 flex-1 items-center justify-center overflow-hidden rounded-md bg-space-2";
const CANVAS_WRAP_CLASSES = "relative shrink-0";
const DISPLAY_CANVAS_CLASSES = "absolute inset-0 size-full";
const OVERLAY_CANVAS_CLASSES =
  "absolute inset-0 size-full touch-none outline-none focus-visible:ring-1 focus-visible:ring-sky-blue-a5";
const LOADING_CLASSES =
  "absolute inset-0 grid place-items-center text-space-10 text-sm";
function EditorCanvasArea({ editor }) {
  const { t } = useTranslation();
  const { canvas, eyedropper, pointer, text } = editor;
  const width = editor.history.entry?.base.width ?? 1;
  const scale = canvas.size.width / width;
  const draft = text.draft;
  const draftWidthCh = Math.max(
    TEXT_INPUT_MIN_WIDTH_CH,
    (draft?.value.length ?? 0) + TEXT_INPUT_PADDING_CH,
  );
  const fontSize = Math.max(
    TEXT_INPUT_MIN_FONT_PX,
    scaleStrokeWidth(
      draft?.fontSize ?? editor.strokeSize * TEXT_SIZE_MULTIPLIER,
      width,
    ) * scale,
  );
  const toolCursor =
    editor.tool === "select" ? pointer.cursor : TOOL_CURSORS[editor.tool];
  const cursor = editor.dropper ? HIDDEN_CURSOR : toolCursor;
  return /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
    className: AREA_CLASSES,
    ref: canvas.areaRef,
    children: [
      !editor.history.entry &&
        /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
          className: LOADING_CLASSES,
          role: "status",
          children: t("captures.viewer.loading"),
        }),
      /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
        className: CANVAS_WRAP_CLASSES,
        style: canvas.size,
        children: [
          /* @__PURE__ */ jsxRuntimeExports.jsx("canvas", {
            "aria-hidden": "true",
            className: DISPLAY_CANVAS_CLASSES,
            ref: canvas.displayRef,
            tabIndex: -1,
          }),
          /* @__PURE__ */ jsxRuntimeExports.jsx("canvas", {
            "aria-label": t("captures.editor.canvasLabel"),
            className: OVERLAY_CANVAS_CLASSES,
            onDoubleClick: pointer.onDoubleClick,
            onLostPointerCapture: pointer.cancel,
            onPointerCancel: pointer.cancel,
            onPointerDown: editor.dropper
              ? eyedropper.pick
              : pointer.onPointerDown,
            onPointerLeave: eyedropper.clear,
            onPointerMove: editor.dropper
              ? eyedropper.move
              : pointer.onPointerMove,
            onPointerUp: pointer.onPointerUp,
            ref: canvas.overlayRef,
            role: "img",
            style: { cursor },
            tabIndex: 0,
          }),
          draft &&
            /* @__PURE__ */ jsxRuntimeExports.jsx(EditorTextInput, {
              onCancel: text.cancel,
              onChange: text.change,
              onCommit: text.commit,
              style: {
                width: `${draftWidthCh}ch`,
                color: draft.color,
                fontSize,
                left: draft.position.x * scale,
                top: draft.position.y * scale,
              },
              value: draft.value,
            }),
          eyedropper.loupe &&
            /* @__PURE__ */ jsxRuntimeExports.jsx(EditorLoupe, {
              canvasRef: eyedropper.canvasRef,
              loupe: eyedropper.loupe,
            }),
        ],
      }),
    ],
  });
}
const DEFAULT_HSV = { h: 0, s: 1, v: 1 };
const HUE_GRADIENT =
  "linear-gradient(to right, #f00, #ff0, #0f0, #0ff, #00f, #f0f, #f00)";
const HEX_PATTERN = /^#?([0-9a-f]{3}|[0-9a-f]{6})$/i;
const SHORT_HEX_LENGTH = 3;
const MAX_HUE = 359.9;
const DEGREES_PER_TURN = 360;
const DEGREES_PER_HUE_SECTOR = 60;
const HUE_SECTOR_COUNT = 6;
const RGB_MAX = 255;
const HEX_RADIX = 16;
const HEX_CHANNEL_LENGTH = 2;
const PRIMARY_BUTTONS_MASK = 1;
const PRIMARY_POINTER_BUTTON = 0;
const ENTER_KEY = "Enter";
const PICKER_CLASSES = "flex w-full flex-col gap-2";
const SV_BOX_CLASSES =
  "relative h-[140px] w-full cursor-crosshair touch-none rounded-md";
const SV_THUMB_CLASSES =
  "pointer-events-none absolute size-3 rounded-full border-2 border-white shadow-[0_0_4px_rgba(0,0,0,0.6)]";
const HUE_TRACK_CLASSES =
  "relative h-3 w-full cursor-pointer touch-none rounded-full";
const HUE_THUMB_CLASSES =
  "-top-0.5 pointer-events-none absolute size-4 rounded-full border-2 border-white shadow-[0_0_4px_rgba(0,0,0,0.6)]";
const SWATCH_PREVIEW_CLASSES =
  "size-7 shrink-0 rounded-sm border border-space-6";
const HEX_INPUT_CLASSES =
  "h-7 border-0 bg-space-3 px-2 font-mono text-xs shadow-none";
const DONE_BUTTON_CLASSES =
  "w-full cursor-pointer rounded-sm bg-space-3 py-1.5 font-medium text-space-12 text-xs transition-colors hover:bg-space-4";
const PERCENT = 100;
const SV_THUMB_HALF_PX = 6;
const HUE_THUMB_HALF_PX = 8;
function normalizeHex(raw) {
  const match = HEX_PATTERN.exec(raw.trim());
  const digits = match?.[1]?.toLowerCase();
  if (!digits) {
    return null;
  }
  if (digits.length === SHORT_HEX_LENGTH) {
    const [r, g, b] = digits;
    return `#${r}${r}${g}${g}${b}${b}`;
  }
  return `#${digits}`;
}
function hexToHsv(hex) {
  const normalized = normalizeHex(hex);
  if (normalized === null) {
    return null;
  }
  const channel = (offset) =>
    Number.parseInt(
      normalized.slice(offset, offset + HEX_CHANNEL_LENGTH),
      HEX_RADIX,
    ) / RGB_MAX;
  const r = channel(1);
  const g = channel(1 + HEX_CHANNEL_LENGTH);
  const b = channel(1 + HEX_CHANNEL_LENGTH * 2);
  const max = Math.max(r, g, b);
  const min = Math.min(r, g, b);
  const delta = max - min;
  let h = 0;
  if (delta > 0) {
    if (max === r) {
      h = DEGREES_PER_HUE_SECTOR * (((g - b) / delta) % 6);
    } else if (max === g) {
      h = DEGREES_PER_HUE_SECTOR * ((b - r) / delta + 2);
    } else {
      h = DEGREES_PER_HUE_SECTOR * ((r - g) / delta + 4);
    }
  }
  if (h < 0) {
    h += DEGREES_PER_TURN;
  }
  return { h, s: max === 0 ? 0 : delta / max, v: max };
}
function hsvToHex(hsv) {
  const { h, s, v } = hsv;
  const c = v * s;
  const x = c * (1 - Math.abs(((h / DEGREES_PER_HUE_SECTOR) % 2) - 1));
  const m = v - c;
  const sector = Math.floor(h / DEGREES_PER_HUE_SECTOR) % HUE_SECTOR_COUNT;
  const sectors = [
    [c, x, 0],
    [x, c, 0],
    [0, c, x],
    [0, x, c],
    [x, 0, c],
    [c, 0, x],
  ];
  const rgb = sectors[sector] ?? sectors[0];
  return `#${rgb
    .map((value) =>
      Math.round((value + m) * RGB_MAX)
        .toString(HEX_RADIX)
        .padStart(HEX_CHANNEL_LENGTH, "0"),
    )
    .join("")}`;
}
function clamp01(value) {
  return Math.min(Math.max(value, 0), 1);
}
function EditorColorPicker({ onChange, onClose, value }) {
  const { t } = useTranslation();
  const svBoxRef = reactExports.useRef(null);
  const hueTrackRef = reactExports.useRef(null);
  const [hsv, setHsv] = reactExports.useState(
    () => hexToHsv(value) ?? DEFAULT_HSV,
  );
  const [hexDraft, setHexDraft] = reactExports.useState(() =>
    hsvToHex(hexToHsv(value) ?? DEFAULT_HSV),
  );
  const hex = hsvToHex(hsv);
  const hueColor = hsvToHex({ h: hsv.h, s: 1, v: 1 });
  const apply = reactExports.useCallback(
    (next) => {
      setHsv(next);
      setHexDraft(hsvToHex(next));
      onChange(hsvToHex(next));
    },
    [onChange],
  );
  const pickSaturationValue = reactExports.useCallback(
    (event) => {
      const rect = svBoxRef.current?.getBoundingClientRect();
      if (!rect) {
        return;
      }
      apply({
        h: hsv.h,
        s: clamp01((event.clientX - rect.left) / rect.width),
        v: 1 - clamp01((event.clientY - rect.top) / rect.height),
      });
    },
    [apply, hsv.h],
  );
  const pickHue = reactExports.useCallback(
    (event) => {
      const rect = hueTrackRef.current?.getBoundingClientRect();
      if (!rect) {
        return;
      }
      apply({
        ...hsv,
        h: clamp01((event.clientX - rect.left) / rect.width) * MAX_HUE,
      });
    },
    [apply, hsv],
  );
  const handleSvPointerDown = reactExports.useCallback(
    (event) => {
      if (event.button !== PRIMARY_POINTER_BUTTON) {
        return;
      }
      event.currentTarget.setPointerCapture(event.pointerId);
      pickSaturationValue(event);
    },
    [pickSaturationValue],
  );
  const handleSvPointerMove = reactExports.useCallback(
    (event) => {
      if (event.buttons === PRIMARY_BUTTONS_MASK) {
        pickSaturationValue(event);
      }
    },
    [pickSaturationValue],
  );
  const handleHuePointerDown = reactExports.useCallback(
    (event) => {
      if (event.button !== PRIMARY_POINTER_BUTTON) {
        return;
      }
      event.currentTarget.setPointerCapture(event.pointerId);
      pickHue(event);
    },
    [pickHue],
  );
  const handleHuePointerMove = reactExports.useCallback(
    (event) => {
      if (event.buttons === PRIMARY_BUTTONS_MASK) {
        pickHue(event);
      }
    },
    [pickHue],
  );
  const commitHexDraft = reactExports.useCallback(() => {
    const normalized = normalizeHex(hexDraft);
    const parsed = normalized === null ? null : hexToHsv(normalized);
    if (parsed === null) {
      setHexDraft(hex);
      return;
    }
    apply(parsed);
  }, [apply, hex, hexDraft]);
  const handleHexChange = reactExports.useCallback(
    (event) => setHexDraft(event.target.value),
    [],
  );
  const handleHexKeyDown = reactExports.useCallback(
    (event) => {
      if (event.key === ENTER_KEY) {
        event.preventDefault();
        commitHexDraft();
      }
    },
    [commitHexDraft],
  );
  return /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
    className: PICKER_CLASSES,
    children: [
      /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: SV_BOX_CLASSES,
        onPointerDown: handleSvPointerDown,
        onPointerMove: handleSvPointerMove,
        ref: svBoxRef,
        style: {
          background: `linear-gradient(to top, #000, transparent), linear-gradient(to right, #fff, ${hueColor})`,
        },
        children: /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
          className: SV_THUMB_CLASSES,
          style: {
            backgroundColor: hex,
            left: `calc(${hsv.s * PERCENT}% - ${SV_THUMB_HALF_PX}px)`,
            top: `calc(${(1 - hsv.v) * PERCENT}% - ${SV_THUMB_HALF_PX}px)`,
          },
        }),
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: HUE_TRACK_CLASSES,
        onPointerDown: handleHuePointerDown,
        onPointerMove: handleHuePointerMove,
        ref: hueTrackRef,
        style: { background: HUE_GRADIENT },
        children: /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
          className: HUE_THUMB_CLASSES,
          style: {
            backgroundColor: hueColor,
            left: `calc(${(hsv.h / DEGREES_PER_TURN) * PERCENT}% - ${HUE_THUMB_HALF_PX}px)`,
          },
        }),
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
        className: "flex items-center gap-2",
        children: [
          /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
            className: SWATCH_PREVIEW_CLASSES,
            style: { backgroundColor: hex },
          }),
          /* @__PURE__ */ jsxRuntimeExports.jsx(Input, {
            "aria-label": t("captures.editor.colors.custom"),
            autoComplete: "off",
            className: HEX_INPUT_CLASSES,
            onBlur: commitHexDraft,
            onChange: handleHexChange,
            onKeyDown: handleHexKeyDown,
            spellCheck: false,
            value: hexDraft,
          }),
        ],
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
        className: DONE_BUTTON_CLASSES,
        onClick: onClose,
        type: "button",
        children: t("captures.editor.colorPicker.done"),
      }),
    ],
  });
}
const ICON_BUTTON_CLASSES =
  "flex size-8 shrink-0 items-center justify-center rounded-md bg-space-3 text-space-11 outline-none transition-colors hover:bg-space-4 focus-visible:ring-2 focus-visible:ring-sky-blue-a5 disabled:pointer-events-none disabled:opacity-40 [&_svg]:size-[18px]";
const ICON_BUTTON_ACTIVE_CLASSES =
  "bg-sky-blue-a3 text-sky-blue-11 hover:bg-sky-blue-a4";
function EditorIconButton({ active, children, disabled, label, onClick }) {
  return /* @__PURE__ */ jsxRuntimeExports.jsxs(Tooltip, {
    children: [
      /* @__PURE__ */ jsxRuntimeExports.jsx(TooltipTrigger, {
        asChild: true,
        children: /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
          "aria-label": label,
          "aria-pressed": active,
          className: cn(
            ICON_BUTTON_CLASSES,
            active && ICON_BUTTON_ACTIVE_CLASSES,
          ),
          disabled,
          onClick,
          type: "button",
          children,
        }),
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx(TooltipContent, {
        children: label,
      }),
    ],
  });
}
const COLORS_CLASSES = "flex items-center gap-1 border-space-a4 border-r pr-2";
const PICKER_CONTENT_CLASSES =
  "w-60 rounded-md border border-space-a4 bg-space-2 p-3 shadow-xl";
const SWATCH_CLASSES = "size-5 rounded-full border border-space-a4";
const PICKER_BUTTON_CLASSES =
  "size-8 rounded-md border-2 border-space-a4 outline-none focus-visible:ring-2 focus-visible:ring-sky-blue-a5";
const PICKER_CONTENT_SIDE_OFFSET = 8;
function EditorColorSwatches({ color, dropper, onColor, onDropper }) {
  const { t } = useTranslation();
  const [open, setOpen] = reactExports.useState(false);
  return /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
    className: COLORS_CLASSES,
    children: [
      EDITOR_COLORS.map(({ labelKey, value }) =>
        /* @__PURE__ */ jsxRuntimeExports.jsx(
          EditorIconButton,
          {
            active: color === value,
            label: t(labelKey),
            onClick: () => onColor(value),
            children: /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
              className: SWATCH_CLASSES,
              style: { backgroundColor: value },
            }),
          },
          value,
        ),
      ),
      /* @__PURE__ */ jsxRuntimeExports.jsxs(Popover, {
        onOpenChange: setOpen,
        open,
        children: [
          /* @__PURE__ */ jsxRuntimeExports.jsx(PopoverTrigger, {
            asChild: true,
            children: /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
              "aria-label": t("captures.editor.colors.custom"),
              className: PICKER_BUTTON_CLASSES,
              style: { backgroundColor: color },
              type: "button",
            }),
          }),
          /* @__PURE__ */ jsxRuntimeExports.jsx(PopoverContent, {
            align: "start",
            className: PICKER_CONTENT_CLASSES,
            sideOffset: PICKER_CONTENT_SIDE_OFFSET,
            children: /* @__PURE__ */ jsxRuntimeExports.jsx(EditorColorPicker, {
              onChange: onColor,
              onClose: () => setOpen(false),
              value: color,
            }),
          }),
        ],
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx(EditorIconButton, {
        active: dropper,
        label: t("captures.editor.eyedropper"),
        onClick: onDropper,
        children: /* @__PURE__ */ jsxRuntimeExports.jsx(
          PiEyedropperDefaultStroke,
          {},
        ),
      }),
    ],
  });
}
const TOOLBAR_CLASSES =
  "flex shrink-0 flex-wrap items-center gap-2 rounded-md bg-space-2 p-2 disabled:opacity-50";
const TOOL_GROUP_CLASSES =
  "flex items-center gap-1 border-space-a4 border-r pr-2 last:border-0";
const STROKE_DOT_VIEW_BOX = "0 0 24 24";
const STROKE_DOT_CENTER = 12;
function EditorToolbar(props) {
  const { t } = useTranslation();
  return /* @__PURE__ */ jsxRuntimeExports.jsxs("fieldset", {
    className: TOOLBAR_CLASSES,
    disabled: props.disabled,
    children: [
      /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: TOOL_GROUP_CLASSES,
        children: EDITOR_TOOLS.map(({ icon: Icon, id, labelKey }) =>
          /* @__PURE__ */ jsxRuntimeExports.jsx(
            EditorIconButton,
            {
              active: props.tool === id && !props.dropper,
              label: t(labelKey),
              onClick: () => props.onTool(id),
              children: /* @__PURE__ */ jsxRuntimeExports.jsx(Icon, {}),
            },
            id,
          ),
        ),
      }),
      props.tool === "shape" &&
        /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
          className: TOOL_GROUP_CLASSES,
          children: SHAPE_KINDS.map(({ icon: Icon, id, labelKey }) =>
            /* @__PURE__ */ jsxRuntimeExports.jsx(
              EditorIconButton,
              {
                active: props.shape === id,
                label: t(labelKey),
                onClick: () => props.onShape(id),
                children: /* @__PURE__ */ jsxRuntimeExports.jsx(Icon, {}),
              },
              id,
            ),
          ),
        }),
      /* @__PURE__ */ jsxRuntimeExports.jsx(EditorColorSwatches, {
        color: props.color,
        dropper: props.dropper,
        onColor: props.onColor,
        onDropper: props.onDropper,
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: TOOL_GROUP_CLASSES,
        children: STROKE_SIZES.map((size) =>
          /* @__PURE__ */ jsxRuntimeExports.jsx(
            EditorIconButton,
            {
              active: props.strokeSize === size,
              label: t("captures.editor.strokeSize", { size }),
              onClick: () => props.onStrokeSize(size),
              children: /* @__PURE__ */ jsxRuntimeExports.jsx("svg", {
                "aria-hidden": "true",
                viewBox: STROKE_DOT_VIEW_BOX,
                children: /* @__PURE__ */ jsxRuntimeExports.jsx("circle", {
                  cx: STROKE_DOT_CENTER,
                  cy: STROKE_DOT_CENTER,
                  fill: "currentColor",
                  r: size / 2,
                }),
              }),
            },
            size,
          ),
        ),
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: TOOL_GROUP_CLASSES,
        children: CANVAS_TRANSFORMS.map(({ icon: Icon, id, labelKey }) =>
          /* @__PURE__ */ jsxRuntimeExports.jsx(
            EditorIconButton,
            {
              label: t(labelKey),
              onClick: () => props.onTransform(id),
              children: /* @__PURE__ */ jsxRuntimeExports.jsx(Icon, {}),
            },
            id,
          ),
        ),
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
        className: TOOL_GROUP_CLASSES,
        children: [
          /* @__PURE__ */ jsxRuntimeExports.jsx(EditorIconButton, {
            disabled: !(props.canUndo || props.hasCrop),
            label: t("captures.editor.undo"),
            onClick: props.onUndo,
            children: /* @__PURE__ */ jsxRuntimeExports.jsx(
              PiRotateLeftStroke,
              {},
            ),
          }),
          /* @__PURE__ */ jsxRuntimeExports.jsx(EditorIconButton, {
            disabled: !props.canRedo,
            label: t("captures.editor.redo"),
            onClick: props.onRedo,
            children: /* @__PURE__ */ jsxRuntimeExports.jsx(
              PiRotateRightStroke,
              {},
            ),
          }),
        ],
      }),
      props.hasCrop &&
        /* @__PURE__ */ jsxRuntimeExports.jsxs(jsxRuntimeExports.Fragment, {
          children: [
            /* @__PURE__ */ jsxRuntimeExports.jsx(Button, {
              onClick: props.onApplyCrop,
              size: "sm",
              variant: "neutral",
              children: t("captures.editor.applyCrop"),
            }),
            /* @__PURE__ */ jsxRuntimeExports.jsx(Button, {
              onClick: props.onCancelCrop,
              size: "sm",
              variant: "neutral",
              children: t("captures.editor.cancelCrop"),
            }),
          ],
        }),
    ],
  });
}
function CaptureEditor(props) {
  const { t } = useTranslation();
  const [discardOpen, setDiscardOpen] = reactExports.useState(false);
  const [overwriteOpen, setOverwriteOpen] = reactExports.useState(false);
  const suspended = discardOpen || overwriteOpen;
  const editor = useEditorSession({ ...props, suspended });
  const blocked = editor.disabled || editor.pointer.dragging;
  const canSave = !blocked && editor.dirty;
  const requestClose = reactExports.useCallback(() => {
    if (editor.exports.busy || editor.pointer.dragging) {
      return;
    }
    if (editor.dirty) {
      setDiscardOpen(true);
    } else {
      props.onClose();
    }
  }, [
    editor.dirty,
    editor.exports.busy,
    editor.pointer.dragging,
    props.onClose,
  ]);
  const overwrite = reactExports.useCallback(async () => {
    await editor.exports.save("overwrite");
    setOverwriteOpen(false);
  }, [editor.exports.save]);
  return /* @__PURE__ */ jsxRuntimeExports.jsxs(jsxRuntimeExports.Fragment, {
    children: [
      /* @__PURE__ */ jsxRuntimeExports.jsx(Dialog, {
        onOpenChange: (open) => {
          if (!open) {
            requestClose();
          }
        },
        open: true,
        children: /* @__PURE__ */ jsxRuntimeExports.jsxs(DialogContent, {
          "aria-describedby": void 0,
          className: EDITOR_CONTENT_CLASSES,
          onEscapeKeyDown: (event) => {
            event.preventDefault();
            if (editor.text.draft) {
              editor.text.cancel();
              return;
            }
            if (!suspended) {
              requestClose();
            }
          },
          onInteractOutside: (event) => event.preventDefault(),
          showCloseButton: false,
          children: [
            /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
              className: EDITOR_HEADER_CLASSES,
              children: [
                /* @__PURE__ */ jsxRuntimeExports.jsx(DialogTitle, {
                  className: EDITOR_TITLE_CLASSES,
                  children: t("captures.editor.title", {
                    name: props.item.fileName,
                  }),
                }),
                /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                  "aria-label": t("uiCommon.close"),
                  className: EDITOR_CLOSE_CLASSES,
                  disabled: editor.exports.busy,
                  onClick: requestClose,
                  type: "button",
                  children: /* @__PURE__ */ jsxRuntimeExports.jsx(
                    PiMultipleCrossCancelDefaultStroke,
                    {},
                  ),
                }),
              ],
            }),
            /* @__PURE__ */ jsxRuntimeExports.jsx(EditorToolbar, {
              canRedo: editor.history.canRedo,
              canUndo: editor.history.canUndo,
              color: editor.color,
              disabled: blocked,
              dropper: editor.dropper,
              hasCrop: editor.crop !== null,
              onApplyCrop: editor.applyCrop,
              onCancelCrop: editor.cancelCrop,
              onColor: editor.selectColor,
              onDropper: editor.toggleDropper,
              onRedo: editor.redo,
              onShape: editor.setShape,
              onStrokeSize: editor.setStrokeSize,
              onTool: editor.selectTool,
              onTransform: editor.transform,
              onUndo: editor.undo,
              shape: editor.shape,
              strokeSize: editor.strokeSize,
              tool: editor.tool,
            }),
            /* @__PURE__ */ jsxRuntimeExports.jsx(EditorCanvasArea, { editor }),
            /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
              className: EDITOR_FOOTER_CLASSES,
              children: [
                /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                  className: EDITOR_FOOTER_HINT_CLASSES,
                  children: t(
                    editor.dirty
                      ? "captures.editor.unsavedChanges"
                      : "captures.editor.selectionHint",
                  ),
                }),
                /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                  className: EDITOR_FOOTER_ACTIONS_CLASSES,
                  children: [
                    /* @__PURE__ */ jsxRuntimeExports.jsx(Button, {
                      disabled: blocked,
                      onClick: editor.exports.copy,
                      size: "sm",
                      variant: "neutral",
                      children: t("captures.actions.copyImage"),
                    }),
                    /* @__PURE__ */ jsxRuntimeExports.jsx(Button, {
                      disabled: !canSave,
                      onClick: () => setOverwriteOpen(true),
                      size: "sm",
                      variant: "neutral",
                      children: t("captures.editor.overwrite"),
                    }),
                    /* @__PURE__ */ jsxRuntimeExports.jsx(Button, {
                      disabled: !canSave,
                      onClick: () => editor.exports.save("copy"),
                      size: "sm",
                      variant: "primary",
                      children: t("captures.editor.saveCopy"),
                    }),
                  ],
                }),
              ],
            }),
          ],
        }),
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx(ConfirmationDialog, {
        confirmLabel: t("captures.editor.discardChanges.confirm"),
        description: t("captures.editor.discardChanges.description"),
        onConfirm: props.onClose,
        onOpenChange: setDiscardOpen,
        open: discardOpen,
        title: t("captures.editor.discardChanges.title"),
        variant: "destructive",
      }),
      /* @__PURE__ */ jsxRuntimeExports.jsx(ConfirmationDialog, {
        confirmLabel: t("captures.editor.overwrite"),
        description: t("captures.editor.overwriteConfirm.description"),
        onConfirm: overwrite,
        onOpenChange: setOverwriteOpen,
        open: overwriteOpen,
        title: t("captures.editor.overwriteConfirm.title"),
      }),
    ],
  });
}
export { CaptureEditor };
