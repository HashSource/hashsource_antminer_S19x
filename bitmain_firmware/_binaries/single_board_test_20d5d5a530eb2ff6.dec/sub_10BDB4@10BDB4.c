void __fastcall sub_10BDB4(void **a1)
{
  if ( a1 )
  {
    CRYPTO_free(a1[1]);
    CRYPTO_free(a1);
  }
}
