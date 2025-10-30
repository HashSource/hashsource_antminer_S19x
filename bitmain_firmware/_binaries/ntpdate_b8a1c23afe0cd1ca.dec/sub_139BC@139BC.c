_DWORD *__fastcall sub_139BC(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r12
  unsigned int v4; // r1
  unsigned int v5; // r3

  if ( !result || *result != 1114990113 )
    sub_1073C();
  v2 = result[3];
  if ( v2 < a2 )
    sub_1073C();
  v3 = result[4];
  v4 = v2 - a2;
  v5 = result[5];
  result[3] = v4;
  if ( v4 < v3 )
    result[4] = v4;
  if ( v4 < v5 )
    result[5] = v4;
  return result;
}
