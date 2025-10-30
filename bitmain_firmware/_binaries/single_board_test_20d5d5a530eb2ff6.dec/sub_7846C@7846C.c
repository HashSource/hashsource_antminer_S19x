int __fastcall sub_7846C(int a1, char a2)
{
  int v5; // [sp+Ch] [bp-4h] BYREF

  sub_78850(0, a1, 0, 24, &v5);
  LOBYTE(v5) = v5 & 0xF7 | (8 * (a2 & 1));
  return sub_771FC(a1, 1, 0, 24, v5);
}
