char *__fastcall sub_2E4E0(const char *a1, const char *a2)
{
  bool v4; // zf
  int v5; // r8
  int v6; // r8
  int v7; // r0
  int v8; // r0
  int v9; // r9
  int v10; // r5
  int v11; // r0
  const char *v12; // r0
  size_t v13; // r0
  size_t v14; // r0
  size_t v15; // r0
  char *v16; // r4
  _DWORD *v18; // r7
  int *v19; // r6
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r6
  _DWORD *v25; // r7
  int v26; // r1
  int v27; // r6
  char *v28; // r0
  int v29; // [sp+1Ch] [bp-3038h] BYREF
  char v30[48]; // [sp+20h] [bp-3034h] BYREF
  char s[2048]; // [sp+50h] [bp-3004h] BYREF
  char v32[2048]; // [sp+850h] [bp-2804h] BYREF
  char v33[8196]; // [sp+1050h] [bp-2004h] BYREF

  puts("https request");
  memset(v33, 0, 0x2000u);
  memset(s, 0, sizeof(s));
  memset(v32, 0, sizeof(v32));
  v4 = a2 == 0;
  if ( a2 )
    v4 = a1 == 0;
  v29 = 0;
  v5 = v4;
  if ( v4 )
  {
    sub_1E938(v30, 0x30u);
    printf("%s ", v30);
    printf("%s : http_post parameter check failed!\n", "ssl_request");
    strcpy(byte_61750C, "http_post parameter check failed!");
    sub_3CC5C(byte_61750C, v30);
    return 0;
  }
  if ( sub_2C9A8(a1, s, v32, &v29) )
  {
    sub_1E938(v30, 0x30u);
    printf("%s ", v30);
    printf("%s : http_parse_url failed!\n", "ssl_request");
    strcpy(byte_61760C, "http_parse_url failed!");
    sub_3CC5C(byte_61760C, v30);
    return (char *)v5;
  }
  printf("host:%s,file:%s,port:%d\n", s, v32, v29);
  printf("log parse url:%s addr:%s file:%s port:%d \n", a1, s, v32, v29);
  v6 = sub_2D8B0(s, v29);
  sub_87798(0, 0, 0);
  sub_DE05C(12, 0, 0);
  v7 = sub_87798(2097154, 0, 0);
  v8 = sub_7C31C(v7);
  v9 = sub_8A060(v8);
  if ( !v9 )
  {
    sub_D1450(stdout);
    exit(1);
  }
  v10 = sub_8BB18();
  sub_883C8(v10, v6);
  if ( sub_8B330(v10) == -1 )
  {
    sub_D1450(stderr);
  }
  else
  {
    v11 = sub_8A824(v10);
    v12 = (const char *)sub_87170(v11);
    printf("Connected with %s encryption\n", v12);
  }
  v13 = strlen(a2);
  snprintf(
    v33,
    0x2000u,
    "POST /%s HTTP/1.1\r\n"
    "HOST: %s:%d\r\n"
    "Accept: */*\r\n"
    "Content-Type:application/json\r\n"
    "Connection:keep-alive\r\n"
    "Content-Length: %d\r\n"
    "\r\n",
    v32,
    s,
    v29,
    v13);
  v14 = strlen(v33);
  if ( sub_88D6C(v10, v33, v14) < 0 )
  {
    v18 = &unk_61770C;
    v16 = 0;
    sub_1E938(v30, 0x30u);
    LOWORD(v19) = (unsigned __int16)"ssl_request failed..";
    printf("%s ", v30);
    printf("%s : ssl_request failed..\n", "ssl_request");
  }
  else
  {
    v15 = strlen(a2);
    if ( sub_88D6C(v10, a2, v15) >= 0 )
    {
      memset(v33, 0, 0x2000u);
      if ( sub_88920(v10, v33, 0x2000) < 0 )
      {
        v27 = *_errno_location();
        v16 = 0;
        v28 = strerror(v27);
        printf("msg recv fail,errcode:%d,err msg:%s\n", v27, v28);
      }
      else
      {
        v16 = sub_2CAA4(v33);
      }
      goto LABEL_15;
    }
    sub_1E938(v30, 0x30u);
    v16 = 0;
    printf("%s ", v30);
    LOWORD(v19) = 22008;
    printf("%s : ssl_request failed..\n", "ssl_request");
    v18 = &unk_61780C;
  }
  HIWORD(v19) = (unsigned int)"ssl_request failed.." >> 16;
  v20 = *v19;
  v21 = v19[1];
  v22 = v19[2];
  v23 = v19[3];
  v24 = v19 + 4;
  *v18 = v20;
  v18[1] = v21;
  v18[2] = v22;
  v18[3] = v23;
  v25 = v18 + 4;
  v26 = v24[1];
  *v25++ = *v24;
  *(_BYTE *)v25 = v26;
  sub_3CC5C(v25 - 5, v30);
LABEL_15:
  sub_88DB4(v10);
  sub_8B45C(v10);
  close(v6);
  sub_89F14(v9);
  return v16;
}
