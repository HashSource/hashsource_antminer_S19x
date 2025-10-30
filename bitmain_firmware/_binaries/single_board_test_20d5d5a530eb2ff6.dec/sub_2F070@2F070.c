int __fastcall sub_2F070(int a1)
{
  void *v2; // r0
  int v3; // r6
  int v4; // r8
  int v5; // r10
  int v6; // r5
  int v7; // r0
  int v8; // r8
  int v9; // r7
  unsigned int v10; // r0
  struct hostent *v11; // r5
  const char *v12; // r2
  const char *v13; // r3
  int v14; // r7
  int v15; // r9
  int v16; // r6
  char *v17; // r0
  char *v18; // r0
  char *v19; // r6
  char *v20; // r0
  size_t v21; // r0
  int v22; // r9
  int v23; // r8
  int v24; // r0
  int v26; // r6
  int v27; // [sp+Ch] [bp-68h]
  struct sockaddr v28; // [sp+10h] [bp-64h] BYREF
  char dest[32]; // [sp+20h] [bp-54h] BYREF
  char v30[52]; // [sp+40h] [bp-34h] BYREF

  v2 = memset(dest, 0, sizeof(dest));
  if ( a1 == 1 )
  {
    v3 = 1000000;
    v4 = 1000000;
  }
  else
  {
    if ( a1 != 2 )
    {
      sub_6FBF4(v2);
      v26 = 0;
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "don't figer out");
      sub_1F650(2, "which process to");
      sub_1F650(3, "connect MES");
      sub_1E938(v30, 0x30u);
      printf("%s ", v30);
      printf("%s : don't figer out which process to connect MES\n", "create_connection_to_MES_system_by_name");
      strcpy(byte_618A0C, "don't figer out which process to connect MES");
      sub_3CC5C(byte_618A0C, v30);
      return v26;
    }
    v3 = 3;
    v4 = 60;
  }
  if ( dword_21B5EC != -1 )
  {
    close(dword_21B5EC);
    dword_21B5EC = -1;
    sub_1E938(v30, 0x30u);
    printf("%s ", v30);
    printf("%s : close socket\n", "create_connection_to_MES_system_by_name");
    strcpy(byte_61990C, "close socket");
    sub_3CC5C(byte_61990C, v30);
  }
  v5 = 0;
  LOBYTE(v6) = 0;
  while ( 1 )
  {
    sleep(1u);
    v7 = sub_2EE10("eth0", dest);
    if ( !v7 )
      break;
    if ( v4 - 1 <= v5 )
    {
      sub_6FBF4(v7);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "can't get");
      sub_1F650(2, "local ip");
      sub_1E938(v30, 0x30u);
      printf("%s ", v30);
      printf("%s : Can't get %s ip\n", "create_connection_to_MES_system_by_name", "eth0");
      snprintf(byte_618C0C, 0x100u, "Can't get %s ip", "eth0");
      sub_3CC5C(byte_618C0C, v30);
      return 0;
    }
    v6 = (unsigned __int8)(v6 + 1);
    v5 = v6;
    if ( v4 <= v6 )
      goto LABEL_12;
  }
  sub_1E938(v30, 0x30u);
  printf("%s ", v30);
  printf("%s : %s: %s\n", "create_connection_to_MES_system_by_name", "eth0", dest);
  snprintf(byte_618B0C, 0x100u, "%s: %s", "eth0", dest);
  sub_3CC5C(byte_618B0C, v30);
LABEL_12:
  v8 = 0;
  LOBYTE(v9) = 0;
  while ( 1 )
  {
    v11 = gethostbyname("mtcs.bitmain.vip");
    if ( v11 )
      break;
    sub_1E938(v30, 0x30u);
    printf("%s ", v30);
    printf("%s : try get MES system ip: %d\n", "create_connection_to_MES_system_by_name", v8);
    snprintf(byte_618D0C, 0x100u, "try get MES system ip: %d", v8);
    sub_3CC5C(byte_618D0C, v30);
    v10 = sleep(3u);
    if ( v3 - 1 <= v8 )
    {
      sub_6FBF4(v10);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "can't get");
      sub_1F650(2, "MES system ip");
      sub_1E938(v30, 0x30u);
      printf("%s ", v30);
      printf("%s : Can't get MES system by host name\n", "create_connection_to_MES_system_by_name");
      strcpy(byte_618E0C, "Can't get MES system by host name");
      sub_3CC5C(byte_618E0C, v30);
      return 0;
    }
    v9 = (unsigned __int8)(v9 + 1);
    v8 = v9;
    if ( v3 <= v9 )
    {
      memset(dest, 0, sizeof(dest));
      sub_1E938(v30, 0x30u);
      printf("%s ", v30);
      __und(0xFFu);
    }
  }
  memset(dest, 0, sizeof(dest));
  sub_1E938(v30, 0x30u);
  printf("%s ", v30);
  if ( v11->h_addrtype == 2 )
    v12 = "AF_INET";
  else
    v12 = "AF_INET6";
  printf("%s : Address type: %s\n", "create_connection_to_MES_system_by_name", v12);
  if ( v11->h_addrtype == 2 )
    v13 = "AF_INET";
  else
    v13 = "AF_INET6";
  snprintf(byte_618F0C, 0x100u, "Address type: %s", v13);
  sub_3CC5C(byte_618F0C, v30);
  if ( *v11->h_addr_list )
  {
    v14 = 0;
    v15 = 0;
    v27 = v3;
    do
    {
      sub_1E938(v30, 0x30u);
      printf("%s ", v30);
      v16 = v15 + 1;
      v15 = (unsigned __int8)(v15 + 1);
      v17 = inet_ntoa(*(struct in_addr *)v11->h_addr_list[v14]);
      printf("%s : IP addr %d: %s\n", "create_connection_to_MES_system_by_name", v16, v17);
      v18 = inet_ntoa(*(struct in_addr *)v11->h_addr_list[v14]);
      snprintf(byte_61900C, 0x100u, "IP addr %d: %s", v16, v18);
      sub_3CC5C(byte_61900C, v30);
      v19 = inet_ntoa(*(struct in_addr *)v11->h_addr_list[v14]);
      v20 = inet_ntoa(*(struct in_addr *)v11->h_addr_list[v14]);
      v21 = strlen(v20);
      memcpy(dest, v19, v21);
      sub_1E938(v30, 0x30u);
      printf("%s ", v30);
      printf("%s : ip addr: %s\n", "create_connection_to_MES_system_by_name", dest);
      snprintf(byte_61910C, 0x100u, "ip addr: %s", dest);
      sub_3CC5C(byte_61910C, v30);
      v14 = (__int16)v15;
    }
    while ( v11->h_addr_list[v14] );
    v3 = v27;
  }
  v22 = 0;
  LOBYTE(v23) = 0;
  while ( 1 )
  {
    dword_21B5EC = socket(v11->h_addrtype, 1, 0);
    if ( dword_21B5EC >= 0 )
      break;
    sub_1E938(v30, 0x30u);
    printf("%s ", v30);
    printf("%s : Creat socket fail\n", "create_connection_to_MES_system_by_name");
    strcpy(byte_61920C, "Creat socket fail");
    v24 = sub_3CC5C(byte_61920C, v30);
    if ( v3 - 1 <= v22 )
    {
      sub_6FBF4(v24);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "can't connect");
      sub_1F650(2, "MES system");
      sub_1E938(v30, 0x30u);
      printf("%s ", v30);
      printf("%s : Creat socket timeout\n", "create_connection_to_MES_system_by_name");
      strcpy(byte_61930C, "Creat socket timeout");
      sub_3CC5C(byte_61930C, v30);
      return 0;
    }
    v23 = (unsigned __int8)(v23 + 1);
    v22 = v23;
    if ( v3 <= v23 )
      goto LABEL_31;
  }
  sub_1E938(v30, 0x30u);
  printf("%s ", v30);
  printf("%s : Creat socket success\n", "create_connection_to_MES_system_by_name");
  strcpy(byte_61940C, "Creat socket success");
  sub_3CC5C(byte_61940C, v30);
LABEL_31:
  v28.sa_family = v11->h_addrtype;
  *(_WORD *)v28.sa_data = -26081;
  *(_DWORD *)&v28.sa_data[2] = inet_addr(dest);
  while ( connect(dword_21B5EC, &v28, 0x10u) )
  {
    --v3;
    sleep(1u);
    sub_1E938(v30, 0x30u);
    printf("%s ", v30);
    printf("%s : timeout_counter = %d\n", "create_connection_to_MES_system_by_name", v3);
    snprintf(byte_61970C, 0x100u, "timeout_counter = %d", v3);
    sub_3CC5C(byte_61970C, v30);
    if ( !v3 )
    {
      sub_1E938(v30, 0x30u);
      printf("%s ", v30);
      printf("%s : Creat socket connection to MES system fail\n", "create_connection_to_MES_system_by_name");
      strcpy(byte_61980C, "Creat socket connection to MES system fail");
      sub_3CC5C(byte_61980C, v30);
      return 0;
    }
  }
  sub_1E938(v30, 0x30u);
  printf("%s ", v30);
  printf("%s : Creat socket connection to MES system succeed\n", "create_connection_to_MES_system_by_name");
  strcpy(byte_61950C, "Creat socket connection to MES system succeed");
  sub_3CC5C(byte_61950C, v30);
  v26 = sub_2EAC0(dword_21B5EC);
  if ( !v26 )
  {
    sub_6FBF4(0);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "set socket");
    sub_1F650(2, "feature");
    sub_1F650(3, "fail");
    sub_1E938(v30, 0x30u);
    printf("%s ", v30);
    printf("%s : Creat socket timeout\n", "create_connection_to_MES_system_by_name");
    strcpy(byte_61960C, "Creat socket timeout");
    sub_3CC5C(byte_61960C, v30);
  }
  return v26;
}
