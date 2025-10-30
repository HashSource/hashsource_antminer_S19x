int __fastcall sub_E0EF4(int *a1, int *a2, int a3)
{
  int v6; // r3

  if ( a1[4] )
    sub_E0D88(a1, "updating caller");
  v6 = a2[10];
  a1[12] = a3;
  a1[4] = v6;
  sub_E0D88(a1, "set caller");
  return sub_E0D88(a2, "..to");
}
