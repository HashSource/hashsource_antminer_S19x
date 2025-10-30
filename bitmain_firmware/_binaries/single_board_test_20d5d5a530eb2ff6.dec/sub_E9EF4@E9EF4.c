unsigned __int8 *__fastcall sub_E9EF4(unsigned __int8 *result, int a2)
{
  unsigned __int8 *v2; // r4
  size_t v3; // r7
  unsigned __int8 *v4; // r5

  v2 = result;
  if ( result )
  {
    v3 = sub_E9EC0(result, a2);
    result = (unsigned __int8 *)CRYPTO_malloc((void *)(v3 + 1));
    v4 = result;
    if ( result )
    {
      memcpy(result, v2, v3);
      v4[v3] = 0;
      return v4;
    }
  }
  return result;
}
