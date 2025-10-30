int *__fastcall sub_33BB34(int *result, unsigned int a2, unsigned __int8 c)
{
  size_t v3; // r4
  int *v4; // r3
  int v5; // r2

  v3 = result[1];
  if ( v3 < a2 )
    return sub_33BA6C(result, v3, 0, a2 - v3, c);
  if ( v3 > a2 )
  {
    v4 = result;
    result = 0;
    v5 = *v4;
    v4[1] = a2;
    *(_BYTE *)(v5 + a2) = 0;
  }
  return result;
}
