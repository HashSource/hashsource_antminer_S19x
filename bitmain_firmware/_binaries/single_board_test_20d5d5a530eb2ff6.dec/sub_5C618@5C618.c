int sub_5C618()
{
  char v0; // r9
  int v1; // r6
  unsigned int v2; // r7
  char *v3; // r2
  unsigned int v4; // r12
  unsigned int v5; // r3
  char v6; // t1
  int v7; // r11
  unsigned int v8; // r0
  int v9; // r8
  unsigned int v10; // r4
  char *v11; // lr
  unsigned int v13; // r3
  char *v14; // r2
  char v15; // t1
  unsigned int *v16; // r3
  unsigned int v18; // r3
  char *v19; // r2
  char v20; // t1
  int v21; // [sp+Ch] [bp-158h]
  unsigned int v22; // [sp+10h] [bp-154h]
  int v23; // [sp+14h] [bp-150h]
  char v24[48]; // [sp+1Ch] [bp-148h] BYREF
  char s[276]; // [sp+4Ch] [bp-118h] BYREF
  char v26; // [sp+160h] [bp-4h] BYREF

  v1 = *(_DWORD *)(dword_223680 + 76);
  v23 = 8;
  v22 = *(_DWORD *)(dword_223680 + 72);
  sub_1E938(s, 0x30u);
  printf("%s ", s);
  printf("%s :  \n", "super_software_pattern_8_midstate_send_function");
  word_648638 = 32;
  sub_3CC5C((int)&word_648638, s);
  v21 = dword_7169B0[0];
  do
  {
    v2 = 0;
    while ( v22 > v2 )
    {
      while ( !sub_7138C(dword_21B3A4) )
        usleep(0x64u);
      memset(s, 0, sizeof(s));
      s[0] = 1;
      v3 = &s[7];
      v4 = v21 + 60 * v2;
      s[1] = dword_21B3A4 | 0x80;
      v5 = v4 + 15;
      do
      {
        v6 = *(_BYTE *)++v5;
        *++v3 = v6;
      }
      while ( v4 + 27 != v5 );
      if ( v1 )
      {
        v7 = 0;
        if ( v2 < 0x378 )
          v0 = 0;
        v8 = 0;
        if ( v2 >= 0x378 )
          v0 = 1;
        v9 = dword_5FE788;
        v10 = v21 + 60 * v2;
        v11 = &s[19];
        do
        {
          while ( v8 > 5 && v0 & 1 )
          {
            v13 = v4 + 27;
            v14 = v11;
            do
            {
              v15 = *(_BYTE *)++v13;
              *++v14 = v15;
            }
            while ( v4 + 59 != v13 );
            ++v8;
            v10 += 60;
            v11 += 32;
            if ( v1 == v8 )
              goto LABEL_21;
          }
          v4 = v10;
          v18 = v10 + 27;
          v19 = v11;
          do
          {
            v20 = *(_BYTE *)++v18;
            *++v19 = v20;
          }
          while ( v10 + 59 != v18 );
          ++v8;
          ++v9;
          v7 = 1;
          v10 += 60;
          v11 += 32;
        }
        while ( v1 != v8 );
LABEL_21:
        if ( v7 )
          dword_5FE788 = v9;
      }
      v16 = (unsigned int *)s;
      do
      {
        *v16 = bswap32(*v16);
        ++v16;
      }
      while ( &v26 != (char *)v16 );
      sub_71A5C(s, 276);
      if ( v2 == 888 )
        v2 = 894;
      else
        v2 += v1;
    }
    --v23;
  }
  while ( v23 );
  while ( v22 > dword_5FE788 )
  {
    sub_1E938(v24, 0x30u);
    printf("%s ", v24);
    printf(
      "%s : Send work num : %d, less than %d\n",
      "super_software_pattern_8_midstate_send_function",
      dword_5FE788,
      v22);
    snprintf(byte_648838, 0x100u, "Send work num : %d, less than %d", dword_5FE788, v22);
    sub_3CC5C((int)byte_648838, v24);
  }
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : Send test %d pattern done\n", "super_software_pattern_8_midstate_send_function", dword_5FE788);
  snprintf(byte_648738, 0x100u, "Send test %d pattern done", dword_5FE788);
  sub_3CC5C((int)byte_648738, v24);
  usleep(0x61A80u);
  return 0;
}
