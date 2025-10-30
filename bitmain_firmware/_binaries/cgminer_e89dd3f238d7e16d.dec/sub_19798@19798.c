int sub_19798()
{
  int *v1; // r0
  int *v2; // r0
  char *v3; // r0
  char v5[4]; // [sp+8h] [bp-854h] BYREF
  int optval; // [sp+808h] [bp-54h] BYREF
  struct addrinfo *pai; // [sp+80Ch] [bp-50h] BYREF
  struct addrinfo req; // [sp+810h] [bp-4Ch] BYREF
  char s[12]; // [sp+830h] [bp-2Ch] BYREF
  time_t v10; // [sp+83Ch] [bp-20h]
  socklen_t v11; // [sp+840h] [bp-1Ch]
  __int16 v12; // [sp+846h] [bp-16h]
  struct addrinfo *i; // [sp+848h] [bp-14h]
  char *v14; // [sp+84Ch] [bp-10h]
  int v15; // [sp+850h] [bp-Ch]
  int fd; // [sp+854h] [bp-8h]

  v12 = 4028;
  fd = 0;
  v15 = 0;
  sprintf(s, "%d", 4028);
  memset(&req, 0, sizeof(req));
  req.ai_flags = 1;
  req.ai_family = 0;
  if ( getaddrinfo("0.0.0.0", s, &req, &pai) )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v5, 0x800u, "%s: exec getaddrinfo() failed\n", "api_init_socket");
      sub_1DB6C(3, v5, 0);
    }
    return -2147483642;
  }
  else
  {
    for ( i = pai; i; i = i->ai_next )
    {
      fd = socket(pai->ai_family, 1, 0);
      if ( fd > 0 )
        break;
    }
    if ( fd == -1 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v5, 0x800u, "%s: exec socket() failed\n", "api_init_socket");
        sub_1DB6C(3, v5, 0);
      }
      return -2147483642;
    }
    else
    {
      optval = 1;
      v11 = 4;
      setsockopt(fd, 1, 2, &optval, 4u);
      v10 = time(0);
      while ( !v15 )
      {
        if ( bind(fd, i->ai_addr, i->ai_addrlen) >= 0 )
        {
          v15 = 1;
        }
        else
        {
          v1 = _errno_location();
          v14 = strerror(*v1);
          if ( time(0) - v10 > 61 )
            break;
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
          {
            snprintf(v5, 0x800u, "%s: api bind to port %d failed, trying again in 30sec", "api_init_socket", v12);
            sub_1DB6C(4, v5, 0);
          }
          sleep(0x1Eu);
        }
      }
      freeaddrinfo(pai);
      if ( v15 )
      {
        if ( listen(fd, 100) >= 0 )
        {
          return fd;
        }
        else
        {
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
          {
            v2 = _errno_location();
            v3 = strerror(*v2);
            snprintf(v5, 0x800u, "%s: exec listen() failed (%s)", "api_init_socket", v3);
            sub_1DB6C(3, v5, 0);
          }
          close(fd);
          return -2147483642;
        }
      }
      else
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
        {
          snprintf(v5, 0x800u, "api bind to port %d, failed (%s)", v12, v14);
          sub_1DB6C(3, v5, 0);
        }
        return -2147483642;
      }
    }
  }
}
