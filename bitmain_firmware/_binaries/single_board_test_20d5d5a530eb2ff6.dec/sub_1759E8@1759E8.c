int __fastcall sub_1759E8(int a1, _DWORD *a2, int a3)
{
  _BOOL4 v5; // r0
  _BOOL4 v6; // r3

  v5 = sub_B85B0(a1);
  v6 = a3 > 0;
  if ( v5 )
    v6 = 0;
  if ( !v6 )
    return 0;
  *a2 = -1;
  return 1;
}
