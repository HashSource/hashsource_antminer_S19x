int __fastcall sub_ADB9C(int result)
{
  int v1; // r4

  if ( result )
  {
    if ( (*(_DWORD *)(result + 8) & 2) != 0 )
    {
      v1 = result;
      CRYPTO_free(*(_DWORD *)(result + 12), "crypto/asn1/ameth_lib.c", 290);
      CRYPTO_free(*(_DWORD *)(v1 + 16), "crypto/asn1/ameth_lib.c", 291);
      return CRYPTO_free(v1, "crypto/asn1/ameth_lib.c", 292);
    }
  }
  return result;
}
