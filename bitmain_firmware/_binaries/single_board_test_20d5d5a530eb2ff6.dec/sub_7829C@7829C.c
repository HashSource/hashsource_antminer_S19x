int __fastcall sub_7829C(int a1)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  sub_78850(0, a1, 0, 208, &v3);
  LOBYTE(v3) = v3 & 0x75 | 0x88;
  HIBYTE(v3) |= 8u;
  BYTE1(v3) &= ~8u;
  return sub_771FC(a1, 1, 0, 208, v3);
}
