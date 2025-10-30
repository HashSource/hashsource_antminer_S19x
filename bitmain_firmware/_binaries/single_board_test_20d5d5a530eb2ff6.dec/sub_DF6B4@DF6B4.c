int __fastcall sub_DF6B4(
        unsigned __int8 *(__fastcall *a1)(unsigned __int8 *result),
        int (**a2)(const char *s1, const char *s2))
{
  int result; // r0
  int *v5; // r4
  int v6; // r5

  result = sub_E0740(96, "crypto/lhash/lhash.c", 51);
  v5 = (int *)result;
  if ( result )
  {
    v6 = sub_E0740(64, "crypto/lhash/lhash.c", 59);
    *v5 = v6;
    if ( v6 )
    {
      if ( !a2 )
        a2 = &strcmp;
      v5[1] = (int)a2;
      if ( !a1 )
        a1 = OPENSSL_LH_strhash;
      v5[2] = (int)a1;
      v5[3] = 8;
      v5[6] = 8;
      v5[4] = 16;
      v5[7] = 512;
      v5[8] = 256;
      return (int)v5;
    }
    else
    {
      CRYPTO_free(0, "crypto/lhash/lhash.c", 71);
      CRYPTO_free(v5, "crypto/lhash/lhash.c", 72);
      return 0;
    }
  }
  return result;
}
