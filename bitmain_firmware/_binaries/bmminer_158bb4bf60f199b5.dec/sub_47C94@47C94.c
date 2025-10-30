int __fastcall sub_47C94(int a1)
{
  int result; // r0
  int *v3; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  result = pthread_mutex_unlock(&stru_246264);
  if ( result )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "logging.c", "my_log_curses", a1);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  return result;
}
