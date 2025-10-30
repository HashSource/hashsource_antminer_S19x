__int16 *__fastcall sub_1F454(int a1)
{
  size_t v1; // r0
  char v3[64]; // [sp+4h] [bp-48h] BYREF

  sub_1E688(a1, (int)v3, 64);
  v1 = strlen(v3);
  sub_1F0E4("nonce", (int)v3, v1);
  return sub_1EBA4(0);
}
