void __fastcall __noreturn sub_55000(const char *a1, int a2)
{
  int *v4; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = _errno_location();
  snprintf(s, 0x800u, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", *v4, "cgminer.c", a1, a2);
  sub_47AB4(3, s, 1);
  sub_54CCC(1, 1);
}
