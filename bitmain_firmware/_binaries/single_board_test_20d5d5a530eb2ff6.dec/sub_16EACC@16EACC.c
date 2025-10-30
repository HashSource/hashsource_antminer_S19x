void __fastcall sub_16EACC(int a1)
{
  int v1; // r3

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 4);
    if ( (v1 & 1) != 0 )
    {
      if ( (v1 & 2) != 0 )
        CRYPTO_free(*(void **)(a1 + 12));
      CRYPTO_free((void *)a1);
    }
  }
}
