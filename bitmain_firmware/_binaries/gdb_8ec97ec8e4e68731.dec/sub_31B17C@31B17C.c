int __fastcall sub_31B17C(_DWORD *a1)
{
  _BYTE *v1; // r3
  int v3; // r0
  int result; // r0
  _BYTE *v5; // r3

  v1 = (_BYTE *)a1[3];
  if ( *v1 != 70 )
    return 0;
  a1[3] = v1 + 1;
  if ( v1[1] == 89 )
    a1[3] = v1 + 2;
  v3 = sub_31B110(a1, 1);
  result = sub_31397C(a1, v3);
  v5 = (_BYTE *)a1[3];
  if ( *v5 != 69 )
    return 0;
  a1[3] = v5 + 1;
  return result;
}
