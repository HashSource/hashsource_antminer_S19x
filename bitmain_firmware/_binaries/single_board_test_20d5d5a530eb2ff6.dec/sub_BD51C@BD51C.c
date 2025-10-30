_DWORD *__fastcall sub_BD51C(_DWORD *result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = result;
    sub_DA240(*result);
    CRYPTO_free(v1[1], "crypto/ct/ct_sct_ctx.c", 38);
    CRYPTO_free(v1[3], "crypto/ct/ct_sct_ctx.c", 39);
    CRYPTO_free(v1[5], "crypto/ct/ct_sct_ctx.c", 40);
    CRYPTO_free(v1[7], "crypto/ct/ct_sct_ctx.c", 41);
    return (_DWORD *)CRYPTO_free(v1, "crypto/ct/ct_sct_ctx.c", 42);
  }
  return result;
}
