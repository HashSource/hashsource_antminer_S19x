_DWORD *__fastcall sub_13D84(_DWORD *result, int a2)
{
  unsigned int v2; // r1

  if ( !result || *result != 1114990113 )
    sub_1073C();
  v2 = a2 + result[4];
  if ( v2 > result[3] )
    sub_1073C();
  result[5] = v2;
  return result;
}
