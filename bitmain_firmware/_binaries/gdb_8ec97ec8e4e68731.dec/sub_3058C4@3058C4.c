int __fastcall sub_3058C4(int a1, int a2)
{
  unsigned __int64 v3; // r6
  int *v4; // r4
  int v5; // r3
  int v6; // r2
  _BOOL4 v7; // r1
  _BOOL4 v8; // r12
  int v9; // r12
  int v10; // lr
  int v11; // r3
  int v12; // r0
  int v13; // r3
  int v14; // r2
  int v15; // r0
  int v16; // r3
  int v17; // r2
  bool v18; // zf
  int v19; // r1
  int v20; // r3
  int v21; // r2
  int v22; // r1
  int v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r1
  int v27; // r3
  bool v28; // cc
  unsigned int v29; // r7
  unsigned int v30; // r3
  int v31; // r12
  int v32; // r2
  unsigned int v33; // r3
  int v34; // r2
  int v35; // r1
  int v36; // r3
  int v37; // r2
  int v38; // r1
  int v39; // r2
  int v40; // r1
  int v41; // r3
  int v42; // r1
  int v43; // r3
  int v44; // r1
  _DWORD *v46; // r3
  int v47; // r1
  int v48; // r10
  int v49; // r3
  size_t v50; // r11
  unsigned int v51; // r2
  size_t v52; // r10
  unsigned int v53; // r9
  unsigned int v54; // r2
  int v55; // r3
  bool v56; // cc
  int v57; // r2
  int v58; // r2
  size_t v59; // r10
  bool v60; // cc
  unsigned int v61; // r1
  unsigned int v62; // r2
  int v63; // r0
  int v64; // r3
  int v65; // r3
  int v66; // r0
  bool v67; // cf
  unsigned int v68; // r2
  int v69; // r0
  unsigned int v70; // r1
  unsigned int v71; // r2
  int v72; // r0
  int v73; // r3
  int v74; // r3
  int v75; // r0
  bool v76; // cf
  int v77; // r0
  int v78; // r3
  int v79; // r2
  int v80; // r3
  int v81; // r2
  int v82; // r3
  int v83; // r2
  int *v84; // r2
  int v85; // r3
  int v86; // r1
  int v87; // r2
  int v88; // r1
  int v89; // r2
  int v90; // r3
  int v91; // r2
  int v92; // r1
  int v93; // r2
  int v94; // r1
  int v95; // r3
  int v96; // r3
  int v97; // r2
  int v98; // r3
  int v99; // r2
  int v100; // r3
  char v101; // r3
  char v102; // r3
  int v103; // r2
  int v104; // r1
  int v105; // r3
  int v106; // r2
  int v107; // r1
  int v108; // r2
  int v109; // r1
  int v110; // r3
  int v111; // r2
  int v112; // r1
  int v113; // r3
  int v114; // r3
  unsigned int v115; // r2
  int v116; // r0
  int v117; // r3
  int v118; // r0
  int v119; // r1
  int v120; // r0
  int v121; // r12
  int v122; // r3
  int v123; // r9
  int v124; // r2
  int v125; // r1
  int v126; // r3
  int v127; // r1
  int v128; // r0
  int v129; // r1
  int v130; // r2
  int v131; // r3
  int v132; // r2
  unsigned int v133; // r1
  int v134; // r0
  int v135; // r2
  int v136; // r1
  char v137; // r3
  int v138; // r3
  int v139; // r2
  int v140; // r3
  int v141; // r2
  int v142; // r3
  int v143; // r1
  int v144; // r2
  int v145; // r2
  int v146; // r1
  int v147; // r3
  int v148; // r2
  int v149; // r3
  int v150; // r2
  int v151; // r2
  int v152; // r1
  int v153; // r0
  int v154; // r3
  int v155; // r1
  int v156; // r3
  int v157; // r1
  int v158; // r3
  int v159; // r1
  int v160; // r3
  int v161; // r1
  int v162; // r3
  int v163; // r1
  int v164; // r3
  char v165; // r3
  char v166; // r3
  int v167; // r2
  int v168; // r1
  int v169; // r3
  int v170; // r1
  int v171; // r0
  int v172; // r0
  int v173; // r2
  int v174; // r0
  unsigned __int8 *v175; // r3
  int v176; // r12
  int v177; // r1
  int v178; // r3
  int v179; // r0
  unsigned int v180; // r3
  int v181; // r2
  unsigned __int8 *v182; // lr
  unsigned int v183; // r3
  int v184; // t1
  _BOOL4 v185; // r2
  unsigned int v186; // r3
  int v187; // r1
  int v188; // r0
  int v189; // r3
  int *v190; // r3
  int v191; // r0
  int v192; // r1
  int v193; // r2
  unsigned int v194; // r3
  int v195; // r3
  int v196; // r2
  int v197; // r1
  int v198; // r0
  int v199; // r2
  int v200; // r0
  size_t v201; // r2
  char *v202; // r0
  int v203; // [sp+8h] [bp-Ch]

  if ( !a1 || !*(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 36) || (LODWORD(v3) = a2, HIDWORD(v3) = sub_305068(a1), v3 > 5) )
  {
    HIDWORD(v3) = -2;
    return HIDWORD(v3);
  }
  v4 = *(int **)(a1 + 28);
  if ( !*(_DWORD *)(a1 + 12)
    || (v5 = *(_DWORD *)(a1 + 4)) != 0 && !*(_DWORD *)a1
    || ((v6 = v4[1], v7 = v3 != 4, v6 == 666) ? (v8 = v3 != 4) : (v8 = 0), v8) )
  {
    HIDWORD(v3) = -2;
    *(_DWORD *)(a1 + 24) = "stream error";
    return HIDWORD(v3);
  }
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_187:
    HIDWORD(v3) = -5;
    *(_DWORD *)(a1 + 24) = "buffer error";
    return HIDWORD(v3);
  }
  v9 = v4[5];
  v10 = v4[10];
  v4[10] = v3;
  if ( v9 )
  {
    sub_304148(a1);
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_65;
    v6 = v4[1];
  }
  else
  {
    if ( v5 )
    {
      if ( v6 == 666 )
        goto LABEL_187;
LABEL_46:
      if ( v6 == 42 )
      {
        v30 = (v4[12] << 12) - 30720;
        if ( v4[34] <= 1 )
        {
          v57 = v4[33];
          if ( v57 > 1 )
          {
            if ( v57 > 5 )
            {
              if ( v57 == 6 )
                v30 |= 0x80u;
              else
                v30 |= 0xC0u;
            }
            else
            {
              v30 |= 0x40u;
            }
          }
        }
        v31 = v4[2];
        v32 = v4[5];
        if ( v4[27] )
          v30 |= 0x20u;
        v4[5] = v32 + 1;
        v33 = 31 * (v30 / 0x1F) + 31;
        *(_BYTE *)(v31 + v32) = BYTE1(v33);
        v34 = v4[5];
        v35 = v4[2];
        v4[5] = v34 + 1;
        *(_BYTE *)(v35 + v34) = v33;
        if ( v4[27] )
        {
          v36 = *(_DWORD *)(a1 + 48);
          v37 = v4[5];
          v38 = v4[2];
          v4[5] = v37 + 1;
          *(_BYTE *)(v38 + v37) = HIBYTE(v36);
          v39 = v4[5];
          v40 = v4[2];
          v4[5] = v39 + 1;
          *(_BYTE *)(v40 + v39) = BYTE2(v36);
          LOWORD(v39) = *(_WORD *)(a1 + 48);
          v41 = v4[5];
          v42 = v4[2];
          v4[5] = v41 + 1;
          *(_BYTE *)(v42 + v41) = BYTE1(v39);
          v43 = v4[5];
          v44 = v4[2];
          v4[5] = v43 + 1;
          *(_BYTE *)(v44 + v43) = v39;
        }
        *(_DWORD *)(a1 + 48) = sub_30C0D0(0, 0, 0);
        v4[1] = 113;
        sub_304148(a1);
        if ( v4[5] )
          goto LABEL_65;
        v6 = v4[1];
      }
      if ( v6 == 57 )
      {
        v77 = sub_30C694(0, 0, 0);
        v78 = v4[5];
        v79 = v4[2];
        *(_DWORD *)(a1 + 48) = v77;
        v4[5] = v78 + 1;
        *(_BYTE *)(v79 + v78) = 31;
        v80 = v4[5];
        v81 = v4[2];
        v4[5] = v80 + 1;
        *(_BYTE *)(v81 + v80) = -117;
        v82 = v4[5];
        v83 = v4[2];
        v4[5] = v82 + 1;
        *(_BYTE *)(v83 + v82) = 8;
        v84 = (int *)v4[7];
        if ( v84 )
        {
          v85 = *v84;
          if ( *v84 )
            LOBYTE(v85) = 1;
          if ( v84[11] )
            LOBYTE(v85) = v85 + 2;
          v86 = v84[7];
          if ( v84[4] )
            LOBYTE(v85) = v85 + 4;
          v87 = v84[9];
          v18 = v86 == 0;
          v88 = v4[2];
          if ( !v18 )
            LOBYTE(v85) = v85 + 8;
          v18 = v87 == 0;
          v89 = v4[5];
          if ( !v18 )
            LOBYTE(v85) = v85 + 16;
          v4[5] = v89 + 1;
          *(_BYTE *)(v88 + v89) = v85;
          v90 = v4[5];
          v91 = v4[2];
          v92 = *(_DWORD *)(v4[7] + 4);
          v4[5] = v90 + 1;
          *(_BYTE *)(v91 + v90) = v92;
          v93 = v4[5];
          v94 = v4[2];
          v95 = *(_DWORD *)(v4[7] + 4);
          v4[5] = v93 + 1;
          *(_BYTE *)(v94 + v93) = BYTE1(v95);
          v96 = v4[5];
          v97 = v4[2];
          LOWORD(v94) = *(_WORD *)(v4[7] + 6);
          v4[5] = v96 + 1;
          *(_BYTE *)(v97 + v96) = v94;
          v98 = v4[5];
          v99 = v4[2];
          LOBYTE(v94) = *(_BYTE *)(v4[7] + 7);
          v4[5] = v98 + 1;
          *(_BYTE *)(v99 + v98) = v94;
          v100 = v4[33];
          if ( v100 == 9 )
          {
            v101 = 2;
          }
          else
          {
            v102 = v100 <= 1;
            if ( v4[34] > 1 )
              v102 |= 1u;
            v101 = 4 * v102;
          }
          v103 = v4[5];
          v104 = v4[2];
          v4[5] = v103 + 1;
          *(_BYTE *)(v104 + v103) = v101;
          v105 = v4[5];
          v106 = v4[2];
          v107 = *(_DWORD *)(v4[7] + 12);
          v4[5] = v105 + 1;
          *(_BYTE *)(v106 + v105) = v107;
          v46 = (_DWORD *)v4[7];
          if ( v46[4] )
          {
            v108 = v4[5];
            v109 = v46[5];
            v110 = v4[2];
            v4[5] = v108 + 1;
            *(_BYTE *)(v110 + v108) = v109;
            v111 = v4[5];
            v112 = v4[2];
            v113 = *(_DWORD *)(v4[7] + 20);
            v4[5] = v111 + 1;
            *(_BYTE *)(v112 + v111) = BYTE1(v113);
            v46 = (_DWORD *)v4[7];
          }
          if ( v46[11] )
          {
            v171 = sub_30C694(*(_DWORD *)(a1 + 48), v4[2], v4[5]);
            v46 = (_DWORD *)v4[7];
            *(_DWORD *)(a1 + 48) = v171;
          }
          v4[8] = 0;
          v4[1] = 69;
          goto LABEL_70;
        }
        v154 = v4[5];
        v155 = v4[2];
        v4[5] = v154 + 1;
        *(_BYTE *)(v155 + v154) = 0;
        v156 = v4[5];
        v157 = v4[2];
        v4[5] = v156 + 1;
        *(_BYTE *)(v157 + v156) = 0;
        v158 = v4[5];
        v159 = v4[2];
        v4[5] = v158 + 1;
        *(_BYTE *)(v159 + v158) = 0;
        v160 = v4[5];
        v161 = v4[2];
        v4[5] = v160 + 1;
        *(_BYTE *)(v161 + v160) = 0;
        v162 = v4[5];
        v163 = v4[2];
        v4[5] = v162 + 1;
        *(_BYTE *)(v163 + v162) = 0;
        v164 = v4[33];
        if ( v164 == 9 )
        {
          v165 = 2;
        }
        else
        {
          v166 = v164 <= 1;
          if ( v4[34] > 1 )
            v166 |= 1u;
          v165 = 4 * v166;
        }
        v167 = v4[5];
        v168 = v4[2];
        v4[5] = v167 + 1;
        *(_BYTE *)(v168 + v167) = v165;
        v169 = v4[5];
        v170 = v4[2];
        v4[5] = v169 + 1;
        *(_BYTE *)(v170 + v169) = 3;
        v4[1] = 113;
        sub_304148(a1);
        if ( v4[5] )
          goto LABEL_65;
        v6 = v4[1];
      }
      if ( v6 != 69 )
      {
        if ( v6 != 73 )
        {
          if ( v6 != 91 )
          {
            if ( v6 != 103 )
              goto LABEL_59;
            v114 = *(_DWORD *)(v4[7] + 44);
            goto LABEL_149;
          }
          v46 = (_DWORD *)v4[7];
LABEL_111:
          if ( v46[9] )
          {
            v70 = v4[5];
            v71 = v70;
            while ( 1 )
            {
              if ( v4[3] == v71 )
              {
                v76 = 1;
                if ( v46[11] )
                  v76 = v70 >= v71;
                if ( !v76 )
                  *(_DWORD *)(a1 + 48) = sub_30C694(*(_DWORD *)(a1 + 48), v4[2] + v70, v71 - v70);
                sub_304148(a1);
                v71 = v4[5];
                v70 = v71;
                if ( v71 )
                  goto LABEL_65;
                v46 = (_DWORD *)v4[7];
              }
              v72 = v4[8];
              v73 = v46[9];
              v4[8] = v72 + 1;
              v74 = *(unsigned __int8 *)(v73 + v72);
              v75 = v4[2];
              v4[5] = v71 + 1;
              *(_BYTE *)(v75 + v71) = v74;
              if ( !v74 )
                break;
              v71 = v4[5];
              v46 = (_DWORD *)v4[7];
            }
            v114 = *(_DWORD *)(v4[7] + 44);
            if ( !v114 )
              goto LABEL_153;
            v115 = v4[5];
            if ( v115 <= v70 )
              goto LABEL_148;
            v116 = sub_30C694(*(_DWORD *)(a1 + 48), v4[2] + v70, v115 - v70);
            v46 = (_DWORD *)v4[7];
            *(_DWORD *)(a1 + 48) = v116;
          }
          v114 = v46[11];
LABEL_148:
          v4[1] = 103;
LABEL_149:
          if ( !v114 )
            goto LABEL_153;
          v117 = v4[5];
          if ( v117 + 2 <= (unsigned int)v4[3] || (sub_304148(a1), (v117 = v4[5]) == 0) )
          {
            v118 = *(_DWORD *)(a1 + 48);
            v119 = v4[2];
            v4[5] = v117 + 1;
            *(_BYTE *)(v119 + v117) = v118;
            v120 = v4[5];
            v121 = v4[2];
            v122 = *(_DWORD *)(a1 + 48) >> 8;
            v4[5] = v120 + 1;
            *(_BYTE *)(v121 + v120) = v122;
            *(_DWORD *)(a1 + 48) = sub_30C694(0, 0, 0);
LABEL_153:
            v4[1] = 113;
            sub_304148(a1);
            if ( v4[5] )
              goto LABEL_65;
LABEL_59:
            if ( *(_DWORD *)(a1 + 4) )
              goto LABEL_25;
            goto LABEL_24;
          }
LABEL_65:
          v4[10] = -1;
          return HIDWORD(v3);
        }
        v46 = (_DWORD *)v4[7];
LABEL_95:
        if ( v46[7] )
        {
          v61 = v4[5];
          v62 = v61;
          while ( 1 )
          {
            if ( v4[3] == v62 )
            {
              v67 = 1;
              if ( v46[11] )
                v67 = v61 >= v62;
              if ( !v67 )
                *(_DWORD *)(a1 + 48) = sub_30C694(*(_DWORD *)(a1 + 48), v4[2] + v61, v62 - v61);
              sub_304148(a1);
              v62 = v4[5];
              v61 = v62;
              if ( v62 )
                goto LABEL_65;
              v46 = (_DWORD *)v4[7];
            }
            v63 = v4[8];
            v64 = v46[7];
            v4[8] = v63 + 1;
            v65 = *(unsigned __int8 *)(v64 + v63);
            v66 = v4[2];
            v4[5] = v62 + 1;
            *(_BYTE *)(v66 + v62) = v65;
            if ( !v65 )
              break;
            v62 = v4[5];
            v46 = (_DWORD *)v4[7];
          }
          v46 = (_DWORD *)v4[7];
          if ( v46[11] )
          {
            v68 = v4[5];
            if ( v68 > v61 )
            {
              v69 = sub_30C694(*(_DWORD *)(a1 + 48), v4[2] + v61, v68 - v61);
              v46 = (_DWORD *)v4[7];
              *(_DWORD *)(a1 + 48) = v69;
            }
          }
          v4[8] = 0;
        }
        v4[1] = 91;
        goto LABEL_111;
      }
      v46 = (_DWORD *)v4[7];
LABEL_70:
      v47 = v46[4];
      if ( v47 )
      {
        v48 = *((unsigned __int16 *)v46 + 10);
        v49 = v4[8];
        v50 = v4[5];
        v51 = v4[3];
        v52 = v48 - v49;
        if ( v50 + v52 > v51 )
        {
          do
          {
            v53 = v51 - v50;
            v52 -= v51 - v50;
            memcpy((void *)(v4[2] + v50), (const void *)(v47 + v49), v51 - v50);
            v54 = v4[3];
            v55 = *(_DWORD *)(v4[7] + 44);
            v4[5] = v54;
            v56 = v55 != 0;
            if ( v55 )
              v56 = v54 > v50;
            if ( v56 )
              *(_DWORD *)(a1 + 48) = sub_30C694(*(_DWORD *)(a1 + 48), v4[2] + v50, v54 - v50);
            v4[8] += v53;
            sub_304148(a1);
            v50 = v4[5];
            if ( v50 )
              goto LABEL_65;
            v51 = v4[3];
            v49 = v4[8];
            v47 = *(_DWORD *)(v4[7] + 16);
          }
          while ( v51 < v52 );
        }
        memcpy((void *)(v4[2] + v50), (const void *)(v47 + v49), v52);
        v46 = (_DWORD *)v4[7];
        v58 = v46[11];
        v59 = v52 + v4[5];
        v4[5] = v59;
        v60 = v58 != 0;
        if ( v58 )
          v60 = v59 > v50;
        if ( v60 )
        {
          v172 = sub_30C694(*(_DWORD *)(a1 + 48), v4[2] + v50, v59 - v50);
          v46 = (_DWORD *)v4[7];
          *(_DWORD *)(a1 + 48) = v172;
        }
        v4[8] = 0;
      }
      v4[1] = 73;
      goto LABEL_95;
    }
    v11 = 2 * v10;
    if ( (_DWORD)v3 == 5 )
      v12 = 1;
    else
      v12 = 2 * v3;
    if ( v10 > 4 )
      v11 -= 9;
    if ( v12 > v11 )
      v7 = 0;
    if ( v7 )
      goto LABEL_187;
  }
  if ( v6 != 666 )
    goto LABEL_46;
  if ( *(_DWORD *)(a1 + 4) )
    goto LABEL_187;
LABEL_24:
  if ( !v4[29] )
  {
    if ( !(_DWORD)v3 )
      return HIDWORD(v3);
    if ( v4[1] == 666 )
      goto LABEL_33;
  }
LABEL_25:
  v13 = v4[33];
  if ( !v13 )
  {
    v15 = sub_304B5C(v4, v3);
LABEL_29:
    if ( (unsigned int)(v15 - 2) <= 1 )
      v4[1] = 666;
    goto LABEL_31;
  }
  v14 = v4[34];
  if ( v14 == 2 )
  {
    do
    {
      v123 = v4[29];
      do
      {
        if ( !v123 )
        {
          sub_303F08(v4);
          if ( !v4[29] )
          {
            if ( (_DWORD)v3 )
            {
              v4[1453] = 0;
              if ( (_DWORD)v3 != 4 )
              {
                if ( v4[1448] )
                {
                  v132 = v4[23];
                  if ( v132 >= 0 )
LABEL_169:
                    v133 = v4[14] + v132;
                  else
                    v133 = 0;
                  goto LABEL_170;
                }
                goto LABEL_61;
              }
              v199 = v4[23];
              if ( v199 >= 0 )
LABEL_229:
                v133 = v4[14] + v199;
              else
                v133 = 0;
LABEL_230:
              sub_30B4F8(v4, v133, v4[27] - v199, 1);
              v200 = *v4;
              v4[23] = v4[27];
              sub_304148(v200);
              v18 = *(_DWORD *)(*v4 + 16) == 0;
              v4[1] = 666;
              if ( !v18 )
                goto LABEL_34;
            }
            goto LABEL_64;
          }
        }
        v124 = v4[27];
        v125 = v4[14];
        v126 = v4[1448];
        v4[24] = 0;
        v127 = *(unsigned __int8 *)(v125 + v124);
        v128 = v4[1446];
        *(_WORD *)(v4[1449] + 2 * v126) = 0;
        v4[1448] = v126 + 1;
        *(_BYTE *)(v128 + v126) = v127;
        ++LOWORD(v4[v127 + 37]);
        v129 = v4[1448];
        v130 = v4[1447] - 1;
        v123 = v4[29] - 1;
        v131 = v4[27] + 1;
        v4[29] = v123;
        v4[27] = v131;
      }
      while ( v129 != v130 );
      v151 = v4[23];
      if ( v151 < 0 )
        v152 = 0;
      else
        v152 = v4[14];
      if ( v151 >= 0 )
        v152 += v151;
      sub_30B4F8(v4, v152, v131 - v151, 0);
      v153 = *v4;
      v4[23] = v4[27];
      sub_304148(v153);
    }
    while ( *(_DWORD *)(*v4 + 16) );
    goto LABEL_64;
  }
  if ( v14 != 3 )
  {
    v15 = dword_468330[3 * v13 + 2](v4, v3);
    goto LABEL_29;
  }
LABEL_190:
  v133 = v4[29];
  while ( 1 )
  {
    if ( v133 <= 0x102 )
    {
      sub_303F08(v4);
      v133 = v4[29];
      if ( v133 <= 0x102 )
        break;
    }
    v173 = v4[27];
    v174 = v4[14];
    v4[24] = 0;
LABEL_192:
    if ( v173 )
    {
      v175 = (unsigned __int8 *)(v174 + v173 - 1);
      v176 = *v175;
      if ( *(unsigned __int8 *)(v174 + v173) == v176 && v175[2] == v176 && v175[3] == v176 )
      {
        v182 = v175 + 3;
        v183 = v174 + v173 + 258;
        v203 = v173;
        while ( 1 )
        {
          if ( v182[1] != v176 )
          {
            v173 = v203;
            ++v182;
            goto LABEL_216;
          }
          if ( v182[2] != v176 )
          {
            v173 = v203;
            v182 += 2;
            goto LABEL_216;
          }
          if ( v182[3] != v176 )
          {
            v173 = v203;
            v182 += 3;
            goto LABEL_216;
          }
          if ( v182[4] != v176 )
            break;
          if ( v182[5] != v176 )
          {
            v173 = v203;
            v182 += 5;
            goto LABEL_216;
          }
          if ( v182[6] != v176 )
          {
            v173 = v203;
            v182 += 6;
            goto LABEL_216;
          }
          if ( v182[7] != v176 )
          {
            v173 = v203;
            v182 += 7;
            goto LABEL_216;
          }
          v184 = v182[8];
          v182 += 8;
          v185 = v184 == v176;
          if ( v183 <= (unsigned int)v182 )
            v185 = 0;
          if ( !v185 )
          {
            v173 = v203;
            goto LABEL_216;
          }
        }
        v173 = v203;
        v182 += 4;
LABEL_216:
        v186 = 258 - (v183 - (_DWORD)v182);
        v4[24] = v186;
        if ( v186 > v133 )
        {
          v4[24] = v133;
          LOBYTE(v186) = v133;
LABEL_219:
          v187 = v4[1448];
          v188 = v4[1446];
          v189 = (unsigned __int8)(v186 - 3);
          *(_WORD *)(v4[1449] + 2 * v187) = 1;
          v4[1448] = v187 + 1;
          *(_BYTE *)(v188 + v187) = v189;
          v190 = &v4[length_code[v189]];
          ++*((_WORD *)v190 + 588);
          ++LOWORD(v4[(unsigned __int8)dist_code + 610]);
          v191 = v4[24];
          v192 = v4[29];
          v193 = v4[27];
          v194 = __clz(v4[1447] - 1 - v4[1448]);
          v4[24] = 0;
          v133 = v192 - v191;
          v180 = v194 >> 5;
          v181 = v193 + v191;
          v4[29] = v133;
          v4[27] = v181;
          goto LABEL_195;
        }
        if ( v186 > 2 )
          goto LABEL_219;
      }
    }
LABEL_194:
    v177 = *(unsigned __int8 *)(v174 + v173);
    v178 = v4[1448];
    v179 = v4[1446];
    *(_WORD *)(v4[1449] + 2 * v178) = 0;
    v4[1448] = v178 + 1;
    *(_BYTE *)(v179 + v178) = v177;
    ++LOWORD(v4[v177 + 37]);
    v133 = v4[29] - 1;
    v180 = v4[1447] - 1 == v4[1448];
    v181 = v4[27] + 1;
    v4[29] = v133;
    v4[27] = v181;
LABEL_195:
    if ( v180 )
    {
      v195 = v4[23];
      v196 = v181 - v195;
      if ( v195 < 0 )
        v197 = 0;
      else
        v197 = v4[14];
      if ( v195 >= 0 )
        v197 += v195;
      sub_30B4F8(v4, v197, v196, 0);
      v198 = *v4;
      v4[23] = v4[27];
      sub_304148(v198);
      if ( *(_DWORD *)(*v4 + 16) )
        goto LABEL_190;
      goto LABEL_64;
    }
  }
  if ( !(_DWORD)v3 )
    goto LABEL_64;
  if ( v133 )
  {
    v4[24] = 0;
    v173 = v4[27];
    v174 = v4[14];
    if ( v133 <= 2 )
      goto LABEL_194;
    goto LABEL_192;
  }
  v4[1453] = 0;
  if ( (_DWORD)v3 == 4 )
  {
    v199 = v4[23];
    if ( v199 >= 0 )
      goto LABEL_229;
    goto LABEL_230;
  }
  if ( !v4[1448] )
    goto LABEL_61;
  v132 = v4[23];
  if ( v132 >= 0 )
    goto LABEL_169;
LABEL_170:
  sub_30B4F8(v4, v133, v4[27] - v132, 0);
  v134 = *v4;
  v4[23] = v4[27];
  sub_304148(v134);
  v15 = *(_DWORD *)(*v4 + 16) != 0;
LABEL_31:
  if ( (v15 & 0xFFFFFFFD) == 0 )
  {
LABEL_64:
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_65;
    return HIDWORD(v3);
  }
  if ( v15 != 1 )
    goto LABEL_33;
LABEL_61:
  if ( (_DWORD)v3 == 1 )
  {
    sub_30B40C(v4);
    goto LABEL_63;
  }
  if ( (_DWORD)v3 == 5 )
    goto LABEL_63;
  sub_30B2DC(v4, 0, 0, 0);
  if ( (_DWORD)v3 == 3 )
  {
    v201 = 2 * (v4[19] + 0x7FFFFFFF);
    v202 = (char *)v4[17];
    *(_WORD *)&v202[v201] = 0;
    memset(v202, 0, v201);
    if ( !v4[29] )
    {
      v4[27] = 0;
      v4[23] = 0;
      v4[1453] = 0;
    }
LABEL_63:
    sub_304148(a1);
    goto LABEL_64;
  }
  sub_304148(a1);
  if ( !*(_DWORD *)(a1 + 16) )
    goto LABEL_65;
LABEL_33:
  if ( (_DWORD)v3 == 4 )
  {
LABEL_34:
    v16 = v4[6];
    if ( v16 > 0 )
    {
      v17 = v4[5];
      v18 = v16 == 2;
      v19 = v4[2];
      v20 = *(_DWORD *)(a1 + 48);
      v4[5] = v17 + 1;
      if ( v18 )
      {
        *(_BYTE *)(v19 + v17) = v20;
        v135 = v4[5];
        v136 = v4[2];
        v137 = BYTE1(*(_DWORD *)(a1 + 48));
        v4[5] = v135 + 1;
        *(_BYTE *)(v136 + v135) = v137;
        v138 = v4[5];
        LOWORD(v136) = *(_WORD *)(a1 + 50);
        v139 = v4[2];
        v4[5] = v138 + 1;
        *(_BYTE *)(v139 + v138) = v136;
        v140 = v4[5];
        LOBYTE(v136) = *(_BYTE *)(a1 + 51);
        v141 = v4[2];
        v4[5] = v140 + 1;
        *(_BYTE *)(v141 + v140) = v136;
        v142 = v4[5];
        v143 = *(_DWORD *)(a1 + 8);
        v144 = v4[2];
        v4[5] = v142 + 1;
        *(_BYTE *)(v144 + v142) = v143;
        v145 = v4[5];
        v146 = v4[2];
        LOBYTE(v142) = BYTE1(*(_DWORD *)(a1 + 8));
        v4[5] = v145 + 1;
        *(_BYTE *)(v146 + v145) = v142;
        v147 = v4[5];
        LOWORD(v146) = *(_WORD *)(a1 + 10);
        v148 = v4[2];
        v4[5] = v147 + 1;
        *(_BYTE *)(v148 + v147) = v146;
        LOBYTE(v146) = *(_BYTE *)(a1 + 11);
        v149 = v4[5];
        v150 = v4[2];
        v4[5] = v149 + 1;
        *(_BYTE *)(v150 + v149) = v146;
      }
      else
      {
        *(_BYTE *)(v19 + v17) = HIBYTE(v20);
        v21 = v4[5];
        v22 = v4[2];
        v4[5] = v21 + 1;
        *(_BYTE *)(v22 + v21) = BYTE2(v20);
        LOWORD(v21) = *(_WORD *)(a1 + 48);
        v23 = v4[5];
        v24 = v4[2];
        v4[5] = v23 + 1;
        *(_BYTE *)(v24 + v23) = BYTE1(v21);
        v25 = v4[5];
        v26 = v4[2];
        v4[5] = v25 + 1;
        *(_BYTE *)(v26 + v25) = v21;
      }
      sub_304148(a1);
      v27 = v4[6];
      v28 = v27 <= 0;
      if ( v27 > 0 )
        v27 = -v27;
      v29 = __clz(v4[5]);
      if ( !v28 )
        v4[6] = v27;
      HIDWORD(v3) = v29 >> 5;
    }
    else
    {
      HIDWORD(v3) = 1;
    }
  }
  return HIDWORD(v3);
}
