int sub_2135C()
{
  unsigned int v0; // r0
  _DWORD v2[4]; // [sp+0h] [bp-44h] BYREF
  char v3[52]; // [sp+10h] [bp-34h] BYREF

  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : Start %s\n", "PT1_show_status_func", "PT1_show_status_func");
  snprintf(byte_6018BC, 0x100u, "Start %s", "PT1_show_status_func");
  v0 = sub_3CC5C(byte_6018BC, v3);
  for ( dword_5FE784 = 0; byte_5FE775; v0 = sleep(1u) )
  {
    sub_6FBF4(v0);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    memset(v2, 0, sizeof(v2));
    sprintf((char *)v2, "time: %ds", dword_5FE784);
    sub_1F650(1, (const char *)v2);
    sub_1F650(2, "Testing...");
    ++dword_5FE784;
  }
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : %s stop\n", "PT1_show_status_func", "PT1_show_status_func");
  snprintf(byte_6019BC, 0x100u, "%s stop", "PT1_show_status_func");
  sub_3CC5C(byte_6019BC, v3);
  return 0;
}
