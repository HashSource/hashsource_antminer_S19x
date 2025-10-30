int sub_BBFA4()
{
  int result; // r0
  int v1; // r7
  unsigned int v2; // r8
  int v3; // r11
  unsigned int i; // r4
  int v5; // r5
  int v6; // r0

  result = dword_6DF3E8;
  if ( dword_6DF3E8 )
  {
    if ( dword_6DF3EC )
    {
      v1 = 0;
      v2 = 0;
      while ( 1 )
      {
        v3 = result + v1;
        CRYPTO_free(*(_DWORD *)(result + v1), "crypto/conf/conf_ssl.c", 49);
        for ( i = 0; *(_DWORD *)(v3 + 8) > i; ++i )
        {
          v5 = 8 * i;
          v6 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8 * i);
          CRYPTO_free(v6, "crypto/conf/conf_ssl.c", 51);
          CRYPTO_free(*(_DWORD *)(v5 + *(_DWORD *)(v3 + 4) + 4), "crypto/conf/conf_ssl.c", 52);
        }
        ++v2;
        CRYPTO_free(*(_DWORD *)(v3 + 4), "crypto/conf/conf_ssl.c", 54);
        v1 += 12;
        if ( dword_6DF3EC <= v2 )
          break;
        result = dword_6DF3E8;
      }
      result = dword_6DF3E8;
    }
    result = CRYPTO_free(result, "crypto/conf/conf_ssl.c", 56);
    dword_6DF3E8 = 0;
    dword_6DF3EC = 0;
  }
  return result;
}
