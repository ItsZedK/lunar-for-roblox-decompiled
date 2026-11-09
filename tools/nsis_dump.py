import struct, zlib, pathlib, re

OPS = """INVALID_OPCODE RET NOP ABORT QUIT CALL UPDATETEXT SLEEP BRINGTOFRONT CHDETAILSVIEW SETFILEATTRIBUTES CREATEDIR IFFILEEXISTS SETFLAG IFFLAG GETFLAG RENAME GETFULLPATHNAME SEARCHPATH GETTEMPFILENAME EXTRACTFILE DELETEFILE MESSAGEBOX RMDIR STRLEN ASSIGNVAR STRCMP READENVSTR INTCMP INTOP INTFMT PUSHPOP FINDWINDOW SENDMESSAGE ISWINDOW GETDLGITEM SETCTLCOLORS LOADANDSETIMAGE CREATEFONT SHOWWINDOW SHELLEXEC EXECUTE GETFILETIME GETDLLVERSION REGISTERDLL CREATESHORTCUT COPYFILES REBOOT WRITEINI READINISTR DELREG WRITEREG READREGSTR REGENUM FCLOSE FOPEN FPUTS FGETS FSEEK FINDCLOSE FINDNEXT FINDFIRST WRITEUNINSTALLER SECTIONSET INSTTYPESET GETOSINFO RESERVEDOPCODE LOCKWINDOW FPUTWS FGETWS GETLABELADDR GETFUNCTIONADDR""".split()

# NSIS user variable indices (exehead var index order, NSIS 3)
VARS = ["$0","$1","$2","$3","$4","$5","$6","$7","$8","$9","$R0","$R1","$R2","$R3","$R4","$R5","$R6","$R7","$R8","$R9",
        "$CMDLINE","$INSTDIR","$OUTDIR","$EXEDIR","$LANGUAGE","$ERRORLEVEL","$PLUGINSDIR","$EXEPATH","$EXEFILE","$_CLICK","$_OUTDIR"]
SHELLS = {0:"DESKTOP",1:"WINDIR",2:"SYSDIR",3:"TEMP",4:"STARTMENU",5:"SMPROGRAMS",6:"SMSTARTUP",7:"QUICKLAUNCH",8:"DOCUMENTS",
          9:"SENDTO",10:"RECENT",11:"FAVORITES",12:"MUSIC",13:"PICTURES",14:"VIDEOS",15:"NETHOOD",16:"FONTS",17:"TEMPLATES",
          18:"APPDATA",19:"PRINTHOOD",20:"LOCALAPPDATA",21:"ALTSTARTUP",22:"EXEDIR",23:"ADMINTOOLS",24:"COMMONFILES"}

def load_header(path):
    data = open(path, 'rb').read()
    # find NSIS firstheader
    idx = data.find(b'\xef\xbe\xad\xdeNullsoftInst')
    assert idx >= 4, "NSIS signature not found"
    start = idx - 4
    loh, load = struct.unpack_from('<II', data, start + 20)
    off = start + 28
    csize = struct.unpack_from('<I', data, off)[0] & 0x7fffffff
    hdr = zlib.decompress(data[off+4:off+4+csize], -15)
    assert len(hdr) == loh, (len(hdr), loh)
    return hdr

def parse(hdr):
    d = lambda idx: struct.unpack_from('<i', hdr, idx*4)[0]
    flags = d(0)
    blocks = []
    names = ["PAGES","SECTIONS","ENTRIES","STRINGS","LANGTABLES","CTLCOLORS","DATA"]
    for i in range(7):
        blocks.append((names[i], d(1 + i*2), d(2 + i*2)))
    return flags, blocks

def get_strings(hdr, blocks):
    bd = dict((n, (o, num)) for n, o, num in blocks)
    soff = bd["STRINGS"][0]
    # strings end at langtables offset (or next block)
    ends = [o for n, o, num in blocks if o > soff]
    send = min(ends) if ends else len(hdr)
    blob = hdr[soff:send]
    # decode by char offset: entries reference strings by TCHAR offset into this blob
    def resolve(char_off):
        if char_off < 0 or char_off*2 >= len(blob):
            return None
        # only annotate offsets that start on a string boundary (preceded by NUL)
        if char_off > 0 and blob[char_off*2-2:char_off*2] != b'\x00\x00':
            return None
        raw = blob[char_off*2:]
        end = raw.find(b'\x00\x00')
        # align to even boundary search
        i = 0
        while True:
            j = raw.find(b'\x00\x00', i)
            if j < 0: return ""
            if j % 2 == 0:
                end = j; break
            i = j + 1
        s = raw[:end].decode('utf-16le', errors='replace')
        return decode_special(s)
    return resolve

def decode_special(s):
    out = []
    i = 0
    while i < len(s):
        c = ord(s[i])
        if c in (1, 2, 3) and i + 1 < len(s):
            # CODE_SHORT: one following TCHAR, val = ((hi&0x7f)<<7)|(lo&0x7f) of its bytes
            coded = ord(s[i+1])
            val = (((coded >> 8) & 0x7f) << 7) | (coded & 0x7f)
            if c == 3: out.append(VARS[val] if val < len(VARS) else f"$VAR{val}")
            elif c == 2: out.append("$" + SHELLS.get(val, f"SHELL{val}"))
            elif c == 1: out.append(f"$LANG{val}")
            i += 2
        elif c == 4 and i + 1 < len(s):
            out.append(s[i+1]); i += 2
        else:
            out.append(s[i]); i += 1
    return ''.join(out)

def main(src, outpath):
    hdr = load_header(src)
    flags, blocks = parse(hdr)
    resolve = get_strings(hdr, blocks)
    bd = dict((n, (o, num)) for n, o, num in blocks)
    lines = []
    lines.append(f"; NSIS script dump of {pathlib.Path(src).name}")
    lines.append(f"; header flags={flags:#x} blocks=" + ", ".join(f"{n}@{o}#{num}" for n, o, num in blocks))
    # sections
    soff, snum = bd["SECTIONS"]
    # section size = (entries_off - sections_off)/num if num else 0
    eoff, enum_ = bd["ENTRIES"]
    secsize = (eoff - soff)//snum if snum else 0
    lines.append(f"; section struct size={secsize}")
    sections = []
    for i in range(snum):
        base = soff + i*secsize
        name_ptr, itypes, sflags, code, code_size, size_kb = struct.unpack_from('<6i', hdr, base)
        name_raw = hdr[base+24:base+secsize]
        nul = name_raw.find(b'\x00\x00')
        name = name_raw[:nul if nul >= 0 else len(name_raw)].decode('utf-16le', errors='replace')
        sections.append((name, code, code_size))
        lines.append(f"; Section[{i}] name={name!r} (str@{name_ptr}={resolve(name_ptr)!r}) install_types={itypes:#x} flags={sflags:#x} code={code} code_size={code_size} size_kb={size_kb}")
    # pages
    poff, pnum = bd["PAGES"]
    for i in range(pnum):
        vals = struct.unpack_from('<16i', hdr, poff + i*64)
        lines.append(f"; Page[{i}] dlg_id={vals[0]} wndproc={vals[1]} pre={vals[2]} show={vals[3]} leave={vals[4]} flags={vals[5]:#x} caption={resolve(vals[6])!r}")
    lines.append("")
    # entries
    for idx in range(enum_):
        which, *offs = struct.unpack_from('<7i', hdr, eoff + idx*28)
        op = OPS[which] if 0 <= which < len(OPS) else f"OP{which}"
        parts = []
        for o in offs:
            s = resolve(o)
            if s is not None and s != "" and -100000 < o:
                parts.append(f"{o}={s!r}")
            else:
                parts.append(str(o))
        secmark = ""
        for si, (nm, code, cs) in enumerate(sections):
            if code == idx: secmark = f"  ; <-- Section[{si}] {nm!r} starts"
        lines.append(f"{idx:5d}: {op:18s} " + " ".join(parts) + secmark)
    pathlib.Path(outpath).write_text("\n".join(lines) + "\n", encoding='utf-8')
    print(f"{src}: {enum_} entries, {snum} sections, {pnum} pages -> {outpath} ({len(lines)} lines)")

if __name__ == "__main__":
    import sys
    main(sys.argv[1], sys.argv[2])
