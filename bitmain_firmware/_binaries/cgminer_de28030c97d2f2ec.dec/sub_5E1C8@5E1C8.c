int __fastcall sub_5E1C8(const char *a1)
{
  pthread_t v1; // r0
  size_t v2; // r0
  size_t v3; // r0
  char v6[4]; // [sp+10h] [bp-254h] BYREF
  char v7[252]; // [sp+14h] [bp-250h] BYREF
  char buf[4]; // [sp+110h] [bp-154h] BYREF
  _BYTE v9[252]; // [sp+114h] [bp-150h] BYREF
  socklen_t addr_len; // [sp+210h] [bp-54h] BYREF
  struct sockaddr v11; // [sp+214h] [bp-50h] BYREF
  int optval; // [sp+224h] [bp-40h] BYREF
  struct sockaddr addr; // [sp+228h] [bp-3Ch] BYREF
  char s[4]; // [sp+238h] [bp-2Ch] BYREF
  int v15; // [sp+23Ch] [bp-28h]
  int v16; // [sp+240h] [bp-24h]
  int v17; // [sp+244h] [bp-20h]
  void *v18; // [sp+248h] [bp-1Ch]
  ssize_t v19; // [sp+24Ch] [bp-18h]
  int v20; // [sp+250h] [bp-14h]
  int fd; // [sp+254h] [bp-10h]
  const char *v22; // [sp+258h] [bp-Ch]
  int v23; // [sp+25Ch] [bp-8h]

  v1 = pthread_self();
  pthread_detach(v1);
  v22 = a1;
  *(_DWORD *)s = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  sprintf(s, "ct_a/fcb/%d", *(_DWORD *)a1);
  prctl(15, s);
  addr.sa_family = 2;
  *(_DWORD *)&addr.sa_data[2] = inet_addr("127.0.0.1");
  fd = socket(2, 1, 0);
  if ( fd >= 0 )
  {
    optval = 1;
    if ( setsockopt(fd, 1, 2, &optval, 4u) >= 0 )
    {
      while ( 1 )
      {
        *(_WORD *)addr.sa_data = htons(*(_DWORD *)v22);
        if ( bind(fd, &addr, 0x10u) >= 0 )
          break;
        perror("bind error");
        ++*(_DWORD *)v22;
      }
      if ( listen(fd, 5) >= 0 )
      {
        *((_DWORD *)v22 + 36) = 1;
        addr_len = 16;
        v20 = accept(fd, &v11, &addr_len);
        if ( v20 >= 0 )
        {
          *(_DWORD *)buf = 0;
          memset(v9, 0, sizeof(v9));
          sprintf(buf, "%x %s\n", 63, v22 + 16);
          v2 = strlen(buf);
          send(v20, buf, v2 + 1, 0);
          v19 = 0;
          v18 = malloc(*((_DWORD *)v22 + 37));
          v19 = recv(v20, v18, *((_DWORD *)v22 + 37), 0);
          while ( 1 )
          {
            v19 = recv(v20, v18, *((_DWORD *)v22 + 37), 0);
            v23 = 0;
            if ( v19 > 0 && *((_DWORD *)v22 + 3) )
              v23 = (*((int (__fastcall **)(void *, ssize_t))v22 + 3))(v18, v19);
            *(_DWORD *)v6 = 0;
            memset(v7, 0, sizeof(v7));
            sprintf(v6, "%x %d %s %s", 63, v23, v22 + 16, "OK");
            v3 = strlen(v6);
            send(v20, v6, v3 + 1, 0);
          }
        }
        perror("accept error");
      }
      else
      {
        perror("listen error");
      }
    }
    else
    {
      perror("set sockopt err");
    }
  }
  else
  {
    perror("socket error");
  }
  return 0;
}
