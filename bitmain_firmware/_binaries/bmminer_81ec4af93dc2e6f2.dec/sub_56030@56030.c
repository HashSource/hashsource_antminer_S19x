int __fastcall sub_56030(int a1)
{
  char v3[16]; // [sp+1Ch] [bp-810h] BYREF
  void *ptr; // [sp+81Ch] [bp-10h]
  size_t size; // [sp+820h] [bp-Ch]
  int v6; // [sp+824h] [bp-8h]

  v6 = 0;
  ptr = 0;
  pthread_mutex_lock(&stru_531224[a1]);
  size = sub_54AF8(a1);
  if ( !size )
    return pthread_mutex_unlock(&stru_531224[a1]);
  ptr = malloc(size);
  if ( ptr )
  {
    v6 = sub_54D5C(a1, (int)ptr, size);
    if ( v6 == size )
    {
      free(ptr);
      usleep(0x2710u);
      return pthread_mutex_unlock(&stru_531224[a1]);
    }
    else
    {
      snprintf(
        v3,
        0x800u,
        "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n",
        "clear_uart_rx_fifo",
        a1,
        size,
        v6);
      sub_3AF5C(0, v3, 0, (int)v3);
      free(ptr);
      ptr = 0;
      usleep(0x2710u);
      return pthread_mutex_unlock(&stru_531224[a1]);
    }
  }
  else
  {
    snprintf(v3, 0x800u, "%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", a1);
    sub_3AF5C(0, v3, 0, (int)v3);
    ptr = 0;
    usleep(0x7A120u);
    return pthread_mutex_unlock(&stru_531224[a1]);
  }
}
