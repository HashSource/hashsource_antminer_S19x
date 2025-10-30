_DWORD *__fastcall sub_BA198(int a1)
{
  _DWORD *result; // r0
  _DWORD *v2; // r4
  int v3; // r0

  result = (_DWORD *)sub_B9784(a1);
  v2 = result;
  if ( !*result )
  {
    *result = sub_323B2C(31, sub_B9528, sub_B9038, sub_B9168);
    v3 = sub_323B2C(31, sub_B9528, sub_B9038, sub_B9168);
    v2[3] = 0;
    v2[1] = v3;
    v2[2] = 0;
    return v2;
  }
  return result;
}
