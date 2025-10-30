void __fastcall sub_1071B4(int a1)
{
  int v1; // r5

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 )
  {
    sub_C64B8(*(_DWORD *)v1);
    CRYPTO_free(*(void **)(v1 + 8));
    CRYPTO_free((void *)v1);
    *(_DWORD *)(a1 + 20) = 0;
  }
}
