int sub_3CD2C()
{
  struct addrinfo *v0; // r5
  struct addrinfo *i; // r3
  int v2; // r0
  int v3; // r11
  int *v4; // r0
  char *v5; // r0
  time_t v7; // r9
  int *v8; // r0
  char *v9; // r8
  int ai_family; // r3
  struct sockaddr *ai_addr; // r3
  int v12; // t1
  int v13; // r1
  int v14; // r2
  int v15; // r3
  size_t v16; // r0
  size_t v17; // r10
  int v18; // r6
  ssize_t v19; // r5
  _BOOL4 v20; // r10
  const char *v21; // r1
  socklen_t v22; // r1
  const char *v23; // r5
  int v24; // r0
  int *v25; // r0
  char *v26; // r0
  struct addrinfo *v27; // r5
  struct addrinfo *j; // r3
  int v29; // r0
  size_t v30; // r0
  ssize_t v31; // r5
  int *v32; // r0
  char *v33; // r0
  int *v34; // r0
  char *v35; // r0
  char *v36; // [sp+10h] [bp-88h]
  size_t n; // [sp+18h] [bp-80h]
  char *v38; // [sp+20h] [bp-78h]
  int fd; // [sp+24h] [bp-74h]
  char v40; // [sp+43h] [bp-55h] BYREF
  socklen_t addr_len; // [sp+44h] [bp-54h] BYREF
  const char *v42; // [sp+48h] [bp-50h] BYREF
  struct addrinfo *pai; // [sp+4Ch] [bp-4Ch] BYREF
  int optval; // [sp+50h] [bp-48h] BYREF
  char v45[12]; // [sp+54h] [bp-44h] BYREF
  char s[12]; // [sp+60h] [bp-38h] BYREF
  char serv[12]; // [sp+6Ch] [bp-2Ch] BYREF
  struct addrinfo req; // [sp+78h] [bp-20h] BYREF
  struct sockaddr v49[8]; // [sp+98h] [bp+0h] BYREF
  char v50[1016]; // [sp+118h] [bp+80h] BYREF
  int v51; // [sp+518h] [bp+480h] BYREF
  int v52; // [sp+51Ch] [bp+484h]
  int v53; // [sp+520h] [bp+488h]
  int v54; // [sp+524h] [bp+48Ch]
  int v55; // [sp+528h] [bp+490h]
  char v56[2052]; // [sp+918h] [bp+880h] BYREF

  strcpy(v45, "bmminer-");
  sprintf(s, "%d", dword_9EE48);
  memset(&req, 0, sizeof(req));
  if ( getaddrinfo(off_9EE54[0], s, &req, &pai) )
  {
    strcpy(v56, "Invalid API Multicast Address");
    sub_47AB4(3, v56, 1);
    sub_62EC0(1);
  }
  v0 = pai;
  if ( !pai )
  {
LABEL_17:
    freeaddrinfo(pai);
    strcpy(v56, "API mcast could not open socket");
    sub_47AB4(3, v56, 1);
    sub_62EC0(1);
  }
  for ( i = pai; ; i = pai )
  {
    v2 = socket(i->ai_family, 2, 0);
    if ( v2 > 0 )
    {
      v3 = v2;
      goto LABEL_9;
    }
    v0 = v0->ai_next;
    if ( !v0 )
      break;
  }
  v3 = v2;
  if ( v2 == -1 )
    goto LABEL_17;
LABEL_9:
  optval = 1;
  if ( setsockopt(v3, 1, 2, &optval, 4u) < 0 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      v4 = _errno_location();
      v5 = strerror(*v4);
      snprintf(
        v56,
        0x800u,
        "API mcast setsockopt SO_REUSEADDR failed (%s)%s",
        v5,
        " - API multicast listener will not be available");
      goto LABEL_14;
    }
    return close(v3);
  }
  v7 = time(0);
  while ( 1 )
  {
    if ( bind(v3, v0->ai_addr, v0->ai_addrlen) >= 0 )
    {
      ai_family = v0->ai_family;
      if ( ai_family == 2 )
      {
        v51 = 0;
        v52 = 0;
        v51 = *(_DWORD *)&v0->ai_addr->sa_data[2];
        if ( setsockopt(v3, 0, 35, &v51, 8u) >= 0 )
        {
LABEL_25:
          freeaddrinfo(pai);
          v36 = off_9EE50[0];
          v16 = strlen(off_9EE50[0]);
          v17 = v16 + 10;
          n = v16 + 9;
          v38 = (char *)malloc(v16 + 10);
          if ( !v38 )
          {
            strcpy(v56, "Failed to malloc mcast expect_code");
            sub_47AB4(3, v56, 1);
            sub_62EC0(1);
          }
          fd = -1;
          v18 = 0;
          snprintf(v38, v17, aSS_1, v45, v36);
          while ( 1 )
          {
            do
            {
              while ( 1 )
              {
                ++v18;
                sub_4A804(1000);
                addr_len = 128;
                v19 = recvfrom(v3, v50, 0x3FFu, 0, v49, &addr_len);
                if ( v19 >= 0 )
                  break;
                if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                {
                  v25 = _errno_location();
                  v26 = strerror(*v25);
                  snprintf(v56, 0x800u, "API mcast failed count=%d (%s) (%d)", v18, v26, v3);
                  sub_47AB4(7, v56, 0);
                }
              }
              v20 = sub_3CB84(v49, &v42, &v40);
              if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
              {
                v21 = "Ignored";
                if ( v20 )
                  v21 = "Accepted";
                snprintf(v56, 0x800u, "API mcast from %s - %s", v42, v21);
                sub_47AB4(7, v56, 0);
              }
            }
            while ( !v20 );
            v50[v19] = 0;
            v22 = addr_len;
            if ( v19 )
            {
              if ( v50[v19 - 1] == 10 )
                v50[--v19] = 0;
              getnameinfo(v49, v22, 0, 0, serv, 0xAu, 1u);
              if ( byte_1AECC5 )
              {
LABEL_58:
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
                {
                  snprintf(v56, 0x800u, "API mcast request rep=%d (%s) from [%s]:%s", v19, v50, v42, serv);
                  sub_47AB4(7, v56, 0);
                }
                if ( n < v19 && !memcmp(v50, v38, n) )
                  goto LABEL_42;
                if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                {
                  strcpy(v56, "API mcast request was no good");
                  sub_47AB4(7, v56, 0);
                }
              }
              else if ( n < v19 && !memcmp(v50, v38, n) )
              {
LABEL_42:
                v23 = &v50[n];
                v24 = strtol(&v50[n], 0, 10);
                if ( (unsigned int)(v24 - 1) <= 0xFFFE )
                {
                  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                  {
                    snprintf(v56, 0x800u, "API mcast request OK port %s=%d", v23, v24);
                    sub_47AB4(7, v56, 0);
                  }
                  if ( getaddrinfo(v42, v23, &req, &pai) )
                  {
                    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
                    {
                      snprintf(v56, 0x800u, "Invalid client address %s", v42);
                      goto LABEL_79;
                    }
                  }
                  else
                  {
                    v27 = pai;
                    if ( pai )
                    {
                      for ( j = pai; ; j = pai )
                      {
                        v29 = socket(j->ai_family, 2, 0);
                        if ( v3 > 0 )
                          break;
                        v27 = v27->ai_next;
                        if ( !v27 )
                          break;
                      }
                      fd = v29;
                    }
                    if ( fd == -1 )
                    {
                      freeaddrinfo(pai);
                      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
                      {
                        snprintf(v56, 0x800u, "API mcast could not open socket to client %s", v42);
LABEL_79:
                        sub_47AB4(3, v56, 0);
                      }
                    }
                    else
                    {
                      snprintf((char *)&v51, 0x400u, "cgm-FTW-%d-%s", dword_9EE5C, off_9EE4C);
                      v30 = strlen((const char *)&v51);
                      v31 = sendto(fd, &v51, v30 + 1, 0, v27->ai_addr, v27->ai_addrlen);
                      freeaddrinfo(pai);
                      if ( v31 < 0 )
                      {
                        if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                        {
                          v32 = _errno_location();
                          v33 = strerror(*v32);
                          snprintf(v56, 0x800u, "API mcast send reply failed (%s) (%d)", v33, fd);
                          sub_47AB4(7, v56, 0);
                        }
                      }
                      else if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                      {
                        snprintf(v56, 0x800u, "API mcast send reply (%s) succeeded (%d) (%d)", &v51, v31, fd);
                        sub_47AB4(7, v56, 0);
                      }
                      close(fd);
                    }
                  }
                }
                else if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                {
                  snprintf(v56, 0x800u, "API mcast request ignored - invalid port (%s)", v23);
                  sub_47AB4(7, v56, 0);
                }
              }
            }
            else
            {
              getnameinfo(v49, addr_len, 0, 0, serv, 0xAu, 1u);
              if ( byte_1AECC5 )
                goto LABEL_58;
            }
          }
        }
        if ( !byte_244080 && !byte_1AECC4 )
          goto LABEL_110;
      }
      else
      {
        if ( ai_family != 10 )
          goto LABEL_25;
        ai_addr = v0->ai_addr;
        v12 = *(_DWORD *)&ai_addr->sa_data[6];
        ai_addr = (struct sockaddr *)((char *)ai_addr + 8);
        v13 = *(_DWORD *)&ai_addr->sa_data[2];
        v14 = *(_DWORD *)&ai_addr->sa_data[6];
        v15 = *(_DWORD *)&ai_addr->sa_data[10];
        v51 = v12;
        v52 = v13;
        v53 = v14;
        v54 = v15;
        v55 = 0;
        if ( setsockopt(v3, 41, 20, &v51, 0x14u) >= 0 )
          goto LABEL_25;
        if ( !byte_244080 && !byte_1AECC4 )
        {
LABEL_110:
          if ( dword_9E320 <= 2 )
            return close(v3);
        }
      }
      v34 = _errno_location();
      v35 = strerror(*v34);
      snprintf(v56, 0x800u, "API mcast join failed (%s)%s", v35, " - API multicast listener will not be available");
LABEL_14:
      sub_47AB4(3, v56, 0);
      return close(v3);
    }
    v8 = _errno_location();
    v9 = strerror(*v8);
    if ( time(0) - v7 > 61 )
      break;
    sub_4A804(30000);
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    snprintf(
      v56,
      0x800u,
      "API mcast bind to port %d failed (%s)%s",
      dword_9EE48,
      v9,
      " - API multicast listener will not be available");
    goto LABEL_14;
  }
  return close(v3);
}
