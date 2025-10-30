int __fastcall sub_250A8(const char *a1)
{
  char s[20]; // [sp+8h] [bp-14h] BYREF

  snprintf(s, 0x10u, "cg@%s", a1);
  return prctl(15, s, 0);
}
