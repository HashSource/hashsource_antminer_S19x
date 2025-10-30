int __fastcall sub_10C8E0(int a1, int a2, char a3, int a4, unsigned int a5, unsigned int a6)
{
  int v8; // r0
  unsigned __int64 v9; // r6
  int *v10; // r3
  char v11; // r2
  int v12; // r5
  _DWORD *v13; // r0
  int v15; // r0
  int *v16; // r3
  int v17; // r1
  unsigned int v18; // r2
  _DWORD *v19; // r3
  _DWORD *v20; // r3
  unsigned int v21; // r5
  _DWORD *v22; // r8
  int v23; // r3
  unsigned int v24; // r9
  int v25; // r10
  int v26; // r8
  _DWORD *v27; // r5
  __int64 v28; // r0
  int v29; // r2
  int v30; // r11
  int v31; // r3
  _BOOL4 v32; // r8
  int v33; // r2
  unsigned int v34; // r3
  int v35; // r0
  _BOOL4 v36; // r3
  _DWORD *v37; // r0
  bool v38; // cc
  int v39; // r0
  int v40; // r2
  int v41; // r3
  int v42; // r2
  int v43; // r3
  int v44; // r6
  int v45; // r5
  _QWORD *v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // [sp+14h] [bp-80h]
  int v50; // [sp+1Ch] [bp-78h]
  unsigned int v51; // [sp+20h] [bp-74h]
  _DWORD *v55; // [sp+34h] [bp-60h]
  _DWORD *v56; // [sp+34h] [bp-60h]
  int v57; // [sp+3Ch] [bp-58h]
  int v58; // [sp+48h] [bp-4Ch]
  char v59; // [sp+4Ch] [bp-48h]
  int v60; // [sp+50h] [bp-44h]
  char v61; // [sp+54h] [bp-40h]
  _DWORD v62[2]; // [sp+58h] [bp-3Ch] BYREF
  unsigned __int64 v63; // [sp+60h] [bp-34h] BYREF
  _DWORD v64[11]; // [sp+68h] [bp-2Ch] BYREF

  v8 = sub_21E23C(a5);
  LODWORD(v9) = v8;
  if ( !v8 )
    goto LABEL_9;
  v10 = *(int **)(v8 + 8);
  if ( !v10 )
    goto LABEL_9;
  v11 = a3;
  v12 = (a3 & 0x21) == 0;
  if ( *v10 <= 0 )
    v12 |= 1u;
  if ( v12 )
  {
LABEL_9:
    sub_2578AC(a2, 1);
    sub_10BEE8(a1, a2, a5, a6, a4, a3, 0);
    v8 = sub_25734C(a2, 1);
    goto LABEL_10;
  }
  if ( (v11 & 0x20) == 0 )
  {
    if ( (a3 & 1) != 0 )
      v8 = sub_10C2BC(a1, a2, v8, a5, a6, a4, a3);
    goto LABEL_10;
  }
  v15 = sub_323AE0(41, sub_10B788, sub_10B7B0, sub_10B858, sub_93094, sub_10B858);
  v16 = *(int **)(v9 + 8);
  v57 = v15;
  v17 = *v16;
  v55 = v16 + 1;
  if ( *v16 <= 0 )
  {
    v56 = 0;
  }
  else
  {
    v18 = v16[2];
    if ( a5 <= v18 )
    {
LABEL_14:
      v20 = v55;
      if ( a6 <= v18 )
        v20 = 0;
      v56 = v20;
    }
    else
    {
      v19 = v16 + 3;
      while ( v17 != ++v12 )
      {
        v37 = v19;
        v19 += 2;
        v18 = *(v19 - 1);
        if ( a5 <= v18 )
        {
          v55 = v37;
          goto LABEL_14;
        }
      }
      v56 = 0;
    }
  }
  if ( a5 < a6 )
  {
    v21 = a5;
    do
    {
      memset(v64, 0, 0x28u);
      sub_21DEAC(v64, v21);
      v9 = __PAIR64__(v64[4], v64[1]);
      v21 += sub_10C02C(a1, v21);
      if ( (_DWORD)v9 )
      {
        v63 = v9;
        v22 = (_DWORD *)sub_324030(v57, &v63, 1);
        if ( !*v22 )
        {
          v46 = sub_93028(8u);
          *v46 = v9;
          *v22 = v46;
        }
      }
    }
    while ( a6 > v21 );
  }
  if ( (a3 & 8) != 0 )
    v23 = 2;
  else
    v23 = 0;
  v49 = v23;
  sub_2578AC(a2, 1);
  v59 = 0;
  v58 = 0;
  v60 = 0;
  v61 = 0;
  if ( a5 < a6 )
  {
    v24 = a5;
    v50 = 0;
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      v27 = v64;
      memset(v64, 0, 0x28u);
      sub_21DEAC(v64, v24);
      HIDWORD(v9) = v64[1];
      v30 = v64[4];
      v51 = v64[6];
      if ( v64[1] != v26 )
        break;
      if ( v26 )
      {
        v38 = v25 < 0;
        if ( v25 )
          v38 = v25 + 1 < v64[4];
        if ( v38 && (v44 = v64[4] - 1, v64[4] - 1 > v25) )
        {
          v45 = v64[4] - 1;
          while ( 1 )
          {
            v62[0] = v26;
            v62[1] = v45;
            if ( sub_323E3C(v57, v62) )
              break;
            if ( --v45 == v25 )
              goto LABEL_93;
          }
          if ( v44 <= v45 )
            goto LABEL_78;
LABEL_93:
          v27 = (_DWORD *)(v45 + 1);
          LODWORD(v9) = v30;
        }
        else
        {
LABEL_78:
          LODWORD(v9) = 0;
          v27 = 0;
        }
        if ( v30 != v25 )
          goto LABEL_38;
      }
      if ( !v59 )
      {
        sub_94700(
          (int)"disasm.c",
          685,
          "%s: Assertion `%s' failed.",
          "void do_mixed_source_and_assembly(gdbarch*, ui_out*, symtab*, CORE_ADDR, CORE_ADDR, int, gdb_disassembly_flags)",
          "tuple_emitter.has_value ()");
LABEL_100:
        sub_94700(
          (int)"disasm.c",
          663,
          "%s: Assertion `%s' failed.",
          "void do_mixed_source_and_assembly(gdbarch*, ui_out*, symtab*, CORE_ADDR, CORE_ADDR, int, gdb_disassembly_flags)",
          "sal.symtab != NULL");
        v48 = sub_25734C(a2, 1);
        sub_338FFC(v48);
      }
      if ( v61 )
        goto LABEL_57;
      v28 = sub_94700(
              (int)"disasm.c",
              686,
              "%s: Assertion `%s' failed.",
              "void do_mixed_source_and_assembly(gdbarch*, ui_out*, symtab*, CORE_ADDR, CORE_ADDR, int, gdb_disassembly_flags)",
              "list_emitter.has_value ()");
LABEL_83:
      if ( HIDWORD(v9) )
      {
        v39 = ((int (__fastcall *)(_DWORD, _DWORD))loc_2043D4)(HIDWORD(v9), HIDWORD(v28));
        sub_257380(a2, v39, v40, v41);
      }
      else
      {
        sub_257380(a2, "unknown", v29, v31);
      }
      sub_257380(a2, ":\n", v42, v43);
LABEL_46:
      if ( (int)v27 > 0 )
      {
        if ( !HIDWORD(v9) )
          goto LABEL_100;
        if ( (int)v27 < (int)v9 )
        {
          do
          {
            sub_2578AC(a2, 0);
            sub_2053D0(HIDWORD(v9), v27, (char *)v27 + 1, v49);
            sub_2578AC(a2, 1);
            sub_25734C(a2, 1);
            sub_25734C(a2, 0);
            v27 = (_DWORD *)((char *)v27 + 1);
          }
          while ( v27 != (_DWORD *)v9 );
        }
      }
      if ( v59 )
        sub_25734C(v58, 0);
      v58 = a2;
      sub_2578AC(a2, 0);
      v59 = 1;
      if ( HIDWORD(v9) )
        sub_2053D0(HIDWORD(v9), v30, v30 + 1, v49);
      else
        sub_257380(a2, "--- no source info for this pc ---\n", v33, 1);
      if ( v61 )
        sub_25734C(v60, 1);
      v60 = a2;
      sub_2578AC(a2, 1);
      v61 = 1;
LABEL_57:
      v34 = v51;
      if ( v51 )
      {
        if ( a6 < v51 )
          v34 = a6;
        LODWORD(v63) = v34;
      }
      else
      {
        v34 = v24 + 1;
        LODWORD(v63) = v24 + 1;
      }
      v35 = sub_10BEE8(a1, a2, v24, v34, a4, a3, &v63);
      v24 = v63;
      v36 = a4 >= 0;
      if ( a4 > v50 + v35 )
        v36 = 0;
      v50 += v35;
      if ( !v36 )
      {
        v26 = HIDWORD(v9);
        v25 = v30;
        if ( a6 > (unsigned int)v63 )
          continue;
      }
      sub_25734C(v60, 1);
      goto LABEL_67;
    }
    LODWORD(v9) = v56;
    if ( v56 )
      LODWORD(v9) = 1;
    if ( v25 )
      LODWORD(v9) = 0;
    if ( (_DWORD)v9 )
    {
      v27 = (_DWORD *)*v56;
      if ( *v56 < v64[4] )
      {
        LODWORD(v9) = v64[4];
      }
      else
      {
        LODWORD(v9) = 0;
        v27 = 0;
      }
    }
    else
    {
      v27 = 0;
    }
LABEL_38:
    if ( a5 < v24 )
      sub_257380(a2, &word_356638, v29, a5);
    if ( v59 )
    {
      if ( !v61 )
      {
        v47 = sub_94700(
                (int)"disasm.c",
                638,
                "%s: Assertion `%s' failed.",
                "void do_mixed_source_and_assembly(gdbarch*, ui_out*, symtab*, CORE_ADDR, CORE_ADDR, int, gdb_disassembly_flags)",
                "list_emitter.has_value ()");
        if ( v57 )
          v47 = sub_323B84(v57);
        sub_338FFC(v47);
      }
      v61 = 0;
      sub_25734C(v60, 1);
      v59 = 0;
      sub_25734C(v58, 0);
    }
    v31 = a3 & 8;
    v32 = HIDWORD(v9) != v26;
    if ( (a3 & 8) != 0 )
      v32 = 0;
    if ( !v32 )
      goto LABEL_46;
    goto LABEL_83;
  }
LABEL_67:
  if ( v59 )
    sub_25734C(v58, 0);
  sub_25734C(a2, 1);
  v8 = v57;
  if ( v57 )
    v8 = sub_323B84(v57);
LABEL_10:
  v13 = (_DWORD *)sub_242F8C(v8);
  return sub_25680C(*v13);
}
