__int16 *sub_18484()
{
  __int16 *result; // r0
  __int16 *v1; // r3
  int v2; // r7
  _DWORD *v3; // r0
  int v4; // r11
  _DWORD *v5; // r7
  int v6; // r1
  uint32_t v7; // r2
  uint32_t v8; // r3
  uint32_t v9; // r1
  int v10; // r2
  int v11; // r0
  uint32_t v12; // r1
  uint32_t v13; // r2
  uint32_t v14; // r3
  int v15; // r9
  _DWORD *v16; // r7
  int v17; // r1
  uint32_t v18; // r2
  uint32_t v19; // r3
  uint32_t v20; // r1
  int v21; // r2
  int v22; // r0
  const char *v23; // r0
  const char *v24; // r0
  struct sockaddr addr; // [sp+4h] [bp-30h] BYREF
  int v26; // [sp+14h] [bp-20h]
  uint32_t v27; // [sp+18h] [bp-1Ch]
  uint32_t v28; // [sp+1Ch] [bp-18h]
  uint32_t v29; // [sp+20h] [bp-14h]
  uint32_t v30; // [sp+24h] [bp-10h]
  int v31; // [sp+28h] [bp-Ch]

  result = word_B9240;
  if ( !dword_B93D4 && (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B611C) & 0xF) == 0 )
  {
    v1 = word_B9240;
    dword_B92C4 = 0;
    dword_B93D4 = 1;
    do
    {
      *((_DWORD *)v1 + 1) = 0;
      v1 += 2;
    }
    while ( v1 != (__int16 *)&unk_B92C0 );
    *(_DWORD *)&addr.sa_data[10] = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    if ( ipv6_works )
    {
      v26 = 0;
      v31 = 0;
      *(_DWORD *)&addr.sa_data[10] = 2063597578;
      v12 = in6addr_any.in6_u.u6_addr32[1];
      v13 = in6addr_any.in6_u.u6_addr32[2];
      v14 = in6addr_any.in6_u.u6_addr32[3];
      v27 = in6addr_any.in6_u.u6_addr32[0];
      v28 = v12;
      v29 = v13;
      v30 = v14;
      v15 = sub_149CC(0, (unsigned __int16 *)&addr.sa_data[10], 0);
      if ( v15 != 1 )
      {
        v16 = sub_13F3C(0);
        sub_6D4DC(v16 + 27);
        v17 = v26;
        v18 = v27;
        v19 = v28;
        v16[6] = *(_DWORD *)&addr.sa_data[10];
        v16[9] = v19;
        v16[7] = v17;
        v16[8] = v18;
        v20 = v30;
        v21 = v31;
        v16[10] = v29;
        v16[11] = v20;
        v16[12] = v21;
        *((_WORD *)v16 + 70) = 10;
        *((_WORD *)v16 + 26) = 10;
        v16[15] = -1;
        v16[16] = -1;
        v16[17] = -1;
        v16[18] = -1;
        v16[45] = v15 == 2;
        v16[36] = 129;
        v22 = sub_154A8((struct sockaddr *)(v16 + 6), 0, 1, (int)v16);
        v16[3] = v22;
        if ( v22 == -1 )
        {
          v23 = (const char *)sub_6C2E8(v16 + 6);
          sub_64E00(3, "unable to bind to wildcard address %s - another process may be running - EXITING", v23);
          exit(1);
        }
        dword_B92CC = (int)v16;
        any6_interface = (int)v16;
        sub_13EA4(v16 + 6, (int)v16);
        sub_14298((int)v16);
        sub_1482C((int)v16);
      }
    }
    if ( ipv4_works )
    {
      *(_DWORD *)&addr.sa_data[10] = 2063597570;
      v26 = 0;
      v4 = sub_149CC(0, (unsigned __int16 *)&addr.sa_data[10], 0);
      if ( v4 != 1 )
      {
        v5 = sub_13F3C(0);
        sub_6D4DC(v5 + 27);
        v6 = v26;
        v7 = v27;
        v8 = v28;
        v5[6] = *(_DWORD *)&addr.sa_data[10];
        v5[9] = v8;
        v5[7] = v6;
        v5[8] = v7;
        v9 = v30;
        v10 = v31;
        v5[10] = v29;
        v5[11] = v9;
        v5[12] = v10;
        v5[45] = v4 == 2;
        v5[20] = 2063597570;
        v5[21] = 0;
        v5[14] = -1;
        v5[36] = 137;
        *((_WORD *)v5 + 70) = 2;
        *((_WORD *)v5 + 26) = 2;
        v11 = sub_154A8((struct sockaddr *)(v5 + 6), 0, 1, (int)v5);
        v5[3] = v11;
        if ( v11 == -1 )
        {
          v24 = (const char *)sub_6C2E8(v5 + 6);
          sub_64E00(3, "unable to bind to wildcard address %s - another process may be running - EXITING", v24);
          exit(1);
        }
        dword_B92C8 = (int)v5;
        any_interface = (int)v5;
        sub_13EA4(v5 + 6, (int)v5);
        sub_14298((int)v5);
        sub_1482C((int)v5);
      }
    }
    sub_17984(0, 0);
    sub_141A4(0);
    if ( socket(16, 3, 0) < 0 )
    {
      return (__int16 *)sub_64E00(3, "unable to open routing socket (%m) - using polled interface update");
    }
    else
    {
      v2 = sub_6C0B8();
      *(_WORD *)&addr.sa_data[4] = 0;
      *(_DWORD *)addr.sa_data = 0;
      addr.sa_family = 16;
      *(_DWORD *)&addr.sa_data[6] = 1905;
      if ( bind(v2, &addr, 0xCu) < 0 )
      {
        return (__int16 *)sub_64E00(3, "bind failed on routing socket (%m) - using polled interface update");
      }
      else
      {
        sub_6C26C(v2);
        v3 = (_DWORD *)sub_63BA4(0, 16, 0, 1);
        v3[1] = v2;
        v3[3] = sub_15B14;
        *v3 = asyncio_reader_list;
        asyncio_reader_list = (int)v3;
        sub_15420(v2, 0);
        return (__int16 *)sub_64E00(6, "Listening on routing socket on fd #%d for interface updates", v2);
      }
    }
  }
  return result;
}
