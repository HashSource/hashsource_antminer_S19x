int __fastcall sub_ED848(unsigned __int8 *a1, int *a2)
{
  void *v2; // r5
  int v3; // r2
  bool v4; // zf
  _BOOL4 v5; // r8
  int v8; // r7
  int v9; // r2
  bool v10; // zf
  unsigned __int8 *v11; // r3
  int v12; // t1
  bool v13; // zf
  int v15; // r3
  const char *v16; // r8
  bool v17; // zf
  const char *v18; // r4
  int v19; // r3
  bool v20; // zf
  const char *v21; // r9
  int v22; // r3
  bool v23; // zf
  const char *v24; // r8
  int v25; // t1
  int v26; // r2
  bool v27; // zf
  int v28; // r4
  char *v29; // r10
  bool v30; // zf
  char *v31; // r3
  int v32; // t1
  bool v33; // zf
  bool v34; // zf
  char v35; // r3
  int v36; // r3
  char *v37; // r2
  char *v38; // r8
  int v39; // t1
  bool v40; // zf
  int v41; // r9
  int v42; // r0
  signed int v43; // r0
  signed int v44; // r4
  int v45; // r4
  char *v46; // r6
  char *v47; // r4
  char v48; // r0
  int v49; // r9
  char v50; // t1
  int v51; // r0
  char v52; // r3
  unsigned __int8 *v53; // r4
  bool v54; // zf
  int v55; // r0
  int v56; // r10
  int v57; // r0
  char *v58; // r3
  int v59; // r2
  bool v60; // zf
  int v61; // r0

  *a2 = 0;
  v2 = a2 + 1;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  a2[4] = 0;
  if ( !a1 )
    return 1;
  v3 = *a1;
  v4 = v3 == 10;
  if ( v3 != 10 )
    v4 = v3 == 0;
  v5 = v4;
  if ( v4 )
    return 1;
  v8 = strncmp((const char *)a1, "Proc-Type:", 0xAu);
  if ( v8 )
  {
    v8 = v5;
    sub_D0048(9, 107, 107, (int)"crypto/pem/pem_lib.c", 496);
    return v8;
  }
  v9 = a1[10];
  v10 = v9 == 32;
  if ( v9 != 32 )
    v10 = v9 == 9;
  if ( v10 )
  {
    v11 = a1 + 11;
    do
    {
      v53 = v11;
      v12 = *v11++;
      v9 = v12;
      v13 = v12 == 9;
      if ( v12 != 9 )
        v13 = v9 == 32;
    }
    while ( v13 );
  }
  else
  {
    v53 = a1 + 10;
  }
  if ( v9 != 52 || v53[1] != 44 )
    return v8;
  v15 = v53[2];
  v16 = (const char *)(v53 + 2);
  v17 = v15 == 32;
  if ( v15 != 32 )
    v17 = v15 == 9;
  if ( v17 )
  {
    v18 = (const char *)(v53 + 3);
    do
    {
      v16 = v18++;
      v19 = *(unsigned __int8 *)v16;
      v20 = v19 == 32;
      if ( v19 != 32 )
        v20 = v19 == 9;
    }
    while ( v20 );
  }
  if ( strncmp(v16, "ENCRYPTED", 9u) || (v21 = v16 + 9, !strspn(v16 + 9, " \t\r\n")) )
  {
    sub_D0048(9, 107, 106, (int)"crypto/pem/pem_lib.c", 509);
    return v8;
  }
  v22 = *((unsigned __int8 *)v16 + 9);
  v23 = v22 == 32;
  if ( v22 != 32 )
    v23 = (v22 & 0xFB) == 9;
  if ( v23 )
  {
    v24 = v16 + 10;
    do
    {
      v21 = v24;
      v25 = *(unsigned __int8 *)v24++;
      v22 = v25;
      v26 = v25 & 0xFB;
      v27 = v25 == 32;
      if ( v25 != 32 )
        v27 = v26 == 9;
    }
    while ( v27 );
  }
  if ( v22 != 10 )
  {
    v8 = 0;
    sub_D0048(9, 107, 112, (int)"crypto/pem/pem_lib.c", 515);
    return v8;
  }
  v8 = strncmp(v21 + 1, "DEK-Info:", 9u);
  if ( v8 )
  {
    v8 = 0;
    sub_D0048(9, 107, 105, (int)"crypto/pem/pem_lib.c", 524);
    return v8;
  }
  v28 = *((unsigned __int8 *)v21 + 10);
  v29 = (char *)(v21 + 10);
  v30 = v28 == 32;
  if ( v28 != 32 )
    v30 = v28 == 9;
  if ( v30 )
  {
    v31 = (char *)(v21 + 11);
    do
    {
      v29 = v31;
      v32 = (unsigned __int8)*v31++;
      v28 = v32;
      v33 = v32 == 9;
      if ( v32 != 9 )
        v33 = v28 == 32;
    }
    while ( v33 );
  }
  if ( v28 )
  {
    v34 = v28 == 9;
    if ( v28 != 9 )
      v34 = v28 == 32;
    v35 = !v34;
    if ( v28 == 44 )
      v36 = 0;
    else
      v36 = v35 & 1;
    if ( v36 )
    {
      v37 = v29 + 1;
      while ( 1 )
      {
        v38 = v37;
        v39 = (unsigned __int8)*v37++;
        v28 = v39;
        v40 = v39 == 9;
        if ( v39 != 9 )
          v40 = v28 == 32;
        LOBYTE(v36) = !v40;
        if ( v28 == 44 )
          v36 = 0;
        if ( !v28 )
          break;
        if ( !v36 )
        {
          v54 = v28 == 9;
          if ( v28 != 9 )
            v54 = v28 == 32;
          v55 = (int)v29;
          *v38 = 0;
          v56 = v54;
          v57 = sub_D99BC(v55);
          *a2 = v57;
          v41 = v57;
          *v38 = v28;
          if ( v56 )
          {
            v58 = v38 + 1;
            do
            {
              v38 = v58++;
              v59 = (unsigned __int8)*v38;
              v60 = v59 == 32;
              if ( v59 != 32 )
                v60 = v59 == 9;
            }
            while ( v60 );
          }
          goto LABEL_71;
        }
      }
    }
    else
    {
      v38 = v29;
    }
    *v38 = 0;
    v41 = sub_D99BC((int)v29);
    *a2 = v41;
    *v38 = v28;
  }
  else
  {
    *v29 = 0;
    v61 = sub_D99BC((int)v29);
    v38 = v29;
    *a2 = v61;
    v41 = v61;
    *v29 = 0;
  }
LABEL_71:
  if ( !v41 )
  {
    sub_D0048(9, 107, 114, (int)"crypto/pem/pem_lib.c", 543);
    return v8;
  }
  v42 = sub_D8940(v41);
  if ( v42 > 0 )
  {
    if ( *v38 == 44 )
    {
      ++v38;
      goto LABEL_76;
    }
    sub_D0048(9, 107, 129, (int)"crypto/pem/pem_lib.c", 548);
    return v8;
  }
  if ( !v42 && *v38 == 44 )
  {
    sub_D0048(9, 107, 130, (int)"crypto/pem/pem_lib.c", 551);
    return v8;
  }
LABEL_76:
  v43 = sub_D8940(v41);
  v44 = v43;
  if ( v43 > 0 )
    memset(v2, 0, v43);
  v45 = 2 * v44;
  if ( v45 > 0 )
  {
    v46 = &v38[v45];
    v47 = v38;
    while ( 1 )
    {
      v49 = v47 - v38;
      v50 = *v47++;
      v51 = sub_E9F98(v50);
      v52 = v51;
      if ( v51 < 0 )
        break;
      if ( (v49 & 1) != 0 )
        v48 = 0;
      else
        v48 = 4;
      *((_BYTE *)v2 + (v49 >> 1)) |= v52 << v48;
      if ( v47 == v46 )
        return 1;
    }
    sub_D0048(9, 101, 103, (int)"crypto/pem/pem_lib.c", 573);
    return v8;
  }
  return 1;
}
