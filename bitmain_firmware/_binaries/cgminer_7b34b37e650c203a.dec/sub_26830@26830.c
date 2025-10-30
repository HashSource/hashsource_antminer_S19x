int __fastcall sub_26830(const char **a1, int a2, int a3)
{
  __int16 v6; // kr00_2
  unsigned int v7; // r10
  const char *v9; // r0
  const char *v10; // r10
  size_t v11; // r0
  size_t v12; // r8
  int v13; // r4
  unsigned int v14; // r10
  struct addrinfo *pai; // [sp+8h] [bp-A28h] BYREF
  char v16; // [sp+Ch] [bp-A24h] BYREF
  __int16 v17; // [sp+2Ch] [bp-A04h] BYREF
  char v18; // [sp+2Eh] [bp-A02h]
  char v19; // [sp+2Fh] [bp-A01h]
  int v20; // [sp+30h] [bp-A00h]
  char v21[8]; // [sp+34h] [bp-9FCh] BYREF
  _BYTE v22[500]; // [sp+3Ch] [bp-9F4h] BYREF
  struct addrinfo flags[64]; // [sp+230h] [bp-800h] BYREF

  v17 = 260;
  v6 = strtol(a1[146], 0, 10);
  v18 = HIBYTE(v6);
  v19 = v6;
  strcpy(v21, "CGMINER");
  v7 = bswap32(inet_addr(a1[150]));
  if ( v7 != -1 )
    goto LABEL_2;
  pai = (struct addrinfo *)&v16;
  memset(flags, 0, 0x20u);
  v9 = a1[150];
  flags[0].ai_family = 2;
  if ( !getaddrinfo(v9, 0, flags, &pai) )
  {
    v14 = *(_DWORD *)&pai->ai_addr->sa_data[2];
    freeaddrinfo(pai);
    v7 = bswap32(v14);
    if ( v7 != -1 )
    {
LABEL_2:
      HIBYTE(v20) = v7;
      LOBYTE(v20) = HIBYTE(v7);
      BYTE1(v20) = BYTE2(v7);
      BYTE2(v20) = BYTE1(v7);
      send(a2, &v17, 0x10u, 0);
      goto LABEL_3;
    }
LABEL_23:
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
    {
      snprintf((char *)flags, 0x800u, "Invalid IP address specified for socks4 proxy: %s", a1[150]);
      goto LABEL_9;
    }
    return 0;
  }
  if ( !a3 )
    goto LABEL_23;
  v10 = a1[150];
  v20 = 0x1000000;
  v11 = strlen(v10);
  if ( v11 >= 0xFF )
    v12 = 255;
  else
    v12 = v11;
  sub_254E8(v22, v10, v12, (int)"util.c", (int)"socks4_negotiate", 2898);
  v22[v12] = 0;
  send(a2, &v17, v12 + 17, 0);
LABEL_3:
  if ( recv(a2, flags, 1u, 0) == -1
    || LOBYTE(flags[0].ai_flags)
    || recv(a2, flags, 1u, 0) == -1
    || LOBYTE(flags[0].ai_flags) != 90 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
    {
      snprintf((char *)flags, 0x800u, "Bad response from %s:%s SOCKS4 server", a1[151], a1[152]);
LABEL_9:
      sub_20F58(4, (const char *)flags, 0);
      return 0;
    }
    return 0;
  }
  v13 = 6;
  do
  {
    recv(a2, flags, 1u, 0);
    --v13;
  }
  while ( v13 );
  return 1;
}
