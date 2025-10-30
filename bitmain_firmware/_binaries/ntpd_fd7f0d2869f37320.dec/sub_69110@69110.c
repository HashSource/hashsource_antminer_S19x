int __fastcall sub_69110(int a1, int a2)
{
  const char *v3; // r9
  const char *v5; // r4
  _DWORD *v6; // r7
  _DWORD *v7; // r5
  const char *v8; // r1
  int v9; // r4
  int v10; // r0
  int v11; // r9
  struct addrinfo *v12; // r8
  int v13; // r11
  const char *ai_canonname; // r0
  int v15; // r4
  int v16; // r9
  _DWORD *v17; // r0
  int v18; // r11
  _DWORD *v19; // r7
  struct addrinfo *v20; // r5
  _DWORD *v21; // r4
  int ai_family; // r1
  int ai_socktype; // r2
  int ai_protocol; // r3
  struct addrinfo *ai_next; // r3
  struct sockaddr *ai_addr; // r1
  char *v27; // r2
  struct addrinfo *v28; // r11
  size_t ai_addrlen; // r2
  struct addrinfo *v30; // r5
  struct addrinfo *v31; // r0
  char *v32; // r11
  size_t v33; // r2
  void *v34; // r0
  int result; // r0
  time_t v36; // r0
  bool v37; // cc
  const char *v38; // r0
  struct addrinfo *ai; // [sp+10h] [bp-Ch] BYREF

  v3 = (const char *)(a2 + 96);
  v5 = (const char *)(a2 + 96 + *(_DWORD *)(a2 + 88));
  v6 = sub_68440(a1, *(_DWORD *)(a2 + 28));
  sub_68A30(*(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), v6);
  sub_68BD4(v6 + 2);
  v7 = sub_64B04(0, 0x4ECu, 0, 1);
  if ( debug > 1 )
    sub_65C68(
      "blocking_getaddrinfo given node %s serv %s fam %d flags %x\n",
      v3,
      v5,
      *(_DWORD *)(a2 + 48),
      *(_DWORD *)(a2 + 44));
  v8 = v5;
  v9 = 0;
  ai = 0;
  v10 = getaddrinfo(v3, v8, (const struct addrinfo *)(a2 + 44), &ai);
  v11 = *(_DWORD *)(a2 + 40);
  v7[8] = v11;
  v7[7] = v10;
  if ( v10 == -11 )
  {
    v7[9] = *_errno_location();
  }
  else if ( !v10 )
  {
    v12 = ai;
    if ( ai )
    {
      v9 = 0;
      v13 = v7[10] + 1;
      do
      {
        ai_canonname = v12->ai_canonname;
        v7[10] = v13;
        if ( ai_canonname )
          v9 += 1 + strlen(ai_canonname);
        v12 = v12->ai_next;
        ++v13;
      }
      while ( v12 );
    }
    else
    {
      v9 = 0;
    }
    if ( v11 > 2 )
    {
      v36 = time(0);
      v37 = debug <= 0;
      v6[1] = v36;
      if ( !v37 )
      {
        v38 = (const char *)sub_79B0C(v36);
        sub_65C68("DNS success after retry, ignoring sleeps scheduled before now (%s)\n", v38);
      }
    }
  }
  v15 = v9 + 60 * v7[10];
  v16 = v15 + 44;
  v7[6] = v15 + 20;
  v17 = sub_64B04(v7, v15 + 44, 0, 0);
  v18 = v17[7];
  v19 = v17;
  if ( !v18 )
  {
    v20 = ai;
    v21 = v17 + 11;
    if ( !ai )
      goto LABEL_31;
    do
    {
      v21 += 8;
      ai_family = v20->ai_family;
      ai_socktype = v20->ai_socktype;
      ai_protocol = v20->ai_protocol;
      *(v21 - 8) = v20->ai_flags;
      *(v21 - 7) = ai_family;
      *(v21 - 6) = ai_socktype;
      *(v21 - 5) = ai_protocol;
      ai_next = v20->ai_next;
      ai_addr = v20->ai_addr;
      v27 = v20->ai_canonname;
      *(v21 - 4) = v20->ai_addrlen;
      *(v21 - 3) = ai_addr;
      *(v21 - 2) = v27;
      *(v21 - 1) = ai_next;
      if ( v20->ai_canonname )
      {
        *(v21 - 2) = v18;
        v18 += 1 + strlen(v20->ai_canonname);
      }
      v20 = v20->ai_next;
    }
    while ( v20 );
    v28 = ai;
    if ( ai )
    {
      do
      {
        ai_addrlen = v28->ai_addrlen;
        if ( ai_addrlen > 0x1C )
          sub_6FC54("ntp_intres.c", 425, 2, "ai->ai_addrlen <= sizeof(sockaddr_u)");
        memcpy(v21, v28->ai_addr, ai_addrlen);
        v28 = v28->ai_next;
        v21 += 7;
      }
      while ( v28 );
      v30 = ai;
      if ( ai )
      {
        do
        {
          v32 = v30->ai_canonname;
          if ( v32 )
          {
            v33 = strlen(v30->ai_canonname) + 1;
            v34 = v21;
            v21 = (_DWORD *)((char *)v21 + v33);
            memcpy(v34, v32, v33);
          }
          v30 = v30->ai_next;
        }
        while ( v30 );
        v31 = ai;
      }
      else
      {
        v31 = 0;
      }
    }
    else
    {
LABEL_31:
      v31 = v20;
    }
    freeaddrinfo(v31);
  }
  result = sub_6A2C4(a1, v19, v16, a2);
  if ( result )
  {
    sub_65D40((_BYTE *)&dword_0 + 3, "blocking_getaddrinfo can not queue response");
    return -1;
  }
  return result;
}
