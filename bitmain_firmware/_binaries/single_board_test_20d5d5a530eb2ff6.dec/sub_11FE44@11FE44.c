void __fastcall sub_11FE44(int a1)
{
  int v1; // r3

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 8);
    if ( (v1 & 1) != 0 )
    {
      if ( (v1 & 2) != 0 )
      {
        CRYPTO_free(*(void **)(a1 + 16));
        CRYPTO_free(*(void **)(a1 + 20));
      }
      CRYPTO_free((void *)a1);
    }
  }
}
