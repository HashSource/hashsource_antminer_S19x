int **__fastcall sub_C0804(int **result)
{
  int **v1; // r4

  if ( result )
  {
    v1 = result;
    sub_B87C8(*result);
    sub_B87C8(v1[1]);
    return (int **)CRYPTO_free(v1, "crypto/dsa/dsa_asn1.c", 38);
  }
  return result;
}
