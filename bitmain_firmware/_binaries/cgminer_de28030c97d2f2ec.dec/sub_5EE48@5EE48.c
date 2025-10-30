int __fastcall sub_5EE48(int a1)
{
  size_t v2; // r0
  size_t v3; // r0
  _DWORD v6[32]; // [sp+1Ch] [bp-490h] BYREF
  _DWORD v7[128]; // [sp+9Ch] [bp-410h] BYREF
  struct sockaddr addr; // [sp+29Ch] [bp-210h] BYREF
  int v9; // [sp+2ACh] [bp-200h] BYREF
  int v10; // [sp+2B0h] [bp-1FCh]
  int v11; // [sp+2B4h] [bp-1F8h]
  int v12; // [sp+2B8h] [bp-1F4h]
  int v13; // [sp+2BCh] [bp-1F0h]
  int v14; // [sp+2C0h] [bp-1ECh]
  int v15; // [sp+2C4h] [bp-1E8h]
  int v16; // [sp+2C8h] [bp-1E4h]
  int v17; // [sp+2CCh] [bp-1E0h] BYREF
  int v18; // [sp+2D0h] [bp-1DCh]
  int v19; // [sp+2D4h] [bp-1D8h]
  int v20; // [sp+2D8h] [bp-1D4h]
  int v21; // [sp+2DCh] [bp-1D0h]
  int v22; // [sp+2E0h] [bp-1CCh]
  int v23; // [sp+2E4h] [bp-1C8h]
  int v24; // [sp+2E8h] [bp-1C4h]
  int v25; // [sp+2ECh] [bp-1C0h] BYREF
  int v26; // [sp+2F0h] [bp-1BCh]
  int v27; // [sp+2F4h] [bp-1B8h]
  int v28; // [sp+2F8h] [bp-1B4h]
  int v29; // [sp+2FCh] [bp-1B0h]
  int v30; // [sp+300h] [bp-1ACh]
  int v31; // [sp+304h] [bp-1A8h]
  int v32; // [sp+308h] [bp-1A4h]
  int v33; // [sp+30Ch] [bp-1A0h] BYREF
  int v34; // [sp+310h] [bp-19Ch] BYREF
  _DWORD dest[32]; // [sp+314h] [bp-198h] BYREF
  char buf[4]; // [sp+394h] [bp-118h] BYREF
  _BYTE s[252]; // [sp+398h] [bp-114h] BYREF
  int v38; // [sp+494h] [bp-18h]
  ssize_t v39; // [sp+498h] [bp-14h]
  int v40; // [sp+49Ch] [bp-10h]
  int fd; // [sp+4A0h] [bp-Ch]
  pthread_mutex_t *mutex; // [sp+4A4h] [bp-8h]

  if ( !dword_8DDBC )
    return -1;
  mutex = (pthread_mutex_t *)malloc(0x24u);
  pthread_mutex_init(mutex, 0);
  fd = dword_8DDC0;
  *(_DWORD *)buf = 0;
  memset(s, 0, sizeof(s));
  sprintf(buf, "%x regist %s", 63, (const char *)a1);
  v40 = dword_91DDC;
  v2 = strlen(buf);
  send(fd, buf, v2 + 1, 0);
  memset(dest, 0, sizeof(dest));
  while ( v40 == dword_91DDC )
    usleep(0x3E8u);
  memcpy(dest, (char *)&unk_8DDDC + 128 * v40, sizeof(dest));
  v34 = 0;
  v33 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v39 = 128;
  _isoc99_sscanf(dest, "%x%d%s%s%s", &v33, &v34, &v25, &v17, &v9);
  if ( !v34 )
    return -4;
  memset(&addr, 0, sizeof(addr));
  addr.sa_family = 2;
  *(_DWORD *)&addr.sa_data[2] = inet_addr("127.0.0.1");
  *(_WORD *)addr.sa_data = htons(v34);
  v38 = socket(2, 1, 0);
  if ( v38 >= 0 )
  {
    if ( connect(v38, &addr, 0x10u) >= 0 )
    {
      memset(v7, 0, sizeof(v7));
      v39 = recv(v38, v7, 0x200u, 0);
      if ( v39 > 0 )
        *((_BYTE *)v7 + v39) = 0;
      memset(&v6[1], 0, 0x7Cu);
      v6[0] = 2181967;
      v3 = strlen((const char *)v6);
      send(v38, v6, v3 + 1, 0);
      mutex[1].__lock = v34;
      mutex[1].__owner = v38;
      *(_DWORD *)(a1 + 128) = mutex;
      return 0;
    }
    else
    {
      perror("connect err:");
      return -3;
    }
  }
  else
  {
    perror("socket err:");
    return -4;
  }
}
