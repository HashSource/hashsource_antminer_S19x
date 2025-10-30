int __fastcall sub_2CE6E8(_DWORD *a1, unsigned int a2)
{
  unsigned int *v2; // r9
  unsigned int v3; // r2
  int v4; // r12
  int v7; // r10
  unsigned int *v8; // r7
  char *v9; // r11
  unsigned int v10; // r3
  int v11; // r8
  int v12; // r8
  unsigned int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r3
  int *v17; // lr
  unsigned int *v18; // r12
  int *v19; // r12
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int *v24; // lr
  int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r0
  int v31; // r3
  _DWORD *v33; // r0
  unsigned int *v34; // r12
  unsigned int v35; // lr
  unsigned int *v36; // r8
  unsigned int v37; // r3
  unsigned int v38; // r2
  bool v39; // zf
  unsigned int v40; // r9
  int v41; // r8
  unsigned int v42; // r0
  unsigned int v43; // r1
  unsigned int v44; // r2
  unsigned int v45; // r3
  unsigned int *v46; // r7
  unsigned int *v47; // r8
  unsigned int v48; // r12
  unsigned int v49; // r0
  unsigned int v50; // r1
  unsigned int v51; // r2
  unsigned int v52; // r3
  unsigned int v53; // r0
  unsigned int v54; // r1
  unsigned int v55; // r2
  unsigned int v56; // r3
  unsigned int v57; // r1
  _DWORD *v58; // r1
  unsigned int v59; // r0
  unsigned int v60; // r2
  int v61; // r3
  int v62; // r0
  int v63; // r1
  int v64; // r0
  int v65; // r3
  int v66; // r1
  int v67; // t1
  _DWORD *v68; // r12
  int v69; // r3
  unsigned int v70; // r2
  unsigned int v71; // r0
  _DWORD *v72; // r12
  int v73; // r3
  unsigned int v74; // r2
  unsigned int v75; // r0
  unsigned int v76; // r1
  unsigned int v77; // r2
  unsigned int v78; // r3
  int *v79; // r7
  int v80; // r9
  int v81; // r0
  int v82; // r1
  int v83; // r2
  int v84; // r3
  int v85; // r0
  int v86; // r1
  int v87; // r2
  int v88; // r3
  int v89; // r1
  unsigned int v90; // r3
  _DWORD *v91; // r12
  int v92; // r3
  int v93; // r8
  unsigned int v94; // r3
  int v95; // r3
  int v96; // r3
  _DWORD *v97; // r0
  unsigned int v98; // r2
  unsigned int v99; // r9
  int v100; // r1
  int v101; // r3
  int v102; // r12
  bool v103; // zf
  bool v104; // zf
  _BOOL4 v105; // r3
  int v106; // r3
  int v107; // r8
  int v108; // r2
  unsigned int *v109; // r8
  unsigned int v110; // r0
  unsigned int v111; // r1
  unsigned int v112; // r2
  unsigned int v113; // r3
  unsigned int *v114; // r7
  int v115; // r9
  unsigned int v116; // r0
  unsigned int v117; // r1
  unsigned int v118; // r2
  unsigned int v119; // r3
  unsigned int v120; // r0
  unsigned int v121; // r1
  unsigned int v122; // r2
  unsigned int v123; // r3
  unsigned int v124; // r3
  unsigned int v125; // r1
  unsigned int v126; // r0
  unsigned int v127; // r1
  unsigned int v128; // r2
  unsigned int v129; // r3
  int *v130; // r7
  unsigned int *v131; // r9
  int *v132; // r8
  int v133; // r0
  int v134; // r1
  int v135; // r2
  int v136; // r3
  int v137; // r0
  int v138; // r1
  int v139; // r2
  int v140; // r3
  int v141; // r1
  int v142; // r0
  unsigned int v143; // r0
  unsigned int v144; // r1
  unsigned int v145; // r2
  unsigned int v146; // r3
  unsigned int *v147; // r7
  unsigned int *v148; // r8
  int v149; // r12
  unsigned int v150; // r0
  unsigned int v151; // r1
  unsigned int v152; // r2
  unsigned int v153; // r3
  unsigned int v154; // r0
  unsigned int v155; // r1
  unsigned int v156; // r2
  unsigned int v157; // r3
  unsigned int v158; // r1
  unsigned int v159; // r1
  bool v160; // cc
  int v161; // r3
  bool v162; // zf
  int v163; // r2
  unsigned int v164; // r3
  int v165; // r9
  unsigned int **v166; // r2
  unsigned int **v167; // r3
  bool v168; // zf
  unsigned int *v169; // r10
  unsigned int *v170; // r0
  unsigned int v171; // r1
  unsigned int v172; // r2
  unsigned int v173; // r3
  unsigned int v174; // r1
  unsigned int v175; // r2
  unsigned int v176; // r3
  unsigned int v177; // r1
  unsigned int v178; // r2
  unsigned int v179; // r3
  unsigned int v180; // r1
  unsigned int v181; // r1
  int v182; // r11
  int v183; // r0
  int v184; // r3
  int v185; // r1
  int v186; // r0
  __int64 v187; // r2
  int v188; // r10
  int i; // r12
  int v190; // t1
  int v191; // lr
  bool v192; // zf
  int v193; // r3
  unsigned int v194; // r0
  int v195; // r1
  int v196; // r10
  int v197; // r3
  int v198; // t1
  int v199; // r3
  int v200; // r2
  int v201; // t1
  unsigned int **v202; // [sp+Ch] [bp-8h]

  v2 = (unsigned int *)a1[40];
  v3 = v2[133];
  if ( v3 <= a2 )
    return 0;
  v7 = 4 * a2;
  if ( (unsigned int)++dword_48FD18 > 3 )
  {
    if ( (_DWORD *)dword_48FD1C == a1 )
    {
      v33 = (_DWORD *)dword_48FD20;
      if ( dword_48FD20 )
        goto LABEL_54;
    }
    else
    {
      dword_48FD20 = 0;
    }
    v33 = sub_2AD09C((int)a1, 4 * v3);
    dword_48FD1C = (int)a1;
    dword_48FD20 = (int)v33;
LABEL_54:
    if ( v33[a2] )
    {
      sub_2A6A5C("%B: warning: loop in section dependencies detected", a1);
      return 0;
    }
    v2 = (unsigned int *)a1[40];
    v33[a2] = 1;
  }
  v8 = *(unsigned int **)(v2[16] + 4 * a2);
  if ( *v8 )
  {
    v30 = sub_2CD85C((int)a1, v2[15], *v8);
    v9 = (char *)v30;
    if ( !v30 )
      goto LABEL_19;
  }
  else
  {
    v9 = "";
  }
  v10 = v8[1];
  v11 = *(_DWORD *)(a1[1] + 444);
  if ( v10 == 10 )
    goto LABEL_70;
  if ( v10 > 0xA )
  {
    if ( v10 == 18 )
    {
      v106 = *(_DWORD *)(a1[40] + 520);
      if ( !v106 )
      {
LABEL_128:
        v109 = (unsigned int *)sub_2ACBF4((int)a1, 64);
        if ( v109 )
        {
          v110 = *v8;
          v111 = v8[1];
          v112 = v8[2];
          v113 = v8[3];
          v114 = v8 + 4;
          v4 = 1;
          v109[14] = a2;
          v115 = a1[40];
          *v109 = v110;
          v109[1] = v111;
          v109[2] = v112;
          v109[3] = v113;
          v116 = *v114;
          v117 = v114[1];
          v118 = v114[2];
          v119 = v114[3];
          v114 += 4;
          v109[4] = v116;
          v109[5] = v117;
          v109[6] = v118;
          v109[7] = v119;
          v120 = *v114;
          v121 = v114[1];
          v122 = v114[2];
          v123 = v114[3];
          v114 += 4;
          v109[8] = v120;
          v109[9] = v121;
          v109[10] = v122;
          v109[11] = v123;
          v124 = *(_DWORD *)(v115 + 520);
          v125 = v114[1];
          v109[12] = *v114;
          v109[13] = v125;
          v109[15] = v124;
          *(_DWORD *)(v115 + 520) = v109;
          *(_DWORD *)(*(_DWORD *)(v115 + 64) + 4 * a2) = v109;
          goto LABEL_20;
        }
        goto LABEL_19;
      }
      while ( a2 != *(_DWORD *)(v106 + 56) )
      {
        v106 = *(_DWORD *)(v106 + 60);
        if ( !v106 )
          goto LABEL_128;
      }
      goto LABEL_70;
    }
    if ( v10 > 0x12 )
    {
      if ( v10 == 1879048189 )
      {
        v107 = a1[40];
        v13 = *v8;
        v14 = v8[1];
        v15 = v8[2];
        v16 = v8[3];
        v17 = (int *)(v8 + 4);
        v18 = (unsigned int *)(v107 + 464);
        *(_DWORD *)(v107 + 2332) = a2;
        goto LABEL_17;
      }
      if ( v10 <= 0x6FFFFFFD )
      {
        if ( v10 - 1879048182 <= 1 )
          goto LABEL_112;
      }
      else
      {
        if ( v10 == 1879048190 )
        {
          v93 = a1[40];
          v13 = *v8;
          v14 = v8[1];
          v15 = v8[2];
          v16 = v8[3];
          v17 = (int *)(v8 + 4);
          v18 = (unsigned int *)(v93 + 408);
          *(_DWORD *)(v93 + 2336) = a2;
          goto LABEL_17;
        }
        if ( v10 == 1879048191 )
        {
          if ( v8[10] == 2 )
          {
            v12 = a1[40];
            v13 = *v8;
            v14 = v8[1];
            v15 = v8[2];
            v16 = v8[3];
            v17 = (int *)(v8 + 4);
            v18 = (unsigned int *)(v12 + 352);
            *(_DWORD *)(v12 + 2328) = a2;
LABEL_17:
            *v18 = v13;
            v18[1] = v14;
            v18[2] = v15;
            v18[3] = v16;
            v19 = (int *)(v18 + 4);
            v20 = *v17;
            v21 = v17[1];
            v22 = v17[2];
            v23 = v17[3];
            v24 = v17 + 4;
            *v19 = v20;
            v19[1] = v21;
            v19[2] = v22;
            v19[3] = v23;
            v19 += 4;
            v25 = *v24;
            v26 = v24[1];
            v27 = v24[2];
            v28 = v24[3];
            v24 += 4;
            *v19 = v25;
            v19[1] = v26;
            v19[2] = v27;
            v19[3] = v28;
            v19 += 4;
            v29 = v24[1];
            *v19 = *v24;
            v19[1] = v29;
            v4 = sub_2CF228(a1, v8, v9, a2);
            goto LABEL_20;
          }
          goto LABEL_19;
        }
      }
      goto LABEL_120;
    }
    if ( v10 > 0x10 )
    {
      v94 = v8[6];
      if ( v94 > 3 && v8[10] == 4 && (v94 & 3) == 0 )
      {
        v4 = sub_2CF228(a1, v8, v9, a2) != 0;
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    if ( v10 >= 0xE )
      goto LABEL_112;
    if ( v10 != 11 )
    {
LABEL_120:
      if ( v10 == 1879048181 || v10 == *(_DWORD *)(v11 + 420) )
      {
        if ( sub_2CF228(a1, v8, v9, a2) )
        {
          sub_2EF968(a1, v8);
          v4 = 1;
          goto LABEL_20;
        }
        goto LABEL_19;
      }
      if ( !(*(int (__fastcall **)(_DWORD *, unsigned int *, char *, unsigned int))(v11 + 76))(a1, v8, v9, a2) )
      {
        v108 = v8[1];
        if ( v108 < 0 )
        {
          if ( (v8[2] & 2) != 0 )
          {
LABEL_127:
            sub_2A6A5C("%B: unknown type [%#x] section `%s'", a1);
            v4 = 0;
            goto LABEL_20;
          }
        }
        else if ( (unsigned int)(v108 - 1879048192) <= 0xFFFFFFF
               || (unsigned int)(v108 - 1610612736) > 0xFFFFFFF
               || (v8[2] & 0x100) != 0 )
        {
          goto LABEL_127;
        }
LABEL_112:
        v4 = sub_2CF228(a1, v8, v9, a2);
        goto LABEL_20;
      }
LABEL_70:
      v4 = 1;
      goto LABEL_20;
    }
    v68 = (_DWORD *)a1[40];
    v69 = v68[581];
    if ( a2 == v69 )
      goto LABEL_70;
    v70 = v8[10];
    if ( v70 != *(unsigned __int8 *)(*(_DWORD *)(v11 + 392) + 5) )
      goto LABEL_19;
    v71 = v8[6];
    if ( v8[8] * v70 <= v71 )
    {
      if ( v69 )
      {
        sub_2A6A5C("%B: warning: multiple dynamic symbol tables detected - ignoring the table in section %u", a1, a2);
        v4 = 1;
      }
      else
      {
        v143 = *v8;
        v144 = v8[1];
        v145 = v8[2];
        v146 = v8[3];
        v147 = v8 + 4;
        v148 = v68 + 60;
        v68[581] = a2;
        v149 = v68[16];
        *v148 = v143;
        v148[1] = v144;
        v148[2] = v145;
        v148[3] = v146;
        v150 = *v147;
        v151 = v147[1];
        v152 = v147[2];
        v153 = v147[3];
        v147 += 4;
        v148[4] = v150;
        v148[5] = v151;
        v148[6] = v152;
        v148[7] = v153;
        v154 = *v147;
        v155 = v147[1];
        v156 = v147[2];
        v157 = v147[3];
        v147 += 4;
        v148[8] = v154;
        v148[9] = v155;
        v148[10] = v156;
        v148[11] = v157;
        v158 = v147[1];
        v148[12] = *v147;
        v148[13] = v158;
        *(_DWORD *)(v149 + 4 * a2) = v148;
        a1[10] |= 0x200u;
        v4 = sub_2CF228(a1, v148, v9, a2);
      }
      goto LABEL_20;
    }
LABEL_132:
    if ( !v71 )
    {
      v8[8] = 0;
      v4 = 1;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( v10 == 4 )
  {
LABEL_96:
    v39 = v10 == 9;
    v95 = *(_DWORD *)(v11 + 392);
    if ( v39 )
      v96 = *(unsigned __int8 *)(v95 + 3);
    else
      v96 = *(unsigned __int8 *)(v95 + 4);
    if ( v8[10] != v96 )
      goto LABEL_19;
    v97 = (_DWORD *)a1[40];
    v98 = v8[7];
    v99 = v97[133];
    if ( v99 <= v98 )
    {
      sub_2A6A5C("%B: invalid link %u for reloc section %s (index %u)", a1);
      v4 = sub_2CF228(a1, v8, v9, a2);
      goto LABEL_20;
    }
    v100 = v97[16];
    v101 = (a1[10] >> 5) & 0x42;
    v102 = *(_DWORD *)(*(_DWORD *)(v100 + 4 * v98) + 4);
    if ( !v101 )
    {
      v103 = v102 == 11;
      if ( v102 != 11 )
        v103 = v102 == 2;
      if ( !v103 && v99 > 1 )
      {
        v188 = v97[16];
        for ( i = 1; i != v99; ++i )
        {
          v190 = *(_DWORD *)(v188 + 4);
          v188 += 4;
          v191 = *(_DWORD *)(v190 + 4);
          v192 = v191 == 11;
          if ( v191 != 11 )
            v192 = v191 == 2;
          if ( v192 )
          {
            v39 = v101 == 0;
            v101 = i;
            if ( !v39 )
              goto LABEL_109;
          }
        }
        if ( !v101 )
          goto LABEL_109;
        v98 = v101;
        v193 = *(_DWORD *)(v100 + 4 * v101);
        v8[7] = v98;
        v102 = *(_DWORD *)(v193 + 4);
      }
    }
    v104 = v102 == 11;
    if ( v102 != 11 )
      v104 = v102 == 2;
    if ( v104 )
    {
      if ( !sub_2CE6E8(a1, v98) )
        goto LABEL_19;
      v98 = v8[7];
      v97 = (_DWORD *)a1[40];
    }
LABEL_109:
    v105 = v98 == 0;
    if ( v97[580] != v98 )
      v105 = 1;
    if ( !v105 )
    {
      v159 = v8[8];
      v160 = v159 != 0;
      if ( v159 )
        v160 = v99 > v159;
      if ( v160 )
      {
        v161 = *(_DWORD *)(*(_DWORD *)(v97[16] + 4 * v159) + 4);
        v162 = v161 == 4;
        if ( v161 != 4 )
          v162 = v161 == 9;
        if ( !v162 )
        {
          if ( sub_2CE6E8(a1, v159) )
          {
            v163 = a1[40];
            v164 = v8[8];
            if ( v164 < *(_DWORD *)(v163 + 532) )
            {
              v165 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v163 + 64) + 4 * v164) + 44);
              if ( v165 )
              {
                v166 = (unsigned int **)v8[1];
                v167 = *(unsigned int ***)(v165 + 140);
                v168 = v166 == (unsigned int **)4;
                if ( v166 == (unsigned int **)4 )
                {
                  v166 = v167 + 19;
                  v169 = v167[19];
                }
                else
                {
                  v169 = v167[15];
                }
                if ( v168 )
                  v202 = v166;
                else
                  v167 += 15;
                if ( !v168 )
                  v202 = v167;
                if ( !v169 )
                {
                  v170 = (unsigned int *)sub_2ACBF4((int)a1, 56);
                  if ( v170 )
                  {
                    v171 = v8[1];
                    v172 = v8[2];
                    v173 = v8[3];
                    *v170 = *v8;
                    v170[1] = v171;
                    v170[2] = v172;
                    v170[3] = v173;
                    v174 = v8[5];
                    v175 = v8[6];
                    v176 = v8[7];
                    v170[4] = v8[4];
                    v170[5] = v174;
                    v170[6] = v175;
                    v170[7] = v176;
                    v177 = v8[9];
                    v178 = v8[10];
                    v179 = v8[11];
                    v170[8] = v8[8];
                    v170[9] = v177;
                    v170[10] = v178;
                    v170[11] = v179;
                    v180 = v8[13];
                    v170[12] = v8[12];
                    v170[13] = v180;
                    *v202 = v170;
                    *(_DWORD *)(*(_DWORD *)(a1[40] + 64) + 4 * a2) = v170;
                    v181 = v8[10];
                    v182 = *(_DWORD *)(v165 + 76);
                    if ( v181 )
                      v183 = sub_347418(v8[6], v181);
                    else
                      v183 = 0;
                    v184 = *(unsigned __int8 *)(*(_DWORD *)(v11 + 392) + 9);
                    v39 = v8[6] == 0;
                    v185 = *(_DWORD *)(v165 + 20);
                    *(_DWORD *)(v165 + 68) = 0;
                    v186 = v182 + v183 * v184;
                    v187 = *((_QWORD *)v8 + 2);
                    *(_DWORD *)(v165 + 20) = v185 | 4;
                    *(_DWORD *)(v165 + 76) = v186;
                    *(_QWORD *)(v165 + 88) = v187;
                    if ( !v39 && v8[1] == 4 )
                      *(_BYTE *)(v165 + 25) |= 4u;
                    v4 = 1;
                    a1[10] |= 0x20u;
                    goto LABEL_20;
                  }
                }
              }
            }
          }
          goto LABEL_19;
        }
      }
    }
    goto LABEL_112;
  }
  if ( v10 > 4 )
  {
    if ( v10 <= 8 )
    {
      if ( v10 >= 7 || v10 == 5 )
        goto LABEL_112;
      if ( !sub_2CF228(a1, v8, v9, a2) )
        goto LABEL_19;
      v58 = (_DWORD *)a1[40];
      v59 = v8[7];
      v60 = v58[133];
      if ( v59 > v60 )
      {
        v142 = sub_2A6780((int)a1);
        if ( v142 == 6 || v142 == 9 )
        {
          v4 = v8[7] - 65280 <= 1;
          goto LABEL_20;
        }
        goto LABEL_19;
      }
      v61 = v58[16];
      v62 = *(_DWORD *)(v61 + 4 * v59);
      if ( !v62 )
      {
LABEL_19:
        v4 = 0;
        goto LABEL_20;
      }
      if ( *(_DWORD *)(v62 + 4) != 3 )
      {
        v63 = v58[581];
        if ( v63 )
        {
          v4 = 1;
          v8[7] = *(_DWORD *)(*(_DWORD *)(v61 + 4 * v63) + 28);
          goto LABEL_20;
        }
        if ( v60 > 1 )
        {
          v64 = *(_DWORD *)(v61 + 4);
          if ( *(_DWORD *)(v64 + 4) == 11 )
          {
LABEL_185:
            v4 = 1;
            v8[7] = *(_DWORD *)(v64 + 28);
            goto LABEL_20;
          }
          v65 = v61 + 4;
          v66 = 1;
          while ( v60 != ++v66 )
          {
            v67 = *(_DWORD *)(v65 + 4);
            v65 += 4;
            v64 = v67;
            if ( *(_DWORD *)(v67 + 4) == 11 )
              goto LABEL_185;
          }
        }
      }
      goto LABEL_70;
    }
    goto LABEL_96;
  }
  switch ( v10 )
  {
    case 1u:
      goto LABEL_112;
    case 0u:
      goto LABEL_70;
    case 2u:
      v72 = (_DWORD *)a1[40];
      v73 = v72[580];
      if ( a2 == v73 )
        goto LABEL_70;
      v74 = v8[10];
      if ( v74 != *(unsigned __int8 *)(*(_DWORD *)(v11 + 392) + 5) )
        goto LABEL_19;
      v71 = v8[6];
      if ( v8[8] * v74 > v71 )
        goto LABEL_132;
      if ( v73 )
      {
        sub_2A6A5C("%B: warning: multiple symbol tables detected - ignoring the table in section %u", a1, a2);
        v4 = 1;
        goto LABEL_20;
      }
      v75 = *v8;
      v76 = v8[1];
      v77 = v8[2];
      v78 = v8[3];
      v79 = (int *)(v8 + 4);
      v72[580] = a2;
      v80 = v72[16];
      v72[18] = v75;
      v72[19] = v76;
      v72[20] = v77;
      v72[21] = v78;
      v81 = *v79;
      v82 = v79[1];
      v83 = v79[2];
      v84 = v79[3];
      v79 += 4;
      v72[22] = v81;
      v72[23] = v82;
      v72[24] = v83;
      v72[25] = v84;
      v85 = *v79;
      v86 = v79[1];
      v87 = v79[2];
      v88 = v79[3];
      v79 += 4;
      v72[26] = v85;
      v72[27] = v86;
      v72[28] = v87;
      v72[29] = v88;
      v89 = v79[1];
      v72[30] = *v79;
      v72[31] = v89;
      *(_DWORD *)(v80 + 4 * a2) = v72 + 18;
      v90 = a1[10];
      a1[10] = v90 & 0xFE00001F | (32 * ((v90 >> 5) & 0xFFFEF | 0x10));
      if ( (v72[20] & 2) != 0 && ((v90 >> 5) & 0x40) != 0 && !sub_2CF228(a1, v72 + 18, v9, a2) )
        goto LABEL_19;
      v91 = (_DWORD *)a1[40];
      v92 = v91[130];
      if ( v92 )
      {
        while ( a2 != *(_DWORD *)(v92 + 28) )
        {
          v92 = *(_DWORD *)(v92 + 60);
          if ( !v92 )
            goto LABEL_186;
        }
        goto LABEL_70;
      }
LABEL_186:
      v194 = v91[133];
      v195 = a2 + 1;
      if ( v194 <= a2 + 1 )
      {
LABEL_195:
        if ( v194 == v195 )
        {
          if ( a2 > 1 )
          {
            v199 = v91[16];
            v195 = 1;
            while ( 1 )
            {
              v201 = *(_DWORD *)(v199 + 4);
              v199 += 4;
              v200 = v201;
              if ( *(_DWORD *)(v201 + 4) == 18 && a2 == *(_DWORD *)(v200 + 28) )
                goto LABEL_192;
              if ( a2 == ++v195 )
                goto LABEL_70;
            }
          }
          v195 = 1;
        }
      }
      else
      {
        v196 = v91[16] + v7;
        while ( 1 )
        {
          v198 = *(_DWORD *)(v196 + 4);
          v196 += 4;
          v197 = v198;
          if ( *(_DWORD *)(v198 + 4) == 18 && a2 == *(_DWORD *)(v197 + 28) )
            break;
          if ( v194 <= ++v195 )
            goto LABEL_195;
        }
      }
      if ( a2 == v195 )
        goto LABEL_70;
LABEL_192:
      v4 = sub_2CE6E8(a1, v195);
      goto LABEL_20;
  }
  if ( v8[11] )
    goto LABEL_70;
  v34 = (unsigned int *)a1[40];
  v35 = v34[16];
  if ( a2 == v2[15] )
  {
    v36 = v34 + 32;
    goto LABEL_137;
  }
  v37 = v34[580];
  if ( a2 == *(_DWORD *)(*(_DWORD *)(v35 + 4 * v37) + 28) )
    goto LABEL_136;
  v38 = v34[581];
  if ( a2 == *(_DWORD *)(*(_DWORD *)(v35 + 4 * v38) + 28) )
  {
LABEL_52:
    v42 = *v8;
    v43 = v8[1];
    v44 = v8[2];
    v45 = v8[3];
    v46 = v8 + 4;
    v47 = v34 + 74;
    v48 = v34[16];
    *v47 = v42;
    v47[1] = v43;
    v47[2] = v44;
    v47[3] = v45;
    v49 = *v46;
    v50 = v46[1];
    v51 = v46[2];
    v52 = v46[3];
    v46 += 4;
    v47[4] = v49;
    v47[5] = v50;
    v47[6] = v51;
    v47[7] = v52;
    v53 = *v46;
    v54 = v46[1];
    v55 = v46[2];
    v56 = v46[3];
    v46 += 4;
    v47[8] = v53;
    v47[9] = v54;
    v47[10] = v55;
    v47[11] = v56;
    v57 = v46[1];
    v47[12] = *v46;
    v47[13] = v57;
    *(_DWORD *)(v48 + 4 * a2) = v47;
    v4 = sub_2CF228(a1, v47, v9, a2);
    goto LABEL_20;
  }
  v39 = v38 == 0;
  if ( v38 )
    v39 = v37 == 0;
  if ( !v39 )
    goto LABEL_112;
  v40 = v34[133];
  if ( v40 <= 1 )
    goto LABEL_112;
  v41 = 1;
  while ( 1 )
  {
    if ( a2 != *(_DWORD *)(*(_DWORD *)(v35 + 4 * v41) + 28) )
      goto LABEL_45;
    if ( a2 == v41 || !sub_2CE6E8(a1, v41) )
      goto LABEL_19;
    v34 = (unsigned int *)a1[40];
    if ( v34[580] == v41 )
      break;
    if ( v34[581] == v41 )
      goto LABEL_52;
LABEL_45:
    if ( v40 == ++v41 )
      goto LABEL_112;
    v35 = v34[16];
  }
  v35 = v34[16];
LABEL_136:
  v36 = v34 + 46;
LABEL_137:
  v126 = *v8;
  v127 = v8[1];
  v128 = v8[2];
  v129 = v8[3];
  v130 = (int *)(v8 + 4);
  v131 = v36;
  v4 = 1;
  *v36 = v126;
  v36[1] = v127;
  v36[2] = v128;
  v36[3] = v129;
  v132 = (int *)(v36 + 4);
  v133 = *v130;
  v134 = v130[1];
  v135 = v130[2];
  v136 = v130[3];
  v130 += 4;
  *v132 = v133;
  v132[1] = v134;
  v132[2] = v135;
  v132[3] = v136;
  v132 += 4;
  v137 = *v130;
  v138 = v130[1];
  v139 = v130[2];
  v140 = v130[3];
  v130 += 4;
  *v132 = v137;
  v132[1] = v138;
  v132[2] = v139;
  v132[3] = v140;
  v132 += 4;
  v141 = v130[1];
  *v132 = *v130;
  v132[1] = v141;
  *(_DWORD *)(v35 + 4 * a2) = v131;
LABEL_20:
  if ( dword_48FD20 && a1 == (_DWORD *)dword_48FD1C )
    *(_DWORD *)(dword_48FD20 + 4 * a2) = 0;
  v31 = --dword_48FD18;
  if ( !dword_48FD18 )
  {
    dword_48FD20 = v31;
    dword_48FD1C = (int)a1;
  }
  return v4;
}
