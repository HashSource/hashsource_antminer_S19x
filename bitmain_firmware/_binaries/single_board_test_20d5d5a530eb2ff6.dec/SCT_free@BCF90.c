int __fastcall SCT_free(int result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = (_DWORD *)result;
    CRYPTO_free(*(_DWORD *)(result + 12), "crypto/ct/ct_sct.c", 41);
    CRYPTO_free(v1[8], "crypto/ct/ct_sct.c", 42);
    CRYPTO_free(v1[11], "crypto/ct/ct_sct.c", 43);
    CRYPTO_free(v1[1], "crypto/ct/ct_sct.c", 44);
    return CRYPTO_free(v1, "crypto/ct/ct_sct.c", 45);
  }
  return result;
}
