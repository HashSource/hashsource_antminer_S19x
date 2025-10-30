void __fastcall sub_3CFC4(pthread_mutex_t *a1, const char *a2, int a3)
{
  int *v5; // r0
  int v6; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_unlock(a1) )
  {
    v5 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v5, "util.c", a2, a3);
    sub_3B6AC(3, s, 1, v6);
    nullsub_1();
  }
}
