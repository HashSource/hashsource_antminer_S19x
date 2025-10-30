void __fastcall sub_FA16C(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 )
  {
    sub_B895C(*(_DWORD *)(v1 + 4));
    CRYPTO_free(*(void **)(v1 + 40));
    CRYPTO_free(*(void **)(v1 + 44));
    CRYPTO_free((void *)v1);
  }
}
