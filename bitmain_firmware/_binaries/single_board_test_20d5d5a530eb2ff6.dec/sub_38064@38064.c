int __fastcall sub_38064(int a1, int a2)
{
  const char *v4; // r8
  size_t v5; // r0
  size_t v6; // r9
  int v7; // r0
  size_t v8; // r9
  int v9; // r6
  int v10; // r5
  unsigned int v11; // r4
  char v12; // r2
  int v13; // t1
  char *v14; // r3
  unsigned int v15; // r0
  bool v16; // cc
  unsigned int v17; // r10
  char s[40]; // [sp+8h] [bp-58h] BYREF
  char var30[80]; // [sp+30h] [bp-30h] BYREF

  v4 = (const char *)(a1 + 80);
  memset(s, 0, sizeof(s));
  v5 = strlen((const char *)(a1 + 80));
  if ( v5 == -1 )
    return 1;
  v6 = v5 + 80;
  v7 = 0;
  v8 = v6 + a1;
  v9 = 0;
  v10 = a1 + 79;
  v11 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)++v10;
      v12 = v13;
      v14 = &var30[10 * v11 + 48 + v9];
      if ( (unsigned int)(v13 - 48) > 9 )
        break;
      ++v9;
      v7 = 1;
      *(v14 - 88) = v12;
LABEL_4:
      if ( v8 == v10 )
        return 1;
    }
    if ( !v7 )
      goto LABEL_4;
    if ( v11 > 3 )
    {
      sub_1E938(var30, 0x30u);
      printf("%s ", var30);
      printf("%s : There are too many number sector in ft version: %s, error.\n", "get_chip_ft_program_version_ex", v4);
      snprintf(&byte_62A868[1536], 0x100u, "There are too many number sector in ft version: %s, error.", v4);
      sub_3CC5C(&byte_62A868[1536], var30);
      return 0;
    }
    v15 = strtol(&s[10 * v11], 0, 10);
    v16 = v15 > 0xFF;
    v17 = v15;
    v7 = 0;
    v9 = 0;
    if ( v16 )
      break;
    *(_BYTE *)(a2 + v11++) = v17;
    if ( v8 == v10 )
      return 1;
  }
  sub_1E938(var30, 0x30u);
  printf("%s ", var30);
  printf("%s : FT version: %dst number: %d, error\n", "get_chip_ft_program_version_ex", v11, v17);
  snprintf(&byte_62A868[1792], 0x100u, "FT version: %dst number: %d, error", v11, v17);
  sub_3CC5C(&byte_62A868[1792], var30);
  return 0;
}
