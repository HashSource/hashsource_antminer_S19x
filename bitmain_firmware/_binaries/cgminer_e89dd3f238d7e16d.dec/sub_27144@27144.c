int __fastcall sub_27144(const char **a1, int a2, char a3)
{
  size_t v3; // r0
  char v5; // r0
  char v9[12]; // [sp+20h] [bp-C0Ch] BYREF
  char v10[3]; // [sp+820h] [bp-40Ch] BYREF
  unsigned __int8 v11; // [sp+823h] [bp-409h]
  ssize_t v12; // [sp+C20h] [bp-Ch]
  int i; // [sp+C24h] [bp-8h]

  if ( a3 )
    snprintf(v10, 0x400u, "CONNECT %s:%s HTTP/1.0\r\n\r\n", a1[150], a1[146]);
  else
    snprintf(v10, 0x400u, "CONNECT %s:%s HTTP/1.1\r\nHost: %s:%s\r\n\r\n", a1[150], a1[146], a1[150], a1[146]);
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v9, 0x800u, "Sending proxy %s:%s - %s", a1[151], a1[152], v10);
    sub_1DB6C(7, v9, 0);
  }
  v3 = strlen(v10);
  send(a2, v10, v3, 0);
  v12 = recv(a2, v10, 0xCu, 0);
  if ( v12 > 0 )
  {
    v10[v12] = 0;
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v9, 0x800u, "Received from proxy %s:%s - %s", a1[151], a1[152], v10);
      sub_1DB6C(7, v9, 0);
    }
    if ( !strcmp(v10, "HTTP/1.1 200") || !strcmp(v10, "HTTP/1.0 200") )
    {
      for ( i = 0; i <= 3; ++i )
      {
        v5 = sub_270FC(a2);
        v10[i] = v5;
        if ( (unsigned __int8)v10[i] == 255 )
        {
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
          {
            snprintf(v9, 0x800u, "Couldn't read HTTP byte from proxy %s:%s", a1[151], a1[152]);
            sub_1DB6C(4, v9, 0);
          }
          return 0;
        }
      }
      do
      {
        if ( !strncmp(v10, "\r\n\r\n", 4u) )
        {
          if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
          {
            snprintf(v9, 0x800u, "Success negotiating with %s:%s HTTP proxy", a1[151], a1[152]);
            sub_1DB6C(7, v9, 0);
          }
          return 1;
        }
        for ( i = 0; i <= 2; ++i )
          v10[i] = v10[i + 1];
        v11 = sub_270FC(a2);
      }
      while ( v11 != 255 );
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v9, 0x800u, "Couldn't read HTTP byte from proxy %s:%s", a1[151], a1[152]);
        sub_1DB6C(4, v9, 0);
      }
      return 0;
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v9, 0x800u, "HTTP Error from proxy %s:%s - %s", a1[151], a1[152], v10);
        sub_1DB6C(4, v9, 0);
      }
      return 0;
    }
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v9, 0x800u, "Couldn't read from proxy %s:%s after sending CONNECT", a1[151], a1[152]);
      sub_1DB6C(4, v9, 0);
    }
    return 0;
  }
}
