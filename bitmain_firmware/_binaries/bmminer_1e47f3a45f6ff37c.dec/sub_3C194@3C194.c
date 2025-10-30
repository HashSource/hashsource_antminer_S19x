void sub_3C194()
{
  int *v0; // r0
  int v1; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_5C3004) )
  {
    v0 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v0, "logging.c", "my_log_curses", 54);
    sub_3B6AC(3, s, 1, v1);
    nullsub_1();
  }
}
