int __fastcall sub_24340(int a1)
{
  int *v3; // r0
  int *v4; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
  {
    snprintf(s, 0x800u, "Closing socket for stratum pool %d", *(_DWORD *)a1);
    sub_20F58(6, s, 0);
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 704)) )
  {
    v4 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v4, "util.c", "suspend_stratum", 3130);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  sub_223C0(a1);
  if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 704)) )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "util.c", "suspend_stratum", 3132);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  return off_67ED8();
}
