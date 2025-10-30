int __fastcall sub_2823C(int a1)
{
  int v1; // r3
  int v2; // r3
  int v3; // r3
  fd_set v6; // [sp+14h] [bp-8D8h] BYREF
  char v7[2048]; // [sp+94h] [bp-858h] BYREF
  int optval; // [sp+894h] [bp-58h] BYREF
  socklen_t optlen; // [sp+898h] [bp-54h] BYREF
  struct timeval timeout; // [sp+89Ch] [bp-50h] BYREF
  struct addrinfo s; // [sp+8A4h] [bp-48h] BYREF
  struct addrinfo *pai; // [sp+8C4h] [bp-28h] BYREF
  int v13; // [sp+8C8h] [bp-24h]
  int v14; // [sp+8CCh] [bp-20h]
  fd_set *v15; // [sp+8D0h] [bp-1Ch]
  unsigned int j; // [sp+8D4h] [bp-18h]
  int fd; // [sp+8D8h] [bp-14h]
  char *service; // [sp+8DCh] [bp-10h]
  char *name; // [sp+8E0h] [bp-Ch]
  struct addrinfo *i; // [sp+8E4h] [bp-8h]

  fd = 0;
  sub_1F44C((pthread_mutex_t *)(a1 + 704), "util.c", "setup_stratum_socket", 3101);
  *(_BYTE *)(a1 + 641) = 0;
  if ( *(_DWORD *)(a1 + 588) )
    close(*(_DWORD *)(a1 + 588));
  *(_DWORD *)(a1 + 588) = 0;
  sub_1F584((pthread_mutex_t *)(a1 + 704), "util.c", "setup_stratum_socket", 3119);
  memset(&s, 0, sizeof(s));
  s.ai_family = 0;
  s.ai_socktype = 1;
  if ( !*(_DWORD *)(a1 + 184) && dword_86CFC )
  {
    *(_DWORD *)(a1 + 184) = dword_86CFC;
    sub_21EF8(*(char **)(a1 + 184), (char **)(a1 + 604), (char **)(a1 + 608));
    *(_DWORD *)(a1 + 180) = 3;
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    name = *(char **)(a1 + 604);
    service = *(char **)(a1 + 608);
  }
  else
  {
    name = *(char **)(a1 + 600);
    service = *(char **)(a1 + 584);
  }
  if ( getaddrinfo(name, service, &s, &pai) )
  {
    if ( *(_BYTE *)(a1 + 99) != 1 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, "Failed to resolve (?wrong URL) %s:%s", name, service);
        sub_1DB6C(4, v7, 0);
      }
      *(_BYTE *)(a1 + 99) = 1;
    }
    else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      snprintf(v7, 0x800u, "Failed to getaddrinfo for %s:%s", name, service);
      sub_1DB6C(6, v7, 0);
    }
    _res_init();
    return 0;
  }
  else
  {
    for ( i = pai; i; i = i->ai_next )
    {
      fd = socket(i->ai_family, i->ai_socktype, i->ai_protocol);
      if ( fd == -1 )
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          strcpy(v7, "Failed socket");
          sub_1DB6C(7, v7, 0);
        }
      }
      else
      {
        sub_28180(fd);
        if ( connect(fd, i->ai_addr, i->ai_addrlen) != -1 )
        {
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
          {
            strcpy(v7, "Succeeded immediate connect");
            sub_1DB6C(4, v7, 0);
          }
LABEL_63:
          sub_281C8(fd);
          break;
        }
        timeout.tv_sec = 1;
        timeout.tv_usec = 0;
        if ( !sub_28210() )
        {
          close(fd);
          if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
          {
            strcpy(v7, "Failed sock connect");
            sub_1DB6C(7, v7, 0);
          }
        }
        else
        {
          do
          {
            v15 = &v6;
            for ( j = 0; j <= 0x1F; ++j )
              v15->__fds_bits[j] = 0;
            LOBYTE(v2) = fd & 0x1F;
            if ( fd <= 0 )
              v2 = -(-fd & 0x1F);
            v6.__fds_bits[fd / 32] |= 1 << v2;
            v14 = select(fd + 1, 0, &v6, 0, &timeout);
            if ( v14 > 0 )
            {
              LOBYTE(v3) = fd & 0x1F;
              if ( fd <= 0 )
                v3 = -(-fd & 0x1F);
              if ( ((1 << v3) & v6.__fds_bits[fd / 32]) != 0 )
              {
                optlen = 4;
                v13 = getsockopt(fd, 1, 4, &optval, &optlen);
                if ( !v13 && !optval )
                {
                  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
                  {
                    strcpy(v7, "Succeeded delayed connect");
                    sub_1DB6C(7, v7, 0);
                  }
                  goto LABEL_63;
                }
              }
            }
          }
          while ( v14 < 0 && sub_1F264() );
          close(fd);
          if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
          {
            strcpy(v7, "Select timeout/failed connect");
            sub_1DB6C(7, v7, 0);
          }
        }
      }
    }
    if ( i )
    {
      freeaddrinfo(pai);
      if ( *(_DWORD *)(a1 + 184) )
      {
        switch ( *(_DWORD *)(a1 + 180) )
        {
          case 0:
            if ( (unsigned __int8)sub_27144((const char **)a1, fd, 0) == 1 )
              goto LABEL_89;
            v1 = 0;
            break;
          case 1:
            if ( (unsigned __int8)sub_27144((const char **)a1, fd, 1) == 1 )
              goto LABEL_89;
            v1 = 0;
            break;
          case 2:
            if ( (unsigned __int8)sub_27D88((const char **)a1, fd, 0) == 1 )
              goto LABEL_89;
            v1 = 0;
            break;
          case 3:
          case 5:
            if ( (unsigned __int8)sub_27840((const char **)a1, fd) == 1 )
              goto LABEL_89;
            v1 = 0;
            break;
          case 4:
            if ( (unsigned __int8)sub_27D88((const char **)a1, fd, 1) == 1 )
              goto LABEL_89;
            v1 = 0;
            break;
          default:
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
            {
              snprintf(
                v7,
                0x800u,
                "Unsupported proxy type for %s:%s",
                *(const char **)(a1 + 604),
                *(const char **)(a1 + 608));
              sub_1DB6C(4, v7, 0);
            }
            v1 = 0;
            break;
        }
      }
      else
      {
LABEL_89:
        if ( !*(_DWORD *)(a1 + 592) )
        {
          *(_DWORD *)(a1 + 592) = sub_1F9F8(0x2000u, 1u, "util.c", "setup_stratum_socket", 3257);
          *(_DWORD *)(a1 + 596) = 0x2000;
        }
        *(_DWORD *)(a1 + 588) = fd;
        sub_1F808(fd);
        return 1;
      }
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
      {
        snprintf(v7, 0x800u, "Failed to connect to stratum on %s:%s", name, service);
        sub_1DB6C(6, v7, 0);
      }
      freeaddrinfo(pai);
      return 0;
    }
  }
  return v1;
}
