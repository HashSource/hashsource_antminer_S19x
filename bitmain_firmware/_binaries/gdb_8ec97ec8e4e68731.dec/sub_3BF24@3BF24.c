int __fastcall sub_3BF24(fd_set *a1, char *s1)
{
  const char *v2; // r6
  int v4; // r9
  char *v5; // r0
  char *v6; // r7
  size_t v7; // r5
  unsigned int v8; // r5
  struct hostent *v9; // r0
  char **h_addr_list; // r3
  int v11; // r1
  int v12; // r0
  int *v13; // r0
  int v14; // r2
  int *v15; // r6
  _BOOL4 v16; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r7
  int v21; // r0
  int v23; // r0
  int v24; // r0
  _DWORD *v25; // r0
  int v26; // [sp+8h] [bp-88h] BYREF
  int v27; // [sp+Ch] [bp-84h] BYREF
  unsigned int v28; // [sp+10h] [bp-80h] BYREF
  int optval; // [sp+14h] [bp-7Ch] BYREF
  socklen_t optlen; // [sp+18h] [bp-78h] BYREF
  struct sockaddr addr; // [sp+1Ch] [bp-74h] BYREF
  char dest[132]; // [sp+2Ch] [bp-64h] BYREF

  v2 = s1;
  v28 = 0;
  if ( !strncmp(s1, "udp:", 4u) )
  {
    v2 += 4;
    v4 = 1;
  }
  else
  {
    v4 = strncmp(v2, "tcp:", 4u);
    if ( v4 )
      v4 = 0;
    else
      v2 += 4;
  }
  v5 = strchr(v2, 58);
  v6 = v5;
  if ( !v5 )
    sub_946E0("net_open: No colon in host name!");
  v7 = v5 - v2;
  if ( v5 - v2 >= 99 )
    v7 = 99;
  v26 = v7;
  strncpy(dest, v2, v7);
  dest[v7] = 0;
  v8 = strtol(v6 + 1, 0, 10);
  if ( !dest[0] )
    strcpy(dest, "localhost");
  v9 = gethostbyname(dest);
  if ( v9 )
  {
    h_addr_list = v9->h_addr_list;
    *(_WORD *)addr.sa_data = __rev16(v8);
    addr.sa_family = 2;
    *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)*h_addr_list;
    while ( 1 )
    {
      if ( v4 )
        v11 = 2;
      else
        v11 = 1;
      v12 = sub_96958(2, v11, 0);
      a1->__fds_bits[1] = v12;
      if ( v12 == -1 )
        return -1;
      v27 = 1;
      ioctl(v12, 0x5421u, &v27);
      if ( connect(a1->__fds_bits[1], &addr, 0x10u) < 0 )
      {
        v13 = _errno_location();
        v14 = *v13;
        v15 = v13;
        v16 = *v13 == 111;
        if ( !dword_46AF6C )
          v16 = 0;
        if ( v16 )
        {
          if ( sub_3BD00(0, &v28) < 0 )
          {
            v14 = 111;
LABEL_32:
            *v15 = v14;
            v21 = a1->__fds_bits[1];
            if ( v21 == -1 )
              return -1;
            goto LABEL_38;
          }
          goto LABEL_29;
        }
        if ( v14 != 115 )
          goto LABEL_32;
        do
          v17 = sub_3BD00(a1, &v28);
        while ( !v17 );
        if ( v17 < 0 )
        {
          v21 = a1->__fds_bits[1];
          if ( v21 != -1 )
            goto LABEL_38;
          return -1;
        }
      }
      v18 = a1->__fds_bits[1];
      optlen = 4;
      v19 = getsockopt(v18, 1, 4, &optval, &optlen);
      v20 = optval;
      if ( v19 >= 0 && !optval )
      {
        v23 = a1->__fds_bits[1];
        v27 = 0;
        ioctl(v23, 0x5421u, &v27);
        if ( !v4 )
        {
          v24 = a1->__fds_bits[1];
          v26 = 1;
          setsockopt(v24, 6, 1, &v26, 4u);
        }
        signal(13, (__sighandler_t)1);
        return 0;
      }
      if ( !dword_46AF6C || optval != 111 )
        goto LABEL_35;
      if ( sub_3BD00(0, &v28) < 0 )
      {
        v20 = optval;
LABEL_35:
        if ( v20 )
          *_errno_location() = v20;
        v21 = a1->__fds_bits[1];
        if ( v21 != -1 )
        {
LABEL_38:
          close(v21);
          a1->__fds_bits[1] = -1;
          return -1;
        }
        return -1;
      }
LABEL_29:
      close(a1->__fds_bits[1]);
    }
  }
  v25 = (_DWORD *)sub_242FB4(0);
  sub_2594B0(*v25, "%s: unknown host\n", dest);
  *_errno_location() = 2;
  return -1;
}
