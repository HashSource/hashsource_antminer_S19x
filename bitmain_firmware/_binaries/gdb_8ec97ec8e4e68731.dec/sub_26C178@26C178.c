_DWORD *__fastcall sub_26C178(_DWORD *result, int a2)
{
  int v2; // r0

  if ( *result == 1 )
  {
    result[2] = a2;
  }
  else
  {
    v2 = ((int (__fastcall *)(_DWORD *))loc_16574)(result);
    return (_DWORD *)sub_26C194(v2);
  }
  return result;
}
