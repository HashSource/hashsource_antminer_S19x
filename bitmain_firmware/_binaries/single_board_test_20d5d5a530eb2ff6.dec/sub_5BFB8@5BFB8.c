int sub_5BFB8()
{
  int v0; // r11
  int v1; // r4
  int v2; // r7
  int v3; // r11
  unsigned int v4; // r4
  int *v5; // r6
  char *v6; // r2
  int v7; // r1
  unsigned int v8; // r8
  unsigned int v9; // r3
  char v10; // t1
  char *v11; // r12
  unsigned int v12; // lr
  int v13; // r9
  unsigned int v14; // r5
  int v15; // r6
  unsigned int v17; // r2
  char *v18; // r1
  char v19; // t1
  int v20; // r3
  unsigned int *v21; // r3
  unsigned int v22; // r3
  char *v23; // r2
  char v24; // t1
  unsigned int v25; // r3
  unsigned int v27; // r5
  unsigned int v28; // r6
  int v29; // r9
  int i; // r8
  unsigned int v32; // [sp+Ch] [bp-178h]
  int v33; // [sp+10h] [bp-174h]
  unsigned int v34; // [sp+14h] [bp-170h]
  int v35; // [sp+18h] [bp-16Ch]
  int *v36; // [sp+20h] [bp-164h]
  unsigned int v37; // [sp+24h] [bp-160h]
  int v38; // [sp+28h] [bp-15Ch]
  int v39; // [sp+2Ch] [bp-158h]
  int v40; // [sp+30h] [bp-154h]
  char v41[48]; // [sp+3Ch] [bp-148h] BYREF
  _DWORD s[69]; // [sp+6Ch] [bp-118h] BYREF
  char v43; // [sp+180h] [bp-4h] BYREF

  v0 = *(_DWORD *)(dword_223680 + 76);
  v1 = *(_DWORD *)(dword_223680 + 64);
  v39 = v1;
  v37 = *(_DWORD *)(dword_223680 + 72);
  v35 = *(_DWORD *)(dword_223680 + 312);
  sub_1E938((char *)s, 0x30u);
  printf("%s ", (const char *)s);
  printf("%s :  \n", "software_pattern_8_midstate_send_function");
  word_647E38 = 32;
  sub_3CC5C((int)&word_647E38, (const char *)s);
  if ( v1 )
  {
    v38 = 0;
    v2 = v0;
    v3 = 60 * v35;
    do
    {
      v40 = dword_7169B0[v38];
      if ( v37 )
      {
        v34 = 0;
        do
        {
          if ( v35 )
          {
            v4 = 0;
            v5 = &dword_21B3A4;
            v33 = 0;
            v32 = v40 + 60 * v34 * v35;
            while ( 1 )
            {
              while ( !sub_7138C(*v5) )
                usleep(0x64u);
              memset(s, 0, sizeof(s));
              v6 = (char *)&s[1] + 3;
              v7 = *v5;
              LOBYTE(s[0]) = 1;
              v8 = v32;
              v9 = v32 + 15;
              s[1] = v4;
              BYTE1(s[0]) = v7 | 0x80;
              do
              {
                v10 = *(_BYTE *)++v9;
                *++v6 = v10;
              }
              while ( v32 + 27 != v9 );
              if ( v2 )
              {
                v11 = (char *)&s[4] + 3;
                v12 = v32;
                v13 = dword_5FE788;
                v36 = v5;
                v14 = 0;
                v15 = 0;
                do
                {
                  while ( v14 > 5 && v34 >= 0x378 )
                  {
                    v17 = v8 + 27;
                    v18 = v11;
                    do
                    {
                      v19 = *(_BYTE *)++v17;
                      *++v18 = v19 + v14;
                    }
                    while ( v8 + 59 != v17 );
                    ++v14;
                    v12 += v3;
                    v11 += 32;
                    if ( v2 == v14 )
                      goto LABEL_20;
                  }
                  v8 = v12;
                  v22 = v12 + 27;
                  v23 = v11;
                  do
                  {
                    v24 = *(_BYTE *)++v22;
                    *++v23 = v24;
                  }
                  while ( v12 + 59 != v22 );
                  ++v14;
                  ++v13;
                  v15 = 1;
                  v12 += v3;
                  v11 += 32;
                }
                while ( v2 != v14 );
LABEL_20:
                v20 = v15;
                v5 = v36;
                if ( v20 )
                  dword_5FE788 = v13;
              }
              v21 = s;
              do
              {
                *v21 = bswap32(*v21);
                ++v21;
              }
              while ( v21 != (unsigned int *)&v43 );
              ++v33;
              v32 += 60;
              sub_71A5C(s, 276);
              if ( v35 == v33 )
                break;
              v4 = bswap32(v33 << 7);
            }
          }
          if ( v34 == 888 )
            v25 = 894;
          else
            v25 = v34 + v2;
          v34 = v25;
        }
        while ( v37 > v25 );
      }
    }
    while ( v39 != ++v38 );
    v27 = v35 * v37 * v39;
    while ( dword_5FE788 < v27 )
    {
      sub_1E938(v41, 0x30u);
      printf("%s ", v41);
      printf("%s : Send work num : %d, less than %d\n", "software_pattern_8_midstate_send_function", dword_5FE788, v27);
      snprintf(byte_648038, 0x100u, "Send work num : %d, less than %d", dword_5FE788, v27);
      sub_3CC5C((int)byte_648038, v41);
    }
  }
  sub_1E938(v41, 0x30u);
  printf("%s ", v41);
  printf("%s : Send test %d pattern done\n", "software_pattern_8_midstate_send_function", dword_5FE788);
  snprintf(byte_647F38, 0x100u, "Send test %d pattern done", dword_5FE788);
  sub_3CC5C((int)byte_647F38, v41);
  v28 = 0;
  v29 = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 40];
  for ( i = v29; ; i = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 40] )
  {
    ++v28;
    if ( v29 == i )
      break;
    usleep((__useconds_t)&loc_30D40);
    v29 = i;
    v28 = 0;
LABEL_42:
    ;
  }
  if ( v28 <= 2 )
  {
    usleep((__useconds_t)&loc_30D40);
    goto LABEL_42;
  }
  byte_5FE774 = 0;
  sub_1E938(v41, 0x30u);
  printf("%s ", v41);
  printf("%s : Stop receive thread\n", "software_pattern_8_midstate_send_function");
  strcpy(byte_648138, "Stop receive thread");
  sub_3CC5C((int)byte_648138, v41);
  return 0;
}
