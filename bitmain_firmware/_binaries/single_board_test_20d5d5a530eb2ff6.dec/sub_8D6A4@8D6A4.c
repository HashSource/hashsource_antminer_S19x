int __fastcall sub_8D6A4(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  _DWORD *v4; // r4
  int v5; // r1
  int v6; // r2

  if ( result )
  {
    v1 = (unsigned int *)(result + 424);
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
    sub_DC2BC(2, result, result + 448);
    sub_E07F8((int)(v4 + 18), 0x100u);
    sub_E07F8((int)(v4 + 83), 0x20u);
    X509_free(v4[103], v5, v6);
    sub_10BFDC(v4[104], X509_free);
    CRYPTO_free(v4[115], "ssl/ssl_sess.c", 765);
    CRYPTO_free(v4[116], "ssl/ssl_sess.c", 766);
    CRYPTO_free(v4[100], "ssl/ssl_sess.c", 768);
    CRYPTO_free(v4[101], "ssl/ssl_sess.c", 769);
    CRYPTO_free(v4[124], "ssl/ssl_sess.c", 772);
    CRYPTO_free(v4[121], "ssl/ssl_sess.c", 774);
    CRYPTO_free(v4[125], "ssl/ssl_sess.c", 775);
    sub_10C574(v4[128]);
    return sub_E0758((int)v4, 516, (size_t)"ssl/ssl_sess.c");
  }
  return result;
}
