_DWORD *__fastcall sub_EE48(_DWORD *result, _DWORD *ptr)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  _DWORD **v5; // r2
  int v6; // r0
  int v7; // r1

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
        v6 = *ptr;
        v7 = ptr[1];
        *v3 = v6;
        v3[1] = v7;
      }
    }
    free(ptr);
    return v3;
  }
  return result;
}
