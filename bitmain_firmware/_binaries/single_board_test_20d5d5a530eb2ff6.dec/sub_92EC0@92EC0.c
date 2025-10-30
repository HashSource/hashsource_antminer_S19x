int __fastcall sub_92EC0(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r3
  int v4; // r0
  unsigned __int8 *v5; // r3
  unsigned __int8 *v6; // r6
  int v7; // r7
  int v9; // r0

  v2 = a2[1];
  if ( !v2
    || (v4 = (int)*a2, v5 = v2 - 1, v6 = (unsigned __int8 *)**a2, v6 > v5)
    || (v7 = v4 + 1, v6 != v5)
    || (*a2 = &v6[v4 + 1], a2[1] = 0, !v6) )
  {
    sub_95494(a1, 50, 569, 110, "ssl/statem/extensions_srvr.c", 256);
    return 0;
  }
  if ( a1[35] )
    return 1;
  CRYPTO_free(a1[347], "ssl/statem/../packet_local.h", 453);
  a1[347] = 0;
  a1[346] = 0;
  v9 = sub_E9E68(v7, v6, "ssl/statem/../packet_local.h", 462);
  a1[347] = v9;
  if ( !v9 )
  {
    sub_95494(a1, 80, 569, 68, "ssl/statem/extensions_srvr.c", 265);
    return 0;
  }
  a1[346] = v6;
  return 1;
}
