int __fastcall sub_2FA5D0(
        int a1,
        int *a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int a5,
        int **a6,
        int *a7,
        int **a8,
        unsigned int *a9,
        int a10,
        int a11,
        int ***a12)
{
  int **v13; // r10
  int v14; // r3
  unsigned int v15; // r3
  _DWORD *v16; // r1
  int v17; // r2
  bool v18; // zf
  _DWORD *v19; // r2
  int *v20; // r3
  int *j; // r4
  int v22; // r0
  int v23; // r11
  int v24; // r3
  int v25; // r3
  int v26; // r1
  int *v27; // r0
  int v28; // r12
  int v29; // r2
  int *v31; // r4
  unsigned int v32; // r6
  int v33; // r11
  unsigned int v34; // r0
  bool v35; // zf
  _DWORD *v36; // r3
  int *v37; // r2
  _DWORD *v38; // t1
  int v39; // r1
  int v40; // r3
  int v41; // r0
  int *v42; // r3
  bool v43; // zf
  const char *v44; // r1
  int v45; // r6
  char *v46; // r0
  _DWORD *i; // r3
  _DWORD *v48; // r2
  int v49; // r1
  bool v50; // zf
  int *v51; // r1
  int *v52; // r3
  unsigned int v53; // r5
  unsigned int v54; // r3
  unsigned int v55; // r6
  int *v56; // r1
  int v57; // r0
  int *v58; // r2
  int v59; // r9
  int v60; // r2
  unsigned int v61; // r8
  int *v62; // r11
  int v63; // r0
  int *v64; // r0
  int *v65; // r0
  int v66; // r0
  unsigned int v67; // r2
  int **v68; // r12
  int v69; // r0
  int v70; // r2
  int v71; // r3
  unsigned int v72; // r2
  int v73; // r4
  unsigned __int64 v74; // r6
  unsigned __int8 *v75; // r2
  int *v76; // r1
  unsigned int v77; // r8
  int v78; // r0
  unsigned int v79; // r10
  _DWORD *v80; // r0
  _DWORD *v81; // r5
  int v82; // r0
  unsigned int v83; // r3
  char *v84; // r4
  int v85; // r3
  int *v86; // r2
  int v87; // r9
  int v88; // r6
  char *v89; // r4
  int v90; // r7
  int v91; // r3
  char *v92; // r0
  bool v93; // cf
  unsigned int v94; // r10
  _DWORD *v95; // r3
  unsigned int v96; // r0
  char *v97; // r7
  _DWORD *v98; // r4
  int *v99; // r0
  int *v100; // r6
  int v101; // r3
  _BOOL4 v102; // r5
  char *v103; // r8
  int v104; // r11
  unsigned int v105; // r9
  bool v106; // zf
  bool v107; // zf
  int v108; // r2
  unsigned int v109; // r12
  unsigned int v110; // r1
  int v111; // r2
  int *v112; // r3
  int *v113; // r9
  int v114; // r3
  __int64 v115; // r2
  char *v116; // r3
  bool v117; // zf
  bool v118; // zf
  _BOOL4 v119; // r3
  char *v120; // r3
  int v121; // r3
  char *v122; // r0
  bool v123; // zf
  int v124; // r3
  _DWORD *v125; // r4
  int k; // r6
  int v127; // t1
  char *v128; // r0
  int *v129; // r3
  char *v130; // r0
  _DWORD *v131; // r12
  unsigned int v132; // r5
  _DWORD *v133; // r4
  int v134; // r7
  _DWORD *v135; // r3
  int v136; // r0
  bool v137; // zf
  int v138; // r0
  unsigned int v139; // r2
  unsigned int v140; // r1
  unsigned int v141; // r2
  int *v142; // r2
  int *v143; // r3
  int v147; // [sp+20h] [bp-64h]
  int v148; // [sp+24h] [bp-60h]
  int v149; // [sp+28h] [bp-5Ch]
  unsigned int v150; // [sp+2Ch] [bp-58h]
  unsigned __int8 *v151; // [sp+30h] [bp-54h]
  int v152; // [sp+38h] [bp-4Ch]
  int v153; // [sp+38h] [bp-4Ch]
  _DWORD *v154; // [sp+3Ch] [bp-48h]
  int **v155; // [sp+40h] [bp-44h]
  char *v156; // [sp+40h] [bp-44h]
  char *v157; // [sp+40h] [bp-44h]
  unsigned int v158; // [sp+48h] [bp-3Ch]
  _DWORD *v159; // [sp+4Ch] [bp-38h]
  char *v160; // [sp+50h] [bp-34h]
  int v161; // [sp+54h] [bp-30h]
  unsigned int v162; // [sp+58h] [bp-2Ch]
  _DWORD *v163; // [sp+60h] [bp-24h] BYREF
  int *v164; // [sp+64h] [bp-20h] BYREF
  _DWORD *v165; // [sp+68h] [bp-1Ch] BYREF
  int *v166; // [sp+6Ch] [bp-18h] BYREF
  unsigned int v167; // [sp+70h] [bp-14h] BYREF
  int v168; // [sp+74h] [bp-10h]
  char *s; // [sp+78h] [bp-Ch]

  *a6 = 0;
  if ( a7 )
    *a7 = 0;
  v163 = 0;
  *a8 = 0;
  if ( a9 )
    *a9 = 0;
  if ( !sub_2FA030(a1, 0, a10, (int)a2, a12, ((*(_DWORD *)(a1 + 40) >> 5) & 0x42) == 0) )
    return 0;
  v13 = *a12;
  if ( a3 )
  {
    v14 = a5;
    if ( a5 )
      v14 = 1;
    if ( a4 )
      v14 = 1;
    if ( a7 )
      v14 = 1;
    if ( v14 )
      sub_2A6BBC("./dwarf2.c", 4543);
    a4 = (_DWORD *)a3[4];
    v147 = 1;
    v15 = a3[2];
  }
  else
  {
    v35 = a7 == 0;
    if ( a7 )
      v35 = a4 == 0;
    if ( v35 )
      sub_2A6BBC("./dwarf2.c", 4549);
    if ( a2 )
    {
      if ( (a4[5] & 0x10) != 0 )
      {
        v15 = a5;
        v147 = 0;
      }
      else
      {
        v36 = (_DWORD *)*a2;
        if ( *a2 )
        {
          v147 = a4[5] & 0x10;
          v37 = a2;
          do
          {
            if ( *v36 == a1 && (_DWORD *)v36[4] == a4 && v36[2] == a5 )
            {
              v39 = v36[3];
              if ( (v39 & 0x100) == 0 )
              {
                a3 = v36;
                v147 = 1;
                if ( (v39 & 2) != 0 )
                {
                  v15 = a5;
                  v147 = 1;
                  goto LABEL_16;
                }
              }
            }
            v38 = (_DWORD *)v37[1];
            ++v37;
            v36 = v38;
          }
          while ( v38 );
          v15 = a5;
        }
        else
        {
          a3 = 0;
          v15 = a5;
          v147 = 0;
        }
      }
    }
    else
    {
      v15 = a5;
      v147 = 0;
    }
  }
LABEL_16:
  v16 = a4;
  v17 = a4[15];
  v18 = v17 == 0;
  if ( v17 )
  {
    v16 = (_DWORD *)a4[14];
    v19 = *(_DWORD **)(v17 + 28);
  }
  else
  {
    v19 = a4;
  }
  if ( v18 )
    v19 = (_DWORD *)v19[7];
  else
    v15 += (unsigned int)v16;
  v150 = (unsigned int)v19 + v15;
  if ( !v13[3] )
    return 0;
  v13[26] = 0;
  if ( !v147 )
  {
    v31 = *v13;
    v18 = *v13 == 0;
    v164 = 0;
    v165 = 0;
    v166 = 0;
    v167 = 0;
    if ( v18 )
    {
      v33 = 0;
LABEL_99:
      if ( *a8 )
      {
        v23 = 1;
        goto LABEL_34;
      }
      goto LABEL_101;
    }
    v32 = -1;
    while ( 1 )
    {
      if ( !v31[5] )
        goto LABEL_52;
      v33 = v31[9];
      if ( v33 )
      {
        v33 = 0;
        goto LABEL_50;
      }
      if ( sub_2F6234((int)v31, v150) )
      {
LABEL_52:
        v34 = sub_2F97DC(v31, v150, &v164, (unsigned int *)&v165, &v166, &v167, v13);
        v33 = v34;
        if ( v34 )
        {
          if ( v34 > v32 )
            goto LABEL_130;
          if ( v164 )
            *a6 = v164;
          if ( v165 )
            v163 = v165;
          if ( a9 && v167 )
            *a9 = v167;
          if ( !v166 )
          {
            v32 = v34;
LABEL_130:
            v33 = 1;
            goto LABEL_50;
          }
          v32 = v34;
          v33 = 1;
          *a8 = v166;
        }
LABEL_50:
        v31 = (int *)*v31;
        if ( !v31 )
          goto LABEL_99;
      }
      else
      {
        v31 = (int *)*v31;
        if ( !v31 )
          goto LABEL_99;
      }
    }
  }
  v20 = v13[34];
  if ( v20 )
  {
    if ( v20 != (int *)1 )
      goto LABEL_26;
  }
  else
  {
    v40 = (int)v13[30];
    v13[30] = (int *)(v40 + 1);
    if ( v40 <= 99 )
      goto LABEL_26;
    v13[31] = (int *)sub_2F60A8(a1);
    v41 = sub_2F60A8(a1);
    v42 = v13[31];
    v13[32] = (int *)v41;
    v43 = v41 == 0;
    if ( v41 )
      v43 = v42 == 0;
    if ( v43 )
    {
      v13[34] = (int *)2;
      goto LABEL_26;
    }
    sub_2F95B4((int *)v13);
    v13[34] = (int *)1;
  }
  sub_2F95B4((int *)v13);
  if ( v13[34] == (int *)1 )
  {
    v44 = (const char *)a3[1];
    v45 = a3[4];
    if ( (a3[3] & 8) != 0 )
    {
      v130 = sub_2AAC2C(v13[31], v44, 0, 0);
      if ( v130 )
      {
        v131 = (_DWORD *)*((_DWORD *)v130 + 3);
        if ( v131 )
        {
          v132 = 0;
          v133 = 0;
          do
          {
            v134 = v131[1];
            v135 = (_DWORD *)(v134 + 36);
            if ( v134 != -36 )
            {
              v136 = *(_DWORD *)(v134 + 48);
              v137 = v136 == 0;
              if ( v136 )
                v137 = v136 == v45;
              v138 = v137;
              do
              {
                if ( v138 )
                {
                  v139 = v135[1];
                  if ( v150 >= v139 )
                  {
                    v140 = v135[2];
                    v141 = v140 - v139;
                    if ( v150 < v140 )
                    {
                      if ( v133 )
                      {
                        if ( v132 > v141 )
                        {
                          v132 = v141;
                          v133 = (_DWORD *)v131[1];
                        }
                      }
                      else
                      {
                        v132 = v141;
                        v133 = (_DWORD *)v131[1];
                      }
                    }
                  }
                }
                v135 = (_DWORD *)*v135;
              }
              while ( v135 );
            }
            v131 = (_DWORD *)*v131;
          }
          while ( v131 );
          if ( v133 )
          {
            v142 = (int *)v133[3];
            v143 = (int *)v133[5];
            v133[12] = v45;
            *a6 = v142;
            v23 = v147;
            *a8 = v143;
            goto LABEL_34;
          }
        }
      }
    }
    else
    {
      v46 = sub_2AAC2C(v13[32], v44, 0, 0);
      if ( v46 )
      {
        for ( i = (_DWORD *)*((_DWORD *)v46 + 3); i; i = (_DWORD *)*i )
        {
          v48 = (_DWORD *)i[1];
          if ( v150 == v48[5] )
          {
            v49 = v48[6];
            v50 = v49 == 0;
            if ( v49 )
              v50 = v49 == v45;
            if ( v50 )
            {
              v51 = (int *)v48[1];
              v52 = (int *)v48[2];
              v48[6] = v45;
              v23 = v147;
              *a6 = v51;
              *a8 = v52;
              goto LABEL_34;
            }
          }
        }
      }
    }
    goto LABEL_141;
  }
LABEL_26:
  for ( j = *v13; j; j = (int *)*j )
  {
    if ( (a3[3] & 8) == 0 || !j[5] || !j[9] && sub_2F6234((int)j, v150) )
    {
      v22 = sub_2F93E4(j, a3, v150, a6, a8, v13);
      if ( v22 )
      {
        v23 = v22;
        goto LABEL_34;
      }
    }
  }
LABEL_141:
  v33 = 0;
LABEL_101:
  if ( a11 )
  {
    if ( ((a11 - 4) & 0xFFFFFFFB) != 0 )
      sub_2A6BBC("./dwarf2.c", 4693);
  }
  else
  {
    a11 = 4;
  }
  v148 = v33;
  v154 = a3;
  while ( 2 )
  {
    v53 = (unsigned int)v13[3];
    v54 = (unsigned int)v13[4];
    if ( v54 <= v53 )
    {
LABEL_123:
      v23 = v148;
      goto LABEL_34;
    }
    while ( 1 )
    {
      v55 = v53 + 4;
      v56 = v13[6];
      if ( v53 + 4 > v54 )
      {
        v67 = v53 + 8;
        if ( v54 < v53 + 8 )
        {
LABEL_127:
          v55 = v67;
LABEL_128:
          v13[3] = (int *)v55;
          goto LABEL_122;
        }
        goto LABEL_125;
      }
      v57 = (*(int (__fastcall **)(unsigned int))(v56[1] + 40))(v53);
      if ( v57 != -1 )
        break;
      v64 = v13[3];
      v54 = (unsigned int)v13[4];
      v55 = (unsigned int)(v64 + 3);
      v65 = v64 + 1;
      if ( v54 < v55 )
        goto LABEL_128;
      v66 = (*(int (__fastcall **)(int *))(v13[6][1] + 28))(v65);
      v54 = (unsigned int)v13[4];
      v55 = (unsigned int)(v13[3] + 3);
      v13[3] = (int *)v55;
LABEL_121:
      if ( v66 )
      {
        v59 = v66;
        v149 = 8;
        goto LABEL_114;
      }
LABEL_122:
      v53 = v55;
      if ( v54 <= v55 )
        goto LABEL_123;
    }
    v58 = v13[3];
    v54 = (unsigned int)v13[4];
    v55 = (unsigned int)(v58 + 1);
    if ( !v57 )
    {
      v67 = (unsigned int)(v58 + 2);
      v56 = v13[6];
      if ( v54 < v67 )
        goto LABEL_127;
LABEL_125:
      v66 = (*(int (__fastcall **)(unsigned int))(v56[1] + 40))(v55);
      v54 = (unsigned int)v13[4];
      v55 = (unsigned int)(v13[3] + 2);
      v13[3] = (int *)v55;
      goto LABEL_121;
    }
    v59 = v57;
    v13[3] = (int *)v55;
    if ( a11 == 8 )
      v60 = 4;
    else
      v60 = a11;
    v149 = v60;
LABEL_114:
    v151 = (unsigned __int8 *)(v55 + v59);
    if ( v55 + v59 > v54 )
      return 0;
    v61 = v55 + 2;
    v62 = v13[6];
    if ( v55 + v59 < v55 + 2 )
      goto LABEL_123;
    v63 = (*(int (__fastcall **)(unsigned int))(v62[1] + 52))(v55);
    v152 = v63;
    if ( (unsigned int)(v63 - 2) <= 3 )
    {
      if ( v63 == 5 )
      {
        v61 = v55 + 4;
        if ( (unsigned int)v151 < v55 + 3 )
          v73 = 0;
        else
          v73 = *(unsigned __int8 *)(v55 + 2);
        if ( (unsigned int)v151 >= v61 )
          v158 = *(unsigned __int8 *)(v55 + 3);
        else
          v158 = 0;
      }
      else
      {
        v73 = 1;
        v158 = -1;
      }
      if ( ((v149 - 4) & 0xFFFFFFFB) != 0 )
      {
        sub_2A6BBC("./dwarf2.c", 3365);
      }
      else if ( v149 == 4 )
      {
        if ( (unsigned int)v151 >= v61 + 4 )
        {
          v74 = (unsigned int)(*(int (__fastcall **)(unsigned int))(v62[1] + 40))(v61);
          goto LABEL_153;
        }
        goto LABEL_300;
      }
      if ( (unsigned int)v151 >= v61 + 8 )
      {
        v74 = ((__int64 (__fastcall *)(unsigned int))*(_DWORD *)(v62[1] + 28))(v61);
        goto LABEL_153;
      }
LABEL_300:
      v74 = 0;
LABEL_153:
      v75 = (unsigned __int8 *)(v61 + v149);
      v160 = (char *)(v61 + v149);
      if ( v152 != 5 )
      {
        if ( v151 < v75 + 1 )
        {
          v23 = v148;
          v158 = 0;
          goto LABEL_279;
        }
        v160 = (char *)(v75 + 1);
        v158 = *v75;
      }
      if ( v73 == 2 )
        v160 += v149 + 8;
      if ( v158 > 4 )
      {
        v23 = v148;
        sub_2A6A5C("Dwarf Error: found address size '%u', this reader can not handle sizes greater than '%u'.", v158, 4);
        ((void (__fastcall *)(int))loc_2A6C48)(17);
        goto LABEL_34;
      }
      if ( ((v158 - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( !sub_2F5C18(v62, (const char **)v13[2], (int)v13[15], (int)(v13 + 17), v74, v13 + 16, (size_t *)v13 + 17) )
          goto LABEL_123;
        if ( v74 >= (unsigned int)v13[17] )
          goto LABEL_123;
        v159 = sub_2AD09C((int)v62, 0x1E4u);
        if ( !v159 )
          goto LABEL_123;
        v76 = v13[16];
        HIDWORD(v74) = (char *)v76 + v74;
        v77 = (unsigned int)v13[17] + (_DWORD)v76;
        v78 = sub_2ABC24((int)v62, (char *)v76 + v74, (int *)&v167, 0, v77);
        HIDWORD(v74) += v167;
        if ( v78 )
        {
          v155 = v13;
          v79 = v78;
          v161 = v59;
          v162 = v53;
          while ( 1 )
          {
            v80 = sub_2AD09C((int)v62, 0x18u);
            v81 = v80;
            if ( !v80 )
            {
              v13 = v155;
              v23 = v148;
              goto LABEL_34;
            }
            *v80 = v79;
            v82 = sub_2ABC24((int)v62, (char *)HIDWORD(v74), (int *)&v167, 0, v77);
            v83 = v167;
            v81[1] = v82;
            v84 = (char *)(HIDWORD(v74) + v83 + 1);
            if ( v77 < (unsigned int)v84 )
              v85 = 0;
            else
              v85 = *(unsigned __int8 *)(HIDWORD(v74) + v83);
            v81[2] = v85;
            while ( 1 )
            {
              v87 = -1;
              v88 = sub_2ABC24((int)v62, v84, (int *)&v167, 0, v77);
              v89 = &v84[v167];
              v90 = sub_2ABC24((int)v62, v89, (int *)&v167, 0, v77);
              v84 = &v89[v167];
              if ( v90 == 33 )
                break;
              if ( !v88 )
                goto LABEL_181;
LABEL_173:
              v91 = v81[3];
              v92 = (char *)v81[4];
              if ( (v91 & 3) == 0 )
              {
                v92 = (char *)sub_2AB3FC(v92, 12 * (v91 + 4));
                if ( !v92 )
                {
                  v13 = v155;
                  v23 = v148;
                  v125 = v159 - 1;
                  do
                  {
                    v127 = v125[1];
                    ++v125;
                    for ( k = v127; k; k = *(_DWORD *)(k + 20) )
                      free(*(void **)(k + 16));
                  }
                  while ( v159 + 120 != v125 );
                  goto LABEL_34;
                }
                v91 = v81[3];
                v81[4] = v92;
              }
              v86 = (int *)&v92[12 * v91];
              *v86 = v88;
              v86[1] = v90;
              v86[2] = v87;
              v81[3] = v91 + 1;
            }
            v87 = sub_2ABC24((int)v62, v84, (int *)&v167, 1, v77);
            v84 += v167;
            if ( v88 )
              goto LABEL_173;
LABEL_181:
            v93 = v84 - (char *)v155[16] >= (unsigned int)v155[17];
            v94 = v79 % 0x79;
            v81[5] = v159[v94];
            v159[v94] = v81;
            if ( !v93 )
            {
              v79 = sub_2ABC24((int)v62, v84, (int *)&v167, v88, v77);
              HIDWORD(v74) = &v84[v167];
              v95 = (_DWORD *)v159[v79 % 0x79];
              if ( v95 )
              {
                while ( v79 != *v95 )
                {
                  v95 = (_DWORD *)v95[5];
                  if ( !v95 )
                    goto LABEL_231;
                }
                goto LABEL_186;
              }
LABEL_231:
              if ( v79 )
                continue;
            }
LABEL_186:
            v59 = v161;
            v13 = v155;
            v53 = v162;
            break;
          }
        }
        v96 = sub_2ABC24((int)v62, v160, (int *)&v166, 0, (unsigned int)v151);
        v97 = (char *)v166 + (_DWORD)v160;
        if ( !v96 )
          goto LABEL_123;
        v98 = (_DWORD *)v159[v96 % 0x79];
        if ( !v98 )
        {
LABEL_277:
          v23 = v148;
          sub_2A6A5C("Dwarf Error: Could not find abbrev number %u.", v96);
          ((void (__fastcall *)(int))loc_2A6C48)(17);
          goto LABEL_34;
        }
        while ( v96 != *v98 )
        {
          v98 = (_DWORD *)v98[5];
          if ( !v98 )
            goto LABEL_277;
        }
        v99 = (int *)sub_2AD09C((int)v62, 0x68u);
        v100 = v99;
        if ( !v99 )
          goto LABEL_123;
        *((_BYTE *)v99 + 92) = v158;
        *((_BYTE *)v99 + 93) = v149;
        v101 = v98[3];
        v99[2] = (int)v62;
        v99[22] = v152;
        v99[21] = (int)v13;
        v99[12] = v53;
        v99[7] = (int)v159;
        v99[15] = (int)v151;
        if ( v101 )
        {
          v102 = 0;
          v153 = v59;
          v103 = 0;
          v104 = 0;
          v105 = 0;
          do
          {
            v108 = v98[4];
            v109 = *(_DWORD *)(v108 + 12 * v105);
            v110 = *(_DWORD *)(v108 + 12 * v105 + 4);
            v111 = *(_DWORD *)(v108 + 12 * v105 + 8);
            v167 = v109;
            v97 = (char *)sub_2F68C8(&v167, v110, v111, (int)v100, v97, v151);
            if ( !v97 )
            {
LABEL_242:
              v23 = v148;
              goto LABEL_34;
            }
            if ( v167 == 18 )
            {
              v103 = s;
              v102 = v168 != 1;
            }
            else if ( v167 <= 0x12 )
            {
              if ( v167 == 16 )
              {
                v116 = s;
                v100[11] = 1;
                v100[13] = (int)v116;
              }
              else if ( v167 > 0x10 )
              {
                v104 = (int)s;
                if ( v98[1] == 17 )
                  v100[24] = (int)s;
              }
              else if ( v167 == 3 )
              {
                v106 = v168 == 14;
                if ( v168 != 14 )
                  v106 = v168 == 8;
                if ( v106 )
                  goto LABEL_267;
                v107 = v168 == 7969;
                if ( v168 != 7969 )
                  v107 = v168 == 31;
                if ( v107 )
LABEL_267:
                  v100[6] = (int)s;
              }
            }
            else
            {
              switch ( v167 )
              {
                case 0x1Bu:
                  v117 = v168 == 14;
                  if ( v168 != 14 )
                    v117 = v168 == 8;
                  if ( v117 )
                    goto LABEL_259;
                  v118 = v168 == 7969;
                  if ( v168 != 7969 )
                    v118 = v168 == 31;
                  v119 = v118;
                  if ( v118 )
                  {
LABEL_259:
                    v120 = s;
                    if ( s )
                    {
                      v157 = s;
                      v122 = strchr(s, 58);
                      v120 = v157;
                      v123 = v122 == 0;
                      if ( v122 )
                        v123 = v157 == v122;
                      if ( !v123 && *(v122 - 1) == 46 && v122[1] == 47 )
                        v120 = v122 + 1;
                    }
                  }
                  else
                  {
                    v156 = (char *)v119;
                    sub_2A6A5C("Dwarf Error: DW_AT_comp_dir attribute encountered with a non-string form.");
                    v120 = v156;
                  }
                  v100[10] = (int)v120;
                  break;
                case 0x55u:
                  if ( !sub_2F7568((int)v100, v100 + 3, (int)s) )
                    goto LABEL_242;
                  break;
                case 0x13u:
                  v100[8] = (int)s;
                  break;
              }
            }
            ++v105;
          }
          while ( v105 < v98[3] );
          v59 = v153;
          if ( v102 )
            v103 += v104;
          if ( v103 && !sub_2F667C(v100 + 2, v100 + 3, v104, (int)v103) )
            goto LABEL_123;
        }
        v112 = v13[3];
        v100[14] = (int)v97;
        v93 = __CFADD__(v112, v59);
        v113 = (int *)((char *)v112 + v59);
        if ( v93 )
        {
          v23 = 0;
          goto LABEL_34;
        }
        v114 = (int)*v13;
        v13[3] = v113;
        if ( v114 )
          *(_DWORD *)(v114 + 4) = v100;
        else
          v13[1] = v100;
        *v100 = v114;
        *v13 = v100;
        if ( v147 )
        {
          if ( (v154[3] & 8) == 0 || !v100[5] )
            goto LABEL_255;
          v148 = v100[9];
          if ( v148 )
          {
            v148 = 0;
            goto LABEL_227;
          }
          if ( sub_2F6234((int)v100, v150) )
          {
LABEL_255:
            v121 = sub_2F93E4(v100, v154, v150, a6, a8, v13);
            v113 = v13[3];
            v148 = v121 != 0;
          }
        }
        else
        {
          if ( !v100[5] )
            goto LABEL_270;
          v148 = v100[9];
          if ( v148 )
          {
            v148 = v147;
            goto LABEL_227;
          }
          if ( sub_2F6234((int)v100, v150) )
          {
LABEL_270:
            v124 = sub_2F97DC(v100, v150, a6, (unsigned int *)&v163, a8, a9, v13);
            v113 = v13[3];
            v148 = v124 != 0;
          }
        }
LABEL_227:
        v115 = *(_QWORD *)(v13 + 7);
        if ( (int *)((char *)v113 - HIDWORD(v115)) == *(int **)(v115 + 36) )
        {
          v128 = sub_2F65EC((int)v13[6], a10, v115);
          v129 = v13[3];
          v13[7] = (int *)v128;
          v13[8] = v129;
        }
        if ( v148 )
        {
          v23 = v148;
          goto LABEL_34;
        }
        continue;
      }
      v23 = v148;
LABEL_279:
      sub_2A6A5C(
        "Dwarf Error: found address size '%u', this reader can only handle address sizes '2', '4' and '8'.",
        v158);
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      goto LABEL_34;
    }
    break;
  }
  v23 = v148;
  if ( v63 )
  {
    sub_2A6A5C(
      "Dwarf Error: found dwarf version '%u', this reader only handles version 2, 3, 4 and 5 information.",
      v63);
    ((void (__fastcall *)(int))loc_2A6C48)(17);
  }
LABEL_34:
  if ( v163 )
  {
    if ( v163[7] )
    {
      v24 = v163[8];
    }
    else
    {
      v68 = a6;
      if ( *a6 )
        v68 = 0;
      v69 = sub_2FA404(a1, a2, (int)a4, a5, v68, a7);
      v70 = a4[15];
      v71 = a4[7];
      if ( v70 )
        v71 = *(_DWORD *)(v70 + 28) + a4[14];
      v72 = (unsigned int)v163;
      if ( v69 && v71 + *(_DWORD *)(v69 + 8) == v163[10] )
      {
        v24 = *a7;
        v163[8] = *a7;
      }
      else
      {
        v24 = v163[8];
      }
      *(_DWORD *)(v72 + 28) = 1;
    }
    *a7 = v24;
  }
  v25 = (*(_DWORD *)(a1 + 40) >> 5) & 0x42;
  if ( v25 )
    return v23;
  v26 = (int)v13[28];
  v27 = v13[29];
  if ( v26 <= 0 )
    return v23;
  v28 = (*(_DWORD *)(a1 + 40) >> 5) & 0x42;
  do
  {
    v29 = v27[2 * v25++];
    *(_DWORD *)(v29 + 28) = v28;
  }
  while ( v26 != v25 );
  return v23;
}
