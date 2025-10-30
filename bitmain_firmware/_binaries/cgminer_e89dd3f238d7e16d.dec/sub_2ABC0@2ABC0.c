int __fastcall sub_2ABC0(sem_t *a1, int a2, const char *a3, const char *a4, int a5)
{
  int *v6; // r0
  char v12[16]; // [sp+24h] [bp-820h] BYREF
  __time_t v13[2]; // [sp+824h] [bp-20h] BYREF
  _DWORD v14[2]; // [sp+82Ch] [bp-18h] BYREF
  struct timespec abstime; // [sp+834h] [bp-10h] BYREF

  sub_21AC0(v13);
  sub_214D8(v14, v13);
  sub_215E0(&abstime, (int)&abstime, a2, a2 >> 31);
  while ( 1 )
  {
    sub_21754(&abstime, v14);
    if ( !sem_timedwait(a1, &abstime) )
      break;
    if ( sub_1F238() )
      return 110;
    if ( !sub_1F264() )
    {
      v6 = _errno_location();
      snprintf(v12, 0x800u, "Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d", *v6, a1, a3, a4, a5);
      sub_1DB6C(3, v12, 1);
      sub_4B2A0(1);
    }
  }
  return 0;
}
