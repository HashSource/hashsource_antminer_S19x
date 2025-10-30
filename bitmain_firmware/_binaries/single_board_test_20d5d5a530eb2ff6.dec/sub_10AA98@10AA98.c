int __fastcall sub_10AA98(int a1, int a2, int a3)
{
  bool v3; // zf
  int v4; // r4
  int v8; // r8
  int v9; // r0
  int v10; // r4
  int v12; // r0

  v3 = a3 == 0;
  if ( a3 )
    v3 = a2 == 0;
  v4 = v3;
  if ( !a1 )
    v4 |= 1u;
  if ( v4 )
    return 0;
  v8 = sub_130B08(a1);
  if ( !v8 )
    return 0;
  v9 = sub_B822C();
  v10 = v9;
  if ( v9 )
  {
    if ( !sub_132330(v9, a3, a1, a2, v8) )
    {
      v12 = v10;
      v10 = 0;
      sub_B895C(v12);
    }
  }
  sub_130B5C(v8);
  return v10;
}
