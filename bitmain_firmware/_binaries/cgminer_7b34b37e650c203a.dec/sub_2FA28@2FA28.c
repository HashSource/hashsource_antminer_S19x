int __fastcall sub_2FA28(int a1, unsigned int a2)
{
  unsigned int v4; // r4
  int v5; // r1
  __time_t v6; // r4
  int v7; // r1
  int v8; // r4
  struct timeval v10; // [sp+0h] [bp-10h] BYREF
  struct timespec abstime; // [sp+8h] [bp-8h] BYREF

  v4 = a2 / 0x3E8;
  sub_239A4(&v10);
  v5 = 1000 * a2 - 1000000 * v4;
  v6 = v4 + v10.tv_sec;
  v7 = v5 + v10.tv_usec;
  if ( v7 > 999999 )
  {
    ++v6;
    v7 -= 1000000;
  }
  abstime.tv_sec = v6;
  abstime.tv_nsec = 1000 * v7;
  v8 = pthread_mutex_lock(&stru_767F4);
  if ( v8 )
    sub_2EFE0("restart_wait", 5422);
  if ( !*(_BYTE *)(a1 + 62) )
    v8 = pthread_cond_timedwait(&stru_76700, &stru_767F4, &abstime);
  if ( pthread_mutex_unlock(&stru_767F4) )
    sub_2F03C("restart_wait", 5432);
  off_67ED8();
  return v8;
}
