int __fastcall sub_AE1D8(int result, int a2)
{
  int v2; // r4

  if ( result )
  {
    v2 = result;
    if ( (*(_DWORD *)(result + 12) & 0x10) != 0 )
    {
      if ( a2 )
        return result;
      return CRYPTO_free(v2, "crypto/asn1/asn1_lib.c", 357);
    }
    result = CRYPTO_free(*(_DWORD *)(result + 8), "crypto/asn1/asn1_lib.c", 355);
    if ( !a2 )
      return CRYPTO_free(v2, "crypto/asn1/asn1_lib.c", 357);
  }
  return result;
}
