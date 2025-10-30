void __fastcall sub_2F1D74(int a1, int a2, int a3, int *a4)
{
  int v4; // r12
  int v5; // r6
  int v6; // r4
  int v9; // r11
  char *v10; // r0
  unsigned int v11; // r3
  char *v12; // r7
  int v13; // r10
  int v14; // r8
  int v15; // r3
  unsigned int v16; // r6
  unsigned int v17; // r2
  int v18; // r3
  int v19; // r0
  void *v20; // r0
  _DWORD *v21; // r7
  int v22; // r2
  unsigned int v23; // r3
  int (__fastcall *v24)(int, int, int, int, int); // r0
  int v25; // r1
  char *v26; // r3
  int v27; // r6
  int (__fastcall *v28)(char *); // r3
  unsigned int v29; // r0
  unsigned int v30; // r8
  char *v31; // r10
  char *v32; // r11
  unsigned int v33; // r2
  int v34; // r1
  int v35; // r3
  unsigned __int8 *v36; // r4
  int v37; // r3
  int v38; // r0
  int v39; // r3
  _DWORD *v40; // r10
  const char *v41; // r2
  const void *v42; // r11
  unsigned int v43; // r3
  bool v44; // cc
  _BOOL4 v45; // r8
  size_t v46; // r0
  int v47; // r0
  int v48; // r8
  _DWORD *v49; // r3
  unsigned int v50; // r12
  unsigned int *v51; // r3
  unsigned int *v52; // lr
  unsigned __int8 *v53; // r12
  unsigned __int8 *v54; // lr
  unsigned __int8 *i; // r1
  int v56; // r2
  int v57; // r1
  int v58; // r3
  _DWORD *v59; // r8
  unsigned int v60; // r2
  int v61; // r1
  unsigned int v62; // r1
  int *v63; // r2
  unsigned int v64; // r0
  const char *v65; // r10
  _BYTE *v66; // r11
  int *v67; // r3
  unsigned int v68; // r1
  int v69; // r0
  int v70; // r3
  char v71; // r0
  int v72; // r0
  int v73; // r3
  int v74; // r2
  _DWORD *v75; // r1
  char *v76; // r3
  unsigned int v77; // r11
  int v78; // r0
  unsigned int v79; // lr
  _DWORD *v80; // r3
  unsigned int v81; // t1
  int v82; // r3
  unsigned int v83; // r2
  _BYTE *v84; // r0
  unsigned int v85; // r12
  unsigned int *v86; // r3
  char *v87; // r1
  unsigned int v88; // r12
  unsigned int v89; // r1
  _DWORD *v90; // r3
  unsigned int v91; // t1
  _DWORD *v92; // r0
  char v93; // r0
  unsigned int v94; // r11
  unsigned __int8 *v95; // lr
  unsigned __int8 *v96; // r3
  int v97; // r12
  _DWORD *v98; // r0
  int v99; // r2
  char v100; // t1
  _DWORD *v101; // r3
  unsigned int v102; // r1
  _DWORD *v103; // r3
  _DWORD *v104; // r12
  int v105; // r3
  _BYTE *v106; // r11
  int v107; // lr
  _DWORD *v108; // r3
  int v109; // t1
  _DWORD *v110; // r8
  char *v111; // r3
  char *v112; // r2
  char v113; // r0
  unsigned int *v114; // r3
  unsigned int v115; // r12
  unsigned int v116; // r2
  unsigned int *v117; // r3
  char *v118; // r2
  char v119; // r2
  unsigned int v120; // r0
  char v121; // r2
  int v122; // r3
  unsigned int v123; // r1
  _BYTE *v124; // r12
  unsigned int v125; // r8
  int *v126; // r3
  unsigned int v127; // lr
  char *v128; // r3
  char *v129; // r2
  unsigned int *v130; // r3
  unsigned int v131; // r12
  unsigned int v132; // r2
  char v133; // r2
  char *v134; // r12
  _BYTE *v135; // r3
  int v136; // r0
  int v137; // r1
  int v138; // r2
  unsigned int *v139; // r2
  unsigned int v140; // r3
  _DWORD *v141; // r2
  unsigned int v142; // t1
  _DWORD *v143; // r1
  _DWORD *v144; // r2
  unsigned int v145; // r12
  unsigned int v146; // r1
  _DWORD *v147; // r3
  unsigned int v148; // t1
  unsigned __int8 *v149; // r3
  int v150; // lr
  int v151; // r3
  int v152; // r3
  int v153; // r3
  int v154; // r0
  int v155; // r2
  void *v156; // r1
  size_t v157; // r2
  _DWORD *v158; // r3
  unsigned int v159; // r1
  _DWORD *v160; // r3
  _DWORD *v161; // r0
  _DWORD *v162; // r3
  unsigned int v163; // r0
  _DWORD *v164; // r3
  _DWORD *v165; // r0
  int v166; // r11
  bool v167; // cf
  unsigned int v168; // r2
  char *v169; // r3
  char *v170; // r0
  int v171; // r3
  char *v172; // r3
  unsigned int v173; // r1
  unsigned int *v174; // r3
  int v175; // r3
  bool v176; // zf
  int *v178; // [sp+Ch] [bp-58h]
  int v179; // [sp+10h] [bp-54h]
  unsigned int v180; // [sp+14h] [bp-50h]
  int v181; // [sp+1Ch] [bp-48h]
  char *v182; // [sp+20h] [bp-44h]
  int v183; // [sp+20h] [bp-44h]
  int v184; // [sp+20h] [bp-44h]
  int v185; // [sp+24h] [bp-40h]
  const char *v186; // [sp+28h] [bp-3Ch]
  unsigned int v187; // [sp+30h] [bp-34h]
  unsigned __int8 *v188; // [sp+30h] [bp-34h]
  int (__fastcall *v189)(int, int, int, int, int); // [sp+34h] [bp-30h]
  int v190; // [sp+3Ch] [bp-28h]
  int v191; // [sp+40h] [bp-24h]
  void *ptr; // [sp+4Ch] [bp-18h] BYREF
  void *src; // [sp+50h] [bp-14h] BYREF
  unsigned int v194; // [sp+54h] [bp-10h] BYREF
  unsigned __int8 *v195; // [sp+58h] [bp-Ch] BYREF
  unsigned __int8 *v196; // [sp+5Ch] [bp-8h] BYREF

  v4 = *(_DWORD *)(a3 + 36);
  ptr = 0;
  if ( !v4 )
    return;
  v5 = *(_WORD *)(a3 + 24) & 0x380;
  if ( (*(_WORD *)(a3 + 24) & 0x380) != 0 || *(char ***)(a3 + 60) == &off_470950 )
    return;
  v6 = a3;
  v9 = *(_DWORD *)(a2 + 28);
  if ( !sub_2ADFDC(a1, a3, (int *)&ptr) )
    goto LABEL_18;
  v180 = (*(int (__fastcall **)(int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 300))(a1, v6);
  if ( !v180 )
    goto LABEL_18;
  v10 = (char *)ptr;
  v11 = *(_DWORD *)(v6 + 36);
  src = ptr;
  v12 = (char *)ptr + v11;
  if ( ptr != (char *)ptr + v11 )
  {
    if ( v11 <= 3 )
    {
LABEL_20:
      src = v12;
    }
    else
    {
      v13 = v5;
      v14 = 1;
      while ( 1 )
      {
        v18 = *(_DWORD *)(a1 + 4);
        src = v10 + 4;
        v19 = (*(int (**)(void))(v18 + 40))();
        if ( v19 == -1 )
          goto LABEL_18;
        if ( !v19 )
          break;
        if ( (unsigned int)(v12 - (_BYTE *)src) <= 3 )
          goto LABEL_20;
        v15 = *(_DWORD *)(a1 + 4);
        v16 = v19 - 4;
        src = (char *)src + 4;
        if ( !(*(int (**)(void))(v15 + 40))() )
          ++v13;
        v10 = (char *)src + v16;
        v17 = v12 - ((_BYTE *)src + v16);
        if ( v16 > v12 - (_BYTE *)src )
          goto LABEL_20;
        src = (char *)src + v16;
        if ( v12 == v10 )
          break;
        ++v14;
        if ( v17 <= 3 )
          goto LABEL_20;
      }
      v178 = (int *)sub_2AB4EC(32 * v14 + 8);
      if ( v178 )
      {
        if ( v13 )
        {
          v98 = sub_2AB4EC(116 * v13);
          v21 = v98;
          if ( !v98 )
          {
LABEL_63:
            (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))(
              "%P: error in %B(%A); no .eh_frame_hdr table will be created.\n",
              a1,
              v6);
            *(_DWORD *)(v9 + 188) = 0;
            free(v178);
            goto LABEL_64;
          }
        }
        else
        {
          v21 = 0;
        }
        goto LABEL_25;
      }
    }
LABEL_18:
    (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))(
      "%P: error in %B(%A); no .eh_frame_hdr table will be created.\n",
      a1,
      v6);
    v20 = ptr;
    *(_DWORD *)(v9 + 188) = 0;
    if ( !v20 )
      return;
    goto LABEL_19;
  }
  v178 = (int *)sub_2AB4EC(8u);
  if ( !v178 )
    goto LABEL_18;
  v13 = v5;
  v14 = v5;
  v21 = (_DWORD *)v5;
LABEL_25:
  v22 = *(_DWORD *)(a1 + 4);
  v23 = *(_DWORD *)(v6 + 36);
  v182 = (char *)ptr;
  v24 = *(int (__fastcall **)(int, int, int, int, int))(*(_DWORD *)(v22 + 444) + 192);
  v25 = *v178;
  if ( !v23 )
    v185 = 0;
  src = ptr;
  v189 = v24;
  if ( !v23 )
    goto LABEL_287;
  v44 = v23 > 3;
  v26 = (char *)ptr + v23;
  v27 = (int)&v178[8 * v25 + 2];
  if ( !v44 )
    goto LABEL_306;
  v185 = 0;
  v190 = v13;
  v181 = v9;
  v191 = v14;
  v179 = v6;
  while ( 1 )
  {
    v28 = *(int (__fastcall **)(char *))(v22 + 40);
    src = v182 + 4;
    v29 = v28(v182);
    v30 = v29;
    v31 = (char *)src;
    v32 = (char *)ptr;
    v33 = *(_DWORD *)(v179 + 36);
    if ( (_BYTE *)src - (_BYTE *)ptr + v29 > v33 )
      goto LABEL_62;
    v34 = *a4;
    v35 = a4[1];
    *(_DWORD *)(v27 + 16) = v182 - (_BYTE *)ptr;
    v187 = v29 + 4;
    v36 = (unsigned __int8 *)&v31[v29];
    *(_DWORD *)(v27 + 12) = v29 + 4;
    *(_DWORD *)(v27 + 8) = -1431655765 * ((v35 - v34) >> 2);
    if ( !v29 )
      break;
    if ( v29 <= 3 )
      goto LABEL_217;
    v37 = *(_DWORD *)(a1 + 4);
    src = v31 + 4;
    v38 = (*(int (__fastcall **)(char *))(v37 + 40))(v31);
    v39 = 29 * v185;
    v40 = &v21[29 * v185];
    if ( v38 )
    {
      v57 = *(_DWORD *)(v27 + 16) + 4 - v38;
      if ( v21 >= v40 )
      {
        v59 = v21;
      }
      else
      {
        v58 = v21[14];
        v59 = v21;
        if ( v57 == *(_DWORD *)(v58 + 16) )
          goto LABEL_75;
        while ( 1 )
        {
          v59 += 29;
          if ( v59 >= v40 )
            break;
          v58 = v59[14];
          if ( *(_DWORD *)(v58 + 16) == v57 )
            goto LABEL_75;
        }
      }
      if ( v59 == v40 )
        goto LABEL_62;
      v58 = v59[14];
LABEL_75:
      v60 = *(unsigned __int8 *)(v58 + 27);
      v61 = *(unsigned __int8 *)(v27 + 27);
      *(_DWORD *)v27 = v58;
      v62 = v61 & 0xFFFFFFF7 | (8 * ((v60 >> 3) & 1));
      *(_BYTE *)(v27 + 27) = v62;
      *(_BYTE *)(v27 + 27) = v62 & 0xFB | (4 * ((*(_BYTE *)(v58 + 27) & 4) != 0));
      v63 = (int *)a4[1];
      v64 = a4[2];
      if ( v64 <= (unsigned int)v63 )
      {
LABEL_83:
        if ( (*(_DWORD *)(v179 + 20) & 0x100000) == 0 )
          goto LABEL_62;
        if ( *a4 )
        {
          if ( v64 > (unsigned int)v63 )
          {
            v66 = ptr;
            v65 = (const char *)src;
            goto LABEL_87;
          }
          goto LABEL_62;
        }
        goto LABEL_247;
      }
      v65 = (const char *)src;
      v66 = ptr;
      if ( (_BYTE *)src - (_BYTE *)ptr <= (unsigned int)*v63 )
      {
        if ( (*(_DWORD *)(v179 + 20) & 0x100000) == 0 )
          goto LABEL_87;
LABEL_222:
        if ( *a4 )
          goto LABEL_87;
      }
      else
      {
        if ( v63[1] )
          goto LABEL_62;
        v67 = v63 + 3;
        while ( 1 )
        {
          v63 = v67;
          if ( (unsigned int)v67 >= v64 )
          {
            a4[1] = (int)v67;
            goto LABEL_83;
          }
          v68 = *v67;
          v67 += 3;
          if ( v68 >= (_BYTE *)src - (_BYTE *)ptr )
            break;
          if ( *(v67 - 2) )
          {
LABEL_313:
            v9 = v181;
            v6 = v179;
            a4[1] = (int)v63;
            goto LABEL_63;
          }
        }
        v152 = *(_DWORD *)(v179 + 20);
        a4[1] = (int)v63;
        if ( (v152 & 0x100000) != 0 )
          goto LABEL_222;
LABEL_87:
        if ( *v63 != v65 - v66 )
          goto LABEL_62;
        v69 = sub_2ED3CC(a2, v179, v189, a4, 0);
        if ( v69 )
        {
          if ( *(_DWORD *)(v69 + 148) == a1 )
          {
            v70 = *(_DWORD *)(v69 + 140);
            v65 = (const char *)src;
            *(_DWORD *)(v27 + 4) = *(_DWORD *)(v70 + 128);
            *(_DWORD *)(v70 + 128) = v27;
            goto LABEL_91;
          }
          goto LABEL_62;
        }
LABEL_247:
        v65 = (const char *)src;
      }
LABEL_91:
      v71 = *((_BYTE *)v59 + 62);
      v186 = v65;
      if ( (v71 & 0x60) == 0x60 )
      {
        v73 = 0;
        v74 = 0;
        v194 = 0;
        v72 = 0;
      }
      else
      {
        v72 = sub_2F18A4(v71, v180);
        v73 = 2 * v72;
        v74 = v72;
        v194 = v72;
        if ( 2 * v72 > (unsigned int)(v36 - (unsigned __int8 *)v65) )
          goto LABEL_217;
      }
      v75 = (_DWORD *)a4[1];
      v76 = (char *)&v65[v73];
      v77 = a4[2];
      v78 = (int)&v76[-v72];
      src = v76;
      if ( (unsigned int)v75 >= v77 )
        goto LABEL_99;
      v79 = v78 - (_DWORD)ptr;
      if ( (unsigned int)(v78 - (_DWORD)ptr) > *v75 )
      {
        v80 = v75 + 3;
        do
        {
          v75 = v80;
          if ( (unsigned int)v80 >= v77 )
          {
            a4[1] = (int)v80;
            goto LABEL_99;
          }
          v81 = *v80;
          v80 += 3;
        }
        while ( v81 < v79 );
        a4[1] = (int)v75;
      }
      if ( *v75 != v79 )
      {
LABEL_99:
        if ( !sub_2F1AF0((int *)(a1 + 4), v78, v74, 0) )
        {
          (*(void (__fastcall **)(const char *, int, int))(*(_DWORD *)(a2 + 24) + 52))(
            "discarding zero address range FDE in %B(%A).\n",
            a1,
            v179);
          *(_DWORD *)v27 = 0;
        }
      }
      if ( *((_BYTE *)v59 + 10) == 122 )
      {
        if ( !sub_2F117C((unsigned __int8 **)&src, (unsigned int)v36, (int *)&v194) )
          goto LABEL_62;
        if ( *((unsigned __int8 *)v59 + 61) != 255 )
          goto LABEL_208;
      }
      else
      {
        v82 = *((unsigned __int8 *)v59 + 61);
        v83 = 0;
        v194 = 0;
        if ( v82 == 255 )
        {
          v84 = src;
LABEL_104:
          v85 = v187;
          v86 = (unsigned int *)a4[1];
          v188 = &v84[v83];
          v87 = &v182[v85];
          v88 = a4[2];
          src = v87;
          if ( v88 > (unsigned int)v86 )
          {
            v89 = v87 - (_BYTE *)ptr;
            if ( v89 > *v86 )
            {
              v90 = v86 + 3;
              do
              {
                v92 = v90;
                if ( (unsigned int)v90 >= v88 )
                {
                  a4[1] = (int)v90;
                  goto LABEL_110;
                }
                v91 = *v90;
                v90 += 3;
              }
              while ( v91 < v89 );
              a4[1] = (int)v92;
            }
          }
          goto LABEL_110;
        }
LABEL_208:
        v144 = (_DWORD *)a4[1];
        v145 = a4[2];
        v84 = src;
        if ( (unsigned int)v144 < v145 )
        {
          v146 = (_BYTE *)src - (_BYTE *)ptr;
          if ( (unsigned int)((_BYTE *)src - (_BYTE *)ptr) > *v144 )
          {
            v147 = v144 + 3;
            do
            {
              v144 = v147;
              if ( (unsigned int)v147 >= v145 )
              {
                a4[1] = (int)v147;
                goto LABEL_214;
              }
              v148 = *v147;
              v147 += 3;
            }
            while ( v148 < v146 );
            a4[1] = (int)v144;
          }
          v167 = 1;
          if ( *((_BYTE *)v59 + 64) )
            v167 = (unsigned int)v144 >= v145;
          if ( !v167 && *v144 == v146 )
            *(_BYTE *)(v59[14] + 6) |= 2u;
        }
LABEL_214:
        v83 = v36 - v84;
        *(_BYTE *)(v27 + 26) = (_BYTE)v84 - (_BYTE)v65;
        if ( *((_BYTE *)v59 + 10) != 122 )
        {
          v194 = v36 - v84;
          goto LABEL_104;
        }
      }
      v84 = src;
      v83 = v194;
      if ( v194 > v36 - (_BYTE *)src )
      {
LABEL_217:
        v149 = v36;
        v9 = v181;
        v6 = v179;
        src = v149;
        goto LABEL_63;
      }
      goto LABEL_104;
    }
    ++v185;
    *(_BYTE *)(v27 + 27) |= 1u;
    v41 = (const char *)src;
    v40[14] = v27;
    v21[v39] = v30;
    v186 = v41;
    if ( v36 <= (unsigned __int8 *)v41 )
      goto LABEL_62;
    v42 = v41 + 1;
    src = (void *)(v41 + 1);
    v43 = *(unsigned __int8 *)v41;
    *((_BYTE *)v40 + 8) = v43;
    v44 = v43 > 1;
    if ( v43 != 1 )
      v44 = v43 - 3 > 1;
    v45 = v44;
    if ( v44 )
      goto LABEL_62;
    v46 = strlen(v41 + 1);
    if ( v46 > 0x13 )
      goto LABEL_62;
    v183 = (int)v40 + 10;
    memcpy((char *)v40 + 10, v42, v46 + 1);
    v47 = _rawmemchr(v42, v45);
    v48 = v47 + 1;
    src = (void *)(v47 + 1);
    *(_BYTE *)(v27 + 5) = *(_BYTE *)(v27 + 5) & 0xF8 | (v47 - (_BYTE)v186) & 7;
    v49 = (_DWORD *)a4[1];
    v50 = a4[2];
    if ( (unsigned int)v49 < v50 && (unsigned int)(v48 - (_DWORD)ptr) > *v49 )
    {
      if ( v49[1] )
        goto LABEL_62;
      v51 = v49 + 3;
      while ( 1 )
      {
        v52 = v51;
        if ( (unsigned int)v51 >= v50 || *v51 >= v48 - (int)ptr )
          break;
        v51 += 3;
        if ( *(v51 - 2) )
        {
LABEL_317:
          v9 = v181;
          v6 = v179;
          a4[1] = (int)v52;
          goto LABEL_63;
        }
      }
      a4[1] = (int)v51;
    }
    if ( *(_BYTE *)(v47 + 1) == 101 && *(_BYTE *)(v47 + 2) == 104 )
    {
      if ( v180 > (unsigned int)&v36[-v48] )
        goto LABEL_217;
      v139 = (unsigned int *)a4[1];
      src = (void *)(v48 + v180);
      if ( (unsigned int)v139 < v50 )
      {
        v140 = v48 + v180 - (_DWORD)ptr;
        if ( v140 > *v139 )
        {
          v141 = v139 + 3;
          do
          {
            v143 = v141;
            if ( (unsigned int)v141 >= v50 )
            {
              a4[1] = (int)v141;
              goto LABEL_52;
            }
            v142 = *v141;
            v141 += 3;
          }
          while ( v142 < v140 );
          a4[1] = (int)v143;
        }
      }
    }
LABEL_52:
    if ( *((unsigned __int8 *)v40 + 8) > 3u )
    {
      if ( v36 <= (unsigned __int8 *)((char *)src + 1) || *(unsigned __int8 *)src != v180 || *((_BYTE *)src + 1) )
        goto LABEL_62;
      src = (char *)src + 2;
    }
    if ( !sub_2F117C((unsigned __int8 **)&src, (unsigned int)v36, v40 + 8) )
    {
LABEL_62:
      v9 = v181;
      v6 = v179;
      goto LABEL_63;
    }
    v54 = (unsigned __int8 *)src;
    for ( i = (unsigned __int8 *)src; ; ++i )
    {
      if ( v36 <= i )
        goto LABEL_62;
      src = i + 1;
      v56 = *i;
      if ( (v56 & 0x80) == 0 )
        break;
    }
    v99 = (v56 ^ 0x40) - 64;
    if ( v54 < i )
      v53 = i;
    v40[9] = v99;
    if ( v54 < i )
    {
      do
      {
        v100 = *--v53;
        v99 = v100 & 0x7F | (v99 << 7);
        v40[9] = v99;
      }
      while ( v54 != v53 );
    }
    if ( *((_BYTE *)v40 + 8) == 1 )
    {
      if ( v36 <= i + 1 )
        goto LABEL_62;
      src = i + 2;
      v40[10] = i[1];
    }
    else if ( !sub_2F117C((unsigned __int8 **)&src, (unsigned int)v36, v40 + 10) )
    {
      goto LABEL_62;
    }
    v101 = (_DWORD *)a4[1];
    v102 = a4[2];
    if ( (unsigned int)v101 < v102 && *v101 < (unsigned int)((_BYTE *)src - (_BYTE *)ptr) )
    {
      if ( v101[1] )
        goto LABEL_62;
      v103 = v101 + 3;
      while ( 1 )
      {
        v104 = v103;
        if ( (unsigned int)v103 >= v102 || *v103 >= (unsigned int)((_BYTE *)src - (_BYTE *)ptr) )
          break;
        v103 += 3;
        if ( *(v103 - 2) )
        {
LABEL_316:
          v9 = v181;
          v6 = v179;
          a4[1] = (int)v104;
          goto LABEL_63;
        }
      }
      a4[1] = (int)v103;
    }
    v105 = *((unsigned __int8 *)v40 + 10);
    *((_WORD *)v40 + 30) = -1;
    *((_BYTE *)v40 + 62) = -1;
    if ( v105 == 101 )
    {
      if ( *((_BYTE *)v40 + 11) == 104 )
        goto LABEL_228;
    }
    else if ( v105 == 122 )
    {
      v183 = (int)v40 + 11;
      if ( !sub_2F117C((unsigned __int8 **)&src, (unsigned int)v36, v40 + 11) )
        goto LABEL_62;
      v162 = (_DWORD *)a4[1];
      v163 = a4[2];
      v106 = ptr;
      if ( (unsigned int)v162 < v163 && (unsigned int)((_BYTE *)src - (_BYTE *)ptr) > *v162 )
      {
        if ( v162[1] )
          goto LABEL_62;
        v164 = v162 + 3;
        while ( 1 )
        {
          v104 = v164;
          if ( (unsigned int)v164 >= v163 || *v164 >= (unsigned int)((_BYTE *)src - (_BYTE *)ptr) )
            break;
          v164 += 3;
          if ( *(v164 - 2) )
            goto LABEL_316;
        }
        a4[1] = (int)v164;
      }
      v105 = *((unsigned __int8 *)v40 + 11);
      goto LABEL_141;
    }
    v106 = ptr;
LABEL_141:
    while ( v105 )
    {
      switch ( v105 )
      {
        case 'L':
          v128 = (char *)src;
          if ( v36 <= src )
            goto LABEL_62;
          v129 = (char *)src + 1;
          src = (char *)src + 1;
          v113 = *v128;
          *((_BYTE *)v40 + 61) = *v128;
          v130 = (unsigned int *)a4[1];
          v131 = a4[2];
          if ( (unsigned int)v130 >= v131 )
            goto LABEL_161;
          v132 = v129 - v106;
          if ( v132 <= *v130 )
            goto LABEL_161;
          if ( v130[1] )
            goto LABEL_62;
          v117 = v130 + 3;
          while ( 1 )
          {
            v52 = v117;
            if ( (unsigned int)v117 >= v131 || *v117 >= v132 )
              goto LABEL_160;
            v117 += 3;
            if ( *(v117 - 2) )
              goto LABEL_317;
          }
        case 'P':
          v118 = (char *)src;
          if ( v36 <= src )
            goto LABEL_62;
          src = (char *)src + 1;
          v119 = *v118;
          *((_BYTE *)v40 + 60) = v119;
          if ( (v119 & 0x60) == 0x60 )
            goto LABEL_62;
          v120 = sub_2F18A4(v119, v180);
          if ( !v120 )
            goto LABEL_62;
          if ( (v121 & 0x70) != 0x50 )
            goto LABEL_168;
          v168 = (unsigned int)&v106[-v122] & (v120 - 1);
          v194 = v168;
          if ( v168 > (unsigned int)&v36[-v122] )
            goto LABEL_217;
          src = (void *)(v122 + v168);
          if ( v120 == 8 )
            *(_BYTE *)(v27 + 6) |= 0x10u;
LABEL_168:
          v63 = (int *)a4[1];
          v123 = a4[2];
          v124 = src;
          *(_BYTE *)(v27 + 4) = (_BYTE)src - (_BYTE)v186;
          if ( v123 <= (unsigned int)v63 )
            goto LABEL_62;
          v125 = v124 - v106;
          if ( v124 - v106 <= (unsigned int)*v63 )
            goto LABEL_144;
          if ( v63[1] )
            goto LABEL_62;
          v126 = v63 + 3;
          while ( 2 )
          {
            v63 = v126;
            if ( (unsigned int)v126 >= v123 )
            {
              v9 = v181;
              v6 = v179;
              a4[1] = (int)v126;
              goto LABEL_63;
            }
            v127 = *v126;
            v126 += 3;
            if ( v127 < v125 )
            {
              if ( *(v126 - 2) )
                goto LABEL_313;
              continue;
            }
            break;
          }
          a4[1] = (int)v63;
LABEL_144:
          v107 = *v63;
          if ( *v63 != v125 )
            goto LABEL_62;
          v108 = (_DWORD *)(a4[1] + 12);
          v40[12] = -1431655765 * (((int)v63 - *a4) >> 2);
          do
          {
            v110 = v108;
            if ( (unsigned int)v108 >= v123 )
            {
              a4[1] = (int)v108;
              goto LABEL_149;
            }
            v109 = *v108;
            v108 += 3;
          }
          while ( v107 == v109 );
          a4[1] = (int)v110;
LABEL_149:
          if ( v120 > v36 - v124 )
            goto LABEL_217;
          src = &v124[v120];
LABEL_151:
          v105 = *(unsigned __int8 *)++v183;
          break;
        case 'R':
          v111 = (char *)src;
          if ( v36 <= src )
            goto LABEL_62;
          v112 = (char *)src + 1;
          src = (char *)src + 1;
          v113 = *v111;
          *((_BYTE *)v40 + 62) = *v111;
          v114 = (unsigned int *)a4[1];
          v115 = a4[2];
          if ( v115 <= (unsigned int)v114 )
            goto LABEL_161;
          v116 = v112 - v106;
          if ( v116 <= *v114 )
            goto LABEL_161;
          if ( v114[1] )
            goto LABEL_62;
          v117 = v114 + 3;
          while ( 1 )
          {
            v52 = v117;
            if ( (unsigned int)v117 >= v115 || v116 <= *v117 )
              break;
            v117 += 3;
            if ( *(v117 - 2) )
              goto LABEL_317;
          }
LABEL_160:
          a4[1] = (int)v117;
LABEL_161:
          if ( (v113 & 0x60) == 0x60 || !sub_2F18A4(v113, v180) )
            goto LABEL_62;
          goto LABEL_151;
        case 'S':
          goto LABEL_151;
        default:
          goto LABEL_62;
      }
    }
LABEL_228:
    *(_BYTE *)(v27 + 5) = *(_BYTE *)(v27 + 5) & 7
                        | (8 * (((_BYTE)src - (_BYTE)v186 - 1 - (*(_BYTE *)(v27 + 5) & 7)) & 0x1F));
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      v153 = *((unsigned __int8 *)v40 + 62);
      goto LABEL_233;
    }
    v154 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 304))(a1, a2, v179);
    v153 = *((unsigned __int8 *)v40 + 62);
    if ( v154 )
    {
      v155 = *((_BYTE *)v40 + 61) & 0x70;
      if ( (v153 & 0x70) != 0 )
      {
        if ( v153 == 255 )
        {
          if ( (v40[15] & 0x70) != 0x50 )
          {
            v175 = *((unsigned __int8 *)v40 + 10);
            v176 = v175 == 0;
            if ( !*((_BYTE *)v40 + 10) )
              LOBYTE(v175) = *(_BYTE *)(v27 + 27);
            *(_BYTE *)(v27 + 6) |= 0x20u;
            if ( v176 )
              *(_BYTE *)(v27 + 27) = v175 | 4;
            *(_BYTE *)(v27 + 27) |= 8u;
          }
          if ( v155 )
          {
LABEL_307:
            *((_BYTE *)v40 + 62) = 0;
            goto LABEL_234;
          }
          v153 = *((unsigned __int8 *)v40 + 62);
        }
        else if ( (*((_BYTE *)v40 + 61) & 0x70) != 0 )
        {
          goto LABEL_234;
        }
      }
      else
      {
        *(_BYTE *)(v27 + 27) |= 8u;
        v153 = *((unsigned __int8 *)v40 + 62);
        if ( v155 )
          goto LABEL_233;
      }
      *((_BYTE *)v40 + 64) = 1;
    }
LABEL_233:
    if ( v153 == 255 )
      goto LABEL_307;
LABEL_234:
    v156 = src;
    v157 = v36 - (_BYTE *)src;
    v188 = (unsigned __int8 *)src;
    v167 = (unsigned int)(v36 - (_BYTE *)src) >= 0x32;
    *((_BYTE *)v40 + 63) = (_BYTE)v36 - (_BYTE)src;
    if ( v167 )
      v157 = 50;
    memcpy((char *)v40 + 65, v156, v157);
    v158 = (_DWORD *)a4[1];
    v159 = a4[2];
    src = v36;
    if ( (unsigned int)v158 < v159 && (unsigned int)(v36 - (_BYTE *)ptr) > *v158 )
    {
      if ( v158[1] )
        goto LABEL_62;
      v160 = v158 + 3;
      while ( 1 )
      {
        v161 = v160;
        if ( (unsigned int)v160 >= v159 || *v160 >= (unsigned int)(v36 - (_BYTE *)ptr) )
          break;
        v160 += 3;
        if ( *(v160 - 2) )
        {
          v9 = v181;
          v6 = v179;
          a4[1] = (int)v161;
          goto LABEL_63;
        }
      }
      a4[1] = (int)v160;
    }
    if ( (*(_BYTE *)a2 & 3) == 2 )
    {
      v59 = v40;
    }
    else
    {
      *(_DWORD *)v27 = v40;
      v59 = v40;
      *(_BYTE *)(v27 + 6) = *(_BYTE *)(v27 + 6) & 0xF7 | (8 * ((v40[15] & 0x70) == 16));
    }
LABEL_110:
    v93 = *((_BYTE *)v59 + 62);
    if ( (v93 & 0x60) == 0x60 )
      v94 = 0;
    else
      v94 = sub_2F18A4(v93, v180);
    v95 = v188;
    v194 = v94;
    v184 = 0;
    v96 = v188;
    v196 = v188;
    while ( v36 > v96 )
    {
      v97 = *v96++;
      if ( v97 )
      {
        if ( v97 == 1 )
          ++v184;
        if ( !sub_2F11E8(&v196, (unsigned int)v36, v94) )
          goto LABEL_62;
        v95 = v196;
        v96 = v196;
      }
      else
      {
        v196 = v96;
      }
    }
    if ( !v95 )
      goto LABEL_62;
    if ( v184 )
    {
      v133 = *(_BYTE *)(v27 + 27);
      if ( (v133 & 1) != 0 )
        goto LABEL_62;
      *(_DWORD *)(v27 + 12) -= v36 - v95;
      if ( (*((_BYTE *)v59 + 62) & 0x70) == 0x10 || (v133 & 8) != 0 )
      {
        v165 = sub_2AB368(4 * (v184 + 1));
        *(_DWORD *)(v27 + 28) = v165;
        if ( !v165 )
          goto LABEL_62;
        *v165 = v184;
        v166 = 0;
        v195 = v188;
        while ( v195 < v36 )
        {
          if ( *v195 == 1 )
          {
            ++v166;
            *(_DWORD *)(*(_DWORD *)(v27 + 28) + 4 * v166) = v195 + 1 - (unsigned __int8 *)v186;
          }
          if ( !sub_2F11E8(&v195, (unsigned int)v36, v194) )
            goto LABEL_62;
        }
      }
    }
    else
    {
      v176 = v36 == v95;
      v150 = v36 - v95;
      *(_DWORD *)(v27 + 12) -= v150;
      if ( !v176 && (*(_BYTE *)(v27 + 27) & 1) != 0 )
      {
        v151 = *v59 - v150;
        *((_BYTE *)v59 + 63) -= v150;
        *v59 = v151;
      }
    }
    *(_BYTE *)(v27 + 27) |= 2u;
    v134 = (char *)src;
    v135 = ptr;
    v136 = *(_DWORD *)(v179 + 36);
    v137 = *v178;
    *(_BYTE *)(v27 + 24) = *((_BYTE *)v59 + 62);
    v182 = v134;
    v138 = v137 + 1;
    v25 = v138;
    *(_BYTE *)(v27 + 25) = *((_BYTE *)v59 + 61);
    *v178 = v138;
    if ( v134 - v135 == v136 )
    {
      v13 = v190;
      v14 = v191;
      v6 = v179;
      goto LABEL_287;
    }
    v26 = &v135[v136];
    v27 = (int)&v178[8 * v138 + 2];
    if ( (unsigned int)(v26 - v134) <= 3 )
    {
      v9 = v181;
      v6 = v179;
LABEL_306:
      src = v26;
      goto LABEL_63;
    }
    v22 = *(_DWORD *)(a1 + 4);
  }
  v169 = v32;
  v170 = v31;
  v14 = v191;
  v9 = v181;
  v13 = v190;
  v6 = v179;
  while ( 1 )
  {
    v172 = &v169[v33];
    if ( (unsigned int)(v172 - v170) <= 3 )
      break;
    v171 = *(_DWORD *)(a1 + 4);
    src = v170 + 4;
    if ( (*(int (**)(void))(v171 + 40))() )
      goto LABEL_63;
    v33 = *(_DWORD *)(v179 + 36);
    v169 = (char *)ptr;
    v170 = (char *)src;
  }
  src = v172;
  v173 = a4[2];
  while ( 1 )
  {
    v174 = (unsigned int *)a4[1];
    if ( (unsigned int)v174 >= v173 || v33 <= *v174 )
      break;
    if ( v174[1] )
      goto LABEL_63;
    a4[1] = (int)(v174 + 3);
  }
  v25 = *v178 + 1;
  *v178 = v25;
LABEL_287:
  if ( v25 != v14 )
    sub_2A6BBC("elf-eh-frame.c", 1031);
  if ( v185 != v13 )
    sub_2A6BBC("elf-eh-frame.c", 1032);
  *(_DWORD *)(*(_DWORD *)(v6 + 140) + 136) = v178;
  *(_WORD *)(v6 + 24) = *(_WORD *)(v6 + 24) & 0xFC7F | 0x180;
  if ( (*(_BYTE *)a2 & 3) != 2 )
  {
    v20 = ptr;
    v178[1] = (int)v21;
    if ( !v20 )
      return;
LABEL_19:
    free(v20);
    return;
  }
LABEL_64:
  if ( ptr )
    free(ptr);
  if ( v21 )
  {
    v20 = v21;
    goto LABEL_19;
  }
}
