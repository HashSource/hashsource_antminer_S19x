_DWORD *__fastcall sub_14198(_DWORD *result, unsigned int *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r12
  bool v4; // cf
  unsigned int v5; // r3

  if ( !result || *result != 1114990113 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  v2 = result[5];
  v3 = result[4];
  v4 = v3 >= v2;
  if ( v3 >= v2 )
  {
    v5 = 0;
  }
  else
  {
    v5 = v2 - v3;
    result = (_DWORD *)result[1];
  }
  if ( v4 )
    *a2 = v5;
  else
    a2[1] = v5;
  if ( v4 )
    a2[1] = v5;
  else
    v3 += (unsigned int)result;
  if ( !v4 )
    *a2 = v3;
  return result;
}
