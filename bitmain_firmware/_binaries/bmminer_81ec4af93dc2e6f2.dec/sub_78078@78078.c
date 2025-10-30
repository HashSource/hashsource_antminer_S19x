int __fastcall sub_78078(int a1, int a2)
{
  int v2; // r7
  char *v5; // r4
  char *v6; // r3
  char *v7; // r5
  char *v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // r8
  unsigned int v12; // r4
  int v13; // r5
  size_t v14; // r0
  ssize_t v15; // r0
  ssize_t v16; // r0
  _DWORD *v17; // r0
  int optval; // [sp+8h] [bp-454h] BYREF
  socklen_t addr_len; // [sp+Ch] [bp-450h] BYREF
  pthread_t newthread; // [sp+10h] [bp-44Ch] BYREF
  struct sockaddr addr; // [sp+14h] [bp-448h] BYREF
  struct sockaddr v23; // [sp+24h] [bp-438h] BYREF
  pthread_attr_t attr; // [sp+34h] [bp-428h] BYREF
  char buf[4]; // [sp+58h] [bp-404h] BYREF
  _BYTE s[124]; // [sp+5Ch] [bp-400h] BYREF
  _DWORD v27[32]; // [sp+D8h] [bp-384h] BYREF
  char v28[256]; // [sp+158h] [bp-304h] BYREF
  _DWORD v29[129]; // [sp+258h] [bp-204h] BYREF

  v2 = dword_5B234C;
  if ( dword_5B234C )
    return -1;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x100000u);
  pthread_mutex_init(&stru_5B2350, 0);
  dword_5B2348 = a2;
  if ( a2 )
  {
    v5 = (char *)(a1 + 4);
    v6 = s2;
    v7 = &v5[136 * a2];
    do
    {
      v8 = (char *)memcpy(v6, v5, 0x80u);
      v5 += 136;
      v9 = *((_DWORD *)v5 - 35);
      v6 = v8 + 136;
      *((_DWORD *)v8 + 32) = *((_DWORD *)v5 - 2);
      *((_DWORD *)v8 - 1) = v9;
    }
    while ( v5 != v7 );
  }
  *(_WORD *)&addr.sa_data[6] = 0;
  *(_DWORD *)&addr.sa_data[8] = 0;
  *(_WORD *)&addr.sa_data[12] = 0;
  *(_WORD *)addr.sa_data = 0;
  addr.sa_family = 2;
  *(_DWORD *)&addr.sa_data[2] = inet_addr("127.0.0.1");
  optval = 1;
  v10 = socket(2, 1, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    v2 = -4;
    perror("socket error");
  }
  else if ( setsockopt(v10, 1, 2, &optval, 4u) < 0 )
  {
    v2 = -4;
    perror("set sockopt err");
  }
  else
  {
    v12 = 22026;
    while ( 1 )
    {
      *(_WORD *)addr.sa_data = __rev16(v12++);
      if ( bind(v11, &addr, 0x10u) >= 0 )
        break;
      perror("bind error");
    }
    if ( listen(v11, 5) < 0 )
    {
      v2 = -4;
      perror("listen error");
    }
    else
    {
      addr_len = 16;
      v13 = accept(v11, &v23, &addr_len);
      if ( v13 < 0 )
      {
        v2 = -4;
        perror("accept error");
      }
      else
      {
        *(_DWORD *)buf = 0;
        memset(s, 0, sizeof(s));
        sprintf(buf, "Hello!0x%x\n", 63);
        v14 = strlen(buf);
        send(v13, buf, v14 + 1, 0);
        dword_5B234C = 1;
        memset(v29, 0, 512);
        dword_5B2368 = v13;
        v15 = recv(v13, v29, 0x400u, 0);
        if ( v15 > 0 )
          *((_BYTE *)v29 + v15) = 0;
        strcpy(v28, "123 456 789 abc");
        memset(&v28[16], 0, 0xF0u);
        send(v13, v28, 0x10u, 0);
        memset(v27, 0, sizeof(v27));
        v16 = recv(v13, v27, 0x80u, 0);
        if ( v16 > 0 )
          *((_BYTE *)v27 + v16) = 0;
        v17 = malloc(0xCu);
        v17[2] = v13;
        v17[1] = v11;
        pthread_create(&newthread, &attr, (void *(*)(void *))sub_77D38, v17);
      }
    }
  }
  return v2;
}
