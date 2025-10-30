char *__fastcall sub_1FE54(int a1)
{
  int v2; // r4
  int v3; // r4
  char v5[4]; // [sp+Ch] [bp-28h] BYREF
  _BYTE v6[28]; // [sp+10h] [bp-24h] BYREF

  v2 = rand();
  v5[3] = 46;
  v3 = v2 ^ (rand() << 16);
  v5[1] = (char)(v3 >> 5) % 26 + 97;
  v5[0] = v3 % 26 + 97;
  v5[2] = (char)(v3 >> 10) % 26 + 97;
  sub_6D00C(v6, 28, "%d", a1);
  return sub_1FDB0(v5, v3 >> 15);
}
