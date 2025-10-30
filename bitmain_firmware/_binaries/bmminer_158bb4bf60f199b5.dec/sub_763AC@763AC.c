int __fastcall sub_763AC(int a1)
{
  pthread_t v2; // r0
  unsigned int v3; // r2
  int v4; // r0
  int v5; // r4
  unsigned int i; // r3
  int v7; // r5
  size_t v8; // r0
  size_t v9; // r8
  void *v10; // r6
  ssize_t v11; // r0
  ssize_t v12; // r1
  int (__fastcall *v13)(void *, ssize_t); // r4
  size_t v14; // r0
  int v16; // [sp+8h] [bp-23Ch] BYREF
  socklen_t v17; // [sp+Ch] [bp-238h] BYREF
  char s[4]; // [sp+10h] [bp-234h] BYREF
  int v19; // [sp+14h] [bp-230h]
  int v20; // [sp+18h] [bp-22Ch]
  int v21; // [sp+1Ch] [bp-228h]
  struct sockaddr addr; // [sp+20h] [bp-224h] BYREF
  struct sockaddr v23; // [sp+30h] [bp-214h] BYREF
  char buf[4]; // [sp+40h] [bp-204h] BYREF
  char v25[252]; // [sp+44h] [bp-200h] BYREF
  char v26[4]; // [sp+140h] [bp-104h] BYREF
  _BYTE v27[252]; // [sp+144h] [bp-100h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v3 = *(_DWORD *)a1;
  *(_DWORD *)s = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
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
    if ( setsockopt(v4, 1, 2, &v16, 4u) < 0 )
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
        v17 = 16;
        *(_DWORD *)(a1 + 144) = 1;
        v7 = accept(v5, &v23, &v17);
        if ( v7 >= 0 )
        {
          *(_DWORD *)buf = 0;
          memset(v25, 0, sizeof(v25));
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
              v13 = *(int (__fastcall **)(void *, ssize_t))(a1 + 12);
              if ( v13 )
                v13 = (int (__fastcall *)(void *, ssize_t))v13(v10, v12);
            }
            else
            {
              v13 = 0;
            }
            *(_DWORD *)v26 = 0;
            memset(v27, 0, sizeof(v27));
            sprintf(v26, "%x %d %s %s", 63, v13, (const char *)(a1 + 16), "OK");
            v14 = strlen(v26);
            send(v7, v26, v14 + 1, 0);
          }
        }
        perror("accept error");
      }
      return 0;
    }
  }
}
