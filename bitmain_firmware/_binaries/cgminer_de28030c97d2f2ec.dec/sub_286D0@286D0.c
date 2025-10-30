int __fastcall sub_286D0(const char **a1, int a2, char a3)
{
  uint32_t v3; // r0
  size_t v5; // r3
  int v10; // [sp+1Ch] [bp-A40h] BYREF
  struct addrinfo v11[64]; // [sp+3Ch] [bp-A20h] BYREF
  struct addrinfo *pai; // [sp+83Ch] [bp-220h] BYREF
  _BYTE buf[4]; // [sp+840h] [bp-21Ch] BYREF
  char v14; // [sp+844h] [bp-218h]
  char v15; // [sp+845h] [bp-217h]
  char v16; // [sp+846h] [bp-216h]
  char v17; // [sp+847h] [bp-215h]
  char v18[8]; // [sp+848h] [bp-214h] BYREF
  int v19; // [sp+850h] [bp-20Ch] BYREF
  struct sockaddr *ai_addr; // [sp+A44h] [bp-18h]
  __int16 v21; // [sp+A4Ah] [bp-12h]
  size_t n; // [sp+A4Ch] [bp-10h]
  int i; // [sp+A50h] [bp-Ch]
  uint32_t netlong; // [sp+A54h] [bp-8h]

  buf[0] = 4;
  buf[1] = 1;
  v21 = atoi(a1[146]);
  buf[2] = HIBYTE(v21);
  buf[3] = v21;
  strcpy(v18, "CGMINER");
  v3 = inet_addr(a1[154]);
  netlong = ntohl(v3);
  if ( netlong == -1 )
  {
    pai = (struct addrinfo *)&v10;
    memset(v11, 0, 0x20u);
    v11[0].ai_family = 2;
    if ( !getaddrinfo(a1[154], 0, v11, &pai) )
    {
      ai_addr = pai->ai_addr;
      netlong = ntohl(*(_DWORD *)&ai_addr->sa_data[2]);
      a3 = 0;
      freeaddrinfo(pai);
    }
  }
  else
  {
    a3 = 0;
  }
  if ( a3 != 1 )
  {
    if ( netlong == -1 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf((char *)v11, 0x800u, "Invalid IP address specified for socks4 proxy: %s", a1[154]);
        sub_1E4EC(4, (const char *)v11, 0);
      }
      return 0;
    }
    v14 = HIBYTE(netlong);
    v15 = BYTE2(netlong);
    v16 = BYTE1(netlong);
    v17 = netlong;
    send(a2, buf, 0x10u, 0);
  }
  else
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 1;
    n = strlen(a1[154]);
    if ( (int)n > 255 )
      n = 255;
    sub_2BEFC(&v19, a1[154], n, "util.c", "socks4_negotiate", 2981);
    n += 16;
    v5 = n++;
    buf[v5] = 0;
    send(a2, buf, n, 0);
  }
  if ( !sub_27A44(a2) && sub_27A44(a2) == 90 )
  {
    for ( i = 0; i <= 5; ++i )
      sub_27A44(a2);
    return 1;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf((char *)v11, 0x800u, "Bad response from %s:%s SOCKS4 server", a1[155], a1[156]);
      sub_1E4EC(4, (const char *)v11, 0);
    }
    return 0;
  }
}
