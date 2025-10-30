int __fastcall EVP_PKEY_meth_free(int result)
{
  if ( result )
  {
    if ( (*(_DWORD *)(result + 4) & 1) != 0 )
      return CRYPTO_free(result, "crypto/evp/pmeth_lib.c", 240);
  }
  return result;
}
