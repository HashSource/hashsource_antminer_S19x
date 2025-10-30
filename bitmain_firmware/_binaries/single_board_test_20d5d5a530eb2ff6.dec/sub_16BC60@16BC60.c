int __fastcall sub_16BC60(void **a1)
{
  void (__fastcall **v2)(void **); // r3

  if ( *a1 == (void *)2 )
  {
    CRYPTO_free(a1[5]);
  }
  else
  {
    v2 = (void (__fastcall **)(void **))a1[4];
    if ( v2 )
    {
      v2[3](a1 + 5);
      a1[5] = 0;
      a1[4] = 0;
    }
  }
  CRYPTO_free(a1);
  return 1;
}
