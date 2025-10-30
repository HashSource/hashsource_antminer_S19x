int __fastcall sub_F02BC(int a1, int a2)
{
  _BYTE v4[4]; // [sp+Ch] [bp-4h] BYREF

  sub_2A8A04(a1, a2, a2, a2 >> 31, 0);
  sub_2A87D8(v4, 4, a1);
  return v4[0] + (v4[1] << 8) + (v4[2] << 16) + (v4[3] << 24);
}
