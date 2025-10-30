void __fastcall sub_13F888(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 )
  {
    CRYPTO_free(*(void **)(v1 + 52));
    ASN1_OBJECT_free(*(_DWORD *)(v1 + 44));
    CRYPTO_free((void *)v1);
  }
}
