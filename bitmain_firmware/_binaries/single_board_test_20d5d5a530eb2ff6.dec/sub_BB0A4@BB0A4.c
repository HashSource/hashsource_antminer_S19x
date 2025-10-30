int *sub_BB0A4()
{
  int *v0; // r4
  int v1; // r5

  v0 = (int *)CRYPTO_malloc(136, "crypto/cmac/cmac.c", 50);
  if ( v0 )
  {
    v1 = sub_D7A5C();
    *v0 = v1;
    if ( v1 )
    {
      v0[33] = -1;
      return v0;
    }
    else
    {
      CRYPTO_free(v0, "crypto/cmac/cmac.c", 56);
      return 0;
    }
  }
  else
  {
    sub_D0048(15, 120, 65, "crypto/cmac/cmac.c", 51);
    return 0;
  }
}
