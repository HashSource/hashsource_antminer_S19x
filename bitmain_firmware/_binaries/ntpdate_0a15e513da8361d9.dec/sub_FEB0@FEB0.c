_BYTE *__fastcall sub_FEB0(struct sockaddr *a1)
{
  char v2; // r5
  _BYTE *v3; // r11
  socklen_t v4; // r1
  const char *v5; // r0
  int sa_family; // lr
  int v7; // r0
  bool v8; // zf
  int v9; // r10
  const char *v10; // r0
  _BYTE *v11; // r4
  int v12; // r5
  const char *v13; // r0
  int v15; // r8
  struct addrinfo *v16; // r5
  struct sockaddr *ai_addr; // r1
  _BOOL4 v18; // r3
  int *v19; // [sp+20h] [bp-74h]
  int v20; // [sp+24h] [bp-70h]
  struct addrinfo *ai; // [sp+3Ch] [bp-58h]
  struct addrinfo *v22; // [sp+48h] [bp-4Ch] BYREF
  struct addrinfo req; // [sp+4Ch] [bp-48h] BYREF
  int v24; // [sp+6Ch] [bp-28h] BYREF
  int v25; // [sp+70h] [bp-24h]
  _DWORD v26[4]; // [sp+74h] [bp-20h] BYREF
  int v27; // [sp+84h] [bp-10h]
  char service[4]; // [sp+88h] [bp-Ch] BYREF

  strcpy(service, "ntp");
  v19 = _errno_location();
  v20 = *v19;
  v2 = lib_nextbuf;
  v3 = &lib_stringbuf[128 * lib_nextbuf];
  memset(v3, 0, 0x80u);
  lib_nextbuf = (v2 + 1) & 0xF;
  if ( a1->sa_family == 2 )
    v4 = 16;
  else
    v4 = 28;
  if ( getnameinfo(a1, v4, v3, 0x80u, 0, 0, 0x18u) )
  {
    *v19 = v20;
    return sub_FAE0(&a1->sa_family);
  }
  if ( debug > 0 )
  {
    v5 = sub_FAE0(&a1->sa_family);
    sub_AB20("%s reversed to %s\n", v5, v3);
  }
  sa_family = a1->sa_family;
  v22 = 0;
  req.ai_flags = 0;
  memset(&req.ai_addrlen, 0, 16);
  req.ai_family = sa_family;
  req.ai_protocol = 17;
  req.ai_socktype = 2;
  v7 = getaddrinfo(v3, service, &req, &v22);
  v8 = v7 == -5;
  if ( v7 != -5 )
    v8 = v7 == -2;
  v9 = v7;
  if ( v8 )
  {
    req.ai_flags = 34;
    v9 = getaddrinfo(v3, service, &req, &v22);
    if ( v9 != -1 )
      goto LABEL_11;
LABEL_26:
    req.ai_flags &= ~0x20u;
    v9 = getaddrinfo(v3, service, &req, &v22);
    goto LABEL_11;
  }
  if ( v7 == -1 )
    goto LABEL_26;
LABEL_11:
  if ( v9 )
    goto LABEL_12;
  ai = v22;
  if ( !v22 )
    sub_10C38("socktohost.c", 87, 2, "alist != ((void *)0)");
  v15 = a1->sa_family;
  v16 = v22;
  do
  {
    v24 = v9;
    v25 = v9;
    v26[0] = v9;
    v26[1] = v9;
    v26[2] = v9;
    v26[3] = v9;
    ai_addr = v16->ai_addr;
    v27 = v9;
    _memcpy_chk(&v24, ai_addr);
    if ( (unsigned __int16)v24 != v15 )
      goto LABEL_17;
    if ( v15 == 2 )
    {
      v18 = *(_DWORD *)&a1->sa_data[2] == v25;
    }
    else
    {
      if ( memcmp(&a1->sa_data[6], v26, 0x10u) )
        goto LABEL_17;
      v18 = *(_DWORD *)&a1[1].sa_data[6] == v27;
    }
    if ( v18 )
    {
      freeaddrinfo(ai);
      *v19 = v20;
      return v3;
    }
LABEL_17:
    v16 = v16->ai_next;
  }
  while ( v16 );
  freeaddrinfo(ai);
LABEL_12:
  if ( debug > 0 )
  {
    v10 = gai_strerror(v9);
    sub_AB20("%s forward check lookup fail: %s\n", v3, v10);
  }
  v11 = &lib_stringbuf[128 * lib_nextbuf];
  v12 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v11, 0, 0x80u);
  lib_nextbuf = v12;
  v13 = sub_FAE0(&a1->sa_family);
  sub_FA7C((int)v11, 0x80u, "%s (%s)", v13, v3);
  *v19 = v20;
  return v11;
}
