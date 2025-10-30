_DWORD *__fastcall sub_2FFB00(_DWORD *a1, unsigned __int8 *a2, unsigned int a3, int a4)
{
  _DWORD *result; // r0
  int v7; // r2
  int v8; // r3

  result = sub_2FF918(a1, a2, a3, 1);
  if ( result && !result[6] )
  {
    v7 = a1[8];
    v8 = a1[7] + 1;
    a1[7] = v8;
    if ( v7 )
      v8 = a1[9];
    result[6] = a4;
    if ( v7 )
      *(_DWORD *)(v8 + 28) = result;
    else
      a1[8] = result;
    a1[9] = result;
  }
  return result;
}
