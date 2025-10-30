int __fastcall sub_B8A2C(int a1)
{
  int v2; // r5
  int v3; // r4

  if ( !a1 )
    return 0;
  v2 = sub_B87C0(a1, 8) ? sub_B8264() : sub_B822C();
  if ( !v2 )
    return 0;
  v3 = sub_B89E4(v2, a1);
  if ( v3 )
    return v2;
  sub_B895C(v2);
  return v3;
}
