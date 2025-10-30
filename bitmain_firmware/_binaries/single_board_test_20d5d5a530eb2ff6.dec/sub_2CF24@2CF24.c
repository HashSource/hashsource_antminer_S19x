char *__fastcall sub_2CF24(const char *a1, int a2)
{
  int v4; // r6
  signed int v5; // r5
  int v6; // r4
  ssize_t v7; // r0
  char *v8; // r4
  const char *v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r5
  _DWORD *v15; // r4
  int v16; // r1
  fd_set *v18; // r3
  int v19; // r5
  int v20; // r5
  ssize_t v21; // r0
  int v22; // [sp+Ch] [bp-24h] BYREF
  struct timeval timeout; // [sp+10h] [bp-20h] BYREF
  _DWORD v24[5]; // [sp+18h] [bp-18h] BYREF
  int v25; // [sp+2Ch] [bp-4h] BYREF
  fd_set v26; // [sp+30h] [bp+0h] BYREF
  char s[2048]; // [sp+B0h] [bp+80h] BYREF
  char v28[2048]; // [sp+8B0h] [bp+880h] BYREF
  char v29[8192]; // [sp+10B0h] [bp+1080h] BYREF

  memset(v29, 0, sizeof(v29));
  memset(s, 0, sizeof(s));
  memset(v28, 0, sizeof(v28));
  v22 = 0;
  if ( a1 )
  {
    if ( sub_2C9A8(a1, s, v28, &v22) )
    {
      sub_1E938((char *)&v26, 0x30u);
      printf("%s ", (const char *)&v26);
      printf("%s : parse url failed!\n", "http_get");
      strcpy(&byte_614B08[512], "parse url failed!");
      sub_3CC5C(&byte_614B08[512], &v26);
      return 0;
    }
    else
    {
      v4 = sub_2CAF0(s, v22);
      if ( v4 < 0 )
      {
        sub_1E938((char *)&v26, 0x30u);
        printf("%s ", (const char *)&v26);
        printf("%s : tcp client create failed\n", "http_get");
        strcpy(&byte_614B08[768], "tcp client create failed");
        sub_3CC5C(&byte_614B08[768], &v26);
        return 0;
      }
      else
      {
        if ( a2 )
          sprintf(v29, "GET /%s HTTP/1.0\r\nHost: %s:%d\r\nAccept: */*\r\n\r\n", v28, s, v22);
        else
          sprintf(v29, "GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n", v28, s, v22);
        v5 = strlen(v29);
        if ( v5 > 0 )
        {
          v6 = 0;
          while ( 1 )
          {
            v7 = send(v4, &v29[v6], v5 - v6, 0);
            v6 += v7;
            if ( v7 == -1 )
              break;
            if ( v5 <= v6 )
              goto LABEL_13;
          }
          sub_1E938((char *)&v26, 0x30u);
          v8 = &byte_614B08[1024];
          v9 = "tcp client send failed";
          printf("%s ", (const char *)&v26);
          printf("%s : tcp client send failed\n", "http_get");
          goto LABEL_11;
        }
LABEL_13:
        memset(v29, 0, sizeof(v29));
        v18 = (fd_set *)&v25;
        do
        {
          v18->__fds_bits[1] = 0;
          v18 = (fd_set *)((char *)v18 + 4);
        }
        while ( v18 != (fd_set *)&v26.__fds_bits[31] );
        v19 = 1 << (v4 & 0x1F);
        v26.__fds_bits[v4 >> 5] |= v19;
        timeout.tv_usec = 0;
        timeout.tv_sec = 20;
        if ( select(v4 + 1, &v26, 0, 0, &timeout) <= 0 )
          goto LABEL_17;
        if ( (v19 & v26.__fds_bits[v4 >> 5]) == 0 )
          goto LABEL_17;
        memset(v24, 0, sizeof(v24));
        v20 = 0;
        v25 = 0;
        sub_3C940(v24);
        printf("prepare recv:%s\n", (const char *)v24);
        while ( 1 )
        {
          v21 = recv(v4, &v29[v20], 0x1FFF - v20, 0);
          if ( v21 <= 0 )
            break;
          v20 += v21;
        }
        if ( !v20 )
        {
LABEL_17:
          sub_1E938((char *)&v26, 0x30u);
          v9 = "tcp client recv failed";
          printf("%s ", (const char *)&v26);
          v8 = &byte_614B08[1280];
          printf("%s : tcp client recv failed\n", "http_get");
LABEL_11:
          v10 = *(_DWORD *)v9;
          v11 = *((_DWORD *)v9 + 1);
          v12 = *((_DWORD *)v9 + 2);
          v13 = *((_DWORD *)v9 + 3);
          v14 = v9 + 16;
          *(_DWORD *)v8 = v10;
          *((_DWORD *)v8 + 1) = v11;
          *((_DWORD *)v8 + 2) = v12;
          *((_DWORD *)v8 + 3) = v13;
          v15 = v8 + 16;
          v16 = v14[1];
          *v15++ = *v14;
          *(_WORD *)v15 = v16;
          v15 = (_DWORD *)((char *)v15 + 2);
          *(_BYTE *)v15 = BYTE2(v16);
          sub_3CC5C((char *)v15 - 22, &v26);
          close(v4);
          return 0;
        }
        close(v4);
        return sub_2CAA4(v29);
      }
    }
  }
  else
  {
    sub_1E938((char *)&v26, 0x30u);
    printf("%s ", (const char *)&v26);
    printf("%s : url is null!\n", "http_get");
    strcpy(&byte_614B08[256], "url is null!");
    sub_3CC5C(&byte_614B08[256], &v26);
    return 0;
  }
}
