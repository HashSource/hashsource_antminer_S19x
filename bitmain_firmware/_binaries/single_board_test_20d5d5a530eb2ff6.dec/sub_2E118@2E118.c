char *__fastcall sub_2E118(const char *a1, const char *a2)
{
  bool v4; // zf
  int v5; // r6
  int v6; // r4
  int v7; // r6
  size_t v8; // r0
  signed int v9; // r8
  ssize_t v10; // r0
  _DWORD *v11; // r4
  int *v12; // r7
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  _DWORD *v17; // r7
  _DWORD *v18; // r4
  int v19; // r1
  int v20; // r2
  int v21; // r3
  signed int v23; // r8
  int v24; // r4
  ssize_t v25; // r0
  fd_set *v26; // r3
  int v27; // r7
  int v28; // r7
  ssize_t v29; // r0
  int v30; // [sp+14h] [bp-30BCh] BYREF
  struct timeval timeout; // [sp+18h] [bp-30B8h] BYREF
  char v32[24]; // [sp+20h] [bp-30B0h] BYREF
  _DWORD v33[5]; // [sp+38h] [bp-3098h] BYREF
  int v34; // [sp+4Ch] [bp-3084h] BYREF
  fd_set v35; // [sp+50h] [bp-3080h] BYREF
  char s[2048]; // [sp+D0h] [bp-3000h] BYREF
  char v37[2048]; // [sp+8D0h] [bp-2800h] BYREF
  char v38[8192]; // [sp+10D0h] [bp-2000h] BYREF

  puts("http request");
  memset(v38, 0, sizeof(v38));
  memset(s, 0, sizeof(s));
  memset(v37, 0, sizeof(v37));
  v4 = a2 == 0;
  if ( a2 )
    v4 = a1 == 0;
  v30 = 0;
  v5 = v4;
  if ( v4 )
  {
    sub_1E938((char *)&v35, 0x30u);
    printf("%s ", (const char *)&v35);
    printf("%s : http_post parameter check failed!\n", "http_post");
    strcpy(byte_616F0C, "http_post parameter check failed!");
    sub_3CC5C(byte_616F0C, &v35);
    return 0;
  }
  else
  {
    v6 = sub_2C9A8(a1, s, v37, &v30);
    if ( v6 )
    {
      sub_1E938((char *)&v35, 0x30u);
      printf("%s ", (const char *)&v35);
      printf("%s : http_parse_url failed!\n", "http_post");
      strcpy(byte_61700C, "http_parse_url failed!");
      sub_3CC5C(byte_61700C, &v35);
      return (char *)v5;
    }
    else
    {
      printf("log parse url:%s addr:%s file:%s port:%d \n", a1, s, v37, v30);
      v7 = sub_2D8B0(s, v30);
      if ( v7 < 0 )
      {
        sub_1E938((char *)&v35, 0x30u);
        printf("%s ", (const char *)&v35);
        printf("%s : create socket failed\n", "http_post");
        strcpy(byte_61710C, "create socket failed");
        sub_3CC5C(byte_61710C, &v35);
        return 0;
      }
      else
      {
        v8 = strlen(a2);
        snprintf(
          v38,
          0x2000u,
          "POST /%s HTTP/1.1\r\n"
          "HOST: %s:%d\r\n"
          "Accept: */*\r\n"
          "Content-Type:application/json\r\n"
          "Connection:keep-alive\r\n"
          "Content-Length: %d\r\n"
          "\r\n",
          v37,
          s,
          v30,
          v8);
        v9 = strlen(v38);
        if ( v9 > 0 )
        {
          while ( 1 )
          {
            v10 = send(v7, &v38[v6], v9 - v6, 0);
            v6 += v10;
            if ( v10 == -1 )
              break;
            if ( v9 <= v6 )
              goto LABEL_15;
          }
          sub_1E938((char *)&v35, 0x30u);
          v11 = &unk_61720C;
          printf("%s ", (const char *)&v35);
          LOWORD(v12) = (unsigned __int16)"http_tcpclient_send failed..";
          printf("%s : http_tcpclient_send failed..\n", "http_post");
          goto LABEL_14;
        }
LABEL_15:
        v23 = strlen(a2);
        if ( v23 > 0 )
        {
          v24 = 0;
          while ( 1 )
          {
            v25 = send(v7, &a2[v24], v23 - v24, 0);
            v24 += v25;
            if ( v25 == -1 )
              break;
            if ( v23 <= v24 )
              goto LABEL_20;
          }
          sub_1E938((char *)&v35, 0x30u);
          LOWORD(v12) = 21768;
          printf("%s ", (const char *)&v35);
          v11 = &unk_61730C;
          printf("%s : http_tcpclient_send failed..\n", "http_post");
LABEL_14:
          HIWORD(v12) = (unsigned int)"http_tcpclient_send failed.." >> 16;
          v13 = *v12;
          v14 = v12[1];
          v15 = v12[2];
          v16 = v12[3];
          v17 = v12 + 4;
          *v11 = v13;
          v11[1] = v14;
          v11[2] = v15;
          v11[3] = v16;
          v18 = v11 + 4;
          v19 = v17[1];
          v20 = v17[2];
          v21 = v17[3];
          *v18 = *v17;
          v18[1] = v19;
          v18[2] = v20;
          v18 += 3;
          *(_BYTE *)v18 = v21;
          sub_3CC5C(v18 - 7, &v35);
          close(v7);
          return 0;
        }
LABEL_20:
        sub_3C940(v32);
        printf("send over time:%s\n", v32);
        v26 = (fd_set *)&v34;
        do
        {
          v26->__fds_bits[1] = 0;
          v26 = (fd_set *)((char *)v26 + 4);
        }
        while ( v26 != (fd_set *)&v35.__fds_bits[31] );
        v27 = 1 << (v7 & 0x1F);
        v35.__fds_bits[v7 >> 5] |= v27;
        timeout.tv_usec = 0;
        timeout.tv_sec = 20;
        if ( select(v7 + 1, &v35, 0, 0, &timeout) <= 0 )
          goto LABEL_24;
        if ( (v27 & v35.__fds_bits[v7 >> 5]) == 0 )
          goto LABEL_24;
        memset(v33, 0, sizeof(v33));
        v28 = 0;
        v34 = 0;
        sub_3C940(v33);
        printf("prepare recv:%s\n", (const char *)v33);
        while ( 1 )
        {
          v29 = recv(v7, &v38[v28], 0x1FFF - v28, 0);
          if ( v29 <= 0 )
            break;
          v28 += v29;
        }
        if ( v28 )
        {
          close(v7);
          sub_3C940(v32);
          printf("recv over time:%s\n", v32);
          return sub_2CAA4(v38);
        }
        else
        {
LABEL_24:
          sub_1E938((char *)&v35, 0x30u);
          printf("%s ", (const char *)&v35);
          printf("%s : http_tcpclient_recv failed\n", "http_post");
          strcpy(byte_61740C, "http_tcpclient_recv failed");
          sub_3CC5C(byte_61740C, &v35);
          close(v7);
          return 0;
        }
      }
    }
  }
}
