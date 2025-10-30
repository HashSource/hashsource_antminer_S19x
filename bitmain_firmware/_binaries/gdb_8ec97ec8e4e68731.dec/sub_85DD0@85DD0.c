int sub_85DD0()
{
  int v0; // r3
  char **v1; // r4
  int v2; // r1
  int v3; // r10
  unsigned int v4; // r6
  int v5; // r5
  int v6; // r3
  int v7; // r5
  char *v8; // r6
  int v9; // r6
  int v10; // r5
  int v11; // r7
  int v12; // r12
  unsigned __int8 **v13; // r12
  __int64 v14; // r0
  unsigned __int8 *v15; // r2
  unsigned __int8 *v16; // r3
  __int64 v17; // r0
  int v18; // r1
  int v19; // r7
  char **v20; // r6
  unsigned __int8 **v21; // r5
  int v22; // r7
  unsigned __int8 *v23; // r1
  unsigned __int8 *v24; // r2
  unsigned __int8 *v25; // r3
  int v26; // r5
  unsigned __int8 *v27; // r1
  int v28; // r3
  unsigned int v29; // r5
  char *v30; // r5
  int v31; // r3
  int v32; // r6
  unsigned int v33; // r2
  int v34; // r3
  size_t v35; // r7
  int v36; // r4
  size_t v37; // r6
  char *v38; // r5
  char *v39; // r8
  int v40; // r5
  _BOOL4 v41; // r6
  __int16 *v42; // r8
  int v43; // t1
  _WORD *v45; // r6
  int v46; // r5
  int v47; // t1
  int v48; // r12
  int v49; // r8
  _DWORD *v50; // r4
  unsigned int v51; // r3
  unsigned int v52; // r7
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int *v56; // r12
  int *v57; // r12
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r8
  int v62; // r1
  char *v63; // r4
  int v64; // r0
  int v65; // r1
  int v66; // r2
  int v67; // r3
  unsigned __int8 *v68; // r1
  int v69; // r1
  int v70; // r2
  int v71; // r3
  int v72; // r1
  int v73; // r2
  int v74; // r3
  unsigned __int8 *v75; // r7
  int v76; // r6
  int v77; // r6
  int v78; // r0
  int v79; // r6
  __int64 v80; // r0
  int *v81; // r3
  unsigned __int8 *v82; // r1
  int v83; // r1
  unsigned __int8 *v84; // r1
  unsigned __int8 *v85; // r2
  int v86; // r6
  int v87; // r7
  void *v88; // r0
  int v89; // r7
  int v90; // r6
  void *v91; // r0
  unsigned __int8 *v92; // r0
  unsigned __int8 **v93; // r2
  unsigned __int8 *v94; // r1
  unsigned __int8 **v95; // r6
  unsigned __int8 *v96; // r0
  unsigned __int8 *v97; // r2
  unsigned __int8 *v98; // r0
  unsigned __int8 *v99; // r1
  unsigned __int8 *v100; // r2
  int v101; // r6
  int v102; // r0
  __int64 v103; // r0
  int v104; // r2
  int v105; // r1
  int v106; // r8
  _DWORD *v107; // r4
  unsigned int v108; // r3
  unsigned int v109; // lr
  int v110; // r1
  int v111; // r2
  int v112; // r3
  int *v113; // r12
  unsigned int *v114; // lr
  int v115; // r1
  int v116; // r2
  int v117; // r3
  unsigned int v118; // r2
  unsigned int v119; // r3
  int *v120; // lr
  int v121; // r1
  int v122; // r1
  int v123; // r2
  int v124; // r3
  int v125; // r3
  int v126; // r0
  int v127; // r0
  const char *v128; // r4
  const char *v129; // r5
  int v130; // r5
  int v131; // r0
  int v132; // r3
  const char *v133; // r0
  size_t v134; // r0
  int v135; // r3
  unsigned int v136; // r2
  int v137; // r3
  __int64 v138; // r0
  const char *v139; // r0
  const char *v140; // r0
  unsigned __int8 **v141; // [sp+8h] [bp-152Ch]
  char **v142; // [sp+14h] [bp-1520h]
  __int16 *ptr; // [sp+18h] [bp-151Ch]
  unsigned int v144; // [sp+1Ch] [bp-1518h]
  char *src; // [sp+20h] [bp-1514h]
  unsigned int v146; // [sp+28h] [bp-150Ch]
  int v147; // [sp+28h] [bp-150Ch]
  __int16 v148; // [sp+2Ch] [bp-1508h]
  void *v149; // [sp+2Ch] [bp-1508h]
  void *v150; // [sp+34h] [bp-1500h]
  char *v151; // [sp+34h] [bp-1500h]
  unsigned int v152; // [sp+38h] [bp-14FCh]
  size_t v153; // [sp+3Ch] [bp-14F8h]
  int v154; // [sp+40h] [bp-14F4h] BYREF
  int v155; // [sp+44h] [bp-14F0h]
  void *v156; // [sp+4Ch] [bp-14E8h]
  unsigned int v157; // [sp+50h] [bp-14E4h]
  int v158; // [sp+54h] [bp-14E0h] BYREF
  int v159; // [sp+58h] [bp-14DCh]
  _DWORD v160[3]; // [sp+5Ch] [bp-14D8h] BYREF
  __int64 v161; // [sp+68h] [bp-14CCh]
  unsigned __int8 *v162; // [sp+70h] [bp-14C4h]
  unsigned __int8 *v163; // [sp+74h] [bp-14C0h]
  unsigned __int8 *v164; // [sp+78h] [bp-14BCh]
  unsigned __int8 *v165; // [sp+7Ch] [bp-14B8h]
  int v166; // [sp+88h] [bp-14ACh]
  int v167; // [sp+8Ch] [bp-14A8h]
  int v168; // [sp+90h] [bp-14A4h]
  int v169; // [sp+94h] [bp-14A0h]
  int v170; // [sp+98h] [bp-149Ch]
  int v171; // [sp+9Ch] [bp-1498h]
  int v172; // [sp+A0h] [bp-1494h]
  int v173; // [sp+A4h] [bp-1490h]
  int v174; // [sp+A8h] [bp-148Ch]
  int v175; // [sp+ACh] [bp-1488h]
  int v176; // [sp+B0h] [bp-1484h]
  int v177; // [sp+B4h] [bp-1480h]
  int v178; // [sp+B8h] [bp-147Ch]
  int v179; // [sp+BCh] [bp-1478h]
  int v180; // [sp+C0h] [bp-1474h] BYREF
  int v181; // [sp+C4h] [bp-1470h]
  int v182; // [sp+C8h] [bp-146Ch]
  int v183; // [sp+CCh] [bp-1468h]
  int v184; // [sp+D0h] [bp-1464h]
  int v185; // [sp+D4h] [bp-1460h]
  int v186; // [sp+D8h] [bp-145Ch]
  int v187; // [sp+DCh] [bp-1458h]
  _WORD v188[200]; // [sp+E0h] [bp-1454h] BYREF
  _BYTE v189[704]; // [sp+270h] [bp-12C4h] BYREF

  v0 = dword_4750CC;
  if ( dword_4750CC )
  {
    sub_1C4D40(stderr, "Starting parse\n");
    v0 = dword_4750CC;
  }
  LOWORD(v1) = -21845;
  v2 = -2;
  v188[0] = 0;
  v3 = 0;
  dword_475124 = 0;
  v141 = (unsigned __int8 **)v189;
  v142 = (char **)v188;
  ptr = v188;
  dword_475128 = -2;
  src = v189;
  v144 = 200;
  if ( v0 )
    goto LABEL_35;
LABEL_4:
  if ( v3 == 40 )
  {
LABEL_36:
    v40 = 0;
    v41 = ptr != v188;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v1 = (char **)word_3695D8;
    v4 = word_3695D8[v3];
    if ( v4 == -42 )
    {
      v1 = &off_3692EC;
LABEL_13:
      v3 = *((unsigned __int8 *)v1 + v3 + 2320);
      if ( !v3 )
      {
        ++dword_475124;
        sub_85D8C("syntax error");
      }
      v9 = dword_4750CC;
      v10 = *((unsigned __int8 *)v1 + v3 + 2444);
      v11 = v10;
      v12 = 6 * (1 - v10);
      goto LABEL_15;
    }
    v5 = dword_475128;
    v6 = dword_4750CC;
    if ( dword_475128 != -2 )
      goto LABEL_8;
    if ( dword_4750CC )
      sub_1C4D40(stderr, "Reading a token: ");
    if ( dword_47512C )
    {
      v48 = dword_475130;
      if ( dword_475130 )
      {
        v1 = *(char ***)dword_475130;
        if ( *(_DWORD *)dword_475130 )
        {
          v69 = *(_DWORD *)(dword_475130 + 12);
          v70 = *(_DWORD *)(dword_475130 + 16);
          v71 = *(_DWORD *)(dword_475130 + 20);
          v1 = (char **)((char *)v1 - 1);
          v180 = *(_DWORD *)(dword_475130 + 8);
          v181 = v69;
          v182 = v70;
          v183 = v71;
          v72 = *(_DWORD *)(dword_475130 + 28);
          v73 = *(_DWORD *)(dword_475130 + 32);
          v74 = *(_DWORD *)(dword_475130 + 36);
          v184 = *(_DWORD *)(dword_475130 + 24);
          v185 = v72;
          v186 = v73;
          v187 = v74;
          v5 = *(_DWORD *)(dword_475130 + 8);
          *(_DWORD *)dword_475130 = v1;
          memmove((void *)(v48 + 8), (const void *)(v48 + 40), 32 * (_DWORD)v1);
          dword_4750D8 = v182;
          dword_4750DC = v183;
          dword_4750E0 = v184;
          dword_4750E4 = v185;
          dword_4750E8 = v186;
          *(_DWORD *)algn_4750EC = v187;
LABEL_69:
          v6 = dword_4750CC;
          dword_475128 = v5;
LABEL_8:
          if ( v5 <= 0 )
          {
            v7 = 0;
            if ( !v6 )
              LOWORD(v1) = -27924;
            dword_475128 = 0;
            if ( v6 )
            {
              v1 = &off_3692EC;
              sub_1C4D40(stderr, "Now at end of input.\n");
            }
            else
            {
              HIWORD(v1) = 54;
              v7 = 0;
            }
            goto LABEL_11;
          }
          if ( v5 >= 300 )
          {
            v1 = &off_3692EC;
            v7 = 2;
            v4 += 2;
            if ( v6 )
              goto LABEL_79;
            goto LABEL_11;
          }
LABEL_77:
          v1 = &off_3692EC;
          v7 = *((unsigned __int8 *)&off_3692EC + v5 + 1116);
          goto LABEL_78;
        }
      }
    }
    dword_47512C = 0;
    v5 = sub_853EC(dword_475134);
    if ( v5 != 263 )
      goto LABEL_69;
    v149 = (void *)dword_4750D8;
    v146 = dword_4750DC;
    v166 = dword_4750D8;
    v167 = dword_4750DC;
    v168 = dword_4750E0;
    v169 = dword_4750E4;
    v170 = dword_4750E8;
    v171 = *(_DWORD *)algn_4750EC;
    v49 = sub_853EC(dword_475134);
    v174 = dword_4750D8;
    v175 = dword_4750DC;
    v176 = dword_4750E0;
    v177 = dword_4750E4;
    v178 = dword_4750E8;
    v179 = *(_DWORD *)algn_4750EC;
    if ( v49 == 46 )
    {
      v106 = sub_853EC(dword_475134);
      v182 = dword_4750D8;
      v183 = dword_4750DC;
      v184 = dword_4750E0;
      v185 = dword_4750E4;
      v150 = (void *)dword_4750D8;
      v186 = dword_4750E8;
      v187 = *(_DWORD *)algn_4750EC;
      v152 = dword_4750DC;
      if ( v106 == 263 )
      {
        v166 = (int)v149;
        v167 = v146;
        v128 = (const char *)sub_1C3E58(v149, v146);
        if ( !strcmp(v128, "unsafe") )
        {
          dword_47512C = 1;
          v156 = v150;
          v157 = v152;
          v129 = (const char *)sub_1C3E58(v150, v152);
          if ( strcmp(v129, "Sizeof") )
            sub_946E0("Unknown function in `unsafe' package: %s", v129);
          dword_4750D8 = (int)v150;
          v5 = 273;
          dword_475128 = 273;
          dword_4750DC = v152;
          v6 = dword_4750CC;
          goto LABEL_77;
        }
        sub_21D6B0(&v158, v128, dword_487CD0, 2, v160);
        if ( v158
          && *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v158 + 32) >> 3)) == 8
          && **(_BYTE **)(*(_DWORD *)(v158 + 24) + 24) == 26 )
        {
          dword_47512C = 1;
          sub_84C5C(&v154, v149, v146, v150, v152);
          v130 = dword_487CD0;
          dword_4750D8 = v154;
          dword_4750DC = v155;
          v131 = sub_1C3E58(v154, v155);
          sub_21D6B0(&v158, v131, v130, 1, v160);
          if ( v158 )
          {
            v132 = v160[0];
            if ( v160[0] )
              v132 = 1;
            dword_4750E0 = v158;
            dword_4750E4 = v159;
            dword_4750E8 = v132;
          }
          v5 = v106;
          dword_475128 = 263;
          v6 = dword_4750CC;
          goto LABEL_77;
        }
      }
      v107 = (_DWORD *)dword_475130;
      if ( !dword_475130
        || (v108 = *(_DWORD *)(dword_475130 + 4), v109 = *(_DWORD *)dword_475130, v108 == *(_DWORD *)dword_475130) )
      {
        dword_475130 = sub_99EB8(dword_475130, 1, 8, 32);
        v107 = (_DWORD *)dword_475130;
        v108 = *(_DWORD *)(dword_475130 + 4);
        v109 = *(_DWORD *)dword_475130;
      }
      if ( v108 <= v109 )
        goto LABEL_209;
      v172 = 46;
      v110 = v173;
      v111 = v174;
      v112 = v175;
      v113 = &v107[8 * v109 + 2];
      *v107 = v109 + 1;
      v114 = (unsigned int *)dword_475130;
      *v113 = 46;
      v113[1] = v110;
      v113[2] = v111;
      v113[3] = v112;
      v113 += 4;
      v115 = v177;
      v116 = v178;
      v117 = v179;
      *v113 = v176;
      v113[1] = v115;
      v113[2] = v116;
      v113[3] = v117;
      if ( !v114 || (v118 = v114[1], v119 = *v114, v118 == *v114) )
      {
        dword_475130 = sub_99EB8(v114, 1, 8, 32);
        v114 = (unsigned int *)dword_475130;
        v118 = *(_DWORD *)(dword_475130 + 4);
        v119 = *(_DWORD *)dword_475130;
      }
      if ( v118 <= v119 )
        goto LABEL_210;
      *v114 = v119 + 1;
      v180 = v106;
      v120 = (int *)&v114[8 * v119 + 2];
      v182 = (int)v150;
      v183 = v152;
      v121 = v181;
      *v120 = v106;
      v120[1] = v121;
      v120[2] = (int)v150;
      v120[3] = v152;
      v120 += 4;
      v122 = v185;
      v123 = v186;
      v124 = v187;
      *v120 = v184;
      v120[1] = v122;
      v120[2] = v123;
      v120[3] = v124;
    }
    else
    {
      v50 = (_DWORD *)dword_475130;
      if ( !dword_475130
        || (v51 = *(_DWORD *)(dword_475130 + 4), v52 = *(_DWORD *)dword_475130, v51 == *(_DWORD *)dword_475130) )
      {
        dword_475130 = sub_99EB8(dword_475130, 1, 8, 32);
        v50 = (_DWORD *)dword_475130;
        v51 = *(_DWORD *)(dword_475130 + 4);
        v52 = *(_DWORD *)dword_475130;
      }
      if ( v51 <= v52 )
      {
        sub_94700(
          "go-exp.y",
          1554,
          "%s: Assertion `%s' failed.",
          "token_and_value* VEC_token_and_value_quick_push(VEC_token_and_value*, const token_and_value*, const char*, unsigned int)",
          "quick_push");
LABEL_209:
        sub_94700(
          "go-exp.y",
          1549,
          "%s: Assertion `%s' failed.",
          "token_and_value* VEC_token_and_value_quick_push(VEC_token_and_value*, const token_and_value*, const char*, unsigned int)",
          "quick_push");
LABEL_210:
        sub_94700(
          "go-exp.y",
          1550,
          "%s: Assertion `%s' failed.",
          "token_and_value* VEC_token_and_value_quick_push(VEC_token_and_value*, const token_and_value*, const char*, unsigned int)",
          "quick_push");
LABEL_211:
        v140 = (const char *)sub_1C3E58(*(v141 - 6), *(v141 - 5));
        sub_946E0("@entry can be used only for function parameters, not for \"%s\"", v140);
      }
      v172 = v49;
      v53 = v173;
      v54 = v174;
      v55 = v175;
      v56 = &v50[8 * v52 + 2];
      *v50 = v52 + 1;
      *v56 = v49;
      v56[1] = v53;
      v56[2] = v54;
      v56[3] = v55;
      v57 = &v50[8 * v52 + 6];
      v58 = v177;
      v59 = v178;
      v60 = v179;
      *v57 = v176;
      v57[1] = v58;
      v57[2] = v59;
      v57[3] = v60;
    }
    v166 = (int)v149;
    v61 = dword_475134;
    v167 = v146;
    v62 = v146;
    v147 = dword_487CD0;
    dword_47512C = 1;
    dword_4750D8 = (int)v149;
    dword_4750DC = v62;
    dword_4750E0 = v168;
    dword_4750E4 = v169;
    dword_4750E8 = v170;
    *(_DWORD *)algn_4750EC = v171;
    v63 = (char *)sub_1C3E58(v149, v62);
    v64 = sub_1946C8(**(_DWORD **)(v61 + 4), *(_DWORD *)(*(_DWORD *)(v61 + 4) + 4), v63);
    if ( v64 )
    {
      v6 = dword_4750CC;
      v5 = 264;
      dword_4750E0 = v64;
      dword_475128 = 264;
      goto LABEL_77;
    }
    sub_21D6B0(&v158, v63, v147, 1, v160);
    if ( !v158 )
    {
      v133 = (const char *)sub_17C678(v147);
      v151 = (char *)v133;
      if ( v133 )
      {
        v153 = strlen(v133);
        v134 = strlen(v63);
        sub_84C5C(&v180, v151, v153, v63, v134);
        free(v151);
        sub_21D6B0(&v158, v180, v147, 1, v160);
        if ( v158 )
        {
          v135 = v160[0];
          dword_4750D8 = v180;
          dword_4750DC = v181;
          if ( v160[0] )
            v135 = 1;
          dword_4750E8 = v135;
          dword_475128 = 263;
          dword_4750E0 = v158;
          dword_4750E4 = v159;
          v6 = dword_4750CC;
          goto LABEL_77;
        }
      }
      v136 = (unsigned __int8)*v63;
      if ( v136 > 0x60 )
      {
        v137 = dword_46DE54;
        if ( v136 < dword_46DE54 + 87 )
          goto LABEL_198;
      }
      else
      {
        if ( v136 <= 0x40 )
        {
LABEL_196:
          dword_4750E0 = 0;
          dword_4750E4 = 0;
          dword_4750E8 = 0;
          dword_475128 = 263;
          v6 = dword_4750CC;
          goto LABEL_77;
        }
        v137 = dword_46DE54;
      }
      if ( v137 + 55 <= v136 )
        goto LABEL_196;
LABEL_198:
      if ( sub_84DCC(v61, (unsigned __int8 *)v63, dword_4750DC, 0, (int)&v180) == 258 )
      {
        dword_4750E0 = 0;
        v5 = 266;
        dword_4750E4 = 0;
        dword_4750E8 = 0;
        dword_475128 = 266;
        v6 = dword_4750CC;
        goto LABEL_77;
      }
      goto LABEL_196;
    }
    v1 = &off_3692EC;
    v125 = v160[0];
    dword_475128 = 263;
    if ( v160[0] )
      v125 = 1;
    dword_4750E8 = v125;
    dword_4750E0 = v158;
    dword_4750E4 = v159;
    v6 = dword_4750CC;
    v7 = unk_36984F;
LABEL_78:
    v4 += v7;
    if ( v6 )
    {
LABEL_79:
      sub_1C4D40(stderr, "%s ", "Next token is");
      sub_85344(stderr, v7);
      sub_1C4D40(stderr, (const char *)&word_356638);
    }
LABEL_11:
    if ( v4 >= 0x1C4 )
      goto LABEL_13;
    v8 = (char *)v1 + v4;
    if ( v8[1416] != v7 )
      goto LABEL_13;
    v3 = (unsigned __int8)v8[1868];
    v9 = dword_4750CC;
    if ( v3 )
    {
      if ( dword_4750CC )
      {
        sub_1C4D40(stderr, "%s ", "Shifting");
        sub_85344(stderr, v7);
        sub_1C4D40(stderr, (const char *)&word_356638);
      }
      v20 = v142;
      dword_475128 = -2;
      v65 = dword_4750DC;
      v66 = dword_4750E0;
      v67 = dword_4750E4;
      v141 += 6;
      *v141 = (unsigned __int8 *)dword_4750D8;
      v141[1] = (unsigned __int8 *)v65;
      v141[2] = (unsigned __int8 *)v66;
      v141[3] = (unsigned __int8 *)v67;
      v68 = *(unsigned __int8 **)algn_4750EC;
      v141[4] = (unsigned __int8 *)dword_4750E8;
      v141[5] = v68;
      goto LABEL_24;
    }
    v11 = 0;
    v12 = 6;
    LOWORD(v10) = 0;
LABEL_15:
    v13 = &v141[v12];
    v14 = *(_QWORD *)v13;
    v15 = v13[2];
    v16 = v13[3];
    v13 += 4;
    v161 = v14;
    v162 = v15;
    v163 = v16;
    v17 = *(_QWORD *)v13;
    v164 = *v13;
    v165 = (unsigned __int8 *)HIDWORD(v17);
    if ( v9 )
    {
      LODWORD(v17) = sub_1C4D40(stderr, "Reducing stack by rule %d (line %lu):\n", v3 - 1, word_369CC0[v3]);
      if ( v11 )
      {
        v45 = (_WORD *)v142 - v11;
        v148 = v10;
        v46 = 0;
        do
        {
          sub_1C4D40(stderr, "   $%d = ", ++v46);
          v47 = (__int16)v45[1];
          ++v45;
          sub_85344(stderr, *((unsigned __int8 *)v1 + v47 + 2656));
          LODWORD(v17) = sub_1C4D40(stderr, (const char *)&word_356638);
        }
        while ( v11 != v46 );
        LOWORD(v10) = v148;
      }
    }
    switch ( v3 )
    {
      case 4:
        sub_1C37BC(dword_475134, 88);
        sub_1C38F4(dword_475134, *v141);
        sub_1C37BC(dword_475134, 88);
        goto LABEL_18;
      case 6:
        sub_1C37BC(dword_475134, 22);
        goto LABEL_18;
      case 7:
        sub_1C37BC(dword_475134, 61);
        goto LABEL_18;
      case 8:
        sub_1C37BC(dword_475134, 62);
        goto LABEL_18;
      case 9:
        sub_1C37BC(dword_475134, 58);
        goto LABEL_18;
      case 10:
        sub_1C37BC(dword_475134, 68);
        goto LABEL_18;
      case 11:
        sub_1C37BC(dword_475134, 59);
        goto LABEL_18;
      case 12:
        sub_1C37BC(dword_475134, 60);
        goto LABEL_18;
      case 13:
        sub_1C37BC(dword_475134, 64);
        goto LABEL_18;
      case 14:
        sub_1C37BC(dword_475134, 66);
        goto LABEL_18;
      case 15:
        sub_1C37BC(dword_475134, 81);
        sub_1C4F0C(dword_475134, *v141, v141[1]);
        sub_1C37BC(dword_475134, 81);
        goto LABEL_18;
      case 16:
        ((void (__fastcall *)(int))loc_1C3BBC)(dword_475134);
        sub_1C37BC(dword_475134, 81);
        v81 = (int *)(v141 - 6);
        goto LABEL_114;
      case 17:
        ((void (__fastcall *)(int))loc_1C3BBC)(dword_475134);
        sub_1C37BC(dword_475134, 81);
        v81 = &v180;
        v180 = (int)"";
        v181 = 0;
LABEL_114:
        sub_1C4F0C(dword_475134, *v81, v81[1]);
        sub_1C37BC(dword_475134, 81);
        goto LABEL_18;
      case 18:
        sub_1C37BC(dword_475134, 23);
        goto LABEL_18;
      case 19:
      case 21:
        sub_1C547C(v17);
        goto LABEL_18;
      case 20:
        v78 = sub_1C37BC(dword_475134, 46);
        v79 = dword_475134;
        v80 = sub_1C36FC(v78);
        sub_1C3898(v79, HIDWORD(v80), v80, (int)v80 >> 31);
        sub_1C37BC(dword_475134, 46);
        goto LABEL_18;
      case 23:
        dword_487CA4 = 1;
        goto LABEL_18;
      case 24:
        ++dword_487CA4;
        goto LABEL_18;
      case 25:
        v161 = (int)(sub_1C36FC(v17) - 1);
        goto LABEL_18;
      case 26:
        sub_1C37BC(dword_475134, 56);
        sub_1C38F4(dword_475134, *(v141 - 12));
        sub_1C37BC(dword_475134, 56);
        goto LABEL_18;
      case 27:
        sub_1C37BC(dword_475134, 52);
        sub_1C38F4(dword_475134, *(v141 - 18));
        sub_1C37BC(dword_475134, 52);
        goto LABEL_18;
      case 29:
        sub_1C37BC(dword_475134, 20);
        goto LABEL_18;
      case 30:
        sub_1C37BC(dword_475134, 3);
        goto LABEL_18;
      case 31:
        sub_1C37BC(dword_475134, 4);
        goto LABEL_18;
      case 32:
        sub_1C37BC(dword_475134, 5);
        goto LABEL_18;
      case 33:
        sub_1C37BC(dword_475134, 1);
        goto LABEL_18;
      case 34:
        sub_1C37BC(dword_475134, 2);
        goto LABEL_18;
      case 35:
        sub_1C37BC(dword_475134, 7);
        goto LABEL_18;
      case 36:
        sub_1C37BC(dword_475134, 8);
        goto LABEL_18;
      case 37:
        sub_1C37BC(dword_475134, 14);
        goto LABEL_18;
      case 38:
        sub_1C37BC(dword_475134, 15);
        goto LABEL_18;
      case 39:
        sub_1C37BC(dword_475134, 18);
        goto LABEL_18;
      case 40:
        sub_1C37BC(dword_475134, 19);
        goto LABEL_18;
      case 41:
        sub_1C37BC(dword_475134, 16);
        goto LABEL_18;
      case 42:
        sub_1C37BC(dword_475134, 17);
        goto LABEL_18;
      case 43:
        sub_1C37BC(dword_475134, 11);
        goto LABEL_18;
      case 44:
        sub_1C37BC(dword_475134, 13);
        goto LABEL_18;
      case 45:
        sub_1C37BC(dword_475134, 12);
        goto LABEL_18;
      case 46:
        sub_1C37BC(dword_475134, 9);
        goto LABEL_18;
      case 47:
        sub_1C37BC(dword_475134, 10);
        goto LABEL_18;
      case 48:
        sub_1C37BC(dword_475134, 35);
        goto LABEL_18;
      case 49:
        sub_1C37BC(dword_475134, 21);
        goto LABEL_18;
      case 50:
        sub_1C37BC(dword_475134, 31);
        sub_1C37BC(dword_475134, *(v141 - 6));
        sub_1C37BC(dword_475134, 31);
        goto LABEL_18;
      case 51:
        sub_1C37BC(dword_475134, 38);
        sub_1C38F4(dword_475134, v141[2]);
        sub_1C3898(dword_475134, v83, *v141, v141[1]);
        sub_1C37BC(dword_475134, 38);
        goto LABEL_18;
      case 52:
        v180 = 1;
        v82 = *v141;
        v181 = (int)v141;
        sub_1C51E4(dword_475134, v82, &v180);
        goto LABEL_18;
      case 53:
        sub_84DCC(dword_475134, *v141, (int)v141[1], 0, (int)&v180);
        sub_1C37BC(dword_475134, 38);
        sub_1C38F4(dword_475134, v182);
        sub_1C3898(dword_475134, v105, v180, v181);
        sub_1C37BC(dword_475134, 38);
        goto LABEL_18;
      case 54:
        sub_1C37BC(dword_475134, 39);
        sub_1C38F4(dword_475134, v141[4]);
        sub_1C38C0(dword_475134, v141);
        sub_1C37BC(dword_475134, 39);
        goto LABEL_18;
      case 56:
        sub_1C4F9C(dword_475134, *v141, v141[1]);
        goto LABEL_18;
      case 57:
        sub_1C37BC(dword_475134, 38);
        v101 = dword_475134;
        v102 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(dword_475134 + 4) + 4));
        sub_1C38F4(v101, *(_DWORD *)(v102 + 32));
        v103 = sub_171258(*(v141 - 6));
        v104 = v103;
        LODWORD(v103) = dword_475134;
        *(v141 - 6) = (unsigned __int8 *)v104;
        sub_1C3898(v103, HIDWORD(v103), *(_DWORD *)(v104 + 20), 0);
        sub_1C37BC(dword_475134, 38);
        goto LABEL_18;
      case 58:
        sub_1C37BC(dword_475134, 67);
        goto LABEL_18;
      case 59:
        v95 = (unsigned __int8 **)sub_93028(12);
        HIDWORD(v161) = v95;
        LODWORD(v161) = 1;
        v96 = v141[2];
        v97 = *v141;
        v95[2] = v96;
        *v95 = v97;
        v98 = (unsigned __int8 *)sub_93028(v96 + 1);
        v99 = v141[1];
        v100 = v141[2];
        v95[1] = v98;
        memcpy(v98, v99, (size_t)(v100 + 1));
        goto LABEL_18;
      case 60:
        v89 = 3 * (v161 + 1);
        LODWORD(v161) = v161 + 1;
        v90 = sub_93050(HIDWORD(v161), 4 * v89);
        HIDWORD(v161) = v90;
        v91 = (void *)sub_93028(v141[2] + 1);
        v92 = (unsigned __int8 *)memcpy(v91, v141[1], (size_t)(v141[2] + 1));
        v93 = (unsigned __int8 **)(v90 + 4 * v89 - 12);
        *v93 = *v141;
        v94 = v141[2];
        v93[1] = v92;
        v93[2] = v94;
        goto LABEL_18;
      case 61:
        sub_1C51E4(dword_475134, 0, v141);
        v84 = *v141;
        if ( (int)*v141 <= 0 )
        {
          v85 = v141[1];
        }
        else
        {
          v85 = v141[1];
          v86 = 0;
          v87 = 0;
          do
          {
            v88 = *(void **)&v85[v86 + 4];
            if ( v88 )
            {
              free(v88);
              v84 = *v141;
              v85 = v141[1];
            }
            ++v87;
            v86 += 12;
          }
          while ( (int)v84 > v87 );
        }
        if ( v85 )
          free(v85);
        goto LABEL_18;
      case 62:
      case 63:
        sub_1C37BC(dword_475134, 79);
        sub_1C3898(dword_475134, v18, *v141, v141[1]);
        sub_1C37BC(dword_475134, 79);
        goto LABEL_18;
      case 64:
        v77 = (int)*(v141 - 4);
        if ( !v77 || (*(_BYTE *)(v77 + 33) & 2) == 0 || !sub_15B388(*(v141 - 4)) )
          goto LABEL_211;
        sub_1C37BC(dword_475134, 41);
        sub_1C37E8(dword_475134, v77);
        sub_1C37BC(dword_475134, 41);
        goto LABEL_18;
      case 65:
        v75 = v141[2];
        if ( v75 )
        {
          v76 = (int)v141[3];
          if ( sub_15B388(v141[2]) && (!dword_487CE0 || sub_C2360(v76)) )
            dword_487CE0 = v76;
          sub_1C37BC(dword_475134, 40);
          sub_1C3840(dword_475134, v76);
          sub_1C37E8(dword_475134, v75);
          sub_1C37BC(dword_475134, 40);
        }
        else
        {
          if ( v141[4] )
          {
            v138 = sub_94700("go-exp.y", 571, "%s: %s", "int go_yyparse()", "go with `this' field");
            goto LABEL_214;
          }
          v126 = sub_1C3E58(*v141, v141[1]);
          v127 = sub_1B1BE8(&v180, v126);
          if ( !v180 )
          {
            if ( sub_1B7B9C(v127) || sub_1B7B24() )
            {
              v139 = (const char *)sub_1C3E58(*v141, v141[1]);
              sub_946E0("No symbol \"%s\" in current context.", v139);
            }
LABEL_214:
            sub_946E0("No symbol table is loaded.  Use the \"file\" command.", HIDWORD(v138));
          }
          sub_1C3B74(dword_475134, v180, v181);
        }
LABEL_18:
        v19 = *((unsigned __int8 *)v1 + v3 + 2800);
        v20 = (char **)((char *)v142 - 2 * (__int16)v10);
        v21 = &v141[-6 * (__int16)v10];
        if ( dword_4750CC )
        {
          sub_1C4D40(stderr, "%s ", "-> $$ =");
          sub_85344(stderr, v19);
          sub_1C4D40(stderr, (const char *)&word_356638);
          if ( dword_4750CC )
            sub_84BE0(ptr, (unsigned int)v20);
        }
        v141 = v21 + 6;
        v22 = v19 - 68;
        v23 = (unsigned __int8 *)HIDWORD(v161);
        v24 = v162;
        v25 = v163;
        v26 = *((char *)v1 + v22 + 2872);
        *v141 = (unsigned __int8 *)v161;
        v141[1] = v23;
        v141[2] = v24;
        v141[3] = v25;
        v27 = v165;
        v141[4] = v164;
        v141[5] = v27;
        v28 = *(__int16 *)v20;
        v29 = v26 + v28;
        if ( v29 < 0x1C4 && (v30 = (char *)v1 + v29, v28 == v30[1416]) )
          v3 = (unsigned __int8)v30[1868];
        else
          v3 = *((char *)v1 + v22 + 2888);
        break;
      case 66:
        LODWORD(v161) = sub_1700C0(*v141);
        goto LABEL_18;
      case 67:
        LODWORD(v161) = v141[2];
        goto LABEL_18;
      case 68:
        LODWORD(v161) = *(_DWORD *)(sub_17C6A8(*(_DWORD *)(*(_DWORD *)(dword_475134 + 4) + 4)) + 40);
        goto LABEL_18;
      default:
        goto LABEL_18;
    }
LABEL_24:
    v2 = (int)v20 + 2;
    v142 = (char **)((char *)v20 + 2);
    *((_WORD *)v20 + 1) = v3;
    v31 = v144 + 0x7FFFFFFF;
    if ( (char *)v20 + 2 >= (char *)&ptr[v31] )
      break;
LABEL_34:
    if ( !dword_4750CC )
      goto LABEL_4;
LABEL_35:
    sub_1C4D40(stderr, "Entering state %d\n", v3);
    if ( v3 == 40 )
      goto LABEL_36;
  }
  v32 = ((v2 - (int)ptr) >> 1) + 1;
  if ( v144 > 0x270F )
    sub_85D8C("memory exhausted");
  v33 = v31 * 2 + 2;
  v34 = 10000;
  if ( v33 < 0x2710 )
    v34 = v33;
  v35 = 2 * v32;
  v36 = 2 * v34;
  v144 = v34;
  v37 = 24 * v32;
  v38 = (char *)sub_93028(26 * v34 + 23);
  memcpy(v38, ptr, v35);
  v39 = &v38[24 * ((v36 + 23) / 0x18u)];
  memcpy(v39, src, v37);
  if ( ptr != v188 )
    free(ptr);
  v142 = (char **)&v38[v35 - 2];
  v141 = (unsigned __int8 **)&v39[v37 - 24];
  if ( dword_4750CC )
    sub_1C4D40(stderr, "Stack size increased to %lu\n", v144);
  v1 = (char **)&v38[v36 - 2];
  if ( v142 < v1 )
  {
    ptr = (__int16 *)v38;
    src = v39;
    goto LABEL_34;
  }
  v41 = 1;
  ptr = (__int16 *)v38;
  v40 = 1;
LABEL_37:
  if ( dword_475128 != -2 )
  {
    if ( (unsigned int)dword_475128 >= 0x12C )
      v2 = 2;
    else
      LOWORD(v1) = -27924;
    if ( (unsigned int)dword_475128 < 0x12C )
    {
      HIWORD(v1) = 54;
      v2 = *((unsigned __int8 *)v1 + dword_475128 + 1116);
    }
    sub_85394("Cleanup: discarding lookahead", v2);
  }
  if ( dword_4750CC )
    sub_84BE0(ptr, (unsigned int)v142);
  v42 = (__int16 *)v142;
  if ( ptr != (__int16 *)v142 )
  {
    do
    {
      v43 = *v42--;
      sub_85394("Cleanup: popping", *((unsigned __int8 *)&off_3692EC + v43 + 2656));
    }
    while ( v42 != ptr );
  }
  if ( v41 )
    free(ptr);
  return v40;
}
