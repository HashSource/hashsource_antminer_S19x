int __fastcall sub_7A98C(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r4
  unsigned int v10; // r11
  int v11; // r5
  _DWORD *v13; // r3
  unsigned int v14; // r1
  unsigned int v15; // r6
  char *v16; // r3

  v5 = a4 >> 2;
  if ( a2 > 3 )
    return -1;
  if ( a3 > 0xFF )
    return -2;
  if ( v5 > 0x40 )
    return -3;
  pthread_mutex_lock(&stru_5B71E8);
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v10 = a2 << 6;
      v11 = -6;
LABEL_7:
      pthread_mutex_unlock(&stru_5B71E8);
      printf(
        "[%s] level::%d, which_chain::%u, which_asic::%u,register_index::%u, hash_register_value::%08x, register_address:"
        ":%02x failed ,ret:%d.\r\n",
        "set_register_cache_value",
        a1,
        a2,
        a3,
        v5,
        dword_5369E8[2 * v10 + 2 * v5],
        a4,
        v11);
      return v11;
    }
    v13 = &dword_5369E8[128 * (a3 + (a2 << 8)) + 2 * v5];
    if ( v13[512] != a4 )
    {
      v10 = a2 << 6;
      v11 = -5;
      goto LABEL_7;
    }
    v13[513] = a5;
  }
  else
  {
    v10 = a2 << 6;
    v14 = (a2 << 6) + v5;
    if ( dword_5369E8[2 * v14] != a4 )
    {
      v11 = -4;
      goto LABEL_7;
    }
    v15 = a2 << 14;
    v16 = (char *)&unk_5371E8 + 8 * v15 + 8 * v5;
    dword_5369E8[2 * v14 + 1] = a5;
    do
    {
      *((_DWORD *)v16 + 1) = a5;
      v16 += 512;
    }
    while ( v16 != (char *)&unk_5371E8 + 8 * v15 + 8 * v5 + 0x20000 );
  }
  pthread_mutex_unlock(&stru_5B71E8);
  return 0;
}
