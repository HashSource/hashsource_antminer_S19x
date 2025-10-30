int __fastcall sub_91564(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r3
  int v4; // r2
  size_t v5; // r3
  size_t v6; // r6
  const void *v7; // r7
  unsigned __int8 *v8; // r2
  void *v9; // r0

  v2 = a2[1];
  if ( !v2
    || (v4 = (int)*a2, v5 = (size_t)(v2 - 1), v6 = **a2, v6 > v5)
    || (v7 = (const void *)(v4 + 1), v8 = (unsigned __int8 *)(v4 + 1 + v6), v6 != v5) )
  {
    sub_95494(a1, 50, 580, 110, "ssl/statem/extensions_clnt.c", 1377);
    return 0;
  }
  *a2 = v8;
  a2[1] = 0;
  if ( a1[35] )
    return 1;
  if ( v6 )
  {
    a1[346] = 0;
    CRYPTO_free(a1[347], "ssl/statem/extensions_clnt.c", 1389);
    v9 = (void *)CRYPTO_malloc(v6, "ssl/statem/extensions_clnt.c", 1390);
    a1[347] = v9;
    if ( v9 )
    {
      a1[346] = v6;
      memcpy(v9, v7, v6);
      return 1;
    }
    a1[346] = 0;
    sub_95494(a1, 80, 580, 68, "ssl/statem/extensions_clnt.c", 1394);
    return 0;
  }
  sub_95494(a1, 50, 580, 271, "ssl/statem/extensions_clnt.c", 1384);
  return 0;
}
