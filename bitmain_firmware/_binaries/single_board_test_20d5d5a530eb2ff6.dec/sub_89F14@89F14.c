int __fastcall sub_89F14(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int v4; // r4
  int v5; // r3
  int v6; // r0

  if ( result )
  {
    v1 = (unsigned int *)(result + 100);
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
    v4 = result;
    X509_VERIFY_PARAM_free(*(_DWORD *)(result + 256));
    CRYPTO_free(*(_DWORD *)(v4 + 512), "ssl/ssl_lib.c", 174);
    *(_DWORD *)(v4 + 512) = 0;
    CRYPTO_free(*(_DWORD *)(v4 + 516), "ssl/ssl_lib.c", 177);
    v5 = *(_DWORD *)(v4 + 20);
    *(_DWORD *)(v4 + 516) = 0;
    *(_BYTE *)(v4 + 520) = 0;
    if ( v5 )
      sub_8E404(v4, 0);
    sub_DC2BC(1, v4, v4 + 140);
    sub_DF748(*(_DWORD *)(v4 + 20));
    sub_10F0FC(*(_DWORD *)(v4 + 16));
    sub_BC4D4(*(_DWORD *)(v4 + 264));
    sub_10BDB4(*(_DWORD *)(v4 + 4));
    sub_10BDB4(*(_DWORD *)(v4 + 8));
    sub_10BDB4(*(_DWORD *)(v4 + 12));
    sub_84370(*(_DWORD *)(v4 + 192));
    sub_10BFDC(*(_DWORD *)(v4 + 164), X509_NAME_free);
    sub_10BFDC(*(_DWORD *)(v4 + 168), X509_NAME_free);
    sub_10BFDC(*(_DWORD *)(v4 + 152), X509_free);
    v6 = *(_DWORD *)(v4 + 528);
    *(_DWORD *)(v4 + 156) = 0;
    sub_10BDB4(v6);
    sub_A64F8(v4);
    sub_CDDF8(*(_DWORD *)(v4 + 292));
    CRYPTO_free(*(_DWORD *)(v4 + 356), "ssl/ssl_lib.c", 3285);
    CRYPTO_free(*(_DWORD *)(v4 + 364), "ssl/ssl_lib.c", 3286);
    CRYPTO_free(*(_DWORD *)(v4 + 376), "ssl/ssl_lib.c", 3288);
    sub_E1864(*(_DWORD *)(v4 + 328), "ssl/ssl_lib.c", 3289);
    sub_10C574(*(_DWORD *)(v4 + 536));
    return CRYPTO_free(v4, "ssl/ssl_lib.c", 3293);
  }
  return result;
}
