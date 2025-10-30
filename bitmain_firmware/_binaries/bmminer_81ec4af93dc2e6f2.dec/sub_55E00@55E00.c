int __fastcall sub_55E00(int a1)
{
  char v3[12]; // [sp+10h] [bp-81Ch] BYREF
  int v4; // [sp+810h] [bp-1Ch] BYREF
  unsigned int v5; // [sp+814h] [bp-18h] BYREF
  int v6; // [sp+818h] [bp-14h] BYREF
  int v7; // [sp+81Ch] [bp-10h] BYREF
  int v8; // [sp+820h] [bp-Ch] BYREF
  unsigned int i; // [sp+824h] [bp-8h]

  v8 = 0;
  v7 = 0;
  v6 = 0;
  v5 = 0;
  v4 = 0;
  i = 0;
  pthread_mutex_lock(&stru_5310A4[a1]);
  if ( sub_544FC(a1, &v4, &v8, &v7, &v6) )
  {
    snprintf(v3, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    sub_3AF5C(0, v3, 0, (int)v3);
    return pthread_mutex_unlock(&stru_5310A4[a1]);
  }
  else
  {
    for ( i = 0; i <= 0x14; ++i )
    {
      sub_52E24(v8, &v5);
      v5 = (unsigned __int8)(v5 >> v4);
      if ( v5 == 255 )
        return pthread_mutex_unlock(&stru_5310A4[a1]);
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      sub_52EA0(v7, v5 | 0x80000000);
      usleep(0xBB8u);
    }
    snprintf(v3, 0x800u, "%s: uart%d always dose not has enough send fifo space, break\n", "clear_uart_tx_fifo", a1);
    sub_3AF5C(0, v3, 0, (int)v3);
    return pthread_mutex_unlock(&stru_5310A4[a1]);
  }
}
