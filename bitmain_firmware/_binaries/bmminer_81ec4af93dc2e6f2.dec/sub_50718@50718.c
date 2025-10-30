int sub_50718()
{
  unsigned __int8 i; // r7
  struct hostent *v1; // r5
  int v2; // r3
  const char *v3; // r3
  int v4; // r3
  struct in_addr **h_addr_list; // r3
  struct in_addr *v6; // r2
  int v7; // r7
  int v8; // r8
  char *v9; // r9
  char *v10; // r0
  size_t v11; // r0
  char *v12; // r0
  int v13; // r3
  int v14; // r3
  int h_addrtype; // r2
  char *v16; // r5
  int v17; // r3
  int v19; // r5
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // [sp+Ch] [bp-848h] BYREF
  int v30; // [sp+10h] [bp-844h] BYREF
  int v31; // [sp+14h] [bp-840h] BYREF
  int optval; // [sp+18h] [bp-83Ch] BYREF
  int v33; // [sp+1Ch] [bp-838h]
  struct sockaddr addr; // [sp+20h] [bp-834h] BYREF
  char s[32]; // [sp+30h] [bp-824h] BYREF
  char v36[2052]; // [sp+50h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  if ( dword_B03A0 != -1 )
  {
    close(dword_B03A0);
    dword_B03A0 = -1;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v36, "close socket");
      sub_3AF5C(3, v36, 0, *(int *)"");
    }
  }
  do
    sleep(1u);
  while ( sub_50674("eth0", s) );
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v36, 0x800u, "%s: %s", "eth0", s);
    sub_3AF5C(3, v36, 0, v23);
  }
  for ( i = 0; ; ++i )
  {
    v1 = gethostbyname("mtcs.bitmain.vip");
    if ( v1 )
      break;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v36, 0x800u, "try get MES system ip: %d", i);
      sub_3AF5C(3, v36, 0, v2);
    }
  }
  memset(s, 0, sizeof(s));
  if ( (unsigned int)off_AFC24 > 3 )
  {
    v3 = "AF_INET6";
    if ( v1->h_addrtype == 2 )
      v3 = "AF_INET";
    snprintf(v36, 0x800u, "Address type: %s", v3);
    sub_3AF5C(3, v36, 0, v4);
  }
  h_addr_list = (struct in_addr **)v1->h_addr_list;
  v6 = *h_addr_list;
  if ( *h_addr_list )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v12 = inet_ntoa((struct in_addr)v6->s_addr);
        snprintf(v36, 0x800u, "IP addr %d: %s", v7 + 1, v12);
        sub_3AF5C(3, v36, 0, v13);
        h_addr_list = (struct in_addr **)v1->h_addr_list;
      }
      v7 = (unsigned __int8)(v7 + 1);
      v9 = inet_ntoa((struct in_addr)h_addr_list[v8]->s_addr);
      v10 = inet_ntoa(*(struct in_addr *)v1->h_addr_list[v8]);
      v11 = strlen(v10);
      memcpy(s, v9, v11);
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(v36, 0x800u, "ip addr: %s", s);
        sub_3AF5C(3, v36, 0, v14);
      }
      h_addr_list = (struct in_addr **)v1->h_addr_list;
      v8 = (__int16)v7;
      v6 = h_addr_list[v8];
    }
    while ( v6 );
  }
  while ( 1 )
  {
    dword_B03A0 = socket(v1->h_addrtype, 1, 0);
    if ( dword_B03A0 >= 0 )
      break;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v36, "Creat socket fail");
      sub_3AF5C(3, v36, 0, *(int *)" fail");
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v36, "Creat socket success");
    sub_3AF5C(3, v36, 0, *(int *)" success");
  }
  h_addrtype = v1->h_addrtype;
  v16 = (char *)&unk_F4240;
  addr.sa_family = h_addrtype;
  *(_WORD *)addr.sa_data = -26081;
  *(_DWORD *)&addr.sa_data[2] = inet_addr(s);
  while ( 1 )
  {
    --v16;
    if ( !connect(dword_B03A0, &addr, 0x10u) )
      break;
    sleep(1u);
    if ( (unsigned int)off_AFC24 <= 3 )
    {
      if ( !v16 )
        goto LABEL_31;
    }
    else
    {
      snprintf(v36, 0x800u, "timeout_counter = %d", v16);
      sub_3AF5C(3, v36, 0, v17);
      if ( !v16 )
      {
LABEL_31:
        if ( (unsigned int)off_AFC24 <= 3 )
          return 0;
        strcpy(v36, "Creat socket connection to MES system fail");
        sub_3AF5C(3, v36, (int)v16, *(unsigned __int16 *)"");
        return (int)v16;
      }
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v36, "Creat socket connection to MES system succeed");
    sub_3AF5C(3, v36, 0, *(int *)"d");
    v19 = dword_B03A0;
    v33 = 0;
    v29 = 1;
    v30 = 45;
    v31 = 30;
    optval = 3;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v36, 0x800u, "socket_fd = %d", dword_B03A0);
      sub_3AF5C(3, v36, 0, v24);
    }
  }
  else
  {
    v19 = dword_B03A0;
    v33 = 0;
    v29 = 1;
    v30 = 45;
    v31 = 30;
    optval = 3;
  }
  v20 = setsockopt(v19, 1, 21, &optval, 8u);
  if ( v20 < 0 || (v20 = setsockopt(v19, 1, 20, &optval, 8u), v20 < 0) )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return 0;
    snprintf(v36, 0x800u, "Set socket send timeout fail, ret = %d", v20);
  }
  else
  {
    v22 = setsockopt(v19, 1, 9, &v29, 4u);
    if ( v22 >= 0 )
    {
      v25 = setsockopt(v19, 6, 1, &v29, 4u);
      if ( v25 >= 0 )
      {
        v26 = setsockopt(v19, 6, 6, &v29, 4u);
        if ( v26 >= 0 )
        {
          v27 = setsockopt(v19, 6, 4, &v30, 4u);
          if ( v27 >= 0 )
          {
            v28 = setsockopt(v19, 6, 5, &v31, 4u);
            if ( v28 >= 0 )
              return 1;
            if ( (unsigned int)off_AFC24 <= 3 )
              return 0;
            snprintf(v36, 0x800u, "Set socket keep intvl fail, ret = %d", v28);
          }
          else
          {
            if ( (unsigned int)off_AFC24 <= 3 )
              return 0;
            snprintf(v36, 0x800u, "Set socket keep idle fail, ret = %d", v27);
          }
        }
        else
        {
          if ( (unsigned int)off_AFC24 <= 3 )
            return 0;
          snprintf(v36, 0x800u, "Set socket keep cnt fail, ret = %d", v26);
        }
      }
      else
      {
        if ( (unsigned int)off_AFC24 <= 3 )
          return 0;
        snprintf(v36, 0x800u, "Set socket no delay fail, ret = %d", v25);
      }
    }
    else
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return 0;
      snprintf(v36, 0x800u, "Set socket keep alive fail, ret = %d", v22);
    }
  }
  sub_3AF5C(3, v36, 0, v21);
  if ( (unsigned int)off_AFC24 <= 3 )
    return 0;
  strcpy(v36, "Creat socket timeout");
  sub_3AF5C(3, v36, 0, *(int *)" timeout");
  return 0;
}
