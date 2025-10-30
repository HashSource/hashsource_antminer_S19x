int __fastcall sub_B895C(int result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = (_DWORD *)result;
    result = sub_B87C0(result, 2);
    if ( !result )
    {
      if ( sub_B87C0((int)v1, 8) )
        result = ((int (__fastcall *)(_DWORD, int, const char *, int))loc_E18E0)(
                   *v1,
                   4 * v1[2],
                   "crypto/bn/bn_lib.c",
                   204);
      else
        result = CRYPTO_free(*v1, "crypto/bn/bn_lib.c", 208);
    }
    if ( (v1[4] & 1) != 0 )
      return CRYPTO_free(v1, "crypto/bn/bn_lib.c", 231);
  }
  return result;
}
