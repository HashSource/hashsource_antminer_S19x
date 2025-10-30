_DWORD *__fastcall sub_EF88(_DWORD *result, _DWORD *ptr)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  _DWORD **v5; // r1
  int v6; // r1

  v3 = result;
  if ( !result )
    return ptr;
  if ( ptr )
  {
    v4 = (_DWORD *)ptr[1];
    if ( v4 )
    {
      v5 = (_DWORD **)result[1];
      if ( v5 )
      {
        **v5 = *ptr;
        if ( v4 == ptr )
          v4 = *v5;
        result[1] = v4;
      }
      else
      {
        v6 = ptr[1];
        *result = *ptr;
        result[1] = v6;
      }
    }
    free(ptr);
    return v3;
  }
  return result;
}
