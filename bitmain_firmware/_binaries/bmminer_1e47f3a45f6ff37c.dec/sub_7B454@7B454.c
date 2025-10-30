int __fastcall sub_7B454(int a1, int a2)
{
  int v2; // r8
  int v5; // r6
  _DWORD *v6; // r5
  int v7; // r4
  int v8; // r9
  int v9; // r3
  int v10; // r2
  int v11; // r0
  int v12; // r6
  __int16 v13; // r4
  int v14; // r5
  size_t v15; // r0
  ssize_t v16; // r0
  ssize_t v17; // r0
  _DWORD *v18; // r0
  int optval; // [sp+8h] [bp-454h] BYREF
  socklen_t addr_len; // [sp+Ch] [bp-450h] BYREF
  pthread_t newthread; // [sp+10h] [bp-44Ch] BYREF
  struct sockaddr addr; // [sp+14h] [bp-448h] BYREF
  struct sockaddr v24; // [sp+24h] [bp-438h] BYREF
  pthread_attr_t attr; // [sp+34h] [bp-428h] BYREF
  char buf[4]; // [sp+58h] [bp-404h] BYREF
  _BYTE s[124]; // [sp+5Ch] [bp-400h] BYREF
  _DWORD v28[32]; // [sp+D8h] [bp-384h] BYREF
  char v29[256]; // [sp+158h] [bp-304h] BYREF
  _DWORD v30[129]; // [sp+258h] [bp-204h] BYREF

  v2 = dword_5BF608;
  if ( dword_5BF608 )
    return -1;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x100000u);
  pthread_mutex_init(&stru_5BF60C, 0);
  dword_5BB204 = a2;
  if ( a2 )
  {
    v5 = a1;
    v6 = &unk_5BB208;
    v7 = a1 + 4;
    v8 = v5 + 136 * a2 + 4;
    do
    {
      v7 += 136;
      memcpy(v6 + 1, (const void *)(v5 + 4), 0x80u);
      v9 = *(_DWORD *)(v7 - 140);
      v10 = *(_DWORD *)(v5 + 132);
      v5 += 136;
      v6[33] = v10;
      *v6 = v9;
      v6 += 34;
    }
    while ( v7 != v8 );
  }
  *(_WORD *)addr.sa_data = 0;
  *(_DWORD *)&addr.sa_data[10] = 0;
  *(_DWORD *)&addr.sa_data[6] = 0;
  addr.sa_family = 2;
  optval = 1;
  *(_DWORD *)&addr.sa_data[2] = inet_addr("127.0.0.1");
  v11 = socket(2, 1, 0);
  v12 = v11;
  if ( v11 < 0 )
  {
    v2 = -4;
    perror("socket error");
  }
  else if ( setsockopt(v11, 1, 2, &optval, 4u) < 0 )
  {
    v2 = -4;
    perror("set sockopt err");
  }
  else
  {
    v13 = 22026;
    while ( 1 )
    {
      addr.sa_data[0] = HIBYTE(v13);
      addr.sa_data[1] = v13++;
      if ( bind(v12, &addr, 0x10u) >= 0 )
        break;
      perror("bind error");
    }
    if ( listen(v12, 5) < 0 )
    {
      v2 = -4;
      perror("listen error");
    }
    else
    {
      addr_len = 16;
      v14 = accept(v12, &v24, &addr_len);
      if ( v14 < 0 )
      {
        v2 = -4;
        perror("accept error");
      }
      else
      {
        *(_DWORD *)buf = 0;
        memset(s, 0, sizeof(s));
        sprintf(buf, "Hello!0x%x\n", 63);
        v15 = strlen(buf);
        send(v14, buf, v15 + 1, 0);
        memset(v30, 0, 512);
        dword_5BF608 = 1;
        dword_5BF624 = v14;
        v16 = recv(v14, v30, 0x400u, 0);
        if ( v16 > 0 )
          *((_BYTE *)v30 + v16) = 0;
        strcpy(v29, "123 456 789 abc");
        memset(&v29[16], 0, 0xF0u);
        send(v14, v29, 0x10u, 0);
        memset(v28, 0, sizeof(v28));
        v17 = recv(v14, v28, 0x80u, 0);
        if ( v17 > 0 )
          *((_BYTE *)v28 + v17) = 0;
        v18 = malloc(0xCu);
        v18[2] = v14;
        v18[1] = v12;
        pthread_create(&newthread, &attr, (void *(*)(void *))sub_7B10C, v18);
      }
    }
  }
  return v2;
}
