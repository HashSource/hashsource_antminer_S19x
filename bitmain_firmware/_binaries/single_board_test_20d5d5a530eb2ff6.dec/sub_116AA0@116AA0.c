_DWORD *__fastcall sub_116AA0(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(a1 + 196);
  if ( result )
  {
    result = (_DWORD *)result[3];
    if ( result )
    {
      if ( a2 )
        *a2 = *result;
      return (_DWORD *)result[2];
    }
  }
  return result;
}
