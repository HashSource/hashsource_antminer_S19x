int __fastcall sub_7A1AC(int a1, char a2)
{
  int v5; // [sp+Ch] [bp-8h] BYREF

  sub_7A850(0, a1, 0, 24, &v5);
  LOBYTE(v5) = v5 & 0xF7 | (8 * (a2 & 1));
  return sub_7864C(a1, 1, 0, 24, v5);
}
