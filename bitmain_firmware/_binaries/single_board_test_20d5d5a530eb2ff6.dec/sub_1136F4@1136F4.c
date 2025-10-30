void __fastcall sub_1136F4(int a1, int a2)
{
  void *v4; // r6
  void *v5; // r0
  void *v6; // r0

  if ( a2 )
  {
    v4 = *(void **)(a2 + 44);
    v5 = *(void **)(a1 + 44);
    if ( v4 != v5 )
    {
      CRYPTO_free(v5);
      *(_DWORD *)(a1 + 44) = v4;
    }
    *(_DWORD *)(a2 + 44) = 0;
  }
  else
  {
    v6 = *(void **)(a1 + 44);
    if ( v6 )
    {
      CRYPTO_free(v6);
      *(_DWORD *)(a1 + 44) = 0;
    }
  }
}
