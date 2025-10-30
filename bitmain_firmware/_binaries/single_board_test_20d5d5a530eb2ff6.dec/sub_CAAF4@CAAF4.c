int __fastcall sub_CAAF4(_DWORD *a1)
{
  int v2; // r0
  int v3; // r3
  bool v4; // zf

  a1[2] = sub_B822C();
  a1[3] = sub_B822C();
  v2 = sub_B822C();
  v3 = a1[2];
  a1[4] = v2;
  a1[5] = 0;
  if ( v3 )
  {
    v4 = v2 == 0;
    if ( v2 )
      v4 = a1[3] == 0;
    if ( !v4 )
      return 1;
  }
  sub_B895C(v3);
  sub_B895C(a1[3]);
  sub_B895C(a1[4]);
  return 0;
}
