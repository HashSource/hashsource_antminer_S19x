int __fastcall sub_78850(int a1, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // r9
  unsigned int v10; // r11
  int v11; // r10
  char *v13; // r3
  unsigned int v14; // r2

  if ( a2 > 3 )
    return -1;
  if ( a3 > 0xFF )
    return -2;
  v5 = a4 >> 2;
  if ( a4 >> 2 > 0x3F )
    return -3;
  pthread_mutex_lock(&stru_6DF250);
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v10 = a2 << 6;
      v11 = -6;
LABEL_7:
      pthread_mutex_unlock(&stru_6DF250);
      printf(
        "[%s] level::%d, which_chain::%u, which_asic::%u,register_index::%u, hash_reg_val::%08x, register_address::%02x failed.\r\n",
        "get_register_cache_value",
        a1,
        a2,
        a3,
        v5,
        dword_65EA50[2 * v10 + 2 * v5],
        a4);
      return v11;
    }
    v13 = (char *)&dword_65EA50[128 * (a3 + (a2 << 8)) + 2 * v5];
    if ( a4 != *((_DWORD *)v13 + 512) )
    {
      v10 = a2 << 6;
      v11 = -5;
      goto LABEL_7;
    }
    *a5 = *((_DWORD *)v13 + 513);
  }
  else
  {
    v10 = a2 << 6;
    v14 = (a2 << 6) + v5;
    if ( a4 != dword_65EA50[2 * v14] )
    {
      v11 = -4;
      goto LABEL_7;
    }
    *a5 = dword_65EA50[2 * v14 + 1];
  }
  pthread_mutex_unlock(&stru_6DF250);
  return 0;
}
