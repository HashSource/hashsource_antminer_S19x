int __fastcall sub_5D1B0(void *a1)
{
  int v1; // r0
  int v3; // [sp+8h] [bp-Ch]
  char v4; // [sp+Ch] [bp-8h]

  v4 = sub_5CE0C(a1);
  v1 = sub_5C960();
  LOBYTE(v3) = v1 & 0xC0 | v4 & 0x3F;
  BYTE1(v3) = BYTE1(v1) & 0xC0 | v4 & 0x3F;
  BYTE2(v3) = BYTE2(v1) & 0xC0 | v4 & 0x3F;
  HIBYTE(v3) = HIBYTE(v1) & 0xC0 | v4 & 0x3F;
  sub_5C994(v3);
  return 0;
}
