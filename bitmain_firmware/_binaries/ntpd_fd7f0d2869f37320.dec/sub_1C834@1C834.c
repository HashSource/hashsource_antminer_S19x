_DWORD *sub_1C834()
{
  double v0; // d0
  Elf32_Dyn **v1; // r10
  _DWORD *v2; // r7
  int *v3; // r8
  int *v4; // r9
  int v5; // r4
  const unsigned __int16 **v6; // r5
  int v7; // r2
  _DWORD *result; // r0
  Elf32_Dyn *v9; // r6
  int v10; // r11
  int v11; // r1
  char *v12; // r0
  int v13; // r4
  int v14; // r10
  int v15; // r3
  int v16; // r3
  int v17; // r0
  char *v18; // r4
  int *v19; // r3
  int *v20; // r9
  Elf32_Dyn *v21; // r8
  int v22; // r6
  int *v23; // r11
  bool v24; // zf
  int v25; // r0
  int *v26; // r2
  int v27; // r2
  Elf32_Dyn *v28; // r4
  int *v29; // r2
  char *v30; // lr
  int v31; // r4
  int v32; // r0
  unsigned int v33; // r3
  int v34; // t1
  char *v35; // r2
  int v36; // r3
  int v37; // t1
  int v38; // r1
  __int16 v39; // r3
  int v40; // r2
  const unsigned __int16 *v41; // r6
  char *v42; // r2
  int v43; // t1
  unsigned __int16 v44; // r3
  int v45; // r4
  int v46; // r2
  char *v47; // r1
  int v48; // r3
  int v49; // t1
  int v50; // r5
  int v51; // r2
  int v52; // r3
  char *v53; // r2
  int v54; // t1
  int *v55; // r4
  int v56; // r3
  int v57; // r3
  int v58; // r0
  int *v59; // r0
  int *v60; // r5
  int v61; // r0
  bool v62; // zf
  char *v63; // r1
  int v64; // r2
  int v65; // t1
  char *s; // [sp+Ch] [bp-28h]
  char *nptra; // [sp+10h] [bp-24h]
  char *nptr; // [sp+10h] [bp-24h]
  Elf32_Dyn **v69; // [sp+14h] [bp-20h]
  char v70; // [sp+1Ch] [bp-18h]
  int v71; // [sp+28h] [bp-Ch] BYREF

  v1 = &GLOBAL_OFFSET_TABLE_;
  v70 = 0;
  v2 = (_DWORD *)dword_BA3D8;
  v3 = &dword_BA3D8;
  v4 = &dword_BA3D8;
  do
  {
    while ( 1 )
    {
      v5 = sub_1C084(v2);
      if ( v5 == -1 )
      {
        result = sub_1C5AC();
        if ( !result )
          return result;
        v7 = 447;
        goto LABEL_7;
      }
      v6 = _ctype_b_loc();
      if ( ((*v6)[v5] & 0x2000) == 0 )
        break;
      if ( v1[424]->d_tag )
      {
        if ( v5 == 10 )
          goto LABEL_6;
        v2 = (_DWORD *)dword_BA3D8;
      }
      else
      {
        if ( v5 == 59 )
          goto LABEL_6;
        v2 = (_DWORD *)dword_BA3D8;
      }
    }
    v9 = v1[424];
    if ( v9->d_tag )
    {
      if ( v5 == 10 )
      {
LABEL_6:
        v7 = 447;
        dword_BA3DC = 0;
        goto LABEL_7;
      }
    }
    else if ( v5 == 59 )
    {
      goto LABEL_6;
    }
    s = (char *)v1[669];
    if ( strchr(s, v5) && !dword_BA3DC )
    {
      v7 = v5;
      if ( v5 == 61 )
        dword_BA3DC = v9->d_tag != 0;
      LOWORD(v1[458]->d_tag) = (unsigned __int8)v5;
      goto LABEL_7;
    }
    v10 = 0;
    nptra = (char *)dword_BA3D8;
    sub_1BE64(v5, (_DWORD *)dword_BA3D8);
    v11 = *((_DWORD *)nptra + 5);
    *((_DWORD *)nptra + 8) = *((_DWORD *)nptra + 4);
    *((_DWORD *)nptra + 9) = v11;
    v12 = nptra;
    v69 = v1;
    v13 = (int)&v1[458][-1].d_un.d_ptr + 3;
    nptr = (char *)v1[458];
    v14 = sub_1C084(v12);
    if ( v14 == -1 )
    {
LABEL_32:
      v1 = v69;
      goto LABEL_33;
    }
    while ( 1 )
    {
      *(_BYTE *)++v13 = v14;
      if ( ((*v6)[v14] & 0x2000) != 0 )
      {
        v15 = v14;
        v24 = v14 == 34;
        v1 = v69;
        if ( v24 )
        {
LABEL_44:
          v18 = &nptr[v10 - 1];
          v19 = v4;
          v20 = v3;
          v21 = v9;
          v22 = v10;
          v23 = v19;
          while ( 1 )
          {
            v25 = sub_1C084((_DWORD *)dword_BA3D8);
            if ( v25 == -1 )
            {
              v26 = v23;
              v15 = -1;
              v10 = v22;
              v9 = v21;
              v3 = v20;
              v4 = v26;
              v70 = 1;
              goto LABEL_17;
            }
            v24 = v25 == 10;
            if ( v25 != 10 )
              v24 = v25 == 34;
            if ( v24 )
              break;
            ++v22;
            *++v18 = v25;
            if ( v22 == 1025 )
              goto LABEL_52;
          }
          v29 = v23;
          v15 = v25;
          v10 = v22;
          v9 = v21;
          v3 = v20;
          v4 = v29;
          v70 = 1;
          if ( v25 == 34 )
            v15 = sub_1C084((_DWORD *)dword_BA3D8);
        }
        goto LABEL_17;
      }
      if ( v9->d_tag )
      {
        if ( v14 == 10 )
          goto LABEL_16;
      }
      else if ( v14 == 59 )
      {
        goto LABEL_16;
      }
      if ( v14 == 34 )
      {
        v1 = v69;
        goto LABEL_44;
      }
      if ( *(_DWORD *)&byte_4[(_DWORD)v3] )
      {
        if ( v14 == 35 )
          break;
        goto LABEL_30;
      }
      if ( strchr(s, v14) )
      {
LABEL_16:
        v15 = v14;
        v1 = v69;
        goto LABEL_17;
      }
      if ( v14 == 35 )
        break;
LABEL_30:
      if ( ++v10 == 1025 )
      {
        v1 = v69;
LABEL_52:
        v27 = dword_BA3D8;
        *((_BYTE *)&word_32 + (_DWORD)nptr) = 0;
        sub_65D40(
          3,
          "configuration item on line %d longer than limit of %lu, began with '%s'",
          *(_DWORD *)(v27 + 16),
          50,
          nptr);
        if ( sub_1C69C() )
          exit(1024);
        v28 = v1[620];
        goto LABEL_54;
      }
      v14 = sub_1C084((_DWORD *)*v4);
      if ( v14 == -1 )
        goto LABEL_32;
    }
    v1 = v69;
    while ( 1 )
    {
      v17 = sub_1C084((_DWORD *)dword_BA3D8);
      if ( v17 == -1 )
        break;
      if ( v17 == 10 )
      {
        v15 = 10;
        goto LABEL_17;
      }
    }
LABEL_33:
    v15 = -1;
LABEL_17:
    v2 = (_DWORD *)dword_BA3D8;
    sub_1BE64(v15, (_DWORD *)dword_BA3D8);
    nptr[v10] = 0;
  }
  while ( !v10 );
  if ( dword_BA3DC )
    v16 = 0;
  else
    v16 = ((unsigned __int8)v70 ^ 1) & 1;
  if ( !v16 )
  {
    if ( *nptr != 45 )
      goto LABEL_23;
    v57 = *((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1);
    if ( v57 == 52 )
    {
      v7 = 325;
    }
    else
    {
      if ( v57 != 54 )
      {
LABEL_23:
        if ( dword_BA3DC == 1 )
          dword_BA3DC = 0;
        return (_DWORD *)sub_1C240();
      }
      v7 = 327;
    }
LABEL_7:
    v1[620]->d_tag = v7;
    return (_DWORD *)v7;
  }
  v30 = nptr;
  v31 = (unsigned __int8)*nptr;
  if ( !*nptr )
    goto LABEL_122;
  v32 = (unsigned __int8)*nptr;
  v7 = 940;
  while ( 1 )
  {
    while ( 1 )
    {
      v33 = *(&v1[400]->d_tag + v7);
      if ( (unsigned __int8)v33 == v32 )
        break;
      v7 = v33 >> 21;
      if ( !(v33 >> 21) )
        goto LABEL_70;
    }
    v34 = (unsigned __int8)*++v30;
    v32 = v34;
    if ( !v34 )
      break;
    v7 = (v33 >> 10) & 0x7FF;
    if ( !v7 )
      goto LABEL_70;
  }
  v56 = (v33 >> 8) & 3;
  if ( v56 != 3 )
  {
    dword_BA3DC = v56;
    if ( v7 == 407 && !v9->d_tag )
      dword_BA3DC = 0;
    goto LABEL_7;
  }
LABEL_70:
  v35 = &nptr[v31 == 45];
  v36 = (unsigned __int8)*v35;
  if ( !*v35 )
  {
LABEL_128:
    if ( v31 == 45 )
    {
LABEL_129:
      v59 = _errno_location();
      *v59 = 0;
      v60 = v59;
      v61 = strtol(nptr, 0, 10);
      v28 = v1[620];
      v28->d_tag = v61;
      if ( v61 )
        return off_13C + 3;
      v62 = *v60 == 22;
      if ( *v60 != 22 )
        v62 = *v60 == 34;
      if ( !v62 )
        return off_13C + 3;
      sub_65D40(3, "Integer cannot be represented: %s", nptr);
      goto LABEL_113;
    }
LABEL_122:
    if ( sscanf(nptr, "%u", &v71) != 1 )
    {
      v31 = (unsigned __int8)*nptr;
      goto LABEL_74;
    }
    if ( v71 < 0 )
    {
      v31 = (unsigned __int8)*nptr;
      goto LABEL_74;
    }
    goto LABEL_129;
  }
  while ( ((*v6)[v36] & 0x800) != 0 )
  {
    v37 = (unsigned __int8)*++v35;
    v36 = v37;
    if ( !v37 )
      goto LABEL_128;
  }
LABEL_74:
  if ( v31 != 48 )
  {
    if ( v31 )
      goto LABEL_76;
LABEL_110:
    v28 = v1[620];
    v58 = sscanf(nptr, "%u", v28);
LABEL_111:
    if ( v58 == 1 )
      return (_DWORD *)(byte_1A0 + 18);
    sub_65D40(3, "U_int cannot be represented: %s", nptr);
LABEL_113:
    if ( sub_1C69C() )
      goto LABEL_114;
LABEL_54:
    v28->d_tag = 0;
    return 0;
  }
  if ( (*_ctype_tolower_loc())[*((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1)] != 120 )
  {
LABEL_76:
    v38 = 0;
    v39 = v31;
    v40 = 0;
    goto LABEL_77;
  }
  v39 = *((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 2);
  if ( !*((_BYTE *)&dword_0 + (_DWORD)nptr + 2) )
    goto LABEL_118;
  v38 = 1;
  v40 = 2;
LABEL_77:
  v41 = *v6;
  v42 = &nptr[v40];
  while ( 2 )
  {
    v44 = v41[v39];
    if ( v38 )
    {
      if ( (v44 & 0x1000) == 0 )
        break;
      goto LABEL_79;
    }
    if ( (v44 & 0x800) != 0 )
    {
LABEL_79:
      v43 = (unsigned __int8)*++v42;
      v39 = v43;
      if ( v43 )
        continue;
      if ( v31 != 48 || (*_ctype_tolower_loc())[*((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1)] != 120 )
        goto LABEL_110;
LABEL_118:
      v28 = v1[620];
      v58 = sscanf(nptr + 2, "%x", v28);
      goto LABEL_111;
    }
    break;
  }
  v45 = (((_BYTE)v31 - 43) & 0xFD) == 0;
  v46 = (unsigned __int8)nptr[v45];
  v47 = &nptr[v45];
  if ( !nptr[v45] )
  {
    v48 = (unsigned __int8)nptr[v45];
    goto LABEL_87;
  }
  v48 = 0;
  while ( (v41[v46] & 0x800) != 0 )
  {
    v49 = (unsigned __int8)*++v47;
    v46 = v49;
    ++v48;
    ++v45;
    if ( !v49 )
      goto LABEL_87;
  }
  if ( v46 != 46 )
  {
LABEL_87:
    if ( !v48 )
      return (_DWORD *)sub_1C240();
    if ( nptr[v45] )
    {
      v50 = (unsigned __int8)nptr[v45];
      if ( (*_ctype_tolower_loc())[v50] != 101 )
        return (_DWORD *)sub_1C240();
      v51 = v45 + 1;
      v52 = (unsigned __int8)nptr[v45 + 1];
      if ( ((v52 - 43) & 0xFD) == 0 )
      {
        v51 = v45 + 2;
        v52 = (unsigned __int8)nptr[v45 + 2];
      }
      if ( v52 )
      {
        v53 = &nptr[v51];
        while ( (v41[v52] & 0x800) != 0 )
        {
          v54 = (unsigned __int8)*++v53;
          v52 = v54;
          if ( !v54 )
            goto LABEL_96;
        }
        return (_DWORD *)sub_1C240();
      }
    }
LABEL_96:
    v55 = _errno_location();
    *v55 = 0;
    strtod(nptr, 0);
    *(double *)v1[620] = v0;
    if ( v0 != 0.0 || *v55 != 34 )
      return &dword_120 + 1;
    sub_65D40(3, "Double too large to represent: %s", nptr);
LABEL_114:
    exit(1);
  }
  v63 = &nptr[++v45];
  v64 = (unsigned __int8)nptr[v45];
  if ( nptr[v45] )
  {
    while ( (v41[v64] & 0x800) != 0 )
    {
      v65 = (unsigned __int8)*++v63;
      v64 = v65;
      ++v48;
      ++v45;
      if ( !v65 )
        goto LABEL_139;
    }
    goto LABEL_87;
  }
LABEL_139:
  if ( v48 )
    goto LABEL_96;
  return (_DWORD *)sub_1C240();
}
