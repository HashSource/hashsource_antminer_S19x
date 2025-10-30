int __fastcall sub_F0278(int a1, int a2)
{
  _BYTE v4[4]; // [sp+Ch] [bp-4h] BYREF

  sub_2A8A04(a1, a2, a2, a2 >> 31, 0);
  sub_2A87D8(v4, 2, a1);
  return v4[0] + (v4[1] << 8);
}
