int *__fastcall sub_B94B4(int *result)
{
  int *v1; // r4

  if ( result )
  {
    v1 = result;
    sub_B87C8(result + 1);
    sub_B87C8(v1 + 6);
    result = sub_B87C8(v1 + 11);
    if ( (v1[18] & 1) != 0 )
      return (int *)CRYPTO_free(v1, "crypto/bn/bn_mont.c", 260);
  }
  return result;
}
