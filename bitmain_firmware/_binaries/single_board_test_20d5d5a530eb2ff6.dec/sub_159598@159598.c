void __fastcall sub_159598(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 )
  {
    sub_C64B8(*(_DWORD *)v1);
    sub_C5410(*(_DWORD *)(v1 + 8));
    CRYPTO_free(*(void **)(v1 + 20));
    CRYPTO_free((void *)v1);
    *(_DWORD *)(a1 + 20) = 0;
  }
}
