int __fastcall sub_78C48(int a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r4
  int v8; // r4

  v6 = sub_7864C(a1, a2, a3, 76, 0);
  v7 = sub_7864C(a1, a2, a3, 144, 0) | v6;
  v8 = v7 | sub_7864C(a1, a2, a3, 148, 0);
  return v8 | sub_7864C(a1, a2, a3, 140, 0);
}
