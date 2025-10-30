_DWORD *__fastcall sub_D1110(int a1, int a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // r4

  result = sub_CFCDC();
  if ( result )
  {
    v5 = &result[result[96]];
    if ( (v5[48] & 1) != 0 )
      result = (_DWORD *)CRYPTO_free(v5[32], "crypto/err/err.c", 854);
    v5[32] = a1;
    v5[48] = a2;
  }
  return result;
}
