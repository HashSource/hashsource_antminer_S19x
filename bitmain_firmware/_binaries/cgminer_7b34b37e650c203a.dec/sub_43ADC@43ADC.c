int __fastcall sub_43ADC(int a1)
{
  pthread_t v2; // r0
  unsigned int v3; // r2
  int v4; // r0
  int v5; // r4
  unsigned int i; // r3
  int v7; // r5
  size_t v8; // r0
  void *v9; // r6
  ssize_t v10; // r1
  int (__fastcall *v11)(void *, ssize_t); // r4
  size_t v12; // r0
  size_t n; // [sp+Ch] [bp-240h]
  int v15; // [sp+10h] [bp-23Ch] BYREF
  socklen_t v16; // [sp+14h] [bp-238h] BYREF
  char s[4]; // [sp+18h] [bp-234h] BYREF
  int v18; // [sp+1Ch] [bp-230h]
  int v19; // [sp+20h] [bp-22Ch]
  int v20; // [sp+24h] [bp-228h]
  struct sockaddr addr; // [sp+28h] [bp-224h] BYREF
  struct sockaddr v22; // [sp+38h] [bp-214h] BYREF
  char buf[4]; // [sp+48h] [bp-204h] BYREF
  char v24[252]; // [sp+4Ch] [bp-200h] BYREF
  char v25[4]; // [sp+148h] [bp-104h] BYREF
  _BYTE v26[252]; // [sp+14Ch] [bp-100h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v3 = *(_DWORD *)a1;
  *(_DWORD *)s = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  sprintf(s, "ct_a/fcb/%d", v3);
  prctl(15, s);
  addr.sa_family = 2;
  *(_DWORD *)&addr.sa_data[2] = inet_addr("127.0.0.1");
  v4 = socket(2, 1, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    perror("socket error");
    return 0;
  }
  else
  {
    v15 = 1;
    if ( setsockopt(v4, 1, 2, &v15, 4u) < 0 )
    {
      perror("set sockopt err");
      return 0;
    }
    else
    {
      for ( i = *(_DWORD *)a1; ; *(_DWORD *)a1 = i )
      {
        *(_WORD *)addr.sa_data = __rev16(i);
        if ( bind(v5, &addr, 0x10u) >= 0 )
          break;
        perror("bind error");
        i = *(_DWORD *)a1 + 1;
      }
      if ( listen(v5, 5) < 0 )
      {
        perror("listen error");
      }
      else
      {
        v16 = 16;
        *(_DWORD *)(a1 + 144) = 1;
        v7 = accept(v5, &v22, &v16);
        if ( v7 >= 0 )
        {
          *(_DWORD *)buf = 0;
          memset(v24, 0, sizeof(v24));
          sprintf(buf, "%x %s\n", 63, (const char *)(a1 + 16));
          v8 = strlen(buf);
          send(v7, buf, v8 + 1, 0);
          n = *(_DWORD *)(a1 + 148);
          v9 = malloc(n);
          recv(v7, v9, n, 0);
          while ( 1 )
          {
            v10 = recv(v7, v9, *(_DWORD *)(a1 + 148), 0);
            if ( v10 > 0 )
            {
              v11 = *(int (__fastcall **)(void *, ssize_t))(a1 + 12);
              if ( v11 )
                v11 = (int (__fastcall *)(void *, ssize_t))v11(v9, v10);
            }
            else
            {
              v11 = 0;
            }
            *(_DWORD *)v25 = 0;
            memset(v26, 0, sizeof(v26));
            sprintf(v25, "%x %d %s %s", 63, v11, a1 + 16, "OK");
            v12 = strlen(v25);
            send(v7, v25, v12 + 1, 0);
          }
        }
        perror("accept error");
      }
      return 0;
    }
  }
}
