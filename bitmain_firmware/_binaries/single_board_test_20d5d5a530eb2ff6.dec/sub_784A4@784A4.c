int __fastcall sub_784A4(int a1, int a2, char a3)
{
  int v7; // [sp+Ch] [bp-8h] BYREF

  sub_78850(0, a1, a2, 24, &v7);
  LOBYTE(v7) = v7 & 0xF7 | (8 * (a3 & 1));
  return sub_771FC(a1, 0, a2, 24, v7);
}
