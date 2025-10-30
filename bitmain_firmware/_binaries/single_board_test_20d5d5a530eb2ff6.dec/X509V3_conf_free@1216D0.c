void __fastcall X509V3_conf_free(void **a1)
{
  if ( a1 )
  {
    CRYPTO_free(a1[1]);
    CRYPTO_free(a1[2]);
    CRYPTO_free(*a1);
    CRYPTO_free(a1);
  }
}
