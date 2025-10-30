_DWORD *__fastcall sub_14480(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r3

  if ( !result || *result != 1114990113 )
    sub_10C38();
  v2 = result[4];
  if ( v2 < a2 )
    sub_10C38();
  result[4] = v2 - a2;
  return result;
}
