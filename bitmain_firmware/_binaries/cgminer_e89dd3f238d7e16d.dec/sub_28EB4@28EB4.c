int __fastcall sub_28EB4(int a1)
{
  char v3[4]; // [sp+8h] [bp-804h] BYREF

  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
  {
    snprintf(v3, 0x800u, "Closing socket for stratum pool %d", *(_DWORD *)a1);
    sub_1DB6C(6, v3, 0);
  }
  sub_1F44C((pthread_mutex_t *)(a1 + 704), "util.c", "suspend_stratum", 3313);
  sub_25954(a1);
  return sub_1F584((pthread_mutex_t *)(a1 + 704), "util.c", "suspend_stratum", 3315);
}
