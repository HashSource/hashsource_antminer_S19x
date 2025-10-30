int __fastcall sub_2D8B0(const char *a1, unsigned __int16 a2)
{
  int v3; // r5
  struct hostent *v4; // r0
  struct hostent *v7; // r4
  const char *v8; // r2
  const char *v9; // r3
  int v10; // r5
  int v11; // r7
  int v12; // r6
  char *v13; // r0
  char *v14; // r0
  char *v15; // r6
  char *v16; // r0
  size_t v17; // r0
  int v18; // r7
  int v19; // r5
  int v20; // r6
  int h_addrtype; // r3
  int v22; // r4
  int v23; // r4
  int v24; // r6
  int v25; // r6
  int v26; // r6
  int v27; // r6
  int v28; // r4
  int v30; // [sp+14h] [bp-78h] BYREF
  int v31; // [sp+18h] [bp-74h] BYREF
  int v32; // [sp+1Ch] [bp-70h] BYREF
  _DWORD optval[2]; // [sp+20h] [bp-6Ch] BYREF
  struct sockaddr addr; // [sp+28h] [bp-64h] BYREF
  char s[32]; // [sp+38h] [bp-54h] BYREF
  char v36[52]; // [sp+58h] [bp-34h] BYREF

  memset(s, 0, sizeof(s));
  sleep(1u);
  if ( sub_2D854(s) )
  {
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : Can't get %s ip\n", "create_connection_to_server_by_name", "eth0");
    snprintf(byte_615A0C, 0x100u, "Can't get %s ip", "eth0");
    sub_3CC5C(byte_615A0C, v36);
    return -1;
  }
  else
  {
    v3 = 0;
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : %s: %s\n", "create_connection_to_server_by_name", "eth0", s);
    snprintf(byte_61590C, 0x100u, "%s: %s", "eth0", s);
    sub_3CC5C(byte_61590C, v36);
    while ( 1 )
    {
      v4 = gethostbyname(a1);
      if ( v4 )
        break;
      sub_1E938(v36, 0x30u);
      printf("%s ", v36);
      printf("%s : try get MES system ip: %d\n", "create_connection_to_server_by_name", v3);
      snprintf(byte_615B0C, 0x100u, "try get MES system ip: %d", v3);
      sub_3CC5C(byte_615B0C, v36);
      sleep(3u);
      if ( v3++ == 2 )
      {
        sub_1E938(v36, 0x30u);
        printf("%s ", v36);
        printf("%s : Can't get MES system by host name\n", "create_connection_to_server_by_name");
        strcpy(byte_615C0C, "Can't get MES system by host name");
        sub_3CC5C(byte_615C0C, v36);
        return -1;
      }
    }
    v7 = v4;
    memset(s, 0, sizeof(s));
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    if ( v7->h_addrtype == 2 )
      v8 = "AF_INET";
    else
      v8 = "AF_INET6";
    printf("%s : Address type: %s\n", "create_connection_to_server_by_name", v8);
    if ( v7->h_addrtype == 2 )
      v9 = "AF_INET";
    else
      v9 = "AF_INET6";
    snprintf(byte_615D0C, 0x100u, "Address type: %s", v9);
    sub_3CC5C(byte_615D0C, v36);
    if ( *v7->h_addr_list )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        sub_1E938(v36, 0x30u);
        printf("%s ", v36);
        v12 = v11 + 1;
        v11 = (unsigned __int8)(v11 + 1);
        v13 = inet_ntoa(*(struct in_addr *)v7->h_addr_list[v10]);
        printf("%s : IP addr %d: %s\n", "create_connection_to_server_by_name", v12, v13);
        v14 = inet_ntoa(*(struct in_addr *)v7->h_addr_list[v10]);
        snprintf(byte_615E0C, 0x100u, "IP addr %d: %s", v12, v14);
        sub_3CC5C(byte_615E0C, v36);
        v15 = inet_ntoa(*(struct in_addr *)v7->h_addr_list[v10]);
        v16 = inet_ntoa(*(struct in_addr *)v7->h_addr_list[v10]);
        v17 = strlen(v16);
        memcpy(s, v15, v17);
        sub_1E938(v36, 0x30u);
        printf("%s ", v36);
        printf("%s : ip addr: %s\n", "create_connection_to_server_by_name", s);
        snprintf(&byte_615E0C[256], 0x100u, "ip addr: %s", s);
        sub_3CC5C(&byte_615E0C[256], v36);
        v10 = (__int16)v11;
      }
      while ( v7->h_addr_list[v10] );
    }
    v18 = 3;
    while ( 1 )
    {
      v19 = socket(v7->h_addrtype, 1, 0);
      if ( v19 >= 0 )
        break;
      sub_1E938(v36, 0x30u);
      printf("%s ", v36);
      printf("%s : Creat socket fail\n", "create_connection_to_server_by_name");
      strcpy(byte_61600C, "Creat socket fail");
      sub_3CC5C(byte_61600C, v36);
      if ( !--v18 )
      {
        sub_1E938(v36, 0x30u);
        printf("%s ", v36);
        printf("%s : Creat socket timeout\n", "create_connection_to_server_by_name");
        strcpy(byte_61610C, "Creat socket timeout");
        sub_3CC5C(byte_61610C, v36);
        return -1;
      }
    }
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : Creat socket success\n", "create_connection_to_server_by_name");
    v20 = 3;
    strcpy(byte_61620C, "Creat socket success");
    sub_3CC5C(byte_61620C, v36);
    h_addrtype = v7->h_addrtype;
    *(_WORD *)addr.sa_data = __rev16(a2);
    addr.sa_family = h_addrtype;
    *(_DWORD *)&addr.sa_data[2] = inet_addr(s);
    while ( 1 )
    {
      --v20;
      if ( !connect(v19, &addr, 0x10u) )
        break;
      sleep(1u);
      sub_1E938(v36, 0x30u);
      printf("%s ", v36);
      printf("%s : timeout_counter = %d\n", "create_connection_to_server_by_name", v20);
      snprintf(byte_616C0C, 0x100u, "timeout_counter = %d", v20);
      sub_3CC5C(byte_616C0C, v36);
      if ( !v20 )
      {
        sub_1E938(v36, 0x30u);
        printf("%s ", v36);
        printf("%s : Creat socket connection to MES system fail\n", "create_connection_to_server_by_name");
        strcpy(byte_616D0C, "Creat socket connection to MES system fail");
        sub_3CC5C(byte_616D0C, v36);
        return -1;
      }
    }
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : Creat socket connection to MES system succeed\n", "create_connection_to_server_by_name");
    strcpy(byte_61630C, "Creat socket connection to MES system succeed");
    sub_3CC5C(byte_61630C, v36);
    optval[0] = 3;
    v32 = 30;
    optval[1] = 0;
    v30 = 1;
    v31 = 45;
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : socket_fd = %d\n", "set_socket_feature", v19);
    snprintf(byte_61640C, 0x100u, "socket_fd = %d", v19);
    sub_3CC5C(byte_61640C, v36);
    v22 = setsockopt(v19, 1, 21, optval, 8u);
    if ( v22 < 0 )
    {
      sub_1E938(v36, 0x30u);
      printf("%s ", v36);
      printf("%s : Set socket send timeout fail, ret = %d\n", "set_socket_feature", v22);
      snprintf(&byte_61640C[256], 0x100u, "Set socket send timeout fail, ret = %d", v22);
      sub_3CC5C(&byte_61640C[256], v36);
    }
    else
    {
      v23 = setsockopt(v19, 1, 20, optval, 8u);
      if ( v23 < 0 )
      {
        sub_1E938(v36, 0x30u);
        printf("%s ", v36);
        printf("%s : Set socket send timeout fail, ret = %d\n", "set_socket_feature", v23);
        snprintf(byte_61660C, 0x100u, "Set socket send timeout fail, ret = %d", v23);
        sub_3CC5C(byte_61660C, v36);
      }
      else
      {
        v24 = setsockopt(v19, 1, 9, &v30, 4u);
        if ( v24 < 0 )
        {
          sub_1E938(v36, 0x30u);
          printf("%s ", v36);
          printf("%s : Set socket keep alive fail, ret = %d\n", "set_socket_feature", v24);
          snprintf(byte_61670C, 0x100u, "Set socket keep alive fail, ret = %d", v24);
          sub_3CC5C(byte_61670C, v36);
        }
        else
        {
          v25 = setsockopt(v19, 6, 1, &v30, 4u);
          if ( v25 < 0 )
          {
            sub_1E938(v36, 0x30u);
            printf("%s ", v36);
            printf("%s : Set socket no delay fail, ret = %d\n", "set_socket_feature", v25);
            snprintf(byte_61680C, 0x100u, "Set socket no delay fail, ret = %d", v25);
            sub_3CC5C(byte_61680C, v36);
          }
          else
          {
            v26 = setsockopt(v19, 6, 6, &v30, 4u);
            if ( v26 < 0 )
            {
              sub_1E938(v36, 0x30u);
              printf("%s ", v36);
              printf("%s : Set socket keep cnt fail, ret = %d\n", "set_socket_feature", v26);
              snprintf(byte_61690C, 0x100u, "Set socket keep cnt fail, ret = %d", v26);
              sub_3CC5C(byte_61690C, v36);
            }
            else
            {
              v27 = setsockopt(v19, 6, 4, &v31, 4u);
              if ( v27 < 0 )
              {
                sub_1E938(v36, 0x30u);
                printf("%s ", v36);
                printf("%s : Set socket keep idle fail, ret = %d\n", "set_socket_feature", v27);
                snprintf(byte_616A0C, 0x100u, "Set socket keep idle fail, ret = %d", v27);
                sub_3CC5C(byte_616A0C, v36);
              }
              else
              {
                v28 = setsockopt(v19, 6, 5, &v32, 4u);
                if ( v28 >= 0 )
                  return v19;
                sub_1E938(v36, 0x30u);
                printf("%s ", v36);
                printf("%s : Set socket keep intvl fail, ret = %d\n", "set_socket_feature", v28);
                snprintf(byte_616B0C, 0x100u, "Set socket keep intvl fail, ret = %d", v28);
                sub_3CC5C(byte_616B0C, v36);
              }
            }
          }
        }
      }
    }
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : Creat socket timeout\n", "create_connection_to_server_by_name");
    strcpy(byte_616E0C, "Creat socket timeout");
    sub_3CC5C(byte_616E0C, v36);
    return -1;
  }
}
