int __fastcall sub_8205C(const char *a1)
{
  const unsigned __int16 **v2; // r6
  const char *v3; // r0
  int v4; // r3
  const char *v5; // r5
  unsigned __int16 v6; // r2
  int j; // r4
  unsigned int v8; // r9
  int *v9; // r11
  int v10; // r0
  char *v11; // r8
  int v12; // r5
  unsigned int v13; // r3
  unsigned int v14; // t1
  int v15; // r2
  int v16; // r0
  int v17; // r3
  unsigned int v18; // r2
  int v19; // t1
  char *v21; // r0
  char *v22; // r9
  char *v23; // r0
  const char *v24; // r8
  char *v25; // r5
  char *v26; // r0
  int v27; // r4
  char *v28; // r2
  int v29; // r0
  int v30; // r5
  size_t v31; // r0
  _BOOL4 v32; // r3
  int v33; // r0
  int v34; // r1
  char *v35; // r2
  int v36; // r0
  char *v37; // r2
  int v38; // r0
  char *v39; // r2
  int v40; // r0
  char *v41; // r2
  int v42; // r0
  int v43; // r3
  const unsigned __int16 *i; // r1
  int v45; // r3
  int v46; // r2
  int v47; // r3
  unsigned int v48; // r0
  int v49; // r0
  const unsigned __int16 *v50; // r1
  int v51; // r3
  int v52; // t1
  bool v53; // zf
  int v54; // r0
  int v55; // r0
  __int16 v56; // r12
  int v57; // [sp+4h] [bp-20h]
  char *v58; // [sp+Ch] [bp-18h] BYREF
  char *endptr; // [sp+10h] [bp-14h] BYREF
  int v60; // [sp+14h] [bp-10h] BYREF
  char v61[4]; // [sp+18h] [bp-Ch] BYREF

  v2 = _ctype_b_loc();
  v3 = a1;
  do
  {
    v4 = *(unsigned __int8 *)v3;
    v5 = v3++;
    v6 = (*v2)[v4];
    j = v6 & 0x2000;
  }
  while ( (v6 & 0x2000) != 0 );
  if ( v4 == 80 )
  {
    v21 = _strdup(v5 + 1);
    v22 = v21;
    if ( !v21 )
    {
      j = -1;
      *_errno_location() = 12;
      return j;
    }
    v23 = strchr(v21, 84);
    v24 = v23;
    if ( v23 )
    {
      *v23 = j;
      v25 = (char *)sub_7D7B4(v22);
      v24 = sub_7D7B4(v24 + 1);
    }
    else
    {
      v25 = v22;
    }
    v26 = strchr(v25, 45);
    if ( v26 )
    {
      v58 = v25;
      v27 = sub_7EC68(0, (const char **)&v58, v26, 31536000);
      v28 = strchr(++v58, 45);
      if ( v28 )
      {
        v29 = sub_7EC68(v27, (const char **)&v58, v28, 2592000);
        ++v58;
        v30 = v29;
        v31 = strlen(v58);
        j = sub_7EC68(v30, (const char **)&v58, &v58[v31], (int)&loc_15180);
LABEL_39:
        v32 = *_errno_location() == 0;
        if ( !v24 )
          v32 = 0;
        if ( v32 )
        {
          v33 = sub_7ED54(v24);
          j = sub_7EBB0(j, v33, 1);
        }
        goto LABEL_43;
      }
    }
    else
    {
      if ( !strpbrk(v25, "YMWD") )
      {
        if ( strlen(v25) == 8 )
        {
          v60 = *(_DWORD *)v25;
          v61[0] = 0;
          endptr = (char *)&v60;
          v54 = sub_7EC68(0, (const char **)&endptr, v61, 31536000);
          LOWORD(v60) = *((_WORD *)v25 + 2);
          BYTE2(v60) = 0;
          endptr = (char *)&v60;
          v55 = sub_7EC68(v54, (const char **)&endptr, (const char *)&v60 + 2, 2592000);
          v56 = *((_WORD *)v25 + 3);
          BYTE2(v60) = 0;
          endptr = (char *)&v60;
          LOWORD(v60) = v56;
          j = sub_7EC68(v55, (const char **)&endptr, (const char *)&v60 + 2, (int)&loc_15180);
          goto LABEL_39;
        }
        j = -1;
        *_errno_location() = 22;
LABEL_43:
        free(v22);
        return j;
      }
      endptr = v25;
      v35 = strchr(v25, 89);
      if ( v35 )
      {
        v36 = sub_7EC68(0, (const char **)&endptr, v35, 31536000);
        v25 = ++endptr;
        j = v36;
      }
      else
      {
        j = 0;
      }
      v37 = strchr(v25, 77);
      if ( v37 )
      {
        v38 = sub_7EC68(j, (const char **)&endptr, v37, 2592000);
        v25 = ++endptr;
        j = v38;
      }
      v39 = strchr(v25, 87);
      if ( v39 )
      {
        v40 = sub_7EC68(
                j,
                (const char **)&endptr,
                v39,
                (int)"iguration item on line %d longer than limit of %lu, began with '%s'");
        v25 = ++endptr;
        j = v40;
      }
      v41 = strchr(v25, 68);
      if ( v41 )
      {
        v42 = sub_7EC68(j, (const char **)&endptr, v41, (int)&loc_15180);
        v25 = ++endptr;
        j = v42;
      }
      v43 = (unsigned __int8)*v25;
      for ( i = *v2; (i[v43] & 0x2000) != 0; v43 = (unsigned __int8)*v25 )
        endptr = ++v25;
      if ( !v43 )
        goto LABEL_39;
    }
    j = -1;
    *_errno_location() = 22;
    goto LABEL_43;
  }
  if ( v4 == 84 )
    return sub_7ED54(v5 + 1);
  if ( ((*v2)[v4] & 0x800) == 0 )
  {
    j = -1;
    *_errno_location() = 22;
    return j;
  }
  v8 = v6 & 0x2000;
  v9 = _errno_location();
  while ( 1 )
  {
    *v9 = 0;
    v10 = strtol(v5, &endptr, 10);
    v11 = endptr;
    v12 = v10;
    if ( *v9 )
      goto LABEL_23;
    v13 = (unsigned __int8)*endptr;
    if ( v13 == 58 )
      break;
    if ( ((*v2)[v13] & 0x2000) != 0 )
    {
      do
      {
        v14 = (unsigned __int8)*++v11;
        v13 = v14;
      }
      while ( ((*v2)[v14] & 0x2000) != 0 );
    }
    if ( v13 == 89 )
      goto LABEL_47;
    if ( v13 <= 0x59 )
    {
      if ( v13 == 68 )
        goto LABEL_54;
      if ( v13 <= 0x44 )
      {
        if ( !v13 )
          goto LABEL_52;
LABEL_23:
        j = -1;
        *v9 = 22;
        return j;
      }
      if ( v13 == 77 )
      {
        if ( v8 > 1 )
          goto LABEL_23;
        v15 = 2592000;
        v8 = 2;
      }
      else
      {
        if ( v13 != 87 || v8 > 2 )
          goto LABEL_23;
        v15 = (int)"iguration item on line %d longer than limit of %lu, began with '%s'";
        v8 = 3;
      }
    }
    else
    {
      if ( v13 == 109 )
      {
        if ( v8 == 6 )
          goto LABEL_23;
        v15 = 60;
        v8 = 6;
        goto LABEL_19;
      }
      if ( v13 <= 0x6D )
      {
        if ( v13 != 100 )
        {
          if ( v13 != 104 || v8 > 4 )
            goto LABEL_23;
          v15 = 3600;
          v8 = 5;
          goto LABEL_19;
        }
LABEL_54:
        if ( v8 > 3 )
          goto LABEL_23;
        v15 = (int)&loc_15180;
        v8 = 4;
        goto LABEL_19;
      }
      if ( v13 != 115 )
      {
        if ( v13 != 121 )
          goto LABEL_23;
LABEL_47:
        if ( v8 )
          goto LABEL_23;
        v15 = 31536000;
        v8 = 1;
        goto LABEL_19;
      }
      v15 = 1;
      v8 = 7;
    }
LABEL_19:
    v16 = sub_7EBB0(j, v10, v15);
    v17 = (unsigned __int8)v11[1];
    v5 = v11 + 1;
    v18 = (*v2)[v17];
    for ( j = v16; (v18 & 0x2000) != 0; v18 = (*v2)[v19] )
    {
      v19 = *(unsigned __int8 *)++v5;
      v17 = v19;
    }
    if ( !v17 )
      return j;
    if ( ((v8 != 7) & (v18 >> 11)) == 0 )
      goto LABEL_23;
  }
  if ( v8 == 6 )
    goto LABEL_23;
  v45 = 3;
  while ( 1 )
  {
    v46 = (unsigned __int8)*v11;
    if ( v46 != 58 )
      break;
    v47 = v45 - 1;
    if ( !v47 )
    {
      v50 = *v2;
      if ( ((*v2)[58] & 0x2000) != 0 )
      {
        do
        {
LABEL_82:
          v52 = (unsigned __int8)*++v11;
          v51 = v52;
        }
        while ( (v50[v52] & 0x2000) != 0 );
        goto LABEL_83;
      }
      goto LABEL_93;
    }
    v57 = v47;
    v48 = strtoul(v11 + 1, &endptr, 10);
    v11 = endptr;
    if ( !*v9 )
    {
      v49 = sub_7EBB0(v48, v12, 60);
      v45 = v57;
      v12 = v49;
      if ( !*v9 )
        continue;
    }
    goto LABEL_80;
  }
  v50 = *v2;
  v51 = (unsigned __int8)*v11;
  if ( ((*v2)[v46] & 0x2000) != 0 )
    goto LABEL_82;
LABEL_83:
  if ( v51 )
  {
LABEL_93:
    *v9 = 22;
LABEL_80:
    v34 = -1;
    return sub_7EBB0(j, v34, 1);
  }
  v53 = v12 == 3600;
  if ( v12 >= 3600 )
    v53 = v8 == 5;
  if ( v53 )
    goto LABEL_23;
LABEL_52:
  v34 = v12;
  return sub_7EBB0(j, v34, 1);
}
