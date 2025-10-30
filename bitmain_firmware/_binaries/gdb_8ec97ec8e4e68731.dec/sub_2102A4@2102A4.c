int __fastcall sub_2102A4(_BYTE *a1)
{
  int v2; // r4
  char *v3; // r0
  int v4; // r0
  _DWORD *v6; // r0

  v2 = sub_15D58C();
  v3 = sub_20F554(a1, 0);
  sub_15E10C((int)v3);
  v4 = sub_15D58C();
  if ( v2 != v4 )
    return sub_1BABB4(8);
  v6 = (_DWORD *)sub_242FDC(v4);
  return sub_2404E8(*v6, 8);
}
