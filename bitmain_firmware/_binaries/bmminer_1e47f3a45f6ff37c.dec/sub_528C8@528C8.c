int sub_528C8()
{
  unsigned __int8 i; // r6
  struct hostent *v1; // r0
  struct hostent *v2; // r5
  int v3; // r3
  const char *v4; // r3
  int v5; // r3
  struct in_addr **h_addr_list; // r3
  struct in_addr *v7; // r2
  int v8; // r8
  int v9; // r6
  char *v10; // r9
  char *v11; // r0
  size_t v12; // r0
  char *v13; // r0
  int v14; // r3
  int v15; // r3
  int h_addrtype; // r2
  char *v17; // r5
  int v18; // r3
  int v20; // r5
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // [sp+Ch] [bp-848h] BYREF
  int v31; // [sp+10h] [bp-844h] BYREF
  int v32; // [sp+14h] [bp-840h] BYREF
  int optval; // [sp+18h] [bp-83Ch] BYREF
  int v34; // [sp+1Ch] [bp-838h]
  struct sockaddr addr; // [sp+20h] [bp-834h] BYREF
  int dest; // [sp+30h] [bp-824h] BYREF
  int v37; // [sp+34h] [bp-820h]
  int v38; // [sp+38h] [bp-81Ch]
  int v39; // [sp+3Ch] [bp-818h]
  int v40; // [sp+40h] [bp-814h]
  int v41; // [sp+44h] [bp-810h]
  int v42; // [sp+48h] [bp-80Ch]
  int v43; // [sp+4Ch] [bp-808h]
  char s[2052]; // [sp+50h] [bp-804h] BYREF

  dest = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( dword_B3808 != -1 )
  {
    close(dword_B3808);
    dword_B3808 = -1;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "close socket");
      sub_3B6AC(3, s, 0, *(int *)"");
    }
  }
  do
    sleep(1u);
  while ( sub_52824("eth0", &dest) );
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "%s: %s", "eth0", (const char *)&dest);
    sub_3B6AC(3, s, 0, v28);
  }
  for ( i = 0; ; ++i )
  {
    v1 = gethostbyname("mtcs.bitmain.vip");
    v2 = v1;
    if ( v1 )
      break;
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "try get MES system ip: %d", i);
      sub_3B6AC(3, s, 0, v3);
    }
  }
  dest = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( (unsigned int)dword_B308C > 3 )
  {
    v4 = "AF_INET";
    if ( v1->h_addrtype != 2 )
      v4 = "AF_INET6";
    snprintf(s, 0x800u, "Address type: %s", v4);
    sub_3B6AC(3, s, 0, v5);
  }
  h_addr_list = (struct in_addr **)v2->h_addr_list;
  v7 = *h_addr_list;
  if ( *h_addr_list )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v13 = inet_ntoa((struct in_addr)v7->s_addr);
        snprintf(s, 0x800u, "IP addr %d: %s", v9 + 1, v13);
        sub_3B6AC(3, s, 0, v14);
        h_addr_list = (struct in_addr **)v2->h_addr_list;
      }
      v9 = (unsigned __int8)(v9 + 1);
      v10 = inet_ntoa((struct in_addr)h_addr_list[v8]->s_addr);
      v11 = inet_ntoa(*(struct in_addr *)v2->h_addr_list[v8]);
      v12 = strlen(v11);
      memcpy(&dest, v10, v12);
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "ip addr: %s", (const char *)&dest);
        sub_3B6AC(3, s, 0, v15);
      }
      h_addr_list = (struct in_addr **)v2->h_addr_list;
      v8 = (__int16)v9;
      v7 = h_addr_list[v8];
    }
    while ( v7 );
  }
  while ( 1 )
  {
    dword_B3808 = socket(v2->h_addrtype, 1, 0);
    if ( dword_B3808 >= 0 )
      break;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "Creat socket fail");
      sub_3B6AC(3, s, 0, *(int *)" fail");
    }
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "Creat socket success");
    sub_3B6AC(3, s, 0, *(int *)" success");
  }
  h_addrtype = v2->h_addrtype;
  v17 = (char *)&unk_F4240;
  *(_WORD *)addr.sa_data = -26081;
  addr.sa_family = h_addrtype;
  *(_DWORD *)&addr.sa_data[2] = inet_addr((const char *)&dest);
  while ( 1 )
  {
    --v17;
    if ( !connect(dword_B3808, &addr, 0x10u) )
      break;
    sleep(1u);
    if ( (unsigned int)dword_B308C <= 3 )
    {
      if ( !v17 )
        goto LABEL_33;
    }
    else
    {
      snprintf(s, 0x800u, "timeout_counter = %d", v17);
      sub_3B6AC(3, s, 0, v18);
      if ( !v17 )
      {
LABEL_33:
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "Creat socket connection to MES system fail");
          sub_3B6AC(3, s, (int)v17, *(unsigned __int16 *)"");
          return (int)v17;
        }
        return 0;
      }
    }
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "Creat socket connection to MES system succeed");
    sub_3B6AC(3, s, 0, *(int *)"d");
    v30 = 1;
    v20 = dword_B3808;
    v34 = 0;
    v31 = 45;
    v32 = 30;
    optval = 3;
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "socket_fd = %d", dword_B3808);
      sub_3B6AC(3, s, 0, v29);
    }
  }
  else
  {
    v20 = dword_B3808;
    v30 = 1;
    v31 = 45;
    v34 = 0;
    v32 = 30;
    optval = 3;
  }
  v21 = setsockopt(v20, 1, 21, &optval, 8u);
  if ( v21 < 0 || (v21 = setsockopt(v20, 1, 20, &optval, 8u), v21 < 0) )
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return 0;
    snprintf(s, 0x800u, "Set socket send timeout fail, ret = %d", v21);
  }
  else
  {
    v22 = setsockopt(v20, 1, 9, &v30, 4u);
    if ( v22 < 0 )
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return 0;
      snprintf(s, 0x800u, "Set socket keep alive fail, ret = %d", v22);
    }
    else
    {
      v23 = setsockopt(v20, 6, 1, &v30, 4u);
      if ( v23 < 0 )
      {
        if ( (unsigned int)dword_B308C <= 3 )
          return 0;
        snprintf(s, 0x800u, "Set socket no delay fail, ret = %d", v23);
      }
      else
      {
        v24 = setsockopt(v20, 6, 6, &v30, 4u);
        if ( v24 < 0 )
        {
          if ( (unsigned int)dword_B308C <= 3 )
            return 0;
          snprintf(s, 0x800u, "Set socket keep cnt fail, ret = %d", v24);
        }
        else
        {
          v25 = setsockopt(v20, 6, 4, &v31, 4u);
          if ( v25 < 0 )
          {
            if ( (unsigned int)dword_B308C <= 3 )
              return 0;
            snprintf(s, 0x800u, "Set socket keep idle fail, ret = %d", v25);
          }
          else
          {
            v26 = setsockopt(v20, 6, 5, &v32, 4u);
            if ( v26 >= 0 )
              return 1;
            if ( (unsigned int)dword_B308C <= 3 )
              return 0;
            snprintf(s, 0x800u, "Set socket keep intvl fail, ret = %d", v26);
          }
        }
      }
    }
  }
  sub_3B6AC(3, s, 0, v27);
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "Creat socket timeout");
    sub_3B6AC(3, s, 0, *(int *)" timeout");
    return 0;
  }
  return 0;
}
