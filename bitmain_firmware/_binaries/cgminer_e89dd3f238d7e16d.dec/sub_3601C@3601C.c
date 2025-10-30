int __fastcall sub_3601C(int a1, unsigned int a2)
{
  struct timespec abstime; // [sp+Ch] [bp-28h] BYREF
  __time_t v5; // [sp+14h] [bp-20h] BYREF
  int v6; // [sp+18h] [bp-1Ch]
  __time_t v7; // [sp+1Ch] [bp-18h]
  int v8; // [sp+20h] [bp-14h]
  unsigned int v9; // [sp+24h] [bp-10h]
  unsigned int v10; // [sp+28h] [bp-Ch]
  int v11; // [sp+2Ch] [bp-8h]

  v9 = a2 / 0x3E8;
  v10 = 1000 * a2 - 1000000 * (a2 / 0x3E8);
  sub_21AC0(&v5);
  v7 = v5 + v9;
  v8 = v6 + v10;
  if ( (int)(v6 + v10) > 999999 )
  {
    ++v7;
    v8 -= 1000000;
  }
  abstime.tv_sec = v7;
  abstime.tv_nsec = 1000 * v8;
  sub_2D2FC(&stru_92F9C, "cgminer.c", "restart_wait", 5484);
  if ( *(_BYTE *)(a1 + 62) )
    v11 = 0;
  else
    v11 = pthread_cond_timedwait(&stru_941C8, &stru_92F9C, &abstime);
  sub_2D434(&stru_92F9C, "cgminer.c", "restart_wait", 5494);
  return v11;
}
