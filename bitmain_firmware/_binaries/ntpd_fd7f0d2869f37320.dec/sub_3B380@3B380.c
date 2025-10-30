_DWORD *__fastcall sub_3B380(_DWORD **a1, _DWORD *a2)
{
  _DWORD *result; // r0
  unsigned int v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r3
  bool v7; // zf
  int v8; // r3

  result = *a1;
  if ( result )
  {
    v4 = result[1];
    if ( v4 > 0x3E )
    {
      return 0;
    }
    else
    {
      v5 = v4 + 2;
      v6 = v4 + 1;
      v7 = v6 == 63;
      result[1] = v6;
      v8 = result[v5];
      if ( !v7 )
        result = (int *)((char *)&dword_0 + 1);
      *a2 = v8;
      if ( v7 )
      {
        *a1 = (_DWORD *)*result;
        free(result);
        return &dword_0 + 1;
      }
    }
  }
  return result;
}
