int __fastcall sub_1E008(int a1, int a2)
{
  int result; // r0
  void *v5; // r3
  void *v6; // r2
  int *v7; // r10
  int v8; // r4
  const char **v9; // r10
  int v10; // t1
  const char *v11; // r7
  const char *v12; // t1
  int v13; // r0
  int *v14; // r11
  int v15; // r4
  const char **v16; // r11
  int v17; // t1
  const char *v18; // t1
  size_t v19; // r0
  int *v20; // r11
  int v21; // r4
  const char **v22; // r11
  int v23; // t1
  const char *v24; // t1
  size_t v25; // r0
  int v26; // r4
  const char *v27; // r4
  double v28; // [sp+8h] [bp-14h] BYREF

  result = ipv6_works;
  if ( !ipv4_works )
  {
    if ( !ipv6_works )
    {
      sub_64E00(3, "Neither IPv4 nor IPv6 networking detected, fatal.");
      exit(1);
    }
    v5 = off_B611C;
    if ( (*(_DWORD *)((_BYTE *)&word_10 + (_DWORD)off_B611C) & 0xF) != 0 )
    {
      result = sub_64E00(4, "-4/--ipv4 ignored, IPv4 networking not found.");
      v5 = off_B611C;
    }
    goto LABEL_5;
  }
  v5 = off_B611C;
  if ( ipv6_works )
  {
    result = *(_DWORD *)((_BYTE *)&word_10 + (_DWORD)off_B611C) & 0xF;
    if ( result )
    {
      ipv6_works = 0;
    }
    else if ( (*(int *)((_BYTE *)&dword_50 + (_DWORD)off_B611C) & 0xF) != 0 )
    {
      ipv4_works = 0;
    }
LABEL_5:
    v6 = (void *)(*(int *)((_BYTE *)&dword_90 + (_DWORD)v5) & 0xF);
    if ( !v6 )
      goto LABEL_6;
LABEL_51:
    result = sub_38810(3, 1, 0);
    v5 = off_B611C;
    if ( (*(int *)((_BYTE *)&dword_110 + (_DWORD)off_B611C) & 0xF) == 0 )
      goto LABEL_9;
    goto LABEL_52;
  }
  if ( (*(int *)((_BYTE *)&dword_50 + (_DWORD)off_B611C) & 0xF) == 0 )
    goto LABEL_5;
  result = sub_64E00(4, "-6/--ipv6 ignored, IPv6 networking not found.");
  v5 = off_B611C;
  v6 = (void *)(*(int *)((_BYTE *)&dword_90 + (_DWORD)off_B611C) & 0xF);
  if ( v6 )
    goto LABEL_51;
LABEL_6:
  if ( (*(int *)((_BYTE *)&dword_D0 + (_DWORD)v5) & 0xF) != 0 )
  {
    result = sub_38810(3, (int)v6, v6);
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&dword_110 + (_DWORD)v5) & 0xF) != 0 )
  {
LABEL_52:
    result = sub_38810(1, 1, 0);
    v5 = off_B611C;
  }
LABEL_9:
  if ( (*(int *)((_BYTE *)&dword_150 + (_DWORD)v5) & 0xF) != 0 )
    config_file = *(_DWORD *)&aLibLdLinuxArmh[(_DWORD)v5 + 4];
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[21] + (_DWORD)v5) & 0xF) != 0 )
  {
    result = sub_4294C(1, *(char **)((char *)&elf_hash_bucket[23] + (_DWORD)v5));
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[37] + (_DWORD)v5) & 0xF) != 0 )
    allow_panic = 1;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[53] + (_DWORD)v5) & 0xF) != 0 )
    force_step_once = 1;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[101] + (_DWORD)v5) & 0xF) != 0 )
  {
    result = sub_42744(*(int *)((char *)&elf_hash_bucket[103] + (_DWORD)v5));
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[197] + (_DWORD)v5) & 0xF) != 0 )
  {
    result = sub_4294C(3, *(char **)((char *)&elf_hash_bucket[199] + (_DWORD)v5));
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[229] + (_DWORD)v5) & 0xF) != 0 )
    mode_ntpdate = 1;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[245] + (_DWORD)v5) & 0xF) != 0 )
  {
    v27 = *(const char **)((char *)&elf_hash_bucket[247] + (_DWORD)v5);
    if ( sscanf(v27, "%lf", &v28) == 1 )
      result = sub_38810(4, 0, 0);
    else
      result = sub_64E00(3, "command line broadcast delay value %s undecodable", v27);
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[277] + (_DWORD)v5) & 0xF) != 0 )
  {
    result = sub_4294C(2, *(char **)((char *)&elf_hash_bucket[279] + (_DWORD)v5));
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[293] + (_DWORD)v5) & 0xF) != 0 )
  {
    v7 = *(int **)((char *)&elf_hash_bucket[296] + (_DWORD)v5);
    v10 = *v7;
    v9 = (const char **)&byte_8[(_DWORD)v7];
    v8 = v10;
    do
    {
      while ( 1 )
      {
        v12 = *v9++;
        v11 = v12;
        v13 = strtol(v12, 0, 10);
        if ( (unsigned int)(v13 - 1) <= 0xFFFE )
          break;
        --v8;
        result = sub_64E00(3, "command line trusted key %s is invalid", v11);
        if ( v8 <= 0 )
          goto LABEL_31;
      }
      --v8;
      result = sub_621BC(v13, 1);
    }
    while ( v8 > 0 );
LABEL_31:
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[341] + (_DWORD)v5) & 0xF) != 0 )
  {
    v14 = *(int **)((char *)&elf_hash_bucket[344] + (_DWORD)v5);
    v17 = *v14;
    v16 = (const char **)&byte_8[(_DWORD)v14];
    v15 = v17;
    do
    {
      v18 = *v16++;
      --v15;
      v19 = strlen(v18);
      result = sub_245C4(v18, v19 + 1);
    }
    while ( v15 > 0 );
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[357] + (_DWORD)v5) & 0xF) != 0 )
  {
    v20 = *(int **)((char *)&elf_hash_bucket[360] + (_DWORD)v5);
    v23 = *v20;
    v22 = (const char **)&byte_8[(_DWORD)v20];
    v21 = v23;
    do
    {
      v24 = *v22++;
      --v21;
      v25 = strlen(v24);
      result = sub_245C4(v24, v25 + 1);
    }
    while ( v21 > 0 );
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[389] + (_DWORD)v5) & 0xF) != 0 )
  {
    result = sub_305F8(3);
    v5 = off_B611C;
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[325] + (_DWORD)v5) & 0xF) != 0 )
  {
    v26 = *(int *)((char *)&elf_hash_bucket[327] + (_DWORD)v5);
    if ( v26 < 0 )
    {
      _fprintf_chk(
        stderr,
        1,
        "command line interface update interval %ld must not be negative\n",
        *(int *)((char *)&elf_hash_bucket[327] + (_DWORD)v5));
      sub_64E00(3, "command line interface update interval %ld must not be negative", v26);
      if ( a1 > 0 )
      {
        cmdline_server_count = a1;
        cmdline_servers = a2;
      }
      sub_89BE8(&ntpdOptions, 2);
    }
    interface_interval = *(int *)((char *)&elf_hash_bucket[327] + (_DWORD)v5);
  }
  if ( a1 > 0 )
  {
    cmdline_server_count = a1;
    cmdline_servers = a2;
  }
  return result;
}
