int sub_17B7C()
{
  int v0; // r0
  int *v2; // r0
  int *v3; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_68A88) )
  {
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v2, "api.c", "restart_thread", 4841);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  if ( pthread_mutex_unlock(&stru_68A88) )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "api.c", "restart_thread", 4842);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  v0 = off_67ED8();
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy(s, "API: restarting bmminer");
    v0 = sub_20F58(7, s, 0);
  }
  sub_319C4(v0);
  return 0;
}
