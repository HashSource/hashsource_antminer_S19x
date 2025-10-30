bool __fastcall sub_10AC38(int a1, int a2)
{
  bool v2; // zf
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r7
  _BOOL4 v10; // r4

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
    return 0;
  v6 = sub_130B08(a1);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = sub_B822C();
  v9 = v8;
  v10 = v8 && sub_1337FC(v8, a1, a2, v7) && !sub_B85B0(v9);
  sub_130B5C(v7);
  sub_B895C(v9);
  return v10;
}
