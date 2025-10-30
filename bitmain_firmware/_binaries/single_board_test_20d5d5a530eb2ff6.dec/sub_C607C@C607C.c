int __fastcall sub_C607C(int result)
{
  if ( (*(_DWORD *)(result + 4) & 1) != 0 )
    return CRYPTO_free(result, "crypto/ec/ec_kmeth.c", 170);
  return result;
}
