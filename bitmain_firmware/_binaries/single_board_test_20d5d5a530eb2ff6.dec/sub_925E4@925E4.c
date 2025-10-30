int __fastcall sub_925E4(_DWORD *a1)
{
  unsigned int v1; // r2
  _DWORD *v2; // r4
  unsigned int v4; // r5
  int (__fastcall *v5)(int, int, int, int, int, int, int, int, int); // r3
  _DWORD *v6; // r0

  v1 = a1[1];
  v2 = (_DWORD *)*a1;
  if ( v1 )
  {
    v4 = 0;
    do
    {
      v5 = (int (__fastcall *)(int, int, int, int, int, int, int, int, int))v2[4];
      ++v4;
      __pld(v2 + 58);
      if ( v5 == sub_922A8 )
      {
        CRYPTO_free(v2[6], "ssl/statem/extensions_cust.c", 330);
        CRYPTO_free(v2[8], "ssl/statem/extensions_cust.c", 331);
        v1 = a1[1];
      }
      v2 += 9;
    }
    while ( v4 < v1 );
    v6 = (_DWORD *)*a1;
  }
  else
  {
    v6 = (_DWORD *)*a1;
  }
  return CRYPTO_free(v6, "ssl/statem/extensions_cust.c", 333);
}
