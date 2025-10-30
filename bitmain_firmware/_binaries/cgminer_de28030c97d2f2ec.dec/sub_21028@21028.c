int __fastcall sub_21028(_BYTE *a1, const char *a2)
{
  int result; // r0
  _BYTE s[28]; // [sp+14h] [bp-20h] BYREF

  memset(s, 0, 0x19u);
  sub_20E5C((int)s, a2);
  *a1 = 118;
  a1[1] = -87;
  a1[2] = 20;
  result = sub_2BEFC(a1 + 3, &s[1], 20, "util.c", "address_to_pubkeyhash", 964);
  a1[23] = -120;
  a1[24] = -84;
  return result;
}
