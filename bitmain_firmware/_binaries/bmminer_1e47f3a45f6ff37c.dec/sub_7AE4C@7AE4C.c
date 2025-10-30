int __fastcall sub_7AE4C(int a1)
{
  pthread_t v2; // r0
  int v3; // r2
  int v4; // r0
  int v5; // r4
  int i; // r3
  int v7; // r5
  size_t v8; // r0
  size_t v9; // r8
  void *v10; // r6
  ssize_t v11; // r0
  ssize_t v12; // r1
  int v13; // r4
  int (__fastcall *v14)(void *, ssize_t); // r3
  size_t v15; // r0
  int v17; // [sp+Ch] [bp-23Ch] BYREF
  int v18; // [sp+10h] [bp-238h] BYREF
  socklen_t v19; // [sp+14h] [bp-234h] BYREF
  char s[4]; // [sp+18h] [bp-230h] BYREF
  int v21; // [sp+1Ch] [bp-22Ch]
  int v22; // [sp+20h] [bp-228h]
  int v23; // [sp+24h] [bp-224h]
  struct sockaddr addr; // [sp+28h] [bp-220h] BYREF
  struct sockaddr v25; // [sp+38h] [bp-210h] BYREF
  char buf[4]; // [sp+48h] [bp-200h] BYREF
  char v27[252]; // [sp+4Ch] [bp-1FCh] BYREF
  char v28[4]; // [sp+148h] [bp-100h] BYREF
  _BYTE v29[252]; // [sp+14Ch] [bp-FCh] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v3 = *(_DWORD *)a1;
  *(_DWORD *)s = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sprintf(s, "ct_b/fcb/%d", v3);
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
    v17 = 1;
    if ( setsockopt(v4, 1, 2, &v17, 4u) < 0 || (v18 = 9216, setsockopt(v5, 1, 8, &v18, 4u) < 0) )
    {
      perror("set sockopt err");
      return 0;
    }
    else
    {
      for ( i = *(_DWORD *)a1; ; *(_DWORD *)a1 = i )
      {
        addr.sa_data[0] = BYTE1(i);
        addr.sa_data[1] = i;
        if ( bind(v5, &addr, 0x10u) >= 0 )
          break;
        perror("bind error");
        i = *(_DWORD *)a1 + 1;
      }
      if ( listen(v5, 5) < 0 )
      {
        perror("listen error");
        return 0;
      }
      else
      {
        v19 = 16;
        *(_DWORD *)(a1 + 144) = 1;
        v7 = accept(v5, &v25, &v19);
        if ( v7 >= 0 )
        {
          *(_DWORD *)buf = 0;
          memset(v27, 0, sizeof(v27));
          sprintf(buf, "%x %s\n", 63, (const char *)(a1 + 16));
          v8 = strlen(buf);
          send(v7, buf, v8 + 1, 0);
          v9 = *(_DWORD *)(a1 + 148);
          v10 = malloc(v9);
          v11 = recv(v7, v10, v9, 0);
          if ( v11 > 0 )
            *((_BYTE *)v10 + v11) = 0;
          while ( 1 )
          {
            v12 = recv(v7, v10, *(_DWORD *)(a1 + 148), 0);
            if ( v12 > 0 )
            {
              v14 = *(int (__fastcall **)(void *, ssize_t))(a1 + 12);
              if ( v14 )
                v13 = v14(v10, v12);
              else
                v13 = 0;
            }
            else
            {
              v13 = 0;
            }
            *(_DWORD *)v28 = 0;
            memset(v29, 0, sizeof(v29));
            sprintf(v28, "%x %d %s %s", 63, v13, (const char *)(a1 + 16), "OK");
            v15 = strlen(v28);
            send(v7, v28, v15 + 1, 0);
          }
        }
        perror("accept error");
        return 0;
      }
    }
  }
}
