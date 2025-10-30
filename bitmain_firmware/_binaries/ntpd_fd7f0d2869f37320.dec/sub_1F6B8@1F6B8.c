void *__fastcall sub_1F6B8(int a1)
{
  size_t v1; // r0
  char v3[64]; // [sp+4h] [bp-48h] BYREF

  sub_1E8C0(a1, (int)v3, 64);
  v1 = strlen(v3);
  sub_1F350("nonce", (int)v3, v1);
  return sub_1EDD4(0);
}
