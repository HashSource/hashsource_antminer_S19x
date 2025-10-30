_DWORD *__fastcall sub_708B8(const void *a1, size_t a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // r4
  void *v6; // r0

  result = malloc(8u);
  v5 = result;
  if ( result )
  {
    result[1] = a2;
    v6 = malloc(a2);
    *v5 = v6;
    if ( v6 )
    {
      memcpy(v6, a1, a2);
      return v5;
    }
    else
    {
      free(v5);
      return 0;
    }
  }
  return result;
}
