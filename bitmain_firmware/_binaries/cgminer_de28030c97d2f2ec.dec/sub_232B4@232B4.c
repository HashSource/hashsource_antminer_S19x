void **__fastcall sub_232B4(void **result, unsigned int a2, size_t a3, const char *a4, const char *a5, int a6)
{
  _DWORD *v8; // [sp+14h] [bp-8h]

  v8 = result;
  if ( a3 != a2 )
  {
    result = (void **)sub_203A0(*result, a3, a4, a5, a6);
    *v8 = result;
    if ( a3 > a2 )
      return (void **)memset((void *)(*v8 + a2), 0, a3 - a2);
  }
  return result;
}
