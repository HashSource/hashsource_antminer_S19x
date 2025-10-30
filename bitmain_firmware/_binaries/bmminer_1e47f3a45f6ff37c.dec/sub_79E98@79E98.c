int __fastcall sub_79E98(int a1)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  sub_7A850(0, a1, 0, 208, &v3);
  LOBYTE(v3) = v3 | 0x8A;
  HIBYTE(v3) |= 8u;
  BYTE1(v3) &= ~8u;
  return sub_7864C(a1, 1, 0, 208, v3);
}
