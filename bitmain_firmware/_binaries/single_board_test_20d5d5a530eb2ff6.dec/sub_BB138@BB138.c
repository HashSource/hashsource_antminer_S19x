_DWORD *__fastcall sub_BB138(_DWORD *result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = result;
    sub_BB0F8(result);
    sub_D7A6C(*v1);
    return (_DWORD *)CRYPTO_free(v1, "crypto/cmac/cmac.c", 84);
  }
  return result;
}
