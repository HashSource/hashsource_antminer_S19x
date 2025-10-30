void __fastcall sub_52998(const char *a1, const char *a2, int a3)
{
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  snprintf(s, 0x800u, "Free work called with NULL work from %s %s:%d", a1, a2, a3);
  sub_47AB4(3, s, 0);
}
