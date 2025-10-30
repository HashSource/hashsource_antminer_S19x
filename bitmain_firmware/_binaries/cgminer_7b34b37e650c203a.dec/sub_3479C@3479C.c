int sub_3479C()
{
  pthread_t v0; // r0
  int v1; // r9
  int v2; // r6
  int v3; // r3
  int v4; // r11
  int v5; // r10
  int v6; // r6
  int v7; // r6
  int v8; // r6
  int v9; // r12
  int v10; // r1
  int v11; // r2
  int v12; // r11
  int v13; // r6
  int v14; // r5
  int v15; // r5
  int v17; // r6
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v0 = pthread_self();
  pthread_detach(v0);
  sub_2541C((int)sub_23588, dword_75598 + (dword_69058 << 6), 1000);
  sleep(1u);
  pthread_mutex_lock(&mutex);
  if ( dword_68EF4 )
    free((void *)dword_68EF4);
  v1 = dword_733CC;
  if ( dword_733CC > 0 )
  {
    v2 = 0;
    do
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
      {
        snprintf(
          s,
          0x800u,
          "before add pool, pool->pool_no = %d, pool->rpc_url = %s\n",
          **(_DWORD **)(dword_744C8 + 4 * v2),
          *(const char **)(*(_DWORD *)(dword_744C8 + 4 * v2) + 164));
        sub_20F58(5, s, 0);
      }
      ++v2;
    }
    while ( v1 != v2 );
  }
  sub_2D8F0();
  v3 = dword_733CC;
  if ( dword_733CC == v1 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
    {
      strcpy(s, "Input pool error, try again\n");
      sub_20F58(4, s, 0);
    }
  }
  else
  {
    byte_69170 = 0;
    if ( dword_733CC > v1 )
    {
      v4 = 4 * v1;
      v5 = v1;
      do
      {
        v6 = *(_DWORD *)(dword_744C8 + v4);
        if ( *(_DWORD *)(v6 + 100) != 1 )
          sub_2B664((_DWORD *)(v6 + 100));
        v3 = dword_733CC;
        ++v5;
        *(_BYTE *)(v6 + 97) = 1;
        v4 += 4;
      }
      while ( v3 > v5 );
    }
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(s, 0x800u, "total_pools = %d, need to remove %d pools\n", v3, v1);
      sub_20F58(5, s, 0);
    }
    if ( dword_733CC > 0 )
    {
      v7 = 0;
      do
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
        {
          snprintf(
            s,
            0x800u,
            "after add pool, pool->pool_no = %d, pool->rpc_url = %s\n",
            **(_DWORD **)(dword_744C8 + 4 * v7),
            *(const char **)(*(_DWORD *)(dword_744C8 + 4 * v7) + 164));
          sub_20F58(5, s, 0);
        }
        ++v7;
      }
      while ( dword_733CC > v7 );
    }
    if ( v1 > 0 )
    {
      v8 = 0;
      do
      {
        v12 = *(_DWORD *)(dword_744C8 + 4 * v8);
        if ( v12 == sub_31FF4() )
          sub_34178(0);
        v9 = dword_74578;
        v10 = dword_6906C;
        ++v8;
        v11 = dword_69068;
        *(_DWORD *)(v12 + 100) = 0;
        dword_74578 = v9 - 1;
        dword_6906C = v10 - 1;
        dword_69068 = v11 - 1;
        --dword_69074;
        sub_2D0D8(v12);
      }
      while ( v1 != v8 );
    }
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(s, 0x800u, "total_pools after removed = %d\n", dword_733CC);
      sub_20F58(5, s, 0);
    }
    if ( dword_733CC > 0 )
    {
      v13 = 0;
      do
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
        {
          snprintf(
            s,
            0x800u,
            "after remove pool, pool->pool_no = %d, pool->rpc_url = %s\n",
            **(_DWORD **)(dword_744C8 + 4 * v13),
            *(const char **)(*(_DWORD *)(dword_744C8 + 4 * v13) + 164));
          sub_20F58(5, s, 0);
        }
        ++v13;
      }
      while ( dword_733CC > v13 );
    }
    v14 = 180;
    sub_2B41C();
    do
    {
      sleep(1u);
      if ( byte_69170 )
      {
        dword_69178 = 1;
        goto LABEL_47;
      }
      --v14;
    }
    while ( v14 );
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      strcpy(s, "error pool input");
      sub_20F58(3, s, 0);
    }
    if ( dword_733CC > 0 )
    {
      v17 = 0;
      do
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
        {
          snprintf(
            s,
            0x800u,
            "pool%d, url = %s, user = %s, pass = %s\n",
            **(_DWORD **)(dword_744C8 + 4 * v17),
            *(const char **)(*(_DWORD *)(dword_744C8 + 4 * v17) + 164),
            *(const char **)(*(_DWORD *)(dword_744C8 + 4 * v17) + 172),
            *(const char **)(*(_DWORD *)(dword_744C8 + 4 * v17) + 176));
          sub_20F58(3, s, 0);
        }
        ++v17;
      }
      while ( dword_733CC > v17 );
    }
  }
LABEL_47:
  pthread_mutex_unlock(&mutex);
  v15 = dword_75598 + (dword_69058 << 6);
  if ( sub_25164(v15, 0, (void *(*)(void *))sub_34DF4, 0) )
  {
    strcpy(s, "watchpool thread create failed");
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 0);
  }
  pthread_detach(*(_DWORD *)(v15 + 12));
  sleep(1u);
  newthread = 0;
  return 0;
}
