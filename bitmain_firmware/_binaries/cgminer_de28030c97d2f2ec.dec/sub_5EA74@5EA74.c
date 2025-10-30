int __fastcall sub_5EA74(int a1, unsigned int a2)
{
  size_t v3; // r0
  size_t v4; // r0
  pthread_t newthread; // [sp+8h] [bp-354h] BYREF
  char v9[256]; // [sp+Ch] [bp-350h] BYREF
  _DWORD buf[128]; // [sp+10Ch] [bp-250h] BYREF
  struct sockaddr s; // [sp+30Ch] [bp-50h] BYREF
  pthread_attr_t attr; // [sp+31Ch] [bp-40h] BYREF
  void *arg; // [sp+340h] [bp-1Ch]
  ssize_t v14; // [sp+344h] [bp-18h]
  int v15; // [sp+348h] [bp-14h]
  int fd; // [sp+34Ch] [bp-10h]
  int v17; // [sp+350h] [bp-Ch]
  unsigned int i; // [sp+354h] [bp-8h]

  if ( dword_8DDBC )
    return -1;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x100000u);
  pthread_mutex_init(&stru_8DDC4, 0);
  for ( i = 0; i < a2; ++i )
  {
    memcpy(&dword_899B8[34 * i + 1], (const void *)(a1 + 136 * i + 4), 0x80u);
    dword_899B8[34 * i] = *(_DWORD *)(a1 + 136 * i);
    dword_899B8[34 * i + 33] = *(_DWORD *)(a1 + 136 * i + 132);
  }
  dword_8DDB8 = a2;
  v17 = 22026;
  memset(&s, 0, sizeof(s));
  s.sa_family = 2;
  *(_DWORD *)&s.sa_data[2] = inet_addr("127.0.0.1");
  *(_WORD *)s.sa_data = htons(v17);
  fd = socket(2, 1, 0);
  if ( fd >= 0 )
  {
    v15 = 0;
    while ( connect(fd, &s, 0x10u) < 0 )
    {
      perror("connect err:");
      sleep(1u);
    }
    memset(buf, 0, sizeof(buf));
    v14 = 0;
    v14 = recv(fd, buf, 0x100u, 0);
    if ( v14 > 0 )
      *((_BYTE *)buf + v14) = 0;
    strcpy(v9, "func1 func2 func3 func4");
    memset(&v9[24], 0, 0xE8u);
    v3 = strlen(v9);
    send(fd, v9, v3 + 1, 0);
    v14 = recv(fd, buf, 0x100u, 0);
    if ( v14 > 0 )
      *((_BYTE *)buf + v14) = 0;
    strcpy(v9, "3f heart-beats 22027");
    v4 = strlen(v9);
    send(fd, v9, v4 + 1, 0);
    dword_8DDC0 = fd;
    arg = malloc(0xCu);
    *(_DWORD *)arg = v17;
    *((_DWORD *)arg + 2) = fd;
    pthread_create(&newthread, &attr, (void *(*)(void *))sub_5E530, arg);
    dword_8DDBC = 1;
    return 0;
  }
  else
  {
    perror("socket err:");
    return -4;
  }
}
