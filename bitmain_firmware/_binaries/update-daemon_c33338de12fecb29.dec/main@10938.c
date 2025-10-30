int __fastcall main(int a1, const char **a2, char **a3)
{
  const char *v4; // r5
  int v6; // r4
  int v7; // r0
  __int16 v8; // r5
  int arg; // [sp+4h] [bp-2Ch] BYREF
  socklen_t addr_len; // [sp+8h] [bp-28h] BYREF
  pthread_t newthread; // [sp+Ch] [bp-24h] BYREF
  struct sockaddr addr; // [sp+10h] [bp-20h] BYREF
  struct sockaddr v13; // [sp+20h] [bp-10h] BYREF

  v4 = *a2;
  if ( strstr(*a2, "daemonc") )
    return sub_10EE0(a2[1]);
  if ( strstr(v4, "daemons") )
  {
    v6 = socket(2, 1, 0);
    if ( v6 == -1 )
      _assert_fail("sockfd_server != -1", "update-daemon.c", 0xA2u, "ProcessServer");
    memset(&addr, 0, sizeof(addr));
    addr.sa_family = 2;
    *(_DWORD *)&addr.sa_data[2] = inet_addr("127.0.0.1");
    v7 = sub_10C5C("22322");
    v8 = v7;
    printf("Will Listening To Port[%d]\r\n", v7);
    *(_WORD *)addr.sa_data = v8;
    if ( bind(v6, &addr, 0x10u) == -1 )
    {
      fwrite("bind error!\n", 1u, 0xCu, (FILE *)stderr);
      exit(1);
    }
    if ( listen(v6, 512) == -1 )
    {
      fwrite("listen error!\n", 1u, 0xEu, (FILE *)stderr);
      exit(1);
    }
    do
    {
      while ( 1 )
      {
        puts("waiting for new connection...");
        addr_len = 16;
        arg = accept(v6, &v13, &addr_len);
        if ( arg != -1 )
          break;
        fwrite("Accept error!\n", 1u, 0xEu, (FILE *)stderr);
      }
      puts("A new connection occurs!");
    }
    while ( pthread_create(&newthread, 0, (void *(*)(void *))sub_10CAC, &arg) != -1 );
    fwrite("pthread_create error!\n", 1u, 0x16u, (FILE *)stderr);
    if ( shutdown(v6, 1) == -1 )
      _assert_fail("ret != -1", "update-daemon.c", 0xCCu, "ProcessServer");
    puts("Server shuts down");
    return 0;
  }
  else
  {
    puts("Cannot Find Command!\r");
    return -1;
  }
}
