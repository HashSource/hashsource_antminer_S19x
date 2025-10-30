int sub_5C358()
{
  int v0; // r8
  int v1; // r4
  int v2; // r11
  int v3; // r3
  int v4; // r10
  int v5; // r6
  int v6; // r5
  char *v7; // r2
  int v8; // r3
  char v9; // t1
  unsigned int *v10; // r3
  unsigned int v12; // r4
  unsigned int v13; // r6
  int v14; // r9
  int i; // r7
  int v17; // [sp+Ch] [bp-A0h]
  int *v18; // [sp+18h] [bp-94h]
  int v19; // [sp+1Ch] [bp-90h]
  char v20[48]; // [sp+24h] [bp-88h] BYREF
  unsigned int v21[21]; // [sp+54h] [bp-58h] BYREF
  char v22; // [sp+A8h] [bp-4h] BYREF

  v0 = *(_DWORD *)(dword_223680 + 312);
  v1 = *(_DWORD *)(dword_223680 + 64);
  v17 = *(_DWORD *)(dword_223680 + 72);
  sub_1E938((char *)v21, 0x30u);
  printf("%s ", (const char *)v21);
  printf("%s :  \n", "software_pattern_mid_auto_gen_send_function");
  word_648238 = 32;
  sub_3CC5C((int)&word_648238, (const char *)v21);
  if ( v1 )
  {
    v18 = &dword_7169AC;
    v19 = 0;
    do
    {
      v2 = 0;
      v3 = v18[1];
      ++v18;
      v4 = v3 + 15;
      if ( v17 )
      {
        do
        {
          v5 = 0;
          v6 = v4;
          if ( v0 )
          {
            do
            {
              while ( !sub_7138C(dword_21B3A4) )
                usleep(0x64u);
              memset(v21, 0, sizeof(v21));
              v21[1] = v5 << 7;
              v7 = (char *)&v21[1] + 3;
              LOBYTE(v21[0]) = 1;
              BYTE1(v21[0]) = dword_21B3A4 | 0x80;
              *(_DWORD *)(v6 - 15) = v5 << 7;
              v8 = v6;
              v21[1] = bswap32(v21[1]);
              do
              {
                v9 = *(_BYTE *)++v8;
                *++v7 = v9;
              }
              while ( v6 + 12 != v8 );
              v10 = v21;
              BYTE2(v21[20]) = 0;
              do
              {
                *v10 = bswap32(*v10);
                ++v10;
              }
              while ( v10 != (unsigned int *)&v22 );
              v21[20] = 32;
              sub_71A5C(v21, 84);
              ++v5;
              v6 += 60;
              ++dword_5FE788;
            }
            while ( v0 != v5 );
          }
          ++v2;
          v4 += 60 * v0;
        }
        while ( v17 != v2 );
      }
    }
    while ( v1 != ++v19 );
    v12 = v0 * v17 * v1;
    while ( dword_5FE788 < v12 )
    {
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf(
        "%s : Send work num : %d, less than %d\n",
        "software_pattern_mid_auto_gen_send_function",
        dword_5FE788,
        v12);
      snprintf(byte_648438, 0x100u, "Send work num : %d, less than %d", dword_5FE788, v12);
      sub_3CC5C((int)byte_648438, v20);
    }
  }
  sub_1E938(v20, 0x30u);
  printf("%s ", v20);
  printf("%s : Send test %d pattern done\n", "software_pattern_mid_auto_gen_send_function", dword_5FE788);
  snprintf(byte_648338, 0x100u, "Send test %d pattern done", dword_5FE788);
  sub_3CC5C((int)byte_648338, v20);
  v13 = 0;
  v14 = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 40];
  for ( i = v14; ; i = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 40] )
  {
    ++v13;
    if ( v14 == i )
      break;
    usleep((__useconds_t)&loc_30D40);
    v14 = i;
    v13 = 0;
LABEL_21:
    ;
  }
  if ( v13 <= 2 )
  {
    usleep((__useconds_t)&loc_30D40);
    goto LABEL_21;
  }
  byte_5FE774 = 0;
  sub_1E938(v20, 0x30u);
  printf("%s ", v20);
  printf("%s : Stop receive thread\n", "software_pattern_mid_auto_gen_send_function");
  strcpy(byte_648538, "Stop receive thread");
  sub_3CC5C((int)byte_648538, v20);
  return 0;
}
