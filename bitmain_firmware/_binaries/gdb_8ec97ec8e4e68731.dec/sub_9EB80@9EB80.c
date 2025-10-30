char *__fastcall sub_9EB80(const char *a1)
{
  char *v1; // r4
  int v2; // r5
  size_t v3; // r3
  bool v4; // zf
  unsigned int v5; // r3
  _BYTE *v6; // r6
  _BYTE *v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r5
  unsigned int v12; // r2
  unsigned int v13; // r3
  int v14; // r1
  char *v15; // r1
  int v16; // r3
  int v17; // t1
  int v18; // r3
  int v19; // r6
  bool v20; // cf
  char *v21; // r5
  _BYTE *v22; // r9
  int v23; // r7
  int v24; // r8
  int v25; // t1
  int v26; // r5
  int v27; // r6
  int v28; // r9
  char *v29; // r8
  _BOOL4 v30; // r3
  _BOOL4 v31; // r9
  int v32; // r10
  char *v33; // r11
  int v34; // r7
  int v35; // r3
  char *v36; // r1
  int v37; // t1
  int v38; // r10
  char *v39; // r10
  char *v40; // r11
  int v41; // t1
  int v42; // r0
  unsigned int v43; // r3
  int v44; // r11
  char **v45; // r10
  size_t v46; // r2
  int v47; // r8
  const char *v48; // r9
  const char *v49; // t1
  const char *v50; // r0
  int v51; // r11
  const char *v52; // r7
  _BYTE *v53; // r5
  int v54; // r5
  _BYTE *v55; // r8
  int v56; // t1
  int v57; // r0
  int v58; // r7
  char *v59; // r1
  int v60; // r3
  int v61; // t1
  bool v62; // zf
  int v63; // r3
  int v64; // r2
  char *v65; // r1
  int v66; // t1
  bool v67; // zf
  int v68; // r3
  int v69; // r6
  char *s1; // [sp+4h] [bp-20h]
  int v71; // [sp+8h] [bp-1Ch]
  int v72; // [sp+1Ch] [bp-8h] BYREF

  v1 = (char *)a1;
  if ( !strncmp(a1, "_ada_", 5u) )
    v1 += 5;
  v2 = (unsigned __int8)*v1;
  v3 = strlen(v1);
  v4 = v2 == 60;
  if ( v2 != 60 )
    v4 = v2 == 95;
  if ( v4 )
    goto LABEL_7;
  v72 = v3;
  sub_9DFAC((unsigned __int8 *)v1, &v72);
  sub_9AD80((int)v1, &v72);
  v10 = sub_338BD4(v1, "___");
  v11 = v72;
  if ( v10 && v10 - (int)v1 < v72 - 3 )
  {
    if ( *(_BYTE *)(v10 + 3) != 88 )
      goto LABEL_18;
    v11 = v10 - (_DWORD)v1;
    v72 = v10 - (_DWORD)v1;
  }
  if ( v11 <= 3 )
  {
LABEL_21:
    if ( v11 <= 2 )
      goto LABEL_22;
    goto LABEL_143;
  }
  v19 = v11 - 3;
  if ( !strncmp(&v1[v11 - 3], "TKB", 3u) )
  {
    v11 -= 3;
    v72 = v19;
    goto LABEL_21;
  }
LABEL_143:
  v69 = v11 - 2;
  if ( strncmp(&v1[v11 - 2], "TB", 2u) )
  {
    v12 = dword_477C94;
    v6 = (_BYTE *)dword_477C98;
    goto LABEL_138;
  }
  v11 -= 2;
  v72 = v69;
LABEL_22:
  v12 = dword_477C94;
  v6 = (_BYTE *)dword_477C98;
  if ( v11 <= 1 )
  {
    v13 = 2 * v11 + 1;
    if ( v13 <= dword_477C94 )
      goto LABEL_45;
    goto LABEL_24;
  }
LABEL_138:
  v14 = (unsigned __int8)v1[v11 - 1];
  if ( v14 != 66 )
  {
    v13 = 2 * v11 + 1;
    if ( v13 <= v12 )
      goto LABEL_29;
    goto LABEL_24;
  }
  v72 = v11 - 1;
  v13 = 2 * (v11 - 1) + 1;
  if ( v13 > v12 )
  {
LABEL_24:
    if ( 2 * v12 >= v13 )
      v13 = 2 * v12;
    dword_477C94 = v13;
    v6 = sub_9D470(v6, &dword_477C94, 1);
    dword_477C98 = (int)v6;
  }
  v11 = v72;
  if ( v72 <= 1 )
    goto LABEL_45;
  v14 = (unsigned __int8)v1[v72 - 1];
LABEL_29:
  if ( (unsigned int)(v14 - 48) > 9 )
  {
LABEL_44:
    v11 = v72;
  }
  else
  {
    v11 -= 2;
    v15 = &v1[v11];
    do
    {
      v17 = (unsigned __int8)*v15--;
      v16 = v17;
      if ( (unsigned int)(v17 - 48) > 9 )
      {
        if ( !v11 || v16 != 95 )
          goto LABEL_42;
        v18 = (unsigned __int8)*v15;
        if ( (unsigned int)(v18 - 48) > 9 )
        {
          if ( v11 != 1 && v18 == 95 )
          {
            v72 = v11 - 1;
            goto LABEL_46;
          }
          goto LABEL_44;
        }
      }
      v20 = v11-- != 0;
    }
    while ( v20 );
    v16 = (unsigned __int8)*(v1 - 1);
LABEL_42:
    if ( v16 != 36 )
      goto LABEL_44;
    v72 = v11;
  }
LABEL_45:
  if ( v11 <= 0 )
  {
    v53 = v6;
    goto LABEL_110;
  }
LABEL_46:
  v21 = v1 - 1;
  v22 = v6 - 1;
  v23 = 0;
  while ( 1 )
  {
    v25 = (unsigned __int8)*++v21;
    v24 = v25;
    if ( isalpha(v25) )
      break;
    *++v22 = v24;
    if ( v72 <= ++v23 )
      goto LABEL_145;
  }
  v71 = v72;
  if ( v23 >= v72 )
  {
LABEL_145:
    v53 = &v6[v23];
    goto LABEL_110;
  }
  s1 = v6;
  v26 = v23;
  v27 = v23;
LABEL_51:
  if ( v24 != 79 )
  {
LABEL_52:
    v28 = v71;
LABEL_53:
    v29 = &s1[v26 - 1];
    while ( 1 )
    {
      v32 = v27;
      v33 = &v1[v27];
      if ( v28 - 4 > v27 && !strncmp(&v1[v27], "TK__", 4u) )
      {
        v27 += 2;
        v32 = v27;
        v33 = &v1[v27];
      }
      v34 = (unsigned __int8)*v33;
      if ( v28 - v27 <= 5 )
        break;
      if ( v34 != 95 )
        goto LABEL_55;
      if ( v33[1] != 95 )
        goto LABEL_70;
      if ( v33[2] != 66 || v33[3] != 95 || (unsigned int)(unsigned __int8)v33[4] - 48 > 9 )
        goto LABEL_71;
      v35 = v27 + 5;
      if ( v27 + 5 < v28 && (unsigned int)(unsigned __int8)v1[v35] - 48 <= 9 )
      {
        v36 = &v1[v35];
        while ( ++v35 != v28 )
        {
          v37 = (unsigned __int8)*++v36;
          if ( (unsigned int)(v37 - 48) > 9 )
            goto LABEL_83;
        }
LABEL_70:
        if ( v33[1] != 69 )
          goto LABEL_71;
        if ( (unsigned int)(unsigned __int8)v33[2] - 48 > 9 )
          goto LABEL_71;
        v63 = v27 + 3;
        if ( v27 + 3 >= v28 )
          goto LABEL_71;
        v64 = (unsigned __int8)v1[v63];
        if ( (unsigned int)(v64 - 48) <= 9 )
        {
          v65 = &v1[v63];
          while ( ++v63 != v28 )
          {
            v66 = (unsigned __int8)*++v65;
            v64 = v66;
            if ( (unsigned int)(v66 - 48) > 9 )
              goto LABEL_129;
          }
          goto LABEL_71;
        }
LABEL_129:
        v67 = v64 == 98;
        if ( v64 != 98 )
          v67 = v64 == 115;
        if ( !v67 )
          goto LABEL_71;
        v68 = v63 + 1;
        if ( v68 != v28 )
        {
          if ( v68 < v28 )
          {
            v34 = (unsigned __int8)v1[v68];
            v32 = v68;
            if ( v34 == 95 )
            {
              v27 = v68;
              goto LABEL_60;
            }
          }
          goto LABEL_71;
        }
        v32 = v28;
        v34 = (unsigned __int8)v1[v28];
        v27 = v28;
        goto LABEL_55;
      }
LABEL_83:
      if ( v28 - v35 <= 2 )
        goto LABEL_71;
      v32 = v35;
      if ( v1[v35] != 95 )
        goto LABEL_71;
      v34 = (unsigned __int8)v1[v35 + 1];
      if ( v34 != 95 )
        goto LABEL_71;
      if ( v28 - v35 != 3 )
      {
        v27 = v35;
LABEL_71:
        v32 = v27;
        v34 = (unsigned __int8)v1[v27];
        goto LABEL_57;
      }
      v27 = v35;
LABEL_55:
      if ( v28 + 2 >= v27 && v34 == 78 )
      {
        if ( v1[v32 + 1] != 95 || v1[v32 + 2] != 95 )
          goto LABEL_63;
        v38 = v32 - 1;
        v20 = __CFADD__(v1, v38);
        v39 = &v1[v38];
        if ( !v20 )
        {
          while ( 1 )
          {
            v40 = v39;
            v41 = (unsigned __int8)*v39--;
            v34 = v41;
            v42 = v41;
            if ( (unsigned int)(v41 - 48) > 9 && (!isalpha(v42) || !islower(v34)) )
              break;
            if ( v1 > v39 )
              goto LABEL_98;
          }
          v43 = (unsigned int)v40;
          v44 = v34;
          LOBYTE(v34) = 78;
          if ( (unsigned int)v1 <= v43 && ((unsigned int)v1 >= v43 || v44 != 95 || *(_BYTE *)(v43 - 1) != 95) )
            goto LABEL_63;
        }
LABEL_98:
        v34 = (unsigned __int8)v1[++v27];
        v32 = v27;
      }
LABEL_57:
      v30 = v34 == 88;
      if ( !v27 )
        v30 = 0;
      if ( v30 )
      {
        if ( isalnum((unsigned __int8)v1[v32 - 1]) )
        {
          v58 = v27;
          v6 = s1;
          v59 = &v1[v58];
          while ( ++v58 < v28 )
          {
            v61 = (unsigned __int8)*++v59;
            v60 = v61;
            v62 = v61 == 98;
            if ( v61 != 98 )
              v62 = v60 == 110;
            if ( !v62 )
              goto LABEL_18;
          }
          goto LABEL_109;
        }
        LOBYTE(v34) = 88;
        goto LABEL_63;
      }
LABEL_60:
      v31 = v28 - 2 > v27;
      if ( v34 != 95 )
        v31 = 0;
      if ( v31 )
      {
        if ( v1[v32 + 1] == 95 )
        {
          v27 += 2;
          s1[v26++] = 46;
          v71 = v72;
          if ( v27 >= v72 )
            goto LABEL_108;
          v24 = (unsigned __int8)v1[v27];
          goto LABEL_51;
        }
        LOBYTE(v34) = 95;
      }
LABEL_63:
      *++v29 = v34;
      ++v27;
      v28 = v72;
      ++v26;
      if ( v72 <= v27 )
        goto LABEL_108;
    }
    if ( v28 - v27 <= 3 || v34 != 95 )
      goto LABEL_55;
    goto LABEL_70;
  }
  v45 = off_374070;
  v46 = 4;
  v47 = 0;
  v48 = "Oadd";
  while ( 1 )
  {
    v51 = v46 + v27;
    if ( !strncmp(v48 + 1, &v1[v27 + 1], v46 - 1) && !isalnum((unsigned __int8)v1[v51]) )
      break;
    v49 = v45[3];
    v45 += 3;
    v48 = v49;
    ++v47;
    v50 = v49;
    if ( !v49 )
      goto LABEL_52;
    v46 = strlen(v50);
  }
  v52 = *(const char **)&asc_373FF8[12 * v47 + 124];
  strcpy(&s1[v26], v52);
  v28 = v72;
  v26 += strlen(v52);
  if ( v72 > v51 )
  {
    v27 = v51;
    goto LABEL_53;
  }
LABEL_108:
  v6 = s1;
LABEL_109:
  v53 = &v6[v26];
LABEL_110:
  *v53 = 0;
  v54 = (unsigned __int8)*v6;
  if ( !*v6 )
  {
LABEL_146:
    if ( !strcmp(v6, v1) )
      return v1;
    return v6;
  }
  v55 = v6;
  while ( 1 )
  {
    v57 = isupper(v54) != 0;
    if ( v54 == 32 )
      v57 |= 1u;
    if ( v57 )
      break;
    v56 = (unsigned __int8)*++v55;
    v54 = v56;
    if ( !v56 )
      goto LABEL_146;
  }
LABEL_18:
  v3 = strlen(v1);
LABEL_7:
  v5 = v3 + 3;
  v6 = (_BYTE *)dword_477C98;
  if ( v5 > dword_477C94 )
  {
    if ( 2 * dword_477C94 >= v5 )
      v5 = 2 * dword_477C94;
    dword_477C94 = v5;
    v8 = sub_9D470((void *)dword_477C98, &dword_477C94, 1);
    v9 = (unsigned __int8)*v1;
    v6 = v8;
    dword_477C98 = (int)v8;
    if ( v9 == 60 )
      goto LABEL_14;
LABEL_9:
    sub_93170(v6, dword_477C94, "<%s>", v1);
    return v6;
  }
  if ( *v1 != 60 )
    goto LABEL_9;
LABEL_14:
  strcpy(v6, v1);
  return v6;
}
