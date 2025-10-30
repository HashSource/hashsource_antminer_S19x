int sub_1C5E8()
{
  double v0; // d0
  Elf32_Dyn **v1; // r11
  char *v2; // r2
  int v3; // r4
  const unsigned __int16 **v4; // r6
  Elf32_Dyn *v5; // r7
  __int32 d_tag; // r5
  int v7; // r0
  int v8; // r4
  int v9; // r1
  char *v10; // r0
  char *v11; // r5
  int v12; // r0
  int v13; // r11
  int v14; // r3
  _DWORD *v15; // r2
  int v16; // r8
  int v17; // r5
  int v18; // r6
  _DWORD *v19; // r0
  char *v20; // r5
  bool v21; // zf
  int v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r2
  Elf32_Dyn *v26; // r5
  int v28; // r2
  unsigned int v29; // r3
  int v30; // r1
  _BYTE *v31; // r0
  int v32; // r2
  char *v33; // r3
  __int16 v34; // r3
  int v35; // r2
  const unsigned __int16 *v36; // r6
  char *v37; // r2
  int v38; // t1
  unsigned __int16 v39; // r3
  _BOOL4 v40; // r0
  int v41; // r2
  char *v42; // r1
  int v43; // r3
  int v44; // t1
  int v45; // r4
  int v46; // r5
  int v47; // r3
  char *v48; // r3
  int v49; // r2
  int v50; // t1
  int v51; // r3
  int *v52; // r4
  int v53; // r0
  bool v54; // zf
  int v55; // r0
  int v56; // r2
  char *v57; // r1
  int v58; // t1
  int *v59; // r4
  char *s; // [sp+Ch] [bp-28h]
  char *sb; // [sp+Ch] [bp-28h]
  char *sa; // [sp+Ch] [bp-28h]
  char *nptra; // [sp+10h] [bp-24h]
  char *nptr; // [sp+10h] [bp-24h]
  Elf32_Dyn **v65; // [sp+14h] [bp-20h]
  int v66; // [sp+24h] [bp-10h]
  int v67; // [sp+28h] [bp-Ch] BYREF

  v1 = &GLOBAL_OFFSET_TABLE_;
  v66 = 0;
  v2 = (char *)dword_B93D8;
  do
  {
    while ( 1 )
    {
      v3 = sub_1BE54(v2);
      if ( v3 == -1 )
      {
        v3 = (int)sub_1C364();
        if ( !v3 )
          return v3;
        v3 = 447;
        goto LABEL_26;
      }
      v4 = _ctype_b_loc();
      v5 = v1[424];
      d_tag = v5->d_tag;
      if ( ((*v4)[v3] & 0x2000) == 0 )
        break;
      if ( d_tag )
      {
        if ( v3 == 10 )
        {
LABEL_25:
          v3 = 447;
          dword_B93DC = 0;
          goto LABEL_26;
        }
        v2 = (char *)dword_B93D8;
      }
      else
      {
        if ( v3 == 59 )
          goto LABEL_25;
        v2 = (char *)dword_B93D8;
      }
    }
    if ( d_tag )
    {
      if ( v3 == 10 )
        goto LABEL_25;
    }
    else if ( v3 == 59 )
    {
      goto LABEL_25;
    }
    s = (char *)v1[669];
    if ( strchr(s, v3) && !dword_B93DC )
    {
      if ( v3 == 61 )
        dword_B93DC = d_tag != 0;
      LOWORD(v1[458]->d_tag) = (unsigned __int8)v3;
      goto LABEL_26;
    }
    v7 = v3;
    v8 = 0;
    nptra = (char *)dword_B93D8;
    sub_1BC38(v7, (_DWORD *)dword_B93D8);
    v9 = *((_DWORD *)nptra + 5);
    *((_DWORD *)nptra + 8) = *((_DWORD *)nptra + 4);
    *((_DWORD *)nptra + 9) = v9;
    v10 = nptra;
    v65 = v1;
    nptr = (char *)v1[458];
    v11 = nptr;
    while ( 1 )
    {
      v12 = sub_1BE54(v10);
      v13 = v12;
      if ( v12 == -1 )
      {
        v14 = -1;
        v1 = v65;
        v15 = (_DWORD *)dword_B93D8;
        goto LABEL_30;
      }
      *v11++ = v12;
      if ( ((*v4)[v12] & 0x2000) != 0 )
      {
        v14 = v12;
        v1 = v65;
        v15 = (_DWORD *)dword_B93D8;
        if ( v12 != 34 )
          goto LABEL_30;
        goto LABEL_37;
      }
      if ( v5->d_tag )
      {
        if ( v12 == 10 )
        {
          v14 = 10;
          v1 = v65;
          v15 = (_DWORD *)dword_B93D8;
          goto LABEL_30;
        }
      }
      else if ( v12 == 59 )
      {
        v14 = 59;
        v1 = v65;
        v15 = (_DWORD *)dword_B93D8;
        goto LABEL_30;
      }
      if ( v12 == 34 )
        break;
      if ( !dword_B93DC && strchr(s, v12) )
      {
        v14 = v13;
        v15 = (_DWORD *)dword_B93D8;
        v1 = v65;
        goto LABEL_30;
      }
      v10 = (char *)dword_B93D8;
      if ( v13 == 35 )
      {
        v1 = v65;
        do
        {
          v24 = sub_1BE54(v10);
          v14 = v24;
          if ( v24 == -1 )
          {
            v15 = (_DWORD *)dword_B93D8;
            goto LABEL_30;
          }
          v21 = v24 == 10;
          v10 = (char *)dword_B93D8;
        }
        while ( !v21 );
        v15 = (_DWORD *)dword_B93D8;
        goto LABEL_30;
      }
      if ( ++v8 == 1025 )
      {
        v25 = dword_B93D8;
        v1 = v65;
LABEL_55:
        *((_BYTE *)&word_32 + (_DWORD)nptr) = 0;
        sub_64E00(
          3,
          "configuration item on line %d longer than limit of %lu, began with '%s'",
          *(_DWORD *)(v25 + 16),
          50,
          nptr);
        if ( sub_1C450() )
          exit(1024);
        v26 = v1[620];
LABEL_57:
        v3 = 0;
        v26->d_tag = 0;
        return v3;
      }
    }
    v1 = v65;
    v15 = (_DWORD *)dword_B93D8;
LABEL_37:
    sa = (char *)v4;
    v18 = v8;
    v19 = v15;
    v20 = &nptr[v8 - 1];
    while ( 1 )
    {
      v22 = sub_1BE54(v19);
      v14 = v22;
      if ( v22 == -1 )
      {
        v8 = v18;
        v66 = 1;
        v4 = (const unsigned __int16 **)sa;
        v15 = (_DWORD *)dword_B93D8;
        goto LABEL_30;
      }
      v21 = v22 == 34;
      if ( v22 != 34 )
        v21 = v22 == 10;
      v19 = (_DWORD *)dword_B93D8;
      if ( v21 )
        break;
      ++v18;
      *++v20 = v14;
      if ( v18 == 1025 )
      {
        v25 = (int)v19;
        goto LABEL_55;
      }
    }
    v8 = v18;
    if ( v14 != 34 )
      v23 = 1;
    v4 = (const unsigned __int16 **)sa;
    v15 = (_DWORD *)dword_B93D8;
    if ( v14 == 34 )
    {
      v66 = 1;
      v14 = sub_1BE54((_DWORD *)dword_B93D8);
      v15 = (_DWORD *)dword_B93D8;
    }
    else
    {
      v66 = v23;
    }
LABEL_30:
    sb = (char *)v15;
    sub_1BC38(v14, v15);
    nptr[v8] = 0;
    v2 = sb;
  }
  while ( !v8 );
  v16 = (unsigned __int8)*nptr;
  v17 = dword_B93DC | v66;
  if ( dword_B93DC | v66 )
  {
    if ( v16 != 45 )
      goto LABEL_33;
    v28 = *((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1);
    if ( v28 == 52 )
    {
      v3 = 325;
    }
    else
    {
      if ( v28 != 54 )
      {
LABEL_33:
        if ( dword_B93DC == 1 )
          dword_B93DC = 0;
        return sub_1BFFC();
      }
      v3 = 327;
    }
LABEL_26:
    v1[620]->d_tag = v3;
    return v3;
  }
  if ( !*nptr )
  {
LABEL_131:
    if ( sscanf(nptr, "%u", &v67) != 1 )
    {
      v16 = (unsigned __int8)*nptr;
      goto LABEL_81;
    }
    if ( v67 < 0 )
    {
      v16 = (unsigned __int8)*nptr;
      goto LABEL_81;
    }
LABEL_113:
    v52 = _errno_location();
    *v52 = 0;
    v53 = strtol(nptr, 0, 10);
    v26 = v1[620];
    v26->d_tag = v53;
    if ( v53 )
      return 319;
    v54 = *v52 == 34;
    if ( *v52 != 34 )
      v54 = *v52 == 22;
    if ( !v54 )
      return 319;
    sub_64E00(3, "Integer cannot be represented: %s", nptr);
    goto LABEL_119;
  }
  v29 = 1961801593;
  v30 = (unsigned __int8)*nptr;
  v3 = 940;
  v31 = nptr + 1;
  while ( 1 )
  {
    for ( ; (unsigned __int8)v29 != v30; v29 = *(&v1[400]->d_tag + v3) )
    {
      v3 = v29 >> 21;
      if ( !(v29 >> 21) )
        goto LABEL_77;
    }
    v30 = (unsigned __int8)*v31;
    if ( !*v31 )
      break;
    v3 = (v29 >> 10) & 0x7FF;
    ++v31;
    if ( !v3 )
      goto LABEL_77;
    v29 = *(&v1[400]->d_tag + v3);
  }
  v51 = (v29 >> 8) & 3;
  if ( v51 != 3 )
  {
    dword_B93DC = v51;
    if ( v3 == 407 && !v5->d_tag )
      dword_B93DC = 0;
    goto LABEL_26;
  }
LABEL_77:
  v32 = (unsigned __int8)nptr[v16 == 45];
  v33 = &nptr[v16 == 45];
  if ( !*v33 )
  {
LABEL_112:
    if ( v16 == 45 )
      goto LABEL_113;
    goto LABEL_131;
  }
  while ( ((*v4)[v32] & 0x800) != 0 )
  {
    v32 = (unsigned __int8)*++v33;
    if ( !*v33 )
      goto LABEL_112;
  }
LABEL_81:
  if ( v16 == 48 )
  {
    if ( (*_ctype_tolower_loc())[*((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1)] == 120 )
    {
      v34 = *((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 2);
      if ( !*((_BYTE *)&dword_0 + (_DWORD)nptr + 2) )
      {
LABEL_128:
        if ( (*_ctype_tolower_loc())[*((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1)] == 120 )
        {
          v26 = v1[620];
          v55 = sscanf(nptr + 2, "%x", v26);
          goto LABEL_123;
        }
LABEL_122:
        v26 = v1[620];
        v55 = sscanf(nptr, "%u", v26);
LABEL_123:
        if ( v55 == 1 )
          return 434;
        sub_64E00(3, "U_int cannot be represented: %s", nptr);
LABEL_119:
        if ( !sub_1C450() )
          goto LABEL_57;
LABEL_120:
        exit(1);
      }
      v35 = 2;
      v17 = 1;
      goto LABEL_84;
    }
  }
  else if ( !v16 )
  {
    goto LABEL_122;
  }
  v34 = v16;
  v35 = 0;
LABEL_84:
  v36 = *v4;
  v37 = &nptr[v35];
  while ( 1 )
  {
    v39 = v36[v34];
    if ( v17 )
    {
      if ( (v39 & 0x1000) == 0 )
        break;
      goto LABEL_86;
    }
    if ( (v39 & 0x800) == 0 )
      break;
LABEL_86:
    v38 = (unsigned __int8)*++v37;
    v34 = v38;
    if ( !v38 )
    {
      if ( v16 != 48 )
        goto LABEL_122;
      goto LABEL_128;
    }
  }
  v40 = ((v16 - 43) & 0xFD) == 0;
  v41 = (unsigned __int8)nptr[v40];
  v42 = &nptr[v40];
  if ( !nptr[v40] )
    return sub_1BFFC();
  v43 = 0;
  while ( 1 )
  {
    v45 = v40 + v43;
    if ( (v36[v41] & 0x800) == 0 )
      break;
    v44 = (unsigned __int8)*++v42;
    v41 = v44;
    ++v43;
    if ( !v44 )
      goto LABEL_141;
  }
  if ( v41 == 46 )
  {
    v56 = (unsigned __int8)nptr[++v45];
    v57 = &nptr[v45];
    if ( nptr[v45] )
    {
      while ( (v36[v56] & 0x800) != 0 )
      {
        v58 = (unsigned __int8)*++v57;
        v56 = v58;
        ++v43;
        ++v45;
        if ( !v58 )
          goto LABEL_140;
      }
      goto LABEL_94;
    }
LABEL_140:
    if ( !v43 )
      return sub_1BFFC();
LABEL_141:
    v59 = _errno_location();
    *v59 = 0;
    strtod(nptr, 0);
    *(double *)v1[620] = v0;
    if ( v0 != 0.0 || *v59 != 34 )
      return 289;
    sub_64E00(3, "Double too large to represent: %s", nptr);
    goto LABEL_120;
  }
LABEL_94:
  if ( v43 )
  {
    if ( !nptr[v45] )
      goto LABEL_141;
    v46 = (unsigned __int8)nptr[v45];
    if ( (*_ctype_tolower_loc())[v46] == 101 )
    {
      v47 = v45 + 1;
      if ( ((nptr[v45 + 1] - 43) & 0xFD) == 0 )
        v47 = v45 + 2;
      v48 = &nptr[v47 - 1];
      while ( 1 )
      {
        v50 = (unsigned __int8)*++v48;
        v49 = v50;
        if ( !v50 )
          break;
        if ( (v36[v49] & 0x800) == 0 )
          return sub_1BFFC();
      }
      goto LABEL_141;
    }
  }
  return sub_1BFFC();
}
