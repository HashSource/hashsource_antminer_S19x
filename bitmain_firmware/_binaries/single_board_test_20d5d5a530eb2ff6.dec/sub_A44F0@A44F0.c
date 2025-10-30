int __fastcall sub_A44F0(_DWORD *a1, const void *a2, int a3, int a4)
{
  size_t v4; // r7
  void *v9; // r0
  void *v10; // r8

  v4 = 2 * a3;
  v9 = (void *)CRYPTO_malloc(2 * a3, "ssl/t1_lib.c", 2041);
  v10 = v9;
  if ( v9 )
  {
    memcpy(v9, a2, v4);
    if ( a4 )
    {
      CRYPTO_free(a1[54], "ssl/t1_lib.c", 2048);
      a1[54] = v10;
      a1[55] = a3;
    }
    else
    {
      CRYPTO_free(a1[52], "ssl/t1_lib.c", 2052);
      a1[52] = v10;
      a1[53] = a3;
    }
    return 1;
  }
  else
  {
    sub_D0048(20, 630, 65, "ssl/t1_lib.c", 2042);
    return 0;
  }
}
