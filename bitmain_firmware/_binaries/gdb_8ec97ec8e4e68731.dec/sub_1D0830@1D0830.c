int __fastcall sub_1D0830(_DWORD *a1, int a2)
{
  int v3; // lr
  int v4; // r4
  int v5; // r2

  v3 = a1[30];
  a1[28] = a1[27];
  v4 = a2 / 10;
  a1[31] = v3;
  sub_1D2844(a1 + 27, v4, 1717986919 * a2);
  return sub_1D2844(a1 + 30, v4, v5);
}
