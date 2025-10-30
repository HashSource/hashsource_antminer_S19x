int sub_37308()
{
  int v0; // r0
  int v1; // r6
  _BYTE *v2; // r0
  char *v3; // r0
  FILE *v4; // r6
  size_t v5; // r5
  char v7[48]; // [sp+0h] [bp-30h] BYREF

  memset(aMntCardResultS, 0, 0xC8u);
  v0 = stpcpy(aMntCardResultS, &unk_21C07C);
  v1 = dword_223680;
  v2 = (_BYTE *)stpcpy(v0, dword_223680 + 16);
  *v2 = 45;
  v3 = (char *)(stpcpy(v2 + 1, v1 + 32) + 1);
  *(v3 - 1) = 45;
  strcpy(v3, src);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : Save MES system config information into %s\n", "save_MES_system_submit_result", aMntCardResultS);
  snprintf(byte_629250, 0x100u, "Save MES system config information into %s", aMntCardResultS);
  sub_3CC5C(byte_629250, v7);
  v4 = fopen(aMntCardResultS, "w");
  if ( v4 )
  {
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf("%s : Open %s success\n", "save_MES_system_submit_result", aMntCardResultS);
    snprintf(byte_629450, 0x100u, "Open %s success", aMntCardResultS);
    sub_3CC5C(byte_629450, v7);
    v5 = fwrite(" ", dword_628A4C, 1u, v4);
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    if ( v5 == 1 )
    {
      printf("%s : Write %s success\n", "save_MES_system_submit_result", aMntCardResultS);
      snprintf(byte_629650, 0x100u, "Write %s success", aMntCardResultS);
      sub_3CC5C(byte_629650, v7);
      fclose(v4);
      system("sync");
      return 1;
    }
    else
    {
      printf("%s : Write %s fail\n", "save_MES_system_submit_result", aMntCardResultS);
      snprintf(byte_629550, 0x100u, "Write %s fail", aMntCardResultS);
      sub_3CC5C(byte_629550, v7);
      fclose(v4);
      return 0;
    }
  }
  else
  {
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf("%s : Open %s fail\n", "save_MES_system_submit_result", aMntCardResultS);
    snprintf(byte_629350, 0x100u, "Open %s fail", aMntCardResultS);
    sub_3CC5C(byte_629350, v7);
    return 0;
  }
}
