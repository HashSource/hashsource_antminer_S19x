int sub_64EE8()
{
  pthread_attr_t *v0; // r3
  int v1; // r7
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int result; // r0
  int v6; // r3
  int v7; // r0
  const char *v8; // r4
  char *v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int *v14; // r4
  _DWORD *v15; // r5
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r4
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r5
  int v25; // r5
  int v26; // r0
  int v27; // r0
  int v28; // r0
  char *v29; // r5
  int *v30; // r4
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  _DWORD *v35; // r4
  _DWORD *v36; // r5
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r0
  unsigned __int8 v41; // [sp+27h] [bp-45h] BYREF
  char s[4]; // [sp+28h] [bp-44h] BYREF
  int v43; // [sp+2Ch] [bp-40h]
  int v44; // [sp+30h] [bp-3Ch]
  int v45; // [sp+34h] [bp-38h]
  char v46[52]; // [sp+38h] [bp-34h] BYREF

  byte_5FE894 = 0;
  v41 = 0;
  if ( !dword_22B69C )
    return 0;
  while ( 1 )
  {
    sub_1E938(v46, 0x30u);
    printf("%s ", v46);
    printf(
      "%s : Start %s, gPattern_test_counter = %d\n",
      "Single_Board_PT2_Autogen_Pattern_Test",
      "Single_Board_PT2_Autogen_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    snprintf(
      &byte_653F40[256],
      0x100u,
      "Start %s, gPattern_test_counter = %d",
      "Single_Board_PT2_Autogen_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    sub_3CC5C((int)&byte_653F40[256], v46);
    if ( !sub_5EC4C() )
      return 12;
    sub_6DDF4(2);
    sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 632));
    sub_1E938(v46, 0x30u);
    printf("%s ", v46);
    printf("%s : Set fan speed as %d\n", "Single_Board_PT2_Autogen_Pattern_Test", *(_DWORD *)(dword_223680 + 632));
    snprintf(&byte_653F40[512], 0x100u, "Set fan speed as %d", *(_DWORD *)(dword_223680 + 632));
    sub_3CC5C((int)&byte_653F40[512], v46);
    sub_1F408();
    if ( !sub_20CBC() )
    {
      sub_6E9D8(dword_21B3B0, 0);
      return 12;
    }
    sub_1E938(v46, 0x30u);
    printf("%s ", v46);
    printf("%s : Set Chain %d baud: %d\n", "Single_Board_PT2_Autogen_Pattern_Test", dword_21B3A4, 26);
    snprintf(&byte_653F40[768], 0x100u, "Set Chain %d baud: %d", dword_21B3A4, 26);
    sub_3CC5C((int)&byte_653F40[768], v46);
    sub_71D60(dword_21B3A4, 26);
    sub_787F0((unsigned __int8)dword_21B3A4);
    byte_5FE775 = 1;
    if ( pthread_create((pthread_t *)&dword_5FE768, 0, (void *(*)(void *))sub_21CAC, 0) )
    {
      byte_5FE775 = 0;
      pthread_join(dword_5FE768, 0);
      v7 = sub_6E9D8(dword_21B3B0, 0);
      sub_6FBF4(v7);
      v8 = "Show thread creat fail, Start again";
      sub_1F650(0, (const char *)(dword_223680 + 32));
      v9 = &byte_653F40[1024];
      sub_1F650(1, "Show thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf("%s : Show thread creat fail, Start again\n", "Single_Board_PT2_Autogen_Pattern_Test");
LABEL_32:
      v10 = *(_DWORD *)v8;
      v11 = *((_DWORD *)v8 + 1);
      v12 = *((_DWORD *)v8 + 2);
      v13 = *((_DWORD *)v8 + 3);
      v14 = (int *)(v8 + 16);
      *(_DWORD *)v9 = v10;
      *((_DWORD *)v9 + 1) = v11;
      *((_DWORD *)v9 + 2) = v12;
      *((_DWORD *)v9 + 3) = v13;
      v15 = v9 + 16;
      v16 = *v14;
      v17 = v14[1];
      v18 = v14[2];
      v19 = v14[3];
      v20 = v14[4];
      *v15 = v16;
      v15[1] = v17;
      v15[2] = v18;
      v15[3] = v19;
      v15 += 4;
      *v15 = v20;
      sub_3CC5C((int)(v15 - 8), v46);
      return 12;
    }
    if ( !sub_22368() )
    {
      byte_5FE775 = 0;
      pthread_join(dword_5FE768, 0);
      sub_6E9D8(dword_21B3B0, 0);
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf("%s : EEPROM is not ok\n", "Single_Board_PT2_Autogen_Pattern_Test");
      strcpy(&byte_653F40[1280], "EEPROM is not ok");
      sub_3CC5C((int)&byte_653F40[1280], v46);
      return 5;
    }
    if ( !sub_22A08(dword_6032C0 - 1) )
    {
      byte_5FE775 = 0;
      v21 = pthread_join(dword_5FE768, 0);
      sub_6FBF4(v21);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "EEPROM");
      sub_1F650(2, "Check fail");
      sub_6E9D8(dword_21B3B0, 0);
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf("%s : EEPROM is not ok\n", "Single_Board_PT2_Autogen_Pattern_Test");
      strcpy(&byte_653F40[1792], "EEPROM is not ok");
      sub_3CC5C((int)&byte_653F40[1792], v46);
      return 11;
    }
    sub_1E938(v46, 0x30u);
    printf("%s ", v46);
    printf("%s : EEPROM is ok\n", "Single_Board_PT2_Autogen_Pattern_Test");
    strcpy(&byte_653F40[1536], "EEPROM is ok");
    sub_3CC5C((int)&byte_653F40[1536], v46);
    if ( *(_BYTE *)(dword_223680 + 89) && !sub_23588() )
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
    v0 = (pthread_attr_t *)*(unsigned __int8 *)(dword_223680 + 89);
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      byte_5FE77A = 1;
      v1 = pthread_create((pthread_t *)&dword_5FE770, 0, (void *(*)(void *))sub_24160, 0);
    }
    else
    {
      if ( !*(_BYTE *)(dword_223680 + 88) )
        goto LABEL_14;
      byte_611FD4 = 1;
      v1 = pthread_create((pthread_t *)&dword_5FE770, v0, (void *(*)(void *))sub_2B524, v0);
    }
    if ( v1 )
    {
      byte_5FE77A = 0;
      byte_2334AC = 0;
      byte_611FD4 = 0;
      sub_5C888(dword_21B3A4);
      pthread_join(dword_5FE770, 0);
      if ( *(_BYTE *)(dword_223680 + 89) )
        pthread_join(dword_5FE76C, 0);
      v26 = pthread_join(dword_5FE768, 0);
      sub_6FBF4(v26);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Read PIC Temp");
      sub_1F650(2, "thread  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf("%s : Receive thread creat fail, Start again\n", "Single_Board_PT2_Autogen_Pattern_Test");
      strcpy(&byte_653F40[2048], "Receive thread creat fail, Start again");
      sub_3CC5C((int)&byte_653F40[2048], v46);
      return 12;
    }
    if ( !sub_23E18(*(_DWORD *)(dword_223680 + 620)) )
    {
      byte_611FD4 = 0;
      byte_5FE77A = 0;
      byte_2334AC = 0;
      sub_5C888(dword_21B3A4);
      pthread_join(dword_5FE770, 0);
      if ( *(_BYTE *)(dword_223680 + 89) )
        pthread_join(dword_5FE76C, 0);
      v27 = pthread_join(dword_5FE768, 0);
      sub_6FBF4(v27);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "cool fail");
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf("%s : Can't cool down hashboard fail\n", "Single_Board_PT2_Autogen_Pattern_Test");
      strcpy(&byte_653F40[2304], "Can't cool down hashboard fail");
      sub_3CC5C((int)&byte_653F40[2304], v46);
      return 12;
    }
LABEL_14:
    if ( !sub_23A5C() )
    {
      byte_5FE77A = 0;
      byte_611FD4 = 0;
      byte_2334AC = 0;
      sub_5C888(dword_21B3A4);
      pthread_join(dword_5FE770, 0);
      pthread_join(dword_5FE768, 0);
      result = 1;
      if ( *(_BYTE *)(dword_223680 + 89) )
      {
        pthread_join(dword_5FE76C, 0);
        return 1;
      }
      return result;
    }
    sub_5F7C8();
    sub_78084((unsigned __int8)dword_21B3A4, 0);
    sub_1E938(v46, 0x30u);
    printf("%s ", v46);
    printf("%s : set core_srst in MISC_CONTROL register as false\n", "Single_Board_PT2_Autogen_Pattern_Test");
    strcpy(&byte_653F40[2560], "set core_srst in MISC_CONTROL register as false");
    sub_3CC5C((int)&byte_653F40[2560], v46);
    usleep(0x2710u);
    byte_5FE774 = 1;
    if ( pthread_create((pthread_t *)&dword_5FE764, 0, (void *(*)(void *))sub_60228, 0) )
    {
      byte_5FE77A = 0;
      byte_2334AC = 0;
      byte_5FE774 = 0;
      byte_611FD4 = 0;
      sub_5C888(dword_21B3A4);
      pthread_join(dword_5FE764, 0);
      pthread_join(dword_5FE770, 0);
      if ( *(_BYTE *)(dword_223680 + 89) )
        pthread_join(dword_5FE76C, 0);
      v22 = pthread_join(dword_5FE768, 0);
      sub_6FBF4(v22);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Receive thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf("%s :  Receive thread  creat fail, Start again\n", "Single_Board_PT2_Autogen_Pattern_Test");
      strcpy(&byte_653F40[2816], " Receive thread  creat fail, Start again");
      sub_3CC5C((int)&byte_653F40[2816], v46);
      return 12;
    }
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
    {
      sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
      if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
        break;
    }
    sub_1E938(v46, 0x30u);
    printf("%s ", v46);
    printf("%s : First: find %d ASIC\n\n", "Single_Board_PT2_Autogen_Pattern_Test", dword_5FE780);
    snprintf(&byte_653F40[3584], 0x100u, "First: find %d ASIC\n", dword_5FE780);
    sub_3CC5C((int)&byte_653F40[3584], v46);
    sub_5F848();
    v2 = (unsigned __int8)dword_21B3A4;
    v3 = sub_2B2A0();
    sub_780AC(v2, v3);
    v4 = sub_77D64((unsigned __int8)dword_21B3A4, 1, *(unsigned __int8 *)(dword_223680 + 272), 1792);
    sub_70FF0(v4);
    usleep(0xBB8u);
    sub_231D4(
      *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32],
      *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 28],
      5);
    usleep(0xF4240u);
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
    {
      sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
      if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
      {
        byte_5FE77A = 0;
        byte_2334AC = 0;
        byte_5FE774 = 0;
        byte_611FD4 = 0;
        sub_5C888(dword_21B3A4);
        pthread_join(dword_5FE764, 0);
        pthread_join(dword_5FE770, 0);
        if ( *(_BYTE *)(dword_223680 + 89) )
          pthread_join(dword_5FE76C, 0);
        v40 = pthread_join(dword_5FE768, 0);
        sub_6FBF4(v40);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        if ( *(_DWORD *)(dword_223680 + 64) >= (unsigned int)dword_5FE780 )
        {
          v43 = 0;
          *(_DWORD *)s = 0;
          v44 = 0;
          v45 = 0;
          sprintf(s, "%2d", dword_5FE780);
          sub_1F650(1, "Only find");
          sub_1F650(2, s);
          sub_1F650(3, "ASIC");
          sub_1E938(v46, 0x30u);
          printf("%s ", v46);
          printf("%s : Only find %d ASIC\n", "Single_Board_PT2_Autogen_Pattern_Test", dword_5FE780);
          snprintf(&byte_653F40[4096], 0x100u, "Only find %d ASIC", dword_5FE780);
          sub_3CC5C((int)&byte_653F40[4096], v46);
        }
        else
        {
          LOWORD(v30) = 10024;
          sub_1F650(1, "get too much");
          v29 = &byte_653F40[3840];
          sub_1F650(2, "error asic");
          sub_1F650(3, "address");
          sub_1E938(v46, 0x30u);
          printf("%s ", v46);
          printf("%s : get too much error asic address\n", "Single_Board_PT2_Autogen_Pattern_Test");
LABEL_59:
          HIWORD(v30) = (unsigned int)"get too much error asic address" >> 16;
          v31 = *v30;
          v32 = v30[1];
          v33 = v30[2];
          v34 = v30[3];
          v35 = v30 + 4;
          *(_DWORD *)v29 = v31;
          *((_DWORD *)v29 + 1) = v32;
          *((_DWORD *)v29 + 2) = v33;
          *((_DWORD *)v29 + 3) = v34;
          v36 = v29 + 16;
          v37 = v35[1];
          v38 = v35[2];
          v39 = v35[3];
          *v36 = *v35;
          v36[1] = v37;
          v36[2] = v38;
          v36[3] = v39;
          sub_3CC5C((int)(v36 - 4), v46);
        }
        goto LABEL_60;
      }
    }
    sub_1E938(v46, 0x30u);
    printf("%s ", v46);
    printf("%s : Second: find %d ASIC\n\n", "Single_Board_PT2_Autogen_Pattern_Test", dword_5FE780);
    snprintf(&byte_653F40[4352], 0x100u, "Second: find %d ASIC\n", dword_5FE780);
    sub_3CC5C((int)&byte_653F40[4352], v46);
    if ( pthread_create((pthread_t *)&dword_5FE760, 0, (void *(*)(void *))sub_5C358, 0) )
    {
      pthread_cancel(dword_5FE760);
      byte_5FE77A = 0;
      byte_2334AC = 0;
      byte_5FE774 = 0;
      byte_611FD4 = 0;
      sub_5C888(dword_21B3A4);
      pthread_join(dword_5FE764, 0);
      pthread_join(dword_5FE770, 0);
      if ( *(_BYTE *)(dword_223680 + 89) )
        pthread_join(dword_5FE76C, 0);
      v9 = &byte_653F40[4608];
      v23 = pthread_join(dword_5FE768, 0);
      sub_6FBF4(v23);
      v8 = (const char *)&unk_1A2848;
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Send  thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf("%s : Send thread creat fail, Start again\n", "Single_Board_PT2_Autogen_Pattern_Test");
      goto LABEL_32;
    }
    pthread_join(dword_5FE760, 0);
    pthread_join(dword_5FE764, 0);
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      byte_5FE77A = 0;
      pthread_join(dword_5FE770, 0);
      byte_2334AC = 0;
      v6 = *(unsigned __int8 *)(dword_223680 + 89);
      byte_611FD4 = 0;
      if ( v6 )
        pthread_join(dword_5FE76C, 0);
    }
    else
    {
      byte_2334AC = 0;
      byte_611FD4 = 0;
    }
    sub_26F24();
    sub_5C888(dword_21B3A4);
    pthread_join(dword_5FE768, 0);
    if ( !byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264776] )
    {
      v24 = sub_2A28C((unsigned __int8)byte_5FE894);
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf(
        "%s : All test done. STRICT_STANDARD: gPattern_test_counter: %d\n\n",
        "Single_Board_PT2_Autogen_Pattern_Test",
        (unsigned __int8)byte_5FE894);
      snprintf(
        &byte_653F40[4864],
        0x100u,
        "All test done. STRICT_STANDARD: gPattern_test_counter: %d\n",
        (unsigned __int8)byte_5FE894);
      sub_3CC5C((int)&byte_653F40[4864], v46);
      return v24;
    }
    if ( (unsigned __int8)byte_5FE894 >= (unsigned int)(dword_22B69C - 1) )
    {
      sub_29E88(&v41);
      v25 = sub_2A28C(v41);
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf(
        "%s : All test done. Last test loop: gPattern_test_counter: %d\n\n",
        "Single_Board_PT2_Autogen_Pattern_Test",
        (unsigned __int8)byte_5FE894);
      snprintf(
        &byte_653F40[5120],
        0x100u,
        "All test done. Last test loop: gPattern_test_counter: %d\n",
        (unsigned __int8)byte_5FE894);
      sub_3CC5C((int)&byte_653F40[5120], v46);
      return v25;
    }
    ++byte_5FE894;
    puts("\n\n");
    if ( (unsigned __int8)byte_5FE894 >= (unsigned int)dword_22B69C )
      return 0;
  }
  byte_5FE774 = 0;
  byte_5FE77A = 0;
  byte_2334AC = 0;
  byte_611FD4 = 0;
  sub_5C888(dword_21B3A4);
  pthread_join(dword_5FE764, 0);
  pthread_join(dword_5FE770, 0);
  if ( *(_BYTE *)(dword_223680 + 89) )
    pthread_join(dword_5FE76C, 0);
  v28 = pthread_join(dword_5FE768, 0);
  sub_6FBF4(v28);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  if ( *(_DWORD *)(dword_223680 + 64) < (unsigned int)dword_5FE780 )
  {
    v29 = &byte_653F40[3072];
    sub_1F650(1, "get too much");
    LOWORD(v30) = (unsigned __int16)"get too much error asic address";
    sub_1F650(2, "error asic");
    sub_1F650(3, "address");
    sub_1E938(v46, 0x30u);
    printf("%s ", v46);
    printf("%s : get too much error asic address\n", "Single_Board_PT2_Autogen_Pattern_Test");
    goto LABEL_59;
  }
  v43 = 0;
  *(_DWORD *)s = 0;
  v44 = 0;
  v45 = 0;
  sprintf(s, "%2d", dword_5FE780);
  sub_1F650(1, "Only find");
  sub_1F650(2, s);
  sub_1F650(3, "ASIC");
  sub_1E938(v46, 0x30u);
  printf("%s ", v46);
  printf("%s : Only find %d ASIC\n", "Single_Board_PT2_Autogen_Pattern_Test", dword_5FE780);
  snprintf(&byte_653F40[3328], 0x100u, "Only find %d ASIC", dword_5FE780);
  sub_3CC5C((int)&byte_653F40[3328], v46);
LABEL_60:
  result = 2;
  if ( dword_5FE780 )
    return (dword_5FE780 << 8) | 3;
  return result;
}
