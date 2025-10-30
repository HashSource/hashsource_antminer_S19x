int sub_34A5C()
{
  unsigned int v0; // r11
  double v1; // d0
  _DWORD *v2; // r3
  int v3; // r2
  int v4; // r12
  int v5; // r0
  int v6; // r1
  int v7; // r0
  unsigned int v8; // r3
  unsigned int v9; // r2
  int v10; // r8
  double v11; // d8
  int v12; // r4
  int v13; // r6
  int v14; // r1
  int v15; // r2
  double v16; // d16
  int v17; // r12
  __int64 v18; // d17
  int v19; // r0
  int v20; // r2
  int v21; // r1
  int v22; // r3
  int v23; // r10
  _DWORD *v24; // r8
  int v25; // r2
  int v26; // r7
  int v27; // r0
  int v28; // r9
  int v29; // t1
  double v30; // d17
  _DWORD *v31; // r1
  int v32; // r12
  int v33; // r2
  int v34; // t1
  double *v35; // r3
  int v36; // r3
  unsigned int v37; // r2
  bool v38; // zf
  unsigned int v39; // r0
  double v40; // d17
  int v41; // r0
  double v42; // d16
  int v43; // r3
  int v44; // r2
  int v45; // r10
  int v46; // r1
  int v47; // t1
  int v48; // r3
  int v49; // r3
  int v50; // r1
  int v51; // r10
  int v52; // r2
  int v53; // t1
  int v54; // r3
  int v56; // r7
  int v57; // r4
  int v58; // lr
  int v59; // r10
  int v60; // r12
  double v61; // d19
  int v62; // r3
  _DWORD *v63; // r8
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r2
  double v71; // d18
  double v72; // r0
  int v73; // r3
  int v74; // r2
  int v75; // r6
  char *v76; // r2
  char *v77; // r8
  double v78; // d11
  int v79; // r10
  double v80; // d9
  double *v81; // r11
  double v82; // d8
  double v83; // d16
  int v84; // r3
  double v85; // d17
  double v86; // d0
  double v87; // d16
  double v88; // r0
  int v89; // r2
  int v90; // r2
  char *v91; // r11
  char *v92; // r10
  char *v93; // r12
  int v94; // r2
  int v95; // r3
  _DWORD *v96; // lr
  int v97; // r3
  int v98; // r9
  int v99; // r6
  double v100; // d19
  int v101; // r10
  int v102; // r11
  double v103; // d20
  double *v104; // r2
  int v105; // r0
  int v106; // r8
  double v107; // d18
  double v108; // d17
  double v109; // d16
  int v110; // r3
  int v111; // r0
  int v112; // r2
  int v113; // r4
  bool v114; // zf
  int v115; // r3
  bool v116; // zf
  double v117; // r2
  unsigned int v118; // r1
  int i; // r3
  unsigned int v120; // r2
  unsigned int v121; // r1
  unsigned int v122; // r2
  unsigned __int8 v123; // r1
  char v124; // r3
  double v125; // d16
  double v126; // d17
  bool v127; // cc
  double v128; // d16
  int v129; // r0
  int v130; // r1
  int v131; // r3
  bool v132; // zf
  int v133; // r3
  _BOOL4 v134; // r2
  double v135; // d17
  double v136; // d16
  double v137; // d16
  int v138; // r3
  int v139; // r3
  _BOOL4 v140; // r2
  int v141; // r3
  double v142; // d16
  int v143; // r2
  double *v144; // r3
  double v145; // d22
  double v146; // d17
  double v147; // d18
  double v148; // d19
  double v149; // d19
  double v150; // d21
  double v151; // d0
  double v152; // r0
  int v153; // r3
  int v155; // [sp+0h] [bp-3Ch]
  int v156; // [sp+0h] [bp-3Ch]
  int v157; // [sp+4h] [bp-38h]
  int v158; // [sp+8h] [bp-34h]
  int v159; // [sp+10h] [bp-2Ch]
  int v160[2]; // [sp+2Ch] [bp-10h] BYREF

  sys_survivors = 0;
  v2 = (_DWORD *)peer_list;
  v158 = sys_peer;
  if ( peer_list )
  {
    v3 = 1;
    do
    {
      v2 = (_DWORD *)*v2;
      ++v3;
    }
    while ( v2 );
    v4 = 8 * v3;
    v5 = 32 * v3;
    v6 = 72 * v3;
  }
  else
  {
    v6 = 72;
    v4 = 8;
    v5 = 32;
  }
  dword_BD6F0 = v5;
  dword_BD6F4 = v5;
  dword_BD6F8 = v4;
  v7 = sub_64B04(dword_BD6FC, v6, 0, 0);
  if ( dword_BD6F0 )
    v8 = (dword_BD6F0 + 7) & 0xFFFFFFF8;
  else
    v8 = 8;
  if ( dword_BD6F4 )
    v9 = (dword_BD6F4 + 7) & 0xFFFFFFF8;
  else
    v9 = 8;
  dword_BD700 = v7 + v8;
  dword_BD6FC = v7;
  v10 = peer_list;
  dword_BD704 = v7 + v8 + v9;
  if ( !peer_list )
  {
    v56 = 0;
    v159 = 0;
    v157 = 0;
    v155 = 0;
    goto LABEL_174;
  }
  v11 = 8589934590.0;
  v12 = 0;
  v13 = 0;
  v155 = 0;
  v157 = 0;
  v159 = 0;
  do
  {
    *(_BYTE *)(v10 + 297) = 0;
    if ( sub_33534(v10) )
      goto LABEL_20;
    v14 = *(unsigned __int8 *)(v10 + 93);
    if ( v14 == sys_orphan )
    {
      v37 = *(_DWORD *)(v10 + 56);
      v38 = v37 == 0;
      if ( v37 )
        v37 = *(_DWORD *)(v37 + 152);
      else
        v0 = -1;
      if ( !v38 )
        v0 = bswap32(v37);
      v39 = bswap32(sub_61720(v10 + 16));
      if ( v0 > v39 && (double)v39 < v11 )
      {
        v11 = (double)v39;
        v159 = v10;
      }
    }
    else
    {
      if ( v14 > sys_orphan )
        goto LABEL_20;
      if ( (*(_DWORD *)(v10 + 68) & 0x20) != 0 )
      {
LABEL_19:
        *(_BYTE *)(v10 + 297) = 1;
        sub_33478();
        v16 = *(double *)(v10 + 608);
        v17 = dword_BD6FC;
        v18 = *(_QWORD *)(v10 + 624);
        v19 = dword_BD700 + 32 * v13;
        *(_DWORD *)v19 = v10;
        v20 = v17 + 16 * v12;
        v21 = v17 + 16 * v12 + 16;
        v12 += 2;
        ++v13;
        *(_QWORD *)(v19 + 16) = v18;
        *(double *)(v19 + 8) = v1;
        *(_DWORD *)(v20 + 8) = -1;
        *(double *)v20 = v16 - v1;
        *(_DWORD *)(v21 + 8) = 1;
        *(double *)v21 = v16 + v1;
        goto LABEL_20;
      }
      v15 = *(unsigned __int8 *)(v10 + 88);
      if ( v15 == 1 )
      {
        v139 = v155;
        v140 = v155 == 0;
        if ( current_time <= (unsigned int)orphwait )
          v140 = 0;
        if ( v140 )
          v139 = v10;
        v155 = v139;
      }
      else
      {
        if ( v15 != 18 )
          goto LABEL_19;
        v133 = v157;
        v134 = v157 == 0;
        if ( current_time <= (unsigned int)orphwait )
          v134 = 0;
        if ( v134 )
          v133 = v10;
        v157 = v133;
      }
    }
LABEL_20:
    v10 = *(_DWORD *)v10;
  }
  while ( v10 );
  if ( v12 )
  {
    v22 = 0;
    v23 = dword_BD704;
    v24 = (_DWORD *)(dword_BD704 - 4);
    v25 = dword_BD704 - 4;
    do
    {
      *(_DWORD *)(v25 + 4) = v22;
      v25 += 4;
      ++v22;
    }
    while ( v22 != v12 );
    v26 = 0;
    v27 = dword_BD6FC;
    while ( 1 )
    {
      v29 = v24[1];
      ++v24;
      v28 = v29;
      v30 = *(double *)(v27 + 16 * v29);
      if ( v26 + 1 >= v12 )
        break;
      v31 = v24;
      v32 = v26;
      v33 = v26 + 1;
      do
      {
        v34 = v31[1];
        ++v31;
        v35 = (double *)(v27 + 16 * v34);
        if ( *v35 < v30 )
          v32 = v33;
        ++v33;
        if ( *v35 < v30 )
          v30 = *v35;
      }
      while ( v33 != v12 );
      if ( v26 != v32 )
      {
        v36 = *(_DWORD *)(v23 + 4 * v32);
        *(_DWORD *)(v23 + 4 * v32) = v28;
        *v24 = v36;
        if ( v26 + 1 >= v12 )
          break;
      }
      ++v26;
    }
  }
  if ( !v13 )
  {
    v56 = 0;
    goto LABEL_174;
  }
  v40 = -1000000000.0;
  v41 = v13;
  v42 = 1000000000.0;
  do
  {
    if ( v12 )
    {
      v43 = dword_BD6FC + 16 * *(_DWORD *)dword_BD704;
      v42 = *(double *)v43;
      v44 = -*(_DWORD *)(v43 + 8);
      if ( v44 < v41 )
      {
        v45 = dword_BD704;
        v46 = 0;
        do
        {
          if ( ++v46 == v12 )
            break;
          v47 = *(_DWORD *)(v45 + 4);
          v45 += 4;
          v48 = dword_BD6FC + 16 * v47;
          v42 = *(double *)v48;
          v44 -= *(_DWORD *)(v48 + 8);
        }
        while ( v44 < v41 );
      }
    }
    if ( v12 )
    {
      v49 = dword_BD6FC + 16 * *(_DWORD *)(dword_BD704 + 4 * (v12 - 1));
      v50 = *(_DWORD *)(v49 + 8);
      v40 = *(double *)v49;
      if ( v41 > v50 )
      {
        v51 = dword_BD704 + 4 * (v12 - 1);
        v52 = v12 - 1;
        do
        {
          if ( v52-- == 0 )
            break;
          v53 = *(_DWORD *)(v51 - 4);
          v51 -= 4;
          v54 = dword_BD6FC + 16 * v53;
          v40 = *(double *)v54;
          v50 += *(_DWORD *)(v54 + 8);
        }
        while ( v50 < v41 );
      }
    }
    if ( v40 > v42 )
      break;
    --v41;
  }
  while ( v41 != v13 - 1 - ((unsigned int)(v13 - 1) >> 1) );
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = dword_BD700;
  v60 = dword_BD700 + 8;
  while ( 2 )
  {
    while ( 1 )
    {
      v70 = *(_DWORD *)(v60 - 8);
      v71 = *(double *)v60;
      if ( v42 < v40 )
      {
        v61 = *(double *)(v70 + 608);
        if ( v61 + v71 >= v42 && v61 - v71 <= v40 )
          break;
      }
      v62 = *(_DWORD *)(v70 + 68);
      if ( (v62 & 0x400) != 0 )
        goto LABEL_63;
      ++v58;
      v60 += 32;
      if ( v58 == v13 )
        goto LABEL_74;
    }
    v62 = *(_DWORD *)(v70 + 68);
LABEL_63:
    if ( (v62 & 0x80) == 0 )
      goto LABEL_67;
    if ( !v56 )
      v56 = *(_DWORD *)(v60 - 8);
    if ( (v62 & 0x10000) != 0 )
    {
LABEL_67:
      if ( v57 != v58 )
      {
        v63 = (_DWORD *)(v59 + 32 * v57);
        v64 = *(_DWORD *)(v60 - 4);
        v65 = *(_DWORD *)v60;
        v66 = *(_DWORD *)(v60 + 4);
        *v63 = *(_DWORD *)(v60 - 8);
        v63[1] = v64;
        v63[2] = v65;
        v63[3] = v66;
        v63 += 4;
        v67 = *(_DWORD *)(v60 + 12);
        v68 = *(_DWORD *)(v60 + 16);
        v69 = *(_DWORD *)(v60 + 20);
        *v63 = *(_DWORD *)(v60 + 8);
        v63[1] = v67;
        v63[2] = v68;
        v63[3] = v69;
      }
      ++v57;
    }
    ++v58;
    v60 += 32;
    if ( v58 != v13 )
      continue;
    break;
  }
LABEL_74:
  if ( !v57 )
  {
LABEL_174:
    HIDWORD(v72) = dword_BD700;
    *(_QWORD *)(dword_BD700 + 16) = 0;
    *(double *)(HIDWORD(v72) + 8) = sys_mindisp;
    if ( v157 )
    {
      *(_DWORD *)HIDWORD(v72) = v157;
    }
    else
    {
      v141 = v155;
      if ( !v155 )
      {
        v141 = v159;
        if ( !v159 )
        {
          v57 = 0;
          goto LABEL_78;
        }
      }
      *(_DWORD *)HIDWORD(v72) = v141;
    }
    v57 = 1;
    goto LABEL_76;
  }
  HIDWORD(v72) = dword_BD700;
LABEL_76:
  v73 = 0;
  do
  {
    v74 = *(_DWORD *)(HIDWORD(v72) + 32 * v73++);
    *(_BYTE *)(v74 + 297) = 3;
  }
  while ( v57 > v73 );
LABEL_78:
  v75 = 32 * v57;
  v76 = &sys_precision;
  if ( !v57 )
    goto LABEL_104;
  while ( 2 )
  {
    v77 = 0;
    v78 = 0.0;
    v76 = 0;
    v79 = dword_BD700;
    v80 = -1000000000.0;
    v81 = (double *)(dword_BD700 + 24);
    v82 = 1000000000.0;
    do
    {
      v83 = *(v81 - 1);
      *v81 = 0.0;
      if ( v83 < v82 )
        v82 = v83;
      if ( v57 == 1 )
      {
        v86 = 0.0;
      }
      else
      {
        v84 = 0;
        v85 = 0.0;
        do
        {
          HIDWORD(v72) = *(_DWORD *)(v79 + 32 * v84++);
          v85 = v85
              + (*(double *)(HIDWORD(v72) + 608) - *(double *)(*((_DWORD *)v81 - 6) + 608))
              * (*(double *)(HIDWORD(v72) + 608) - *(double *)(*((_DWORD *)v81 - 6) + 608));
        }
        while ( v84 != v57 );
        v86 = sqrt(v85 / (double)(v57 - 1));
        *v81 = v86;
      }
      v81 += 4;
      v87 = v86 * *(v81 - 6);
      if ( v87 > v80 )
        v77 = v76;
      ++v76;
      if ( v87 > v80 )
      {
        v78 = v86;
        v80 = v86 * *(v81 - 6);
      }
    }
    while ( v76 != (char *)v57 );
LABEL_91:
    LODWORD(v72) = sys_precision;
    v88 = ldexp(v72, (int)v76);
    if ( v78 <= 1.0 )
    {
      LODWORD(v88) = sys_precision;
      v88 = ldexp(v88, v89);
      v78 = 1.0;
    }
    v90 = sys_minclock;
    if ( sys_minclock < 1 )
      v90 = 1;
    if ( v57 <= v90 )
    {
      dword_BD708 = 0;
      dword_BD70C = 0;
      if ( v57 )
        goto LABEL_107;
      v99 = 0;
      goto LABEL_167;
    }
    if ( v78 > v82 )
    {
      HIDWORD(v72) = 32 * (_DWORD)v77;
      v76 = (char *)dword_BD700;
      LODWORD(v72) = *(_DWORD *)(dword_BD700 + 32 * (_DWORD)v77);
      if ( (*(_DWORD *)(LODWORD(v72) + 68) & 0x420) == 0 )
      {
        if ( v57 > sys_maxclock )
          *(_BYTE *)(LODWORD(v72) + 297) = 5;
        if ( v57 > (int)(v77 + 1) )
        {
          v91 = &v76[v75];
          v92 = &v76[HIDWORD(v72) + 32];
          do
          {
            v93 = v92 - 32;
            v72 = *(double *)v92;
            v94 = *((_DWORD *)v92 + 2);
            v95 = *((_DWORD *)v92 + 3);
            v96 = v92 + 16;
            v92 += 32;
            *(double *)v93 = v72;
            *((_DWORD *)v93 + 2) = v94;
            *((_DWORD *)v93 + 3) = v95;
            v93 += 16;
            HIDWORD(v72) = v96[1];
            v76 = (char *)v96[2];
            v97 = v96[3];
            *(_DWORD *)v93 = *v96;
            *((_DWORD *)v93 + 1) = HIDWORD(v72);
            *((_DWORD *)v93 + 2) = v76;
            *((_DWORD *)v93 + 3) = v97;
          }
          while ( v92 != v91 );
        }
        --v57;
        v75 -= 32;
        if ( v57 )
          continue;
LABEL_104:
        v78 = 0.0;
        v77 = (char *)v57;
        v82 = 1000000000.0;
        goto LABEL_91;
      }
    }
    break;
  }
  dword_BD708 = 0;
LABEL_107:
  v98 = 0;
  v99 = 0;
  v100 = 1000000000.0;
  v101 = 0;
  HIDWORD(v88) = 0;
  v102 = dword_BD708;
  v103 = sys_mindisp;
  v104 = (double *)(dword_BD700 + 24);
  v156 = sys_survivors;
  do
  {
    v110 = *((_DWORD *)v104 - 6);
    v111 = *(unsigned __int8 *)(v110 + 91);
    *(_DWORD *)(v110 + 708) = 0;
    *(_BYTE *)(v110 + 297) = 4;
    if ( v111 == 1 )
    {
      v105 = *(_DWORD *)(v110 + 68);
      if ( (v105 & 8) != 0 )
      {
        v102 = v57;
      }
      else if ( v102 < v57 )
      {
        ++v102;
      }
    }
    else
    {
      v38 = v111 == 2;
      v105 = *(_DWORD *)(v110 + 68);
      if ( v38 )
      {
        if ( (v105 & 8) != 0 )
        {
          v98 = v57;
        }
        else if ( v98 < v57 )
        {
          ++v98;
        }
      }
    }
    v107 = *v104;
    v104 += 4;
    if ( (v105 & 0x20) != 0 )
      v99 = v110;
    v108 = *(v104 - 6);
    v106 = *(unsigned __int8 *)(v110 + 93);
    v109 = (double)v106 * v103 + v107 * v108;
    if ( v109 < v100 )
      v101 = HIDWORD(v88);
    ++HIDWORD(v88);
    if ( v109 < v100 )
      v100 = (double)v106 * v103 + v107 * v108;
  }
  while ( HIDWORD(v88) != v57 );
  LODWORD(v88) = HIDWORD(v88) + v156;
  sys_survivors = HIDWORD(v88) + v156;
  dword_BD708 = v102;
  dword_BD70C = v98;
  if ( sys_minsane > SHIDWORD(v88) )
  {
LABEL_167:
    if ( !v56 || fabs(sys_offset) >= 0.4 )
      goto LABEL_189;
    v131 = *(unsigned __int8 *)(v56 + 88);
    v132 = v131 == 22;
    if ( v131 == 22 )
      v132 = v99 == 0;
    if ( v132 && sys_minsane )
    {
LABEL_189:
      if ( v158 )
      {
        if ( (int)sys_orphwait > 0 )
          orphwait = (int)sys_orphwait + current_time;
        LODWORD(v88) = sub_26294(8, 0, 0);
      }
      v138 = peer_list;
      for ( sys_peer = 0; v138; v138 = *(_DWORD *)v138 )
        *(_BYTE *)(v138 + 296) = *(_BYTE *)(v138 + 297);
      return LODWORD(v88);
    }
    goto LABEL_141;
  }
  v112 = 32 * v101;
  v113 = *(_DWORD *)(dword_BD700 + 32 * v101);
  v114 = v158 == 0;
  if ( v158 )
    v114 = v158 == v113;
  if ( v114 )
  {
    LODWORD(v88) = 0;
    dbl_BD710 = 0.0;
    if ( v113 )
      goto LABEL_133;
    goto LABEL_167;
  }
  v135 = sys_mindisp;
  v136 = fabs(*(double *)(v113 + 608) - *(double *)(v158 + 608));
  if ( v136 >= sys_mindisp )
  {
    dbl_BD710 = 0.0;
    if ( v99 )
      goto LABEL_134;
  }
  else
  {
    v137 = fabs(v136);
    if ( dbl_BD710 != 0.0 )
      v135 = dbl_BD710 * 0.5;
    dbl_BD710 = v135;
    if ( v137 >= v135 )
      dbl_BD710 = 0.0;
    else
      v113 = v158;
LABEL_133:
    if ( v99 )
    {
LABEL_134:
      *(_BYTE *)(v99 + 297) = 6;
      v113 = v99;
      dbl_BD710 = 0.0;
      sys_offset = *(double *)(v99 + 608);
      v88 = *(double *)(v99 + 624);
      sys_jitter = v88;
      goto LABEL_135;
    }
  }
  LODWORD(v88) = 6;
  *(_BYTE *)(v113 + 297) = 6;
  if ( sys_survivors <= 0 )
  {
    v142 = 0.0;
    v143 = dword_BD700 + v112;
    v146 = 0.0;
    v147 = 0.0;
  }
  else
  {
    v142 = 0.0;
    v143 = dword_BD700 + v112;
    v144 = (double *)(dword_BD700 + 8);
    v146 = 0.0;
    v147 = 0.0;
    do
    {
      v148 = *v144;
      v144 += 4;
      LODWORD(v88) = *((_DWORD *)v144 - 10);
      v149 = 1.0 / v148;
      v150 = *(double *)(LODWORD(v88) + 608);
      v147 = v147 + v149;
      v145 = *(double *)(*(_DWORD *)(dword_BD700 + 32 * v101) + 608);
      v142 = v142 + v149 * ((v150 - v145) * (v150 - v145));
      v146 = v146 + v149 * v150;
    }
    while ( v144 != (double *)(dword_BD700 + 32 * sys_survivors + 8) );
  }
  v151 = sqrt(v142 / v147 + *(double *)(v143 + 24) * *(double *)(v143 + 24));
  sys_offset = v146 / v147;
  sys_jitter = v151;
LABEL_135:
  if ( v56 && fabs(sys_offset) < 0.4 )
  {
    v115 = *(unsigned __int8 *)(v56 + 88);
    v116 = v115 == 22;
    if ( v115 == 22 )
      v116 = v99 == 0;
    if ( v116 )
    {
      v56 = v113;
LABEL_142:
      v113 = v56;
      goto LABEL_143;
    }
LABEL_141:
    *(_BYTE *)(v56 + 297) = 7;
    v88 = *(double *)(v56 + 608);
    dbl_BD710 = 0.0;
    v117 = *(double *)(v56 + 624);
    sys_offset = v88;
    sys_jitter = v117;
    goto LABEL_142;
  }
LABEL_143:
  v118 = *(_DWORD *)(v113 + 304);
  if ( v118 <= sys_epoch )
    return LODWORD(v88);
  if ( v158 != v113 )
  {
    sub_26294(138, v113, 0);
    v118 = *(_DWORD *)(v113 + 304);
  }
  for ( i = peer_list; i; i = *(_DWORD *)i )
    *(_BYTE *)(i + 296) = *(_BYTE *)(i + 297);
  sys_epoch = v118;
  sys_peer = v113;
  v120 = *(unsigned __int8 *)(v113 + 65);
  v121 = (unsigned __int8)sys_poll;
  if ( v120 > (unsigned __int8)sys_poll )
  {
    sys_poll = *(_BYTE *)(v113 + 65);
    v121 = v120;
  }
  v122 = *(unsigned __int8 *)(v113 + 66);
  if ( v122 < v121 )
  {
    sys_poll = *(_BYTE *)(v113 + 66);
    v121 = v122;
  }
  sub_348C4(v113, v121);
  v123 = *(_BYTE *)(v113 + 93);
  if ( v123 > 0xEu )
    v124 = 16;
  else
    v124 = v123 + 1;
  sys_stratum = v124;
  if ( (v123 & 0xEF) != 0 )
    sys_refid = sub_61720(v113 + 16);
  else
    sys_refid = *(_DWORD *)(v113 + 112);
  v125 = *(double *)(v113 + 104)
       + *(double *)(v113 + 632)
       + sys_jitter
       + (double)(unsigned int)(current_time - *(_DWORD *)(v113 + 704)) * clock_phi
       + fabs(sys_offset);
  v126 = *(double *)(v113 + 96);
  v127 = v125 <= sys_mindisp;
  if ( v125 > sys_mindisp )
    sys_rootdisp = v125;
  v128 = *(double *)(v113 + 616);
  if ( v127 )
    sys_rootdisp = sys_mindisp;
  v129 = *(_DWORD *)(v113 + 576);
  v130 = *(_DWORD *)(v113 + 580);
  sys_rootdelay = v128 + v126;
  sys_reftime = v129;
  dword_109C2C = v130;
  LODWORD(v88) = sub_2F960(v113);
  switch ( LODWORD(v88) )
  {
    case 1:
      if ( sys_leap == 3 )
      {
        sub_33ADC(0);
        if ( crypto_flags )
          sub_27DEC();
        LODWORD(v88) = waitsync_fd_to_close;
        if ( waitsync_fd_to_close != -1 )
        {
          LODWORD(v88) = close(waitsync_fd_to_close);
          waitsync_fd_to_close = -1;
        }
      }
      if ( !leapsec )
      {
        HIDWORD(v88) = dword_BD708;
        v153 = dword_BD70C;
        if ( dword_BD708 > dword_BD70C )
        {
          if ( dword_BD708 <= sys_survivors / 2 )
            return LODWORD(v88);
          sub_6055C(v160);
          LODWORD(v88) = sub_2E14C(1, v160[0], 0);
          v153 = dword_BD70C;
          HIDWORD(v88) = dword_BD708;
        }
        if ( v153 > SHIDWORD(v88) && v153 > sys_survivors / 2 )
        {
          sub_6055C(v160);
          LODWORD(v88) = sub_2E14C(0, v160[0], 0);
        }
      }
      break;
    case 2:
      sub_32214();
      sub_33ADC(3);
      sys_rootdelay = 0.0;
      LODWORD(v152) = sys_precision;
      sys_rootdisp = 0.0;
      sys_refid = *(_DWORD *)"STEP";
      sys_stratum = 16;
      dword_109C2C = 0;
      sys_reftime = 0;
      ldexp(v152, 0);
      sys_jitter = 1.0;
      LODWORD(v88) = sub_2DF74();
      break;
    case 0xFFFFFFFF:
      exit(-1);
      break;
  }
  return LODWORD(v88);
}
