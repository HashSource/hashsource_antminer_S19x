int __fastcall sub_AAE5C(int result)
{
  int v1; // r7
  int v2; // r4
  int v3; // r6
  int v4; // t1

  if ( result )
  {
    v1 = result;
    v2 = result + 20;
    v3 = result + 56;
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      v2 += 4;
      CRYPTO_free(v4, "ssl/ssl_conf.c", 928);
    }
    while ( v2 != v3 );
    CRYPTO_free(*(_DWORD *)(v1 + 4), "ssl/ssl_conf.c", 929);
    sub_10BFDC(*(_DWORD *)(v1 + 84), X509_NAME_free);
    return CRYPTO_free(v1, "ssl/ssl_conf.c", 931);
  }
  return result;
}
