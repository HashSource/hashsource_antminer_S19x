_DWORD *__fastcall sub_BC4D4(_DWORD *result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = result;
    sub_10BFDC(*result, CTLOG_free);
    return (_DWORD *)CRYPTO_free(v1, "crypto/ct/ct_log.c", 115);
  }
  return result;
}
