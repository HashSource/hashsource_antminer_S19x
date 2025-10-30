int __fastcall sub_84370(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  _DWORD *v4; // r4
  int v5; // r1

  if ( result )
  {
    v1 = (unsigned int *)(result + 264);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 - 1, v1) );
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 > 0 )
        return result;
    }
    else
    {
      __dmb(0xBu);
    }
    v4 = (_DWORD *)result;
    sub_DA240(*(_DWORD *)(result + 4));
    sub_84300((int)v4, v5);
    CRYPTO_free(v4[52], "ssl/ssl_cert.c", 239);
    CRYPTO_free(v4[54], "ssl/ssl_cert.c", 240);
    CRYPTO_free(v4[50], "ssl/ssl_cert.c", 241);
    sub_10F0FC(v4[59]);
    sub_10F0FC(v4[58]);
    sub_925E4(v4 + 60);
    CRYPTO_free(v4[65], "ssl/ssl_cert.c", 246);
    sub_10C574(v4[67]);
    return CRYPTO_free(v4, "ssl/ssl_cert.c", 249);
  }
  return result;
}
