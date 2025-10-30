int __fastcall sub_C69FC(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  int v4; // r5
  int v5; // r4
  int result; // r0

  if ( !a1 )
    return 0;
  v3 = sub_C63F4(a2);
  v4 = (int)v3;
  if ( !v3 )
    return 0;
  v5 = sub_C6594(v3, a1);
  result = v4;
  if ( !v5 )
  {
    sub_C6490(v4);
    return 0;
  }
  return result;
}
