int __fastcall sub_226F0(pthread_rwlock_t *a1, const char *a2, int a3)
{
  int result; // r0
  int *v6; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = pthread_rwlock_wrlock(a1);
  if ( result )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v6, "util.c", a2, a3);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  return result;
}
