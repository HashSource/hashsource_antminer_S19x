int __fastcall sub_3E890(sem_t *a1, int a2, const char *a3, const char *a4, int a5)
{
  int result; // r0
  int v9; // r3
  struct timespec abstime; // [sp+10h] [bp-814h] BYREF
  _DWORD v11[2]; // [sp+18h] [bp-80Ch] BYREF
  struct timespec tp; // [sp+20h] [bp-804h] BYREF

  clock_gettime(1, &tp);
  v11[0] = tp.tv_sec;
  v11[1] = 1000 * (tp.tv_nsec / 1000);
  sub_3DD80(&abstime);
  while ( 1 )
  {
    sub_3DDFC(&abstime.tv_sec, v11);
    result = sem_timedwait(a1, &abstime);
    if ( !result )
      break;
    result = *_errno_location();
    if ( result == 110 )
      break;
    if ( result != 4 )
    {
      snprintf((char *)&tp, 0x800u, "Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d", result, a1, a3, a4, a5);
      sub_3B6AC(3, (const char *)&tp, 1, v9);
      nullsub_1();
      return 0;
    }
  }
  return result;
}
