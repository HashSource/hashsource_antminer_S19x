int __fastcall sub_3E154(sem_t *a1, int a2, const char *a3, const char *a4, int a5)
{
  __time_t tv_sec; // r10
  int v8; // r5
  int v9; // r3
  __time_t v10; // r2
  bool v11; // cc
  int v12; // r1
  __time_t v13; // r0
  int result; // r0
  int v15; // r3
  struct timespec abstime; // [sp+18h] [bp-80Ch] BYREF
  struct timespec tp; // [sp+20h] [bp-804h] BYREF

  clock_gettime(1, &tp);
  tv_sec = tp.tv_sec;
  v8 = 1000 * (tp.tv_nsec / 1000);
  sub_3D564(&abstime);
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
      snprintf((char *)&tp, 0x800u, "Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d", result, a1, a3, a4, a5);
      sub_3AF5C(3, (const char *)&tp, 1, v15);
      nullsub_1();
      return 0;
    }
  }
  return result;
}
