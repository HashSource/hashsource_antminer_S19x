void __fastcall sub_1714F4(void **a1)
{
  CRYPTO_free(*a1);
  CRYPTO_free(a1[1]);
  CRYPTO_free(a1);
}
