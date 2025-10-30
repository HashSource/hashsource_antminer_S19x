int sub_211B8()
{
  int result; // r0
  int *v1; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = pthread_mutex_lock(&stru_766E4);
  if ( result )
  {
    v1 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v1, "logging.c", "my_log_curses", 52);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  return result;
}
