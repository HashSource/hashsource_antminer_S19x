_DWORD *__fastcall sub_313D78(_DWORD *a1)
{
  _BYTE *v1; // r3
  int v3; // r1
  int v4; // r3
  _DWORD *result; // r0

  v1 = (_BYTE *)a1[3];
  if ( *v1 != 84 )
    return 0;
  a1[3] = v1 + 1;
  v3 = sub_313D1C((int)a1);
  if ( v3 < 0 )
    return 0;
  v4 = a1[5];
  if ( v4 >= a1[6] )
    return 0;
  result = (_DWORD *)(a1[4] + 16 * v4);
  result[1] = 0;
  a1[5] = v4 + 1;
  *result = 5;
  result[2] = v3;
  return result;
}
