int __fastcall sub_77254(int a1, char a2)
{
  int v5; // [sp+Ch] [bp-8h] BYREF

  sub_7740C(0, a1, 0, 88, &v5);
  BYTE1(v5) = BYTE1(v5) & 0xF | (16 * (a2 & 0xF));
  return sub_751F0(a1, 1, 0, 88, v5);
}
