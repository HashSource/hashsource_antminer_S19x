int sub_2E7A0()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4
  int v3; // r3
  socklen_t addr_len; // [sp+8h] [bp-4h] BYREF
  int v6; // [sp+Ch] [bp+0h] BYREF
  struct sockaddr v7; // [sp+10h] [bp+4h] BYREF
  struct sockaddr addr; // [sp+20h] [bp+14h] BYREF
  char s[2052]; // [sp+30h] [bp+24h] BYREF

  prctl(15, "http", 0);
  v6 = 1;
  do
  {
    v0 = socket(2, 1, 6);
    dword_AF338 = v0;
    if ( v0 < 0 )
    {
      if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
      {
        strcpy(s, "socket creating failed, try again after 10s...");
        sub_3AF5C(5, s, 0, *(_DWORD *)"..");
      }
      sleep(0xAu);
    }
    else
    {
      memset(&v7.sa_data[2], 0, 12);
      *(_DWORD *)&v7.sa_family = -1407778814;
      if ( setsockopt(v0, 1, 2, &v6, 4u) < 0 )
        perror("set sockopt err");
      if ( bind(dword_AF338, &v7, 0x10u) < 0 )
      {
        if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
        {
          strcpy(s, "http port bind failed! try again after 10s...");
          sub_3AF5C(5, s, 0, *(_DWORD *)".");
        }
      }
      else
      {
        if ( listen(dword_AF338, 100) >= 0 )
          break;
        if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
        {
          strcpy(s, "http listen failed! try again after 10s...");
          sub_3AF5C(5, s, 0, *(unsigned __int16 *)"");
        }
      }
      close(dword_AF338);
      dword_AF338 = -1;
      sleep(0xAu);
    }
  }
  while ( !byte_B13B0 );
  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
  {
    strcpy(s, "start listen on 6060 ...");
    sub_3AF5C(5, s, 0, *(_DWORD *)" on 6060 ...");
  }
  if ( !byte_B13B0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v1 = accept(dword_AF338, &addr, &addr_len);
        v2 = v1;
        if ( v1 != -1 )
          break;
        if ( byte_B13B0 )
          goto LABEL_21;
      }
      if ( byte_B13B0 )
        break;
      if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
      {
        snprintf(s, 0x800u, "one client connected sock=%d", v1);
        sub_3AF5C(7, s, 0, v3);
      }
      sub_2DC34(v2);
      if ( byte_B13B0 )
        goto LABEL_21;
    }
    close(v1);
  }
LABEL_21:
  close(dword_AF338);
  dword_AF338 = -1;
  puts("http.c==================6060 failed");
  return 0;
}
