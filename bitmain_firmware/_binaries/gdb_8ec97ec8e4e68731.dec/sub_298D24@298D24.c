_BYTE *__fastcall sub_298D24(int a1, int a2, unsigned __int8 *a3)
{
  void **v5; // r0
  void **v6; // r7
  unsigned int v7; // r1
  int v8; // r4
  void **v9; // r3
  void *v10; // t1
  int v11; // r6
  _BOOL4 v12; // r3
  int v13; // r1
  _BYTE *v14; // r6
  void **v15; // r4
  void **v16; // r5
  void *v17; // t1
  int v19; // r8
  const char **v20; // r5
  const char **v21; // r6
  const char **v22; // r9
  const char *v23; // t1
  size_t v24; // r8
  const char *v25; // t1
  size_t v26; // r0

  v5 = (void **)sub_298578(a3, -1, 0);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = (unsigned int)*v5;
  if ( *v5 )
  {
    v9 = v5;
    v8 = 0;
    do
    {
      v10 = v9[1];
      ++v9;
      v7 = ++v8;
    }
    while ( v10 );
  }
  else
  {
    v8 = 0;
  }
  if ( a2 < 0 )
    a2 = a2 + v8 - 1;
  if ( a1 < 0 )
    a1 = a1 + v8 - 1;
  if ( a2 == 36 )
  {
    v11 = v8;
    v12 = 0;
  }
  else
  {
    v11 = a2 + 1;
    v12 = v8 < v11;
  }
  if ( a1 == 36 )
    a1 = v8 - 1;
  if ( a1 >= v7 )
    v13 = v12 | 1;
  else
    v13 = v12;
  if ( v13 )
  {
    v14 = 0;
  }
  else
  {
    v19 = (a1 > v11) | ((unsigned int)v11 >> 31);
    if ( v19 )
    {
      v14 = 0;
    }
    else if ( a1 >= v11 )
    {
      v14 = sub_93028(1u);
      *v14 = 0;
    }
    else
    {
      v20 = (const char **)&v5[a1];
      v21 = (const char **)&v5[v11];
      v22 = v20;
      do
      {
        v23 = *v22++;
        v19 += 1 + strlen(v23);
      }
      while ( v21 != v22 );
      v14 = sub_93028(v19 + 1);
      v24 = 0;
      *v14 = 0;
      while ( 1 )
      {
        strcpy(&v14[v24], *v20);
        v25 = *v20++;
        v26 = v24 + strlen(v25);
        v24 = v26 + 1;
        if ( v22 == v20 )
          break;
        v14[v26] = 32;
        v14[v24] = 0;
      }
    }
  }
  if ( v8 )
  {
    v15 = &v6[v8];
    v16 = v6;
    do
    {
      v17 = *v16++;
      sub_297758(v17);
    }
    while ( v16 != v15 );
  }
  sub_297758(v6);
  return v14;
}
