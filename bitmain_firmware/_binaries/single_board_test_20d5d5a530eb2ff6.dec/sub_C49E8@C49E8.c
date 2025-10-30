int **__fastcall sub_C49E8(int **result)
{
  int **v1; // r4

  if ( result )
  {
    v1 = result;
    sub_B87C8(*result);
    sub_B87C8(v1[1]);
    return (int **)CRYPTO_free(v1, "crypto/ec/ec_asn1.c", 1278);
  }
  return result;
}
