int __fastcall sub_2B968(const char *a1)
{
  char s[16]; // [sp+10h] [bp-14h] BYREF

  snprintf(s, 0x10u, "cg@%s", a1);
  return prctl(15, s, 0, 0, 0);
}
