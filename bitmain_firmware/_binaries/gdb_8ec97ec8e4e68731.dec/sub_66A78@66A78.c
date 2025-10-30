int __fastcall sub_66A78(int a1, int *a2, unsigned int a3)
{
  int *v4; // r0
  int v5; // r5
  int v6; // r4
  int v7; // r0

  if ( a3 > 1 )
    sub_946E0("Invalid MI command");
  v4 = (int *)sub_242FDC(a1);
  v5 = *a2;
  v6 = *v4;
  v7 = sub_183688(v4);
  return sub_B0D94(v6, v5, v7);
}
