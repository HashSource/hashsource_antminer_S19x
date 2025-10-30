void **__fastcall sub_32462C(unsigned __int8 *a1, int *a2)
{
  _BYTE *v2; // r8
  int v4; // r3
  unsigned __int8 *v5; // r1
  int v6; // r0
  unsigned __int8 *i; // r2
  int v8; // t1
  int v9; // r6
  void **v10; // r0
  void **v11; // r9
  char *v12; // r10
  _BYTE *v13; // r3
  _BYTE *v14; // r4
  int v15; // r5
  size_t v16; // r4
  int v17; // r10
  void **v18; // r2
  int v20; // t1
  int v21; // t1
  int v22; // r5
  void *v23; // r0
  _BYTE *v24; // r0
  void *v25; // r0
  _BYTE *v26; // r0
  void **v27; // r0

  v2 = a1;
  v4 = *a1;
  v5 = a1;
  v6 = 0;
LABEL_2:
  for ( i = v5 + 1; ; ++i )
  {
    v9 = v4;
    v5 = i;
    if ( !v4 )
      break;
    if ( v4 == 47 )
    {
      v4 = *i;
      ++v6;
      if ( v4 == 47 )
      {
        do
        {
          v20 = *++v5;
          v4 = v20;
        }
        while ( v20 == 47 );
      }
      goto LABEL_2;
    }
    v8 = *i;
    v4 = v8;
  }
  v10 = (void **)malloc(4 * (v6 + 2));
  v11 = v10;
  if ( v10 )
  {
    v12 = (char *)(v10 - 1);
LABEL_9:
    v13 = v2;
    while ( 1 )
    {
      v14 = v13 + 1;
      v15 = (unsigned __int8)*v13;
      if ( !*v13 )
        break;
      ++v13;
      if ( v15 == 47 )
      {
        if ( *v14 == 47 )
        {
          do
            v21 = (unsigned __int8)*++v14;
          while ( v21 == 47 );
        }
        v22 = v14 - v2;
        ++v9;
        v23 = malloc(v14 - v2 + 1);
        v24 = memcpy(v23, v2, v14 - v2);
        v2 = v14;
        v24[v22] = 0;
        *((_DWORD *)v12 + 1) = v24;
        v12 += 4;
        goto LABEL_9;
      }
    }
    v16 = v13 - v2;
    v17 = v9;
    v18 = &v11[v9];
    if ( v13 - v2 > 0 )
    {
      ++v9;
      v25 = malloc(v16 + 1);
      v26 = memcpy(v25, v2, v16);
      v26[v16] = v15;
      v11[v17] = v26;
      v18 = &v11[v17 + 1];
    }
    *v18 = 0;
    if ( *(&v11[v9] + 0x3FFFFFFF) )
    {
      *a2 = v9;
    }
    else
    {
      v27 = v11;
      v11 = (void **)*(&v11[v9] + 0x3FFFFFFF);
      sub_3245F8(v27);
    }
  }
  return v11;
}
