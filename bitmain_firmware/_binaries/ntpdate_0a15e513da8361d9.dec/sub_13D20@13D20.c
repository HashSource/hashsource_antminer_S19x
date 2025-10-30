_DWORD *__fastcall sub_13D20(_DWORD *result, _DWORD *a2)
{
  int v2; // r12
  int v3; // r3

  if ( !result || *result != 1114990113 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  v2 = result[3];
  v3 = result[2] - v2;
  *a2 = result[1] + v2;
  a2[1] = v3;
  return result;
}
