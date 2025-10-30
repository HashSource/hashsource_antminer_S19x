int __fastcall sub_252A8(sem_t *a1, int a2, const char *a3, const char *a4, int a5)
{
  __time_t tv_sec; // r10
  int v8; // r5
  int v9; // r3
  __time_t v10; // r2
  bool v11; // cc
  int v12; // r1
  __time_t v13; // r0
  int result; // r0
  struct timespec abstime; // [sp+18h] [bp-814h] BYREF
  struct timeval tv; // [sp+20h] [bp-80Ch] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  gettimeofday(&tv, 0);
  tv_sec = tv.tv_sec;
  v8 = 1000 * tv.tv_usec;
  sub_23768(&abstime);
  while ( 1 )
  {
    v9 = v8 + abstime.tv_nsec;
    v10 = tv_sec + abstime.tv_sec;
    v11 = v8 + abstime.tv_nsec <= 999999999;
    abstime.tv_sec += tv_sec;
    abstime.tv_nsec += v8;
    if ( v11 )
    {
      if ( v9 < 0 )
      {
        do
        {
          v9 += 1000000000;
          --v10;
        }
        while ( v9 < 0 );
        abstime.tv_sec = v10;
        abstime.tv_nsec = v9;
      }
    }
    else
    {
      v12 = v9 - 1000000000;
      v13 = v10 + 1;
      if ( v9 - 1000000000 > 999999999 )
      {
        v12 = v9 - 2000000000;
        v13 = v10 + 2;
      }
      abstime.tv_sec = v13;
      abstime.tv_nsec = v12;
    }
    result = sem_timedwait(a1, &abstime);
    if ( !result )
      break;
    result = *_errno_location();
    if ( result == 110 )
      break;
    if ( result != 4 )
    {
      snprintf(s, 0x800u, "Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d", result, a1, a3, a4, a5);
      sub_20F58(3, s, 1);
      sub_3EBA0(1);
    }
  }
  return result;
}
