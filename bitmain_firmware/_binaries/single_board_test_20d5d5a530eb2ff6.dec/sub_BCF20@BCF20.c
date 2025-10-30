_DWORD *__fastcall sub_BCF20(_DWORD *result, int a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r1
  int v5; // r2

  if ( result )
  {
    v3 = result;
    X509_free(*result, a2, a3);
    X509_free(v3[1], v4, v5);
    return (_DWORD *)CRYPTO_free(v3, "crypto/ct/ct_policy.c", 50);
  }
  return result;
}
