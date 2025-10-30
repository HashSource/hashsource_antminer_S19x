void sub_18720()
{
  __int16 *v0; // r3
  int v1; // r7
  _DWORD *v2; // r0
  int v3; // r11
  _DWORD *v4; // r6
  int v5; // r1
  uint32_t v6; // r2
  uint32_t v7; // r3
  uint32_t v8; // r1
  int v9; // r2
  int v10; // r0
  uint32_t v11; // r1
  uint32_t v12; // r2
  uint32_t v13; // r3
  int v14; // r10
  _DWORD *v15; // r8
  int v16; // r1
  uint32_t v17; // r2
  uint32_t v18; // r3
  uint32_t v19; // r1
  int v20; // r2
  int v21; // r0
  const char *v22; // r0
  const char *v23; // r0
  struct sockaddr addr; // [sp+4h] [bp-30h] BYREF
  int v25; // [sp+14h] [bp-20h]
  uint32_t v26; // [sp+18h] [bp-1Ch]
  uint32_t v27; // [sp+1Ch] [bp-18h]
  uint32_t v28; // [sp+20h] [bp-14h]
  uint32_t v29; // [sp+24h] [bp-10h]
  int v30; // [sp+28h] [bp-Ch]

  if ( !dword_BA3D4 && (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B711C) & 0xF) == 0 )
  {
    v0 = word_BA240;
    dword_BA2C4 = 0;
    dword_BA3D4 = 1;
    do
    {
      *((_DWORD *)v0 + 1) = 0;
      v0 += 2;
    }
    while ( v0 != (__int16 *)&unk_BA2C0 );
    *(_DWORD *)&addr.sa_data[10] = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    if ( ipv6_works )
    {
      strcpy(&addr.sa_data[10], "\n");
      *(_WORD *)&addr.sa_data[12] = 31488;
      v11 = in6addr_any.in6_u.u6_addr32[1];
      v12 = in6addr_any.in6_u.u6_addr32[2];
      v13 = in6addr_any.in6_u.u6_addr32[3];
      v26 = in6addr_any.in6_u.u6_addr32[0];
      v27 = v11;
      v28 = v12;
      v29 = v13;
      v14 = sub_14BF8(0, (unsigned __int16 *)&addr.sa_data[10], 0);
      if ( v14 != 1 )
      {
        v15 = sub_1416C(0);
        sub_6E4B4(v15 + 27);
        v16 = v25;
        v17 = v26;
        v18 = v27;
        v15[6] = *(_DWORD *)&addr.sa_data[10];
        v15[9] = v18;
        v15[7] = v16;
        v15[8] = v17;
        v19 = v29;
        v20 = v30;
        v15[10] = v28;
        v15[11] = v19;
        v15[12] = v20;
        *((_WORD *)v15 + 70) = 10;
        *((_WORD *)v15 + 26) = 10;
        memset(v15 + 15, 255, 0x10u);
        v15[36] = 129;
        v15[45] = v14 == 2;
        v21 = sub_15740((struct sockaddr *)(v15 + 6), 0, 1, (int)v15);
        v15[3] = v21;
        if ( v21 == -1 )
        {
          v22 = (const char *)sub_6D2C0(v15 + 6);
          sub_65D40(3, "unable to bind to wildcard address %s - another process may be running - EXITING", v22);
          exit(1);
        }
        dword_BA2CC = (int)v15;
        any6_interface = (int)v15;
        sub_140D4(v15 + 6, (int)v15);
        sub_144C8((int)v15);
        sub_14A54((int)v15);
      }
    }
    if ( ipv4_works )
    {
      v25 = 0;
      *(_WORD *)&addr.sa_data[12] = 31488;
      *(_WORD *)&addr.sa_data[10] = 2;
      v3 = sub_14BF8(0, (unsigned __int16 *)&addr.sa_data[10], 0);
      if ( v3 != 1 )
      {
        v4 = sub_1416C(0);
        sub_6E4B4(v4 + 27);
        v5 = v25;
        v6 = v26;
        v7 = v27;
        v4[6] = *(_DWORD *)&addr.sa_data[10];
        v4[9] = v7;
        v4[7] = v5;
        v4[8] = v6;
        v8 = v29;
        v9 = v30;
        v4[10] = v28;
        v4[11] = v8;
        v4[12] = v9;
        *((_WORD *)v4 + 70) = 2;
        *((_WORD *)v4 + 26) = 2;
        v4[45] = v3 == 2;
        *((_WORD *)v4 + 40) = 2;
        v4[21] = 0;
        *((_WORD *)v4 + 41) = 31488;
        v4[14] = -1;
        v4[36] = 137;
        v10 = sub_15740((struct sockaddr *)(v4 + 6), 0, 1, (int)v4);
        v4[3] = v10;
        if ( v10 == -1 )
        {
          v23 = (const char *)sub_6D2C0(v4 + 6);
          sub_65D40(3, "unable to bind to wildcard address %s - another process may be running - EXITING", v23);
          exit(1);
        }
        dword_BA2C8 = (int)v4;
        any_interface = (int)v4;
        sub_140D4(v4 + 6, (int)v4);
        sub_144C8((int)v4);
        sub_14A54((int)v4);
      }
    }
    sub_17C04(0, 0);
    sub_143D4(0);
    if ( socket(16, 3, 0) < 0 )
    {
      sub_65D40(3, "unable to open routing socket (%m) - using polled interface update");
    }
    else
    {
      *(_WORD *)addr.sa_data = 0;
      *(_DWORD *)&addr.sa_data[2] = 0;
      addr.sa_family = 16;
      *(_DWORD *)&addr.sa_data[6] = 1905;
      v1 = sub_6D070();
      if ( bind(v1, &addr, 0xCu) < 0 )
      {
        sub_65D40(3, "bind failed on routing socket (%m) - using polled interface update");
      }
      else
      {
        sub_6D244(v1);
        v2 = (_DWORD *)sub_64B04(0, 16, 0, 1);
        v2[3] = sub_15DA4;
        v2[1] = v1;
        *v2 = asyncio_reader_list;
        asyncio_reader_list = (int)v2;
        sub_156B8(v1, 0);
        sub_65D40(6, "Listening on routing socket on fd #%d for interface updates", v1);
      }
    }
  }
}
