int sub_18854()
{
  char v1[48]; // [sp+0h] [bp-30h] BYREF

  if ( dword_223680 )
  {
    sub_1E938(v1, 48);
    printf("%s ", v1);
    printf("%s : local config information already malloced\n", "malloc_for_local_config_information");
    strcpy(byte_223784, "local config information already malloced");
    sub_3CC5C(byte_223784, v1);
LABEL_3:
    sub_1E938(v1, 48);
    printf("%s ", v1);
    printf("%s : malloc for local config information success\n", "malloc_for_local_config_information");
    strcpy(byte_223884, "malloc for local config information success");
    sub_3CC5C(byte_223884, v1);
    return 1;
  }
  dword_223680 = (int)malloc(0x2A4u);
  if ( dword_223680 )
    goto LABEL_3;
  sub_1E938(v1, 48);
  printf("%s ", v1);
  printf("%s : malloc for local config information fail!\n", "malloc_for_local_config_information");
  strcpy(byte_223684, "malloc for local config information fail!");
  sub_3CC5C(byte_223684, v1);
  return 0;
}
