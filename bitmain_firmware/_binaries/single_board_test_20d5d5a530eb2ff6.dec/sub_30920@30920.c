int sub_30920()
{
  int v0; // r5
  _DWORD *v2; // r0
  char v3[48]; // [sp+4h] [bp-12Ch] BYREF
  char v4[252]; // [sp+34h] [bp-FCh] BYREF

  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s :  \n", "download_MES_system_Config_file");
  word_61BB10 = 32;
  sub_3CC5C(&word_61BB10, v4);
  if ( !sub_2F070(1) )
    return 0;
  v0 = sub_30360(" ", dword_61A00C);
  if ( !v0 )
    return 0;
  dword_61BC10 = 0;
  if ( dword_61BC14 )
  {
    free((void *)dword_61BC14);
    dword_61BC14 = 0;
  }
  dword_61BC14 = (int)sub_30548((size_t *)&dword_61BC10);
  if ( !dword_61BC14 )
    return 0;
  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : Get MES system Config information, and do integrity verification\n", "download_MES_system_Config_file");
  strcpy(byte_61BC18, "Get MES system Config information, and do integrity verification");
  sub_3CC5C(byte_61BC18, v4);
  v2 = (_DWORD *)sub_7AAA0(dword_61BC14, dword_61BC10 - 1, 0, v4);
  dword_61BD18 = (int)v2;
  if ( v2 && !*v2 )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : The received MES system Config information is in JSON format\n", "download_MES_system_Config_file");
    strcpy(byte_61BE1C, "The received MES system Config information is in JSON format");
    sub_3CC5C(byte_61BE1C, v3);
    return v0;
  }
  sub_6FBF4(v2);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "MES config");
  sub_1F650(2, "information");
  sub_1F650(3, "is not in JSON");
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : The received MES system Config information is not in JSON format\n", "download_MES_system_Config_file");
  strcpy(byte_61BD1C, "The received MES system Config information is not in JSON format");
  sub_3CC5C(byte_61BD1C, v3);
  return 0;
}
