int __fastcall sub_80B6C(const char *a1)
{
  const unsigned __int16 **v2; // r7
  const char *v3; // r0
  int v4; // r3
  const char *v5; // r4
  unsigned __int16 v6; // r5
  int v7; // r6
  int *v8; // r0
  int *v9; // r8
  unsigned int v10; // r9
  int v11; // r0
  char *v12; // r5
  unsigned int v13; // r4
  unsigned int v14; // t1
  int v15; // r2
  int v16; // r0
  int v17; // r2
  unsigned int j; // r1
  int v19; // t1
  char *v21; // r5
  int *v22; // r0
  int *v23; // r10
  char *v24; // r0
  const char *v25; // r8
  char *v26; // r4
  _BOOL4 v27; // r9
  char *v28; // r0
  int v29; // r4
  char *v30; // r2
  int v31; // r7
  const char *v32; // r2
  const char **p_endptr; // r1
  int v34; // r0
  char *v35; // r2
  char *v36; // r2
  char *v37; // r2
  char *v38; // r2
  int v39; // r3
  const unsigned __int16 *i; // r1
  int v41; // r3
  int v42; // r0
  int v43; // r0
  __int16 v44; // r12
  int *v45; // r3
  int v46; // r10
  int v47; // r8
  int v48; // r11
  int *v49; // r4
  unsigned int v50; // r0
  int v51; // r0
  int v52; // r4
  int v53; // t1
  bool v54; // zf
  int *v55; // r2
  char *v56; // [sp+14h] [bp-18h] BYREF
  char *endptr; // [sp+18h] [bp-14h] BYREF
  int v58; // [sp+1Ch] [bp-10h] BYREF
  char v59[4]; // [sp+20h] [bp-Ch] BYREF

  v2 = _ctype_b_loc();
  v3 = a1;
  do
  {
    v4 = *(unsigned __int8 *)v3;
    v5 = v3++;
    v6 = (*v2)[v4];
    v7 = v6 & 0x2000;
  }
  while ( (v6 & 0x2000) != 0 );
  if ( v4 == 80 )
  {
    v21 = _strdup(v5 + 1);
    v22 = _errno_location();
    v23 = v22;
    if ( !v21 )
    {
      v7 = -1;
      *v22 = 12;
      return v7;
    }
    v24 = strchr(v21, 84);
    v25 = v24;
    if ( v24 )
    {
      *v24 = 0;
      v26 = (char *)sub_7C420(v21);
      v25 = sub_7C420(v25 + 1);
      v27 = v25 != 0;
    }
    else
    {
      v26 = v21;
      v27 = 0;
    }
    v28 = strchr(v26, 45);
    if ( v28 )
    {
      v56 = v26;
      v29 = sub_7D81C(0, (const char **)&v56, v28, 31536000);
      v30 = strchr(++v56, 45);
      if ( v30 )
      {
        v31 = sub_7D81C(v29, (const char **)&v56, v30, 2592000);
        ++v56;
        v32 = &v56[strlen(v56)];
        p_endptr = (const char **)&v56;
        v34 = v31;
LABEL_40:
        v7 = sub_7D81C(v34, p_endptr, v32, (int)&off_15180);
LABEL_41:
        if ( *v23 )
          v27 = 0;
        if ( v27 )
        {
          v42 = sub_7D90C(v25);
          v7 = sub_7D768(v7, v42, 1);
        }
        goto LABEL_45;
      }
    }
    else if ( strpbrk(v26, "YMWD") )
    {
      endptr = v26;
      v35 = strchr(v26, 89);
      if ( v35 )
      {
        v7 = sub_7D81C(0, (const char **)&endptr, v35, 31536000);
        v26 = ++endptr;
      }
      else
      {
        v7 = 0;
      }
      v36 = strchr(v26, 77);
      if ( v36 )
      {
        v7 = sub_7D81C(v7, (const char **)&endptr, v36, 2592000);
        v26 = ++endptr;
      }
      v37 = strchr(v26, 87);
      if ( v37 )
      {
        v7 = sub_7D81C(v7, (const char **)&endptr, v37, (int)"ound.");
        v26 = ++endptr;
      }
      v38 = strchr(v26, 68);
      if ( v38 )
      {
        v7 = sub_7D81C(v7, (const char **)&endptr, v38, (int)&off_15180);
        v26 = ++endptr;
      }
      v39 = (unsigned __int8)*v26;
      for ( i = *v2; (i[v39] & 0x2000) != 0; v39 = (unsigned __int8)*v26 )
        endptr = ++v26;
      if ( !v39 )
        goto LABEL_41;
    }
    else if ( strlen(v26) == 8 )
    {
      v58 = *(_DWORD *)v26;
      v59[0] = 0;
      endptr = (char *)&v58;
      v43 = sub_7D81C(0, (const char **)&endptr, v59, 31536000);
      LOWORD(v58) = *((_WORD *)v26 + 2);
      endptr = (char *)&v58;
      BYTE2(v58) = 0;
      v34 = sub_7D81C(v43, (const char **)&endptr, (const char *)&v58 + 2, 2592000);
      v44 = *((_WORD *)v26 + 3);
      v32 = (char *)&v58 + 2;
      p_endptr = (const char **)&endptr;
      endptr = (char *)&v58;
      LOWORD(v58) = v44;
      BYTE2(v58) = 0;
      goto LABEL_40;
    }
    v7 = -1;
    *v23 = 22;
LABEL_45:
    free(v21);
    return v7;
  }
  if ( v4 == 84 )
    return sub_7D90C(v5 + 1);
  v8 = _errno_location();
  v9 = v8;
  if ( (v6 & 0x800) == 0 )
  {
    v7 = -1;
    *v8 = 22;
    return v7;
  }
  v10 = v6 & 0x2000;
  while ( 1 )
  {
    *v9 = 0;
    v11 = strtol(v5, &endptr, 10);
    v12 = endptr;
    if ( *v9 )
      goto LABEL_23;
    v13 = (unsigned __int8)*endptr;
    if ( v13 == 58 )
      break;
    if ( ((*v2)[v13] & 0x2000) != 0 )
    {
      do
      {
        v14 = (unsigned __int8)*++v12;
        v13 = v14;
      }
      while ( ((*v2)[v14] & 0x2000) != 0 );
    }
    if ( v13 == 89 )
      goto LABEL_49;
    if ( v13 <= 0x59 )
    {
      if ( v13 == 68 )
        goto LABEL_71;
      if ( v13 <= 0x44 )
      {
        v41 = v11;
        if ( !v13 )
          return sub_7D768(v7, v41, 1);
LABEL_23:
        v7 = -1;
        *v9 = 22;
        return v7;
      }
      if ( v13 == 77 )
      {
        if ( v10 > 1 )
          goto LABEL_23;
        v15 = 2592000;
        v10 = 2;
      }
      else
      {
        if ( v13 != 87 || v10 > 2 )
          goto LABEL_23;
        v15 = (int)"ound.";
        v10 = 3;
      }
    }
    else
    {
      if ( v13 == 109 )
      {
        if ( v10 == 6 )
          goto LABEL_23;
        v15 = 60;
        v10 = 6;
        goto LABEL_19;
      }
      if ( v13 <= 0x6D )
      {
        if ( v13 != 100 )
        {
          if ( v13 != 104 || v10 > 4 )
            goto LABEL_23;
          v15 = 3600;
          v10 = 5;
          goto LABEL_19;
        }
LABEL_71:
        if ( v10 > 3 )
          goto LABEL_23;
        v15 = (int)&off_15180;
        v10 = 4;
        goto LABEL_19;
      }
      if ( v13 != 115 )
      {
        if ( v13 != 121 )
          goto LABEL_23;
LABEL_49:
        if ( v10 )
          goto LABEL_23;
        v15 = 31536000;
        v10 = 1;
        goto LABEL_19;
      }
      v15 = 1;
      v10 = 7;
    }
LABEL_19:
    v16 = sub_7D768(v7, v11, v15);
    v17 = (unsigned __int8)v12[1];
    v7 = v16;
    v5 = v12 + 1;
    for ( j = (*v2)[v17]; (j & 0x2000) != 0; j = (*v2)[v19] )
    {
      v19 = *(unsigned __int8 *)++v5;
      v17 = v19;
    }
    if ( !v17 )
      return v7;
    if ( ((v10 != 7) & (j >> 11)) == 0 )
      goto LABEL_23;
  }
  if ( v10 == 6 )
    goto LABEL_23;
  v45 = v9;
  v46 = 3;
  v47 = (unsigned __int8)*endptr;
  v48 = v11;
  v49 = v45;
  while ( --v46 )
  {
    v50 = strtoul(v12 + 1, &endptr, 10);
    v12 = endptr;
    if ( *v49 || (v51 = sub_7D768(v50, v48, 60), v48 = v51, *v49) )
    {
      v41 = -1;
      return sub_7D768(v7, v41, 1);
    }
    if ( *v12 != 58 )
    {
      v9 = v49;
      v41 = v51;
      v52 = (unsigned __int8)*v12;
      goto LABEL_82;
    }
  }
  v55 = v49;
  v41 = v48;
  v52 = v47;
  v9 = v55;
LABEL_82:
  if ( ((*v2)[v52] & 0x2000) != 0 )
  {
    do
    {
      v53 = (unsigned __int8)*++v12;
      v52 = v53;
    }
    while ( ((*v2)[v53] & 0x2000) != 0 );
  }
  if ( v52 )
  {
    v41 = -1;
    *v9 = 22;
    return sub_7D768(v7, v41, 1);
  }
  v54 = v41 == 3600;
  if ( v41 >= 3600 )
    v54 = v10 == 5;
  if ( v54 )
    goto LABEL_23;
  return sub_7D768(v7, v41, 1);
}
