_DWORD *__fastcall sub_3AB18(_DWORD **a1, _DWORD *a2)
{
  _DWORD *result; // r0
  unsigned int v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r3
  int v7; // r2

  result = *a1;
  if ( result )
  {
    v4 = result[1];
    if ( v4 <= 0x3E )
    {
      v5 = v4 + 2;
      v6 = v4 + 1;
      v7 = result[v5];
      result[1] = v6;
      if ( v6 != 63 )
        result = (int *)((char *)&dword_0 + 1);
      *a2 = v7;
      if ( v6 == 63 )
      {
        *a1 = (_DWORD *)*result;
        free(result);
        return &dword_0 + 1;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
