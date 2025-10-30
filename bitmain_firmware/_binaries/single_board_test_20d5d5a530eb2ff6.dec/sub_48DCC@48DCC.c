int __fastcall sub_48DCC(int a1, int src, _BYTE *a3, unsigned int a4, int a5, int a6)
{
  _BYTE *v6; // lr
  _DWORD *v7; // r9
  int v10; // r7
  int v11; // r6
  __int64 v12; // r2
  int v13; // r3
  int v14; // r2
  char *v15; // r4
  char *v16; // r11
  _DWORD *v17; // r7
  unsigned int v18; // r3
  int v19; // r5
  int v20; // lr
  int v21; // r3
  _DWORD *v22; // r1
  int v23; // r12
  char *v24; // r2
  size_t v25; // r4
  unsigned int v26; // r3
  _BYTE *i; // r0
  void *v28; // r3
  int v30; // r12
  int v31; // r3
  int v32; // r4
  _BYTE *v33; // r11
  int v34; // r7
  char *v35; // r4
  char *v36; // lr
  int v37; // r2
  unsigned int v38; // r3
  char *v39; // r1
  char *v40; // r2
  unsigned int v41; // r3
  int v42; // r12
  int v43; // r9
  int v44; // r1
  char *v45; // r5
  int v46; // r8
  char *v47; // r6
  unsigned int v48; // r1
  int v49; // r3
  int v50; // r7
  int v51; // r3
  char *v52; // r11
  int v53; // lr
  char *v54; // r7
  char *v55; // r2
  char *v56; // lr
  unsigned int v57; // r3
  int v58; // r2
  unsigned int v59; // r12
  char *v60; // r1
  unsigned int v61; // r3
  int v62; // r6
  int v63; // r7
  int v64; // r9
  int v65; // r2
  char *v66; // r5
  int v67; // r10
  char *v68; // r7
  unsigned int v69; // r2
  int v70; // r3
  int v71; // r3
  int v72; // r2
  char *v73; // r4
  unsigned int v74; // r3
  _BYTE *m; // r2
  char *v76; // r11
  _DWORD *v77; // lr
  _DWORD *v78; // r1
  unsigned int v79; // r10
  unsigned int v80; // r3
  int v81; // r6
  int v82; // r12
  int v83; // r3
  _DWORD *v84; // r4
  int v85; // lr
  char *v86; // r2
  char *v87; // r2
  int v88; // r5
  char *v89; // r4
  int v90; // r8
  char *v91; // r5
  int v92; // r6
  char *v93; // r4
  bool v94; // cf
  int v95; // r12
  _BYTE *v96; // r3
  int v97; // r5
  _BYTE *v98; // r12
  int v99; // r6
  int v100; // r5
  unsigned int v101; // r6
  char *v102; // r2
  _BYTE *v103; // r3
  unsigned int v104; // r5
  char *v105; // r5
  _DWORD *v106; // r8
  unsigned int v107; // r4
  unsigned int v108; // r2
  unsigned int v109; // r2
  char *v110; // r2
  unsigned int v111; // r3
  unsigned int v112; // r3
  bool v113; // cf
  unsigned int v114; // r5
  _BYTE *v115; // r6
  int v116; // r3
  _BYTE *v117; // r5
  int v118; // r2
  int v119; // r3
  _BYTE *v120; // r7
  _BYTE *v121; // r1
  unsigned int v122; // r9
  char *v123; // r6
  _BYTE *v124; // r2
  unsigned int v125; // r3
  char *v126; // r5
  unsigned int v127; // r3
  unsigned __int16 *v128; // r2
  unsigned int v129; // r6
  unsigned int v130; // r3
  char *v131; // r2
  unsigned int v132; // r3
  unsigned int v133; // r3
  unsigned int v134; // r3
  int v135; // r4
  int v136; // r3
  size_t v137; // r5
  unsigned int v138; // r3
  _BYTE *j; // r0
  void *v140; // r3
  _BYTE *v141; // r10
  size_t v142; // r5
  unsigned int v143; // r3
  _BYTE *k; // r4
  void *v145; // r4
  unsigned int v146; // r3
  int v147; // r4
  int v148; // r3
  _DWORD *v149; // r4
  _BOOL4 v150; // r3
  char *v151; // r3
  unsigned int v152; // r4
  _BYTE *v153; // r3
  int v154; // r1
  int *v155; // r9
  _BYTE *v156; // lr
  int v157; // r4
  int v158; // r1
  unsigned int v159; // r5
  char *v160; // r12
  _BYTE *v161; // r1
  unsigned int v162; // r3
  char *v163; // r4
  _DWORD *v164; // r8
  unsigned int v165; // r3
  unsigned int v166; // r4
  unsigned int v167; // r4
  unsigned int v168; // r3
  int v169; // r2
  _DWORD *v170; // r7
  int *v171; // lr
  _BOOL4 v172; // r3
  char *v173; // r3
  unsigned int v174; // r4
  _BYTE *v175; // r3
  int v176; // r6
  _BYTE *v177; // r7
  int v178; // r6
  int v179; // r4
  _BYTE *v180; // lr
  unsigned int v181; // r6
  char *v182; // r8
  _BYTE *v183; // r4
  unsigned int v184; // r3
  char *v185; // r12
  _DWORD *v186; // r10
  unsigned int v187; // r3
  unsigned int v188; // r8
  unsigned int v189; // r8
  unsigned int v190; // r3
  int v191; // r2
  int v192; // r3
  int v193; // r3
  char *v194; // r5
  char *v195; // r3
  int v196; // r12
  int v197; // t1
  int v198; // t1
  char *v199; // r2
  char *v200; // r3
  int v201; // r6
  int v202; // t1
  int v203; // t1
  int v204; // [sp+0h] [bp-34h]
  int v205; // [sp+0h] [bp-34h]
  unsigned int v206; // [sp+0h] [bp-34h]
  unsigned int v207; // [sp+4h] [bp-30h]
  int v208; // [sp+4h] [bp-30h]
  char *v209; // [sp+4h] [bp-30h]
  char *v210; // [sp+4h] [bp-30h]
  unsigned int v211; // [sp+4h] [bp-30h]
  unsigned __int16 *v212; // [sp+4h] [bp-30h]
  char *v213; // [sp+8h] [bp-2Ch]
  unsigned int v214; // [sp+8h] [bp-2Ch]
  _BYTE *v215; // [sp+8h] [bp-2Ch]
  _BYTE *v216; // [sp+8h] [bp-2Ch]
  _DWORD *v217; // [sp+Ch] [bp-28h]
  char *v218; // [sp+Ch] [bp-28h]
  unsigned int v219; // [sp+Ch] [bp-28h]
  char *v220; // [sp+Ch] [bp-28h]
  int v221; // [sp+10h] [bp-24h]
  char *v222; // [sp+14h] [bp-20h]
  int v223; // [sp+14h] [bp-20h]
  _BYTE *v224; // [sp+18h] [bp-1Ch]
  int v225; // [sp+18h] [bp-1Ch]
  _BYTE *v226; // [sp+18h] [bp-1Ch]
  char *srca; // [sp+1Ch] [bp-18h]
  char *srcb; // [sp+1Ch] [bp-18h]
  _BYTE *srcc; // [sp+1Ch] [bp-18h]
  char *srcd; // [sp+1Ch] [bp-18h]
  char *v231; // [sp+20h] [bp-14h]
  char *v232; // [sp+20h] [bp-14h]
  int v233; // [sp+20h] [bp-14h]
  unsigned int v234; // [sp+20h] [bp-14h]
  char *v235; // [sp+24h] [bp-10h]

  v7 = (_DWORD *)src;
  v10 = a1;
  v11 = a6;
  if ( a1 )
  {
    src = a1 & 3;
    if ( (a1 & 3) != 0 )
    {
      a1 = 0;
    }
    else
    {
      memset((void *)a1, 0, 0x4014u);
      a1 = v10;
    }
  }
  if ( a6 > 0 )
  {
    if ( a6 >= 65537 )
      v11 = 65537;
  }
  else
  {
    v11 = 1;
  }
  if ( a4 > 0x7E000000 )
  {
    HIDWORD(v12) = 0;
  }
  else
  {
    src = (int)a4 >> 31;
    v12 = -2139062143LL * (int)a4;
  }
  if ( a4 <= 0x7E000000 )
    HIDWORD(v12) = ((int)(a4 + HIDWORD(v12)) >> 7) - src + a4 + 16;
  if ( a5 >= SHIDWORD(v12) )
  {
    if ( (int)a4 <= 65546 )
    {
      if ( a4 <= 0x7E000000 )
      {
        if ( a4 )
        {
          v13 = *(_DWORD *)(a1 + 16392);
          *(_DWORD *)(a1 + 16396) = 3;
          if ( (int)a4 <= 12 )
            v6 = a3;
          v14 = *(_DWORD *)(a1 + 16400);
          *(_DWORD *)(a1 + 16392) = a4 + v13;
          *(_DWORD *)(a1 + 16400) = v14 + a4;
          v15 = (char *)v7 + a4;
          v213 = (char *)v7 + a4;
          if ( (int)a4 <= 12 )
            goto LABEL_27;
          v16 = (char *)v7 - v13;
          v217 = v7;
          v17 = (_DWORD *)((char *)v7 + 1);
          v207 = (unsigned int)(v15 - 11);
          *(_WORD *)(a1 + 2 * ((unsigned int)(-1640531535 * *v7) >> 19)) = v13;
          srca = v15 - 6;
          v231 = (char *)v7;
          v224 = a3;
          v18 = (unsigned int)(-1640531535 * *(_DWORD *)((char *)v7 + 1)) >> 19;
LABEL_22:
          v19 = v11 << 6;
          v20 = 1;
          while ( 1 )
          {
            v22 = (_DWORD *)((char *)v17 + v20);
            v94 = v207 >= (unsigned int)v17 + v20;
            v23 = 2 * v18;
            v20 = v19++ >> 6;
            v24 = &v16[*(unsigned __int16 *)(a1 + 2 * v18)];
            if ( !v94 )
            {
              v6 = a3;
              v7 = v217;
              a3 = v224;
LABEL_27:
              v25 = v213 - (char *)v7;
              if ( (unsigned int)(v213 - (char *)v7) <= 0xE )
              {
                v28 = v6 + 1;
                *v6 = 16 * v25;
              }
              else
              {
                v26 = v25 - 15;
                *v6 = -16;
                for ( i = v6 + 1; v26 > 0xFE; ++i )
                {
                  v26 -= 255;
                  *i = -1;
                }
                *i = v26;
                v28 = i + 1;
              }
              return (_BYTE *)memcpy(v28, v7, v25) + v25 - a3;
            }
            v21 = *v22;
            *(_WORD *)(a1 + v23) = (_WORD)v17 - (_WORD)v16;
            v18 = (unsigned int)(-1640531535 * v21) >> 19;
            if ( *v17 == *(_DWORD *)v24 )
              break;
            v17 = v22;
          }
          v149 = v17;
          v150 = v17 > v217;
          if ( v231 >= v24 )
            v150 = 0;
          if ( v150 && *(v24 - 1) == *((_BYTE *)v17 - 1) )
          {
            v149 = (_DWORD *)((char *)v17 - 1);
            v151 = v24 - 1;
            while ( 1 )
            {
              v24 = v151;
              v17 = v149;
              --v151;
              if ( v149 <= v217 || v231 >= v24 || *((unsigned __int8 *)v149 - 1) != (unsigned __int8)*(v24 - 1) )
                break;
              v149 = (_DWORD *)((char *)v149 - 1);
            }
          }
          v152 = (char *)v149 - (char *)v217;
          v153 = a3 + 1;
          if ( v152 > 0xE )
          {
            v154 = v152 - 15;
            for ( *a3 = -16; v154 > 254; ++v153 )
            {
              v154 -= 255;
              *v153 = -1;
            }
            *v153++ = v154;
          }
          else
          {
            *a3 = 16 * v152;
          }
          v155 = v217;
          v156 = &v153[v152];
          do
          {
            v157 = *v155;
            v153 += 8;
            v158 = v155[1];
            v155 += 2;
            *((_DWORD *)v153 - 2) = v157;
            *((_DWORD *)v153 - 1) = v158;
          }
          while ( v156 > v153 );
          v159 = (unsigned int)(v213 - 8);
          while ( 1 )
          {
            v160 = (char *)(v17 + 1);
            *(_WORD *)v156 = (_WORD)v17 - (_WORD)v24;
            v161 = v156 + 2;
            if ( (unsigned int)(v17 + 1) >= v159 )
            {
              v164 = v24 + 4;
              v163 = (char *)(v17 + 1);
            }
            else
            {
              v162 = v17[1] ^ *((_DWORD *)v24 + 1);
              if ( v162 )
              {
                v166 = __clz(__rbit32(v162)) >> 3;
                v17 = (_DWORD *)((char *)v17 + v166 + 4);
LABEL_224:
                *a3 += v166;
                a3 = v156 + 2;
                goto LABEL_215;
              }
              v163 = (char *)(v17 + 2);
              v164 = v24 + 8;
              if ( (unsigned int)(v17 + 2) < v159 )
              {
                v165 = *((_DWORD *)v24 + 2) ^ v17[2];
                if ( v165 )
                {
LABEL_210:
                  v166 = &v163[__clz(__rbit32(v165)) >> 3] - v160;
                  goto LABEL_211;
                }
                while ( 1 )
                {
                  v163 += 4;
                  ++v164;
                  if ( (unsigned int)v163 >= v159 )
                    break;
                  v165 = *(_DWORD *)v163 ^ *v164;
                  if ( v165 )
                    goto LABEL_210;
                }
              }
            }
            if ( v163 < srca && *(unsigned __int16 *)v163 == *(unsigned __int16 *)v164 )
            {
              v163 += 2;
              v164 = (_DWORD *)((char *)v164 + 2);
            }
            if ( v163 < v213 - 5 && *(unsigned __int8 *)v164 == (unsigned __int8)*v163 )
              ++v163;
            v166 = v163 - v160;
LABEL_211:
            v17 = (_DWORD *)((char *)v17 + v166 + 4);
            if ( v166 <= 0xE )
              goto LABEL_224;
            v167 = v166 - 15;
            *a3 += 15;
            v156[2] = -1;
            v156[3] = -1;
            v156[4] = -1;
            for ( v156[5] = -1; v167 >= 0x3FC; v161[3] = -1 )
            {
              v167 -= 1020;
              v161[4] = -1;
              v161 += 4;
              v161[1] = -1;
              v161[2] = -1;
            }
            a3 = &v161[v167 / 0xFF + 1];
            v161[v167 / 0xFF] = v167 + v167 / 0xFF;
LABEL_215:
            if ( v207 <= (unsigned int)v17 )
            {
              v6 = a3;
              v7 = v17;
              a3 = v224;
              goto LABEL_27;
            }
            *(_WORD *)(a1 + 2 * ((unsigned int)(-1640531535 * *(_DWORD *)((char *)v17 - 2)) >> 19)) = (_WORD)v17 - 2 - (_WORD)v16;
            v168 = (unsigned int)(-1640531535 * *v17) >> 19;
            v169 = *(unsigned __int16 *)(a1 + 2 * v168);
            *(_WORD *)(a1 + 2 * v168) = (_WORD)v17 - (_WORD)v16;
            v24 = &v16[v169];
            if ( *v17 != *(_DWORD *)v24 )
            {
              v192 = *(_DWORD *)((char *)v17 + 1);
              v217 = v17;
              v17 = (_DWORD *)((char *)v17 + 1);
              v18 = (unsigned int)(-1640531535 * v192) >> 19;
              goto LABEL_22;
            }
            *a3 = 0;
            v156 = a3 + 1;
          }
        }
LABEL_36:
        *a3 = 0;
        return 1;
      }
      return 0;
    }
    if ( (unsigned int)v7 < 0x10000 )
      v31 = 2;
    else
      v31 = 1;
    v204 = v31;
    if ( a4 > 0x7E000000 )
      return 0;
    v32 = *(_DWORD *)(a1 + 16392);
    v33 = a3;
    v232 = (char *)v7;
    v208 = *(_DWORD *)(a1 + 16400);
    *(_DWORD *)(a1 + 16396) = v31;
    v34 = a4 + v32;
    v35 = (char *)v7 - v32;
    *(_DWORD *)(a1 + 16392) = v34;
    v36 = v35;
    v218 = (char *)v7 + a4;
    *(_DWORD *)(a1 + 16400) = v208 + a4;
    v37 = v31;
    if ( v31 == 2 )
      v37 = (int)v35;
    v38 = (unsigned int)(-1640531535 * *v7) >> 20;
    if ( v204 == 2 )
      *(_DWORD *)(a1 + 4 * v38) = (char *)v7 - v37;
    else
      *(_DWORD *)(a1 + 4 * v38) = v7;
    v225 = v11 << 6;
    v214 = (unsigned int)v7 + a4 - 11;
    v39 = (char *)v7;
    v40 = (char *)v7 + 1;
    v41 = (unsigned int)(-1640531535 * *(_DWORD *)((char *)v7 + 1)) >> 20;
LABEL_52:
    v42 = v225;
    if ( v204 != 1 )
    {
      v43 = 1;
      srcb = v39;
      while ( 1 )
      {
        v44 = *(_DWORD *)(a1 + 4 * v41);
        v45 = &v40[v43];
        v94 = v214 >= (unsigned int)&v40[v43];
        v46 = 4 * v41;
        v43 = v42 >> 6;
        v47 = (char *)(v40 - v36);
        v209 = &v36[v44];
        v48 = v44 + 0xFFFF;
        ++v42;
        if ( !v94 )
          break;
        v49 = *(_DWORD *)v45;
        *(_DWORD *)(a1 + v46) = v47;
        v41 = (unsigned int)(-1640531535 * v49) >> 20;
        if ( (unsigned int)v47 <= v48 && *(_DWORD *)v40 == *(_DWORD *)v209 )
        {
          v93 = v209;
          v39 = srcb;
          goto LABEL_100;
        }
        v40 = v45;
      }
      v39 = srcb;
LABEL_162:
      v137 = v218 - v39;
      if ( (unsigned int)(v218 - v39) <= 0xE )
      {
        v140 = v33 + 1;
        *v33 = 16 * v137;
      }
      else
      {
        v138 = v137 - 15;
        *v33 = -16;
        for ( j = v33 + 1; v138 > 0xFE; ++j )
        {
          v138 -= 255;
          *j = -1;
        }
        *j = v138;
        v140 = j + 1;
      }
      return (_BYTE *)memcpy(v140, v39, v137) + v137 - a3;
    }
    v90 = 1;
    while ( 1 )
    {
      v91 = &v40[v90];
      v94 = v214 >= (unsigned int)&v40[v90];
      v90 = v42++ >> 6;
      if ( !v94 )
        goto LABEL_162;
      v92 = *(_DWORD *)v91;
      v93 = *(char **)(a1 + 4 * v41);
      *(_DWORD *)(a1 + 4 * v41) = v40;
      v41 = (unsigned int)(-1640531535 * v92) >> 20;
      if ( v40 <= v93 + 0xFFFF && *(_DWORD *)v40 == *(_DWORD *)v93 )
        break;
      v40 = v91;
    }
LABEL_100:
    v94 = v232 >= v93;
    if ( v232 < v93 )
      v94 = v39 >= v40;
    if ( !v94 && *(v93 - 1) == *(v40 - 1) )
    {
      v194 = v40 - 1;
      v195 = v93 - 1;
      do
      {
        v40 = v194;
        v93 = v195;
        if ( v39 >= v194 )
          break;
        if ( v232 >= v195 )
          break;
        v197 = (unsigned __int8)*--v194;
        v196 = v197;
        v198 = (unsigned __int8)*--v195;
      }
      while ( v196 == v198 );
    }
    v95 = v40 - v39;
    v96 = v33 + 1;
    if ( (unsigned int)(v40 - v39) > 0xE )
    {
      v97 = v95 - 15;
      for ( *v33 = -16; v97 > 254; ++v96 )
      {
        v97 -= 255;
        *v96 = -1;
      }
      *v96++ = v97;
    }
    else
    {
      *v33 = 16 * v95;
    }
    v98 = &v96[v95];
    do
    {
      v99 = *(_DWORD *)v39;
      v96 += 8;
      v100 = *((_DWORD *)v39 + 1);
      v39 += 8;
      *((_DWORD *)v96 - 2) = v99;
      *((_DWORD *)v96 - 1) = v100;
    }
    while ( v98 > v96 );
    v39 = v40;
    v101 = (unsigned int)(v218 - 8);
    while ( 1 )
    {
      v102 = v39 + 4;
      *(_WORD *)v98 = (_WORD)v39 - (_WORD)v93;
      v103 = v98 + 2;
      if ( (unsigned int)(v39 + 4) >= v101 )
      {
        v106 = v93 + 4;
        v105 = v39 + 4;
      }
      else
      {
        v104 = *((_DWORD *)v39 + 1) ^ *((_DWORD *)v93 + 1);
        if ( v104 )
        {
          v108 = __clz(__rbit32(v104)) >> 3;
          v39 += v108 + 4;
LABEL_168:
          *v33 += v108;
          v33 = v98 + 2;
          goto LABEL_123;
        }
        v105 = v39 + 8;
        v106 = v93 + 8;
        if ( (unsigned int)(v39 + 8) < v101 )
        {
          v107 = *((_DWORD *)v39 + 2) ^ *((_DWORD *)v93 + 2);
          if ( v107 )
          {
LABEL_118:
            v108 = &v105[__clz(__rbit32(v107)) >> 3] - v102;
            goto LABEL_119;
          }
          while ( 1 )
          {
            v105 += 4;
            ++v106;
            if ( (unsigned int)v105 >= v101 )
              break;
            v107 = *(_DWORD *)v105 ^ *v106;
            if ( v107 )
              goto LABEL_118;
          }
        }
      }
      if ( v105 < v218 - 6 && *(unsigned __int16 *)v105 == *(unsigned __int16 *)v106 )
      {
        v105 += 2;
        v106 = (_DWORD *)((char *)v106 + 2);
      }
      if ( v105 < v218 - 5 && *(unsigned __int8 *)v106 == (unsigned __int8)*v105 )
        ++v105;
      v108 = v105 - v102;
LABEL_119:
      v39 += v108 + 4;
      if ( v108 <= 0xE )
        goto LABEL_168;
      v109 = v108 - 15;
      *v33 += 15;
      v98[2] = -1;
      v98[3] = -1;
      v98[4] = -1;
      for ( v98[5] = -1; v109 >= 0x3FC; v103[3] = -1 )
      {
        v109 -= 1020;
        v103[4] = -1;
        v103 += 4;
        v103[1] = -1;
        v103[2] = -1;
      }
      v33 = &v103[v109 / 0xFF + 1];
      v103[v109 / 0xFF] = v109 + v109 / 0xFF;
LABEL_123:
      if ( v214 <= (unsigned int)v39 )
        goto LABEL_162;
      v110 = v39 - 2;
      v111 = (unsigned int)(-1640531535 * *(_DWORD *)(v39 - 2)) >> 20;
      if ( v204 == 2 )
      {
        *(_DWORD *)(a1 + 4 * v111) = v110 - v36;
        v134 = (unsigned int)(-1640531535 * *(_DWORD *)v39) >> 20;
        v135 = *(_DWORD *)(a1 + 4 * v134);
        *(_DWORD *)(a1 + 4 * v134) = v39 - v36;
        v136 = v135 + 65280;
        v93 = &v36[v135];
        if ( v39 - v36 > (unsigned int)(v136 + 255) )
        {
LABEL_161:
          v40 = v39 + 1;
          v41 = (unsigned int)(-1640531535 * *(_DWORD *)(v39 + 1)) >> 20;
          goto LABEL_52;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4 * v111) = v110;
        v112 = (unsigned int)(-1640531535 * *(_DWORD *)v39) >> 20;
        v93 = *(char **)(a1 + 4 * v112);
        *(_DWORD *)(a1 + 4 * v112) = v39;
        if ( v39 > v93 + 0xFFFF )
          goto LABEL_161;
      }
      if ( *(_DWORD *)v39 != *(_DWORD *)v93 )
        goto LABEL_161;
      *v33 = 0;
      v98 = v33 + 1;
    }
  }
  if ( (int)a4 > 65546 )
  {
    if ( (unsigned int)v7 < 0x10000 )
      v30 = 2;
    else
      v30 = 1;
    if ( a4 > 0x7E000000 )
      return 0;
    v50 = *(_DWORD *)(a1 + 16392);
    v51 = *(_DWORD *)(a1 + 16400);
    *(_DWORD *)(a1 + 16396) = v30;
    v52 = (char *)v7;
    v53 = a4 + v50;
    v54 = (char *)v7 - v50;
    *(_DWORD *)(a1 + 16392) = v53;
    *(_DWORD *)(a1 + 16400) = v51 + a4;
    v55 = (char *)*v7;
    v222 = (char *)v7 + a4;
    v233 = v11 << 6;
    v56 = v54;
    if ( v30 == 2 )
      v55 = (char *)((char *)v7 - v54);
    v221 = v30;
    v219 = (unsigned int)&a3[a5];
    v57 = (unsigned int)(-1640531535 * *v7) >> 20;
    v215 = a3;
    if ( v30 == 2 )
      *(_DWORD *)(a1 + 4 * v57) = v55;
    LOWORD(v58) = 31153;
    if ( v30 != 2 )
      *(_DWORD *)(a1 + 4 * v57) = v7;
    HIWORD(v58) = -25033;
    v205 = v58;
    v235 = (char *)v7;
    srcc = a3;
    v59 = (unsigned int)v7 + a4 - 11;
    v60 = (char *)v7 + 1;
    v61 = (unsigned int)(v58 * *(_DWORD *)((char *)v7 + 1)) >> 20;
LABEL_66:
    v62 = v233;
    if ( v221 == 1 )
    {
      v63 = 1;
      while ( 1 )
      {
        v87 = &v60[v63];
        v94 = v59 >= (unsigned int)&v60[v63];
        v63 = v62++ >> 6;
        if ( !v94 )
          break;
        v88 = *(_DWORD *)v87;
        v89 = *(char **)(a1 + 4 * v61);
        *(_DWORD *)(a1 + 4 * v61) = v60;
        v61 = (unsigned int)(v205 * v88) >> 20;
        if ( v60 > v89 + 0xFFFF )
        {
          v60 = v87;
        }
        else
        {
          if ( *(_DWORD *)v60 == *(_DWORD *)v89 )
            goto LABEL_129;
          v60 = v87;
        }
      }
LABEL_171:
      v141 = srcc;
LABEL_172:
      v142 = v222 - v52;
      if ( v219 >= (unsigned int)&v215[v222 - v52 + 1 + (v222 - v52 + 240) / 0xFFu] )
      {
        if ( v142 <= 0xE )
        {
          v145 = v215 + 1;
          *v215 = 16 * v142;
        }
        else
        {
          v143 = v142 - 15;
          *v215 = -16;
          for ( k = v215 + 1; v143 > 0xFE; ++k )
          {
            v143 -= 255;
            *k = -1;
          }
          *k = v143;
          v145 = k + 1;
        }
        memcpy(v145, v52, v142);
        return (_BYTE *)v145 + v142 - v141;
      }
    }
    else
    {
      v64 = 1;
      while ( 1 )
      {
        v65 = *(_DWORD *)(a1 + 4 * v61);
        v66 = &v60[v64];
        v94 = v59 >= (unsigned int)&v60[v64];
        v67 = 4 * v61;
        v64 = v62 >> 6;
        v68 = (char *)(v60 - v56);
        v210 = &v56[v65];
        v69 = v65 + 0xFFFF;
        ++v62;
        if ( !v94 )
          goto LABEL_171;
        v70 = *(_DWORD *)v66;
        *(_DWORD *)(a1 + v67) = v68;
        v61 = (unsigned int)(v205 * v70) >> 20;
        if ( (unsigned int)v68 <= v69 && *(_DWORD *)v60 == *(_DWORD *)v210 )
          break;
        v60 = v66;
      }
      v89 = v210;
LABEL_129:
      v113 = v52 >= v60;
      if ( v52 < v60 )
        v113 = v235 >= v89;
      if ( !v113 && *(v60 - 1) == *(v89 - 1) )
      {
        v199 = v60 - 1;
        v200 = v89 - 1;
        do
        {
          v60 = v199;
          v89 = v200;
          if ( v52 >= v199 )
            break;
          if ( v235 >= v200 )
            break;
          v202 = (unsigned __int8)*--v199;
          v201 = v202;
          v203 = (unsigned __int8)*--v200;
        }
        while ( v201 == v203 );
      }
      v114 = v60 - v52;
      v115 = v215 + 1;
      if ( v219 < (unsigned int)&v215[v60 - v52 + 9 + (v60 - v52) / 0xFFu] )
        return 0;
      if ( v114 <= 0xE )
      {
        *v215 = 16 * v114;
      }
      else
      {
        v116 = v114 - 15;
        for ( *v215 = -16; v116 > 254; ++v115 )
        {
          v116 -= 255;
          *v115 = -1;
        }
        *v115++ = v116;
      }
      v117 = &v115[v114];
      do
      {
        v118 = *(_DWORD *)v52;
        v115 += 8;
        v119 = *((_DWORD *)v52 + 1);
        v52 += 8;
        *((_DWORD *)v115 - 2) = v118;
        *((_DWORD *)v115 - 1) = v119;
      }
      while ( v117 > v115 );
      v52 = v60;
      v120 = v215;
      v121 = v117;
      v122 = (unsigned int)(v222 - 8);
      while ( 1 )
      {
        v123 = v52 + 4;
        *(_WORD *)v121 = (_WORD)v52 - (_WORD)v89;
        v124 = v121 + 2;
        if ( (unsigned int)(v52 + 4) >= v122 )
        {
          v126 = v52 + 4;
          v212 = (unsigned __int16 *)(v89 + 4);
          goto LABEL_281;
        }
        v125 = *((_DWORD *)v52 + 1) ^ *((_DWORD *)v89 + 1);
        if ( v125 )
          break;
        v126 = v52 + 8;
        v212 = (unsigned __int16 *)(v89 + 8);
        if ( (unsigned int)(v52 + 8) >= v122 )
          goto LABEL_281;
        v127 = *((_DWORD *)v52 + 2) ^ *((_DWORD *)v89 + 2);
        if ( v127 )
          goto LABEL_149;
        v128 = (unsigned __int16 *)(v89 + 8);
        do
        {
          v126 += 4;
          v128 += 2;
          if ( (unsigned int)v126 >= v122 )
          {
            v212 = v128;
            v124 = v121 + 2;
LABEL_281:
            if ( v126 < v222 - 6 && *(unsigned __int16 *)v126 == *v212 )
            {
              v126 += 2;
              ++v212;
            }
            if ( v126 < v222 - 5 && *(unsigned __int8 *)v212 == (unsigned __int8)*v126 )
              ++v126;
            v129 = v126 - v123;
            goto LABEL_150;
          }
          v127 = *(_DWORD *)v126 ^ *(_DWORD *)v128;
        }
        while ( !v127 );
        v124 = v121 + 2;
LABEL_149:
        v129 = &v126[__clz(__rbit32(v127)) >> 3] - v123;
LABEL_150:
        v52 += v129 + 4;
        if ( v219 < (unsigned int)&v124[(v129 + 240) / 0xFF + 6] )
          return 0;
        if ( v129 <= 0xE )
          goto LABEL_190;
        v130 = v129 - 15;
        *v120 += 15;
        v121[2] = -1;
        v121[3] = -1;
        v121[4] = -1;
        v121[5] = -1;
        if ( v129 - 15 >= 0x3FC )
        {
          do
          {
            v130 -= 1020;
            v124[4] = -1;
            v124 += 4;
            v124[1] = -1;
            v124[2] = -1;
            v124[3] = -1;
          }
          while ( v130 >= 0x3FC );
        }
        v120 = &v124[v130 / 0xFF + 1];
        v124[v130 / 0xFF] = v130 + v130 / 0xFF;
LABEL_155:
        if ( (unsigned int)v52 >= v59 )
        {
          v215 = v120;
          v141 = srcc;
          goto LABEL_172;
        }
        v131 = v52 - 2;
        v132 = (unsigned int)(v205 * *(_DWORD *)(v52 - 2)) >> 20;
        if ( v221 != 2 )
        {
          *(_DWORD *)(a1 + 4 * v132) = v131;
          v133 = (unsigned int)(v205 * *(_DWORD *)v52) >> 20;
          v89 = *(char **)(a1 + 4 * v133);
          *(_DWORD *)(a1 + 4 * v133) = v52;
          if ( v52 <= v89 + 0xFFFF )
            goto LABEL_158;
LABEL_180:
          v60 = v52 + 1;
          v215 = v120;
          v61 = (unsigned int)(v205 * *(_DWORD *)(v52 + 1)) >> 20;
          goto LABEL_66;
        }
        *(_DWORD *)(a1 + 4 * v132) = v131 - v56;
        v146 = (unsigned int)(v205 * *(_DWORD *)v52) >> 20;
        v147 = *(_DWORD *)(a1 + 4 * v146);
        *(_DWORD *)(a1 + 4 * v146) = v52 - v56;
        v148 = v147 + 65280;
        v89 = &v56[v147];
        if ( v52 - v56 > (unsigned int)(v148 + 255) )
          goto LABEL_180;
LABEL_158:
        if ( *(_DWORD *)v52 != *(_DWORD *)v89 )
          goto LABEL_180;
        *v120 = 0;
        v121 = v120 + 1;
      }
      v129 = __clz(__rbit32(v125)) >> 3;
      v52 += v129 + 4;
      if ( v219 >= (unsigned int)(v121 + 8) )
      {
LABEL_190:
        *v120 += v129;
        v120 = v124;
        goto LABEL_155;
      }
    }
    return 0;
  }
  if ( a4 > 0x7E000000 )
    return 0;
  if ( !a4 )
  {
    if ( a5 > 0 )
      goto LABEL_36;
    return 0;
  }
  v71 = *(_DWORD *)(a1 + 16392);
  v211 = (unsigned int)&a3[a5];
  v72 = *(_DWORD *)(a1 + 16400);
  *(_DWORD *)(a1 + 16392) = a4 + v71;
  *(_DWORD *)(a1 + 16400) = v72 + a4;
  *(_DWORD *)(a1 + 16396) = 3;
  v73 = (char *)v7 + a4;
  v220 = (char *)v7 + a4;
  if ( (int)a4 <= 12 )
  {
    v216 = a3;
    goto LABEL_76;
  }
  v76 = (char *)v7 - v71;
  v77 = v7;
  v223 = v11 << 6;
  v216 = a3;
  v226 = a3;
  v78 = (_DWORD *)((char *)v7 + 1);
  srcd = (char *)v7;
  *(_WORD *)(a1 + 2 * ((unsigned int)(-1640531535 * *v7) >> 19)) = v71;
  v79 = (unsigned int)(v73 - 11);
  v234 = (unsigned int)(v73 - 6);
  v80 = (unsigned int)(-1640531535 * *(_DWORD *)((char *)v7 + 1)) >> 19;
LABEL_82:
  v81 = v223;
  v82 = 1;
  v7 = v77;
  while ( 1 )
  {
    v84 = (_DWORD *)((char *)v78 + v82);
    v94 = v79 >= (unsigned int)v78 + v82;
    v85 = 2 * v80;
    v82 = v81++ >> 6;
    v86 = &v76[*(unsigned __int16 *)(a1 + 2 * v80)];
    if ( !v94 )
    {
      a3 = v226;
      goto LABEL_76;
    }
    v83 = *v84;
    *(_WORD *)(a1 + v85) = (_WORD)v78 - (_WORD)v76;
    v80 = (unsigned int)(-1640531535 * v83) >> 19;
    if ( *v78 == *(_DWORD *)v86 )
      break;
    v78 = v84;
  }
  v170 = v78;
  v171 = v7;
  v172 = v78 > v7;
  if ( srcd >= v86 )
    v172 = 0;
  if ( v172 && *(v86 - 1) == *((_BYTE *)v78 - 1) )
  {
    v170 = (_DWORD *)((char *)v78 - 1);
    v173 = v86 - 1;
    while ( 1 )
    {
      v86 = v173;
      v78 = v170;
      --v173;
      if ( v170 <= v7 || srcd >= v86 || *((unsigned __int8 *)v170 - 1) != (unsigned __int8)*(v86 - 1) )
        break;
      v170 = (_DWORD *)((char *)v170 - 1);
    }
  }
  v174 = (char *)v170 - (char *)v7;
  v175 = v216 + 1;
  if ( v211 < (unsigned int)&v216[v174 + 9 + v174 / 0xFF] )
    return 0;
  if ( v174 <= 0xE )
  {
    *v216 = 16 * v174;
  }
  else
  {
    v176 = v174 - 15;
    for ( *v216 = -16; v176 > 254; ++v175 )
    {
      v176 -= 255;
      *v175 = -1;
    }
    *v175++ = v176;
  }
  v177 = &v175[v174];
  do
  {
    v178 = *v171;
    v175 += 8;
    v179 = v171[1];
    v171 += 2;
    *((_DWORD *)v175 - 2) = v178;
    *((_DWORD *)v175 - 1) = v179;
  }
  while ( v177 > v175 );
  v180 = v216;
  v206 = v79;
  v181 = (unsigned int)(v220 - 8);
  while ( 1 )
  {
    v182 = (char *)(v78 + 1);
    *(_WORD *)v177 = (_WORD)v78 - (_WORD)v86;
    v183 = v177 + 2;
    if ( (unsigned int)(v78 + 1) >= v181 )
    {
      v186 = v86 + 4;
      v185 = (char *)(v78 + 1);
    }
    else
    {
      v184 = v78[1] ^ *((_DWORD *)v86 + 1);
      if ( v184 )
      {
        v188 = __clz(__rbit32(v184)) >> 3;
        v78 = (_DWORD *)((char *)v78 + v188 + 4);
        if ( v211 < (unsigned int)(v177 + 8) )
          return 0;
LABEL_267:
        *v180 += v188;
        v180 = v177 + 2;
        goto LABEL_259;
      }
      v185 = (char *)(v78 + 2);
      v186 = v86 + 8;
      if ( (unsigned int)(v78 + 2) < v181 )
      {
        v187 = *((_DWORD *)v86 + 2) ^ v78[2];
        if ( v187 )
        {
LABEL_253:
          v188 = &v185[__clz(__rbit32(v187)) >> 3] - v182;
          goto LABEL_254;
        }
        while ( 1 )
        {
          v185 += 4;
          ++v186;
          if ( (unsigned int)v185 >= v181 )
            break;
          v187 = *(_DWORD *)v185 ^ *v186;
          if ( v187 )
            goto LABEL_253;
        }
      }
    }
    if ( (unsigned int)v185 < v234 && *(unsigned __int16 *)v185 == *(unsigned __int16 *)v186 )
    {
      v185 += 2;
      v186 = (_DWORD *)((char *)v186 + 2);
    }
    if ( v185 < v220 - 5 && *(unsigned __int8 *)v186 == (unsigned __int8)*v185 )
      ++v185;
    v188 = v185 - v182;
LABEL_254:
    v78 = (_DWORD *)((char *)v78 + v188 + 4);
    if ( v211 < (unsigned int)&v183[(v188 + 240) / 0xFF + 6] )
      return 0;
    if ( v188 <= 0xE )
      goto LABEL_267;
    v189 = v188 - 15;
    *v180 += 15;
    v177[2] = -1;
    v177[3] = -1;
    v177[4] = -1;
    for ( v177[5] = -1; v189 >= 0x3FC; v183[3] = -1 )
    {
      v189 -= 1020;
      v183[4] = -1;
      v183 += 4;
      v183[1] = -1;
      v183[2] = -1;
    }
    v180 = &v183[v189 / 0xFF + 1];
    v183[v189 / 0xFF] = v189 + v189 / 0xFF;
LABEL_259:
    if ( (unsigned int)v78 >= v206 )
      break;
    *(_WORD *)(a1 + 2 * ((unsigned int)(-1640531535 * *(_DWORD *)((char *)v78 - 2)) >> 19)) = (_WORD)v78
                                                                                            - 2
                                                                                            - (_WORD)v76;
    v190 = (unsigned int)(-1640531535 * *v78) >> 19;
    v191 = *(unsigned __int16 *)(a1 + 2 * v190);
    *(_WORD *)(a1 + 2 * v190) = (_WORD)v78 - (_WORD)v76;
    v86 = &v76[v191];
    if ( *v78 != *(_DWORD *)v86 )
    {
      v193 = *(_DWORD *)((char *)v78 + 1);
      v216 = v180;
      v77 = v78;
      v79 = v206;
      v78 = (_DWORD *)((char *)v78 + 1);
      v80 = (unsigned int)(-1640531535 * v193) >> 19;
      goto LABEL_82;
    }
    *v180 = 0;
    v177 = v180 + 1;
  }
  v216 = v180;
  v7 = v78;
  a3 = v226;
LABEL_76:
  v25 = v220 - (char *)v7;
  if ( v211 < (unsigned int)&v216[v220 - (char *)v7 + 1 + (v220 - (char *)v7 + 240) / 0xFFu] )
    return 0;
  if ( v25 <= 0xE )
  {
    *v216 = 16 * v25;
    v28 = v216 + 1;
  }
  else
  {
    v74 = v25 - 15;
    *v216 = -16;
    for ( m = v216 + 1; v74 > 0xFE; ++m )
    {
      v74 -= 255;
      *m = -1;
    }
    *m = v74;
    v28 = m + 1;
  }
  return (_BYTE *)memcpy(v28, v7, v25) + v25 - a3;
}
