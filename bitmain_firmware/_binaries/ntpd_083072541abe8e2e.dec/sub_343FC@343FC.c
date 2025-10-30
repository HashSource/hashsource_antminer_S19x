int sub_343FC()
{
  double v0; // d0
  _DWORD *v1; // r3
  int v2; // r2
  int v3; // r12
  int v4; // r1
  int v5; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r4
  double v10; // d8
  int v11; // r6
  int v12; // r10
  int v13; // r2
  int v14; // r3
  double v15; // d7
  int v16; // r2
  int v17; // r1
  int v18; // r3
  int v19; // r12
  __int64 v20; // d5
  int v21; // r2
  int v22; // r1
  int v23; // r3
  int v24; // r10
  int v25; // r3
  _DWORD *v26; // r7
  int v27; // r2
  int v28; // r8
  int v29; // r12
  int v30; // r9
  int v31; // t1
  double v32; // d7
  _DWORD *v33; // r0
  int v34; // r1
  int v35; // r3
  int v36; // t1
  double *v37; // r2
  int v38; // r3
  int v39; // r0
  double v40; // d7
  double v41; // d6
  int v42; // r3
  int v43; // r2
  int v44; // r10
  int v45; // r1
  int v46; // t1
  int v47; // r3
  int v48; // r3
  int v49; // r1
  int v50; // r10
  int v51; // r2
  int v52; // t1
  int v53; // r3
  int v55; // r6
  int v56; // r8
  int v57; // r7
  double v58; // d4
  _DWORD *v59; // r12
  int v60; // r1
  int v61; // r2
  int v62; // r3
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r2
  int v67; // r3
  double v68; // r2
  int v69; // r2
  double v70; // r0
  int v71; // r8
  int v72; // s22
  int v73; // r4
  double v74; // d9
  int v75; // r11
  double v76; // d13
  double v77; // d12
  int v78; // r10
  double v79; // d7
  double v80; // d14
  int v81; // r3
  double v82; // d6
  double v83; // d0
  double v84; // d7
  double v85; // d7
  double v86; // r0
  int v87; // r2
  int v88; // r3
  int v89; // r11
  int v90; // r3
  int v91; // r10
  int v92; // r11
  int v93; // r12
  int v94; // r2
  int v95; // r3
  _DWORD *v96; // lr
  int v97; // r3
  int v98; // r3
  unsigned int v99; // r11
  unsigned int v100; // r0
  int v101; // r3
  int i; // r3
  int v103; // r2
  int v104; // r1
  _BOOL4 v105; // r3
  int v106; // r4
  int v107; // r9
  int v108; // r7
  int v109; // lr
  int v110; // r8
  double v111; // d6
  double *v112; // r2
  double v113; // d3
  int v114; // r1
  double v115; // d4
  double v116; // d5
  double v117; // d7
  int v118; // r3
  int v119; // r0
  int v120; // r12
  bool v121; // zf
  double v122; // r8
  double v123; // r0
  int j; // r2
  unsigned int v125; // r1
  unsigned int v126; // r1
  char v127; // r2
  double v128; // d5
  int v129; // r0
  int v130; // r1
  int v131; // r3
  int v132; // r1
  _BOOL4 v133; // r3
  int v134; // r3
  bool v135; // zf
  double v136; // d7
  int v137; // r8
  double v138; // d6
  double v139; // d7
  double v140; // r0
  bool v141; // zf
  double v142; // r0
  int v143; // r3
  double v144; // d7
  double v145; // d0
  int v146; // r2
  double v147; // d5
  double v148; // d6
  double v149; // d4
  int v150; // t1
  double v151; // d2
  double v152; // d0
  double v153; // d8
  int v154; // r3
  int v156; // [sp+4h] [bp-40h]
  int v157; // [sp+4h] [bp-40h]
  int v158; // [sp+4h] [bp-40h]
  int v159; // [sp+8h] [bp-3Ch]
  int v160; // [sp+8h] [bp-3Ch]
  int v161; // [sp+8h] [bp-3Ch]
  int v162; // [sp+10h] [bp-34h]
  int v163; // [sp+18h] [bp-2Ch]
  int v164; // [sp+1Ch] [bp-28h]
  int v165; // [sp+1Ch] [bp-28h]
  int v166; // [sp+28h] [bp-1Ch]
  int v167[2]; // [sp+34h] [bp-10h] BYREF

  sys_survivors = 0;
  v1 = (_DWORD *)peer_list;
  v163 = sys_peer;
  if ( peer_list )
  {
    v2 = 1;
    do
    {
      v1 = (_DWORD *)*v1;
      ++v2;
    }
    while ( v1 );
    v3 = 32 * v2;
    v4 = 72 * v2;
  }
  else
  {
    v4 = 72;
    v3 = 32;
  }
  dword_BC6E0 = v3;
  dword_BC6E4 = v3;
  v5 = sub_63BA4(dword_BC6E8, v4, 0, 0);
  dword_BC6E8 = v5;
  if ( dword_BC6E0 )
    v6 = dword_BC6E0 + 7;
  else
    v6 = 8;
  if ( dword_BC6E0 )
    v6 &= 0xFFFFFFF8;
  v7 = v5 + v6;
  dword_BC6EC = v5 + v6;
  if ( dword_BC6E4 )
    v8 = dword_BC6E4 + 7;
  else
    v8 = 8;
  v9 = peer_list;
  if ( dword_BC6E4 )
    v8 &= 0xFFFFFFF8;
  dword_BC6F0 = v7 + v8;
  if ( !peer_list )
  {
    v55 = 0;
    *(_QWORD *)(v7 + 16) = 0;
    *(double *)(v7 + 8) = sys_mindisp;
    goto LABEL_72;
  }
  v10 = 8589934590.0;
  v11 = 0;
  v12 = 0;
  v166 = 0;
  v162 = 0;
  v164 = 0;
  do
  {
    *(_BYTE *)(v9 + 297) = 0;
    if ( sub_32FE4(v9) )
      goto LABEL_24;
    v13 = *(unsigned __int8 *)(v9 + 93);
    if ( v13 == sys_orphan )
    {
      v98 = *(_DWORD *)(v9 + 56);
      if ( v98 )
        v99 = *(_DWORD *)(v98 + 152);
      else
        v99 = -1;
      if ( v98 )
        v99 = bswap32(v99);
      v100 = bswap32(sub_6083C(v9 + 16));
      if ( v99 > v100 )
      {
        v101 = v164;
        if ( (double)v100 < v10 )
        {
          v101 = v9;
          v10 = (double)v100;
        }
        v164 = v101;
      }
    }
    else
    {
      if ( v13 > sys_orphan )
        goto LABEL_24;
      if ( (*(_DWORD *)(v9 + 68) & 0x20) != 0 )
      {
LABEL_23:
        *(_BYTE *)(v9 + 297) = 1;
        sub_32F28();
        v15 = *(double *)(v9 + 608);
        v16 = 16 * v11;
        v17 = dword_BC6EC;
        v11 += 2;
        v18 = dword_BC6E8;
        v19 = v16 + 16;
        v20 = *(_QWORD *)(v9 + 624);
        v21 = dword_BC6E8 + v16;
        *(_DWORD *)(dword_BC6EC + 32 * v12) = v9;
        v22 = v17 + 32 * v12++;
        v23 = v18 + v19;
        *(_QWORD *)(v22 + 16) = v20;
        *(double *)(v22 + 8) = v0;
        *(double *)v21 = v15 - v0;
        *(_DWORD *)(v21 + 8) = -1;
        *(double *)v23 = v0 + v15;
        *(_DWORD *)(v23 + 8) = 1;
        goto LABEL_24;
      }
      v14 = *(unsigned __int8 *)(v9 + 88);
      if ( v14 == 1 )
      {
        v132 = v166;
        v133 = current_time > (unsigned int)orphwait;
        if ( v166 )
          v133 = 0;
        if ( v133 )
          v132 = v9;
        v166 = v132;
      }
      else
      {
        if ( v14 != 18 )
          goto LABEL_23;
        v104 = v162;
        v105 = current_time > (unsigned int)orphwait;
        if ( v162 )
          v105 = 0;
        if ( v105 )
          v104 = v9;
        v162 = v104;
      }
    }
LABEL_24:
    v9 = *(_DWORD *)v9;
  }
  while ( v9 );
  v159 = v12;
  v156 = dword_BC6EC;
  if ( v11 )
  {
    v24 = dword_BC6F0;
    v25 = 0;
    v26 = (_DWORD *)(dword_BC6F0 - 4);
    v27 = dword_BC6F0 - 4;
    do
    {
      *(_DWORD *)(v27 + 4) = v25;
      v27 += 4;
      ++v25;
    }
    while ( v11 != v25 );
    v28 = 0;
    v29 = dword_BC6E8;
    while ( 1 )
    {
      v31 = v26[1];
      ++v26;
      v30 = v31;
      v32 = *(double *)(v29 + 16 * v31);
      if ( v11 <= v28 + 1 )
        break;
      v33 = v26;
      v34 = v28;
      v35 = v28 + 1;
      do
      {
        v36 = v33[1];
        ++v33;
        v37 = (double *)(v29 + 16 * v36);
        if ( *v37 < v32 )
          v34 = v35;
        ++v35;
        if ( *v37 < v32 )
          v32 = *v37;
      }
      while ( v11 != v35 );
      if ( v34 != v28 )
      {
        v38 = *(_DWORD *)(v24 + 4 * v34);
        *(_DWORD *)(v24 + 4 * v34) = v30;
        *v26 = v38;
        if ( v11 <= v28 + 1 )
          break;
      }
      ++v28;
    }
  }
  v39 = v159;
  if ( !v159 )
    goto LABEL_68;
  v40 = 1000000000.0;
  v41 = -1000000000.0;
  do
  {
    if ( v11 )
    {
      v42 = dword_BC6E8 + 16 * *(_DWORD *)dword_BC6F0;
      v40 = *(double *)v42;
      v43 = -*(_DWORD *)(v42 + 8);
      if ( v39 > v43 )
      {
        v44 = dword_BC6F0;
        v45 = 0;
        do
        {
          if ( v11 == ++v45 )
            break;
          v46 = *(_DWORD *)(v44 + 4);
          v44 += 4;
          v47 = dword_BC6E8 + 16 * v46;
          v40 = *(double *)v47;
          v43 -= *(_DWORD *)(v47 + 8);
        }
        while ( v43 < v39 );
      }
    }
    if ( v11 )
    {
      v48 = dword_BC6E8 + 16 * *(_DWORD *)(dword_BC6F0 + 4 * (v11 - 1));
      v49 = *(_DWORD *)(v48 + 8);
      v41 = *(double *)v48;
      if ( v39 > v49 )
      {
        v50 = dword_BC6F0 + 4 * (v11 + 0x3FFFFFFF);
        v51 = v11 - 1;
        do
        {
          if ( v51-- == 0 )
            break;
          v52 = *(_DWORD *)(v50 - 4);
          v50 -= 4;
          v53 = dword_BC6E8 + 16 * v52;
          v41 = *(double *)v53;
          v49 += *(_DWORD *)(v53 + 8);
        }
        while ( v49 < v39 );
      }
    }
    if ( v41 > v40 )
      break;
    --v39;
  }
  while ( v159 - 1 - ((unsigned int)(v159 - 1) >> 1) != v39 );
  v55 = 0;
  v56 = 0;
  v57 = v156 + 8;
  do
  {
    while ( 1 )
    {
      v66 = *(_DWORD *)(v57 - 8);
      v67 = *(_DWORD *)(v66 + 68);
      if ( v41 > v40 )
      {
        v58 = *(double *)(v66 + 608);
        if ( v58 + *(double *)v57 >= v40 && v58 - *(double *)v57 <= v41 )
          break;
      }
      if ( (v67 & 0x400) != 0 )
        break;
      ++v56;
      v57 += 32;
      if ( v159 == v56 )
        goto LABEL_67;
    }
    if ( (v67 & 0x80) == 0 )
      goto LABEL_60;
    if ( !v9 )
      v9 = *(_DWORD *)(v57 - 8);
    if ( (v67 & 0x10000) != 0 )
    {
LABEL_60:
      if ( v55 != v56 )
      {
        v59 = (_DWORD *)(v156 + 32 * v55);
        v60 = *(_DWORD *)(v57 - 4);
        v61 = *(_DWORD *)v57;
        v62 = *(_DWORD *)(v57 + 4);
        *v59 = *(_DWORD *)(v57 - 8);
        v59[1] = v60;
        v59[2] = v61;
        v59[3] = v62;
        v59 += 4;
        v63 = *(_DWORD *)(v57 + 12);
        v64 = *(_DWORD *)(v57 + 16);
        v65 = *(_DWORD *)(v57 + 20);
        *v59 = *(_DWORD *)(v57 + 8);
        v59[1] = v63;
        v59[2] = v64;
        v59[3] = v65;
      }
      ++v55;
    }
    ++v56;
    v57 += 32;
  }
  while ( v159 != v56 );
LABEL_67:
  if ( v55 )
  {
    for ( i = 0; i != v55; ++i )
    {
      v103 = *(_DWORD *)(v156 + 32 * i);
      *(_BYTE *)(v103 + 297) = 3;
    }
  }
  else
  {
LABEL_68:
    *(_QWORD *)(v156 + 16) = 0;
    v68 = sys_mindisp;
    if ( v162 )
      *(_DWORD *)v156 = v162;
    *(double *)(v156 + 8) = v68;
    if ( v162 )
    {
LABEL_71:
      v55 = 1;
      *(_BYTE *)(v162 + 297) = 3;
    }
    else
    {
      v154 = v166;
      if ( v166 || (v154 = v164) != 0 )
      {
        v162 = v154;
        *(_DWORD *)v156 = v154;
        goto LABEL_71;
      }
      v55 = 0;
    }
  }
LABEL_72:
  v69 = 1400;
  HIDWORD(v70) = v55 - 1;
  v71 = 32 * v55;
  v72 = v55 - 1;
  v157 = v9;
  if ( v55 )
    goto LABEL_73;
  while ( 2 )
  {
    v74 = 1000000000.0;
    v73 = v55;
    LODWORD(v70) = sys_precision;
    v86 = ldexp(v70, v69);
LABEL_101:
    LODWORD(v86) = sys_precision;
    v86 = ldexp(v86, v87);
    v76 = 1.0;
LABEL_89:
    v88 = sys_minclock;
    if ( sys_minclock < 1 )
      v88 = 1;
    if ( v88 >= v55 )
    {
      v106 = v157;
      dword_BC6F4 = 0;
      dword_BC6F8 = 0;
      if ( v55 )
        goto LABEL_120;
      if ( !v157 )
        goto LABEL_175;
      v109 = 0;
LABEL_146:
      if ( fabs(sys_offset) >= 0.4 )
      {
LABEL_175:
        if ( v163 )
        {
          if ( (int)sys_orphwait > 0 )
            orphwait = (int)sys_orphwait + current_time;
          LODWORD(v86) = sub_25EE0((__int16 *)byte_8, 0, 0);
        }
        v131 = peer_list;
        for ( sys_peer = 0; v131; v131 = *(_DWORD *)v131 )
          *(_BYTE *)(v131 + 296) = *(_BYTE *)(v131 + 297);
        return LODWORD(v86);
      }
      v121 = v109 == 0;
      if ( !v109 )
        v121 = *(_BYTE *)(v106 + 88) == 22;
      if ( !v121 )
        goto LABEL_150;
      goto LABEL_232;
    }
    if ( v76 > v74 )
    {
      v89 = dword_BC6EC;
      v90 = *(_DWORD *)(dword_BC6EC + 32 * v73);
      v91 = dword_BC6EC + 32 * v73;
      if ( (*(_DWORD *)(v90 + 68) & 0x420) == 0 )
      {
        HIDWORD(v70) = v73 + 1;
        v69 = sys_maxclock;
        if ( sys_maxclock < v55 )
        {
          v69 = 5;
          *(_BYTE *)(v90 + 297) = 5;
        }
        if ( v55 > SHIDWORD(v70) )
        {
          v92 = v89 - 32 + v71;
          do
          {
            v93 = v91;
            v70 = *(double *)(v91 + 32);
            v94 = *(_DWORD *)(v91 + 40);
            v95 = *(_DWORD *)(v91 + 44);
            v96 = (_DWORD *)(v91 + 48);
            v91 += 32;
            *(double *)v93 = v70;
            *(_DWORD *)(v93 + 8) = v94;
            *(_DWORD *)(v93 + 12) = v95;
            v93 += 16;
            HIDWORD(v70) = v96[1];
            v69 = v96[2];
            v97 = v96[3];
            *(_DWORD *)v93 = *v96;
            *(_DWORD *)(v93 + 4) = HIDWORD(v70);
            *(_DWORD *)(v93 + 8) = v69;
            *(_DWORD *)(v93 + 12) = v97;
          }
          while ( v92 != v91 );
        }
        --v55;
        v71 -= 32;
        --v72;
        if ( !v55 )
          continue;
LABEL_73:
        v73 = 0;
        v74 = 1000000000.0;
        v75 = 0;
        v76 = 0.0;
        v77 = -1000000000.0;
        LODWORD(v70) = dword_BC6EC;
        v78 = dword_BC6EC;
        do
        {
          v79 = *(double *)(v78 + 16);
          *(_QWORD *)(v78 + 24) = 0;
          if ( v79 < v74 )
            v74 = v79;
          if ( v55 == 1 )
          {
            v80 = 0.0;
          }
          else
          {
            v81 = 0;
            v82 = 0.0;
            do
            {
              v69 = *(_DWORD *)(LODWORD(v70) + 32 * v81++);
              v82 = v82
                  + (*(double *)(v69 + 608) - *(double *)(*(_DWORD *)v78 + 608))
                  * (*(double *)(v69 + 608) - *(double *)(*(_DWORD *)v78 + 608));
            }
            while ( v55 != v81 );
            v83 = v82 / (double)v72;
            v80 = sqrt(v83);
            if ( v83 < 0.0 )
            {
              v161 = LODWORD(v70);
              v70 = sqrt(v70);
              LODWORD(v70) = v161;
            }
            *(double *)(v78 + 24) = v80;
          }
          v84 = *(double *)(v78 + 8);
          v78 += 32;
          v85 = v80 * v84;
          if ( v85 > v77 )
            v73 = v75;
          ++v75;
          if ( v85 > v77 )
          {
            v76 = v80;
            v77 = v85;
          }
        }
        while ( v55 != v75 );
        LODWORD(v70) = sys_precision;
        v86 = ldexp(v70, v69);
        if ( v76 <= 1.0 )
          goto LABEL_101;
        goto LABEL_89;
      }
    }
    break;
  }
  v106 = v157;
  dword_BC6F4 = 0;
  dword_BC6F8 = 0;
LABEL_120:
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v158 = 0;
  v160 = 0;
  v165 = sys_survivors;
  v111 = 1000000000.0;
  v112 = (double *)dword_BC6EC;
  v113 = sys_mindisp;
  v114 = 0;
  do
  {
    v118 = *(_DWORD *)v112;
    v119 = *(unsigned __int8 *)(*(_DWORD *)v112 + 91);
    *(_DWORD *)(v118 + 708) = 0;
    *(_BYTE *)(v118 + 297) = 4;
    v120 = *(_DWORD *)(v118 + 68);
    if ( v119 == 1 )
    {
      if ( (v120 & 8) != 0 )
      {
        v160 = 1;
        v108 = v55;
      }
      else if ( v55 > v108 )
      {
        ++v108;
        v160 = 1;
      }
    }
    else if ( v119 == 2 )
    {
      if ( (v120 & 8) != 0 )
      {
        v158 = v55;
        v107 = 1;
      }
      else if ( v158 < v55 )
      {
        v107 = 1;
        ++v158;
      }
    }
    LODWORD(v86) = *(unsigned __int8 *)(v118 + 93);
    v115 = v112[3];
    if ( (v120 & 0x20) != 0 )
      v109 = v118;
    v116 = v112[1];
    v112 += 4;
    v117 = (double)SLODWORD(v86) * v113 + v115 * v116;
    if ( v117 < v111 )
      v118 = v114;
    ++v114;
    if ( v117 < v111 )
      v111 = (double)SLODWORD(v86) * v113 + v115 * v116;
    else
      v118 = v110;
    v110 = v118;
  }
  while ( v55 != v114 );
  sys_survivors = v55 + v165;
  if ( v160 )
    dword_BC6F4 = v108;
  if ( v107 )
    dword_BC6F8 = v158;
  if ( sys_minsane > v55 )
  {
    if ( v106 )
      goto LABEL_146;
    goto LABEL_175;
  }
  HIDWORD(v86) = dword_BC6EC;
  LODWORD(v86) = *(_DWORD *)(dword_BC6EC + 32 * v118);
  v134 = dword_BC6EC + 32 * v118;
  v135 = v163 == LODWORD(v86);
  if ( v163 != LODWORD(v86) )
    v135 = v163 == 0;
  if ( v135 )
  {
    dbl_BC700 = 0.0;
    if ( LODWORD(v86) )
    {
      v137 = LODWORD(v86);
      goto LABEL_198;
    }
    if ( !v106 || fabs(sys_offset) >= 0.4 )
      goto LABEL_175;
    v141 = v109 == 0;
    if ( !v109 )
      v141 = *(_BYTE *)(v106 + 88) == 22;
    if ( !v141 )
      goto LABEL_150;
LABEL_232:
    if ( sys_minsane )
      goto LABEL_175;
    goto LABEL_150;
  }
  v136 = fabs(*(double *)(LODWORD(v86) + 608) - *(double *)(v163 + 608));
  if ( sys_mindisp <= v136 )
  {
    v137 = LODWORD(v86);
    dbl_BC700 = 0.0;
  }
  else if ( dbl_BC700 == 0.0 )
  {
    v137 = v163;
    dbl_BC700 = sys_mindisp;
  }
  else
  {
    v138 = dbl_BC700 * 0.5;
    if ( dbl_BC700 * 0.5 <= v136 )
    {
      dbl_BC700 = 0.0;
      v137 = LODWORD(v86);
    }
    else
    {
      v137 = v163;
    }
    if ( v138 > v136 )
      dbl_BC700 = v138;
  }
LABEL_198:
  if ( v109 )
  {
    v139 = *(double *)(v109 + 608);
    *(_BYTE *)(v109 + 297) = 6;
    dbl_BC700 = 0.0;
    v140 = *(double *)(v109 + 624);
    sys_offset = v139;
    sys_jitter = v140;
    if ( !v106 || fabs(v139) >= 0.4 )
    {
LABEL_201:
      v106 = v109;
      goto LABEL_151;
    }
LABEL_150:
    v122 = *(double *)(v106 + 608);
    *(_BYTE *)(v106 + 297) = 7;
    dbl_BC700 = 0.0;
    v123 = *(double *)(v106 + 624);
    sys_offset = v122;
    sys_jitter = v123;
    goto LABEL_151;
  }
  *(_BYTE *)(v137 + 297) = 6;
  v144 = 0.0;
  if ( sys_survivors <= 0 )
  {
    v147 = 0.0;
    v148 = 0.0;
  }
  else
  {
    v145 = *(double *)(LODWORD(v86) + 608);
    v146 = HIDWORD(v86) + 32 * sys_survivors;
    v147 = 0.0;
    v148 = 0.0;
    do
    {
      v149 = *(double *)(HIDWORD(v86) + 8);
      v150 = *(_DWORD *)HIDWORD(v86);
      HIDWORD(v86) += 32;
      LODWORD(v86) = v150;
      v151 = *(double *)(v150 + 608);
      v148 = v148 + 1.0 / v149;
      v147 = v147 + 1.0 / v149 * v151;
      v144 = v144 + (v151 - v145) * (v151 - v145) * (1.0 / v149);
    }
    while ( v146 != HIDWORD(v86) );
  }
  v152 = v144 / v148 + *(double *)(v134 + 24) * *(double *)(v134 + 24);
  sys_offset = v147 / v148;
  v153 = sqrt(v152);
  if ( v152 < 0.0 )
    sqrt(v86);
  sys_jitter = v153;
  if ( !v106 || fabs(sys_offset) >= 0.4 )
  {
    v109 = v137;
    goto LABEL_201;
  }
  if ( *(_BYTE *)(v106 + 88) != 22 )
    goto LABEL_150;
  v106 = v137;
LABEL_151:
  LODWORD(v86) = *(_DWORD *)(v106 + 304);
  if ( LODWORD(v86) <= sys_epoch )
    return LODWORD(v86);
  if ( v163 != v106 )
  {
    sub_25EE0((_WORD *)&dword_88 + 1, v106, 0);
    LODWORD(v86) = *(_DWORD *)(v106 + 304);
  }
  for ( j = peer_list; j; j = *(_DWORD *)j )
    *(_BYTE *)(j + 296) = *(_BYTE *)(j + 297);
  sys_epoch = LODWORD(v86);
  sys_peer = v106;
  v125 = (unsigned __int8)sys_poll;
  if ( *(unsigned __int8 *)(v106 + 65) > (unsigned int)(unsigned __int8)sys_poll )
  {
    v125 = *(unsigned __int8 *)(v106 + 65);
    sys_poll = *(_BYTE *)(v106 + 65);
  }
  if ( *(unsigned __int8 *)(v106 + 66) < v125 )
  {
    v125 = *(unsigned __int8 *)(v106 + 66);
    sys_poll = *(_BYTE *)(v106 + 66);
  }
  sub_34264(v106, v125);
  v126 = *(unsigned __int8 *)(v106 + 93);
  if ( v126 >= 0xF )
    v127 = 15;
  else
    v127 = *(_BYTE *)(v106 + 93);
  sys_stratum = v127 + 1;
  if ( (v126 & 0xEF) != 0 )
    sys_refid = sub_6083C(v106 + 16);
  else
    sys_refid = *(_DWORD *)(v106 + 112);
  v128 = fabs(sys_offset);
  v129 = *(_DWORD *)(v106 + 576);
  v130 = *(_DWORD *)(v106 + 580);
  if ( *(double *)(v106 + 104)
     + *(double *)(v106 + 632)
     + sys_jitter
     + (double)(unsigned int)(current_time - *(_DWORD *)(v106 + 704)) * clock_phi
     + v128 <= sys_mindisp )
    sys_rootdisp = sys_mindisp;
  else
    sys_rootdisp = *(double *)(v106 + 104)
                 + *(double *)(v106 + 632)
                 + sys_jitter
                 + (double)(unsigned int)(current_time - *(_DWORD *)(v106 + 704)) * clock_phi
                 + v128;
  sys_rootdelay = *(double *)(v106 + 616) + *(double *)(v106 + 96);
  sys_reftime = v129;
  dword_108C0C = v130;
  LODWORD(v86) = sub_2F4BC(v106);
  switch ( LODWORD(v86) )
  {
    case 1:
      if ( sys_leap == 3 )
      {
        sub_335A4(0);
        if ( crypto_flags )
          sub_279FC();
        LODWORD(v86) = waitsync_fd_to_close;
        if ( waitsync_fd_to_close != -1 )
        {
          LODWORD(v86) = close(waitsync_fd_to_close);
          waitsync_fd_to_close = -1;
        }
      }
      if ( !leapsec )
      {
        HIDWORD(v86) = dword_BC6F4;
        v143 = dword_BC6F8;
        if ( dword_BC6F4 > dword_BC6F8 )
        {
          if ( dword_BC6F4 <= sys_survivors / 2 )
            return LODWORD(v86);
          sub_5F724(v167);
          LODWORD(v86) = sub_2DCF4(1, v167[0], 0);
          v143 = dword_BC6F8;
          HIDWORD(v86) = dword_BC6F4;
        }
        if ( v143 > SHIDWORD(v86) && v143 > sys_survivors / 2 )
        {
          sub_5F724(v167);
          LODWORD(v86) = sub_2DCF4(0, v167[0], 0);
        }
      }
      break;
    case 2:
      sub_31D10();
      sub_335A4(3);
      sys_refid = 1346720851;
      HIDWORD(v142) = 16;
      LODWORD(v142) = sys_precision;
      sys_rootdelay = 0.0;
      sys_rootdisp = 0.0;
      sys_stratum = 16;
      dword_108C0C = 0;
      sys_reftime = 0;
      ldexp(v142, 0);
      sys_jitter = 1.0;
      LODWORD(v86) = sub_2DB18();
      break;
    case 0xFFFFFFFF:
      exit(-1);
      break;
  }
  return LODWORD(v86);
}
