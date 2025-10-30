int __fastcall sub_2916C(int a1)
{
  int v1; // r3
  fd_set v4; // [sp+14h] [bp-8D8h] BYREF
  char v5[2048]; // [sp+94h] [bp-858h] BYREF
  int optval; // [sp+894h] [bp-58h] BYREF
  socklen_t optlen; // [sp+898h] [bp-54h] BYREF
  struct timeval timeout; // [sp+89Ch] [bp-50h] BYREF
  struct addrinfo s; // [sp+8A4h] [bp-48h] BYREF
  struct addrinfo *pai; // [sp+8C4h] [bp-28h] BYREF
  int v11; // [sp+8C8h] [bp-24h]
  int v12; // [sp+8CCh] [bp-20h]
  fd_set *v13; // [sp+8D0h] [bp-1Ch]
  unsigned int j; // [sp+8D4h] [bp-18h]
  int fd; // [sp+8D8h] [bp-14h]
  char *service; // [sp+8DCh] [bp-10h]
  char *name; // [sp+8E0h] [bp-Ch]
  struct addrinfo *i; // [sp+8E4h] [bp-8h]

  fd = 0;
  sub_1FD4C((pthread_mutex_t *)(a1 + 720), "util.c", "setup_stratum_socket", 3101);
  *(_BYTE *)(a1 + 657) = 0;
  if ( *(_DWORD *)(a1 + 588) )
  {
    if ( *(_BYTE *)(a1 + 592) && *(_DWORD *)(a1 + 596) )
    {
      SSL_shutdown(*(_DWORD *)(a1 + 596));
      X509_free(*(_DWORD *)(a1 + 604));
      SSL_CTX_free(*(_DWORD *)(a1 + 600));
      SSL_free(*(_DWORD *)(a1 + 596));
    }
    close(*(_DWORD *)(a1 + 588));
  }
  *(_DWORD *)(a1 + 588) = 0;
  sub_1FE7C((pthread_mutex_t *)(a1 + 720), "util.c", "setup_stratum_socket", 3119);
  memset(&s, 0, sizeof(s));
  s.ai_family = 0;
  s.ai_socktype = 1;
  if ( !*(_DWORD *)(a1 + 184) && dword_87E94 )
  {
    *(_DWORD *)(a1 + 184) = dword_87E94;
    sub_22720(*(char **)(a1 + 184), (char **)(a1 + 620), (char **)(a1 + 624));
    *(_DWORD *)(a1 + 180) = 3;
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    name = *(char **)(a1 + 620);
    service = *(char **)(a1 + 624);
  }
  else
  {
    name = *(char **)(a1 + 616);
    service = *(char **)(a1 + 584);
  }
  if ( getaddrinfo(name, service, &s, &pai) )
  {
    if ( *(_BYTE *)(a1 + 99) != 1 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v5, 0x800u, "Failed to resolve (?wrong URL) %s:%s", name, service);
        sub_1E4EC(4, v5, 0);
      }
      *(_BYTE *)(a1 + 99) = 1;
    }
    else if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v5, 0x800u, "Failed to getaddrinfo for %s:%s", name, service);
      sub_1E4EC(6, v5, 0);
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
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          strcpy(v5, "Failed socket");
          sub_1E4EC(7, v5, 0);
        }
      }
      else
      {
        sub_28AC8(fd);
        if ( connect(fd, i->ai_addr, i->ai_addrlen) != -1 )
        {
          if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
          {
            strcpy(v5, "Succeeded immediate connect");
            sub_1E4EC(4, v5, 0);
          }
LABEL_65:
          sub_28B0C(fd);
          break;
        }
        timeout.tv_sec = 1;
        timeout.tv_usec = 0;
        if ( !sub_28B50() )
        {
          close(fd);
          if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
          {
            strcpy(v5, "Failed sock connect");
            sub_1E4EC(7, v5, 0);
          }
        }
        else
        {
          do
          {
            v13 = &v4;
            for ( j = 0; j <= 0x1F; ++j )
              v13->__fds_bits[j] = 0;
            v4.__fds_bits[fd / 32] |= 1 << (fd % 32);
            v12 = select(fd + 1, 0, &v4, 0, &timeout);
            if ( v12 > 0 && ((v4.__fds_bits[fd / 32] >> (fd % 32)) & 1) != 0 )
            {
              optlen = 4;
              v11 = getsockopt(fd, 1, 4, &optval, &optlen);
              if ( !v11 && !optval )
              {
                if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
                {
                  strcpy(v5, "Succeeded delayed connect");
                  sub_1E4EC(7, v5, 0);
                }
                goto LABEL_65;
              }
            }
          }
          while ( v12 < 0 && sub_1FB6C() );
          close(fd);
          if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
          {
            strcpy(v5, "Select timeout/failed connect");
            sub_1E4EC(7, v5, 0);
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
            if ( (unsigned __int8)sub_27A8C((const char **)a1, fd, 0) == 1 )
              goto LABEL_96;
            v1 = 0;
            break;
          case 1:
            if ( (unsigned __int8)sub_27A8C((const char **)a1, fd, 1) == 1 )
              goto LABEL_96;
            v1 = 0;
            break;
          case 2:
            if ( (unsigned __int8)sub_286D0((const char **)a1, fd, 0) == 1 )
              goto LABEL_96;
            v1 = 0;
            break;
          case 3:
          case 5:
            if ( (unsigned __int8)sub_28188((const char **)a1, fd) == 1 )
              goto LABEL_96;
            v1 = 0;
            break;
          case 4:
            if ( (unsigned __int8)sub_286D0((const char **)a1, fd, 1) == 1 )
              goto LABEL_96;
            v1 = 0;
            break;
          default:
            if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
            {
              snprintf(
                v5,
                0x800u,
                "Unsupported proxy type for %s:%s",
                *(const char **)(a1 + 620),
                *(const char **)(a1 + 624));
              sub_1E4EC(4, v5, 0);
            }
            v1 = 0;
            break;
        }
      }
      else
      {
LABEL_96:
        if ( !*(_DWORD *)(a1 + 608) )
        {
          *(_DWORD *)(a1 + 608) = sub_202D4(0x2000u, 1u, "util.c", "setup_stratum_socket", 3257);
          *(_DWORD *)(a1 + 612) = 0x2000;
        }
        *(_DWORD *)(a1 + 588) = fd;
        if ( !*(_BYTE *)(a1 + 592) )
          goto LABEL_105;
        if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
        {
          strcpy(v5, "start ssl connect\n");
          sub_1E4EC(5, v5, 0);
        }
        if ( (unsigned __int8)sub_28B7C(a1) != 1 )
        {
          close(fd);
          *(_DWORD *)(a1 + 588) = 0;
          return 0;
        }
        else
        {
LABEL_105:
          sub_200E8(fd);
          return 1;
        }
      }
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
      {
        snprintf(v5, 0x800u, "Failed to connect to stratum on %s:%s", name, service);
        sub_1E4EC(6, v5, 0);
      }
      freeaddrinfo(pai);
      return 0;
    }
  }
  return v1;
}
