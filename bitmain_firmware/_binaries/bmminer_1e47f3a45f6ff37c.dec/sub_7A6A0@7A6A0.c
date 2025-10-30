int __fastcall sub_7A6A0(int a1, char a2)
{
  int v5; // [sp+Ch] [bp-8h] BYREF

  sub_7A850(0, a1, 0, 88, &v5);
  BYTE1(v5) = BYTE1(v5) & 0xF | (16 * (a2 & 0xF));
  return sub_7864C(a1, 1, 0, 88, v5);
}
