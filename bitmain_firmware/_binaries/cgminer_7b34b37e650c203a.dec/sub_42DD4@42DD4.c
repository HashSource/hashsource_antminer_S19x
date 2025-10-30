int __fastcall sub_42DD4(pthread_mutex_t *a1, const char *a2, int a3)
{
  int result; // r0
  int *v6; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = pthread_mutex_unlock(a1);
  if ( result )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v6, "driver-btm-c5_socketa.c", a2, a3);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  return result;
}
