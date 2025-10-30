unsigned int __fastcall sub_65D94(_BYTE *a1, int a2)
{
  unsigned int v2; // lr
  unsigned int v3; // r2
  unsigned int v5; // r3

  v2 = (a2 >> 31) ^ a2;
  v3 = (a2 >> 31) ^ (v2 / 0xE10);
  v5 = (a2 >> 31) ^ (v2 / 0x3C);
  a1[6] = v3 - 24 * ((a2 >> 31) ^ ((3257812231u * (unsigned __int64)v2) >> 48));
  a1[7] = v5 - 60 * v3;
  a1[8] = a2 - 60 * v5;
  return (a2 >> 31) ^ (v2 / 0x15180);
}
