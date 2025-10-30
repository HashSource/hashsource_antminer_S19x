int __fastcall sub_3076EC(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v3; // r10
  unsigned __int8 *v4; // r6
  int v5; // r2
  unsigned int v6; // r9
  int v7; // r3
  unsigned int v8; // r5
  unsigned int v9; // r8
  unsigned int i; // r4
  unsigned int v11; // r11
  int v12; // t1
  unsigned int v13; // r0
  unsigned int v14; // r1
  bool v15; // cc
  unsigned int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r9
  unsigned __int8 **v19; // r11
  size_t v20; // r7
  int v21; // r0
  int v22; // t1
  unsigned int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r0
  unsigned int v28; // r1
  int v29; // r0
  int v30; // t1
  unsigned int v31; // r12
  int v32; // r9
  unsigned int v33; // lr
  int v34; // r1
  int v35; // r2
  int v36; // r3
  unsigned int v37; // r0
  unsigned int j; // r3
  int v39; // t1
  int v40; // r3
  int v41; // r3
  unsigned int v42; // r3
  int v43; // r9
  unsigned __int8 *v44; // r2
  unsigned __int8 *v45; // r5
  int v46; // r3
  int v47; // r3
  int v48; // r3
  int v49; // r2
  bool v50; // zf
  int v51; // r2
  int v52; // r5
  bool v53; // zf
  _BOOL4 v55; // r3
  int v56; // r0
  int v57; // r1
  int v58; // r0
  int v59; // t1
  int v60; // r2
  int v61; // r3
  int v62; // r3
  int v63; // r3
  bool v64; // zf
  int v65; // r3
  int v66; // r3
  int v67; // r3
  char v68; // r3
  int v69; // t1
  _BYTE *v70; // r1
  bool v71; // cc
  int v72; // r2
  bool v73; // zf
  __int64 v74; // r0
  unsigned int v75; // r3
  unsigned int v76; // r1
  unsigned int v77; // r3
  unsigned int v78; // r0
  int v79; // r3
  unsigned __int8 *v80; // r2
  int v81; // r2
  int v82; // t1
  int v83; // r0
  unsigned int v84; // r3
  unsigned int v85; // r12
  unsigned int v86; // lr
  unsigned __int8 *v87; // r2
  unsigned int v88; // lr
  int v89; // t1
  int v90; // r12
  int v91; // r1
  int v92; // t1
  unsigned int v93; // r3
  int v94; // r2
  unsigned int v95; // r2
  size_t v96; // r7
  _DWORD *v97; // r1
  int v98; // r0
  int v99; // r3
  unsigned int v100; // r1
  int v101; // r2
  void *v102; // r0
  size_t v103; // r2
  int v104; // r2
  int v105; // r2
  int v106; // r2
  int v107; // t1
  int v108; // t1
  int v109; // t1
  unsigned int v110; // r2
  int v111; // t1
  int v112; // r1
  unsigned __int8 *v113; // r1
  unsigned __int8 *v114; // r12
  unsigned int v115; // r1
  unsigned int v116; // r2
  char *v117; // r0
  int v118; // t1
  __int16 v119; // lr
  int v120; // t1
  int v121; // r3
  unsigned int v122; // r0
  int v123; // r3
  int v124; // r0
  int v125; // r0
  int v126; // t1
  int v127; // r2
  int v128; // r2
  unsigned int v129; // r2
  bool v130; // cf
  char *v131; // r0
  unsigned int v132; // r2
  unsigned int v133; // r1
  char *v134; // r12
  char *v135; // r3
  char v136; // t1
  unsigned __int8 *v137; // r2
  unsigned int v138; // r7
  int v139; // r3
  int v140; // r9
  int v141; // t1
  int v142; // r1
  unsigned int v143; // r0
  unsigned int v144; // r3
  bool v145; // cc
  unsigned __int8 *v146; // r2
  unsigned int v147; // r7
  int v148; // r3
  int v149; // r9
  int v150; // t1
  int v151; // r1
  unsigned int v152; // r0
  unsigned int v153; // r3
  bool v154; // cc
  int v155; // r0
  unsigned __int8 *v156; // r2
  int v157; // r1
  int v158; // lr
  int v159; // t1
  int v160; // r12
  int v161; // r0
  unsigned int v162; // r3
  int v163; // r12
  int v164; // t1
  unsigned __int8 *v165; // r2
  int v166; // r9
  int v167; // r0
  int v168; // t1
  int v169; // r0
  int v170; // r3
  char *v171; // r3
  int v172; // t1
  unsigned int v173; // r8
  int v174; // r1
  int v175; // r1
  __int16 v176; // r2
  unsigned int v177; // r1
  int v178; // r3
  int v179; // t1
  int v180; // t1
  int v181; // r0
  int v182; // r9
  unsigned __int8 *v183; // r7
  int v184; // lr
  int v185; // r7
  int v186; // t1
  unsigned __int8 *v187; // r2
  int v188; // r2
  int v189; // r0
  char *v190; // r1
  int v191; // r0
  unsigned int v192; // r8
  int v193; // r1
  int *v194; // r3
  int v195; // r0
  unsigned int v196; // r3
  int v197; // r0
  int v198; // r0
  int v199; // r1
  unsigned int v200; // r2
  unsigned int v201; // r3
  int v202; // r0
  int v203; // r1
  unsigned __int8 *v204; // [sp+8h] [bp-3Ch]
  char *dest; // [sp+Ch] [bp-38h]
  unsigned int v206; // [sp+10h] [bp-34h]
  _BOOL4 v207; // [sp+14h] [bp-30h]
  unsigned __int8 **v208; // [sp+18h] [bp-2Ch]
  int v210; // [sp+30h] [bp-14h]
  int v211; // [sp+30h] [bp-14h]
  __int16 v212; // [sp+3Ch] [bp-8h] BYREF
  char v213; // [sp+3Eh] [bp-6h]
  char v214; // [sp+3Fh] [bp-5h]

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v207 = sub_307334((int)a1);
  if ( v207 )
    return -2;
  dest = (char *)a1[3];
  if ( !dest )
    return -2;
  v3 = *a1;
  v204 = a1[1];
  if ( !*a1 )
  {
    if ( a1[1] )
      return -2;
  }
  v4 = a1[7];
  v5 = 16191;
  v6 = (unsigned int)a1[4];
  v7 = *((_DWORD *)v4 + 1);
  v8 = (unsigned int)a1[1];
  v9 = *((_DWORD *)v4 + 15);
  i = *((_DWORD *)v4 + 16);
  if ( v7 == 16191 )
    v5 = 16192;
  v208 = a1;
  if ( v7 == 16191 )
  {
    v7 = v5;
    *((_DWORD *)v4 + 1) = v5;
  }
  v11 = v6;
  v206 = v6;
  while ( 2 )
  {
    switch ( v7 )
    {
      case 16180:
        v110 = *((_DWORD *)v4 + 3);
        if ( v110 )
        {
          while ( i <= 0xF )
          {
            if ( !v8 )
              goto LABEL_55;
            v111 = *v3++;
            --v8;
            v9 += v111 << i;
            i += 8;
          }
          if ( ((v9 == 35615) & (v110 >> 1)) != 0 )
          {
            i = 0;
            v9 = 0;
            if ( !*((_DWORD *)v4 + 10) )
              *((_DWORD *)v4 + 10) = 15;
            v29 = sub_30C694(0, 0, 0);
            *((_DWORD *)v4 + 7) = v29;
            v212 = -29921;
            *((_DWORD *)v4 + 7) = sub_30C694(v29, &v212, 2);
            *((_DWORD *)v4 + 1) = 16181;
            do
            {
              if ( !v8 )
                goto LABEL_55;
              v30 = *v3++;
              --v8;
              v9 += v30 << i;
              i += 8;
LABEL_45:
              ;
            }
            while ( i <= 0xF );
            *((_DWORD *)v4 + 5) = v9;
            if ( (unsigned __int8)v9 != 8 )
            {
              v18 = v11;
              v19 = v208;
              v20 = -3;
              v208[6] = "unknown compression method";
              *((_DWORD *)v4 + 1) = 16209;
              goto LABEL_57;
            }
            if ( (v9 & 0xE000) != 0 )
            {
              v18 = v11;
              v19 = v208;
              v20 = -3;
              v208[6] = "unknown header flags set";
              *((_DWORD *)v4 + 1) = 16209;
              goto LABEL_57;
            }
            v194 = (int *)*((_DWORD *)v4 + 9);
            if ( v194 )
              *v194 = (v9 >> 8) & 1;
            if ( (v9 & 0x200) != 0 && (*((_DWORD *)v4 + 3) & 4) != 0 )
            {
              v195 = *((_DWORD *)v4 + 7);
              v212 = v9;
              *((_DWORD *)v4 + 7) = sub_30C694(v195, &v212, 2);
            }
            v9 = 0;
            *((_DWORD *)v4 + 1) = 16182;
            for ( i = 0; i <= 0x1F; i += 8 )
            {
LABEL_210:
              if ( !v8 )
                goto LABEL_55;
              v108 = *v3++;
              --v8;
              v9 += v108 << i;
            }
LABEL_342:
            v170 = *((_DWORD *)v4 + 9);
            if ( v170 )
              *(_DWORD *)(v170 + 4) = v9;
            if ( (*((_DWORD *)v4 + 5) & 0x200) != 0 && (*((_DWORD *)v4 + 3) & 4) != 0 )
            {
              v212 = v9;
              v213 = BYTE2(v9);
              v181 = *((_DWORD *)v4 + 7);
              v214 = HIBYTE(v9);
              *((_DWORD *)v4 + 7) = sub_30C694(v181, &v212, 4);
            }
            v9 = 0;
            *((_DWORD *)v4 + 1) = 16183;
            for ( i = 0; i <= 0xF; i += 8 )
            {
LABEL_215:
              if ( !v8 )
                goto LABEL_55;
              v109 = *v3++;
              --v8;
              v9 += v109 << i;
            }
LABEL_252:
            v123 = *((_DWORD *)v4 + 9);
            if ( v123 )
            {
              *(_DWORD *)(v123 + 8) = (unsigned __int8)v9;
              *(_DWORD *)(v123 + 12) = v9 >> 8;
            }
            v93 = *((_DWORD *)v4 + 5);
            if ( (v93 & 0x200) != 0 && (*((_DWORD *)v4 + 3) & 4) != 0 )
            {
              v124 = *((_DWORD *)v4 + 7);
              v212 = v9;
              v125 = sub_30C694(v124, &v212, 2);
              v93 = *((_DWORD *)v4 + 5);
              *((_DWORD *)v4 + 7) = v125;
            }
            i = v93 & 0x400;
            *((_DWORD *)v4 + 1) = 16184;
            if ( (v93 & 0x400) != 0 )
            {
              v9 = 0;
              i = 0;
              do
              {
                if ( !v8 )
                  goto LABEL_55;
                v126 = *v3++;
                --v8;
                v9 += v126 << i;
                i += 8;
LABEL_262:
                ;
              }
              while ( i <= 0xF );
              v127 = *((_DWORD *)v4 + 9);
              *((_DWORD *)v4 + 17) = v9;
              if ( v127 )
                *(_DWORD *)(v127 + 20) = v9;
              v128 = v93 & 0x200;
              if ( (v93 & 0x200) != 0 && (v128 = *((_DWORD *)v4 + 3) & 4) != 0 )
              {
                v196 = v9 >> 8;
                LOBYTE(v212) = v9;
                v197 = *((_DWORD *)v4 + 7);
                v9 = 0;
                HIBYTE(v212) = v196;
                i = 0;
                v198 = sub_30C694(v197, &v212, 2);
                v93 = *((_DWORD *)v4 + 5);
                *((_DWORD *)v4 + 7) = v198;
              }
              else
              {
                v9 = v128;
                i = v128;
              }
            }
            else
            {
              v9 = 0;
LABEL_166:
              v94 = *((_DWORD *)v4 + 9);
              if ( v94 )
                *(_DWORD *)(v94 + 16) = 0;
            }
            *((_DWORD *)v4 + 1) = 16185;
LABEL_169:
            if ( (v93 & 0x400) != 0 )
            {
              v95 = *((_DWORD *)v4 + 17);
              if ( v8 >= v95 )
                v96 = *((_DWORD *)v4 + 17);
              else
                v96 = v8;
              if ( v96 )
              {
                v97 = (_DWORD *)*((_DWORD *)v4 + 9);
                if ( v97 )
                {
                  v98 = v97[4];
                  if ( v98 )
                  {
                    v99 = v97[5];
                    v100 = v97[6];
                    v101 = v99 - v95;
                    v102 = (void *)(v98 + v101);
                    if ( v96 + v101 <= v100 )
                      v103 = v96;
                    else
                      v103 = v100 - v101;
                    memcpy(v102, v3, v103);
                    v93 = *((_DWORD *)v4 + 5);
                  }
                }
                if ( (v93 & 0x200) != 0 && (*((_DWORD *)v4 + 3) & 4) != 0 )
                  *((_DWORD *)v4 + 7) = sub_30C694(*((_DWORD *)v4 + 7), v3, v96);
                v8 -= v96;
                v3 += v96;
                v95 = *((_DWORD *)v4 + 17) - v96;
                *((_DWORD *)v4 + 17) = v95;
              }
              if ( v95 )
                goto LABEL_55;
              v93 = *((_DWORD *)v4 + 5);
            }
            *((_DWORD *)v4 + 17) = 0;
            *((_DWORD *)v4 + 1) = 16186;
LABEL_188:
            if ( (v93 & 0x800) != 0 )
            {
              if ( !v8 )
                goto LABEL_55;
              v146 = v3 - 1;
              v147 = 0;
              do
              {
                v148 = *((_DWORD *)v4 + 9);
                ++v147;
                v150 = *++v146;
                v149 = v150;
                if ( v148 )
                {
                  v151 = *(_DWORD *)(v148 + 28);
                  if ( v151 )
                  {
                    v152 = *(_DWORD *)(v148 + 32);
                    v153 = *((_DWORD *)v4 + 17);
                    if ( v153 < v152 )
                    {
                      *((_DWORD *)v4 + 17) = v153 + 1;
                      *(_BYTE *)(v151 + v153) = v149;
                    }
                  }
                }
                v154 = v149 != 0;
                if ( v149 )
                  v154 = v8 > v147;
              }
              while ( v154 );
              if ( (*((_DWORD *)v4 + 5) & 0x200) != 0 && (*((_DWORD *)v4 + 3) & 4) != 0 )
                *((_DWORD *)v4 + 7) = sub_30C694(*((_DWORD *)v4 + 7), v3, v147);
              v3 += v147;
              v8 -= v147;
              if ( v149 )
                goto LABEL_55;
              v93 = *((_DWORD *)v4 + 5);
            }
            else
            {
              v104 = *((_DWORD *)v4 + 9);
              if ( v104 )
                *(_DWORD *)(v104 + 28) = v93 & 0x800;
            }
            *((_DWORD *)v4 + 17) = 0;
            *((_DWORD *)v4 + 1) = 16187;
LABEL_192:
            if ( (v93 & 0x1000) != 0 )
            {
              if ( !v8 )
                goto LABEL_55;
              v137 = v3 - 1;
              v138 = 0;
              do
              {
                v139 = *((_DWORD *)v4 + 9);
                ++v138;
                v141 = *++v137;
                v140 = v141;
                if ( v139 )
                {
                  v142 = *(_DWORD *)(v139 + 36);
                  if ( v142 )
                  {
                    v143 = *(_DWORD *)(v139 + 40);
                    v144 = *((_DWORD *)v4 + 17);
                    if ( v144 < v143 )
                    {
                      *((_DWORD *)v4 + 17) = v144 + 1;
                      *(_BYTE *)(v142 + v144) = v140;
                    }
                  }
                }
                v145 = v140 != 0;
                if ( v140 )
                  v145 = v8 > v138;
              }
              while ( v145 );
              if ( (*((_DWORD *)v4 + 5) & 0x200) != 0 && (*((_DWORD *)v4 + 3) & 4) != 0 )
                *((_DWORD *)v4 + 7) = sub_30C694(*((_DWORD *)v4 + 7), v3, v138);
              v3 += v138;
              v8 -= v138;
              if ( v140 )
                goto LABEL_55;
              v93 = *((_DWORD *)v4 + 5);
            }
            else
            {
              v105 = *((_DWORD *)v4 + 9);
              if ( v105 )
                *(_DWORD *)(v105 + 36) = v93 & 0x1000;
            }
            *((_DWORD *)v4 + 1) = 16188;
LABEL_196:
            if ( (v93 & 0x200) != 0 )
            {
              while ( i <= 0xF )
              {
                if ( !v8 )
                  goto LABEL_55;
                v107 = *v3++;
                --v8;
                v9 += v107 << i;
                i += 8;
              }
              if ( (*((_DWORD *)v4 + 3) & 4) != 0 && *((unsigned __int16 *)v4 + 14) != v9 )
              {
                v18 = v11;
                v19 = v208;
                v20 = -3;
                v208[6] = "header crc mismatch";
                *((_DWORD *)v4 + 1) = 16209;
                goto LABEL_57;
              }
              i = 0;
              v9 = 0;
            }
            v106 = *((_DWORD *)v4 + 9);
            if ( v106 )
            {
              *(_DWORD *)(v106 + 48) = 1;
              *(_DWORD *)(v106 + 44) = (v93 >> 9) & 1;
            }
            v27 = sub_30C694(0, 0, 0);
            goto LABEL_34;
          }
          v112 = *((_DWORD *)v4 + 9);
          *((_DWORD *)v4 + 5) = 0;
          if ( v112 )
            *(_DWORD *)(v112 + 48) = -1;
          if ( (v110 & 1) == 0
            || (unsigned __int16)((_WORD)v9 << 8) + (v9 >> 8) != 31
                                                               * (((unsigned __int16)((_WORD)v9 << 8) + (v9 >> 8))
                                                                / 0x1F) )
          {
            v18 = v11;
            v19 = v208;
            v20 = -3;
            v208[6] = "incorrect header check";
            *((_DWORD *)v4 + 1) = 16209;
            goto LABEL_57;
          }
          if ( (v9 & 0xF) != 8 )
          {
            v18 = v11;
            v19 = v208;
            v20 = -3;
            v208[6] = "unknown compression method";
            *((_DWORD *)v4 + 1) = 16209;
            goto LABEL_57;
          }
          v200 = *((_DWORD *)v4 + 10);
          v9 >>= 4;
          i -= 4;
          v201 = (v9 & 0xF) + 8;
          if ( v200 )
          {
            if ( v201 > 0xF || v200 < v201 )
            {
LABEL_420:
              v18 = v11;
              v19 = v208;
              v20 = -3;
              v208[6] = "invalid window size";
              *((_DWORD *)v4 + 1) = 16209;
              goto LABEL_57;
            }
          }
          else
          {
            *((_DWORD *)v4 + 10) = v201;
            if ( v201 > 0xF )
              goto LABEL_420;
          }
          *((_DWORD *)v4 + 6) = 1 << v201;
          v21 = sub_30C0D0(0, 0, 0);
          v9 &= 0x200u;
          *((_DWORD *)v4 + 7) = v21;
          v208[12] = (unsigned __int8 *)v21;
          if ( v9 )
          {
            v9 = 0;
            i = 0;
            *((_DWORD *)v4 + 1) = 16189;
            do
            {
              if ( !v8 )
                goto LABEL_55;
              v22 = *v3++;
              --v8;
              v9 += v22 << i;
              i += 8;
LABEL_30:
              ;
            }
            while ( i <= 0x1F );
            v23 = v9 << 8;
            v24 = (v9 << 24) + HIBYTE(v9);
            v25 = (v9 >> 8) & 0xFF00;
            v9 = 0;
            i = 0;
            v26 = v24 + v25 + (v23 & 0xFF0000);
            *((_DWORD *)v4 + 7) = v26;
            v208[12] = (unsigned __int8 *)v26;
            *((_DWORD *)v4 + 1) = 16190;
LABEL_32:
            if ( !*((_DWORD *)v4 + 4) )
            {
              v20 = 2;
              v208[3] = (unsigned __int8 *)dest;
              v208[4] = (unsigned __int8 *)v11;
              *v208 = v3;
              v208[1] = (unsigned __int8 *)v8;
              *((_DWORD *)v4 + 15) = v9;
              *((_DWORD *)v4 + 16) = i;
              return v20;
            }
            v27 = sub_30C0D0(0, 0, 0);
LABEL_34:
            *((_DWORD *)v4 + 7) = v27;
            v208[12] = (unsigned __int8 *)v27;
            *((_DWORD *)v4 + 1) = 16191;
            goto LABEL_35;
          }
          i = 0;
          *((_DWORD *)v4 + 1) = 16191;
LABEL_35:
          if ( (unsigned int)(a2 - 5) <= 1 )
            goto LABEL_55;
        }
        else
        {
          *((_DWORD *)v4 + 1) = 16192;
        }
LABEL_36:
        if ( *((_DWORD *)v4 + 2) )
        {
          v18 = v11;
          v19 = v208;
          v9 >>= i & 7;
          i &= 0xFFFFFFF8;
          *((_DWORD *)v4 + 1) = 16206;
LABEL_38:
          v28 = *((_DWORD *)v4 + 3);
          if ( v28 )
          {
            while ( i <= 0x1F )
            {
              if ( !v8 )
                goto LABEL_56;
              v59 = *v3++;
              --v8;
              v9 += v59 << i;
              i += 8;
            }
            v60 = v206 - v18;
            v61 = *((_DWORD *)v4 + 8);
            v19[5] += v206 - v18;
            *((_DWORD *)v4 + 8) = v61 + v206 - v18;
            v62 = v28 & 4;
            if ( ((v206 != v18) & (v28 >> 2)) != 0 )
            {
              v189 = *((_DWORD *)v4 + 7);
              v190 = &dest[-v60];
              if ( *((_DWORD *)v4 + 5) )
                v191 = sub_30C694(v189, v190, v60);
              else
                v191 = sub_30C0D0(v189, v190, v60);
              v28 = *((_DWORD *)v4 + 3);
              *((_DWORD *)v4 + 7) = v191;
              v19[12] = (unsigned __int8 *)v191;
              v62 = v28 & 4;
            }
            if ( v62 )
            {
              v63 = *((_DWORD *)v4 + 5);
              v64 = v63 == 0;
              if ( v63 )
              {
                v65 = v9;
              }
              else
              {
                v60 = (v9 << 8) & 0xFF0000;
                v65 = (v9 << 24) + HIBYTE(v9) + ((v9 >> 8) & 0xFF00);
              }
              if ( v64 )
                v65 += v60;
              if ( *((_DWORD *)v4 + 7) != v65 )
              {
                v206 = v18;
                v20 = -3;
                v19[6] = "incorrect data check";
                *((_DWORD *)v4 + 1) = 16209;
                goto LABEL_57;
              }
            }
            i = 0;
            v206 = v18;
            v9 = 0;
          }
          *((_DWORD *)v4 + 1) = 16207;
LABEL_157:
          if ( v28 && *((_DWORD *)v4 + 5) )
          {
            while ( i <= 0x1F )
            {
              if ( !v8 )
                goto LABEL_56;
              v92 = *v3++;
              --v8;
              v9 += v92 << i;
              i += 8;
            }
            if ( *((_DWORD *)v4 + 8) != v9 )
            {
              v20 = -3;
              v19[6] = "incorrect length check";
              *((_DWORD *)v4 + 1) = 16209;
              goto LABEL_57;
            }
            i = 0;
            v9 = 0;
          }
          v20 = 1;
          *((_DWORD *)v4 + 1) = 16208;
          goto LABEL_57;
        }
        if ( i <= 2 )
        {
          if ( !v8 )
            goto LABEL_394;
          v66 = *v3;
          --v8;
          ++v3;
          v9 += v66 << i;
          i += 8;
        }
        v67 = (v9 >> 1) & 3;
        *((_DWORD *)v4 + 2) = v9 & 1;
        if ( v67 != 2 )
        {
          if ( v67 == 3 )
          {
            v18 = v11;
            v19 = v208;
            v9 >>= 3;
            i -= 3;
            v208[6] = "invalid block type";
            v20 = -3;
            *((_DWORD *)v4 + 1) = 16209;
            goto LABEL_57;
          }
          if ( v67 == 1 )
          {
            *((_DWORD *)v4 + 23) = 5;
            *((_DWORD *)v4 + 22) = 9;
            *((_DWORD *)v4 + 20) = "`\a";
            *((_DWORD *)v4 + 1) = 16199;
            *((_DWORD *)v4 + 21) = &off_42FAE0;
            if ( a2 == 6 )
            {
              v18 = v11;
              v20 = 0;
              v19 = v208;
              v9 >>= 3;
              i -= 3;
              goto LABEL_57;
            }
            v9 >>= 3;
            i -= 3;
            goto LABEL_131;
          }
          v9 >>= 3;
          i -= 3;
          *((_DWORD *)v4 + 1) = 16193;
LABEL_111:
          v68 = i & 7;
          i &= 0xFFFFFFF8;
          v9 >>= v68;
          if ( i <= 0x1F )
          {
            while ( v8 )
            {
              v69 = *v3++;
              --v8;
              v9 += v69 << i;
              i += 8;
              if ( i > 0x1F )
                goto LABEL_348;
            }
            goto LABEL_55;
          }
LABEL_348:
          v20 = (unsigned __int16)v9;
          if ( (unsigned __int16)v9 != (HIWORD(v9) ^ 0xFFFF) )
          {
            v18 = v11;
            v19 = v208;
            v20 = -3;
            v208[6] = "invalid stored block lengths";
            *((_DWORD *)v4 + 1) = 16209;
            goto LABEL_57;
          }
          *((_DWORD *)v4 + 17) = (unsigned __int16)v9;
          *((_DWORD *)v4 + 1) = 16194;
          if ( a2 == 6 )
          {
            i = 0;
            v18 = v11;
            v20 = 0;
            v19 = v208;
            v9 = 0;
            goto LABEL_57;
          }
          i = 0;
          v9 = 0;
LABEL_251:
          *((_DWORD *)v4 + 1) = 16195;
LABEL_231:
          if ( !v20 )
          {
            *((_DWORD *)v4 + 1) = 16191;
            goto LABEL_35;
          }
          if ( v8 < v20 )
            v20 = v8;
          if ( v20 >= v11 )
            v20 = v11;
          if ( !v20 )
          {
            v18 = v11;
            v19 = v208;
            goto LABEL_57;
          }
          v113 = v3;
          v8 -= v20;
          v11 -= v20;
          v3 += v20;
          memcpy(dest, v113, v20);
          dest += v20;
          v7 = *((_DWORD *)v4 + 1);
          *((_DWORD *)v4 + 17) -= v20;
          continue;
        }
        v9 >>= 3;
        i -= 3;
        *((_DWORD *)v4 + 1) = 16196;
LABEL_15:
        while ( i <= 0xD )
        {
          if ( !v8 )
            goto LABEL_55;
          v12 = *v3++;
          --v8;
          v9 += v12 << i;
          i += 8;
        }
        v13 = ((v9 >> 5) & 0x1F) + 1;
        v14 = (v9 & 0x1F) + 257;
        v15 = v14 > 0x11E;
        if ( v14 <= 0x11E )
          v15 = v13 > 0x1E;
        v16 = ((v9 >> 10) & 0xF) + 4;
        v17 = v15;
        i -= 14;
        *((_DWORD *)v4 + 25) = v14;
        v9 >>= 14;
        *((_DWORD *)v4 + 26) = v13;
        *((_DWORD *)v4 + 24) = v16;
        if ( v15 )
        {
          v18 = v11;
          v19 = v208;
          v20 = -3;
          v208[6] = "too many length or distance symbols";
          *((_DWORD *)v4 + 1) = 16209;
          goto LABEL_57;
        }
        *((_DWORD *)v4 + 27) = v17;
        *((_DWORD *)v4 + 1) = 16197;
LABEL_239:
        v114 = v3 + 1;
        v115 = v16 + 1;
        v116 = v17 + 1;
        v117 = (char *)&unk_42FB60 + 2 * v17 - 2;
        if ( i <= 2 )
        {
LABEL_240:
          if ( !v8 )
            goto LABEL_55;
          --v8;
          v9 += *v3 << i;
          i += 8;
          goto LABEL_242;
        }
        while ( 1 )
        {
          v114 = v3;
LABEL_242:
          v118 = *((unsigned __int16 *)v117 + 1);
          v117 += 2;
          v119 = v9 & 7;
          *((_DWORD *)v4 + 27) = v116;
          v3 = v114;
          i -= 3;
          v9 >>= 3;
          *(_WORD *)&v4[2 * v118 + 116] = v119;
          if ( v115 == v116 + 1 )
            break;
          ++v116;
          ++v114;
          if ( i <= 2 )
            goto LABEL_240;
        }
        v17 = v116;
LABEL_358:
        if ( v17 <= 0x12 )
        {
          v171 = (char *)&unk_42FB60 + 2 * v17 - 2;
          do
          {
            v172 = *((unsigned __int16 *)v171 + 1);
            v171 += 2;
            *(_WORD *)&v4[2 * v172 + 116] = 0;
          }
          while ( &unk_42FB84 != (_UNKNOWN *)v171 );
          *((_DWORD *)v4 + 27) = 19;
        }
        *((_DWORD *)v4 + 28) = v4 + 1332;
        *((_DWORD *)v4 + 20) = v4 + 1332;
        *((_DWORD *)v4 + 22) = 7;
        if ( sub_3099E8(0, v4 + 116, 19, v4 + 112, v4 + 88, v4 + 756) )
        {
          v18 = v11;
          v19 = v208;
          v20 = -3;
          v208[6] = "invalid code lengths set";
          *((_DWORD *)v4 + 1) = 16209;
          goto LABEL_57;
        }
        *((_DWORD *)v4 + 27) = 0;
        v31 = 0;
        *((_DWORD *)v4 + 1) = 16198;
LABEL_49:
        v32 = *((_DWORD *)v4 + 25);
        v33 = v32 + *((_DWORD *)v4 + 26);
        while ( v33 > v31 )
        {
          v34 = *((_DWORD *)v4 + 20);
          v35 = ~(-1 << *((_DWORD *)v4 + 22));
          v36 = v34 + 4 * (v9 & v35);
          v37 = *(unsigned __int8 *)(v36 + 1);
          for ( j = *(unsigned __int16 *)(v36 + 2); v37 > i; j = *(unsigned __int16 *)(v40 + 2) )
          {
            if ( !v8 )
              goto LABEL_55;
            v39 = *v3++;
            --v8;
            v9 += v39 << i;
            i += 8;
            v40 = v34 + 4 * (v9 & v35);
            v37 = *(unsigned __int8 *)(v40 + 1);
          }
          if ( j <= 0xF )
          {
            v165 = &v4[2 * v31++];
            *((_DWORD *)v4 + 27) = v31;
            v9 >>= v37;
            i -= v37;
            *((_WORD *)v165 + 58) = j;
          }
          else
          {
            if ( j == 16 )
            {
              for ( ; v37 + 2 > i; i += 8 )
              {
                if ( !v8 )
                  goto LABEL_55;
                v180 = *v3++;
                --v8;
                v9 += v180 << i;
              }
              v9 >>= v37;
              i -= v37;
              if ( !v31 )
              {
                v18 = v11;
                v19 = v208;
                v208[6] = "invalid bit length repeat";
                *((_DWORD *)v4 + 1) = 16209;
                goto LABEL_424;
              }
              v199 = v9 & 3;
              i -= 2;
              v9 >>= 2;
              v176 = *(_WORD *)&v4[2 * v31 + 114];
              v175 = v199 + 3;
            }
            else if ( j == 17 )
            {
              for ( ; v37 + 3 > i; i += 8 )
              {
                if ( !v8 )
                  goto LABEL_55;
                v179 = *v3++;
                --v8;
                v9 += v179 << i;
              }
              v192 = v9 >> v37;
              v193 = v192 & 7;
              v9 = v192 >> 3;
              i += -3 - v37;
              v175 = v193 + 3;
              v176 = 0;
            }
            else
            {
              for ( ; i < v37 + 7; i += 8 )
              {
                if ( !v8 )
                  goto LABEL_55;
                v164 = *v3++;
                --v8;
                v9 += v164 << i;
              }
              v173 = v9 >> v37;
              v174 = v173 & 0x7F;
              v9 = v173 >> 7;
              i += -7 - v37;
              v175 = v174 + 11;
              v176 = 0;
            }
            v177 = v175 + v31;
            if ( v177 > v33 )
            {
              v18 = v11;
              v19 = v208;
              v208[6] = "invalid bit length repeat";
              *((_DWORD *)v4 + 1) = 16209;
LABEL_424:
              v20 = -3;
              goto LABEL_57;
            }
            v178 = (int)&v4[2 * v31 + 114];
            do
            {
              *(_WORD *)(v178 + 2) = v176;
              v178 += 2;
            }
            while ( &v4[2 * v177 + 114] != (unsigned __int8 *)v178 );
            v31 = v177;
            *((_DWORD *)v4 + 27) = v177;
          }
        }
        if ( *((_DWORD *)v4 + 1) == 16209 )
        {
LABEL_340:
          v18 = v11;
          v20 = -3;
          v19 = v208;
          goto LABEL_57;
        }
        if ( !*((_WORD *)v4 + 314) )
        {
          v18 = v11;
          v19 = v208;
          v20 = -3;
          v208[6] = "invalid code -- missing end-of-block";
          *((_DWORD *)v4 + 1) = 16209;
          goto LABEL_57;
        }
        *((_DWORD *)v4 + 28) = v4 + 1332;
        *((_DWORD *)v4 + 20) = v4 + 1332;
        *((_DWORD *)v4 + 22) = 9;
        if ( sub_3099E8(1, v4 + 116, v32, v4 + 112, v4 + 88, v4 + 756) )
        {
          v18 = v11;
          v19 = v208;
          v20 = -3;
          v208[6] = "invalid literal/lengths set";
          *((_DWORD *)v4 + 1) = 16209;
          goto LABEL_57;
        }
        v202 = *((_DWORD *)v4 + 28);
        v203 = *((_DWORD *)v4 + 25);
        *((_DWORD *)v4 + 23) = 6;
        *((_DWORD *)v4 + 21) = v202;
        if ( sub_3099E8(2, &v4[2 * v203 + 116], *((_DWORD *)v4 + 26), v4 + 112, v4 + 92, v4 + 756) )
        {
          v18 = v11;
          v19 = v208;
          v20 = -3;
          v208[6] = "invalid distances set";
          *((_DWORD *)v4 + 1) = 16209;
          goto LABEL_57;
        }
        *((_DWORD *)v4 + 1) = 16199;
        if ( a2 == 6 )
        {
LABEL_394:
          v18 = v11;
          v20 = 0;
          v19 = v208;
          goto LABEL_57;
        }
LABEL_131:
        *((_DWORD *)v4 + 1) = 16200;
LABEL_119:
        v71 = v8 > 5;
        if ( v8 > 5 )
          v71 = v11 > 0x101;
        if ( v71 )
        {
          v208[4] = (unsigned __int8 *)v11;
          v208[3] = (unsigned __int8 *)dest;
          *v208 = v3;
          v208[1] = (unsigned __int8 *)v8;
          *((_DWORD *)v4 + 15) = v9;
          *((_DWORD *)v4 + 16) = i;
          sub_30C6A0(v208, v206);
          v7 = *((_DWORD *)v4 + 1);
          v72 = 16191;
          v11 = (unsigned int)v208[4];
          v73 = v7 == 16191;
          v3 = *v208;
          if ( v7 == 16191 )
          {
            v72 = (int)(v4 + 4096);
            v7 = -1;
          }
          v8 = (unsigned int)v208[1];
          v9 = *((_DWORD *)v4 + 15);
          i = *((_DWORD *)v4 + 16);
          dest = (char *)v208[3];
          if ( v73 )
          {
            *(_DWORD *)(v72 + 3016) = v7;
            goto LABEL_35;
          }
          continue;
        }
        v155 = *((_DWORD *)v4 + 22);
        v156 = v4 + 4096;
        v157 = *((_DWORD *)v4 + 20);
        *((_DWORD *)v4 + 1778) = 0;
        v158 = ~(-1 << v155);
        while ( 1 )
        {
          v160 = v157 + 4 * (v158 & v9);
          LOBYTE(v161) = *(_BYTE *)v160;
          v162 = *(unsigned __int8 *)(v160 + 1);
          v163 = *(unsigned __int16 *)(v160 + 2);
          if ( v162 <= i )
            break;
          if ( !v8 )
            goto LABEL_55;
          v159 = *v3++;
          --v8;
          v9 += v159 << i;
          i += 8;
        }
        if ( !*(_BYTE *)(v157 + 4 * (v158 & v9)) )
        {
          v9 >>= v162;
          i -= v162;
          *((_DWORD *)v4 + 1778) = v162;
          *((_DWORD *)v4 + 17) = v163;
          goto LABEL_352;
        }
        if ( (*(_BYTE *)(v157 + 4 * (v158 & v9)) & 0xF0) == 0 )
        {
          v182 = ~(-1 << (v161 + v162));
          v183 = (unsigned __int8 *)(v157 + 4 * (v163 + ((v182 & v9) >> v162)));
          v161 = *v183;
          v184 = v183[1];
          v211 = *((unsigned __int16 *)v183 + 1);
          v185 = v184 + v162;
          if ( v184 + v162 > i )
          {
            if ( !v8 )
              goto LABEL_55;
            while ( 1 )
            {
              v186 = *v3++;
              --v8;
              v9 += v186 << i;
              i += 8;
              v187 = (unsigned __int8 *)(v157 + 4 * (v163 + ((v182 & v9) >> v162)));
              v161 = *v187;
              v184 = v187[1];
              v188 = *((unsigned __int16 *)v187 + 1);
              v185 = v184 + v162;
              if ( v184 + v162 <= i )
                break;
              if ( !v8 )
                goto LABEL_55;
            }
            v211 = v188;
            v156 = v4 + 4096;
          }
          *((_DWORD *)v156 + 754) = v185;
          v9 = v9 >> v162 >> v184;
          i = i - v162 - v184;
          *((_DWORD *)v4 + 17) = v211;
          if ( v161 )
            goto LABEL_317;
LABEL_352:
          v70 = dest;
          *((_DWORD *)v4 + 1) = 16205;
LABEL_117:
          if ( !v11 )
            goto LABEL_55;
          --v11;
          *v70 = *((_DWORD *)v4 + 17);
          ++dest;
          *((_DWORD *)v4 + 1) = 16200;
          goto LABEL_119;
        }
        v9 >>= v162;
        i -= v162;
        *((_DWORD *)v4 + 1778) = v162;
        *((_DWORD *)v4 + 17) = v163;
LABEL_317:
        if ( (v161 & 0x20) != 0 )
        {
          *((_DWORD *)v156 + 754) = -1;
          *((_DWORD *)v4 + 1) = 16191;
          goto LABEL_35;
        }
        if ( (v161 & 0x40) != 0 )
        {
          v18 = v11;
          v19 = v208;
          v20 = -3;
          v208[6] = "invalid literal/length code";
          *((_DWORD *)v4 + 1) = 16209;
          goto LABEL_57;
        }
        v78 = v161 & 0xF;
        *((_DWORD *)v4 + 19) = v78;
        *((_DWORD *)v4 + 1) = 16201;
LABEL_141:
        if ( v78 )
        {
          while ( i < v78 )
          {
            if ( !v8 )
              goto LABEL_55;
            v120 = *v3++;
            --v8;
            v9 += v120 << i;
            i += 8;
          }
          v80 = v4 + 4096;
          v121 = v9 & ~(-1 << v78);
          i -= v78;
          v9 >>= v78;
          v79 = v121 + *((_DWORD *)v4 + 17);
          v122 = *((_DWORD *)v4 + 1778) + v78;
          *((_DWORD *)v4 + 17) = v79;
          *((_DWORD *)v4 + 1778) = v122;
        }
        else
        {
          v79 = *((_DWORD *)v4 + 17);
          v80 = v4 + 4096;
        }
        *((_DWORD *)v80 + 755) = v79;
        *((_DWORD *)v4 + 1) = 16202;
LABEL_144:
        v81 = *((_DWORD *)v4 + 21);
        while ( 1 )
        {
          v83 = v81 + 4 * (~(-1 << *((_DWORD *)v4 + 23)) & v9);
          BYTE4(v74) = *(_BYTE *)v83;
          v84 = *(unsigned __int8 *)(v83 + 1);
          LODWORD(v74) = *(unsigned __int16 *)(v83 + 2);
          v85 = v84;
          if ( v84 <= i )
            break;
          if ( !v8 )
            goto LABEL_55;
          v82 = *v3++;
          --v8;
          v9 += v82 << i;
          i += 8;
        }
        v86 = v84;
        if ( (v74 & 0xF000000000LL) != 0 )
        {
          v87 = v4 + 4096;
          v88 = *((_DWORD *)v4 + 1778);
          goto LABEL_150;
        }
        v166 = ~(-1 << (BYTE4(v74) + v84));
        v210 = v74;
        v167 = v81 + 4 * (v74 + ((v166 & v9) >> v84));
        BYTE4(v74) = *(_BYTE *)v167;
        v84 = *(unsigned __int8 *)(v167 + 1);
        LODWORD(v74) = *(unsigned __int16 *)(v167 + 2);
        if ( v84 + v85 <= i )
        {
LABEL_337:
          v87 = v4 + 4096;
          v9 >>= v86;
          i -= v85;
          v88 = v86 + *((_DWORD *)v4 + 1778);
LABEL_150:
          *((_DWORD *)v87 + 754) = v84 + v88;
          v9 >>= v84;
          i -= v84;
          if ( (v74 & 0x4000000000LL) != 0 )
          {
            v18 = v11;
            v19 = v208;
            v20 = -3;
            v208[6] = "invalid distance code";
            *((_DWORD *)v4 + 1) = 16209;
            goto LABEL_57;
          }
          HIDWORD(v74) = BYTE4(v74) & 0xF;
          *((_QWORD *)v4 + 9) = v74;
          *((_DWORD *)v4 + 1) = 16203;
LABEL_133:
          if ( HIDWORD(v74) )
          {
            while ( i < HIDWORD(v74) )
            {
              if ( !v8 )
                goto LABEL_55;
              v89 = *v3++;
              --v8;
              v9 += v89 << i;
              i += 8;
            }
            v90 = v9 & ~(-1 << SBYTE4(v74));
            i -= HIDWORD(v74);
            v9 >>= SBYTE4(v74);
            v91 = *((_DWORD *)v4 + 1778) + HIDWORD(v74);
            *((_DWORD *)v4 + 18) += v90;
            *((_DWORD *)v4 + 1778) = v91;
          }
          *((_DWORD *)v4 + 1) = 16204;
LABEL_135:
          if ( !v11 )
            goto LABEL_55;
          v75 = *((_DWORD *)v4 + 18);
          if ( v75 <= v206 - v11 )
          {
            v133 = *((_DWORD *)v4 + 17);
            v131 = &dest[-v75];
            v132 = v133;
          }
          else
          {
            v76 = *((_DWORD *)v4 + 12);
            v77 = v75 - (v206 - v11);
            if ( v76 < v77 && *((_DWORD *)v4 + 1777) )
            {
              v18 = v11;
              v19 = v208;
              v20 = -3;
              v208[6] = "invalid distance too far back";
              *((_DWORD *)v4 + 1) = 16209;
              goto LABEL_57;
            }
            v129 = *((_DWORD *)v4 + 13);
            v130 = v129 >= v77;
            if ( v129 >= v77 )
            {
              v129 -= v77;
            }
            else
            {
              v76 = *((_DWORD *)v4 + 11);
              v77 -= v129;
            }
            if ( !v130 )
              v129 = v76 - v77;
            v131 = (char *)(*((_DWORD *)v4 + 14) + v129);
            v132 = *((_DWORD *)v4 + 17);
            if ( v132 >= v77 )
              v133 = v77;
            else
              v133 = *((_DWORD *)v4 + 17);
          }
          if ( v133 >= v11 )
            v133 = v11;
          v11 -= v133;
          v134 = &v131[v133];
          v135 = dest - 1;
          *((_DWORD *)v4 + 17) = v132 - v133;
          do
          {
            v136 = *v131++;
            *++v135 = v136;
          }
          while ( v131 != v134 );
          dest += v133;
          if ( *((_DWORD *)v4 + 17) )
          {
            v7 = *((_DWORD *)v4 + 1);
            continue;
          }
          goto LABEL_131;
        }
        while ( v8 )
        {
          v168 = *v3++;
          --v8;
          v9 += v168 << i;
          i += 8;
          v169 = v81 + 4 * (v210 + ((v166 & v9) >> v86));
          BYTE4(v74) = *(_BYTE *)v169;
          v84 = *(unsigned __int8 *)(v169 + 1);
          LODWORD(v74) = *(unsigned __int16 *)(v169 + 2);
          if ( v84 + v86 <= i )
            goto LABEL_337;
        }
LABEL_55:
        v18 = v11;
        v19 = v208;
LABEL_56:
        v20 = 0;
LABEL_57:
        v41 = *((_DWORD *)v4 + 11);
        v19[4] = (unsigned __int8 *)v18;
        *v19 = v3;
        v19[3] = (unsigned __int8 *)dest;
        v19[1] = (unsigned __int8 *)v8;
        *((_DWORD *)v4 + 15) = v9;
        *((_DWORD *)v4 + 16) = i;
        if ( v41
          || v18 != v206
          && (v42 = *((_DWORD *)v4 + 1), v42 <= 0x3F50)
          && (v42 <= 0x3F4D ? (v55 = 1) : (v55 = a2 != 4), v55) )
        {
          if ( !sub_3071F0((int)v19, (int)dest, v206 - v18) )
          {
            v8 = (unsigned int)v19[1];
            v18 = (unsigned int)v19[4];
            goto LABEL_60;
          }
          v20 = -4;
          *((_DWORD *)v4 + 1) = 16210;
        }
        else
        {
LABEL_60:
          v43 = v206 - v18;
          v44 = v19[5];
          v45 = &v204[-v8];
          v46 = v43;
          if ( v43 )
            v46 = 1;
          v50 = (v46 & (*((_DWORD *)v4 + 3) >> 2)) == 0;
          v47 = *((_DWORD *)v4 + 8);
          v19[2] = &v45[(_DWORD)v19[2]];
          v19[5] = &v44[v43];
          *((_DWORD *)v4 + 8) = v47 + v43;
          if ( !v50 )
          {
            v56 = *((_DWORD *)v4 + 7);
            v57 = (int)&v19[3][-v43];
            if ( *((_DWORD *)v4 + 5) )
              v58 = sub_30C694(v56, v57, v43);
            else
              v58 = sub_30C0D0(v56, v57, v43);
            *((_DWORD *)v4 + 7) = v58;
            v19[12] = (unsigned __int8 *)v58;
          }
          v48 = *((_DWORD *)v4 + 16);
          v49 = *((_DWORD *)v4 + 1);
          if ( *((_DWORD *)v4 + 2) )
            v48 += 64;
          if ( v49 == 16191 )
          {
            v48 += 128;
          }
          else
          {
            v50 = v49 == 16194;
            if ( v49 != 16194 )
              v50 = v49 == 16199;
            v51 = 0;
            if ( v50 )
              v51 = 256;
            v207 = v51;
          }
          v52 = (unsigned int)v45 | v43;
          v19[11] = (unsigned __int8 *)(v207 + v48);
          v53 = v52 == 0;
          if ( v52 )
            v53 = a2 == 4;
          if ( v53 && !v20 )
            return -5;
        }
        return v20;
      case 16181:
        goto LABEL_45;
      case 16182:
        if ( i > 0x1F )
          goto LABEL_342;
        goto LABEL_210;
      case 16183:
        if ( i > 0xF )
          goto LABEL_252;
        goto LABEL_215;
      case 16184:
        v93 = *((_DWORD *)v4 + 5);
        if ( (v93 & 0x400) == 0 )
          goto LABEL_166;
        goto LABEL_262;
      case 16185:
        v93 = *((_DWORD *)v4 + 5);
        goto LABEL_169;
      case 16186:
        v93 = *((_DWORD *)v4 + 5);
        goto LABEL_188;
      case 16187:
        v93 = *((_DWORD *)v4 + 5);
        goto LABEL_192;
      case 16188:
        v93 = *((_DWORD *)v4 + 5);
        goto LABEL_196;
      case 16189:
        goto LABEL_30;
      case 16190:
        goto LABEL_32;
      case 16191:
        goto LABEL_35;
      case 16192:
        goto LABEL_36;
      case 16193:
        goto LABEL_111;
      case 16194:
        v20 = *((_DWORD *)v4 + 17);
        goto LABEL_251;
      case 16195:
        v20 = *((_DWORD *)v4 + 17);
        goto LABEL_231;
      case 16196:
        goto LABEL_15;
      case 16197:
        v17 = *((_DWORD *)v4 + 27);
        v16 = *((_DWORD *)v4 + 24);
        if ( v17 < v16 )
          goto LABEL_239;
        goto LABEL_358;
      case 16198:
        v31 = *((_DWORD *)v4 + 27);
        goto LABEL_49;
      case 16199:
        goto LABEL_131;
      case 16200:
        goto LABEL_119;
      case 16201:
        v78 = *((_DWORD *)v4 + 19);
        goto LABEL_141;
      case 16202:
        goto LABEL_144;
      case 16203:
        HIDWORD(v74) = *((_DWORD *)v4 + 19);
        goto LABEL_133;
      case 16204:
        goto LABEL_135;
      case 16205:
        v70 = dest;
        goto LABEL_117;
      case 16206:
        v18 = v11;
        v19 = v208;
        goto LABEL_38;
      case 16207:
        v18 = v11;
        v28 = *((_DWORD *)v4 + 3);
        v19 = v208;
        goto LABEL_157;
      case 16208:
        v18 = v11;
        v20 = 1;
        v19 = v208;
        goto LABEL_57;
      case 16209:
        goto LABEL_340;
      case 16210:
        return -4;
      default:
        return -2;
    }
  }
}
