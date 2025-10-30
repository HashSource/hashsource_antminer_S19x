void sub_3B9F0()
{
  int *v0; // r0
  int v1; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_5BE14C) )
  {
    v0 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v0, "logging.c", "my_log_curses", 54);
    sub_3AF5C(3, s, 1, v1);
    nullsub_1();
  }
}
