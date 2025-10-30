void *__fastcall sub_E9E68(const void *a1, void *a2)
{
  _BOOL4 v3; // r4
  void *v5; // r0

  v3 = (unsigned int)a2 > 0x7FFFFFFE;
  if ( !a1 )
    v3 = 1;
  if ( !v3 )
  {
    v5 = CRYPTO_malloc(a2);
    if ( v5 )
      return j_memcpy(v5, a1, (size_t)a2);
    sub_D0048(15, 115, 65, (int)"crypto/o_str.c", 66);
  }
  return 0;
}
