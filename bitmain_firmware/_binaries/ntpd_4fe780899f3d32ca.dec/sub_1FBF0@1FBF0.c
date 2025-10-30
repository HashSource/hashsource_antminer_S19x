char *__fastcall sub_1FBF0(int a1)
{
  int v2; // r4
  int v3; // r4
  char v5[4]; // [sp+4h] [bp-28h] BYREF
  _BYTE v6[28]; // [sp+8h] [bp-24h] BYREF

  v2 = rand();
  v3 = v2 ^ (rand() << 16);
  v5[1] = (v3 >> 5) % 26 + 97;
  v5[0] = v3 % 26 + 97;
  v5[2] = (v3 >> 10) % 26 + 97;
  v5[3] = 46;
  sub_6C054(v6, 28, "%d", a1);
  return sub_1FB4C(v5, v3 >> 15);
}
