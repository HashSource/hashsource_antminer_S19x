_DWORD *__fastcall CTLOG_free(_DWORD *result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = result;
    CRYPTO_free(*result, "crypto/ct/ct_log.c", 266);
    sub_DA240(v1[9]);
    return (_DWORD *)CRYPTO_free(v1, "crypto/ct/ct_log.c", 268);
  }
  return result;
}
