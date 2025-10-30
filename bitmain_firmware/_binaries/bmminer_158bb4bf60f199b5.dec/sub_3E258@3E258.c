void __fastcall __noreturn sub_3E258(const char *a1, int a2)
{
  int *v4; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = _errno_location();
  snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v4, "api.c", a1, a2);
  sub_47AB4(3, s, 1);
  sub_62EC0(1);
}
