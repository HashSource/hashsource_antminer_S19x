int sub_2EDBC()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4
  int v4; // r3
  socklen_t addr_len; // [sp+8h] [bp-Ch] BYREF
  int optval; // [sp+Ch] [bp-8h] BYREF
  struct sockaddr v7; // [sp+10h] [bp-4h] BYREF
  struct sockaddr addr; // [sp+20h] [bp+Ch] BYREF
  char s[2052]; // [sp+30h] [bp+1Ch] BYREF

  prctl(15, "http", 0);
  optval = 1;
  do
  {
    v0 = socket(2, 1, 6);
    dword_B27A0 = v0;
    if ( v0 < 0 )
    {
      if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
      {
        strcpy(s, "socket creating failed, try again after 10s...");
        sub_3B6AC(5, s, 0, *(_DWORD *)"..");
      }
      sleep(0xAu);
    }
    else
    {
      v7.sa_family = 2;
      memset(&v7.sa_data[2], 0, 12);
      *(_WORD *)v7.sa_data = -21481;
      if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
        perror("set sockopt err");
      if ( bind(dword_B27A0, &v7, 0x10u) < 0 )
      {
        if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
        {
          strcpy(s, "http port bind failed! try again after 10s...");
          sub_3B6AC(5, s, 0, *(_DWORD *)".");
        }
      }
      else
      {
        if ( listen(dword_B27A0, 100) >= 0 )
          break;
        if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
        {
          strcpy(s, "http listen failed! try again after 10s...");
          sub_3B6AC(5, s, 0, *(unsigned __int16 *)"");
        }
      }
      close(dword_B27A0);
      dword_B27A0 = -1;
      sleep(0xAu);
    }
  }
  while ( !byte_B4120 );
  if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
  {
    strcpy(s, "start listen on 6060 ...");
    sub_3B6AC(5, s, 0, *(_DWORD *)" on 6060 ...");
  }
  while ( !byte_B4120 )
  {
    usleep(0x2710u);
    addr_len = 16;
    v1 = accept(dword_B27A0, &addr, &addr_len);
    v2 = v1;
    if ( v1 != -1 )
    {
      if ( byte_B4120 )
      {
        close(v1);
        break;
      }
      if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
      {
        snprintf(s, 0x800u, "one client connected sock=%d", v1);
        sub_3B6AC(7, s, 0, v4);
      }
      sub_2E238(v2);
    }
  }
  close(dword_B27A0);
  dword_B27A0 = -1;
  puts("http.c==================6060 failed");
  return 0;
}
