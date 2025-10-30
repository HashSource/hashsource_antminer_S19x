_DWORD *__fastcall sub_13F90(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r3

  if ( !result || *result != 1114990113 )
    sub_1073C();
  v2 = result[4];
  if ( v2 < a2 )
    sub_1073C();
  result[4] = v2 - a2;
  return result;
}
