int __fastcall sub_1EB540(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // r6
  unsigned __int64 v9; // r4
  int v11; // r0
  int v12; // r10
  _BOOL4 v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r5
  int result; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r7
  int v21; // r0
  char *v22; // r0
  int v23; // r2
  _DWORD *v24; // r9
  _BYTE *v25; // r6
  int v26; // r0
  int v27; // r9
  int v28; // r0
  int v29; // r0
  _DWORD *v30; // r0
  int v31; // r0
  __int64 v32; // r0
  const char *v33; // r3
  char *v34; // r8
  _BYTE *v35; // r8
  bool v36; // cc
  size_t v38; // r0
  int v39; // r0
  _DWORD *v40; // r0
  int v41; // r0
  _DWORD *v42; // r3
  unsigned int v43; // r2
  __int64 v44; // r0
  int v45; // r0
  int v46; // r0
  void *ptr; // [sp+2Ch] [bp-10h] BYREF
  void *v48; // [sp+30h] [bp-Ch]
  int v49; // [sp+34h] [bp-8h]

  v8 = __PAIR64__(a3, a2);
  v9 = __PAIR64__(a6, a4);
  v11 = sub_16F654(a1);
  v12 = ((int (__fastcall *)(int))loc_16EA14)(v11);
  sub_1E2A9C(v12);
  v13 = sub_1E8188(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0), 1);
  v14 = sub_16F654(v13);
  v15 = ((int (__fastcall *)(int))loc_1E2770)(v14);
  switch ( (_DWORD)v8 )
  {
    case 2:
      v18 = sub_22EBBC(v15);
      if ( !v18 )
      {
LABEL_19:
        LODWORD(v9) = v18;
        return v9;
      }
      if ( a5 )
      {
        v19 = sub_16F654(v18);
        ((void (__fastcall *)(int))loc_1E2770)(v19);
        v20 = dword_488C94;
        if ( !((int (__fastcall *)(int))loc_1E2198)(1) )
        {
          v25 = *(_BYTE **)v20;
          *v25++ = 88;
          v26 = sub_1E0F74((int)v25, (unsigned int)a6);
          v27 = (int)&v25[v26 + 1];
          v25[v26] = 44;
          v28 = sub_1E0F74(v27, 0);
          *(_BYTE *)(v27 + v28) = 58;
          *(_BYTE *)(v27 + v28 + 1) = 0;
          sub_1E51C4(*(_DWORD *)v20, v27 + v28 + 1 - *(_DWORD *)v20);
          v29 = sub_1E4EB8((char **)v20, (size_t *)(v20 + 4), 0, 0, 0);
          if ( **(_BYTE **)v20 )
          {
            if ( dword_48A590 )
            {
              v40 = (_DWORD *)sub_242FC8(v29);
              sub_2594B0(*v40, "binary downloading supported by target\n");
            }
            dword_488708 = 1;
          }
          else
          {
            if ( dword_48A590 )
            {
              v30 = (_DWORD *)sub_242FC8(v29);
              sub_2594B0(*v30, "binary downloading NOT supported by target\n");
            }
            dword_488708 = 2;
          }
        }
        v21 = ((int (__fastcall *)(int))loc_1E2198)(1);
        switch ( v21 )
        {
          case 1:
            v22 = "X";
            v23 = 88;
            break;
          case 0:
            goto LABEL_106;
          case 2:
            v22 = "M";
            v23 = 77;
            break;
          default:
LABEL_105:
            sub_94700((int)"remote.c", 8247, "bad switch");
LABEL_106:
            sub_94700((int)"remote.c", 8244, "remote_write_bytes: bad internal state");
LABEL_107:
            sub_94700(
              (int)"remote.c",
              10558,
              "%s: Assertion `%s' failed.",
              "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byte*"
              ", ULONGEST, ULONGEST, ULONGEST*)",
              "annex == NULL");
LABEL_108:
            sub_94700(
              (int)"remote.c",
              10609,
              "%s: Assertion `%s' failed.",
              "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byte*"
              ", ULONGEST, ULONGEST, ULONGEST*)",
              "readbuf != NULL");
LABEL_109:
            v32 = sub_94700(
                    (int)"remote.c",
                    10608,
                    "%s: Assertion `%s' failed.",
                    "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb"
                    "_byte*, ULONGEST, ULONGEST, ULONGEST*)",
                    "annex != NULL");
LABEL_110:
            sub_946E0("remote query is only available after target open", HIDWORD(v32));
        }
        LODWORD(v9) = ((int (__fastcall *)(char *, _DWORD, int, int, _DWORD, _DWORD, int, unsigned __int64 *, int, int))loc_1E69BC)(
                        v22,
                        a6,
                        a5,
                        1,
                        a7,
                        HIDWORD(a7),
                        v12,
                        a8,
                        v23,
                        1);
        return v9;
      }
      if ( !a7 )
      {
        LODWORD(v9) = 0;
        return v9;
      }
      if ( sub_24B59C(v18) != -1 )
      {
        ptr = 0;
        v48 = 0;
        v49 = 0;
        if ( sub_24D6D8(&ptr, a6, a7, HIDWORD(a7)) )
        {
          if ( ptr == v48 )
          {
            v8 = a7;
            goto LABEL_73;
          }
          if ( (_DWORD)a6 != *(_DWORD *)ptr )
          {
            v8 = (unsigned int)(*(_DWORD *)ptr - a6);
            if ( a7 < (unsigned int)v8 )
            {
LABEL_99:
              sub_94700(
                (int)"remote.c",
                8397,
                "%s: Assertion `%s' failed.",
                "target_xfer_status remote_read_bytes(target_ops*, CORE_ADDR, gdb_byte*, ULONGEST, int, ULONGEST*)",
                "len <= oldlen");
              goto LABEL_100;
            }
LABEL_73:
            v39 = sub_22F488(a1, a6);
            if ( !v39 )
              goto LABEL_75;
            if ( (*(_DWORD *)(*(_DWORD *)(v39 + 8) + 20) & 8) == 0 )
              goto LABEL_75;
            v41 = sub_22F480(a1);
            v42 = *(_DWORD **)v41;
            v43 = *(_DWORD *)(v41 + 4);
            if ( *(_DWORD *)v41 >= v43 )
              goto LABEL_75;
            while ( 1 )
            {
              if ( (unsigned int)a6 >= *v42 )
              {
                v44 = (unsigned int)v42[1];
                if ( v8 + (unsigned int)a6 <= (unsigned int)v44 )
                {
                  v45 = sub_1EB3C0(a6, (_BYTE *)v9, v8, v12, a8);
                  goto LABEL_94;
                }
                if ( (unsigned int)a6 < (unsigned int)v44 )
                  break;
              }
              v42 += 4;
              if ( (unsigned int)v42 >= v43 )
                goto LABEL_75;
            }
            v45 = sub_1EB3C0(a6, (_BYTE *)v9, (unsigned int)v44 - (unsigned __int64)(unsigned int)a6, v12, a8);
LABEL_94:
            if ( v45 == 1 )
            {
              LODWORD(v9) = 1;
            }
            else
            {
LABEL_75:
              LODWORD(v9) = 2;
              *a8 = v8;
            }
            if ( ptr )
              sub_339E64(ptr);
            return v9;
          }
          a7 = *((int *)ptr + 1);
        }
        if ( ptr )
          sub_339E64(ptr);
      }
      LODWORD(v9) = sub_1EB3C0(a6, (_BYTE *)v9, a7, v12, a8);
      return v9;
    case 1:
      if ( (_DWORD)v9 )
        return sub_1E5D84("spu", (const char *)HIDWORD(v8), v9, (int)dword_48886C, a6, a7, a8, dword_48886C);
      v18 = ((int (__fastcall *)(const char *, _DWORD, int, void *, _DWORD, _DWORD, _DWORD, _DWORD, unsigned __int64 *, void *))loc_1E6E14)(
              "spu",
              HIDWORD(v8),
              a5,
              &unk_48887C,
              a6,
              HIDWORD(a6),
              a7,
              HIDWORD(a7),
              a8,
              &unk_48887C);
      goto LABEL_19;
    case 0x10:
      if ( (_DWORD)v9 )
        return sub_1E5D84("siginfo", (const char *)HIDWORD(v8), v9, (int)dword_4889FC, a6, a7, a8, dword_4889FC);
      v18 = ((int (__fastcall *)(char *, _DWORD, int, void *, _DWORD, _DWORD, _DWORD, _DWORD, unsigned __int64 *, void *))loc_1E6E14)(
              "siginfo",
              HIDWORD(v8),
              a5,
              &unk_488A0C,
              a6,
              HIDWORD(a6),
              a7,
              HIDWORD(a7),
              a8,
              &unk_488A0C);
      goto LABEL_19;
  }
  if ( (_DWORD)v8 != 18 )
  {
    if ( a5 )
    {
      if ( (_DWORD)v8 == 10 )
      {
        v16 = dword_46DCE8;
        dword_46DCE8 = 1000;
        result = ((int (__fastcall *)(const char *, _DWORD, int, int, _DWORD, _DWORD, int, unsigned __int64 *, int, _DWORD))loc_1E69BC)(
                   "vFlashWrite:",
                   a6,
                   a5,
                   1000,
                   a7,
                   HIDWORD(a7),
                   1,
                   a8,
                   88,
                   0);
        dword_46DCE8 = v16;
        return result;
      }
      goto LABEL_65;
    }
    v24 = (_DWORD *)dword_488C94;
    switch ( (int)v8 )
    {
      case 0:
        v31 = sub_1E2890(v15);
        if ( v31 > a7 )
          goto LABEL_65;
        LODWORD(v32) = sub_1E2890(v31);
        if ( !v24[14] )
          goto LABEL_110;
        if ( !HIDWORD(v8) )
          goto LABEL_109;
        if ( !(_DWORD)v9 )
          goto LABEL_108;
        v33 = (const char *)*v24;
        HIDWORD(v9) = HIDWORD(v8);
        v34 = (char *)*v24;
        *v34 = 113;
        v35 = v34 + 2;
        *((_BYTE *)v33 + 1) = 82;
        if ( !*(_BYTE *)HIDWORD(v8) )
          goto LABEL_52;
        while ( 2 )
        {
          if ( HIDWORD(v9) - HIDWORD(v8) >= sub_1E2890(v32) - 8 )
          {
LABEL_52:
            *v35 = 0;
            HIDWORD(v9) = (unsigned __int8)*(_BYTE *)HIDWORD(v9);
            if ( !HIDWORD(v9) )
            {
              v38 = strlen((const char *)*v24);
              if ( sub_1E51C4(*v24, v38) >= 0 )
              {
                sub_1E4EB8((char **)v24, v24 + 1, 0, 0, 0);
                LODWORD(v9) = stpcpy(v9, *v24) - v9;
                *a8 = v9;
                LODWORD(v9) = v9 != 0;
                return v9;
              }
LABEL_65:
              LODWORD(v9) = -1;
              return v9;
            }
LABEL_100:
            v46 = sub_94700(
                    (int)"remote.c",
                    10629,
                    "%s: Assertion `%s' failed.",
                    "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb"
                    "_byte*, ULONGEST, ULONGEST, ULONGEST*)",
                    "annex[i] == '\\0'");
            *(_DWORD *)v8 = HIDWORD(v9);
LABEL_101:
            sub_338FFC(v46);
          }
          LODWORD(v8) = (unsigned __int8)*(_BYTE *)HIDWORD(v9);
          LODWORD(v32) = isprint(v8);
          v36 = (_DWORD)v32 != 0;
          if ( (_DWORD)v32 )
            v36 = (unsigned int)(v8 - 35) > 1;
          if ( v36 )
          {
            *v35++ = v8;
            if ( !*(unsigned __int8 *)++HIDWORD(v9) )
              goto LABEL_52;
            continue;
          }
          break;
        }
        sub_94700(
          (int)"remote.c",
          10624,
          "%s: Assertion `%s' failed.",
          "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byte*, UL"
          "ONGEST, ULONGEST, ULONGEST*)",
          "isprint (annex[i]) && annex[i] != '$' && annex[i] != '#'");
LABEL_97:
        sub_94700(
          (int)"remote.c",
          10524,
          "%s: Assertion `%s' failed.",
          "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byte*, UL"
          "ONGEST, ULONGEST, ULONGEST*)",
          "annex == NULL");
LABEL_98:
        sub_94700(
          (int)"remote.c",
          10552,
          "%s: Assertion `%s' failed.",
          "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byte*, UL"
          "ONGEST, ULONGEST, ULONGEST*)",
          "rs->remote_desc");
        goto LABEL_99;
      case 7:
        if ( HIDWORD(v8) )
          goto LABEL_97;
        LODWORD(v9) = sub_1E5D84("auxv", 0, v9, (int)dword_48880C, a6, a7, a8, dword_48880C);
        return v9;
      case 9:
        if ( !HIDWORD(v8) )
        {
          LODWORD(v9) = sub_1E5D84("memory-map", 0, v9, (int)dword_48885C, a6, a7, a8, dword_48885C);
          return v9;
        }
        sub_94700(
          (int)"remote.c",
          10545,
          "%s: Assertion `%s' failed.",
          "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byte*, UL"
          "ONGEST, ULONGEST, ULONGEST*)",
          "annex == NULL");
        break;
      case 11:
        LODWORD(v9) = sub_1E5D84("features", (const char *)HIDWORD(v8), v9, (int)dword_48881C, a6, a7, a8, dword_48881C);
        return v9;
      case 12:
        LODWORD(v9) = sub_1E5D84(
                        "libraries",
                        (const char *)HIDWORD(v8),
                        v9,
                        (int)dword_48883C,
                        a6,
                        a7,
                        a8,
                        dword_48883C);
        return v9;
      case 13:
        LODWORD(v9) = sub_1E5D84(
                        "libraries-svr4",
                        (const char *)HIDWORD(v8),
                        v9,
                        (int)dword_48884C,
                        a6,
                        a7,
                        a8,
                        dword_48884C);
        return v9;
      case 15:
        if ( !*(_DWORD *)(dword_488C94 + 56) )
          goto LABEL_98;
        LODWORD(v9) = sub_1E5D84("osdata", (const char *)HIDWORD(v8), v9, (int)dword_48888C, a6, a7, a8, dword_48888C);
        return v9;
      case 17:
        if ( HIDWORD(v8) )
          goto LABEL_107;
        LODWORD(v9) = sub_1E5D84("threads", 0, v9, (int)dword_48889C, a6, a7, a8, dword_48889C);
        return v9;
      case 19:
        if ( !HIDWORD(v8) )
        {
          LODWORD(v9) = sub_1E5D84("traceframe-info", 0, v9, (int)dword_4888BC, a6, a7, a8, dword_4888BC);
          return v9;
        }
        sub_94700(
          (int)"remote.c",
          10564,
          "%s: Assertion `%s' failed.",
          "target_xfer_status remote_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byte*, UL"
          "ONGEST, ULONGEST, ULONGEST*)",
          "annex == NULL");
        v46 = (int)ptr;
        if ( ptr )
          sub_339E64(ptr);
        goto LABEL_101;
      case 20:
        LODWORD(v9) = sub_1E5D84("fdpic", (const char *)HIDWORD(v8), v9, (int)dword_488ACC, a6, a7, a8, dword_488ACC);
        return v9;
      case 22:
        LODWORD(v9) = sub_1E5D84("uib", (const char *)HIDWORD(v8), v9, (int)dword_4888CC, a6, a7, a8, dword_4888CC);
        return v9;
      case 23:
        LODWORD(v9) = sub_1E5D84("btrace", (const char *)HIDWORD(v8), v9, (int)dword_488B3C, a6, a7, a8, dword_488B3C);
        return v9;
      case 24:
        LODWORD(v9) = sub_1E5D84(
                        "btrace-conf",
                        (const char *)HIDWORD(v8),
                        v9,
                        (int)dword_488BBC,
                        a6,
                        a7,
                        a8,
                        dword_488BBC);
        return v9;
      case 25:
        LODWORD(v9) = sub_1E5D84(
                        "exec-file",
                        (const char *)HIDWORD(v8),
                        v9,
                        (int)dword_48882C,
                        a6,
                        a7,
                        a8,
                        dword_48882C);
        return v9;
      default:
        goto LABEL_65;
    }
    goto LABEL_105;
  }
  if ( !(_DWORD)v9 )
    goto LABEL_65;
  return sub_1E5D84("statictrace", (const char *)HIDWORD(v8), v9, (int)dword_4888AC, a6, a7, a8, dword_4888AC);
}
