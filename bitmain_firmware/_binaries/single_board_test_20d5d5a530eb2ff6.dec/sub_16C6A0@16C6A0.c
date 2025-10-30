void __fastcall sub_16C6A0(void **a1)
{
  if ( ((unsigned int)a1[8] & 1) != 0 )
  {
    CRYPTO_free(a1[1]);
    if ( *a1 == (void *)3 )
    {
      CRYPTO_free(a1[5]);
      CRYPTO_free(a1[6]);
      CRYPTO_free(a1[7]);
    }
  }
  CRYPTO_free(a1);
}
