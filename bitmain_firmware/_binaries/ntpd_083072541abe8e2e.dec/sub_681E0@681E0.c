int __fastcall sub_681E0(int a1, int a2)
{
  const char *v3; // r7
  const char *v5; // r6
  _DWORD *v6; // r8
  _DWORD *v7; // r5
  int v8; // r9
  int v9; // r0
  int v10; // r6
  struct addrinfo *v11; // r7
  int v12; // r10
  const char *ai_canonname; // r0
  int v14; // r9
  int v15; // r1
  size_t v16; // r9
  _DWORD *v17; // r0
  int v18; // r8
  _DWORD *v19; // r7
  struct addrinfo *v20; // r5
  _DWORD *v21; // r6
  int ai_family; // r1
  int ai_socktype; // r2
  int ai_protocol; // r3
  struct addrinfo *ai_next; // r3
  struct sockaddr *ai_addr; // r1
  char *v27; // r2
  size_t ai_addrlen; // r2
  char *v29; // r8
  size_t v30; // r2
  void *v31; // r0
  int result; // r0
  time_t v33; // r0
  const char *v34; // r0
  struct addrinfo *ai; // [sp+10h] [bp-Ch] BYREF

  v3 = (const char *)(a2 + 96);
  v5 = (const char *)(a2 + 96 + *(_DWORD *)(a2 + 88));
  v6 = sub_67478(a1, *(_DWORD *)(a2 + 28));
  sub_67B04(*(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), v6);
  sub_67CA8(v6 + 2);
  v7 = sub_63BA4(0, 0x4ECu, 0, 1);
  if ( debug > 1 )
    sub_64D28(
      "blocking_getaddrinfo given node %s serv %s fam %d flags %x\n",
      v3,
      v5,
      *(_DWORD *)(a2 + 48),
      *(_DWORD *)(a2 + 44));
  v8 = 0;
  ai = 0;
  v9 = getaddrinfo(v3, v5, (const struct addrinfo *)(a2 + 44), &ai);
  v10 = *(_DWORD *)(a2 + 40);
  v7[7] = v9;
  v7[8] = v10;
  if ( v9 == -11 )
  {
    v7[9] = *_errno_location();
  }
  else if ( !v9 )
  {
    v11 = ai;
    if ( ai )
    {
      v8 = 0;
      v12 = v7[10] + 1;
      do
      {
        ai_canonname = v11->ai_canonname;
        v7[10] = v12;
        if ( ai_canonname )
          v8 += strlen(ai_canonname) + 1;
        v11 = v11->ai_next;
        ++v12;
      }
      while ( v11 );
    }
    else
    {
      v8 = 0;
    }
    if ( v10 > 2 )
    {
      v33 = time(0);
      v6[1] = v33;
      if ( debug > 0 )
      {
        v34 = (const char *)sub_78840(v33);
        sub_64D28("DNS success after retry, ignoring sleeps scheduled before now (%s)\n", v34);
      }
    }
  }
  v14 = v8 + 60 * v7[10];
  v15 = v14 + 20;
  v16 = v14 + 44;
  v7[6] = v15;
  v17 = sub_63BA4(v7, v16, 0, 0);
  v18 = v17[7];
  v19 = v17;
  if ( !v18 )
  {
    v20 = ai;
    v21 = v17 + 11;
    if ( ai )
    {
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
          v18 += strlen(v20->ai_canonname) + 1;
        }
        v20 = v20->ai_next;
      }
      while ( v20 );
      v20 = ai;
      if ( ai )
      {
        do
        {
          ai_addrlen = v20->ai_addrlen;
          if ( ai_addrlen > 0x1C )
            sub_6ECC0("ntp_intres.c", 425, 2, "ai->ai_addrlen <= sizeof(sockaddr_u)");
          memcpy(v21, v20->ai_addr, ai_addrlen);
          v20 = v20->ai_next;
          v21 += 7;
        }
        while ( v20 );
        v20 = ai;
        if ( ai )
        {
          do
          {
            v29 = v20->ai_canonname;
            if ( v29 )
            {
              v30 = strlen(v20->ai_canonname) + 1;
              v31 = v21;
              v21 = (_DWORD *)((char *)v21 + v30);
              memcpy(v31, v29, v30);
            }
            v20 = v20->ai_next;
          }
          while ( v20 );
          v20 = ai;
        }
      }
    }
    freeaddrinfo(v20);
  }
  result = sub_69350(a1, v19, v16, a2);
  if ( result )
  {
    sub_64E00((_BYTE *)&dword_0 + 3, "blocking_getaddrinfo can not queue response");
    return -1;
  }
  return result;
}
