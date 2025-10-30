int __fastcall sub_2CAF0(const char *a1, int a2)
{
  int v3; // r4
  struct addrinfo *v4; // r4
  int v5; // r11
  int v6; // r5
  int v7; // r3
  int *v8; // r9
  int v10; // r10
  int v11; // r8
  int v12; // r8
  int v13; // r10
  _BYTE *v14; // r8
  fd_set *v15; // r3
  int v16; // r0
  int v17; // r0
  struct addrinfo *v18; // [sp+8h] [bp-10Ch]
  int v19; // [sp+10h] [bp-104h]
  struct addrinfo *pai; // [sp+20h] [bp-F4h] BYREF
  socklen_t optlen; // [sp+24h] [bp-F0h] BYREF
  int optval; // [sp+28h] [bp-ECh] BYREF
  struct timeval timeout; // [sp+2Ch] [bp-E8h] BYREF
  char s[4]; // [sp+34h] [bp-E0h] BYREF
  int v26; // [sp+38h] [bp-DCh]
  __int16 v27; // [sp+3Ch] [bp-D8h]
  struct addrinfo req; // [sp+40h] [bp-D4h] BYREF
  char v29[44]; // [sp+60h] [bp-B4h] BYREF
  char v30; // [sp+8Ch] [bp-88h] BYREF
  fd_set writefds; // [sp+90h] [bp-84h] BYREF
  _BYTE v32[4]; // [sp+110h] [bp-4h] BYREF

  v26 = 0;
  *(_DWORD *)s = 0;
  v27 = 0;
  sprintf(s, "%d", a2);
  memset(&req, 0, sizeof(req));
  v3 = 5;
  req.ai_socktype = 1;
  printf("socket host:%s,port:%s\n", a1, s);
  do
  {
    if ( !getaddrinfo(a1, s, &req, &pai) )
      break;
    sub_1E938((char *)&writefds, 0x30u);
    printf("%s ", &writefds);
    printf("%s : Failed to getaddrinfo for %s:%s, sleep\n", "http_tcpclient_create", a1, s);
    snprintf(byte_614508, 0x100u, "Failed to getaddrinfo for %s:%s, sleep", a1, s);
    sub_3CC5C(byte_614508, &writefds);
    _res_init();
    sleep(5u);
    --v3;
  }
  while ( v3 );
  v4 = pai;
  if ( !pai )
  {
LABEL_13:
    sub_1E938((char *)&writefds, 0x30u);
    printf("%s ", (const char *)&writefds);
    printf("%s : Failed to connect to server on %s:%s\n\n", "http_tcpclient_create", a1, s);
    snprintf(byte_614B08, 0x100u, "Failed to connect to server on %s:%s\n", a1, s);
    sub_3CC5C(byte_614B08, &writefds);
    freeaddrinfo(pai);
    return -2;
  }
  v19 = 0;
  while ( 1 )
  {
    printf("socket domain:%d,type:%d,protocol:%d\n", v4->ai_family, v4->ai_socktype, v4->ai_protocol);
    v5 = socket(v4->ai_family, v4->ai_socktype, v4->ai_protocol);
    if ( v5 == -1 )
    {
      sub_1E938((char *)&writefds, 0x30u);
      printf("%s ", (const char *)&writefds);
      printf("%s : Failed socket\n", "http_tcpclient_create");
      strcpy(byte_614608, "Failed socket");
      sub_3CC5C(byte_614608, &writefds);
      goto LABEL_12;
    }
    v6 = 0;
    puts("log addr:");
    do
    {
      v7 = (int)v4->ai_addr + v6++;
      printf("%2X ", *(unsigned __int8 *)(v7 + 2));
    }
    while ( v6 != 14 );
    putchar(10);
    printf("log connect:%d  family:%d,len:%d", v5, v4->ai_addr->sa_family, v4->ai_addrlen);
    if ( connect(v5, v4->ai_addr, v4->ai_addrlen) != -1 )
    {
      sub_1E938((char *)&writefds, 0x30u);
      printf("%s ", (const char *)&writefds);
      printf("%s : Succeeded immediate connect\n\n", "http_tcpclient_create");
      strcpy(byte_614908, "Succeeded immediate connect\n");
      sub_3CC5C(byte_614908, &writefds);
      v17 = fcntl(v5, 3, 0);
      fcntl(v5, 4, v17 | 0x800);
      goto LABEL_32;
    }
    perror("socket connect err!\n");
    timeout.tv_sec = 1;
    timeout.tv_usec = 0;
    v8 = _errno_location();
    if ( *v8 == 115 )
      break;
    close(v5);
    sub_1E938((char *)&writefds, 0x30u);
    printf("%s ", (const char *)&writefds);
    printf("%s : Failed sock connect\n\n", "http_tcpclient_create");
    strcpy(byte_614708, "Failed sock connect\n");
    sub_3CC5C(byte_614708, &writefds);
LABEL_12:
    v4 = v4->ai_next;
    if ( !v4 )
      goto LABEL_13;
  }
  LOBYTE(v10) = v5 & 0x1F;
  v11 = (v5 + 31) & (v5 >> 31);
  if ( v5 >= 0 )
    v11 = v5;
  v12 = v11 >> 5;
  if ( v5 <= 0 )
    v10 = -(-v5 & 0x1F);
  v18 = v4;
  v13 = 1 << v10;
  v14 = &v32[4 * v12];
  while ( 1 )
  {
    v4 = v18;
    ++v19;
    v15 = (fd_set *)&v30;
    do
    {
      v15->__fds_bits[1] = 0;
      v15 = (fd_set *)((char *)v15 + 4);
    }
    while ( &writefds.__fds_bits[31] != (__fd_mask *)v15 );
    *((_DWORD *)v14 - 32) |= v13;
    v16 = select(v5 + 1, 0, &writefds, 0, &timeout);
    if ( v16 > 0 )
      break;
    if ( !v16 || *v8 != 4 )
      goto LABEL_23;
  }
  if ( (v13 & *((_DWORD *)v14 - 32)) == 0 || (optlen = 4, getsockopt(v5, 1, 4, &optval, &optlen)) || optval )
  {
LABEL_23:
    close(v5);
    sub_1E938(v29, 0x30u);
    printf("%s ", v29);
    printf("%s : Select timeout/failed connect\n\n", "http_tcpclient_create");
    strcpy(byte_614A08, "Select timeout/failed connect\n");
    sub_3CC5C(byte_614A08, v29);
    goto LABEL_12;
  }
  sub_1E938(v29, 0x30u);
  printf("%s ", v29);
  printf("%s : Succeeded delayed connect, count:%d\n\n", "http_tcpclient_create", v19);
  snprintf(byte_614808, 0x100u, "Succeeded delayed connect, count:%d\n", v19);
  sub_3CC5C(byte_614808, v29);
LABEL_32:
  freeaddrinfo(pai);
  return v5;
}
