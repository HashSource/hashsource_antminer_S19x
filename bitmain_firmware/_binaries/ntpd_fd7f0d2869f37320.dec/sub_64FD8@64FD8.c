int __fastcall sub_64FD8(const char *a1, int a2, _WORD *s)
{
  _BOOL4 v6; // r4
  int result; // r0
  int v8; // r3
  struct addrinfo *v9; // lr
  struct sockaddr *ai_addr; // r2
  char *v11; // r3
  int v12; // r4
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  char *v17; // r0
  int buf; // [sp+4h] [bp-ACh] BYREF
  struct addrinfo *pai; // [sp+8h] [bp-A8h] BYREF
  struct addrinfo req; // [sp+Ch] [bp-A4h] BYREF
  char v21[128]; // [sp+2Ch] [bp-84h] BYREF

  if ( !a1 )
    sub_6FC54("is_ip_address.c", 40, 0, "host != ((void *)0)");
  if ( !s )
    sub_6FC54("is_ip_address.c", 41, 0, "addr != ((void *)0)");
  memset(s, 0, 0x1Cu);
  v6 = a2 == 0;
  if ( (a2 & 0xFFFFFFFD) != 0 || (result = inet_pton(2, a1, &buf), result != 1) )
  {
    if ( a2 == 10 )
      v6 = 1;
    if ( !v6 || strlen(a1) > 0x7F )
      return 0;
    if ( *a1 == 91 )
    {
      sub_6E4B4(v21);
      v17 = strchr(v21, 93);
      if ( v17 )
        *v17 = 0;
    }
    else
    {
      sub_6E4B4(v21);
    }
    memset(&req.ai_socktype, 0, 24);
    req.ai_family = 10;
    req.ai_flags = 4;
    if ( !getaddrinfo(v21, 0, &req, &pai) )
    {
      v9 = pai;
      *s = 10;
      ai_addr = v9->ai_addr;
      v11 = &ai_addr->sa_data[6];
      v12 = *(_DWORD *)&ai_addr[1].sa_data[6];
      v13 = *(_DWORD *)&ai_addr->sa_data[6];
      v14 = *(_DWORD *)&ai_addr->sa_data[10];
      v15 = *(_DWORD *)&ai_addr[1].sa_family;
      v16 = *((_DWORD *)v11 + 3);
      *((_DWORD *)s + 2) = v13;
      *((_DWORD *)s + 3) = v14;
      *((_DWORD *)s + 4) = v15;
      *((_DWORD *)s + 5) = v16;
      *((_DWORD *)s + 6) = v12;
      freeaddrinfo(v9);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v8 = buf;
    *s = 2;
    *((_DWORD *)s + 1) = v8;
  }
  return result;
}
