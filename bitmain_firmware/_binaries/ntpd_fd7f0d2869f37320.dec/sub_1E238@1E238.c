int __fastcall sub_1E238(int result, int a2)
{
  int v2; // r8
  void *v4; // r3
  void *v5; // r2
  int *v6; // r10
  int v7; // r4
  const char **v8; // r10
  int v9; // t1
  const char *v10; // r7
  const char *v11; // t1
  int v12; // r0
  int *v13; // r11
  int v14; // r4
  const char **v15; // r11
  int v16; // t1
  const char *v17; // t1
  size_t v18; // r0
  int *v19; // r11
  int v20; // r4
  const char **v21; // r11
  int v22; // t1
  const char *v23; // t1
  size_t v24; // r0
  int v25; // r4
  const char *v26; // r4
  double v27; // [sp+8h] [bp-14h] BYREF

  v2 = result;
  if ( !ipv4_works )
  {
    if ( !ipv6_works )
    {
      sub_65D40(3, "Neither IPv4 nor IPv6 networking detected, fatal.");
      exit(1);
    }
    v4 = off_B711C;
    if ( (*(_DWORD *)((_BYTE *)&word_10 + (_DWORD)off_B711C) & 0xF) != 0 )
    {
      result = sub_65D40(4, "-4/--ipv4 ignored, IPv4 networking not found.");
      v4 = off_B711C;
    }
    goto LABEL_5;
  }
  v4 = off_B711C;
  if ( !ipv6_works )
  {
    if ( (*(int *)((_BYTE *)&dword_50 + (_DWORD)off_B711C) & 0xF) != 0 )
    {
      result = sub_65D40(4, "-6/--ipv6 ignored, IPv6 networking not found.");
      v4 = off_B711C;
    }
LABEL_5:
    v5 = (void *)(*(int *)((_BYTE *)&dword_90 + (_DWORD)v4) & 0xF);
    if ( !v5 )
      goto LABEL_6;
LABEL_54:
    result = sub_39000(3, 1, 0);
    v4 = off_B711C;
    if ( (*(int *)((_BYTE *)&dword_110 + (_DWORD)off_B711C) & 0xF) == 0 )
      goto LABEL_9;
    goto LABEL_55;
  }
  result = *(_DWORD *)((_BYTE *)&word_10 + (_DWORD)off_B711C) & 0xF;
  if ( result )
  {
    ipv6_works = 0;
    goto LABEL_5;
  }
  if ( (*(int *)((_BYTE *)&dword_50 + (_DWORD)off_B711C) & 0xF) != 0 )
    ipv4_works = 0;
  v5 = (void *)(*(int *)((_BYTE *)&dword_90 + (_DWORD)off_B711C) & 0xF);
  if ( v5 )
    goto LABEL_54;
LABEL_6:
  if ( (*(int *)((_BYTE *)&dword_D0 + (_DWORD)v4) & 0xF) != 0 )
  {
    result = sub_39000(3, (int)v5, v5);
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&dword_110 + (_DWORD)v4) & 0xF) != 0 )
  {
LABEL_55:
    result = sub_39000(1, 1, 0);
    v4 = off_B711C;
  }
LABEL_9:
  if ( (*(int *)((_BYTE *)&dword_150 + (_DWORD)v4) & 0xF) != 0 )
    config_file = *(_DWORD *)&aLibLdLinuxArmh[(_DWORD)v4 + 4];
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[21] + (_DWORD)v4) & 0xF) != 0 )
  {
    result = sub_43708(1, *(char **)((char *)&elf_hash_bucket[23] + (_DWORD)v4));
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[37] + (_DWORD)v4) & 0xF) != 0 )
    allow_panic = 1;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[53] + (_DWORD)v4) & 0xF) != 0 )
    force_step_once = 1;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[101] + (_DWORD)v4) & 0xF) != 0 )
  {
    result = sub_43500(*(int *)((char *)&elf_hash_bucket[103] + (_DWORD)v4));
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[197] + (_DWORD)v4) & 0xF) != 0 )
  {
    result = sub_43708(3, *(char **)((char *)&elf_hash_bucket[199] + (_DWORD)v4));
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[229] + (_DWORD)v4) & 0xF) != 0 )
    mode_ntpdate = 1;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[245] + (_DWORD)v4) & 0xF) != 0 )
  {
    v26 = *(const char **)((char *)&elf_hash_bucket[247] + (_DWORD)v4);
    if ( sscanf(v26, "%lf", &v27) == 1 )
      result = sub_39000(4, 0, 0);
    else
      result = sub_65D40(3, "command line broadcast delay value %s undecodable", v26);
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[277] + (_DWORD)v4) & 0xF) != 0 )
  {
    result = sub_43708(2, *(char **)((char *)&elf_hash_bucket[279] + (_DWORD)v4));
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[293] + (_DWORD)v4) & 0xF) != 0 )
  {
    v6 = *(int **)((char *)&elf_hash_bucket[296] + (_DWORD)v4);
    v9 = *v6;
    v8 = (const char **)&byte_8[(_DWORD)v6];
    v7 = v9;
    do
    {
      while ( 1 )
      {
        v11 = *v8++;
        v10 = v11;
        v12 = strtol(v11, 0, 10);
        if ( (unsigned int)(v12 - 1) <= 0xFFFE )
          break;
        --v7;
        result = sub_65D40(3, "command line trusted key %s is invalid", v10);
        if ( v7 <= 0 )
          goto LABEL_31;
      }
      --v7;
      result = sub_630C4(v12, 1);
    }
    while ( v7 > 0 );
LABEL_31:
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[341] + (_DWORD)v4) & 0xF) != 0 )
  {
    v13 = *(int **)((char *)&elf_hash_bucket[344] + (_DWORD)v4);
    v16 = *v13;
    v15 = (const char **)&byte_8[(_DWORD)v13];
    v14 = v16;
    do
    {
      v17 = *v15++;
      --v14;
      v18 = strlen(v17);
      result = sub_248E4(v17, v18 + 1);
    }
    while ( v14 > 0 );
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[357] + (_DWORD)v4) & 0xF) != 0 )
  {
    v19 = *(int **)((char *)&elf_hash_bucket[360] + (_DWORD)v4);
    v22 = *v19;
    v21 = (const char **)&byte_8[(_DWORD)v19];
    v20 = v22;
    do
    {
      v23 = *v21++;
      --v20;
      v24 = strlen(v23);
      result = sub_248E4(v23, v24 + 1);
    }
    while ( v20 > 0 );
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[389] + (_DWORD)v4) & 0xF) != 0 )
  {
    result = sub_30B38(3);
    v4 = off_B711C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[325] + (_DWORD)v4) & 0xF) != 0 )
  {
    v25 = *(int *)((char *)&elf_hash_bucket[327] + (_DWORD)v4);
    if ( v25 < 0 )
    {
      _fprintf_chk(
        stderr,
        1,
        "command line interface update interval %ld must not be negative\n",
        *(int *)((char *)&elf_hash_bucket[327] + (_DWORD)v4));
      sub_65D40(3, "command line interface update interval %ld must not be negative", v25);
      if ( v2 > 0 )
      {
        cmdline_server_count = v2;
        cmdline_servers = a2;
      }
      sub_8B180(&ntpdOptions, 2);
    }
    interface_interval = *(int *)((char *)&elf_hash_bucket[327] + (_DWORD)v4);
  }
  if ( v2 > 0 )
  {
    cmdline_server_count = v2;
    cmdline_servers = a2;
  }
  return result;
}
