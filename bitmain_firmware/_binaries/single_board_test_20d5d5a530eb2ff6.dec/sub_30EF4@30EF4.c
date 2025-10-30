int __fastcall sub_30EF4(int c)
{
  int v3; // r0
  int v4; // r6
  _BYTE *v5; // r0
  int v6; // r0
  int v7; // r0
  char *v8; // r0
  FILE *v9; // r6
  size_t v10; // r0
  int v11; // r0
  int v12; // r4
  _BYTE *v13; // r0
  char v14[48]; // [sp+0h] [bp-30h] BYREF

  if ( c )
  {
    if ( c != 1 )
    {
      sub_6FBF4(c);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Don't support");
      sub_1F650(2, "this type config");
      sub_1F650(3, "information");
      sub_1E938(v14, 0x30u);
      printf("%s ", v14);
      printf("%s : Don't support save this type information. type = %d\n", "save_MES_system_config_information", c);
      snprintf(byte_61C51C, 0x100u, "Don't support save this type information. type = %d", c);
      sub_3CC5C(byte_61C51C, v14);
      return 0;
    }
    memset(filename, 0, 0xC8u);
    v3 = stpcpy(filename, &unk_21B780);
    v4 = dword_223680;
    v5 = (_BYTE *)stpcpy(v3, dword_223680 + 16);
    *v5 = 45;
    v6 = stpcpy(v5 + 1, v4 + 32) + 1;
    *(_BYTE *)(v6 - 1) = 45;
    v7 = stpcpy(v6, haystack) + 1;
    *(_BYTE *)(v7 - 1) = 45;
    v8 = (char *)(stpcpy(v7, dword_6E3358) + 1);
    *(v8 - 1) = 45;
    strcpy(v8, dword_6E3390);
  }
  else
  {
    memset(filename, 0, 0xC8u);
    v11 = stpcpy(filename, &unk_21B780);
    v12 = dword_223680;
    v13 = (_BYTE *)stpcpy(v11, dword_223680 + 16);
    *v13 = 45;
    strcpy(v13 + 1, (const char *)(v12 + 32));
  }
  sub_1E938(v14, 0x30u);
  printf("%s ", v14);
  printf("%s : Save MES system config information into %s\n", "save_MES_system_config_information", filename);
  snprintf(byte_61C61C, 0x100u, "Save MES system config information into %s", filename);
  sub_3CC5C(byte_61C61C, v14);
  v9 = fopen(filename, "w");
  if ( v9 )
  {
    sub_1E938(v14, 0x30u);
    printf("%s ", v14);
    printf("%s : Open %s success\n", "save_MES_system_config_information", filename);
    snprintf(byte_61C81C, 0x100u, "Open %s success", filename);
    sub_3CC5C(byte_61C81C, v14);
    v10 = fwrite((const void *)dword_61BC14, dword_61BC10, 1u, v9);
    if ( v10 == 1 )
    {
      sub_1E938(v14, 0x30u);
      printf("%s ", v14);
      printf("%s : Write %s success\n", "save_MES_system_config_information", filename);
      snprintf(byte_61CA1C, 0x100u, "Write %s success", filename);
      sub_3CC5C(byte_61CA1C, v14);
      fclose(v9);
      return 1;
    }
    else
    {
      sub_6FBF4(v10);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "write MES system");
      sub_1F650(2, "config infor");
      sub_1F650(3, "fail");
      sub_1E938(v14, 0x30u);
      printf("%s ", v14);
      printf("%s : Write %s fail\n", "save_MES_system_config_information", filename);
      snprintf(byte_61C91C, 0x100u, "Write %s fail", filename);
      sub_3CC5C(byte_61C91C, v14);
      fclose(v9);
      return 0;
    }
  }
  else
  {
    sub_6FBF4(0);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "open file to");
    sub_1F650(2, "save MES system");
    sub_1F650(3, "config info fail");
    sub_1E938(v14, 0x30u);
    printf("%s ", v14);
    printf("%s : Open %s fail\n", "save_MES_system_config_information", filename);
    snprintf(byte_61C71C, 0x100u, "Open %s fail", filename);
    sub_3CC5C(byte_61C71C, v14);
    return 0;
  }
}
