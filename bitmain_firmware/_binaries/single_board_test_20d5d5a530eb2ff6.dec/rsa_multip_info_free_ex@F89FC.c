void __fastcall rsa_multip_info_free_ex(int **a1)
{
  sub_B87C8(a1[3]);
  CRYPTO_free(a1);
}
