int __fastcall sub_285C20(const char ***a1, int a2)
{
  const char **v2; // r4
  bool v6; // zf
  int v7; // r6
  const char **v8; // r3
  const char *v9; // t1
  char *v10; // r7
  const char *v11; // r12
  const char **v12; // r3
  signed int j; // r1
  const char *v14; // t1
  const char *v15; // r0
  const char **v16; // r2
  size_t i; // r1
  const char *v18; // t1
  size_t v19; // r0
  char *v20; // r0
  char *v21; // r0
  const char *v22; // r1
  const char **v23; // r6
  const char **v24; // r11
  int v25; // r10
  const char *v26; // t1
  const char *v27; // r9
  const char *v28; // t1
  const char *v29; // t1
  size_t v30; // r0
  char **v31; // r0
  const char *v32; // r3
  char **v33; // r6
  const char **v34; // r1
  int v35; // r10
  int v36; // r2
  bool v37; // zf
  const char *v38; // t1
  char **v39; // r0
  const char **v40; // r0
  const char *v41; // r8
  char *s1; // [sp+4h] [bp-10h]
  _BYTE v43[5]; // [sp+Fh] [bp-5h] BYREF

  v2 = *a1;
  if ( !*a1 )
    return 0;
  if ( dword_470750 )
  {
    v15 = *v2;
    if ( *v2 )
    {
      v16 = v2;
      for ( i = 0; ; ++i )
      {
        v18 = v16[1];
        ++v16;
        if ( !v18 )
          break;
      }
      if ( dword_470754 )
      {
        qsort(v2 + 1, i, 4u, (__compar_fn_t)sub_29160C);
        v15 = *v2;
      }
    }
    v19 = strlen(v15);
    v20 = (char *)sub_93028(v19 + 1);
    v21 = strcpy(v20, *v2);
    v22 = v2[1];
    s1 = v21;
    if ( v22 )
    {
      v23 = v2 - 1;
      v24 = v2 + 1;
      v25 = 0;
      do
      {
        while ( 1 )
        {
          v28 = v23[1];
          ++v23;
          v27 = v28;
          if ( strcmp(v28, v22) )
            break;
          sub_297758(v27);
          *v23 = v43;
          v29 = v24[1];
          ++v24;
          v22 = v29;
          if ( !v29 )
            goto LABEL_36;
        }
        ++v25;
        v26 = v24[1];
        ++v24;
        v22 = v26;
      }
      while ( v26 );
LABEL_36:
      v30 = 4 * (v25 + 3);
    }
    else
    {
      v30 = 12;
    }
    v31 = (char **)sub_93028(v30);
    v32 = v2[1];
    v33 = v31;
    if ( v32 )
    {
      v34 = v2 + 1;
      v35 = 1;
      do
      {
        v36 = v35;
        v37 = v32 == v43;
        if ( v32 != v43 )
        {
          ++v35;
          v33[v36] = (char *)v32;
        }
        v38 = v34[1];
        ++v34;
        v32 = v38;
        v39 = &v33[v36];
        if ( !v37 )
          v39 = &v33[v36 + 1];
      }
      while ( v32 );
      *v39 = 0;
      if ( *v2 != v43 )
        sub_297758(*v2);
      *v33 = s1;
      if ( v35 == 2 )
      {
        v41 = v33[1];
        if ( !strcmp(s1, v41) )
        {
          sub_297758(v41);
          v33[1] = 0;
        }
      }
    }
    else
    {
      v31[1] = 0;
      if ( *v2 != v43 )
        sub_297758(*v2);
      *v33 = s1;
    }
    v40 = v2;
    v2 = (const char **)v33;
    sub_297758(v40);
  }
  v6 = off_48ACF8 == 0;
  if ( off_48ACF8 )
    v6 = a2 == 0;
  if ( v6 )
    goto LABEL_8;
  if ( v2[1] )
  {
    v8 = v2 + 1;
    v7 = 1;
    do
    {
      v9 = v8[1];
      ++v8;
      ++v7;
    }
    while ( v9 );
  }
  else
  {
    v7 = 1;
  }
  off_48ACF8(v2);
  v10 = (char *)*v2;
  if ( *v2 )
  {
    v11 = v2[1];
    if ( v11 )
    {
      v12 = v2 + 1;
      for ( j = 1; ; ++j )
      {
        v14 = v12[1];
        ++v12;
        if ( !v14 )
          break;
      }
      if ( j + 1 < v7 )
      {
        if ( j == 1 )
        {
          *v2 = v11;
          v2[1] = 0;
        }
        else
        {
          sub_2857A8((char **)v2, j, *v2);
        }
        free(v10);
      }
    }
LABEL_8:
    *a1 = v2;
    return 1;
  }
  free(v2);
  *a1 = 0;
  return 0;
}
