_DWORD *__fastcall sub_27D03C(int *a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r12
  int v5; // r0
  unsigned int v6; // r4
  _DWORD *v7; // r0
  int v8; // r5
  int v9; // r6
  unsigned int *v10; // r0
  unsigned int v11; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r1
  int v16; // r3
  _DWORD *v17; // r4
  _DWORD *v18; // r11
  int v19; // r2
  int v20; // r3
  _DWORD *v21; // r0
  int v22; // r0
  unsigned int v23; // r6
  _DWORD *v24; // r5
  _DWORD *v25; // r4
  _DWORD *v26; // t1
  char *v27; // r10
  int *v28; // r0
  int v29; // r7
  int v30; // r10
  int v31; // r3
  int v32; // r0
  int v33; // r3
  int *v34; // r0
  int v35; // r7
  const char *v36; // r10
  int v37; // r0
  char *v38; // r0
  char *v39; // r3
  int v40; // r3
  char *v41; // r3
  int v42; // r4
  int v43; // r0
  int v44; // r11
  int v45; // r4
  int v46; // r0
  int v47; // r4
  _DWORD *v48; // r0
  _DWORD *v49; // r3
  int *v50; // r0
  int v51; // r4
  int v52; // r0
  char *v53; // r5
  int v54; // r0
  char *v55; // r0
  int v56; // r3
  int v57; // r5
  int v58; // r7
  int v59; // r3
  unsigned int v60; // r4
  const char *v61; // r9
  int v62; // r6
  int v63; // r10
  int v64; // r8
  int v65; // r4
  int v66; // r2
  bool v67; // zf
  int v68; // r6
  int v69; // r10
  int v70; // r0
  _DWORD *v71; // r8
  unsigned int v72; // r4
  int v73; // r0
  __int64 v74; // r4
  _DWORD *v75; // r6
  int v76; // r0
  int v77; // r0
  _DWORD *v78; // r2
  unsigned int *v80; // r0
  unsigned int *v81; // r0
  int *v82; // r0
  int v83; // r1
  int *v84; // r0
  int v85; // r7
  const char *v86; // r10
  int v87; // r0
  char *v88; // r0
  int *v89; // r7
  int v90; // r8
  _DWORD *v91; // r6
  int v92; // r4
  _DWORD *v93; // r5
  _DWORD *v94; // t1
  _BYTE *v95; // r11
  _DWORD *v96; // r1
  _DWORD *v97; // r3
  const char **v98; // r2
  unsigned int v99; // r6
  _BYTE *v100; // r0
  int v101; // r3
  int v102; // r3
  char *v103; // r2
  int v104; // r5
  unsigned int v105; // r0
  int v106; // r0
  int v107; // r0
  int v108; // r6
  _DWORD *v109; // r0
  _DWORD *v110; // r3
  int *v111; // r0
  int v112; // r6
  int v113; // r0
  char *v114; // r7
  int v115; // r0
  char *v116; // r0
  char *v117; // r0
  char *v118; // r4
  char *v119; // r0
  const char *v120; // r0
  int v121; // r0
  const char *v122; // r0
  const char *v123; // r0
  const char *v124; // r0
  const char *v125; // r0
  const char *v126; // r0
  const char *v127; // r0
  const char *v128; // r0
  const char *v129; // r0
  const char *v130; // r0
  int v131; // r0
  const char *v132; // r0
  int v133; // r0
  const char *v134; // r0
  int v135; // r0
  const char *v136; // r0
  const char *v137; // r0
  char *s2; // [sp+10h] [bp-5Ch]
  int v139; // [sp+14h] [bp-58h]
  int (__fastcall *v140)(int, int); // [sp+18h] [bp-54h]
  int v141; // [sp+18h] [bp-54h]
  int v142; // [sp+1Ch] [bp-50h]
  char *ptr; // [sp+20h] [bp-4Ch]
  int v144; // [sp+24h] [bp-48h]
  void *v146; // [sp+2Ch] [bp-40h]
  const char **v149; // [sp+38h] [bp-34h] BYREF
  _DWORD *v150; // [sp+3Ch] [bp-30h] BYREF
  _DWORD *v151; // [sp+40h] [bp-2Ch] BYREF
  int v152; // [sp+44h] [bp-28h] BYREF
  int v153; // [sp+48h] [bp-24h]
  int v154; // [sp+4Ch] [bp-20h] BYREF
  int v155[6]; // [sp+54h] [bp-18h] BYREF

  v3 = a1[6];
  v150 = 0;
  ptr = (char *)sub_29B910(v3);
  ((void (__fastcall *)(_DWORD **, char *, int, int))loc_16298C)(&v151, ptr, dword_47ACA8, -1);
  if ( !v151 )
  {
    v135 = sub_2A6910(0);
    v136 = (const char *)sub_2A6920(v135);
    sub_946E0("\"%s\": could not open as compiled module: %s", ptr, v136);
  }
  if ( !sub_2AA0C0(v151, 1, &v149) )
  {
    v133 = sub_2A6910(0);
    v134 = (const char *)sub_25B140(v133, v149);
    sub_946E0("\"%s\": not in loadable format: %s", ptr, v134);
  }
  if ( ((v151[10] >> 5) & 0x42) != 0 )
    sub_946E0("\"%s\": not in object format.", ptr);
  v4 = v151[25];
  v155[0] = 0;
  v155[1] = v4;
  v155[4] = (int)&v150;
  v155[2] = -1;
  v155[3] = 1;
  v146 = sub_9253C((int)sub_27D034, (int)&v150);
  sub_2ADCFC(v151, sub_27CB74, v155);
  sub_27CB74((int)v151, 0, v155);
  v5 = (*(int (**)(void))(v151[1] + 260))();
  v6 = v5;
  if ( v5 < 0 )
  {
    v131 = sub_2A6910(v5);
    v132 = (const char *)sub_2A6920(v131);
    sub_946E0("Cannot read symbols of compiled module \"%s\": %s", ptr, v132);
  }
  v142 = sub_213894(v151, ptr, 0, 0, 0, 0);
  v7 = sub_21CF28(&v154, v142, "_gdb_expr", 1);
  v144 = v154;
  if ( !v154 )
  {
    v128 = (const char *)sub_1B87A8(v142);
    sub_946E0("Cannot find function \"%s\" in compiled module \"%s\".", "_gdb_expr", v128);
  }
  v8 = *(_DWORD *)(v154 + 24);
  v9 = **(char **)(v8 + 24);
  if ( v9 != 7 )
  {
    v127 = (const char *)sub_1B87A8(v142);
    sub_946E0("Invalid type code %d of function \"%s\" in compiled module \"%s\".", v9, "_gdb_expr", v127);
  }
  switch ( a2 )
  {
    case 1:
      sub_16F654((int)v7);
      sub_1780B4();
      v11 = *v81;
      v12 = 1;
      goto LABEL_9;
    case 2:
      sub_16F654((int)v7);
      sub_1780B4();
      v11 = *v80;
      v12 = 0;
      goto LABEL_9;
    case 3:
    case 4:
      sub_16F654((int)v7);
      sub_1780B4();
      v11 = *v10;
      v12 = 2;
LABEL_9:
      v13 = *(_DWORD *)(v8 + 24);
      v14 = *(__int16 *)(v13 + 4);
      if ( v14 != v12 )
      {
        v137 = (const char *)sub_1B87A8(v142);
        sub_946E0("Invalid %d parameters of function \"%s\" in compiled module \"%s\".", v14, "_gdb_expr", v137);
      }
      if ( !sub_173F40(v11, *(_DWORD *)(v13 + 20)) )
      {
        v120 = (const char *)sub_1B87A8(v142);
        sub_946E0("Invalid return type of function \"%s\" in compiled module \"%s\".", "_gdb_expr", v120);
      }
      v15 = *(_DWORD *)(v142 + 64);
      v16 = *(_DWORD *)(v142 + 60);
      if ( v6 > v15 - v16 )
      {
        obstack_newchunk((struct obstack *)(v142 + 48), v6);
        v16 = *(_DWORD *)(v142 + 60);
        v15 = *(_DWORD *)(v142 + 64);
      }
      v17 = (_DWORD *)(v16 + v6);
      v18 = *(_DWORD **)(v142 + 56);
      *(_DWORD *)(v142 + 60) = v17;
      if ( v17 == v18 )
        *(_BYTE *)(v142 + 88) |= 2u;
      v19 = *(_DWORD *)(v142 + 52);
      v20 = ((unsigned int)v17 + *(_DWORD *)(v142 + 72)) & ~*(_DWORD *)(v142 + 72);
      *(_DWORD *)(v142 + 60) = v20;
      v21 = v151;
      if ( v20 - v19 > (unsigned int)(v15 - v19) )
      {
        v20 = v15;
        *(_DWORD *)(v142 + 60) = v15;
      }
      *(_DWORD *)(v142 + 56) = v20;
      v22 = (*(int (**)(void))(v21[1] + 264))();
      if ( v22 < 0 )
      {
        v121 = sub_2A6910(v22);
        v122 = (const char *)sub_2A6920(v121);
        sub_946E0("Cannot parse symbols of compiled module \"%s\": %s", ptr, v122);
      }
      v23 = (unsigned int)&v18[v22];
      if ( (unsigned int)v18 >= v23 )
        goto LABEL_33;
      v24 = v18;
      s2 = 0;
      break;
    default:
      sub_94700((int)"compile/compile-object-load.c", 695, "invalid scope %d", a2);
      goto LABEL_104;
  }
  do
  {
    while ( 1 )
    {
      v26 = (_DWORD *)*v24++;
      v25 = v26;
      if ( v26[3] )
        goto LABEL_23;
      v27 = (char *)v25[1];
      v25[4] = &off_470950;
      v25[3] = 2;
      if ( !strcmp(v27, "_GLOBAL_OFFSET_TABLE_") )
      {
        if ( dword_48AA50 )
        {
          v82 = (int *)sub_242FC8();
          sub_2594B0(*v82, "ELF symbol \"%s\" relocated to zero\n", (const char *)v25[1]);
        }
        v25[2] = 0;
        goto LABEL_23;
      }
      v28 = sub_1B141C(&v152, v27, 0, 0);
      v29 = v152;
      v30 = v153;
      if ( !v152 )
      {
LABEL_62:
        sub_946B0("Could not find symbol \"%s\" for compiled module \"%s\".", v25[1], ptr);
        ++s2;
        goto LABEL_23;
      }
      v31 = *(_BYTE *)(v152 + 32) & 0xF;
      if ( v31 == 1 )
      {
        v83 = *(__int16 *)(v152 + 22);
        if ( v83 == -1 )
          goto LABEL_109;
        v67 = dword_48AA50 == 0;
        v25[2] = *(_DWORD *)(*(_DWORD *)(v153 + 144) + 4 * v83) + *(_DWORD *)(v152 + 8);
        if ( !v67 )
        {
          v84 = (int *)sub_242FC8();
          v85 = *v84;
          v86 = (const char *)v25[1];
          v87 = sub_16F654((int)v84);
          v88 = sub_25AC8C(v87, v25[2]);
          sub_2594B0(v85, "ELF mst_text symbol \"%s\" relocated to %s\n", v86, v88);
        }
        goto LABEL_23;
      }
      if ( v31 != 2 )
        goto LABEL_62;
      v140 = *(int (__fastcall **)(int, int))off_46D9C8;
      v32 = sub_16F654((int)v28);
      v33 = *(__int16 *)(v29 + 22);
      if ( v33 == -1 )
      {
        sub_94700((int)"compile/compile-object-load.c", 753, "Section index is uninitialized");
LABEL_109:
        sub_94700((int)"compile/compile-object-load.c", 744, "Section index is uninitialized");
        goto LABEL_110;
      }
      v25[2] = v140(v32, *(_DWORD *)(v29 + 8) + *(_DWORD *)(*(_DWORD *)(v30 + 144) + 4 * v33));
      if ( dword_48AA50 )
        break;
LABEL_23:
      if ( v23 <= (unsigned int)v24 )
        goto LABEL_32;
    }
    v34 = (int *)sub_242FC8();
    v35 = *v34;
    v36 = (const char *)v25[1];
    v37 = sub_16F654((int)v34);
    v38 = sub_25AC8C(v37, v25[2]);
    sub_2594B0(v35, "ELF mst_text_gnu_ifunc symbol \"%s\" relocated to %s\n", v36, v38);
  }
  while ( v23 > (unsigned int)v24 );
LABEL_32:
  v39 = s2;
  if ( s2 )
    goto LABEL_105;
LABEL_33:
  sub_2ADCFC(v151, sub_27CE44, v18);
  v40 = *(_DWORD *)(*(_DWORD *)(v144 + 24) + 24);
  if ( !*(_WORD *)(v40 + 4) )
  {
    v139 = *(__int16 *)(v40 + 4);
    goto LABEL_51;
  }
  v41 = *(char **)(sub_171258(*(_DWORD **)(*(_DWORD *)(v40 + 24) + 12)) + 24);
  v42 = *v41;
  if ( v42 != 1 )
  {
    v123 = (const char *)sub_1B87A8(v142);
    sub_946E0(
      "Invalid type code %d of first parameter of function \"%s\" in compiled module \"%s\".",
      v42,
      "_gdb_expr",
      v123);
  }
  v43 = sub_171258(*((_DWORD **)v41 + 5));
  v44 = v43;
  v45 = **(char **)(v43 + 24);
  if ( v45 != 3 )
  {
    v124 = (const char *)sub_1B87A8(v142);
    sub_946E0(
      "Invalid type code %d of dereferenced first parameter of function \"%s\" in compiled module \"%s\".",
      v45,
      "_gdb_expr",
      v124);
  }
  v46 = sub_16F654(v43);
  v139 = ((int (__fastcall *)(int, _DWORD, int))loc_16E72C)(v46, *(_DWORD *)(v44 + 20), 1);
  if ( !v139 )
  {
LABEL_104:
    sub_94700(
      (int)"compile/compile-object-load.c",
      782,
      "%s: Assertion `%s' failed.",
      "compile_module* compile_object_load(const compile_file_names&, compile_i_scope_types, void*)",
      "regs_addr != 0");
LABEL_105:
    sub_946E0("%ld symbols were missing, cannot continue.", v39);
  }
  v47 = *(_DWORD *)(v44 + 20);
  v48 = sub_93028(0xCu);
  v48[2] = v47;
  v48[1] = v139;
  v49 = v150;
  v150 = v48;
  v67 = dword_48AA50 == 0;
  *v48 = v49;
  if ( !v67 )
  {
    v50 = (int *)sub_242FC8();
    v51 = *v50;
    v52 = sub_16F654((int)v50);
    v53 = sub_25AC8C(v52, *(_DWORD *)(v44 + 20));
    v54 = sub_16F654((int)v53);
    v55 = sub_25AC8C(v54, v139);
    sub_2594B0(v51, "allocated %s bytes at %s for registers\n", v53, v55);
  }
  v141 = sub_16F654((int)v48);
  sub_1DDB40(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0));
  v56 = *(_DWORD *)(v44 + 24);
  if ( *(__int16 *)(v56 + 4) > 0 )
  {
    v57 = 0;
    v58 = 0;
    do
    {
      v59 = *(_DWORD *)(v56 + 24);
      v60 = *(_DWORD *)(v59 + v57);
      v61 = *(const char **)(v59 + v57 + 16);
      v62 = *(_DWORD *)(v59 + v57 + 8) >> 4;
      v63 = *(_DWORD *)(v59 + v57 + 4);
      v64 = sub_171258(*(_DWORD **)(v59 + v57 + 12));
      if ( strcmp(v61, "_dummy") )
      {
        if ( v60 & 7 | v62 )
        {
          v118 = sub_98880(v60, v63);
          v119 = sub_98880(v62, 0);
          sub_946E0("Invalid register \"%s\" position %s bits or size %s bits", v61, v118, v119);
        }
        v65 = (v60 >> 3) | (v63 << 29);
        v66 = **(char **)(v64 + 24);
        v67 = v66 == 8;
        if ( v66 != 8 )
          v67 = v66 == 1;
        if ( !v67 )
          sub_946E0("Invalid register \"%s\" type code %d", v61, v66);
        v68 = *(_DWORD *)(v64 + 20);
        v69 = sub_27897C(v141, (int)v61);
        v70 = sub_15F70C(v69);
        v71 = (_DWORD *)sub_15B6A4(v64, v69, v70);
        if ( sub_26ED18((int)v71) )
          sub_946E0("Register \"%s\" is optimized out.", v61);
        if ( !sub_26E65C((int)v71) )
          sub_946E0("Register \"%s\" is not available.", v61);
        v72 = v139 + v65;
        v73 = sub_26E978(v71);
        if ( sub_230484(v72, v73, v68) )
        {
          v117 = sub_25AC8C(v141, v72);
          sub_946E0("Cannot write register \"%s\" to inferior memory at %s.", v61, v117);
        }
      }
      v56 = *(_DWORD *)(v44 + 24);
      ++v58;
      v57 += 24;
    }
    while ( *(__int16 *)(v56 + 4) > v58 );
  }
LABEL_51:
  if ( (unsigned int)(a2 - 3) > 1 )
  {
    v74 = 0;
    goto LABEL_54;
  }
  v89 = *(int **)(*(_DWORD *)(*(_DWORD *)(v144 + 28) + 4) + 32);
  v90 = *v89;
  if ( *v89 <= 0 )
  {
    v92 = 0;
    v93 = 0;
    v95 = 0;
  }
  else
  {
    v91 = v89 + 1;
    v92 = 0;
    while ( 1 )
    {
      v94 = (_DWORD *)v91[1];
      ++v91;
      v93 = v94;
      if ( !v94[2] )
      {
        v95 = sub_C2974(v93, "__gdb_expr_val", 2u, 1);
        if ( v95 )
        {
          v96 = (_DWORD *)v89[3];
          v97 = v93;
          do
          {
            if ( v96 == v97 || v97 == (_DWORD *)v89[2] )
              goto LABEL_68;
            v97 = (_DWORD *)v97[3];
            v98 = (const char **)v97[2];
          }
          while ( !v98 );
          if ( v96 == (_DWORD *)v97[3] && !strcmp(*v98, "_gdb_expr") )
            break;
        }
      }
LABEL_68:
      if ( v90 == ++v92 )
        goto LABEL_110;
    }
  }
  if ( v92 == v90 )
LABEL_110:
    sub_946E0("No \"%s\" symbol found", "__gdb_expr_ptr_type");
  v99 = sub_171258(*((_DWORD **)v95 + 6));
  v100 = sub_C2974(v93, "__gdb_expr_ptr_type", 2u, 1);
  if ( !v100 )
    sub_946E0("No \"%s\" symbol found", "__gdb_expr_ptr_type");
  v101 = *(_DWORD *)(sub_171258(*((_DWORD **)v100 + 6)) + 24);
  if ( *(_BYTE *)v101 != 1 )
    sub_946E0("Type of \"%s\" is not a pointer", "__gdb_expr_ptr_type");
  LODWORD(v74) = *(_DWORD *)(v101 + 20);
  if ( !sub_173F40(v99, v74) )
  {
    v102 = *(_DWORD *)(v99 + 24);
    v103 = *(char **)(v74 + 24);
    v104 = *v103;
    if ( *(_BYTE *)v102 != 1 )
    {
      v125 = (const char *)sub_1B87A8(v142);
      sub_946E0("Invalid type code %d of symbol \"%s\" in compiled module \"%s\".", v104, "__gdb_expr_val", v125);
    }
    if ( v104 == 2 )
    {
      v105 = *((_DWORD *)v103 + 5);
    }
    else
    {
      if ( v104 != 7 )
      {
        v130 = (const char *)sub_1B87A8(v142);
        sub_946E0("Invalid type code %d of symbol \"%s\" in compiled module \"%s\".", v104, "__gdb_expr_ptr_type", v130);
      }
      v105 = v74;
    }
    if ( sub_173F40(v105, *(_DWORD *)(v102 + 20)) )
    {
      if ( a2 == 3 )
        goto LABEL_83;
      goto LABEL_92;
    }
LABEL_119:
    v129 = (const char *)sub_1B87A8(v142);
    sub_946E0(
      "Referenced types do not match for symbols \"%s\" and \"%s\" in compiled module \"%s\".",
      "__gdb_expr_ptr_type",
      "__gdb_expr_val",
      v129);
  }
  if ( a2 != 3 )
  {
    v126 = (const char *)sub_1B87A8(v142);
    sub_946E0("Expected address scope in compiled module \"%s\".", v126);
  }
  if ( !v99 )
  {
LABEL_83:
    sub_92620(v146);
    v75 = 0;
    ((void (__fastcall *)(int))loc_1B7600)(v142);
    sub_33AC04((void *)v142);
    goto LABEL_55;
  }
  LODWORD(v74) = v99;
LABEL_92:
  v106 = sub_171258((_DWORD *)v74);
  v107 = sub_16F654(v106);
  HIDWORD(v74) = ((int (__fastcall *)(int, _DWORD, int))loc_16E72C)(v107, *(_DWORD *)(v74 + 20), 3);
  if ( !HIDWORD(v74) )
  {
    sub_94700(
      (int)"compile/compile-object-load.c",
      807,
      "%s: Assertion `%s' failed.",
      "compile_module* compile_object_load(const compile_file_names&, compile_i_scope_types, void*)",
      "out_value_addr != 0");
    goto LABEL_119;
  }
  v108 = *(_DWORD *)(v74 + 20);
  v109 = sub_93028(0xCu);
  v109[1] = HIDWORD(v74);
  v109[2] = v108;
  v110 = v150;
  v150 = v109;
  v67 = dword_48AA50 == 0;
  *v109 = v110;
  if ( !v67 )
  {
    v111 = (int *)sub_242FC8();
    v112 = *v111;
    v113 = sub_16F654((int)v111);
    v114 = sub_25AC8C(v113, *(_DWORD *)(v74 + 20));
    v115 = sub_16F654((int)v114);
    v116 = sub_25AC8C(v115, SHIDWORD(v74));
    sub_2594B0(v112, "allocated %s bytes at %s for printed value\n", v114, v116);
  }
LABEL_54:
  v75 = sub_93028(0x24u);
  v76 = *a1;
  *v75 = v142;
  v77 = sub_327254(v76);
  v78 = v150;
  v75[3] = v139;
  v75[1] = v77;
  v75[2] = v144;
  v75[4] = a2;
  *((_QWORD *)v75 + 3) = v74;
  v75[5] = a3;
  v75[8] = v78;
  v150 = 0;
  sub_92620(v146);
LABEL_55:
  if ( v151 )
    ((void (*)(void))loc_1625A8)();
  if ( ptr )
    free(ptr);
  return v75;
}
