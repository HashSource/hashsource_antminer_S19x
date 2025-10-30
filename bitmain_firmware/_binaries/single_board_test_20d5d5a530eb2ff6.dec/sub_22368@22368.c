int sub_22368()
{
  int v0; // r4
  int v1; // r0
  unsigned __int8 v3; // [sp+7h] [bp-35h] BYREF
  char v4[48]; // [sp+8h] [bp-34h] BYREF

  v0 = 3;
  v3 = 0;
  while ( 1 )
  {
    v1 = sub_70B40(dword_21B3A4, (unsigned __int8)(dword_6032C0 - 1), &v3, 1);
    if ( !v1 && v3 == 90 )
      break;
    if ( !--v0 )
    {
      sub_6FBF4(v1);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "This hashboard");
      sub_1F650(2, "didn't do PT1");
      sub_1E938(v4, 0x30u);
      printf("%s ", v4);
      printf("%s : PT1 marker is 0x%02x...\n", "check_PT1_EEPROM_marker", v3);
      snprintf(byte_6037C4, 0x100u, "PT1 marker is 0x%02x...", v3);
      sub_3CC5C(byte_6037C4, v4);
      sub_1E938(v4, 0x30u);
      printf("%s ", v4);
      printf("%s : This board didn't do PT1\n", "check_PT1_EEPROM_marker");
      strcpy(byte_6038C4, "This board didn't do PT1");
      sub_3CC5C(byte_6038C4, v4);
      return 0;
    }
  }
  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : PT1 marker got...\n", "check_PT1_EEPROM_marker");
  strcpy(byte_6039C4, "PT1 marker got...");
  sub_3CC5C(byte_6039C4, v4);
  return 1;
}
