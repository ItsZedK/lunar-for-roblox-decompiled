#!/usr/bin/env python3
"""Extract the data blocks out of an NSIS installer (non-solid zlib builds).

Usage: python extract_nsis.py <setup.exe> <outdir>

Block 0 is the NSIS header, the rest are whatever the script extracts
(usually plug-in DLLs and the uninstaller stub).
"""
import struct
import sys
import zlib
from pathlib import Path


def main() -> None:
    src = Path(sys.argv[1])
    outdir = Path(sys.argv[2])
    outdir.mkdir(parents=True, exist_ok=True)

    data = src.read_bytes()
    start = data.find(b"\xef\xbe\xad\xdeNullsoftInst") - 4
    if start < 0:
        sys.exit("no NSIS signature found")
    off = start + 28  # skip firstheader

    idx = 0
    while True:
        raw = struct.unpack_from("<I", data, off)[0]
        csize = raw & 0x7FFFFFFF
        if csize == 0:
            break
        blob = zlib.decompress(data[off + 4 : off + 4 + csize], -15)
        name = f"{idx:02d}-header.bin" if idx == 0 else f"{idx:02d}-block-{len(blob)}.bin"
        (outdir / name).write_bytes(blob)
        print(name, len(blob))
        off += 4 + csize
        idx += 1


if __name__ == "__main__":
    main()
