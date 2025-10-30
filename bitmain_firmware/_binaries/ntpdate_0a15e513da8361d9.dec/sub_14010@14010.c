_DWORD *__fastcall sub_14010(_DWORD *result, _DWORD *a2)
{
  int v2; // r3

  if ( !result || *result != 1114990113 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  v2 = result[4];
  *a2 = result[1];
  a2[1] = v2;
  return result;
}
