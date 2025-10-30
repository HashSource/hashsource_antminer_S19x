size_t __fastcall sub_6EF5C(int a1, const void *a2, size_t a3)
{
  pthread_mutex_t *v6; // r7
  int v7; // r4
  size_t v8; // r3
  int v10; // r4
  size_t v11; // r8
  unsigned __int8 *v12; // r4
  int v13; // r9
  int v14; // r3
  int v15; // lr
  int v16; // r3
  int v17; // r1
  int v18; // [sp+Ch] [bp-914h] BYREF
  int v19; // [sp+10h] [bp-910h] BYREF
  int v20; // [sp+14h] [bp-90Ch] BYREF
  int v21; // [sp+18h] [bp-908h] BYREF
  int v22; // [sp+1Ch] [bp-904h] BYREF
  unsigned __int8 s[256]; // [sp+20h] [bp-900h] BYREF
  char v24[2048]; // [sp+120h] [bp-800h] BYREF

  memset(s, 0, sizeof(s));
  v6 = &stru_65DFC8[a1];
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  pthread_mutex_lock(v6);
  if ( sub_6EAAC(a1, &v22, &v18, &v19, &v20) )
  {
    snprintf(v24, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    nullsub_8();
    pthread_mutex_unlock(&stru_65DFC8[a1]);
    return 0;
  }
  else
  {
    v7 = 21;
    while ( 1 )
    {
      sub_6E060(v18, &v21);
      v8 = (unsigned __int8)((unsigned int)v21 >> v22);
      v21 = v8;
      if ( a3 <= v8 )
        break;
      usleep(0xBB8u);
      if ( !--v7 )
      {
        pthread_mutex_unlock(&stru_65DFC8[a1]);
        snprintf(v24, 0x800u, "%s: uart%d always dose not has enough send fifo space, break\n", "uart_send", a1);
LABEL_6:
        nullsub_8();
        return 0;
      }
    }
    v10 = 22;
    while ( 1 )
    {
      sub_6E060(v19, &v21);
      if ( v21 >= 0 )
        break;
      usleep(0xBB8u);
      if ( !--v10 )
      {
        pthread_mutex_unlock(&stru_65DFC8[a1]);
        snprintf(v24, 0x800u, "%s: uart%d always busy, break\n", "uart_send", a1);
        goto LABEL_6;
      }
    }
    memcpy(s, a2, a3);
    v11 = a3 >> 2;
    if ( a3 >> 2 )
    {
      v12 = s;
      v13 = 0;
      do
      {
        v14 = v12[1];
        ++v13;
        v15 = *v12;
        v12 += 4;
        sub_6E0BC(v20, (v14 << 16) | (v15 << 24) | *(v12 - 1) | (*(v12 - 2) << 8));
      }
      while ( v11 != v13 );
    }
    v16 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      if ( v16 == 2 )
      {
        v17 = (s[4 * v11] << 24) | (s[4 * v11 + 1] << 16);
      }
      else if ( v16 == 3 )
      {
        v17 = (s[4 * v11 + 2] << 8) | (s[4 * v11 + 1] << 16) | (s[4 * v11] << 24);
      }
      else
      {
        v17 = s[4 * v11] << 24;
      }
      sub_6E0BC(v20, v17);
    }
    sub_6E0BC(v19, a3 | 0x80000000);
    pthread_mutex_unlock(v6);
    return a3;
  }
}
