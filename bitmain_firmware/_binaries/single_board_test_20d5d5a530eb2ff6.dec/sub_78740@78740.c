int __fastcall sub_78740(int a1, char a2)
{
  int v5; // [sp+Ch] [bp-4h] BYREF

  sub_78850(0, a1, 0, 88, &v5);
  BYTE1(v5) = BYTE1(v5) & 0xF | (16 * (a2 & 0xF));
  return sub_771FC(a1, 1, 0, 88, v5);
}
