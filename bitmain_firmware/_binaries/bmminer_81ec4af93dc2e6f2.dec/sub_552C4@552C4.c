size_t __fastcall sub_552C4(int a1, const void *a2, size_t a3)
{
  int v4; // r3
  char v9[12]; // [sp+18h] [bp-92Ch] BYREF
  int v10; // [sp+818h] [bp-12Ch] BYREF
  size_t v11; // [sp+81Ch] [bp-128h] BYREF
  int v12; // [sp+820h] [bp-124h] BYREF
  int v13; // [sp+824h] [bp-120h] BYREF
  int v14; // [sp+828h] [bp-11Ch] BYREF
  _BYTE s[256]; // [sp+82Ch] [bp-118h] BYREF
  size_t v16; // [sp+92Ch] [bp-18h]
  signed int v17; // [sp+930h] [bp-14h]
  int v18; // [sp+934h] [bp-10h]
  signed int i; // [sp+938h] [bp-Ch]
  int v20; // [sp+93Ch] [bp-8h]

  v20 = 0;
  v17 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  v16 = a3;
  v18 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  pthread_mutex_lock(&stru_5310A4[a1]);
  if ( sub_544FC(a1, &v10, &v14, &v13, &v12) )
  {
    snprintf(v9, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    sub_3AF5C(0, v9, 0, (int)v9);
    pthread_mutex_unlock(&stru_5310A4[a1]);
    return 0;
  }
  else
  {
    v20 = 0;
    while ( 1 )
    {
      sub_52E24(v14, &v11);
      v11 = (unsigned __int8)(v11 >> v10);
      if ( a3 <= v11 )
        break;
      usleep(0xBB8u);
      if ( ++v20 > 20 )
      {
        pthread_mutex_unlock(&stru_5310A4[a1]);
        snprintf(v9, 0x800u, "%s: uart%d always dose not has enough send fifo space, break\n", "uart_send", a1);
        sub_3AF5C(0, v9, 0, (int)v9);
        return 0;
      }
    }
    v20 = 0;
    while ( 1 )
    {
      sub_52E24(v13, &v11);
      if ( v11 >> 31 != 1 )
        break;
      usleep(0xBB8u);
      v4 = v20++;
      if ( v4 > 20 )
      {
        pthread_mutex_unlock(&stru_5310A4[a1]);
        snprintf(v9, 0x800u, "%s: uart%d always busy, break\n", "uart_send", a1);
        sub_3AF5C(0, v9, 0, (int)v9);
        return 0;
      }
    }
    memcpy(s, a2, a3);
    v17 = v16 >> 2;
    for ( i = 0; i < v17; ++i )
    {
      v18 = ((unsigned __int8)s[4 * i] << 24)
          | ((unsigned __int8)s[4 * i + 1] << 16)
          | ((unsigned __int8)s[4 * i + 2] << 8)
          | (unsigned __int8)s[4 * i + 3];
      sub_52EA0(v12, v18);
    }
    v17 = v16 & 3;
    if ( (v16 & 3) != 0 )
    {
      switch ( v17 )
      {
        case 2:
          v18 = ((unsigned __int8)s[4 * i] << 24) | ((unsigned __int8)s[4 * i + 1] << 16);
          break;
        case 3:
          v18 = ((unsigned __int8)s[4 * i] << 24)
              | ((unsigned __int8)s[4 * i + 1] << 16)
              | ((unsigned __int8)s[4 * i + 2] << 8);
          break;
        case 1:
          v18 = (unsigned __int8)s[4 * i] << 24;
          break;
        default:
          printf("%s: the uart%d send left data is 4*N length, error!!!\n", "uart_send", a1);
          break;
      }
      sub_52EA0(v12, v18);
    }
    sub_52EA0(v13, v16 | 0x80000000);
    pthread_mutex_unlock(&stru_5310A4[a1]);
    return v16;
  }
}
