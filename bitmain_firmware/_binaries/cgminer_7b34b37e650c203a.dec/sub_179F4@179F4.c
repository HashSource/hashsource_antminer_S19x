void __noreturn sub_179F4()
{
  int v0; // r0
  int *v1; // r0
  int *v2; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( !pthread_mutex_lock(&stru_68A88) )
  {
    if ( !pthread_mutex_unlock(&stru_68A88) )
    {
      v0 = off_67ED8();
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        strcpy(s, "API: killing bmminer");
        v0 = sub_20F58(7, s, 0);
      }
      sub_2E730(v0);
    }
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v2, "api.c", "quit_thread", 4828);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  v1 = _errno_location();
  snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v1, "api.c", "quit_thread", 4827);
  sub_20F58(3, s, 1);
  sub_3EBA0(1);
}
