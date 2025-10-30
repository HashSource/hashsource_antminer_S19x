void __fastcall sub_3B974(int a1)
{
  int *v2; // r0
  int v3; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( pthread_mutex_unlock(&stru_5BE14C) )
  {
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v2, "logging.c", "my_log_curses", a1);
    sub_3AF5C(3, s, 1, v3);
    nullsub_1();
  }
}
