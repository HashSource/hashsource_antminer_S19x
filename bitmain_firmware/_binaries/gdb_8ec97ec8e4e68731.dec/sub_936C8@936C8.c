_DWORD *__fastcall sub_936C8(_DWORD *a1, const char ***a2)
{
  int v2; // r6
  _DWORD *v3; // r9
  const char **v5; // r5
  const char **v6; // r8
  const char *v7; // r7
  const char **i; // r5
  int v9; // r3
  const char *v10; // t1
  size_t v11; // r2
  int v12; // r3
  int v13; // r7
  unsigned int v14; // r6
  unsigned int v15; // r2

  v2 = 0;
  *((_BYTE *)a1 + 8) = 0;
  v3 = a1 + 2;
  v5 = *a2;
  v6 = a2[1];
  a1[1] = 0;
  *a1 = a1 + 2;
  if ( v6 != v5 )
  {
    v7 = *v5;
    if ( *v5 )
    {
      for ( i = v5 + 1; ; ++i )
      {
        if ( v7 )
        {
          v11 = strlen(v7);
          if ( v11 > 0x7FFFFFFF - v2 )
            sub_33D184("basic_string::append");
          sub_33C320(a1, v7, v11);
          v12 = *a1;
          v13 = a1[1];
          v14 = v13 + 1;
          if ( v3 == (_DWORD *)*a1 )
            v15 = 15;
          else
            v15 = a1[2];
          if ( v14 > v15 )
          {
            sub_33B4F8(a1, v13, 0);
            v12 = *a1;
          }
          *(_BYTE *)(v12 + v13) = 32;
          v9 = *a1;
          a1[1] = v14;
          *(_BYTE *)(v9 + v14) = 0;
          v2 = a1[1];
        }
        if ( v6 == i )
          break;
        v10 = *i;
        v7 = v10;
      }
      sub_33B5A4(a1, v2 - 1, 1);
    }
  }
  return a1;
}
