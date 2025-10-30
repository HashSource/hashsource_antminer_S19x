void **__fastcall sub_4ABB0(void **result, unsigned int a2, size_t a3, const char *a4, const char *a5, int a6)
{
  _DWORD *v7; // r6

  if ( a3 != a2 )
  {
    v7 = result;
    result = (void **)sub_4973C(*result, a3, a4, a5, a6);
    *v7 = result;
    if ( a3 > a2 )
      return (void **)memset((char *)result + a2, 0, a3 - a2);
  }
  return result;
}
