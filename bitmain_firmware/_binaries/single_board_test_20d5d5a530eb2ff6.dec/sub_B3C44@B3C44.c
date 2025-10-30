int __fastcall sub_B3C44(const char *a1, const char *a2, int a3, int a4, int a5, int a6, struct addrinfo **pai)
{
  int v11; // r6
  size_t v13; // r7
  struct addrinfo *v14; // r0
  _WORD *v15; // r0
  struct addrinfo *v16; // r4
  struct sockaddr *v17; // r0
  int v18; // r3
  bool v19; // zf
  int v20; // r8
  int v21; // r0
  int v22; // r6
  int v23; // r2
  int v24; // r0
  const char *v25; // r0
  int v26; // r2
  int *v27; // r0
  struct addrinfo s; // [sp+8h] [bp-20h] BYREF

  if ( a4 < 0 )
    goto LABEL_12;
  if ( a4 <= 2 )
  {
    if ( a4 == 1 )
    {
      v13 = strlen(a1);
      v14 = (struct addrinfo *)sub_E0740(32, "crypto/bio/b_addr.c", 572);
      *pai = v14;
      if ( v14 )
      {
        v14->ai_family = 1;
        v14->ai_protocol = 0;
        v14->ai_socktype = a5;
        v15 = sub_B3650();
        if ( v15 )
        {
          sub_B3704(v15, 1, a1, v13, 0);
          v16 = *pai;
          nullsub_24();
          v16->ai_addr = v17;
        }
        (*pai)->ai_next = 0;
        if ( (*pai)->ai_addr )
          return 1;
        sub_B3AA0(*pai);
        *pai = 0;
      }
      else
      {
        sub_D0048(32, 148, 65, "crypto/bio/b_addr.c", 573);
      }
      v23 = 672;
LABEL_28:
      sub_D0048(32, 143, 65, "crypto/bio/b_addr.c", v23);
      return 0;
    }
    goto LABEL_4;
  }
  if ( a4 != 10 )
  {
LABEL_12:
    sub_D0048(32, 143, 131, "crypto/bio/b_addr.c", 663);
    return 0;
  }
LABEL_4:
  v11 = sub_B55B4();
  if ( v11 != 1 )
    return 0;
  memset(&s, 0, sizeof(s));
  v18 = (int)a1;
  if ( a1 )
    v18 = 1;
  if ( a4 )
    v18 = 0;
  s.ai_family = a4;
  s.ai_socktype = a5;
  s.ai_protocol = a6;
  if ( v18 )
  {
    v11 = 33;
    s.ai_flags = 32;
  }
  v19 = a3 == 1;
  v20 = 0;
  if ( v19 )
    s.ai_flags = v11;
  while ( 1 )
  {
    v21 = getaddrinfo(a1, a2, &s, pai);
    v22 = v21;
    switch ( v21 )
    {
      case -10:
        v23 = 715;
        goto LABEL_28;
      case 0:
        return 1;
      case -11:
        v27 = _errno_location();
        sub_D0048(2, 12, *v27, "crypto/bio/b_addr.c", 709);
        sub_D0048(32, 143, 2, "crypto/bio/b_addr.c", 710);
        return 0;
    }
    if ( (s.ai_flags & 0x20) == 0 )
      break;
    s.ai_flags = s.ai_flags & 0xFFFFFFDB | 4;
    v20 = v21;
  }
  sub_D0048(32, 143, 2, "crypto/bio/b_addr.c", 730);
  if ( v20 )
    v24 = v20;
  else
    v24 = v22;
  v25 = gai_strerror(v24);
  sub_D1240(1, v25, v26);
  return 0;
}
