int __fastcall sub_644EC(const char *a1, _WORD *a2)
{
  char *v2; // r4
  const char *v3; // r7
  char *v5; // r0
  struct addrinfo *v6; // r4
  __int16 v7; // r3
  int v9; // r3
  char *v10; // r1
  bool v11; // zf
  char *v12; // r0
  char *v13; // r2
  int v14; // t1
  bool v15; // zf
  char *v16; // r0
  unsigned __int16 v17; // [sp+6h] [bp-7Ah] BYREF
  struct addrinfo *pai; // [sp+8h] [bp-78h] BYREF
  struct addrinfo req; // [sp+Ch] [bp-74h] BYREF
  char v20[80]; // [sp+2Ch] [bp-54h] BYREF

  v2 = (char *)a1;
  v3 = 0;
  pai = 0;
  if ( !a1 )
    sub_6FC54("decodenetnum.c", 38, 0, "num != ((void *)0)");
  if ( strlen(a1) > 0x4F )
    return 0;
  if ( *v2 == 91 )
  {
    v9 = (unsigned __int8)v2[1];
    v10 = v2 + 1;
    v11 = v9 == 93;
    if ( v9 != 93 )
      v11 = v9 == 0;
    if ( v11 )
    {
      v13 = v20;
    }
    else
    {
      v12 = v2 + 2;
      v13 = v20;
      do
      {
        *v13++ = v9;
        v10 = v12;
        v14 = (unsigned __int8)*v12++;
        v9 = v14;
        v15 = v14 == 93;
        if ( v14 != 93 )
          v15 = v9 == 0;
      }
      while ( !v15 );
    }
    v3 = 0;
    *v13 = 0;
    if ( v9 == 93 && v10[1] == 58 && (v3 = (const char *)(unsigned __int8)v10[2], v10[2]) )
    {
      v3 = v10 + 2;
      v2 = v20;
    }
    else
    {
      v2 = v20;
    }
  }
  else
  {
    v5 = strchr(v2, 58);
    if ( v5 )
    {
      if ( !strchr(v5 + 1, 58) )
      {
        v2 = v20;
        sub_6E4B4(v20);
        v16 = strchr(v20, 58);
        *v16 = 0;
        v3 = v16 + 1;
      }
    }
    else
    {
      v3 = 0;
    }
  }
  memset(&req.ai_family, 0, 28);
  req.ai_flags = 4;
  if ( getaddrinfo(v2, "ntp", &req, &pai) )
    return 0;
  v6 = pai;
  if ( pai->ai_addrlen > 0x1C )
    sub_6FC54("decodenetnum.c", 78, 2, "ai->ai_addrlen <= sizeof(*netnum)");
  memset(a2, 0, 0x1Cu);
  memcpy(a2, v6->ai_addr, v6->ai_addrlen);
  freeaddrinfo(v6);
  if ( v3 && sscanf(v3, "%hu", &v17) == 1 )
    v7 = HIBYTE(v17) | (v17 << 8);
  else
    v7 = 31488;
  a2[1] = v7;
  return 1;
}
