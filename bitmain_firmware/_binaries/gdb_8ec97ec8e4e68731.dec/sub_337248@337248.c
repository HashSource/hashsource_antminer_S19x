int __fastcall sub_337248(const char *a1, int a2, int (__fastcall *a3)(char *), int a4)
{
  bool v4; // zf
  int v5; // r4
  unsigned int v6; // r11
  int v7; // r5
  const char *v8; // r9
  int v9; // r10
  char *v10; // r6
  size_t v11; // r0
  char *v12; // r0
  size_t v13; // r2
  unsigned __int8 *v14; // r6
  unsigned __int8 *v15; // r0
  int v16; // r3
  unsigned __int8 *v17; // r0
  unsigned __int8 *v18; // r7
  int v19; // r8
  size_t v20; // r0
  char *v21; // r10
  unsigned __int8 *v22; // r8
  size_t v23; // r11
  unsigned __int8 *v24; // r9
  int v25; // r0
  bool v26; // zf
  unsigned int v27; // r6
  int v28; // r3
  int v29; // t1
  int v30; // r8
  char *v31; // r0
  char *v32; // r7
  size_t v33; // r6
  unsigned __int8 *v34; // r0
  unsigned __int8 *v35; // r10
  _BYTE *v36; // r0
  _BOOL4 v37; // r3
  int v38; // r8
  char *v40; // r0
  char *v41; // r3
  char *v42; // r0
  int v43; // t1
  unsigned int v44; // r7
  char v45; // r0
  char *v46; // r0
  char *v47; // r12
  char *v48; // r2
  int v49; // r1
  char *v50; // r3
  bool v51; // zf
  int v52; // r0
  _BOOL4 v53; // r3
  int v54; // r3
  int v55; // r2
  unsigned int v56; // r3
  char *v57; // r8
  unsigned int v58; // r3
  size_t v59; // r7
  char *v60; // r0
  size_t v61; // r9
  void *v62; // r0
  _BYTE *v63; // r0
  int v64; // r3
  unsigned int v65; // r9
  int v66; // r6
  int v67; // r7
  int v68; // r0
  size_t v69; // r4
  char *v70; // r0
  int v71; // r2
  int v72; // r0
  int v73; // r7
  int v74; // r0
  unsigned int v75; // r3
  unsigned __int8 *v76; // r0
  unsigned __int8 *v77; // r3
  int v78; // t1
  char v79; // r1
  int v80; // r3
  int v81; // r1
  int v82; // r2
  int v83; // r3
  int v84; // r7
  size_t v85; // r8
  void *v86; // r0
  const void *v87; // r1
  char *v88; // r0
  int v89; // r3
  char *v90; // r0
  char v91; // r2
  int v92; // r3
  int v93; // r3
  unsigned __int8 *v94; // r1
  int v95; // r3
  bool v96; // zf
  char *v97; // r0
  char *v98; // r7
  int v99; // r7
  int *v100; // r0
  size_t v101; // r3
  int *v102; // r8
  void *v103; // r7
  size_t v104; // r3
  size_t v105; // r10
  size_t v106; // r5
  void *v107; // r0
  size_t v108; // r8
  size_t v109; // r0
  unsigned __int8 *v110; // r0
  char *v111; // r8
  int v112; // r0
  size_t v113; // r8
  char *v114; // r0
  char *v115; // r3
  size_t v116; // r6
  char *v117; // r0
  char *v118; // r7
  char *v119; // r0
  char *v120; // r0
  unsigned __int8 *v121; // r3
  int v122; // t1
  unsigned __int8 *v123; // r0
  int v124; // r0
  _BOOL4 v125; // r3
  int v126; // r3
  int v127; // r2
  size_t v128; // r8
  unsigned __int8 *v129; // r0
  char *v130; // r0
  signed int v131; // r8
  int *v132; // r0
  char *v133; // r1
  _DWORD *v134; // r10
  char *v135; // r6
  bool v136; // cf
  char *v137; // r0
  char *pw_dir; // r8
  char *v139; // r0
  char *s; // [sp+Ch] [bp-130h]
  unsigned int sa; // [sp+Ch] [bp-130h]
  char *sb; // [sp+Ch] [bp-130h]
  char *sc; // [sp+Ch] [bp-130h]
  int v145; // [sp+14h] [bp-128h]
  unsigned __int8 *v146; // [sp+14h] [bp-128h]
  char v147; // [sp+14h] [bp-128h]
  unsigned __int8 *v148; // [sp+18h] [bp-124h]
  int v149; // [sp+18h] [bp-124h]
  char *n; // [sp+1Ch] [bp-120h]
  size_t na; // [sp+1Ch] [bp-120h]
  char *nb; // [sp+1Ch] [bp-120h]
  size_t nc; // [sp+1Ch] [bp-120h]
  size_t nd; // [sp+1Ch] [bp-120h]
  void *ptr; // [sp+20h] [bp-11Ch]
  _BYTE *ptra; // [sp+20h] [bp-11Ch]
  char *ptrb; // [sp+20h] [bp-11Ch]
  void *ptrc; // [sp+20h] [bp-11Ch]
  int v159; // [sp+24h] [bp-118h]
  struct passwd *v160; // [sp+24h] [bp-118h]
  unsigned __int8 *v161; // [sp+24h] [bp-118h]
  unsigned __int8 *v162; // [sp+24h] [bp-118h]
  char *v163; // [sp+24h] [bp-118h]
  size_t buflen; // [sp+28h] [bp-114h]
  size_t buflena; // [sp+28h] [bp-114h]
  unsigned __int8 *buflenb; // [sp+28h] [bp-114h]
  size_t buflenc; // [sp+28h] [bp-114h]
  size_t buflend; // [sp+28h] [bp-114h]
  int v169; // [sp+2Ch] [bp-110h]
  int v170; // [sp+2Ch] [bp-110h]
  int v171; // [sp+3Ch] [bp-100h]
  int v172; // [sp+3Ch] [bp-100h]
  unsigned int v173; // [sp+44h] [bp-F8h] BYREF
  int v174; // [sp+48h] [bp-F4h]
  int v175; // [sp+54h] [bp-E8h]
  int v176; // [sp+58h] [bp-E4h]
  int v177; // [sp+5Ch] [bp-E0h]
  int v178; // [sp+60h] [bp-DCh]
  int v179; // [sp+64h] [bp-D8h]
  struct passwd *v180[4]; // [sp+68h] [bp-D4h] BYREF
  int v181; // [sp+78h] [bp-C4h]
  struct passwd resultbuf; // [sp+D0h] [bp-6Ch] BYREF

  v4 = a4 == 0;
  if ( a4 )
    v4 = a1 == 0;
  if ( v4 || (v5 = a2, v6 = a2 & 0xFFFF8100, (a2 & 0xFFFF8100) != 0) )
  {
    v6 = -1;
    *_errno_location() = 22;
    return v6;
  }
  v7 = a4;
  v8 = a1;
  if ( *a1 && a1[strlen(a1) - 1] == 47 )
    v5 |= 0x2000u;
  v9 = v5 & 8;
  if ( (v5 & 8) == 0 )
    *(_DWORD *)(v7 + 8) = 0;
  if ( (v5 & 0x400) == 0 )
    goto LABEL_41;
  if ( (v5 & 0x40) == 0 )
  {
    v28 = *(unsigned __int8 *)v8;
    if ( *v8 )
    {
      v10 = (char *)v8;
      do
      {
        if ( v28 == 92 )
        {
          if ( !v10[1] )
            break;
          v43 = (unsigned __int8)v10[2];
          v10 += 2;
          v28 = v43;
        }
        else
        {
          if ( v28 == 123 )
            goto LABEL_13;
          v29 = (unsigned __int8)*++v10;
          v28 = v29;
        }
      }
      while ( v28 );
    }
LABEL_41:
    v30 = v5 & 0x20;
    goto LABEL_42;
  }
  v10 = strchr(v8, 123);
  if ( !v10 )
    goto LABEL_41;
LABEL_13:
  v11 = strlen(v8);
  v12 = (char *)malloc(v11 - 1);
  s = v12;
  if ( !v12 )
  {
    if ( (v5 & 0x20) == 0 )
    {
      *(_DWORD *)v7 = 0;
      v6 = 1;
      *(_DWORD *)(v7 + 4) = 0;
      return v6;
    }
    return 1;
  }
  v13 = v10 - v8;
  v14 = (unsigned __int8 *)(v10 + 1);
  v145 = v13;
  n = (char *)memcpy(v12, v8, v13);
  v148 = sub_336918(v14, v5);
  if ( !v148 )
  {
LABEL_131:
    free(s);
    return sub_337248(v8, v5 & 0xFFFFFBFF, a3, v7);
  }
  v15 = v148;
  while ( 1 )
  {
    v16 = *v15;
    v17 = v15 + 1;
    if ( v16 == 125 )
      break;
    v15 = sub_336918(v17, v5);
    if ( !v15 )
      goto LABEL_131;
  }
  v18 = v17;
  v19 = v5 & 0x20;
  v20 = strlen((const char *)v17) + 1;
  if ( (v5 & 0x20) != 0 )
    v169 = *(_DWORD *)v7;
  else
    v169 = v5 & 0x20;
  if ( (v5 & 0x20) == 0 )
  {
    *(_DWORD *)v7 = v19;
    *(_DWORD *)(v7 + 4) = v19;
  }
  v21 = &n[v145];
  v22 = v14;
  buflen = (size_t)v8;
  v23 = v20;
  v24 = v148;
  while ( 1 )
  {
    memcpy(v21, v22, v24 - v22);
    memcpy(&v21[v24 - v22], v18, v23);
    v25 = sub_337248(s, v5 & 0xFFFFF7CF | 0x20, a3, v7);
    v26 = v25 == 0;
    if ( v25 )
      v26 = v25 == 3;
    if ( !v26 )
    {
      v27 = v25;
      free(s);
      if ( (v5 & 0x20) == 0 )
      {
        if ( *(_DWORD *)(v7 + 4) )
          sub_336B5C(v7);
        v6 = v27;
        *(_DWORD *)v7 = 0;
        return v6;
      }
      return v27;
    }
    if ( *v24 == 125 )
      break;
    v22 = v24 + 1;
    v24 = sub_336918(v24 + 1, v5);
    if ( !v24 )
      _assert_fail("next != NULL", "../.././gnulib/import/glob.c", 0x1E9u, "rpl_glob");
  }
  v30 = v5 & 0x20;
  v9 = v5 & 8;
  v6 = 0;
  v8 = (const char *)buflen;
  free(s);
  if ( *(_DWORD *)v7 != v169 )
    return v6;
  if ( (v5 & 0x810) == 0 )
    return 3;
LABEL_42:
  sa = *(_DWORD *)(v7 + 8);
  if ( v30 )
  {
    sa += *(_DWORD *)v7;
    goto LABEL_44;
  }
  *(_DWORD *)v7 = 0;
  if ( !v9 )
  {
    *(_DWORD *)(v7 + 4) = 0;
    goto LABEL_44;
  }
  if ( sa > 0x3FFFFFFE )
    return 1;
  v40 = (char *)malloc(4 * (sa + 1));
  *(_DWORD *)(v7 + 4) = v40;
  if ( !v40 )
    return 1;
  v41 = &v40[4 * sa];
  v42 = v40 - 4;
  do
  {
    *((_DWORD *)v42 + 1) = 0;
    v42 += 4;
  }
  while ( v41 != v42 );
LABEL_44:
  v31 = strrchr(v8, 47);
  v32 = v31;
  if ( !v31 )
  {
    if ( (v5 & 0x5000) != 0 && *v8 == 126 )
    {
      v146 = 0;
      v35 = (unsigned __int8 *)v8;
      v149 = 0;
      v33 = strlen(v8);
      goto LABEL_165;
    }
    if ( *v8 )
    {
      v35 = (unsigned __int8 *)".";
      v33 = 0;
      v38 = 0;
      v149 = 0;
      v146 = (unsigned __int8 *)v8;
      goto LABEL_80;
    }
    v35 = 0;
    v174 = 0;
    v149 = 0;
    goto LABEL_97;
  }
  if ( v8 == v31 || v31 == v8 + 1 && *v8 == 92 && (v5 & 0x40) == 0 )
  {
    v38 = 0;
    v35 = (unsigned __int8 *)&word_398974;
    v149 = 0;
    v146 = (unsigned __int8 *)(v31 + 1);
    v33 = 1;
    goto LABEL_53;
  }
  v33 = v31 - v8;
  v34 = (unsigned __int8 *)malloc(v31 - v8 + 1);
  v35 = v34;
  if ( !v34 )
    return 1;
  v36 = memcpy(v34, v8, v32 - v8);
  v37 = v33 > 1;
  v146 = (unsigned __int8 *)(v32 + 1);
  if ( v32[1] )
    v37 = 0;
  v36[v33] = 0;
  if ( v37 )
  {
    if ( (v5 & 0x40) != 0 )
      goto LABEL_201;
    v94 = &v35[v33 - 1];
    if ( *v94 != 92 )
      goto LABEL_201;
    if ( v94 > v35 && *(v94 - 1) == 92 )
    {
      v121 = v94 - 1;
      do
      {
        v123 = v121;
        if ( v35 == v121 )
          break;
        v122 = *--v121;
      }
      while ( v122 == 92 );
    }
    else
    {
      v123 = &v35[v33 - 1];
    }
    v149 = (&v35[v33] - v123) & 1;
    if ( v149 )
    {
      *v94 = 0;
      v124 = sub_337248(v35, v5 & 0xFFFFF7ED | 2, a3, v7);
      v71 = v124;
      if ( v124 )
      {
        v125 = v124 == 3;
        if ( v5 == (v5 & 0xFFFFF7EF) )
          v125 = 0;
        if ( v125 )
        {
          v126 = *(_DWORD *)v7;
          v127 = *(_DWORD *)(v7 + 8);
          v174 = 0;
          sa = v126 + v127;
LABEL_97:
          if ( (v5 & 0x10) == 0 )
            return 3;
          goto LABEL_98;
        }
LABEL_130:
        v6 = v71;
        free(v35);
        return v6;
      }
      LOBYTE(v5) = v5 & 0xEF;
    }
    else
    {
LABEL_201:
      v71 = sub_337248(v35, v5 | 2, a3, v7);
      if ( v71 )
        goto LABEL_130;
    }
    v71 = 0;
    *(_DWORD *)(v7 + 12) = *(_DWORD *)(v7 + 12) & 0xFFFFFFFD | v5 & 2;
    goto LABEL_130;
  }
  v38 = v5 & 0x5000;
  if ( (v5 & 0x5000) == 0 )
  {
LABEL_52:
    v149 = 1;
    goto LABEL_53;
  }
  if ( *v35 != 126 )
  {
    v38 = 0;
    goto LABEL_52;
  }
  v149 = 1;
LABEL_165:
  v84 = v35[1] == 47;
  if ( !v35[1] )
    v84 = 1;
  if ( v84 )
    goto LABEL_207;
  if ( (v5 & 0x40) != 0 )
  {
    nb = strchr((const char *)v35, 47);
    goto LABEL_217;
  }
  if ( v35[1] == 92 )
  {
    v95 = v35[2];
    v96 = v95 == 47;
    if ( v95 != 47 )
      v96 = v95 == 0;
    if ( v96 )
    {
LABEL_207:
      v97 = getenv("HOME");
      v98 = v97;
      if ( v97 && *v97 )
        goto LABEL_209;
      v112 = sysconf(71);
      if ( v112 == -1 )
        v113 = 20;
      else
        v113 = v112 + 1;
      v114 = (char *)malloc(v113);
      ptrb = v114;
      if ( !v114 )
        goto LABEL_184;
      nc = getlogin_r(v114, v113);
      if ( nc )
      {
        if ( v98 && *v98 )
        {
LABEL_209:
          nc = 0;
          goto LABEL_210;
        }
      }
      else
      {
        v131 = sysconf(70);
        v132 = _errno_location();
        if ( v131 <= 0 )
          v131 = 1024;
        buflenc = (size_t)v132;
        v172 = *v132;
        v133 = (char *)malloc(v131);
        if ( !v133 )
          goto LABEL_184;
        v162 = v35;
        v134 = (_DWORD *)buflenc;
        buflend = v33;
        v135 = v133;
        while ( 1 )
        {
          if ( !getpwnam_r(ptrb, &resultbuf, v135, v131, v180) )
          {
            v35 = v162;
            v163 = v135;
            v33 = buflend;
            goto LABEL_295;
          }
          if ( *v134 != 34 )
            break;
          v136 = __CFADD__(v131, v131);
          v131 *= 2;
          if ( v136 || (v137 = (char *)realloc(v135, v131)) == 0 )
          {
            v35 = v162;
            free(v135);
            goto LABEL_184;
          }
          v135 = v137;
          *v134 = v172;
        }
        v35 = v162;
        v163 = v135;
        v33 = buflend;
        v180[0] = 0;
LABEL_295:
        free(ptrb);
        if ( v180[0] )
        {
          pw_dir = v180[0]->pw_dir;
          nd = strlen(pw_dir) + 1;
          v139 = (char *)malloc(nd);
          v98 = v139;
          if ( !v139 )
          {
            free(v163);
            goto LABEL_184;
          }
          memcpy(v139, pw_dir, nd);
          free(v163);
          if ( *v98 )
          {
            nc = 1;
          }
          else
          {
            if ( (v5 & 0x4000) != 0 )
            {
              v6 = 3;
              free(v98);
              goto LABEL_128;
            }
            v98 = "~";
            nc = 1;
          }
          goto LABEL_210;
        }
        if ( v98 && *v98 )
        {
LABEL_210:
          if ( !v35[1] )
          {
            if ( v149 )
              free(v35);
            v35 = (unsigned __int8 *)v98;
            v38 = 1;
            v149 = nc;
            v33 = strlen(v98);
            goto LABEL_53;
          }
          v128 = strlen(v98);
          ptrc = (void *)(v33 + v128);
          v129 = (unsigned __int8 *)malloc(v33 + v128);
          v161 = v129;
          if ( v129 )
          {
            v130 = (char *)memcpy(v129, v98, v128);
            memcpy(&v130[v128], v35 + 1, v33);
            if ( v149 )
              free(v35);
            v38 = 1;
            v149 = 1;
            v35 = v161;
            v33 = (size_t)ptrc - 1;
            goto LABEL_53;
          }
          if ( nc )
          {
            v6 = nc;
            free(v98);
            goto LABEL_128;
          }
          goto LABEL_184;
        }
      }
      if ( (v5 & 0x4000) != 0 )
      {
        v6 = 3;
        goto LABEL_128;
      }
      v98 = "~";
      nc = 0;
      goto LABEL_210;
    }
  }
  nb = strchr((const char *)v35, 47);
  if ( nb )
  {
    v85 = nb - (char *)v35;
    v84 = sub_3385F0(v35, 92, nb - (char *)v35);
    goto LABEL_172;
  }
  v120 = strchr((const char *)v35, 92);
  v84 = (int)v120;
  if ( !v120 )
    goto LABEL_218;
  nb = (char *)_rawmemchr(v120, 0);
LABEL_217:
  if ( !nb )
  {
LABEL_218:
    v159 = 0;
    ptr = v35 + 1;
    nb = 0;
    goto LABEL_219;
  }
  v85 = nb - (char *)v35;
LABEL_172:
  v86 = malloc(v85);
  ptr = v86;
  if ( !v86 )
  {
LABEL_184:
    v6 = 1;
    goto LABEL_128;
  }
  v87 = v35 + 1;
  if ( !v84 )
  {
    v159 = 1;
    *((_BYTE *)memcpy(v86, v87, v85) + v85) = 0;
    goto LABEL_219;
  }
  v88 = (char *)memcpy(v86, v87, v84 - (_DWORD)v35 - 1);
  v89 = *(unsigned __int8 *)v84;
  v90 = &v88[v84 - (_DWORD)v35 - 1];
  if ( !*(_BYTE *)v84 )
    goto LABEL_247;
  while ( 2 )
  {
    if ( v89 != 92 )
    {
      v91 = *(_BYTE *)v84;
      v92 = v84;
      goto LABEL_177;
    }
    v91 = *(_BYTE *)(v84 + 1);
    if ( v91 )
    {
      v92 = v84 + 1;
LABEL_177:
      *v90++ = v91;
      v84 = v92 + 1;
      v89 = *(unsigned __int8 *)(v92 + 1);
      if ( !v89 )
        goto LABEL_247;
      continue;
    }
    break;
  }
  if ( !v146 )
    *v90++ = 92;
LABEL_247:
  v159 = 1;
  *v90 = 0;
LABEL_219:
  v99 = sysconf(70);
  v100 = _errno_location();
  v101 = v99;
  if ( v99 < 0 )
    v101 = 1024;
  v102 = v100;
  v170 = *v100;
  buflena = v101;
  v103 = malloc(v101);
  if ( !v103 )
  {
LABEL_182:
    if ( v159 )
      free(ptr);
    goto LABEL_184;
  }
  v104 = buflena;
  buflenb = v35;
  v105 = 2 * v104;
  v171 = v7;
  v106 = v104;
  while ( 1 )
  {
    if ( !getpwnam_r((const char *)ptr, &resultbuf, (char *)v103, v106, v180) )
    {
      v35 = buflenb;
      v4 = v159 == 0;
      v7 = v171;
      v160 = v180[0];
      if ( !v4 )
        free(ptr);
      if ( !v160 )
        goto LABEL_259;
      v108 = strlen(v160->pw_dir);
      if ( nb )
      {
        v109 = strlen(nb);
        v33 = v108 + v109;
        ptra = (_BYTE *)v109;
      }
      else
      {
        v33 = v108;
        ptra = 0;
      }
      if ( v149 )
        free(buflenb);
      v110 = (unsigned __int8 *)malloc(v33 + 1);
      v35 = v110;
      if ( !v110 )
      {
        v6 = 1;
        free(v103);
        return v6;
      }
      v111 = (char *)memcpy(v110, v160->pw_dir, v108) + v108;
      memcpy(v111, nb, (size_t)ptra);
      ptra[(_DWORD)v111] = 0;
      v38 = 1;
      v149 = 1;
      free(v103);
      goto LABEL_53;
    }
    if ( *v102 != 34 )
      break;
    v107 = realloc(v103, v105);
    if ( !v107 )
    {
      v35 = buflenb;
      free(v103);
      goto LABEL_182;
    }
    v103 = v107;
    *v102 = v170;
  }
  v35 = buflenb;
  v7 = v171;
  v180[0] = 0;
  if ( v159 )
    free(ptr);
LABEL_259:
  free(v103);
  v38 = v5 & 0x4000;
  if ( (v5 & 0x4000) != 0 )
    return 3;
LABEL_53:
  if ( !v146 )
  {
    if ( (v5 & 0x10) == 0 )
    {
      if ( (v5 & 0x200) != 0 )
      {
        if ( (*(int (__fastcall **)(unsigned __int8 *, struct passwd **))(v7 + 32))(v35, v180)
          || (v181 & 0xF000) != 0x4000 )
        {
          return 3;
        }
      }
      else if ( sub_349220(v35, &resultbuf) || ((int)resultbuf.pw_gecos & 0xF000) != 0x4000 )
      {
        return 3;
      }
    }
    v57 = *(char **)(v7 + 4);
    v58 = *(_DWORD *)v7 + *(_DWORD *)(v7 + 8);
    if ( v58 <= 0x3FFFFFFD )
    {
      v59 = 4 * (v58 + 2);
      v60 = (char *)realloc(*(void **)(v7 + 4), v59);
      v57 = v60;
      if ( v60 )
      {
        *(_DWORD *)(v7 + 4) = v60;
        v61 = v59 - 8;
        if ( (v5 & 2) != 0 )
        {
          v62 = malloc(v33 + 2);
          *(_DWORD *)&v57[v61] = v62;
          if ( !v62 )
            goto LABEL_112;
          v63 = memcpy(v62, v35, v33);
          v63[v33] = 47;
          v63[v33 + 1] = 0;
        }
        else
        {
          *(_DWORD *)&v60[v61] = _strdup((const char *)v35);
          v57 = *(char **)(v7 + 4);
          if ( !*(_DWORD *)&v57[v61] )
            goto LABEL_112;
        }
        v64 = *(_DWORD *)v7;
        *(_DWORD *)&v57[v59 - 4] = 0;
        *(_DWORD *)(v7 + 12) = v5;
        *(_DWORD *)v7 = v64 + 1;
        return v6;
      }
      v57 = *(char **)(v7 + 4);
    }
LABEL_112:
    free(v57);
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)v7 = 0;
    return 1;
  }
LABEL_80:
  v44 = ((v5 ^ 0x40u) >> 6) & 1;
  v45 = sub_336BB8(v35, v44);
  if ( (v45 & 5) != 0 )
  {
    if ( !v33 )
      v44 = 0;
    if ( v44 )
    {
      v76 = &v35[v33 - 1];
      if ( *v76 == 92 )
      {
        if ( v76 > v35 && *(v76 - 1) == 92 )
        {
          v77 = v76 - 1;
          do
          {
            v79 = (char)v77;
            if ( v35 == v77 )
              break;
            v78 = *--v77;
          }
          while ( v78 == 92 );
        }
        else
        {
          v79 = (_BYTE)v35 + v33 - 1;
        }
        if ( (((_BYTE)v35 + (_BYTE)v33 - v79) & 1) != 0 )
          *v76 = 0;
      }
    }
    if ( (v5 & 0x200) != 0 )
    {
      v80 = *(_DWORD *)(v7 + 20);
      v81 = *(_DWORD *)(v7 + 16);
      v177 = *(_DWORD *)(v7 + 24);
      v176 = v80;
      v82 = *(_DWORD *)(v7 + 32);
      v83 = *(_DWORD *)(v7 + 28);
      v175 = v81;
      v179 = v82;
      v178 = v83;
    }
    v72 = sub_337248(v35, v5 & 0x241 | 0x2004, a3, &v173);
    v27 = v72;
    if ( !v72 )
    {
      if ( v173 )
      {
        while ( 1 )
        {
          v73 = *(_DWORD *)v7;
          v74 = sub_336C68(v146, *(char **)(v174 + 4 * v27), v5 & 0xFFFFF7CF | 0x20, a3, (int *)v7);
          if ( v74 != 3 )
          {
            if ( v74 )
            {
              v115 = (char *)v74;
              if ( v174 )
              {
                sb = (char *)v74;
                sub_336B5C((int)&v173);
                v115 = sb;
              }
              if ( *(_DWORD *)(v7 + 4) )
              {
                sc = v115;
                sub_336B5C(v7);
                v115 = sc;
              }
              v6 = (unsigned int)v115;
              *(_DWORD *)v7 = 0;
              return v6;
            }
            if ( sub_3369AC(
                   *(const char **)(v174 + 4 * v27),
                   *(_DWORD *)(v7 + 4) + 4 * (v73 + *(_DWORD *)(v7 + 8)),
                   *(_DWORD *)v7 - v73) )
            {
              break;
            }
          }
          if ( v173 <= ++v27 )
            goto LABEL_143;
        }
        if ( !v174 )
          goto LABEL_195;
        goto LABEL_194;
      }
LABEL_143:
      v54 = *(_DWORD *)v7;
      v55 = *(_DWORD *)(v7 + 8);
      if ( *(_DWORD *)v7 + v55 != sa )
      {
        LOWORD(v5) = v5 | 0x100;
        goto LABEL_146;
      }
      if ( (v5 & 0x10) == 0 )
      {
        if ( v174 )
        {
          v6 = 3;
          sub_336B5C((int)&v173);
          return v6;
        }
        return 3;
      }
      v5 |= 0x100u;
      goto LABEL_99;
    }
    v75 = ((v5 ^ 0x10u) >> 4) & 1;
    if ( v72 != 3 )
      v75 = 1;
    if ( v75 )
      return v27;
LABEL_98:
    v54 = *(_DWORD *)v7;
    v55 = *(_DWORD *)(v7 + 8);
LABEL_99:
    v56 = v54 + v55;
    if ( v56 <= 0x3FFFFFFD )
    {
      v116 = 4 * (v56 + 2);
      v117 = (char *)realloc(*(void **)(v7 + 4), v116);
      v118 = v117;
      if ( v117 )
      {
        *(_DWORD *)(v7 + 4) = v117;
        v119 = _strdup(v8);
        v93 = *(_DWORD *)(v7 + 4);
        *(_DWORD *)&v118[v116 - 8] = v119;
        if ( !*(_DWORD *)(v93 + v116 - 8) )
        {
          if ( !v174 )
            goto LABEL_196;
LABEL_194:
          sub_336B5C((int)&v173);
          goto LABEL_195;
        }
        ++*(_DWORD *)v7;
        *(_DWORD *)(v93 + v116 - 4) = 0;
        *(_DWORD *)(v7 + 12) = v5;
LABEL_146:
        if ( v174 )
          sub_336B5C((int)&v173);
        goto LABEL_116;
      }
    }
    if ( v174 )
    {
      v6 = 1;
      sub_336B5C((int)&v173);
      return v6;
    }
    return 1;
  }
  na = *(_DWORD *)v7;
  if ( (v45 & 2) != 0 )
  {
    v46 = strchr((const char *)v35, 92);
    v48 = v46;
    do
    {
      ++v48;
      v50 = v46 + 1;
      v49 = (unsigned __int8)*v46;
      v51 = v49 == 92;
      if ( v49 == 92 )
      {
        LOBYTE(v49) = v46[1];
      }
      else
      {
        v47 = v46 + 1;
        v50 = v46;
      }
      if ( v51 )
      {
        --v33;
        v46 += 2;
      }
      else
      {
        v46 = v47;
      }
      *(v48 - 1) = v49;
    }
    while ( *v50 );
LABEL_90:
    v52 = sub_336C68(v146, (char *)v35, v5 & 0xFFFFF7EF, a3, (int *)v7);
    if ( v52 )
    {
      v53 = v52 == 3;
      if ( v5 == (v5 & 0xFFFFF7EF) )
        v53 = 0;
      if ( v53 )
      {
        if ( *(_DWORD *)v7 + *(_DWORD *)(v7 + 8) != sa )
          return 3;
        v174 = 0;
        goto LABEL_97;
      }
      return v52;
    }
    LOWORD(v5) = v5 & 0xF7EF;
  }
  else
  {
    if ( v38 )
      goto LABEL_90;
    v52 = sub_336C68(v146, (char *)v35, v5, a3, (int *)v7);
    if ( v52 )
      return v52;
  }
  if ( v33 && sub_3369AC((const char *)v35, *(_DWORD *)(v7 + 4) + 4 * (na + *(_DWORD *)(v7 + 8)), *(_DWORD *)v7 - na) )
  {
LABEL_195:
    v93 = *(_DWORD *)(v7 + 4);
LABEL_196:
    if ( v93 )
      sub_336B5C(v7);
    v6 = 1;
    *(_DWORD *)v7 = 0;
    return v6;
  }
LABEL_116:
  if ( (v5 & 2) == 0 )
    goto LABEL_126;
  v65 = sa;
  if ( sa >= *(_DWORD *)(v7 + 8) + *(_DWORD *)v7 )
    goto LABEL_126;
  v66 = 4 * sa;
  v67 = v5 & 0x200;
  v147 = v5;
  while ( 2 )
  {
    v68 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + v66);
    if ( v67 )
    {
      if ( !(*(int (__fastcall **)(int, struct passwd **))(v7 + 32))(v68, v180) && (v181 & 0xF000) == 0x4000 )
      {
LABEL_123:
        v69 = strlen(*(const char **)(*(_DWORD *)(v7 + 4) + v66));
        v70 = (char *)realloc(*(void **)(*(_DWORD *)(v7 + 4) + v66), v69 + 2);
        if ( !v70 )
          goto LABEL_195;
        *(_WORD *)&v70[v69] = 47;
        *(_DWORD *)(*(_DWORD *)(v7 + 4) + v66) = v70;
      }
    }
    else if ( !sub_349220(v68, &resultbuf) && ((int)resultbuf.pw_gecos & 0xF000) == 0x4000 )
    {
      goto LABEL_123;
    }
    ++v65;
    v66 += 4;
    if ( *(_DWORD *)v7 + *(_DWORD *)(v7 + 8) > v65 )
      continue;
    break;
  }
  LOBYTE(v5) = v147;
LABEL_126:
  if ( (v5 & 4) == 0 )
  {
    v6 = 0;
    qsort(
      (void *)(*(_DWORD *)(v7 + 4) + 4 * sa),
      *(_DWORD *)v7 + *(_DWORD *)(v7 + 8) - sa,
      4u,
      (__compar_fn_t)sub_336A98);
  }
LABEL_128:
  if ( v149 )
  {
    v71 = v6;
    goto LABEL_130;
  }
  return v6;
}
