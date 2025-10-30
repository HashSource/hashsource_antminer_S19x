int __fastcall sub_85670(void *src, signed int n, int a3)
{
  char *v5; // r0
  int v6; // r0
  int v7; // r4
  _BYTE dest[84]; // [sp+8h] [bp-54h] BYREF

  if ( n > 79 )
  {
    sub_D0048(20, 622, 185, "ssl/ssl_ciph.c", 1283);
    return 0;
  }
  else
  {
    v5 = (char *)memcpy(dest, src, n);
    dest[n] = 0;
    v6 = sub_82580(v5);
    v7 = v6;
    if ( !v6 )
    {
      sub_D0048(20, 622, 185, "ssl/ssl_ciph.c", 1292);
      return v7;
    }
    if ( sub_10BD3C(a3, v6) )
      return 1;
    sub_D0048(20, 622, 68, "ssl/ssl_ciph.c", 1297);
    return 0;
  }
}
