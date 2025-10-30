int __fastcall sub_76A54(int a1)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  sub_7740C(0, a1, 0, 208, &v3);
  LOBYTE(v3) = v3 | 0x8A;
  HIBYTE(v3) |= 8u;
  BYTE1(v3) &= ~8u;
  return sub_751F0(a1, 1, 0, 208, v3);
}
