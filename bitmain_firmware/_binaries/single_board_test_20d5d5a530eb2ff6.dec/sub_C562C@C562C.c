_DWORD *__fastcall sub_C562C(int *a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r4

  v2 = (_DWORD *)sub_C5EAC(a1[1]);
  v3 = (int)v2;
  if ( !v2 )
    return (_DWORD *)v3;
  v4 = sub_C54DC(v2, a1);
  if ( v4 )
    return (_DWORD *)v3;
  sub_C5410(v3);
  return v4;
}
