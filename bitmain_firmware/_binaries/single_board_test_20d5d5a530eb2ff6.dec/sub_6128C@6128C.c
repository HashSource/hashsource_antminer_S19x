int sub_6128C()
{
  int v0; // r5
  int v1; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r0
  int v6; // r3
  int v7; // r6
  _BYTE *v8; // r2
  int v9; // r0
  int v10; // r5
  int v11; // r0
  size_t n; // [sp+14h] [bp-148h] BYREF
  int v13; // [sp+18h] [bp-144h] BYREF
  pthread_t newthread; // [sp+1Ch] [bp-140h] BYREF
  unsigned int v15; // [sp+20h] [bp-13Ch] BYREF
  int v16; // [sp+24h] [bp-138h]
  char v17[48]; // [sp+28h] [bp-134h] BYREF
  _BYTE s1[128]; // [sp+58h] [bp-104h] BYREF
  char s2[132]; // [sp+D8h] [bp-84h] BYREF

  n = 128;
  byte_5FE894 = 0;
  v15 = 0;
  v16 = 0;
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf(
    "%s : Start %s, gPattern_test_counter = %d\n",
    "Single_Board_PT1_New_Test",
    "Single_Board_PT1_New_Test",
    (unsigned __int8)byte_5FE894);
  snprintf(
    byte_64F33C,
    0x100u,
    "Start %s, gPattern_test_counter = %d",
    "Single_Board_PT1_New_Test",
    (unsigned __int8)byte_5FE894);
  sub_3CC5C((int)byte_64F33C, s2);
  v0 = sub_22B14();
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : first sensor check res:%d\n", "Single_Board_PT1_New_Test", v0);
  snprintf(byte_64F43C, 0x100u, "first sensor check res:%d", v0);
  sub_3CC5C((int)byte_64F43C, s2);
  if ( !v0 )
  {
    v1 = sub_2146C("Sensor Check", "Err", 0);
    sub_6F490(v1);
    return 12;
  }
  if ( !sub_5EC4C() )
    return 12;
  sub_6DDF4(2);
  sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 632));
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : Set fan speed as %d\n", "Single_Board_PT1_New_Test", *(_DWORD *)(dword_223680 + 632));
  snprintf(byte_64F53C, 0x100u, "Set fan speed as %d", *(_DWORD *)(dword_223680 + 632));
  sub_3CC5C((int)byte_64F53C, s2);
  sub_1F408();
  if ( !sub_20CBC() )
  {
    sub_6E9D8(dword_21B3B0, 0);
    return 12;
  }
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : Set Chain %d baud: %d\n", "Single_Board_PT1_New_Test", dword_21B3A4, 26);
  snprintf(byte_64F63C, 0x100u, "Set Chain %d baud: %d", dword_21B3A4, 26);
  sub_3CC5C((int)byte_64F63C, s2);
  sub_71D60(dword_21B3A4, 26);
  sub_787F0((unsigned __int8)dword_21B3A4);
  sub_71AF4(dword_21B3A4);
  sleep(1u);
  byte_5FE775 = 1;
  if ( pthread_create((pthread_t *)&dword_5FE768, 0, (void *(*)(void *))sub_2135C, 0) )
  {
    byte_5FE775 = 0;
    pthread_join(dword_5FE768, 0);
    v3 = sub_6E9D8(dword_21B3B0, 0);
    sub_6FBF4(v3);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Show thread");
    sub_1F650(2, "Creat  fail");
    sub_1F650(3, aStartAg);
    sub_1E938(s2, 0x30u);
    printf("%s ", s2);
    printf("%s : Show thread creat fail, Start again\n", "Single_Board_PT1_New_Test");
    strcpy(byte_64F73C, "Show thread creat fail, Start again");
    sub_3CC5C((int)byte_64F73C, s2);
    return 12;
  }
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : chech EEPROM start\n", "Single_Board_PT1_New_Test");
  strcpy(byte_64F83C, "chech EEPROM start");
  sub_3CC5C((int)byte_64F83C, s2);
  if ( sub_22A08(dword_6032C0) )
  {
    byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 2] = 1;
    sub_1E938(s2, 0x30u);
    printf("%s ", s2);
    printf("%s : chech EEPROM success\n", "Single_Board_PT1_New_Test");
    strcpy(byte_64F93C, "chech EEPROM success");
    sub_3CC5C((int)byte_64F93C, s2);
  }
  else
  {
    sub_1E938(s2, 0x30u);
    printf("%s ", s2);
    printf("%s : check EEPROM fail\n", "Single_Board_PT1_New_Test");
    strcpy(byte_64FA3C, "check EEPROM fail");
    sub_3CC5C((int)byte_64FA3C, s2);
  }
  v4 = dword_223680;
  if ( *(_BYTE *)(dword_223680 + 89) )
  {
    if ( !sub_23588() )
    {
      byte_5FE775 = 0;
      sub_6E9D8(dword_21B3B0, 0);
      if ( dword_5FE768 )
        pthread_join(dword_5FE768, 0);
      return 1;
    }
    v4 = dword_223680;
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      sub_243CC(3);
      v4 = dword_223680;
    }
  }
  if ( *(_BYTE *)(v4 + 88) )
    sub_247A8(3);
  sub_71AF4(dword_21B3A4);
  usleep(0x493E0u);
  if ( !sub_22D88(0x514u) )
    sub_2B420("power err");
  sub_71B24(dword_21B3A4);
  usleep(0x186A0u);
  sub_71AF4(dword_21B3A4);
  usleep(0x2710u);
  sub_71B24(dword_21B3A4);
  usleep(0x186A0u);
  sub_71AF4(dword_21B3A4);
  usleep(0x2710u);
  sub_71B24(dword_21B3A4);
  usleep(0x30D40u);
  newthread = 0;
  if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_5CA6C, 0) )
    sub_2B420("thread err");
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : board protect start...\n", "Single_Board_PT1_New_Test");
  strcpy(byte_64FB3C, "board protect start...");
  sub_3CC5C((int)byte_64FB3C, s2);
  usleep(0x30D40u);
  sub_71B24(dword_21B3A4);
  if ( *(_BYTE *)(dword_223680 + 89) && !sub_23A5C() )
  {
    byte_2334AC = 0;
    sub_5C888(dword_21B3A4);
    if ( dword_5FE768 )
      pthread_join(dword_5FE768, 0);
    if ( dword_5FE76C )
    {
      pthread_join(dword_5FE76C, 0);
      return 1;
    }
    return 1;
  }
  byte_5FE774 = 1;
  if ( pthread_create((pthread_t *)&dword_5FE764, 0, (void *(*)(void *))sub_60228, 0) )
  {
    byte_2334AC = 0;
    byte_5FE774 = 0;
    sub_5C888(dword_21B3A4);
    if ( dword_5FE768 )
      pthread_join(dword_5FE768, 0);
    if ( dword_5FE76C )
      pthread_join(dword_5FE76C, 0);
    v5 = pthread_join(dword_5FE764, 0);
    sub_6FBF4(v5);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Receive thread");
    sub_1F650(2, "Creat  fail");
    sub_1F650(3, aStartAg);
    sub_1E938(s2, 0x30u);
    printf("%s ", s2);
    printf("%s :  Receive thread  creat fail, Start again\n", "Single_Board_PT1_New_Test");
    strcpy(byte_64FC3C, " Receive thread  creat fail, Start again");
    sub_3CC5C((int)byte_64FC3C, s2);
    return 12;
  }
  sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
  {
    sub_1E938(s2, 0x30u);
    printf("%s ", s2);
    printf("%s : First: Only Find %d ASIC, try again\n\n", "Single_Board_PT1_New_Test", dword_5FE780);
    snprintf(byte_64FD3C, 0x100u, "First: Only Find %d ASIC, try again\n", dword_5FE780);
    sub_3CC5C((int)byte_64FD3C, s2);
    v15 = dword_5FE780;
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    if ( v15 > dword_5FE780 )
      v15 = dword_5FE780;
  }
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : First: Find %d ASIC\n", "Single_Board_PT1_New_Test", dword_5FE780);
  snprintf(byte_64FE3C, 0x100u, "First: Find %d ASIC", dword_5FE780);
  sub_3CC5C((int)byte_64FE3C, s2);
  v15 = dword_5FE780;
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : Set chain inactive\n", "Single_Board_PT1_New_Test");
  strcpy(byte_64FF3C, "Set chain inactive");
  sub_3CC5C((int)byte_64FF3C, s2);
  sub_7771C((unsigned __int8)dword_21B3A4);
  usleep(0x2710u);
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : Set asic address\n", "Single_Board_PT1_New_Test");
  strcpy(byte_65003C, "Set asic address");
  sub_3CC5C((int)byte_65003C, s2);
  sub_77720((unsigned __int8)dword_21B3A4, dword_6084C8);
  usleep(0x2710u);
  sub_5F6A0((unsigned __int8)dword_6084C8);
  usleep(0x2710u);
  sub_7778C((unsigned __int8)dword_21B3A4, *(_DWORD *)(dword_223680 + 576));
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : Set chain baud as %d\n", "Single_Board_PT1_New_Test", *(_DWORD *)(dword_223680 + 576));
  snprintf(byte_65013C, 0x100u, "Set chain baud as %d", *(_DWORD *)(dword_223680 + 576));
  sub_3CC5C((int)byte_65013C, s2);
  usleep(0xC350u);
  sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  byte_5FE774 = 0;
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : Second: Find %d ASIC\n\n", "Single_Board_PT1_New_Test", dword_5FE780);
  snprintf(byte_65023C, 0x100u, "Second: Find %d ASIC\n", dword_5FE780);
  sub_3CC5C((int)byte_65023C, s2);
  v6 = *(_DWORD *)(dword_223680 + 64);
  v16 = dword_5FE780;
  if ( v15 == v6 && dword_5FE780 == v6 )
  {
    byte_2337B0[264784 * (unsigned __int8)byte_5FE894] = 1;
  }
  else
  {
    dword_5FE780 = sub_1F7C0((int)&v15, 2);
    sub_1E938(s2, 0x30u);
    printf("%s ", s2);
    printf("%s : The MIN ASIC number is %d\n", "Single_Board_PT1_New_Test", dword_5FE780);
    snprintf(byte_65033C, 0x100u, "The MIN ASIC number is %d", dword_5FE780);
    sub_3CC5C((int)byte_65033C, s2);
    dword_6090CC = v16;
    dword_5FE780 = v15;
    sub_60414();
  }
  pthread_cancel(newthread);
  pthread_join(newthread, 0);
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : board protect end...\n", "Single_Board_PT1_New_Test");
  strcpy(byte_65043C, "board protect end...");
  sub_3CC5C((int)byte_65043C, s2);
  if ( *(_BYTE *)(dword_223680 + 673) && *(_DWORD *)(dword_223680 + 668) )
  {
    byte_5FE775 = 0;
    if ( dword_5FE768 )
      pthread_join(dword_5FE768, 0);
    dword_5FE768 = 0;
    sub_2597C();
  }
  sub_5C888(dword_21B3A4);
  v7 = (unsigned __int8)byte_2337B0[264784 * (unsigned __int8)byte_5FE894];
  if ( byte_2337B0[264784 * (unsigned __int8)byte_5FE894] )
    v7 = (unsigned __int8)byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 2];
  if ( *(_BYTE *)(dword_223680 + 89) && !byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 3] )
    v7 = 0;
  if ( *(_BYTE *)(dword_223680 + 88) && !byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 5] )
    v7 = 0;
  if ( *(_BYTE *)(dword_223680 + 673) )
    goto LABEL_71;
  if ( !*(_BYTE *)(dword_223680 + 90) || (v8 = &byte_2337B0[264784 * (unsigned __int8)byte_5FE894], v8[4]) )
  {
    if ( v7 )
    {
      if ( sub_2210C() )
      {
        byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 2] = 1;
        sub_1E938(s2, 0x30u);
        printf("%s ", s2);
        printf("%s : write PT1 EEPROM marker success\n", "Single_Board_PT1_New_Test");
        strcpy(byte_65053C, "write PT1 EEPROM marker success");
        sub_3CC5C((int)byte_65053C, s2);
      }
      else
      {
        byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 2] = 0;
        sub_1E938(s2, 0x30u);
        printf("%s ", s2);
        printf("%s : write PT1 EEPROM marker fail\n", "Single_Board_PT1_New_Test");
        strcpy(byte_65063C, "write PT1 EEPROM marker fail");
        sub_3CC5C((int)byte_65063C, s2);
      }
    }
  }
  else
  {
    v7 = (unsigned __int8)v8[4];
  }
  byte_5FE774 = 0;
  if ( sub_29ACC(v7, (int)s1, (int)&n, (int)&v13) )
  {
    sub_1E938(s2, 0x30u);
    printf("%s ", s2);
    printf("%s : write 0x%x..+0x%x\n", "Single_Board_PT1_New_Test", v13, n);
    snprintf(byte_65083C, 0x100u, "write 0x%x..+0x%x", v13, n);
    sub_3CC5C((int)byte_65083C, s2);
    if ( sub_70A44(dword_21B3A4, (unsigned __int8)v13, s1, n) )
    {
      byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 2] = 0;
      sub_1E938(s2, 0x30u);
      printf("%s ", s2);
      printf("%s : Write EEPROM fail\n\n", "Single_Board_PT1_New_Test");
      strcpy(byte_650C3C, "Write EEPROM fail\n");
      sub_3CC5C((int)byte_650C3C, s2);
    }
    else if ( sub_70B40(dword_21B3A4, (unsigned __int8)v13, s2, n) )
    {
      byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 2] = 0;
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf("%s : Read EEPROM fail\n\n", "Single_Board_PT1_New_Test");
      strcpy(byte_65093C, "Read EEPROM fail\n");
      sub_3CC5C((int)byte_65093C, v17);
    }
    else if ( !memcmp(s1, s2, n) )
    {
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf("%s : Write EEPROM ok\n\n", "Single_Board_PT1_New_Test");
      strcpy(byte_650A3C, "Write EEPROM ok\n");
      sub_3CC5C((int)byte_650A3C, v17);
    }
    else
    {
      byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 2] = 0;
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf("%s : Check EEPROM data fail\n\n", "Single_Board_PT1_New_Test");
      strcpy(byte_650B3C, "Check EEPROM data fail\n");
      sub_3CC5C((int)byte_650B3C, v17);
    }
LABEL_71:
    v11 = dword_5FE768;
    byte_5FE775 = 0;
    if ( dword_5FE768 )
      v11 = pthread_join(dword_5FE768, 0);
    v10 = sub_25AE0(v11);
    sub_1EB3C((unsigned __int8)byte_5FE894);
    goto LABEL_61;
  }
  sub_5C888(dword_21B3A4);
  v9 = dword_5FE768;
  byte_5FE775 = 0;
  if ( dword_5FE768 )
    v9 = pthread_join(dword_5FE768, 0);
  sub_6FBF4(v9);
  v10 = 12;
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "prepare");
  sub_1F650(2, "eeprom data");
  sub_1F650(3, "fail");
  sub_1E938(s2, 0x30u);
  printf("%s ", s2);
  printf("%s : prepare eeprom data fail\n", "Single_Board_PT1_New_Test");
  strcpy(byte_65073C, "prepare eeprom data fail");
  sub_3CC5C((int)byte_65073C, s2);
LABEL_61:
  byte_2334AC = 0;
  byte_5FE774 = 0;
  if ( dword_5FE76C )
    pthread_join(dword_5FE76C, 0);
  if ( dword_5FE764 )
    pthread_join(dword_5FE764, 0);
  return v10;
}
