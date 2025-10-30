void *__fastcall sub_1799BC(int a1)
{
  void *v2; // r4
  void *v4; // r0

  v2 = CRYPTO_malloc((void *)0xC);
  if ( v2 && !(*(int (**)(void))(a1 + 8))() )
  {
    v4 = v2;
    v2 = 0;
    CRYPTO_free(v4);
  }
  return v2;
}
