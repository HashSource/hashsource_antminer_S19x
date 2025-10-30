int sub_67C08()
{
  __int64 v0; // r10
  char *v1; // r5
  char *v2; // r0
  unsigned int *v3; // r3
  int v4; // r0
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r3
  int v8; // r2
  bool v9; // zf
  _DWORD v11[12]; // [sp+1Ch] [bp-148h] BYREF
  _DWORD s[69]; // [sp+4Ch] [bp-118h] BYREF
  char v13; // [sp+160h] [bp-4h] BYREF

  sub_1E938((char *)s, 0x30u);
  printf("%s ", (const char *)s);
  printf("%s :  \n", "software_pattern_cpugen_midstate_send_function");
  word_658140 = 32;
  sub_3CC5C((int)&word_658140, (const char *)s);
  v0 = 0;
  memset(s, 0, sizeof(s));
  do
  {
    while ( !sub_7138C(dword_21B3A4) )
      usleep(0x64u);
    LOBYTE(s[0]) = 1;
    strcpy((char *)v11, "0000000000000000");
    *(_WORD *)((char *)s + 1) = (unsigned __int8)dword_21B3A4 | 0x80;
    HIBYTE(s[0]) = 0;
    s[1] = 0;
    snprintf((char *)v11, 0x11u, "%016llx", dword_21B3A4, v0);
    unk_21C138 = v11[0];
    unk_21C13C = v11[1];
    unk_21C140 = v11[2];
    unk_21C144 = v11[3];
    v1 = (char *)&s[5];
    do
    {
      v2 = v1;
      v1 += 32;
      sub_5DAEC(v2, byte_21C108, 64);
    }
    while ( &v13 != v1 );
    sub_5DAEC(&s[2], (unsigned __int8 *)off_21C148, 24);
    memcpy(&unk_7055AC, s, 0x114u);
    v3 = s;
    do
    {
      *v3 = bswap32(*v3);
      ++v3;
    }
    while ( &v13 != (char *)v3 );
    sub_71A5C(s, 276);
    v4 = *(_DWORD *)(dword_223680 + 68);
    if ( !v4 )
      goto LABEL_12;
    v5 = dword_716DCC;
    if ( dword_716DCC )
    {
      v6 = dword_716DC8;
      v5 = 0;
      while ( ++v5 != v4 )
      {
        v6 += 17;
        if ( !v6[1] )
          goto LABEL_14;
      }
LABEL_12:
      printf("flush nonce as bin file");
      sub_67B7C();
      exit(0);
    }
LABEL_14:
    v7 = 17 * v5;
    v8 = dword_716DC8[v7] + 1;
    if ( v8 <= 100 )
      dword_716DC8[v7] = v8;
    else
      dword_716DC8[v7] = 0;
    ++v0;
    v9 = HIDWORD(v0) == -1;
    if ( HIDWORD(v0) == -1 )
      v9 = (_DWORD)v0 == -1;
  }
  while ( !v9 );
  byte_5FE774 = 0;
  sub_1E938((char *)v11, 0x30u);
  printf("%s ", (const char *)v11);
  printf("%s : Stop receive thread\n", "software_pattern_cpugen_midstate_send_function");
  strcpy(byte_658240, "Stop receive thread");
  sub_3CC5C((int)byte_658240, (const char *)v11);
  return 0;
}
