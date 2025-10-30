int __fastcall sub_7A208(int a1, int a2, char a3)
{
  int v7; // [sp+Ch] [bp-4h] BYREF

  sub_7A850(0, a1, a2, 24, &v7);
  LOBYTE(v7) = v7 & 0xF7 | (8 * (a3 & 1));
  return sub_7864C(a1, 0, a2, 24, v7);
}
