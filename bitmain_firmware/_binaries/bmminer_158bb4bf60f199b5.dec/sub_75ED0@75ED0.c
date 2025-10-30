int __fastcall sub_75ED0(int a1, unsigned int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v6; // r6
  unsigned int v10; // r6
  int v11; // r4
  unsigned int v13; // r6

  if ( a2 > 3 )
    return -1;
  v6 = a4 >> 2;
  pthread_mutex_lock((pthread_mutex_t *)&byte_1B14EC[2048]);
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v11 = -6;
      pthread_mutex_unlock((pthread_mutex_t *)&byte_1B14EC[2048]);
      goto LABEL_6;
    }
    v10 = v6 + ((a3 + (a2 << 8)) << 6);
    if ( byte_1B1D04[8 * v10] != a4 )
    {
      v11 = -5;
      pthread_mutex_unlock((pthread_mutex_t *)&byte_1B14EC[2048]);
LABEL_6:
      printf(
        "[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n",
        "set_register_cache_value",
        a1,
        a2,
        a3,
        a4);
      return v11;
    }
    *(_DWORD *)&byte_1B1D04[8 * v10 + 4] = a5;
    pthread_mutex_unlock((pthread_mutex_t *)&byte_1B14EC[2048]);
  }
  else
  {
    v13 = v6 + (a2 << 6);
    if ( byte_1B14EC[8 * v13] != a4 )
    {
      v11 = -4;
      pthread_mutex_unlock((pthread_mutex_t *)&byte_1B14EC[2048]);
      goto LABEL_6;
    }
    *(_DWORD *)&byte_1B14EC[8 * v13 + 4] = a5;
    pthread_mutex_unlock((pthread_mutex_t *)&byte_1B14EC[2048]);
  }
  printf(
    "[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x, register_value::%08x.\r\n",
    "set_register_cache_value",
    a1,
    a2,
    a3,
    a4,
    a5);
  return 0;
}
