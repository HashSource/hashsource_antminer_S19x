int __fastcall sub_6E3C8(int a1, int a2)
{
  int v4; // r8
  sem_t *v5; // r0
  int v6; // r0
  struct timespec v8; // [sp+4h] [bp+0h] BYREF

  v4 = clock_gettime(0, &v8);
  if ( v4 )
  {
    v4 = -1;
    sub_64E00((_BYTE *)&dword_0 + 3, "worker_sleep: clock_gettime() failed: %m");
  }
  else
  {
    v5 = *(sem_t **)(a1 + 48);
    v8.tv_sec += a2;
    v6 = sub_6E078(v5, &v8);
    if ( v6 )
    {
      if ( v6 != -1 || *_errno_location() != 110 )
      {
        v4 = -1;
        sub_64E00((_BYTE *)&dword_0 + 3, "worker_sleep: sem_timedwait: %m");
      }
    }
    else
    {
      return -1;
    }
  }
  return v4;
}
