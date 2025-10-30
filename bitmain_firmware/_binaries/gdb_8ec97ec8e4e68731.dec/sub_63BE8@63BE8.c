int __fastcall sub_63BE8(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // r0

  if ( a3 )
    a1 = (_DWORD *)*a2;
  else
    a2 = 0;
  if ( a3 )
    a2 = 0;
  else
    a1 = a2;
  sub_20E8EC(a1, a2);
  v3 = sub_15F7E8(0);
  return sub_20E7E8(v3, 1, 2);
}
