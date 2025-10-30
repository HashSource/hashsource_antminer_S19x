int __fastcall sub_77A80(int a1)
{
  pthread_t v2; // r0
  unsigned int v3; // r2
  int v4; // r0
  int v5; // r4
  unsigned int i; // r3
  int v8; // r5
  size_t v9; // r0
  size_t v10; // r8
  void *v11; // r6
  ssize_t v12; // r0
  ssize_t v13; // r1
  int (__fastcall *v14)(void *, ssize_t); // r4
  size_t v15; // r0
  int v16; // [sp+Ch] [bp-240h] BYREF
  int v17; // [sp+10h] [bp-23Ch] BYREF
  socklen_t v18; // [sp+14h] [bp-238h] BYREF
  char s[4]; // [sp+18h] [bp-234h] BYREF
  int v20; // [sp+1Ch] [bp-230h]
  int v21; // [sp+20h] [bp-22Ch]
  int v22; // [sp+24h] [bp-228h]
  struct sockaddr addr; // [sp+28h] [bp-224h] BYREF
  struct sockaddr v24; // [sp+38h] [bp-214h] BYREF
  char buf[4]; // [sp+48h] [bp-204h] BYREF
  char v26[252]; // [sp+4Ch] [bp-200h] BYREF
  char v27[4]; // [sp+148h] [bp-104h] BYREF
  _BYTE v28[252]; // [sp+14Ch] [bp-100h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v3 = *(_DWORD *)a1;
  *(_DWORD *)s = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
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
    v16 = 1;
    if ( setsockopt(v4, 1, 2, &v16, 4u) < 0 || (v17 = 9216, setsockopt(v5, 1, 8, &v17, 4u) < 0) )
    {
      perror("set sockopt err");
      return 0;
    }
    for ( i = *(_DWORD *)a1; ; *(_DWORD *)a1 = i )
    {
      *(_WORD *)addr.sa_data = __rev16(i);
      if ( bind(v5, &addr, 0x10u) >= 0 )
        break;
      perror("bind error");
      i = *(_DWORD *)a1 + 1;
    }
    if ( listen(v5, 5) >= 0 )
    {
      v18 = 16;
      *(_DWORD *)(a1 + 144) = 1;
      v8 = accept(v5, &v24, &v18);
      if ( v8 >= 0 )
      {
        *(_DWORD *)buf = 0;
        memset(v26, 0, sizeof(v26));
        sprintf(buf, "%x %s\n", 63, (const char *)(a1 + 16));
        v9 = strlen(buf);
        send(v8, buf, v9 + 1, 0);
        v10 = *(_DWORD *)(a1 + 148);
        v11 = malloc(v10);
        v12 = recv(v8, v11, v10, 0);
        if ( v12 > 0 )
          *((_BYTE *)v11 + v12) = 0;
        while ( 1 )
        {
          v13 = recv(v8, v11, *(_DWORD *)(a1 + 148), 0);
          if ( v13 > 0 )
          {
            v14 = *(int (__fastcall **)(void *, ssize_t))(a1 + 12);
            if ( v14 )
              v14 = (int (__fastcall *)(void *, ssize_t))v14(v11, v13);
          }
          else
          {
            v14 = 0;
          }
          *(_DWORD *)v27 = 0;
          memset(v28, 0, sizeof(v28));
          sprintf(v27, "%x %d %s %s", 63, v14, (const char *)(a1 + 16), "OK");
          v15 = strlen(v27);
          send(v8, v27, v15 + 1, 0);
        }
      }
      perror("accept error");
      return 0;
    }
    perror("listen error");
    return 0;
  }
}
