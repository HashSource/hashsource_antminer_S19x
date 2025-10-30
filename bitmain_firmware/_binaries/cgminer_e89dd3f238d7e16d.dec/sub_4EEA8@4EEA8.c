int *sub_4EEA8()
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
  pthread_mutex_lock(&stru_86CE4);
  v13 = dword_90DF0 + (dword_86E34 << 6);
  if ( *(_DWORD *)(v13 + 12) )
  {
    sub_33AA8(v13);
    usleep(0x186A0u);
    v17 = 1;
  }
  if ( dword_86D04 )
    free((void *)dword_86D04);
  v12 = dword_90E90;
  for ( i = 0; i < v12; ++i )
  {
    v6 = *(_DWORD *)(dword_90F34 + 4 * i);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(
        v4,
        0x800u,
        "before add pool, pool->pool_no = %d, pool->rpc_url = %s\n",
        *(_DWORD *)v6,
        *(const char **)(v6 + 164));
      sub_1DB6C(7, v4, 0);
    }
  }
  sub_30A88();
  if ( v12 == dword_90E90 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      strcpy(v4, "Input pool error, try again\n");
      sub_1DB6C(3, v4, 0);
    }
    pthread_mutex_unlock(&stru_86CE4);
  }
  else
  {
    v16 = 0;
    byte_88730 = 0;
    for ( j = v12; j < dword_90E90; ++j )
    {
      v7 = *(_DWORD *)(dword_90F34 + 4 * j);
      sub_3178C(v7);
      *(_BYTE *)(v7 + 97) = 1;
    }
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v4, 0x800u, "total_pools = %d, need to remove %d pools\n", dword_90E90, v12);
      sub_1DB6C(7, v4, 0);
    }
    for ( i = 0; i < dword_90E90; ++i )
    {
      v8 = *(_DWORD *)(dword_90F34 + 4 * i);
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(
          v4,
          0x800u,
          "after add pool, pool->pool_no = %d, pool->rpc_url = %s\n",
          *(_DWORD *)v8,
          *(const char **)(v8 + 164));
        sub_1DB6C(7, v4, 0);
      }
    }
    for ( k = 0; k < v12; ++k )
    {
      v9 = *(_DWORD *)dword_90F34;
      if ( v9 == sub_2E98C() )
        sub_35460(0);
      *(_DWORD *)(v9 + 100) = 0;
      --dword_92F54;
      --dword_86F04;
      --dword_86F00;
      --dword_86EFC;
      sub_3A5F8(v9);
    }
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v4, 0x800u, "total_pools after removed = %d\n", dword_90E90);
      sub_1DB6C(7, v4, 0);
    }
    for ( i = 0; i < dword_90E90; ++i )
    {
      v10 = *(_DWORD *)(dword_90F34 + 4 * i);
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
      {
        snprintf(
          v4,
          0x800u,
          "after reload pool, pool->pool_no = %d, pool->rpc_url = %s\n",
          *(_DWORD *)v10,
          *(const char **)(v10 + 164));
        sub_1DB6C(5, v4, 0);
      }
    }
    sub_4D9B4();
    do
    {
      sleep(1u);
      ++v16;
    }
    while ( byte_88730 != 1 && v16 <= 7 );
    sub_4DB08();
    *(_DWORD *)s = 25970;
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v4, 0x800u, "pool change success, send %s", s);
      sub_1DB6C(7, v4, 0);
    }
    v1 = strlen(s);
    sub_57A3C(s, v1);
    if ( byte_88730 )
    {
      dword_86CE0 = 1;
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        strcpy(v4, "error pool input");
        sub_1DB6C(3, v4, 0);
      }
      for ( i = 0; i < dword_90E90; ++i )
      {
        v11 = *(_DWORD *)(dword_90F34 + 4 * i);
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
        {
          snprintf(
            v4,
            0x800u,
            "pool%d, url = %s, user = %s, pass = %s\n",
            *(_DWORD *)v11,
            *(const char **)(v11 + 164),
            *(const char **)(v11 + 172),
            *(const char **)(v11 + 176));
          sub_1DB6C(3, v4, 0);
        }
      }
    }
    dword_86F94 = 1;
    pthread_mutex_unlock(&stru_86CE4);
  }
  if ( v17 )
  {
    v13 = dword_90DF0 + (dword_86E34 << 6);
    pthread_attr_init(&v3);
    pthread_attr_setstacksize(&v3, 0x200000u);
    if ( sub_2112C(v13, &v3, (void *(*)(void *))sub_489C4, 0) )
    {
      strcpy(v4, "watchpool thread create failed");
      sub_1DB6C(3, v4, 1);
      sub_4B1F8(1, 0);
    }
    pthread_detach(*(_DWORD *)(v13 + 12));
  }
  sleep(1u);
  dword_86F90 = 0;
  return &dword_86F90;
}
