int sub_604A8()
{
  int v1; // r0
  int v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r3
  _BYTE *v6; // r3
  int v7; // r0
  int v8; // r5
  int v9; // [sp+1Ch] [bp-40h] BYREF
  int v10; // [sp+20h] [bp-3Ch]
  int v11; // [sp+24h] [bp-38h]
  char v12[52]; // [sp+28h] [bp-34h] BYREF

  byte_5FE894 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf(
    "%s : Start %s, gPattern_test_counter = %d\n",
    "Single_Board_PT1_Test",
    "Single_Board_PT1_Test",
    (unsigned __int8)byte_5FE894);
  snprintf(
    byte_64DC3C,
    0x100u,
    "Start %s, gPattern_test_counter = %d",
    "Single_Board_PT1_Test",
    (unsigned __int8)byte_5FE894);
  sub_3CC5C((int)byte_64DC3C, v12);
  if ( !sub_5EC4C() )
    return 12;
  sub_6DDF4(2);
  sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 632));
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : Set fan speed as %d\n", "Single_Board_PT1_Test", *(_DWORD *)(dword_223680 + 632));
  snprintf(byte_64DD3C, 0x100u, "Set fan speed as %d", *(_DWORD *)(dword_223680 + 632));
  sub_3CC5C((int)byte_64DD3C, v12);
  sub_1F408();
  if ( !sub_20CBC() )
  {
    sub_6E9D8(dword_21B3B0, 0);
    return 12;
  }
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : Set Chain %d baud: %d\n", "Single_Board_PT1_Test", dword_21B3A4, 26);
  snprintf(byte_64DE3C, 0x100u, "Set Chain %d baud: %d", dword_21B3A4, 26);
  sub_3CC5C((int)byte_64DE3C, v12);
  sub_71D60(dword_21B3A4, 26);
  sub_787F0((unsigned __int8)dword_21B3A4);
  sub_71AF4(dword_21B3A4);
  sleep(1u);
  byte_5FE775 = 1;
  if ( pthread_create((pthread_t *)&dword_5FE768, 0, (void *(*)(void *))sub_2135C, 0) )
  {
    byte_5FE775 = 0;
    pthread_join(dword_5FE768, 0);
    v1 = sub_6E9D8(dword_21B3B0, 0);
    sub_6FBF4(v1);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Show thread");
    sub_1F650(2, "Creat  fail");
    sub_1F650(3, aStartAg);
    sub_1E938(v12, 0x30u);
    printf("%s ", v12);
    printf("%s : Show thread creat fail, Start again\n", "Single_Board_PT1_Test");
    strcpy(byte_64DF3C, "Show thread creat fail, Start again");
    sub_3CC5C((int)byte_64DF3C, v12);
    return 12;
  }
  if ( sub_22A08(dword_6032C0) )
  {
    byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 2] = 1;
    sub_1E938(v12, 0x30u);
    printf("%s ", v12);
    printf("%s : chech EEPROM success\n", "Single_Board_PT1_Test");
    strcpy(byte_64E03C, "chech EEPROM success");
    sub_3CC5C((int)byte_64E03C, v12);
  }
  else
  {
    sub_1E938(v12, 0x30u);
    printf("%s ", v12);
    printf("%s : check EEPROM fail\n", "Single_Board_PT1_Test");
    strcpy(byte_64E13C, "check EEPROM fail");
    sub_3CC5C((int)byte_64E13C, v12);
  }
  if ( !sub_23588() )
  {
    byte_5FE775 = 0;
    sub_6E9D8(dword_21B3B0, 0);
    pthread_join(dword_5FE768, 0);
    return 1;
  }
  if ( !sub_22D88(*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32]) )
  {
    byte_5FE775 = 0;
    sub_6E9D8(dword_21B3B0, 0);
    pthread_join(dword_5FE768, 0);
    return 12;
  }
  if ( !sub_23A5C() )
  {
    byte_5FE775 = 0;
    byte_2334AC = 0;
    sub_5C888(dword_21B3A4);
    pthread_join(dword_5FE768, 0);
    pthread_join(dword_5FE76C, 0);
    return 1;
  }
  sub_5F7C8();
  if ( *(_BYTE *)(dword_223680 + 89) )
    sub_243CC(3);
  byte_5FE774 = 1;
  if ( pthread_create((pthread_t *)&dword_5FE764, 0, (void *(*)(void *))sub_60228, 0) )
  {
    byte_2334AC = 0;
    byte_5FE774 = 0;
    sub_5C888(dword_21B3A4);
    pthread_join(dword_5FE768, 0);
    pthread_join(dword_5FE76C, 0);
    v2 = pthread_join(dword_5FE764, 0);
    sub_6FBF4(v2);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Receive thread");
    sub_1F650(2, "Creat  fail");
    sub_1F650(3, aStartAg);
    sub_1E938(v12, 0x30u);
    printf("%s ", v12);
    printf("%s :  Receive thread  creat fail, Start again\n", "Single_Board_PT1_Test");
    strcpy(byte_64E23C, " Receive thread  creat fail, Start again");
    sub_3CC5C((int)byte_64E23C, v12);
    return 12;
  }
  sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : First: Find %d ASIC\n\n", "Single_Board_PT1_Test", dword_5FE780);
  snprintf(byte_64E33C, 0x100u, "First: Find %d ASIC\n", dword_5FE780);
  sub_3CC5C((int)byte_64E33C, v12);
  v9 = dword_5FE780;
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : Set chain inactive\n", "Single_Board_PT1_Test");
  strcpy(byte_64E43C, "Set chain inactive");
  sub_3CC5C((int)byte_64E43C, v12);
  sub_7771C((unsigned __int8)dword_21B3A4);
  usleep(0x2710u);
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : Set asic address\n", "Single_Board_PT1_Test");
  strcpy(byte_64E53C, "Set asic address");
  sub_3CC5C((int)byte_64E53C, v12);
  sub_77720((unsigned __int8)dword_21B3A4, dword_6084C8);
  usleep(0x2710u);
  sub_5F6A0((unsigned __int8)dword_6084C8);
  usleep(0x2710u);
  sub_7778C((unsigned __int8)dword_21B3A4, *(_DWORD *)(dword_223680 + 576));
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : Set chain baud as %d\n", "Single_Board_PT1_Test", *(_DWORD *)(dword_223680 + 576));
  snprintf(byte_64E63C, 0x100u, "Set chain baud as %d", *(_DWORD *)(dword_223680 + 576));
  sub_3CC5C((int)byte_64E63C, v12);
  usleep(0xC350u);
  sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
  {
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
      sub_60414();
  }
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : Second: Find %d ASIC\n\n", "Single_Board_PT1_Test", dword_5FE780);
  snprintf(byte_64E73C, 0x100u, "Second: Find %d ASIC\n", dword_5FE780);
  sub_3CC5C((int)byte_64E73C, v12);
  v10 = dword_5FE780;
  sub_71AF4(dword_21B3A4);
  usleep(0x7A120u);
  sub_71B24(dword_21B3A4);
  usleep(0x7A120u);
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : Set Chain %d baud: %d\n", "Single_Board_PT1_Test", dword_21B3A4, 26);
  snprintf(byte_64E83C, 0x100u, "Set Chain %d baud: %d", dword_21B3A4, 26);
  sub_3CC5C((int)byte_64E83C, v12);
  sub_71D60(dword_21B3A4, 26);
  usleep(0x2710u);
  sub_787F0((unsigned __int8)dword_21B3A4);
  usleep(0x2710u);
  sub_5F7C8();
  sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  sub_1E938(v12, 0x30u);
  printf("%s ", v12);
  printf("%s : Third: Find %d ASIC\n\n", "Single_Board_PT1_Test", dword_5FE780);
  snprintf(byte_64E93C, 0x100u, "Third: Find %d ASIC\n", dword_5FE780);
  sub_3CC5C((int)byte_64E93C, v12);
  v3 = dword_223680;
  v4 = *(_DWORD *)(dword_223680 + 64);
  v11 = dword_5FE780;
  if ( v9 == v4 && v10 == v9 && dword_5FE780 == v9 )
  {
    v5 = (unsigned __int8)byte_5FE894;
    byte_2337B0[264784 * (unsigned __int8)byte_5FE894] = 1;
    if ( !*(_BYTE *)(v3 + 90) )
      goto LABEL_32;
    sub_1E938(v12, 0x30u);
    printf("%s ", v12);
    printf("%s : Set chain inactive\n", "Single_Board_PT1_Test");
    strcpy(byte_64EA3C, "Set chain inactive");
    sub_3CC5C((int)byte_64EA3C, v12);
    sub_7771C((unsigned __int8)dword_21B3A4);
    usleep(0x2710u);
    sub_1E938(v12, 0x30u);
    printf("%s ", v12);
    printf("%s : Set asic address\n", "Single_Board_PT1_Test");
    strcpy(byte_64EB3C, "Set asic address");
    sub_3CC5C((int)byte_64EB3C, v12);
    sub_77720((unsigned __int8)dword_21B3A4, dword_6084C8);
    usleep(0x2710u);
    sub_255AC(3);
  }
  else
  {
    dword_5FE780 = sub_1F7C0((int)&v9, 3);
    sub_1E938(v12, 0x30u);
    printf("%s ", v12);
    printf("%s : The MIN ASIC number is %d\n", "Single_Board_PT1_Test", dword_5FE780);
    snprintf(byte_64EC3C, 0x100u, "The MIN ASIC number is %d", dword_5FE780);
    sub_3CC5C((int)byte_64EC3C, v12);
  }
  v5 = (unsigned __int8)byte_5FE894;
  if ( !byte_2337B0[264784 * (unsigned __int8)byte_5FE894] )
    goto LABEL_39;
LABEL_32:
  v6 = &byte_2337B0[264784 * v5];
  if ( !v6[2] )
    goto LABEL_39;
  if ( *(_BYTE *)(dword_223680 + 89) )
  {
    if ( *(_BYTE *)(dword_223680 + 90) )
    {
      if ( !v6[3] )
        goto LABEL_39;
      goto LABEL_36;
    }
    if ( !v6[3] )
      goto LABEL_39;
LABEL_37:
    if ( sub_2210C() )
    {
      byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 2] = 1;
      sub_1E938(v12, 0x30u);
      printf("%s ", v12);
      printf("%s : write PT1 EEPROM marker success\n", "Single_Board_PT1_Test");
      strcpy(byte_64ED3C, "write PT1 EEPROM marker success");
      sub_3CC5C((int)byte_64ED3C, v12);
    }
    else
    {
      byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 2] = 0;
      sub_1E938(v12, 0x30u);
      printf("%s ", v12);
      printf("%s : write PT1 EEPROM marker fail\n", "Single_Board_PT1_Test");
      strcpy(byte_64EE3C, "write PT1 EEPROM marker fail");
      sub_3CC5C((int)byte_64EE3C, v12);
    }
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(dword_223680 + 90) )
    goto LABEL_37;
LABEL_36:
  if ( v6[4] )
    goto LABEL_37;
LABEL_39:
  byte_2334AC = 0;
  byte_5FE774 = 0;
  pthread_join(dword_5FE76C, 0);
  pthread_join(dword_5FE764, 0);
  sub_5C888(dword_21B3A4);
  v7 = pthread_join(dword_5FE768, 0);
  v8 = sub_25AE0(v7);
  sub_1EB3C((unsigned __int8)byte_5FE894);
  return v8;
}
