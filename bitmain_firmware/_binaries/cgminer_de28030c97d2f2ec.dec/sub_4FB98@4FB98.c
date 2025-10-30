int *sub_4FB98()
{
  pthread_t v0; // r0
  size_t v1; // r0
  pthread_attr_t v3; // [sp+1Ch] [bp-860h] BYREF
  char v4[2048]; // [sp+40h] [bp-83Ch] BYREF
  char s[4]; // [sp+840h] [bp-3Ch] BYREF
  int v6; // [sp+844h] [bp-38h]
  int v7; // [sp+848h] [bp-34h]
  int v8; // [sp+84Ch] [bp-30h]
  int v9; // [sp+850h] [bp-2Ch]
  int v10; // [sp+854h] [bp-28h]
  int v11; // [sp+858h] [bp-24h]
  int v12; // [sp+85Ch] [bp-20h]
  int v13; // [sp+860h] [bp-1Ch]
  int k; // [sp+864h] [bp-18h]
  int j; // [sp+868h] [bp-14h]
  int v16; // [sp+86Ch] [bp-10h]
  char v17; // [sp+873h] [bp-9h]
  int i; // [sp+874h] [bp-8h]

  i = 0;
  v17 = 0;
  v0 = pthread_self();
  pthread_detach(v0);
  pthread_mutex_lock(&stru_87E7C);
  v13 = dword_91F88 + (dword_87FCC << 6);
  if ( *(_DWORD *)(v13 + 12) )
  {
    sub_34B38(v13);
    usleep(0x186A0u);
    v17 = 1;
  }
  if ( dword_87E9C )
    free((void *)dword_87E9C);
  v12 = dword_92028;
  for ( i = 0; i < v12; ++i )
  {
    v11 = *(_DWORD *)(dword_920CC + 4 * i);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(
        v4,
        0x800u,
        "before add pool, pool->pool_no = %d, pool->rpc_url = %s\n",
        *(_DWORD *)v11,
        *(const char **)(v11 + 164));
      sub_1E4EC(7, v4, 0);
    }
  }
  sub_31BC8();
  if ( dword_92028 == v12 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      strcpy(v4, "Input pool error, try again\n");
      sub_1E4EC(3, v4, 0);
    }
    pthread_mutex_unlock(&stru_87E7C);
  }
  else
  {
    v16 = 0;
    byte_898C8 = 0;
    for ( j = v12; j < dword_92028; ++j )
    {
      v10 = *(_DWORD *)(dword_920CC + 4 * j);
      sub_328B4(v10);
      *(_BYTE *)(v10 + 97) = 1;
    }
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v4, 0x800u, "total_pools = %d, need to remove %d pools\n", dword_92028, v12);
      sub_1E4EC(7, v4, 0);
    }
    for ( i = 0; i < dword_92028; ++i )
    {
      v9 = *(_DWORD *)(dword_920CC + 4 * i);
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(
          v4,
          0x800u,
          "after add pool, pool->pool_no = %d, pool->rpc_url = %s\n",
          *(_DWORD *)v9,
          *(const char **)(v9 + 164));
        sub_1E4EC(7, v4, 0);
      }
    }
    for ( k = 0; k < v12; ++k )
    {
      v8 = *(_DWORD *)dword_920CC;
      if ( sub_2F984() == v8 )
        sub_364AC(0);
      *(_DWORD *)(v8 + 100) = 0;
      --dword_940EC;
      --dword_8809C;
      --dword_88098;
      --dword_88094;
      sub_3B544(v8);
    }
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v4, 0x800u, "total_pools after removed = %d\n", dword_92028);
      sub_1E4EC(7, v4, 0);
    }
    for ( i = 0; i < dword_92028; ++i )
    {
      v7 = *(_DWORD *)(dword_920CC + 4 * i);
      if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        snprintf(
          v4,
          0x800u,
          "after reload pool, pool->pool_no = %d, pool->rpc_url = %s\n",
          *(_DWORD *)v7,
          *(const char **)(v7 + 164));
        sub_1E4EC(5, v4, 0);
      }
    }
    sub_4E63C();
    do
    {
      sleep(1u);
      ++v16;
    }
    while ( byte_898C8 != 1 && v16 <= 7 );
    sub_4E78C();
    *(_DWORD *)s = 25970;
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v4, 0x800u, "pool change success, send %s", s);
      sub_1E4EC(7, v4, 0);
    }
    v1 = strlen(s);
    sub_585B0(s, v1);
    if ( byte_898C8 )
    {
      dword_87E78 = 1;
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        strcpy(v4, "error pool input");
        sub_1E4EC(3, v4, 0);
      }
      for ( i = 0; i < dword_92028; ++i )
      {
        v6 = *(_DWORD *)(dword_920CC + 4 * i);
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          snprintf(
            v4,
            0x800u,
            "pool%d, url = %s, user = %s, pass = %s\n",
            *(_DWORD *)v6,
            *(const char **)(v6 + 164),
            *(const char **)(v6 + 172),
            *(const char **)(v6 + 176));
          sub_1E4EC(3, v4, 0);
        }
      }
    }
    dword_8812C = 1;
    pthread_mutex_unlock(&stru_87E7C);
  }
  if ( v17 )
  {
    v13 = dword_91F88 + (dword_87FCC << 6);
    pthread_attr_init(&v3);
    pthread_attr_setstacksize(&v3, 0x200000u);
    if ( sub_219A8(v13, &v3, (void *(*)(void *))sub_49734, 0) )
    {
      strcpy(v4, "watchpool thread create failed");
      sub_1E4EC(3, v4, 1);
      sub_4BF08(1, 0);
    }
    pthread_detach(*(_DWORD *)(v13 + 12));
  }
  sleep(1u);
  dword_88128 = 0;
  return &dword_88128;
}
