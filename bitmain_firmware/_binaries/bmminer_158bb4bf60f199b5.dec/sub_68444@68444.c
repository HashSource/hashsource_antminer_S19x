int __fastcall sub_68444(int a1)
{
  pthread_mutex_t *v2; // r4
  size_t v3; // r0
  unsigned int v4; // r6
  void *v5; // r0
  void *v6; // r7
  unsigned int v7; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v2 = (pthread_mutex_t *)((char *)&unk_1B1038 + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_6793C((unsigned __int8)a1);
  v4 = v3;
  if ( !v3 )
    return pthread_mutex_unlock(v2);
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_67C5C(a1, (int)v5, v4);
    if ( v4 != v7 )
    {
      snprintf(s, 0x800u, "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n", "clear_uart_rx_fifo", a1, v4, v7);
      sub_47AB4(0, s, 0);
    }
    free(v6);
    usleep(0x2710u);
    return pthread_mutex_unlock(v2);
  }
  snprintf(s, 0x800u, "%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", a1);
  sub_47AB4(0, s, 0);
  usleep((__useconds_t)"d asic, will power off hash board %d\n");
  return pthread_mutex_unlock(v2);
}
