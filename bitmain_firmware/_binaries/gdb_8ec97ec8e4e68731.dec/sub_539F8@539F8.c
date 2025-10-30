_DWORD *__fastcall sub_539F8(char *a1, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // r0
  int v7; // r2

  result = (_DWORD *)sub_52DB8(a1, a2, a4, (int **)&dword_474744);
  result[5] = a3;
  if ( a3 )
    v7 = 11328;
  else
    result[4] = 0;
  if ( a3 )
    HIWORD(v7) = 5;
  result[27] = a5;
  if ( a3 )
    result[4] = v7;
  return result;
}
