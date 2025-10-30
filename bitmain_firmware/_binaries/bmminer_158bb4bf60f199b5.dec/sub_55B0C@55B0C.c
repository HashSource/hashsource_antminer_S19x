int __fastcall sub_55B0C(int a1, unsigned int a2)
{
  unsigned int v4; // r4
  int v5; // r1
  __time_t v6; // r4
  int v7; // r1
  int v8; // r4
  struct timeval v10; // [sp+0h] [bp-10h] BYREF
  struct timespec abstime; // [sp+8h] [bp-8h] BYREF

  v4 = a2 / 0x3E8;
  sub_4A60C(&v10);
  v5 = 1000 * a2 - (_DWORD)&unk_F4240 * v4;
  v6 = v4 + v10.tv_sec;
  v7 = v5 + v10.tv_usec;
  if ( v7 > 999999 )
  {
    ++v6;
    v7 -= 1000000;
  }
  abstime.tv_sec = v6;
  abstime.tv_nsec = 1000 * v7;
  v8 = pthread_mutex_lock(&stru_246374);
  if ( v8 )
    sub_550B8("restart_wait", 5416);
  if ( !*(_BYTE *)(a1 + 62) )
    v8 = pthread_cond_timedwait(stru_246280, &stru_246374, &abstime);
  if ( pthread_mutex_unlock(&stru_246374) )
    sub_55114("restart_wait", 5426);
  off_9E444();
  return v8;
}
