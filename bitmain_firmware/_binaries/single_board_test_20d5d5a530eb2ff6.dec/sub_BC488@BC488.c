int *sub_BC488()
{
  int v0; // r0
  int *v1; // r4
  int v2; // r5
  int *result; // r0

  v0 = sub_E0740(4, "crypto/ct/ct_log.c", 94);
  v1 = (int *)v0;
  if ( v0 )
  {
    v2 = sub_10BFCC(v0);
    *v1 = v2;
    result = v1;
    if ( !v2 )
    {
      CRYPTO_free(v1, "crypto/ct/ct_log.c", 107);
      return 0;
    }
  }
  else
  {
    sub_D0048(50, 131, 65, "crypto/ct/ct_log.c", 97);
    return 0;
  }
  return result;
}
