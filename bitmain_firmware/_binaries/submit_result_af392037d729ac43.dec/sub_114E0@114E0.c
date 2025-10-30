int sub_114E0()
{
  int v0; // r5
  struct hostent *v1; // r4
  int v2; // r5
  const char *v3; // r1
  struct in_addr *v4; // r3
  int v5; // r7
  char *v6; // r0
  int v7; // r1
  char *v8; // r10
  char *v9; // r0
  size_t v10; // r0
  int v11; // r5
  int h_addrtype; // r3
  int v13; // r4
  struct sockaddr addr; // [sp+4h] [bp-24h] BYREF
  int dest; // [sp+14h] [bp-14h] BYREF
  int v17; // [sp+18h] [bp-10h]
  int v18; // [sp+1Ch] [bp-Ch]
  int v19; // [sp+20h] [bp-8h]
  int v20; // [sp+24h] [bp-4h]

  dest = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( dword_270F4 != -1 )
  {
    close(dword_270F4);
    dword_270F4 = -1;
    puts("submit_result: close socket");
  }
  while ( 1 )
  {
    v0 = sub_113D4("eth0", &dest);
    if ( !v0 )
      break;
    printf("submit_result: Cann't get %s ip\n", "eth0");
    sleep(1u);
  }
  printf("submit_result: Get %s ip: %s\n", "eth0", (const char *)&dest);
  while ( 1 )
  {
    v1 = gethostbyname("mtcs.bitmain.com");
    if ( v1 )
      break;
    printf("submit_result: try get MES system ip: %d\n", v0++);
    sleep(3u);
    if ( v0 == 30 )
    {
      puts("submit_result: Can't get MES system by host name");
      return 0;
    }
  }
  v2 = 0;
  dest = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v1->h_addrtype == 2 )
    v3 = "AF_INET";
  else
    v3 = "AF_INET6";
  printf("submit_result: Address type: %s\n", v3, "AF_INET", "AF_INET6");
  v4 = (struct in_addr *)*v1->h_addr_list;
  if ( v4 )
  {
    v5 = 0;
    do
    {
      v6 = inet_ntoa((struct in_addr)v4->s_addr);
      v7 = v2 + 1;
      v2 = (unsigned __int8)(v2 + 1);
      printf("submit_result: IP addr %d: %s\n", v7, v6);
      v8 = inet_ntoa(*(struct in_addr *)v1->h_addr_list[v5]);
      v9 = inet_ntoa(*(struct in_addr *)v1->h_addr_list[v5]);
      v10 = strlen(v9);
      memcpy(&dest, v8, v10);
      printf("submit_result: ip addr: %s\n", (const char *)&dest);
      v5 = (unsigned __int8)v2;
      v4 = (struct in_addr *)v1->h_addr_list[v5];
    }
    while ( v4 );
  }
  LOBYTE(v11) = 30;
  while ( 1 )
  {
    dword_270F4 = socket(v1->h_addrtype, 1, 0);
    if ( dword_270F4 >= 0 )
      break;
    puts("submit_result: Creat socket fail");
    v11 = (unsigned __int8)(v11 - 1);
    if ( !v11 )
    {
      puts("submit_result: Creat socket timeout");
      return 0;
    }
  }
  puts("submit_result: Creat socket success");
  h_addrtype = v1->h_addrtype;
  *(_WORD *)addr.sa_data = -26081;
  v13 = 30;
  addr.sa_family = h_addrtype;
  *(_DWORD *)&addr.sa_data[2] = inet_addr((const char *)&dest);
  do
  {
    --v13;
    if ( !connect(dword_270F4, &addr, 0x10u) )
    {
      puts("submit_result: Creat socket connection to MES system success");
      return sub_112BC(dword_270F4);
    }
    sleep(1u);
    printf("submit_result: timeout_counter = %d\n", v13);
  }
  while ( v13 );
  puts("submit_result: Creat socket connection to MES system fail");
  return 0;
}
