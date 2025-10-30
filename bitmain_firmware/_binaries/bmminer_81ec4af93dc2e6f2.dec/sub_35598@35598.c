int __fastcall sub_35598(const char *a1, int a2)
{
  int *v4; // r0
  int v5; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = _errno_location();
  snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v4, "bmminer.c", a1, a2);
  return sub_3AF5C(3, s, 1, v5);
}
