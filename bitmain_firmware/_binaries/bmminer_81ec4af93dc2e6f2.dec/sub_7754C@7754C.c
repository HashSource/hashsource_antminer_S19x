int __fastcall sub_7754C(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r10
  int v10; // r11
  unsigned int v11; // r3
  unsigned int v13; // r3
  unsigned int v14; // r2
  int v15; // r3
  char *v16; // r2
  char *v17; // r3

  if ( a2 > 3 )
    return -1;
  if ( a3 > 0xFF )
    return -2;
  v5 = a4 >> 2;
  if ( a4 >> 2 > 0x40 )
    return -3;
  pthread_mutex_lock(&stru_53232C);
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v10 = -6;
      pthread_mutex_unlock(&stru_53232C);
      v11 = a2 << 6;
LABEL_7:
      printf(
        "[%s] level::%d, which_chain::%u, which_asic::%u,register_index::%u, hash_register_value::%08x, register_address:"
        ":%02x failed ,ret:%d.\r\n",
        "set_register_cache_value",
        a1,
        a2,
        a3,
        v5,
        dword_531B2C[2 * v11 + 2 * v5],
        a4,
        v10);
      return v10;
    }
    v13 = v5 + ((a3 + (a2 << 8)) << 6);
    if ( dword_532344[2 * v13] != a4 )
    {
      v10 = -5;
      pthread_mutex_unlock(&stru_53232C);
      v11 = a2 << 6;
      goto LABEL_7;
    }
    dword_532344[2 * v13 + 1] = a5;
    pthread_mutex_unlock(&stru_53232C);
    return 0;
  }
  else
  {
    v14 = (a2 << 6) + v5;
    if ( dword_531B2C[2 * v14] != a4 )
    {
      v10 = -4;
      pthread_mutex_unlock(&stru_53232C);
      v11 = a2 << 6;
      goto LABEL_7;
    }
    v15 = 2 * (v5 + (a2 << 14));
    dword_531B2C[2 * v14 + 1] = a5;
    v16 = (char *)&unk_552344 + v15 * 4;
    v17 = (char *)&dword_532344[v15];
    do
    {
      *((_DWORD *)v17 + 1) = a5;
      v17 += 512;
    }
    while ( v17 != v16 );
    pthread_mutex_unlock(&stru_53232C);
    return 0;
  }
}
