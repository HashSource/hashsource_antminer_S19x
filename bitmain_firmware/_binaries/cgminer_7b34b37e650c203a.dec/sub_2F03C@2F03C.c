void __fastcall __noreturn sub_2F03C(const char *a1, int a2)
{
  int *v4; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = _errno_location();
  snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v4, "cgminer.c", a1, a2);
  sub_20F58(3, s, 1);
  sub_2E6B0(1, 1);
}
