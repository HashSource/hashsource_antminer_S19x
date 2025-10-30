int __fastcall sub_11303C(_DWORD *a1, char *a2, char *a3)
{
  int v6; // r0
  int v7; // r10
  int v8; // r3
  __int64 v9; // r0
  int v10; // r1
  int v11; // r6
  char *v12; // r7
  int v13; // r9
  __int64 v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r1
  __int64 v18; // r6
  char *v19; // r0
  int v20; // r0
  int v21; // r1
  int v22; // r7
  int v23; // r2
  bool v24; // zf
  int v25; // r2
  char *v26; // r0
  int (__fastcall *v27)(int); // r3
  int v28; // r1
  char *v29; // r0
  char *v30; // r6
  int (__fastcall *v31)(int); // r3
  int v32; // r0
  unsigned __int8 *v33; // r0
  unsigned __int8 *v34; // r6
  int v35; // r0
  int v36; // r1
  __int64 v37; // r0
  int v38; // r3
  int v39; // r1
  char *v40; // r0
  __int64 v41; // kr00_8
  char *v42; // r0
  __int64 v43; // r0
  __int64 v44; // r2
  __int64 v45; // r0
  int v46; // r0
  __int64 v47; // r2
  int v48; // r2
  char *v49; // r0
  int v50; // r1
  int v51; // r0
  char *v52; // r0
  char *v53; // r0
  int v54; // r3
  int v55; // r1
  _DWORD *v56; // r0
  int v57; // r9
  int v58; // r7
  void (__fastcall *v59)(_DWORD *, __int64 *, __int64 *); // r3
  int v60; // r6
  int v61; // r1
  int v62; // r0
  int v63; // r0
  int v64; // r0
  void *v65; // r0
  int v66; // r1
  char *v67; // r0
  int v68; // r1
  char *v69; // r0
  int v70; // r6
  int v71; // r0
  __int64 v72; // r2
  __int64 v73; // r2
  int v74; // r9
  __int64 v75; // r2
  int v76; // r4
  int v77; // r0
  char *v78; // r2
  char *v79; // r3
  __int64 v80; // r0
  int v81; // r2
  int v82; // r3
  unsigned int v83; // r1
  int v84; // lr
  int v85; // r6
  char v86; // r7
  int v87; // r9
  int v88; // r2
  int v89; // r3
  unsigned int v90; // r1
  int v91; // r6
  int v92; // r2
  char v93; // lr
  unsigned int v94; // r1
  int v95; // r0
  int v96; // r0
  __int64 v97; // r2
  int v98; // r0
  int v99; // r1
  int v100; // r1
  char *v101; // r0
  __int64 v102; // r0
  unsigned __int64 v103; // r2
  int v104; // r2
  char *v105; // r0
  int v106; // r1
  char *v107; // r0
  char *v108; // r0
  char *v109; // r0
  int v110; // r3
  int v111; // r3
  int v112; // r2
  bool v113; // zf
  int v114; // r6
  int v115; // r7
  __int64 v116; // r0
  int v117; // r0
  int v118; // r6
  __int64 v119; // r0
  int v120; // r0
  int (__fastcall *v121)(int); // r3
  int v122; // r0
  int v123; // r0
  int v124; // r0
  __int64 v125; // kr08_8
  int v126; // r0
  int (__fastcall *v127)(int); // r3
  int v128; // r3
  int v129; // r2
  int v130; // r2
  int v131; // r3
  int (__fastcall *v132)(_DWORD *, _DWORD, int, int); // r7
  int v133; // r0
  int v134; // r6
  int v135; // r0
  int v136; // r4
  int v137; // r0
  int v138; // r0
  int v139; // r6
  int v140; // r0
  int v141; // r0
  int v142; // r6
  int v143; // r0
  int v144; // r4
  int v145; // r0
  int v146; // r0
  int v147; // r6
  int v148; // r4
  int v149; // r0
  int v150; // r0
  int v151; // r4
  int v152; // r0
  int v153; // r0
  int v154; // r4
  __int64 v155; // r0
  unsigned __int64 v156; // r0
  __int64 v157; // r0
  __int64 v158; // r0
  int v159; // r0
  int v160; // r6
  int v161; // r0
  int v162; // r6
  int v163; // r4
  int v164; // r0
  int v165; // r0
  int v166; // r0
  int v167; // r7
  int v168; // r6
  int v169; // r0
  int v170; // r0
  int v171; // r0
  const char *v173; // [sp+8h] [bp-6Ch] BYREF
  _BYTE v174[12]; // [sp+Ch] [bp-68h]
  int (__fastcall *v175)(int); // [sp+18h] [bp-5Ch]
  int v176; // [sp+1Ch] [bp-58h]
  char v177; // [sp+23h] [bp-51h] BYREF
  int v178; // [sp+24h] [bp-50h] BYREF
  __int64 v179; // [sp+28h] [bp-4Ch] BYREF
  __int64 v180; // [sp+30h] [bp-44h] BYREF
  __int64 v181; // [sp+38h] [bp-3Ch] BYREF
  __int64 v182; // [sp+40h] [bp-34h] BYREF
  __int64 v183; // [sp+48h] [bp-2Ch] BYREF

  v176 = ((int (__fastcall *)(_DWORD))loc_165BB8)(a1[4]);
  v6 = sub_1122F8((int)a1);
  HIDWORD(v9) = a1[8];
  v7 = v6;
  v8 = a1[9];
  LODWORD(v9) = 0;
  a1[10] = 0;
  a1[15] = 1;
  if ( SHIDWORD(v9) > v8 )
    sub_946E0("DWARF-2 expression error: Loop detected (%d).", HIDWORD(v9));
  v10 = HIDWORD(v9) + 1;
  a1[8] = v10;
  if ( a2 < a3 )
  {
    v175 = sub_111770;
    v173 = "DW_OP_implicit_pointer";
    while ( 2 )
    {
      v11 = (unsigned __int8)*a2;
      v12 = a2 + 1;
      LODWORD(v9) = sub_258BD4(v9);
      switch ( v11 )
      {
        case 3:
          v102 = sub_15C250(a2 + 1, a1[5], v176);
          v103 = v102;
          HIDWORD(v102) = a1[5];
          a2 = &v12[HIDWORD(v102)];
          if ( a3 <= &v12[HIDWORD(v102)] || (HIDWORD(v102) = (unsigned __int8)v12[HIDWORD(v102)], HIDWORD(v102) != 224) )
          {
            HIDWORD(v102) = a1[7];
            v103 = __PAIR64__(HIDWORD(v103), v102) + HIDWORD(v102);
          }
          goto LABEL_101;
        case 6:
        case 148:
        case 166:
        case 246:
          if ( v11 == 6 )
          {
            *(_DWORD *)&v174[4] = a1[5];
            LODWORD(v9) = sub_11244C((int)a1, 0);
            v128 = a1[2];
            v129 = a1[1];
            *(_DWORD *)v174 = v9;
            if ( v129 == v128 )
LABEL_194:
              sub_946E0("dwarf expression stack underflow", HIDWORD(v9));
            ++a2;
            a1[2] = v128 - 8;
            v114 = v7;
          }
          else
          {
            v110 = (unsigned __int8)a2[1];
            a2 += 2;
            *(_DWORD *)&v174[4] = v110;
            LODWORD(v9) = sub_11244C((int)a1, 0);
            v111 = a1[2];
            v112 = a1[1];
            *(_DWORD *)v174 = v9;
            if ( v112 == v111 )
              goto LABEL_194;
            v113 = v11 == 246;
            if ( v11 != 246 )
              v113 = v11 == 166;
            a1[2] = v111 - 8;
            if ( v113 )
            {
              a2 = sub_11257C(a2, a3, &v179);
              v121 = *(int (__fastcall **)(int))(*a1 + 40);
              if ( v121 == v175 )
                v114 = *(_DWORD *)(sub_1780B4(a1[4]) + 12);
              else
                v114 = ((int (__fastcall *)(_DWORD *, _DWORD, _DWORD))v121)(a1, v179, 0);
            }
            else
            {
              v114 = v7;
            }
          }
          (*(void (__fastcall **)(_DWORD *, const char **, _DWORD, _DWORD))(*a1 + 16))(
            a1,
            &v173,
            *(_DWORD *)v174,
            *(_DWORD *)&v174[4]);
          if ( *(_DWORD *)(v114 + 20) != *(_DWORD *)&v174[4] )
          {
            v115 = v176;
            v116 = sub_15C250(&v173, *(_DWORD *)&v174[4], v176);
            sub_15C34C(
              &v173,
              *(_DWORD *)(v114 + 20),
              v115,
              (*(_DWORD *)(v114 + 20) + 14) & 0xFFFFFFF8,
              v116,
              HIDWORD(v116));
          }
          v13 = 0;
          v15 = sub_26DD30(v114, &v173, *(_DWORD *)v174);
LABEL_7:
          if ( !v15 )
          {
            v171 = sub_94700(
                     (int)"dwarf2expr.c",
                     1393,
                     "%s: Assertion `%s' failed.",
                     "void dwarf_expr_context::execute_stack_op(const gdb_byte*, const gdb_byte*)",
                     "result_val != NULL");
            if ( v13 )
              sub_339E64((void *)v13);
            sub_338FFC(v171);
          }
          v177 = v13;
          v178 = v15;
          LODWORD(v9) = sub_114A88(a1 + 1, &v178, &v177);
LABEL_9:
          if ( a2 < a3 )
            continue;
LABEL_17:
          if ( a1[10] == 5 )
            LODWORD(v9) = sub_112F1C((unsigned int)a1, 8 * a1[5], 0);
          v10 = a1[8];
          break;
        case 8:
          v105 = a2 + 1;
          v104 = v176;
          v106 = 1;
          a2 += 2;
          goto LABEL_103;
        case 9:
          v109 = a2 + 1;
          a2 += 2;
          v102 = sub_15C190(v109, 1, v176);
          goto LABEL_100;
        case 10:
          v105 = a2 + 1;
          v104 = v176;
          v106 = 2;
          a2 += 3;
          goto LABEL_103;
        case 11:
          v108 = a2 + 1;
          a2 += 3;
          v102 = sub_15C190(v108, 2, v176);
          goto LABEL_100;
        case 12:
          v105 = a2 + 1;
          v104 = v176;
          v106 = 4;
          a2 += 5;
          goto LABEL_103;
        case 13:
          v107 = a2 + 1;
          a2 += 5;
          v102 = sub_15C190(v107, 4, v176);
          goto LABEL_100;
        case 14:
          v104 = v176;
          v105 = a2 + 1;
          v106 = 8;
          a2 += 9;
LABEL_103:
          v102 = sub_15C250(v105, v106, v104);
          goto LABEL_100;
        case 15:
          v101 = a2 + 1;
          a2 += 9;
          v102 = sub_15C190(v101, 8, v176);
LABEL_100:
          v103 = v102;
LABEL_101:
          v13 = 0;
          v15 = sub_26DB78(v7, HIDWORD(v102), v103, HIDWORD(v103));
          goto LABEL_7;
        case 16:
          v13 = 0;
          a2 = sub_11257C(a2 + 1, a3, &v179);
          v15 = sub_26DB78(v7, v100, v179, HIDWORD(v179));
          goto LABEL_7;
        case 17:
          v13 = 0;
          a2 = sub_112620(a2 + 1, a3, (int *)&v180);
          v15 = sub_26DB78(v7, v99, v180, HIDWORD(v180));
          goto LABEL_7;
        case 18:
          *(_DWORD *)&v174[4] = sub_112414((int)a1, 0);
          ++a2;
          v98 = sub_112528((int)a1, 0);
          v15 = *(_DWORD *)&v174[4];
          v13 = v98;
          goto LABEL_7;
        case 19:
          v97 = *(_QWORD *)(a1 + 1);
          if ( HIDWORD(v97) == (_DWORD)v97 )
            goto LABEL_194;
          ++a2;
          a1[2] = HIDWORD(v97) - 8;
          goto LABEL_9;
        case 20:
          *(_DWORD *)&v174[4] = sub_112414((int)a1, 1u);
          ++a2;
          v96 = sub_112528((int)a1, 1u);
          v15 = *(_DWORD *)&v174[4];
          v13 = v96;
          goto LABEL_7;
        case 21:
          v94 = (unsigned __int8)a2[1];
          a2 += 2;
          v180 = (unsigned __int8)v94;
          *(_DWORD *)&v174[4] = sub_112414((int)a1, v94);
          v95 = sub_112528((int)a1, v180);
          v15 = *(_DWORD *)&v174[4];
          v13 = v95;
          goto LABEL_7;
        case 22:
          v89 = a1[1];
          v90 = (a1[2] - v89) >> 3;
          if ( v90 <= 1 )
            sub_946E0("Not enough elements for DW_OP_swap.  Need 2, have %zu.", v90);
          HIDWORD(v9) = v90 - 1;
          ++a2;
          v91 = *(_DWORD *)(v89 + 8 * HIDWORD(v9));
          v92 = v89 + 8 * HIDWORD(v9);
          LODWORD(v9) = v89 + 8 * HIDWORD(v9) - 8;
          v93 = *(_BYTE *)(v92 + 4);
          *(_DWORD *)v92 = *(_DWORD *)v9;
          *(_BYTE *)(v92 + 4) = *(_BYTE *)(v9 + 4);
          *(_DWORD *)v9 = v91;
          *(_BYTE *)(v9 + 4) = v93;
          goto LABEL_9;
        case 23:
          v82 = a1[1];
          v83 = (a1[2] - v82) >> 3;
          if ( v83 <= 2 )
            sub_946E0("Not enough elements for DW_OP_rot.  Need 3, have %zu.", v83);
          HIDWORD(v9) = v83 - 1;
          ++a2;
          v84 = 8 * HIDWORD(v9) - 8;
          v85 = v82 + 8 * HIDWORD(v9);
          v86 = *(_BYTE *)(v85 + 4);
          v87 = *(_DWORD *)(v82 + v84);
          v88 = 8 * HIDWORD(v9) - 16;
          *(_DWORD *)&v174[4] = *(_DWORD *)v85;
          LODWORD(v9) = v82 + v88;
          *(_DWORD *)v85 = v87;
          *(_BYTE *)(v85 + 4) = *(_BYTE *)(v82 + v84 + 4);
          *(_DWORD *)(v82 + v84) = *(_DWORD *)(v82 + v88);
          *(_BYTE *)(v82 + v84 + 4) = *(_BYTE *)(v82 + v88 + 4);
          *(_DWORD *)(v82 + v88) = *(_DWORD *)&v174[4];
          *(_BYTE *)(v82 + v88 + 4) = v86;
          goto LABEL_9;
        case 25:
        case 31:
        case 32:
        case 35:
          LODWORD(v9) = sub_112414((int)a1, 0);
          HIDWORD(v9) = a1[1];
          v81 = a1[2];
          v15 = v9;
          if ( HIDWORD(v9) == v81 )
            goto LABEL_194;
          a1[2] = v81 - 8;
          switch ( v11 )
          {
            case 25:
              *(_DWORD *)&v174[4] = v9;
              v122 = sub_26BC70(v9);
              v123 = sub_260DBC(v122);
              v13 = sub_25F43C(*(_DWORD *)&v174[4], v123);
              v15 = *(_DWORD *)&v174[4];
              if ( !v13 )
                goto LABEL_132;
              goto LABEL_129;
            case 31:
LABEL_129:
              ++a2;
              v13 = 0;
              v15 = sub_25F2C0(v15);
              break;
            case 32:
              *(_DWORD *)&v174[4] = v9;
              ++a2;
              v126 = sub_26BC70(v9);
              v13 = 0;
              sub_112260(*(char **)(v126 + 24));
              v15 = sub_25DD80(*(_DWORD *)&v174[4]);
              break;
            case 35:
              *(_DWORD *)&v174[4] = v9;
              v13 = 0;
              v124 = sub_26BC70(v9);
              sub_112260(*(char **)(v124 + 24));
              v125 = sub_26EB1C(*(_DWORD *)&v174[4]);
              *(_DWORD *)&v174[4] = HIDWORD(v125);
              a2 = sub_11257C(a2 + 1, a3, &v183);
              v15 = sub_26DB78(
                      v7,
                      *(_DWORD *)&v174[4],
                      v125 + v183,
                      (__PAIR64__(*(unsigned int *)&v174[4], v125) + v183) >> 32);
              break;
            default:
              ++a2;
              v13 = 0;
              break;
          }
          goto LABEL_7;
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 33:
        case 34:
        case 36:
        case 37:
        case 38:
        case 39:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
          LODWORD(v9) = sub_112414((int)a1, 0);
          v73 = *(_QWORD *)(a1 + 1);
          v74 = v9;
          *(_DWORD *)v174 = v9;
          if ( (_DWORD)v73 == HIDWORD(v73) )
            goto LABEL_194;
          a1[2] = HIDWORD(v73) - 8;
          LODWORD(v9) = sub_112414((int)a1, 0);
          v75 = *(_QWORD *)(a1 + 1);
          *(_DWORD *)&v174[4] = v9;
          if ( (_DWORD)v75 == HIDWORD(v75) )
            goto LABEL_194;
          a1[2] = HIDWORD(v75) - 8;
          v76 = sub_26BC70(v9);
          v77 = sub_26BC70(v74);
          v78 = *(char **)(v76 + 24);
          v79 = *(char **)(v77 + 24);
          HIDWORD(v80) = *(_DWORD *)(v76 + 20);
          LODWORD(v80) = *(_DWORD *)(v77 + 20);
          if ( *v78 != *v79 )
            goto LABEL_187;
          v13 = ((unsigned __int8)v78[1] ^ (unsigned __int8)v79[1]) & 1;
          if ( HIDWORD(v80) != (_DWORD)v80 )
            v13 = 1;
          if ( v13 )
            goto LABEL_187;
          switch ( v11 )
          {
            case 26:
              a2 = v12;
              v133 = sub_26BC70(*(_DWORD *)&v174[4]);
              sub_112260(*(char **)(v133 + 24));
              v134 = *(_DWORD *)v174;
              v135 = sub_26BC70(*(_DWORD *)v174);
              sub_112260(*(char **)(v135 + 24));
              v15 = sub_25E4EC(*(_DWORD *)&v174[4], v134, 11);
              goto LABEL_7;
            case 27:
              a2 = v12;
              v15 = sub_25E4EC(*(_DWORD *)&v174[4], *(_DWORD *)v174, 4);
              goto LABEL_7;
            case 28:
              a2 = v12;
              v15 = sub_25E4EC(*(_DWORD *)&v174[4], *(_DWORD *)v174, 2);
              goto LABEL_7;
            case 29:
              v136 = *(_DWORD *)&v174[4];
              if ( v7 == (unsigned int)sub_26BC70(*(_DWORD *)&v174[4]) )
              {
                a2 = v12;
                v167 = sub_112288(a1[4], *(_DWORD *)(v7 + 20));
                v168 = sub_2647C8(v167, *(_DWORD *)&v174[4]);
                v169 = sub_2647C8(v167, *(_DWORD *)v174);
                v170 = sub_25E4EC(v168, v169, 6);
                v15 = sub_2647C8(v7, v170);
              }
              else
              {
                v137 = v136;
                a2 = v12;
                v15 = sub_25E4EC(v137, *(_DWORD *)v174, 6);
              }
              goto LABEL_7;
            case 30:
              a2 = v12;
              v15 = sub_25E4EC(*(_DWORD *)&v174[4], *(_DWORD *)v174, 3);
              goto LABEL_7;
            case 33:
              a2 = v12;
              v138 = sub_26BC70(*(_DWORD *)&v174[4]);
              sub_112260(*(char **)(v138 + 24));
              v139 = *(_DWORD *)v174;
              v140 = sub_26BC70(*(_DWORD *)v174);
              sub_112260(*(char **)(v140 + 24));
              v15 = sub_25E4EC(*(_DWORD *)&v174[4], v139, 12);
              goto LABEL_7;
            case 34:
              a2 = v12;
              v15 = sub_25E4EC(*(_DWORD *)&v174[4], *(_DWORD *)v174, 1);
              goto LABEL_7;
            case 36:
              a2 = v12;
              v141 = sub_26BC70(*(_DWORD *)&v174[4]);
              sub_112260(*(char **)(v141 + 24));
              v142 = *(_DWORD *)v174;
              v143 = sub_26BC70(*(_DWORD *)v174);
              sub_112260(*(char **)(v143 + 24));
              v15 = sub_25E4EC(*(_DWORD *)&v174[4], v142, 7);
              goto LABEL_7;
            case 37:
              v144 = *(_DWORD *)&v174[4];
              v145 = sub_26BC70(*(_DWORD *)&v174[4]);
              sub_112260(*(char **)(v145 + 24));
              v146 = sub_26BC70(*(_DWORD *)v174);
              sub_112260(*(char **)(v146 + 24));
              if ( (*(_BYTE *)(*(_DWORD *)(sub_26BC70(v144) + 24) + 1) & 1) == 0 )
              {
                v162 = *(_DWORD *)&v174[4];
                v163 = a1[4];
                v164 = sub_26BC70(*(_DWORD *)&v174[4]);
                v165 = sub_112288(v163, *(_DWORD *)(v164 + 20));
                *(_DWORD *)&v174[4] = sub_2647C8(v165, v162);
              }
              goto LABEL_158;
            case 38:
              v151 = *(_DWORD *)&v174[4];
              v152 = sub_26BC70(*(_DWORD *)&v174[4]);
              sub_112260(*(char **)(v152 + 24));
              v153 = sub_26BC70(*(_DWORD *)v174);
              sub_112260(*(char **)(v153 + 24));
              if ( (*(_BYTE *)(*(_DWORD *)(sub_26BC70(v151) + 24) + 1) & 1) != 0 )
              {
                v154 = a1[4];
                v155 = sub_26BC70(*(_DWORD *)&v174[4]);
                switch ( *(_DWORD *)(v155 + 20) )
                {
                  case 1:
                    v166 = *(_DWORD *)(sub_1780B4(v154) + 100);
                    break;
                  case 2:
                    v166 = *(_DWORD *)(sub_1780B4(v154) + 108);
                    break;
                  case 4:
                    v166 = *(_DWORD *)(sub_1780B4(v154) + 116);
                    break;
                  case 8:
                    v166 = *(_DWORD *)(sub_1780B4(v154) + 124);
                    break;
                  default:
                    sub_946E0("no signed variant found for type, while evaluating DWARF expression", HIDWORD(v155));
                }
                *(_DWORD *)&v174[4] = sub_2647C8(v166, *(_DWORD *)&v174[4]);
              }
LABEL_158:
              v147 = *(_DWORD *)v174;
              *(_DWORD *)&v174[4] = sub_25E4EC(*(_DWORD *)&v174[4], *(_DWORD *)v174, 8);
              v148 = sub_26BC70(*(_DWORD *)&v174[4]);
              v149 = sub_26BC70(v147);
              v15 = *(_DWORD *)&v174[4];
              if ( v148 == v149 )
              {
LABEL_132:
                a2 = v12;
              }
              else
              {
                a2 = v12;
                v150 = sub_26BC70(v147);
                v15 = sub_2647C8(v150, *(_DWORD *)&v174[4]);
              }
              goto LABEL_7;
            case 39:
              a2 = v12;
              v159 = sub_26BC70(*(_DWORD *)&v174[4]);
              sub_112260(*(char **)(v159 + 24));
              v160 = *(_DWORD *)v174;
              v161 = sub_26BC70(*(_DWORD *)v174);
              sub_112260(*(char **)(v161 + 24));
              v15 = sub_25E4EC(*(_DWORD *)&v174[4], v160, 13);
              goto LABEL_7;
            case 41:
              LODWORD(v157) = sub_25E07C(*(_DWORD *)&v174[4], *(_DWORD *)v174);
              goto LABEL_164;
            case 42:
              v158 = sub_25F43C(*(_DWORD *)&v174[4], *(_DWORD *)v174);
              goto LABEL_166;
            case 43:
              v156 = *(_QWORD *)v174;
              goto LABEL_163;
            case 44:
              v158 = sub_25F43C(*(_DWORD *)v174, *(_DWORD *)&v174[4]);
              goto LABEL_166;
            case 45:
              v156 = __PAIR64__(*(unsigned int *)v174, *(unsigned int *)&v174[4]);
LABEL_163:
              v157 = sub_25F43C(v156, HIDWORD(v156));
LABEL_164:
              a2 = v12;
              v15 = sub_26DB78(v7, HIDWORD(v157), v157, (int)v157 >> 31);
              break;
            case 46:
              LODWORD(v158) = sub_25E07C(*(_DWORD *)&v174[4], *(_DWORD *)v174);
LABEL_166:
              a2 = v12;
              v15 = sub_26DB78(v7, HIDWORD(v158), v158 == 0, 0);
              break;
            default:
              sub_94700((int)"dwarf2expr.c", 1151, "Can't be reached.");
              JUMPOUT(0x114908);
          }
          goto LABEL_7;
        case 40:
          v69 = a2 + 1;
          a2 += 3;
          v180 = sub_15C190(v69, 2, v176);
          v70 = sub_112414((int)a1, 0);
          v71 = sub_26BC70(v70);
          sub_112260(*(char **)(v71 + 24));
          v9 = sub_26EB1C(v70);
          if ( v9 )
            a2 += v180;
          v72 = *(_QWORD *)(a1 + 1);
          if ( (_DWORD)v72 == HIDWORD(v72) )
            goto LABEL_194;
          a1[2] = HIDWORD(v72) - 8;
          goto LABEL_9;
        case 47:
          LODWORD(v9) = sub_15C190(a2 + 1, 2, v176);
          a2 += v9 + 3;
          goto LABEL_9;
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
          ++a2;
          v13 = 0;
          v15 = sub_26DB78(v7, HIDWORD(v9), v11 - 48, (v11 - 48) >> 31);
          goto LABEL_7;
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
          sub_112778((unsigned __int8 *)++a2, (unsigned __int8 *)a3, "DW_OP_reg");
          v13 = 0;
          v15 = sub_26DB78(v7, v68, v11 - 80, (v11 - 80) >> 31);
          a1[10] = 1;
          goto LABEL_7;
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
        case 123:
        case 124:
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 131:
        case 132:
        case 133:
        case 134:
        case 135:
        case 136:
        case 137:
        case 138:
        case 139:
        case 140:
        case 141:
        case 142:
        case 143:
          v13 = 0;
          v67 = sub_112620(a2 + 1, a3, (int *)&v180);
          v54 = *a1;
          a2 = v67;
          v55 = v11 - 112;
          v56 = a1;
          goto LABEL_63;
        case 144:
          v13 = 0;
          a2 = sub_11257C(a2 + 1, a3, &v183);
          sub_112778((unsigned __int8 *)a2, (unsigned __int8 *)a3, "DW_OP_regx");
          v15 = sub_26DB78(v7, v66, v183, HIDWORD(v183));
          a1[10] = 1;
          goto LABEL_7;
        case 145:
          a2 = sub_112620(a2 + 1, a3, (int *)&v180);
          v57 = a1[1];
          v58 = a1[2];
          v59 = *(void (__fastcall **)(_DWORD *, __int64 *, __int64 *))(*a1 + 20);
          v60 = a1[3];
          a1[1] = 0;
          a1[2] = 0;
          a1[3] = 0;
          v59(a1, &v182, &v183);
          ((void (__fastcall *)(_DWORD *, _DWORD, _DWORD))loc_114908)(a1, v182, v183);
          v61 = a1[10];
          if ( v61 )
          {
            if ( v61 != 1 )
              sub_946E0("Not implemented: computing frame base using explicit value operator");
            *(_DWORD *)&v174[4] = *(_DWORD *)(*a1 + 8);
            v62 = sub_112414((int)a1, 0);
            v63 = sub_26EB1C(v62);
            v64 = (*(int (__fastcall **)(_DWORD *, int))&v174[4])(a1, v63);
          }
          else
          {
            v64 = sub_11244C((int)a1, 0);
          }
          *(_QWORD *)&v174[4] = (unsigned int)v64;
          v15 = sub_26DB78(v7, 0, v64 + v180, ((unsigned __int64)(unsigned int)v64 + v180) >> 32);
          v65 = (void *)a1[1];
          a1[2] = v58;
          a1[3] = v60;
          a1[1] = v57;
          if ( v65 )
          {
            *(_DWORD *)&v174[4] = v15;
            sub_339E64(v65);
            v15 = *(_DWORD *)&v174[4];
          }
          v13 = 1;
          a1[10] = 0;
          goto LABEL_7;
        case 146:
          v13 = 0;
          v52 = sub_11257C(a2 + 1, a3, &v183);
          v53 = sub_112620(v52, a3, (int *)&v180);
          v54 = *a1;
          a2 = v53;
          v55 = v183;
          v56 = a1;
LABEL_63:
          v16 = (*(int (__fastcall **)(_DWORD *, int))(v54 + 8))(v56, v55);
          v18 = v180;
          goto LABEL_12;
        case 147:
          a2 = sub_11257C(a2 + 1, a3, &v181);
          LODWORD(v9) = sub_112F1C(__SPAIR64__(v181, (unsigned int)a1), 8 * v181, 0);
          goto LABEL_49;
        case 150:
          ++a2;
          goto LABEL_9;
        case 151:
          ++a2;
          v13 = 0;
          LODWORD(v14) = (*(int (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
          goto LABEL_6;
        case 152:
          v49 = a2 + 1;
          v48 = v176;
          v50 = 2;
          a2 += 3;
          goto LABEL_57;
        case 153:
          v48 = v176;
          v49 = a2 + 1;
          v50 = 4;
          a2 += 5;
LABEL_57:
          v51 = sub_15C250(v49, v50, v48);
          LODWORD(v9) = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 36))(a1, v51);
          goto LABEL_9;
        case 155:
        case 224:
          v46 = sub_112414((int)a1, 0);
          LODWORD(v9) = sub_26EB1C(v46);
          v47 = *(_QWORD *)(a1 + 1);
          HIDWORD(v9) = v9;
          if ( (_DWORD)v47 == HIDWORD(v47) )
            goto LABEL_194;
          LODWORD(v47) = *a1;
          a1[2] = HIDWORD(v47) - 8;
          ++a2;
          v13 = 0;
          v14 = ((__int64 (__fastcall *)(_DWORD *, _DWORD))*(_DWORD *)(v47 + 32))(a1, v9);
LABEL_6:
          v15 = sub_26DB78(v7, HIDWORD(v14), v14, 0);
          goto LABEL_7;
        case 156:
          ++a2;
          v13 = 1;
          v45 = ((__int64 (__fastcall *)(_DWORD *))*(_DWORD *)(*a1 + 24))(a1);
          v15 = sub_26DB78(v7, HIDWORD(v45), v45, 0);
          goto LABEL_7;
        case 157:
          v42 = sub_11257C(a2 + 1, a3, &v182);
          a2 = sub_11257C(v42, a3, &v183);
          LODWORD(v43) = a1;
          LODWORD(v9) = sub_112F1C(v43, v182, v183);
LABEL_49:
          if ( (unsigned int)(a1[10] - 3) <= 1 )
            goto LABEL_52;
          v44 = *(_QWORD *)(a1 + 1);
          if ( (_DWORD)v44 == HIDWORD(v44) )
            goto LABEL_194;
          a1[2] = HIDWORD(v44) - 8;
LABEL_52:
          a1[10] = 0;
          goto LABEL_9;
        case 158:
          v40 = sub_11257C(a2 + 1, a3, &v183);
          v41 = v183;
          a2 = &v40[v183];
          if ( &v40[(unsigned int)v183] > a3 )
            sub_946E0("DW_OP_implicit_value: too few bytes available.");
          a1[14] = v40;
          a1[10] = 3;
          *((_QWORD *)a1 + 6) = v41;
          LODWORD(v9) = sub_112778((unsigned __int8 *)a2, (unsigned __int8 *)a3, "DW_OP_implicit_value");
          goto LABEL_9;
        case 159:
          a1[10] = 2;
          LODWORD(v9) = sub_112778((unsigned __int8 *)++a2, (unsigned __int8 *)a3, "DW_OP_stack_value");
          goto LABEL_9;
        case 160:
        case 242:
          v36 = a1[6];
          if ( v36 == -1 )
            sub_946E0("DWARF-2 expression error: DW_OP_implicit_pointer is not allowed in frame context");
          v37 = sub_15C250(a2 + 1, v36, v176);
          v38 = a1[6];
          *((_QWORD *)a1 + 6) = v37;
          v13 = 0;
          a2 = sub_112620(&v12[v38], a3, (int *)&v183);
          *(_DWORD *)&v174[4] = sub_26DB78(v7, v39, v183, HIDWORD(v183));
          a1[10] = 5;
          sub_112778((unsigned __int8 *)a2, (unsigned __int8 *)a3, v173);
          v15 = *(_DWORD *)&v174[4];
          goto LABEL_7;
        case 163:
        case 243:
          v33 = (unsigned __int8 *)sub_11257C(a2 + 1, a3, &v183);
          v34 = v33;
          a2 = (char *)&v33[v183];
          if ( &v33[(unsigned int)v183] > (unsigned __int8 *)a3 )
            sub_946E0("DW_OP_entry_value: too few bytes available.");
          v35 = sub_1127BC(v33, (unsigned int)&v33[v183]);
          if ( v35 == -1 )
          {
            v130 = sub_11298C(v34, (unsigned int)a2, &v182);
            if ( v130 == -1 )
              sub_946E0(
                "DWARF-2 expression error: DW_OP_entry_value is supported only for single DW_OP_reg* or for DW_OP_breg*(0)+DW_OP_deref*");
            v131 = v182;
            if ( (_DWORD)v182 == -1 )
              v131 = a1[5];
            v132 = *(int (__fastcall **)(_DWORD *, _DWORD, int, int))(*a1 + 44);
            a2 = (char *)&v34[v183];
            if ( (_DWORD)v182 == -1 )
              LODWORD(v182) = v131;
            LODWORD(v9) = v132(a1, 0, v130, v131);
          }
          else
          {
            LODWORD(v9) = (*(int (__fastcall **)(_DWORD *, _DWORD, int, int))(*a1 + 44))(a1, 0, v35, -1);
          }
          goto LABEL_9;
        case 164:
        case 244:
          v29 = sub_11257C(a2 + 1, a3, &v179);
          v30 = v29 + 1;
          v31 = *(int (__fastcall **)(int))(*a1 + 40);
          a2 = &v29[(unsigned __int8)*v29 + 1];
          if ( v31 == v175 )
            v32 = *(_DWORD *)(sub_1780B4(a1[4]) + 12);
          else
            v32 = ((int (__fastcall *)(_DWORD *, _DWORD))v31)(a1, v179);
          v13 = 0;
          v15 = sub_26DCD8(v32, v30);
          goto LABEL_7;
        case 165:
        case 245:
          v26 = sub_11257C(a2 + 1, a3, &v183);
          a2 = sub_11257C(v26, a3, &v179);
          v27 = *(int (__fastcall **)(int))(*a1 + 40);
          if ( v27 == v175 )
            v28 = *(_DWORD *)(sub_1780B4(a1[4]) + 12);
          else
            v28 = ((int (__fastcall *)(_DWORD *, _DWORD, _DWORD))v27)(a1, v179, 0);
          v13 = 0;
          v15 = (*(int (__fastcall **)(_DWORD *, int, _DWORD))(*a1 + 12))(a1, v28, v183);
          goto LABEL_7;
        case 168:
        case 169:
        case 247:
        case 249:
          a2 = sub_11257C(a2 + 1, a3, &v179);
          if ( (_DWORD)v179 )
          {
            v127 = *(int (__fastcall **)(int))(*a1 + 40);
            if ( v127 == v175 )
              v22 = *(_DWORD *)(sub_1780B4(a1[4]) + 12);
            else
              v22 = v127((int)a1);
          }
          else
          {
            v22 = v7;
          }
          LODWORD(v9) = sub_112414((int)a1, 0);
          HIDWORD(v9) = a1[1];
          v23 = a1[2];
          if ( HIDWORD(v9) == v23 )
            goto LABEL_194;
          v24 = v11 == 247;
          if ( v11 != 247 )
            v24 = v11 == 168;
          v25 = v23 - 8;
          v13 = v24;
          a1[2] = v25;
          if ( v24 )
          {
            v13 = 0;
            v15 = sub_2647C8(v22, v9);
          }
          else
          {
            *(_DWORD *)&v174[4] = v9;
            v117 = sub_26BC70(v9);
            v15 = *(_DWORD *)&v174[4];
            if ( v22 != v117 )
            {
              v118 = *(_DWORD *)(v22 + 20);
              v119 = sub_26BC70(*(_DWORD *)&v174[4]);
              if ( v118 != *(_DWORD *)(v119 + 20) )
                sub_946E0("DW_OP_reinterpret has wrong size", HIDWORD(v119));
              v120 = sub_26E738(*(_DWORD *)&v174[4]);
              v15 = sub_26DCD8(v22, v120);
            }
          }
          goto LABEL_7;
        case 240:
          if ( a3 != v12 )
            sub_946E0("DWARF-2 expression error: DW_OP_GNU_uninit must always be the very last op.");
          a1[15] = 0;
          goto LABEL_17;
        case 250:
          v19 = a2 + 1;
          a2 += 5;
          v20 = sub_15C250(v19, 4, v176);
          LODWORD(v9) = (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 44))(a1, 2, v20, -1);
          goto LABEL_9;
        case 251:
          v13 = 0;
          a2 = sub_11257C(a2 + 1, a3, &v179);
          HIDWORD(v18) = 0;
          v16 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 48))(a1, v179);
          LODWORD(v18) = a1[7];
LABEL_12:
          v15 = sub_26DB78(v7, v17, v18 + v16, (v18 + (unsigned __int64)(unsigned int)v16) >> 32);
          goto LABEL_7;
        case 252:
          v13 = 0;
          a2 = sub_11257C(a2 + 1, a3, &v179);
          v14 = ((__int64 (__fastcall *)(_DWORD *, _DWORD))*(_DWORD *)(*a1 + 48))(a1, v179);
          goto LABEL_6;
        default:
          sub_946E0("Unhandled dwarf expression opcode 0x%x", v11);
      }
      break;
    }
  }
  v21 = v10 - 1;
  a1[8] = v21;
  if ( v21 < 0 )
  {
    v80 = sub_94700(
            (int)"dwarf2expr.c",
            1406,
            "%s: Assertion `%s' failed.",
            "void dwarf_expr_context::execute_stack_op(const gdb_byte*, const gdb_byte*)",
            "this->recursion_depth >= 0");
LABEL_187:
    sub_946E0("Incompatible types on DWARF stack", HIDWORD(v80));
  }
  return v9;
}
