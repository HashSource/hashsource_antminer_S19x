int __fastcall sub_7740C(int a1, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // r8
  unsigned int v10; // r10
  int v11; // r11
  unsigned int v13; // r3
  unsigned int v14; // r3
  char *v15; // r3

  if ( a2 > 3 )
    return -1;
  if ( a3 > 0xFF )
    return -2;
  v5 = a4 >> 2;
  if ( a4 >> 2 > 0x3F )
    return -3;
  pthread_mutex_lock(&stru_53232C);
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v10 = a2 << 6;
      v11 = -6;
      pthread_mutex_unlock(&stru_53232C);
LABEL_7:
      printf(
        "[%s] level::%d, which_chain::%u, which_asic::%u,register_index::%u, hash_reg_val::%08x, register_address::%02x failed.\r\n",
        "get_register_cache_value",
        a1,
        a2,
        a3,
        v5,
        dword_531B2C[2 * v10 + 2 * v5],
        a4);
      return v11;
    }
    v13 = v5 + ((a3 + (a2 << 8)) << 6);
    if ( dword_532344[2 * v13] != a4 )
    {
      v10 = a2 << 6;
      v11 = -5;
      pthread_mutex_unlock(&stru_53232C);
      goto LABEL_7;
    }
    v15 = (char *)&dword_532344[2 * v13];
  }
  else
  {
    v10 = a2 << 6;
    v14 = (a2 << 6) + v5;
    if ( dword_531B2C[2 * v14] != a4 )
    {
      v11 = -4;
      pthread_mutex_unlock(&stru_53232C);
      goto LABEL_7;
    }
    v15 = (char *)&dword_531B2C[2 * v14];
  }
  *a5 = *((_DWORD *)v15 + 1);
  pthread_mutex_unlock(&stru_53232C);
  return 0;
}
