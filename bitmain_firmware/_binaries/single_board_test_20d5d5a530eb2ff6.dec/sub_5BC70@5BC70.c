int sub_5BC70()
{
  int v0; // r6
  unsigned int v1; // r5
  int v2; // r8
  int v3; // r10
  unsigned int v4; // r4
  char *v5; // r0
  char *v6; // r3
  char *v7; // r2
  _BYTE *v8; // lr
  char v9; // t1
  char *v10; // r0
  _BYTE *v11; // r2
  char v12; // t1
  unsigned int *v13; // r3
  bool v14; // zf
  int v15; // r5
  unsigned int v16; // r4
  unsigned int v17; // r4
  int v18; // r11
  int i; // r7
  int v21; // [sp+Ch] [bp-160h]
  int v22; // [sp+10h] [bp-15Ch]
  int *v23; // [sp+18h] [bp-154h]
  int v24; // [sp+1Ch] [bp-150h]
  char v25[48]; // [sp+24h] [bp-148h] BYREF
  _BYTE s[276]; // [sp+54h] [bp-118h] BYREF

  v0 = *(_DWORD *)(dword_223680 + 64);
  v1 = *(_DWORD *)(dword_223680 + 312);
  v22 = *(_DWORD *)(dword_223680 + 76) * *(_DWORD *)(dword_223680 + 68);
  sub_1E938(s, 0x30u);
  printf("%s ", s);
  printf("%s :  \n", "software_pattern_4_midstate_send_function");
  word_647938 = 32;
  sub_3CC5C((int)&word_647938, s);
  if ( v0 )
  {
    v23 = &dword_7169AC;
    v24 = 0;
    do
    {
      v2 = v23[1];
      ++v23;
      if ( v22 )
      {
        v3 = 0;
        v21 = 0;
        do
        {
          if ( v1 )
          {
            v4 = 0;
            do
            {
              if ( sub_7138C(dword_21B3A4) )
              {
                memset(s, 0, sizeof(s));
                v5 = (char *)(v2 + 60 * (v4 + v3));
                *(_DWORD *)&s[4] = 8 * v4;
                s[0] = 1;
                s[1] = dword_21B3A4 | 0x80;
                v6 = v5 + 27;
                *(_DWORD *)v5 = 8 * v4;
                v7 = v5 + 15;
                v8 = &s[7];
                *(_DWORD *)&s[4] = bswap32(*(unsigned int *)&s[4]);
                do
                {
                  v9 = *++v7;
                  *++v8 = v9;
                }
                while ( v6 != v7 );
                v10 = v5 + 59;
                v11 = &s[32 * (v21 & 3) + 19];
                do
                {
                  v12 = *++v6;
                  *++v11 = v12;
                }
                while ( v10 != v6 );
                v13 = (unsigned int *)s;
                do
                {
                  *v13 = bswap32(*v13);
                  ++v13;
                }
                while ( v13 != (unsigned int *)&s[148] );
                sub_71A5C(s, 148);
                ++v4;
                ++dword_5FE788;
                if ( byte_5FE78C )
                {
                  v15 = v1 * v0;
                  dword_5FE788 = v22 * v15;
                  sub_1E938(v25, 0x30u);
                  printf("%s ", v25);
                  printf(
                    "%s : Find dummy data. Stop Send pattern thread\n",
                    "software_pattern_4_midstate_send_function");
                  strcpy(byte_647A38, "Find dummy data. Stop Send pattern thread");
                  sub_3CC5C((int)byte_647A38, v25);
                  goto LABEL_23;
                }
              }
              else
              {
                usleep(0xAu);
              }
            }
            while ( v1 > v4 );
          }
          v3 += v1;
          v14 = v22 == ++v21;
        }
        while ( !v14 );
      }
      v14 = v0 == ++v24;
    }
    while ( !v14 );
    v15 = v1 * v0;
LABEL_23:
    v16 = v22 * v15;
    while ( dword_5FE788 < v16 )
    {
      sub_1E938(v25, 0x30u);
      printf("%s ", v25);
      printf("%s : Send work num : %d, less than %d\n", "software_pattern_4_midstate_send_function", dword_5FE788, v16);
      snprintf(byte_647C38, 0x100u, "Send work num : %d, less than %d", dword_5FE788, v16);
      sub_3CC5C((int)byte_647C38, v25);
    }
  }
  sub_1E938(v25, 0x30u);
  printf("%s ", v25);
  printf("%s : Send test %d pattern done\n", "software_pattern_4_midstate_send_function", dword_5FE788);
  snprintf(byte_647B38, 0x100u, "Send test %d pattern done", dword_5FE788);
  sub_3CC5C((int)byte_647B38, v25);
  v17 = 0;
  v18 = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 40];
  for ( i = v18; ; i = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 40] )
  {
    ++v17;
    if ( v18 == i )
      break;
    usleep((__useconds_t)&loc_30D40);
    v18 = i;
    v17 = 0;
LABEL_28:
    ;
  }
  if ( v17 <= 2 )
  {
    usleep((__useconds_t)&loc_30D40);
    goto LABEL_28;
  }
  byte_5FE774 = 0;
  sub_1E938(v25, 0x30u);
  printf("%s ", v25);
  printf("%s : Stop receive thread\n", "software_pattern_4_midstate_send_function");
  strcpy(byte_647D38, "Stop receive thread");
  sub_3CC5C((int)byte_647D38, v25);
  return 0;
}
