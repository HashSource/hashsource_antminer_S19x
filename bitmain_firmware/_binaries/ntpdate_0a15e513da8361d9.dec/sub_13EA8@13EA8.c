_DWORD *__fastcall sub_13EA8(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r1
  unsigned int v4; // r12
  unsigned int v5; // r3

  if ( !result || *result != 1114990113 )
    sub_10C38();
  v2 = result[3];
  if ( v2 < a2 )
    sub_10C38();
  v3 = v2 - a2;
  v4 = result[4];
  v5 = result[5];
  result[3] = v3;
  if ( v3 < v4 )
    result[4] = v3;
  if ( v3 < v5 )
    result[5] = v3;
  return result;
}
