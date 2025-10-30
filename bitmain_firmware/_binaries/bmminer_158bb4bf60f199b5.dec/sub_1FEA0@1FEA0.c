char *__fastcall sub_1FEA0(const char *a1)
{
  const char *v2; // r4
  char *v3; // r6
  size_t v4; // r0
  size_t v5; // r5
  size_t v6; // r8
  size_t v7; // r5
  int v8; // r3
  char *v9; // r0
  unsigned int v10; // r6
  struct hostent *v11; // r3
  int v12; // r0
  int v13; // r5
  int v14; // r4
  signed int v15; // r6
  ssize_t v16; // r0
  const char *v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  _DWORD *v22; // r12
  char *v23; // r4
  int v24; // r1
  char *v26; // r0
  char *v27; // r0
  char *v28; // r5
  size_t v29; // r0
  char *v30; // r0
  _DWORD v31[2]; // [sp+8h] [bp-2008h] BYREF
  char s[1024]; // [sp+10h] [bp-2000h] BYREF
  char dest[1024]; // [sp+410h] [bp-1C00h] BYREF
  struct sockaddr v34[127]; // [sp+810h] [bp-1800h] BYREF
  char v35[4096]; // [sp+1010h] [bp-1000h] BYREF

  memset(v35, 0, sizeof(v35));
  memset(s, 0, sizeof(s));
  memset(dest, 0, sizeof(dest));
  if ( !a1 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
    {
      v23 = 0;
      strcpy((char *)v34, "url is null!\n");
      sub_47AB4(5, v34, 0);
      return v23;
    }
    return 0;
  }
  if ( !strncmp(a1, "http://", 7u) )
  {
    v2 = a1 + 7;
    v3 = strchr(v2, 47);
    v4 = strlen(v2);
    v5 = v4;
    if ( v3 )
    {
      v6 = strlen(v3);
      v7 = v5 - v6;
      memcpy(s, v2, v7);
      v8 = (unsigned __int8)v3[1];
      s[v7] = 0;
      if ( v8 )
      {
        memcpy(dest, v3 + 1, v6 - 1);
        s[v6 + 1023] = 0;
      }
    }
    else
    {
      memcpy(s, v2, v4);
      s[v5] = 0;
    }
    v9 = strchr(s, 58);
    if ( v9 )
    {
      *v9 = 0;
      v10 = strtol(v9 + 1, 0, 10);
    }
    else
    {
      v10 = 80;
    }
    v11 = gethostbyname(s);
    if ( !v11 )
      goto LABEL_37;
    *(_WORD *)v34[0].sa_data = __rev16(v10);
    v34[0].sa_family = 2;
    *(_DWORD *)&v34[0].sa_data[2] = **(_DWORD **)v11->h_addr_list;
    v12 = socket(2, 1, 0);
    v13 = v12;
    if ( v12 == -1
      || (v31[0] = 10, v31[1] = 0, setsockopt(v12, 1, 21, v31, 8u))
      || (v14 = setsockopt(v13, 1, 20, v31, 8u)) != 0
      || connect(v13, v34, 0x10u) == -1
      || v13 < 0 )
    {
LABEL_37:
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
      {
        v23 = 0;
        strcpy((char *)v34, "tcp client create failed\n");
        sub_47AB4(5, v34, 0);
        return v23;
      }
    }
    else
    {
      sprintf(v35, "GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n", dest, s, v10);
      v15 = strlen(v35);
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = send(v13, &v35[v14], v15 - v14, 0);
          v14 += v16;
          if ( v16 == -1 )
            break;
          if ( v15 <= v14 )
            goto LABEL_39;
        }
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
        {
          v17 = "tcp client send failed\n";
LABEL_23:
          v18 = *(_DWORD *)v17;
          v19 = *((_DWORD *)v17 + 1);
          v20 = *((_DWORD *)v17 + 2);
          v21 = *((_DWORD *)v17 + 3);
          v22 = v17 + 16;
          v23 = 0;
          *(_DWORD *)&v34[0].sa_family = v18;
          *(_DWORD *)&v34[0].sa_data[2] = v19;
          *(_DWORD *)&v34[0].sa_data[6] = v20;
          *(_DWORD *)&v34[0].sa_data[10] = v21;
          v24 = v22[1];
          *(_DWORD *)&v34[1].sa_family = *v22;
          *(_DWORD *)&v34[1].sa_data[2] = v24;
          sub_47AB4(5, v34, 0);
          return v23;
        }
      }
      else
      {
LABEL_39:
        if ( recv(v13, v35, 0x1000u, 0) > 0 )
        {
          close(v13);
          v26 = strstr(v35, "HTTP/1.1");
          if ( v26 )
          {
            if ( strtol(v26 + 9, 0, 10) == 200 )
            {
              v27 = strstr(v35, "\r\n\r\n");
              v28 = v27;
              if ( v27 )
              {
                v29 = strlen(v27);
                v30 = (char *)malloc(v29 + 1);
                v23 = v30;
                if ( v30 )
                  strcpy(v30, v28 + 4);
                return v23;
              }
            }
          }
        }
        else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
        {
          v17 = "tcp client recv failed\n";
          goto LABEL_23;
        }
      }
    }
    return 0;
  }
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 4 )
    return 0;
  strcpy((char *)v34, "parse url failed!\n");
  sub_47AB4(5, v34, 0);
  return 0;
}
