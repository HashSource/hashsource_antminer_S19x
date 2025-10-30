void __fastcall sub_DBD5C(const char *a1, int a2)
{
  int v4; // r7
  unsigned int *v5; // r5
  unsigned int *v6; // r8
  int v7; // r0
  unsigned int *v8; // r5
  const char *v9; // r6
  int v10; // r3
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r4
  int v14; // r3
  int v15; // r0
  bool v16; // zf
  int v17; // r9
  unsigned int *v18; // r1
  bool v19; // zf
  unsigned int *v20; // r1
  int v21; // r0
  bool v22; // zf
  char *v23; // r4
  char *v24; // r5
  int v25; // r6
  char *v26; // r6
  char *v27; // r3
  char *v28; // r4
  char *v29; // r5
  unsigned int v30; // lr
  unsigned int v31; // t1
  int v32; // r0
  char *i; // r2
  unsigned int v34; // r3
  int v35; // r1
  _BOOL4 v36; // r12
  unsigned int *v37; // r5
  unsigned int *v38; // r12
  unsigned int *j; // r2
  unsigned int v40; // r1
  bool v41; // zf
  unsigned int *v42; // r3
  int v43; // r6
  int v44; // t1
  const char *v45; // r0
  unsigned int *v46; // r4
  unsigned int *v47; // r0
  unsigned int v48; // r1
  unsigned int v49; // t1
  int v50; // r4
  bool v51; // zf
  unsigned int *v52; // [sp+4h] [bp-40h]
  int v53; // [sp+8h] [bp-3Ch]
  void *ptr; // [sp+Ch] [bp-38h] BYREF
  unsigned int *v55; // [sp+10h] [bp-34h]
  unsigned int *v56; // [sp+14h] [bp-30h]
  _DWORD s[10]; // [sp+18h] [bp-2Ch] BYREF
  char v58; // [sp+40h] [bp-4h] BYREF

  memset(s, 0, sizeof(s));
  if ( a1 )
  {
    v4 = 0;
    sub_19B9EC(&ptr, a1, 3);
    v5 = (unsigned int *)ptr;
    v6 = v55;
    ptr = 0;
    v55 = 0;
    v56 = 0;
    if ( v5 == v6 )
      sub_946E0("No breakpoint at %s.", a1);
    v7 = v5[1];
    v52 = v5;
  }
  else
  {
    sub_20DBE4(s);
    v7 = s[1];
    if ( !s[1] )
      sub_946E0("No source file specified.");
    ptr = 0;
    v5 = s;
    v55 = 0;
    v6 = (unsigned int *)&v58;
    v52 = 0;
    v4 = 1;
    v56 = 0;
  }
  v8 = v5 + 10;
  while ( 2 )
  {
    if ( v7 )
      v7 = sub_204308(v7);
    v9 = (const char *)v7;
    v10 = dword_478348;
    v53 = dword_478348;
    if ( !dword_478348 )
      goto LABEL_12;
    do
    {
      v11 = *(_DWORD *)(v10 + 12);
      if ( !v11 || (unsigned int)(v11 - 6) <= 3 || (v13 = *(_DWORD **)(v10 + 28)) == 0 )
      {
LABEL_10:
        v12 = v53;
        goto LABEL_11;
      }
      while ( 1 )
      {
        if ( *((_BYTE *)v8 - 11) )
        {
LABEL_21:
          v15 = v13[58];
          v16 = v15 == 0;
          if ( v15 )
            v16 = v9 == 0;
          if ( v16 || *(v8 - 10) != v13[12] )
            goto LABEL_16;
          v17 = 0;
          goto LABEL_26;
        }
        v14 = *(v8 - 5);
        if ( v14 )
        {
          if ( v13[12] == *(v8 - 10) && v14 == v13[13] )
            break;
        }
        if ( v4 )
          goto LABEL_21;
LABEL_16:
        v13 = (_DWORD *)*v13;
        if ( !v13 )
          goto LABEL_10;
      }
      v21 = sub_2142A0(v13[16]);
      if ( v21 )
        v17 = v13[16];
      else
        v17 = 1;
      if ( v21 )
        v17 = v17 == *(v8 - 7);
      if ( !v4 && !*((_BYTE *)v8 - 11) )
        goto LABEL_27;
      v15 = v13[58];
      v22 = v9 == 0;
      if ( v9 )
        v22 = v15 == 0;
      if ( v22 || *(v8 - 10) != v13[12] )
        goto LABEL_27;
LABEL_26:
      if ( v13[57] == *(v8 - 6) )
      {
        v45 = (const char *)sub_204308(v15);
        if ( !j_strcmp(v45, v9) )
        {
          v18 = v55;
          if ( v55 == v56 )
            goto LABEL_84;
          goto LABEL_29;
        }
      }
LABEL_27:
      if ( !v17 )
        goto LABEL_16;
      v18 = v55;
      if ( v55 == v56 )
      {
LABEL_84:
        sub_DFE1C(&ptr);
        goto LABEL_10;
      }
LABEL_29:
      v12 = v53;
      v19 = v18 == 0;
      v20 = v18 + 1;
      if ( !v19 )
        *(v20 - 1) = v53;
      v55 = v20;
      if ( !v19 )
        v12 = v53;
LABEL_11:
      v10 = *(_DWORD *)(v12 + 8);
      v53 = v10;
    }
    while ( v10 );
LABEL_12:
    if ( v8 != v6 )
    {
      v7 = v8[1];
      v8 += 10;
      continue;
    }
    break;
  }
  v23 = (char *)ptr;
  v24 = (char *)v55;
  if ( ptr == v55 )
  {
    if ( a1 )
      sub_946E0("No breakpoint at %s.", a1);
    sub_946E0("No breakpoint at this line.");
  }
  v25 = (char *)v55 - (_BYTE *)ptr;
  sub_CB348((int)ptr, v55, 2 * (31 - __clz(((char *)v55 - (_BYTE *)ptr) >> 2)), 0);
  if ( v25 <= 64 )
  {
    sub_CB5A0(v23, v24);
  }
  else
  {
    v26 = v23 + 64;
    sub_CB5A0(v23, v23 + 64);
    if ( v24 != v23 + 64 )
    {
      v27 = v23 + 68;
      v28 = v23 + 60;
      v29 = &v26[v24 - v27];
      do
      {
        v31 = *((_DWORD *)v28 + 1);
        v28 += 4;
        v30 = v31;
        v32 = *(_DWORD *)(v31 + 24);
        for ( i = v28; ; i -= 4 )
        {
          v34 = *((_DWORD *)i - 1);
          v35 = *(_DWORD *)(v34 + 24);
          if ( v32 >= v35 )
          {
            v36 = v34 > v30;
            if ( v32 > v35 )
              v36 = 0;
            if ( !v36 )
              break;
          }
          *(_DWORD *)i = v34;
        }
        *(_DWORD *)i = v30;
      }
      while ( v29 != v28 );
    }
  }
  v37 = (unsigned int *)ptr;
  v38 = v55;
  if ( v55 == ptr )
  {
    v46 = (unsigned int *)ptr;
  }
  else
  {
    for ( j = (unsigned int *)ptr; ; ++j )
    {
      v42 = j + 1;
      v46 = j + 1;
      if ( v55 == j + 1 )
        break;
      v40 = j[1];
      v41 = *j == v40;
      if ( *j == v40 )
        v41 = *(_DWORD *)(*j + 24) == *(_DWORD *)(v40 + 24);
      if ( v41 )
      {
        if ( v55 == j )
        {
          v46 = v55;
        }
        else
        {
          v47 = j + 2;
          while ( 1 )
          {
            v46 = v42;
            if ( v38 == v47 )
              break;
            while ( 1 )
            {
              v49 = *v47++;
              v48 = v49;
              v50 = *(_DWORD *)(v49 + 24);
              v51 = *j == v49;
              if ( *j == v49 )
                v51 = *(_DWORD *)(*j + 24) == v50;
              if ( v51 )
                break;
              j[1] = v48;
              j = v42++;
              v46 = v42;
              if ( v38 == v47 )
                goto LABEL_105;
            }
          }
LABEL_105:
          if ( v42 != v38 )
            v55 = v42;
        }
        break;
      }
    }
  }
  if ( (unsigned int)((char *)v46 - (char *)v37) > 7 )
  {
    a2 = 1;
    goto LABEL_69;
  }
  if ( a2 )
  {
LABEL_69:
    if ( (char *)v46 - (char *)v37 == 4 )
      sub_259858("Deleted breakpoint ");
    else
      sub_259858("Deleted breakpoints ");
    v37 = (unsigned int *)ptr;
    v46 = v55;
    if ( v55 == ptr )
    {
LABEL_94:
      sub_2592E0(10);
LABEL_76:
      v46 = (unsigned int *)ptr;
      goto LABEL_77;
    }
    do
    {
LABEL_72:
      v44 = *v37++;
      v43 = v44;
      if ( a2 )
        sub_259858("%d ", *(_DWORD *)(v43 + 24));
      ((void (__fastcall *)(int))loc_DB0B0)(v43);
    }
    while ( v46 != v37 );
    if ( !a2 )
      goto LABEL_76;
    goto LABEL_94;
  }
  if ( v37 != v46 )
    goto LABEL_72;
LABEL_77:
  if ( v46 )
    sub_339E64(v46);
  if ( v52 )
    sub_339E64(v52);
}
