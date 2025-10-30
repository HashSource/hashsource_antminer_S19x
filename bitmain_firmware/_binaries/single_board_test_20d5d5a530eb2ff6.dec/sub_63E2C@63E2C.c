int sub_63E2C()
{
  pthread_attr_t *v0; // r3
  int v1; // r4
  unsigned int v2; // r7
  int v3; // r0
  int v4; // r3
  int v5; // r4
  __useconds_t v6; // r0
  int result; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int *v17; // r4
  _DWORD *v18; // r5
  int v19; // r0
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r4
  _DWORD *v25; // r5
  int v26; // r1
  int v27; // r2
  int v28; // r3
  unsigned __int8 v29; // [sp+2Bh] [bp-49h] BYREF
  int v30; // [sp+2Ch] [bp-48h]
  char s[4]; // [sp+30h] [bp-44h] BYREF
  int v32; // [sp+34h] [bp-40h]
  int v33; // [sp+38h] [bp-3Ch]
  int v34; // [sp+3Ch] [bp-38h]
  char v35[52]; // [sp+40h] [bp-34h] BYREF

  byte_5FE894 = 0;
  v29 = 0;
  if ( !dword_22B69C )
    return 0;
  while ( 1 )
  {
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf(
      "%s : Start %s, gPattern_test_counter = %d\n",
      "Single_Board_PT2_Hardware_Pattern_Test",
      "Single_Board_PT2_Hardware_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    snprintf(
      byte_652940,
      0x100u,
      "Start %s, gPattern_test_counter = %d",
      "Single_Board_PT2_Hardware_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    sub_3CC5C((int)byte_652940, v35);
    if ( !sub_5EC4C() )
      return 12;
    sub_6DDF4(2);
    sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 632));
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf("%s : Set fan speed as %d\n", "Single_Board_PT2_Hardware_Pattern_Test", *(_DWORD *)(dword_223680 + 632));
    snprintf(byte_652A40, 0x100u, "Set fan speed as %d", *(_DWORD *)(dword_223680 + 632));
    sub_3CC5C((int)byte_652A40, v35);
    sub_1F408();
    if ( !sub_20CBC() )
    {
      sub_6E9D8(dword_21B3B0, 0);
      return 12;
    }
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf("%s : Set Chain %d baud: %d\n", "Single_Board_PT2_Hardware_Pattern_Test", dword_21B3A4, 26);
    snprintf(byte_652B40, 0x100u, "Set Chain %d baud: %d", dword_21B3A4, 26);
    sub_3CC5C((int)byte_652B40, v35);
    sub_71D60(dword_21B3A4, 26);
    sub_787F0((unsigned __int8)dword_21B3A4);
    byte_5FE775 = 1;
    if ( pthread_create((pthread_t *)&dword_5FE768, 0, (void *(*)(void *))sub_21CAC, 0) )
    {
      byte_5FE775 = 0;
      pthread_join(dword_5FE768, 0);
      v12 = sub_6E9D8(dword_21B3B0, 0);
      sub_6FBF4(v12);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Show thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf("%s : Show thread creat fail, Start again\n", "Single_Board_PT2_Hardware_Pattern_Test");
      strcpy(byte_652C40, "Show thread creat fail, Start again");
      sub_3CC5C((int)byte_652C40, v35);
      return 12;
    }
    if ( !sub_22368() )
    {
      byte_5FE775 = 0;
      pthread_join(dword_5FE768, 0);
      sub_6E9D8(dword_21B3B0, 0);
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf("%s : EEPROM is not ok\n", "Single_Board_PT2_Hardware_Pattern_Test");
      strcpy(byte_652D40, "EEPROM is not ok");
      sub_3CC5C((int)byte_652D40, v35);
      return 5;
    }
    if ( !sub_22A08(dword_6032C0 - 1) )
    {
      byte_5FE775 = 0;
      v9 = pthread_join(dword_5FE768, 0);
      sub_6FBF4(v9);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "EEPROM");
      sub_1F650(2, "Check fail");
      sub_6E9D8(dword_21B3B0, 0);
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf("%s : EEPROM is not ok\n", "Single_Board_PT2_Hardware_Pattern_Test");
      strcpy(byte_652F40, "EEPROM is not ok");
      sub_3CC5C((int)byte_652F40, v35);
      return 11;
    }
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf("%s : EEPROM is ok\n", "Single_Board_PT2_Hardware_Pattern_Test");
    strcpy(byte_652E40, "EEPROM is ok");
    sub_3CC5C((int)byte_652E40, v35);
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
      break;
    if ( !sub_23E18(*(_DWORD *)(dword_223680 + 620)) )
    {
      byte_611FD4 = 0;
      byte_5FE77A = 0;
      byte_2334AC = 0;
      sub_5C888(dword_21B3A4);
      pthread_join(dword_5FE770, 0);
      if ( *(_BYTE *)(dword_223680 + 89) )
        pthread_join(dword_5FE76C, 0);
      v15 = pthread_join(dword_5FE768, 0);
      sub_6FBF4(v15);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "cool fail");
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf("%s : Can't cool down hashboard fail\n", "Single_Board_PT2_Hardware_Pattern_Test");
      strcpy(byte_653140, "Can't cool down hashboard fail");
      sub_3CC5C((int)byte_653140, v35);
      return 12;
    }
LABEL_14:
    if ( !sub_23A5C() )
    {
      byte_611FD4 = 0;
      byte_2334AC = 0;
      byte_5FE77A = 0;
      sub_5C888(dword_21B3A4);
      pthread_join(dword_5FE768, 0);
      result = 1;
      if ( *(_BYTE *)(dword_223680 + 89) )
      {
        pthread_join(dword_5FE76C, 0);
        return 1;
      }
      return result;
    }
    sub_6F42C(dword_21B3A4);
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
      v11 = pthread_join(dword_5FE768, 0);
      sub_6FBF4(v11);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Receive thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf("%s :  Receive thread  creat fail, Start again\n", "Single_Board_PT2_Hardware_Pattern_Test");
      strcpy(byte_653240, " Receive thread  creat fail, Start again");
      sub_3CC5C((int)byte_653240, v35);
      return 12;
    }
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
    {
      sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
      if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
      {
        byte_5FE774 = 0;
        byte_5FE77A = 0;
        byte_611FD4 = 0;
        byte_2334AC = 0;
        sub_5C888(dword_21B3A4);
        pthread_join(dword_5FE764, 0);
        pthread_join(dword_5FE770, 0);
        if ( *(_BYTE *)(dword_223680 + 89) )
          pthread_join(dword_5FE76C, 0);
        v16 = pthread_join(dword_5FE768, 0);
        sub_6FBF4(v16);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        if ( *(_DWORD *)(dword_223680 + 64) < (unsigned int)dword_5FE780 )
        {
          LOWORD(v17) = (unsigned __int16)"get too much error asic address";
          sub_1F650(1, "get too much");
          v18 = &unk_653340;
          sub_1F650(2, "error asic");
          sub_1F650(3, "address");
          sub_1E938(v35, 0x30u);
          printf("%s ", v35);
          printf("%s : get too much error asic address\n", "Single_Board_PT2_Hardware_Pattern_Test");
          goto LABEL_69;
        }
        v32 = 0;
        *(_DWORD *)s = 0;
        v33 = 0;
        v34 = 0;
        sprintf(s, "%2d", dword_5FE780);
        sub_1F650(1, "Only find");
        sub_1F650(2, s);
        sub_1F650(3, "ASIC");
        sub_1E938(v35, 0x30u);
        printf("%s ", v35);
        printf("%s : Only find %d ASIC\n", "Single_Board_PT2_Hardware_Pattern_Test", dword_5FE780);
        snprintf(byte_653440, 0x100u, "Only find %d ASIC", dword_5FE780);
        sub_3CC5C((int)byte_653440, v35);
LABEL_65:
        result = 2;
        if ( dword_5FE780 )
          return (dword_5FE780 << 8) | 3;
        return result;
      }
    }
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf("%s : First: find %d ASIC\n\n", "Single_Board_PT2_Hardware_Pattern_Test", dword_5FE780);
    snprintf(byte_653540, 0x100u, "First: find %d ASIC\n", dword_5FE780);
    sub_3CC5C((int)byte_653540, v35);
    sub_7771C((unsigned __int8)dword_21B3A4);
    usleep(0x2710u);
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf("%s : Set asic address\n", "Single_Board_PT2_Hardware_Pattern_Test");
    strcpy(byte_653640, "Set asic address");
    sub_3CC5C((int)byte_653640, v35);
    sub_77720((unsigned __int8)dword_21B3A4, dword_6084C8);
    usleep(0x2710u);
    sub_784E8(
      (unsigned __int8)dword_21B3A4,
      *(unsigned __int8 *)(dword_223680 + 596),
      *(unsigned __int8 *)(dword_223680 + 600));
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf(
      "%s : Set pulse_mode = 0x%02x, clk_sel = 0x%02x\n",
      "Single_Board_PT2_Hardware_Pattern_Test",
      *(_DWORD *)(dword_223680 + 596),
      *(_DWORD *)(dword_223680 + 600));
    snprintf(
      byte_653740,
      0x100u,
      "Set pulse_mode = 0x%02x, clk_sel = 0x%02x",
      *(_DWORD *)(dword_223680 + 596),
      *(_DWORD *)(dword_223680 + 600));
    sub_3CC5C((int)byte_653740, v35);
    usleep(0x2710u);
    sub_78510(
      (unsigned __int8)dword_21B3A4,
      *(unsigned __int8 *)(dword_223680 + 588),
      *(unsigned __int8 *)(dword_223680 + 584),
      *(unsigned __int8 *)(dword_223680 + 592));
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf(
      "%s : Set pwth_sel = 0x%02x, ccdly_sel = 0x%02x, swpf_mode = 0x%02x\n",
      "Single_Board_PT2_Hardware_Pattern_Test",
      *(_DWORD *)(dword_223680 + 588),
      *(_DWORD *)(dword_223680 + 584),
      *(_DWORD *)(dword_223680 + 592));
    snprintf(
      &byte_653740[256],
      0x100u,
      "Set pwth_sel = 0x%02x, ccdly_sel = 0x%02x, swpf_mode = 0x%02x",
      *(_DWORD *)(dword_223680 + 588),
      *(_DWORD *)(dword_223680 + 584),
      *(_DWORD *)(dword_223680 + 592));
    sub_3CC5C((int)&byte_653740[256], v35);
    usleep(0x2710u);
    sub_5F6A0((unsigned __int8)dword_6084C8);
    usleep(0x2710u);
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
        v19 = pthread_join(dword_5FE768, 0);
        sub_6FBF4(v19);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        if ( *(_DWORD *)(dword_223680 + 64) < (unsigned int)dword_5FE780 )
        {
          v18 = &unk_653940;
          sub_1F650(1, "get too much");
          LOWORD(v17) = 10024;
          sub_1F650(2, "error asic");
          sub_1F650(3, "address");
          sub_1E938(v35, 0x30u);
          printf("%s ", v35);
          printf("%s : get too much error asic address\n", "Single_Board_PT2_Hardware_Pattern_Test");
LABEL_69:
          HIWORD(v17) = (unsigned int)"get too much error asic address" >> 16;
          v20 = *v17;
          v21 = v17[1];
          v22 = v17[2];
          v23 = v17[3];
          v24 = v17 + 4;
          *v18 = v20;
          v18[1] = v21;
          v18[2] = v22;
          v18[3] = v23;
          v25 = v18 + 4;
          v26 = v24[1];
          v27 = v24[2];
          v28 = v24[3];
          *v25 = *v24;
          v25[1] = v26;
          v25[2] = v27;
          v25[3] = v28;
          sub_3CC5C((int)(v25 - 4), v35);
        }
        else
        {
          v32 = 0;
          *(_DWORD *)s = 0;
          v33 = 0;
          v34 = 0;
          sprintf(s, "%2d", dword_5FE780);
          sub_1F650(1, "Only find");
          sub_1F650(2, s);
          sub_1F650(3, "ASIC");
          sub_1E938(v35, 0x30u);
          printf("%s ", v35);
          printf("%s : Only find %d ASIC\n", "Single_Board_PT2_Hardware_Pattern_Test", dword_5FE780);
          snprintf(byte_653A40, 0x100u, "Only find %d ASIC", dword_5FE780);
          sub_3CC5C((int)byte_653A40, v35);
        }
        goto LABEL_65;
      }
    }
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf("%s : Second: find %d ASIC\n\n", "Single_Board_PT2_Hardware_Pattern_Test", dword_5FE780);
    v2 = 0;
    snprintf(byte_653B40, 0x100u, "Second: find %d ASIC\n", dword_5FE780);
    sub_3CC5C((int)byte_653B40, v35);
    v30 = 0;
    sub_787A8((unsigned __int8)dword_21B3A4, 0, 0);
    usleep(0x186A0u);
    sub_77D08((unsigned __int8)dword_21B3A4, 0, *(float *)(dword_223680 + 16 * (unsigned __int8)byte_5FE894 + 348));
    usleep(0x186A0u);
    sub_77988((unsigned __int8)dword_21B3A4, 1, 0);
    usleep(0x2710u);
    sub_7819C((unsigned __int8)dword_21B3A4);
    usleep(0x2710u);
    sub_78510((unsigned __int8)dword_21B3A4, 0, 0, 1);
    usleep(0x2710u);
    sub_78084((unsigned __int8)dword_21B3A4, 0);
    usleep(0x2710u);
    sub_78224((unsigned __int8)dword_21B3A4, *(unsigned __int8 *)(dword_223680 + 312));
    v3 = sub_2A5D0(*(_DWORD *)(dword_223680 + 16 * (unsigned __int8)byte_5FE894 + 348), dword_6140E0, dword_6140DC);
    sub_7820C((unsigned __int8)dword_21B3A4, v3 + 10);
    usleep(0x2710u);
    v4 = dword_223680;
    if ( *(_DWORD *)(dword_223680 + 312) )
    {
      do
      {
        dword_6084C4 = 0;
        v5 = 10;
        sub_7824C((unsigned __int8)dword_21B3A4);
        v6 = (__useconds_t)&loc_249EE + 2;
        while ( 1 )
        {
          usleep(v6);
          sub_24C80(0, 4, 1, (const char *)(dword_223680 + 48));
          v6 = 1000;
          if ( *(_DWORD *)(dword_223680 + 64) == dword_6084C4 )
            break;
          if ( !--v5 )
          {
            sub_1E938(v35, 0x30u);
            printf("%s ", v35);
            printf("%s : Hardware sweep: triger_counter %d fail\n", "Single_Board_PT2_Hardware_Pattern_Test", v2);
            snprintf(byte_653D40, 0x100u, "Hardware sweep: triger_counter %d fail", v2);
            sub_3CC5C((int)byte_653D40, v35);
            goto LABEL_25;
          }
        }
        sub_1E938(v35, 0x30u);
        printf("%s ", v35);
        printf("%s : Hardware sweep: triger_counter %d done\n", "Single_Board_PT2_Hardware_Pattern_Test", v2);
        snprintf(byte_653C40, 0x100u, "Hardware sweep: triger_counter %d done", v2);
        sub_3CC5C((int)byte_653C40, v35);
LABEL_25:
        ++v2;
        usleep(0x3E8u);
        v4 = dword_223680;
      }
      while ( *(_DWORD *)(dword_223680 + 312) > v2 );
    }
    sub_24C80(0, 5, 1, (const char *)(v4 + 48));
    sub_78510((unsigned __int8)dword_21B3A4, 0, 0, 0);
    usleep(0x3E8u);
    sub_78164((unsigned __int8)dword_21B3A4);
    usleep(0x3E8u);
    sub_781D4((unsigned __int8)dword_21B3A4);
    usleep(0x3E8u);
    byte_5FE774 = 0;
    pthread_join(dword_5FE764, 0);
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      byte_5FE77A = 0;
      pthread_join(dword_5FE770, 0);
      byte_2334AC = 0;
      v8 = *(unsigned __int8 *)(dword_223680 + 89);
      byte_611FD4 = 0;
      if ( v8 )
        pthread_join(dword_5FE76C, 0);
    }
    else
    {
      byte_2334AC = 0;
      byte_611FD4 = 0;
    }
    sub_2A640();
    sub_5C888(dword_21B3A4);
    pthread_join(dword_5FE768, 0);
    if ( !byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 264776] )
    {
      v10 = sub_2A28C((unsigned __int8)byte_5FE894);
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf(
        "%s : All test done. STRICT_STANDARD: gPattern_test_counter: %d\n\n",
        "Single_Board_PT2_Hardware_Pattern_Test",
        (unsigned __int8)byte_5FE894);
      snprintf(
        byte_653E40,
        0x100u,
        "All test done. STRICT_STANDARD: gPattern_test_counter: %d\n",
        (unsigned __int8)byte_5FE894);
      sub_3CC5C((int)byte_653E40, v35);
      return v10;
    }
    if ( (unsigned __int8)byte_5FE894 >= (unsigned int)(dword_22B69C - 1) )
    {
      sub_29E88(&v29);
      v13 = sub_2A28C(v29);
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf(
        "%s : All test done. Last test loop: gPattern_test_counter: %d\n\n",
        "Single_Board_PT2_Hardware_Pattern_Test",
        (unsigned __int8)byte_5FE894);
      snprintf(
        byte_653F40,
        0x100u,
        "All test done. Last test loop: gPattern_test_counter: %d\n",
        (unsigned __int8)byte_5FE894);
      sub_3CC5C((int)byte_653F40, v35);
      return v13;
    }
    puts("\n\n");
    if ( (unsigned __int8)byte_5FE894 >= (unsigned int)dword_22B69C )
      return 0;
  }
  byte_5FE77A = 0;
  byte_2334AC = 0;
  byte_611FD4 = 0;
  sub_5C888(dword_21B3A4);
  pthread_join(dword_5FE770, 0);
  if ( *(_BYTE *)(dword_223680 + 89) )
    pthread_join(dword_5FE76C, 0);
  v14 = pthread_join(dword_5FE768, 0);
  sub_6FBF4(v14);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "Read PIC Temp");
  sub_1F650(2, "thread  fail");
  sub_1F650(3, aStartAg);
  sub_1E938(v35, 0x30u);
  printf("%s ", v35);
  printf("%s : Receive thread creat fail, Start again\n", "Single_Board_PT2_Hardware_Pattern_Test");
  strcpy(byte_653040, "Receive thread creat fail, Start again");
  sub_3CC5C((int)byte_653040, v35);
  return 12;
}
