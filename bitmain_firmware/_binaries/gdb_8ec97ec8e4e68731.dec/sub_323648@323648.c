unsigned int __fastcall sub_323648(int a1)
{
  int v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r1
  int v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r0
  unsigned int v7; // r3
  int v8; // r0

  v1 = ((a1 >> 16) - (unsigned __int16)a1 - 1108562484) ^ 0x2109A;
  v2 = ((unsigned __int16)a1 + 1545873285 - v1) ^ (v1 << 8);
  v3 = (1108562484 - v1 - v2) ^ (v2 >> 13);
  v4 = (v1 - v2 - v3) ^ (v3 >> 12);
  v5 = (v2 - v3 - v4) ^ (v4 << 16);
  v6 = v4 - v5;
  v7 = (v3 - v4 - v5) ^ (v5 >> 5);
  v8 = (v6 - v7) ^ (v7 >> 3);
  return (v7 - v8 - ((v5 - v7 - v8) ^ (v8 << 10))) ^ (((v5 - v7 - v8) ^ (v8 << 10)) >> 15);
}
