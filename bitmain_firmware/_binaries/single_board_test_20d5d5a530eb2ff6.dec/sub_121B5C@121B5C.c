bool __fastcall sub_121B5C(unsigned __int8 *a1, size_t n, char *s2, int a4)
{
  size_t v6; // r7
  int v7; // r5
  unsigned __int8 *v8; // lr
  char *v9; // r4
  char *v10; // r2
  unsigned __int8 *v11; // r3
  size_t v12; // r12
  int v13; // r2
  unsigned __int8 *v14; // r12
  unsigned __int8 *v15; // lr
  unsigned int v16; // r10
  int v17; // t1
  int v18; // t1

  if ( n != a4 )
    return 0;
  if ( !n )
    return memcmp(a1, s2, n) == 0;
  v6 = n - 1;
  v7 = a1[n - 1];
  v8 = &a1[n - 1];
  if ( v7 != 64 )
  {
    v9 = &s2[v6];
    if ( s2[v6] != 64 )
    {
      v10 = &s2[n - 2];
      v11 = &a1[n - 2];
      do
      {
        v9 = v10;
        v8 = v11;
        --v10;
        if ( !v6 )
          return memcmp(a1, s2, n) == 0;
        v7 = *v11;
        --v6;
        --v11;
        if ( v7 == 64 )
          goto LABEL_12;
      }
      while ( *v9 != 64 );
    }
    v12 = n - v6;
    if ( n != v6 )
    {
      if ( !v7 )
        return v7;
      v13 = 64;
      goto LABEL_15;
    }
LABEL_25:
    if ( v6 )
      n = v6;
    return memcmp(a1, s2, n) == 0;
  }
LABEL_12:
  v12 = n - v6;
  v9 = &s2[v6];
  if ( n == v6 )
    goto LABEL_25;
  v13 = (unsigned __int8)s2[v6];
  v7 = 64;
LABEL_15:
  v14 = &v8[v12];
  v15 = v8 + 1;
  while ( 1 )
  {
    if ( v13 == v7 )
      goto LABEL_20;
    v16 = v13 - 65;
    if ( (unsigned __int8)(v7 - 65) <= 0x19u )
    {
      v7 = (unsigned __int8)(v7 + 32);
      if ( v16 > 0x19 )
        goto LABEL_19;
      goto LABEL_24;
    }
    if ( v16 > 0x19 )
      return 0;
LABEL_24:
    v13 = (unsigned __int8)(v13 + 32);
LABEL_19:
    if ( v7 != v13 )
      return 0;
LABEL_20:
    if ( v15 == v14 )
      goto LABEL_25;
    v17 = *v15++;
    v7 = v17;
    v18 = (unsigned __int8)*++v9;
    v13 = v18;
    if ( !v7 )
      return v7;
  }
}
