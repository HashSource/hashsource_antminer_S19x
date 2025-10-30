int __fastcall sub_353B0(const char *a1, const char *a2, int a3)
{
  int v3; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  snprintf(s, 0x800u, "Free work called with NULL work from %s %s:%d", a1, a2, a3);
  return sub_3AF5C(3, s, 0, v3);
}
