int __fastcall sub_78704(int a1, int a2, char a3)
{
  int v7; // [sp+Ch] [bp-8h] BYREF

  sub_78850(1, a1, a2, 88, &v7);
  BYTE1(v7) = BYTE1(v7) & 0xF | (16 * (a3 & 0xF));
  return sub_771FC(a1, 0, a2, 88, v7);
}
