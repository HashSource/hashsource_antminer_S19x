_DWORD *__fastcall sub_871C0(int a1, int a2, int a3)
{
  bool v3; // zf
  int v4; // r4
  int v7; // r7
  _DWORD *result; // r0

  v3 = a1 == 0;
  if ( a1 )
    v3 = a2 == 0;
  v4 = v3;
  if ( v3 )
    return 0;
  v7 = sub_10C010(a1, a2, a3);
  if ( v7 <= 0 )
    return 0;
  while ( 1 )
  {
    result = (_DWORD *)sub_10C01C(a1, v4++);
    if ( a2 == *result )
      break;
    if ( v4 == v7 )
      return 0;
  }
  return result;
}
