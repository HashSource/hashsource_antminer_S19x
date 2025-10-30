_DWORD *__fastcall sub_C5E34(int a1)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(a1 + 12);
  if ( result )
  {
    result = (_DWORD *)*result;
    if ( result )
      return (_DWORD *)((*result & 4) == 0);
  }
  return result;
}
