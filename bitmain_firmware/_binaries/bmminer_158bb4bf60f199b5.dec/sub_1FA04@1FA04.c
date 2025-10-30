int sub_1FA04()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4
  socklen_t addr_len; // [sp+Ch] [bp-828h] BYREF
  struct sockaddr addr; // [sp+10h] [bp-824h] BYREF
  struct sockaddr v6; // [sp+20h] [bp-814h] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  prctl(15, "http", 0);
  do
  {
    v0 = socket(2, 1, 6);
    dword_9C290 = v0;
    if ( v0 < 0 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
      {
        strcpy(s, "socket creating failed, try again after 10s...");
        sub_47AB4(5, s, 0);
      }
      sleep(0xAu);
    }
    else
    {
      *(_DWORD *)&addr.sa_family = -1407778814;
      memset(&addr.sa_data[2], 0, 12);
      if ( bind(v0, &addr, 0x10u) < 0 )
      {
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
        {
          strcpy(s, "http port bind failed! try again after 10s...");
          sub_47AB4(5, s, 0);
        }
      }
      else
      {
        if ( listen(dword_9C290, 100) >= 0 )
          break;
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
        {
          strcpy(s, "http listen failed! try again after 10s...");
          sub_47AB4(5, s, 0);
        }
      }
      close(dword_9C290);
      dword_9C290 = -1;
      sleep(0xAu);
    }
  }
  while ( !byte_A0630 );
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    strcpy(s, "start listen on 6060 ...");
    sub_47AB4(5, s, 0);
  }
  if ( !byte_A0630 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v1 = accept(dword_9C290, &v6, &addr_len);
        v2 = v1;
        if ( v1 != -1 )
          break;
        if ( byte_A0630 )
          goto LABEL_19;
      }
      if ( byte_A0630 )
        break;
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        snprintf(s, 0x800u, "one client connected sock=%d", v1);
        sub_47AB4(7, s, 0);
      }
      sub_1EE28(v2);
      if ( byte_A0630 )
        goto LABEL_19;
    }
    close(v1);
  }
LABEL_19:
  close(dword_9C290);
  dword_9C290 = -1;
  return 0;
}
