int __fastcall sub_C5DC0(int a1, int *a2)
{
  int result; // r0
  int v5; // r5

  result = sub_C5C80(a1);
  if ( result )
  {
    v5 = CRYPTO_malloc(result, "crypto/ec/ec_key.c", 685);
    if ( v5 )
    {
      result = sub_C5C80(a1);
      if ( result )
      {
        *a2 = v5;
      }
      else
      {
        CRYPTO_free(v5, "crypto/ec/ec_key.c", 691);
        return 0;
      }
    }
    else
    {
      sub_D0048(16, 279, 65, "crypto/ec/ec_key.c", 686);
      return 0;
    }
  }
  return result;
}
