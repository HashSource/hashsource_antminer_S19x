int __fastcall sub_BAC74(int a1, int a2)
{
  void **v4; // r0
  int v5; // r5
  int v6; // r4

  if ( !a2 )
    return -1;
  v4 = (void **)sub_B8A2C(a1);
  v5 = (int)v4;
  if ( !v4 )
    return -1;
  v6 = sub_BABE0(v4, a2);
  sub_B895C(v5);
  return v6;
}
