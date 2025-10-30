int *__fastcall sub_DF748(int *result)
{
  unsigned int v1; // r2
  int *v2; // r7
  int v3; // r3
  unsigned int i; // r6
  int v5; // r0
  int v6; // r4

  if ( result )
  {
    v1 = result[3];
    v2 = result;
    v3 = *result;
    if ( v1 )
    {
      for ( i = 0; i < v1; ++i )
      {
        v5 = *(_DWORD *)(v3 + 4 * i);
        if ( v5 )
        {
          do
          {
            v6 = *(_DWORD *)(v5 + 4);
            CRYPTO_free(v5, "crypto/lhash/lhash.c", 88);
            v5 = v6;
          }
          while ( v6 );
          v1 = v2[3];
          v3 = *v2;
        }
      }
    }
    CRYPTO_free(v3, "crypto/lhash/lhash.c", 92);
    return (int *)CRYPTO_free(v2, "crypto/lhash/lhash.c", 93);
  }
  return result;
}
