int __fastcall sub_6805C(int a1)
{
  int result; // r0
  int v2; // r0
  int v3; // r0
  pthread_attr_t *v4; // r3
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r2
  int v9; // r4
  int v10; // r11
  int v11; // r0
  int v12; // r11
  int v13; // r3
  int v14; // r11
  int v15; // r1
  int v16; // r11
  int v17; // r3
  int v18; // r7
  int v19; // r0
  int v20; // r7
  int v21; // r0
  int v22; // r4
  unsigned int v23; // r10
  int v24; // r9
  int v25; // r2
  int v26; // r9
  int v27; // r0
  bool v28; // zf
  int v29; // r9
  int v30; // r3
  int v31; // r9
  int v32; // r1
  int v33; // r1
  const char *v34; // r4
  int v35; // r4
  int v36; // r9
  unsigned __int8 v37; // r0
  int v38; // r4
  int v39; // r2
  int v40; // r3
  int v41; // r1
  _BYTE *v42; // r2
  _BYTE *v43; // r3
  int v44; // t1
  int v45; // r7
  int v46; // r0
  int v47; // r7
  _DWORD *v48; // r5
  int v49; // r0
  const char *v50; // r4
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int *v55; // r4
  _DWORD *v56; // r5
  int v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r4
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r4
  int v68; // r0
  int v69; // r0
  int v70; // [sp+20h] [bp-6Ch]
  int v71; // [sp+2Ch] [bp-60h]
  unsigned __int8 v72; // [sp+47h] [bp-45h] BYREF
  char s[4]; // [sp+48h] [bp-44h] BYREF
  int v74; // [sp+4Ch] [bp-40h]
  int v75; // [sp+50h] [bp-3Ch]
  int v76; // [sp+54h] [bp-38h]
  char v77[52]; // [sp+58h] [bp-34h] BYREF

  byte_5FE894 = 0;
  v72 = 0;
  sub_6FBF4(a1);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "waiting...");
  if ( !sub_2BBA8() )
  {
    sub_6FBF4(0);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Power is not");
    sub_1F650(2, "calibrated");
    sub_5C888(dword_21B3A4);
    return 12;
  }
  sub_5C888(dword_21B3A4);
  sub_71AF4(dword_21B3A4);
  sleep(1u);
  if ( (unsigned __int8)byte_5FE894 >= (unsigned int)dword_22B69C )
    return 0;
  v70 = 0xFFFF;
  v71 = 1;
  while ( 2 )
  {
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf(
      "%s : Start %s, gPattern_test_counter = %d\n",
      "Single_Board_PT2_Super_Software_Pattern_Test",
      "Single_Board_PT2_Super_Software_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    snprintf(
      byte_658340,
      0x100u,
      "Start %s, gPattern_test_counter = %d",
      "Single_Board_PT2_Super_Software_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    sub_3CC5C((int)byte_658340, v77);
    if ( !sub_5EC4C() )
      return 12;
    v2 = sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 632));
    sub_6FBF4(v2);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Context init");
    sub_1F650(2, "waiting...");
    sub_5C888(dword_21B3A4);
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf(
      "%s : Set fan speed as %d\n",
      "Single_Board_PT2_Super_Software_Pattern_Test",
      *(_DWORD *)(dword_223680 + 632));
    snprintf(byte_658440, 0x100u, "Set fan speed as %d", *(_DWORD *)(dword_223680 + 632));
    sub_3CC5C((int)byte_658440, v77);
    sub_1F408();
    if ( !sub_20CBC() )
    {
      sub_6E9D8(dword_21B3B0, 0);
      return 12;
    }
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf("%s : Set Chain %d baud: %d\n", "Single_Board_PT2_Super_Software_Pattern_Test", dword_21B3A4, 26);
    snprintf(byte_658540, 0x100u, "Set Chain %d baud: %d", dword_21B3A4, 26);
    sub_3CC5C((int)byte_658540, v77);
    sub_71D60(dword_21B3A4, 26);
    sub_787F0((unsigned __int8)dword_21B3A4);
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf("%s : test reset_register_cache_value_to_default end\n", "Single_Board_PT2_Super_Software_Pattern_Test");
    strcpy(byte_658640, "test reset_register_cache_value_to_default end");
    sub_3CC5C((int)byte_658640, v77);
    sub_71AF4(dword_21B3A4);
    sleep(1u);
    byte_5FE775 = 1;
    v3 = pthread_create((pthread_t *)&dword_5FE768, 0, (void *(*)(void *))sub_21CAC, 0);
    if ( v3 )
    {
      v47 = v3;
      sub_1E938(v77, 0x30u);
      v48 = &unk_658840;
      printf("%s ", v77);
      printf("%s : start thread PT2_show_status_func failed %d\n", "Single_Board_PT2_Super_Software_Pattern_Test", v47);
      snprintf(byte_658740, 0x100u, "start thread PT2_show_status_func failed %d", v47);
      sub_3CC5C((int)byte_658740, v77);
      sub_631A0();
      v49 = sub_6E9D8(dword_21B3B0, 0);
      sub_6FBF4(v49);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      v50 = "Show thread creat fail, Start again";
      sub_1F650(1, "Show thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : Show thread creat fail, Start again\n", "Single_Board_PT2_Super_Software_Pattern_Test");
LABEL_93:
      v51 = *(_DWORD *)v50;
      v52 = *((_DWORD *)v50 + 1);
      v53 = *((_DWORD *)v50 + 2);
      v54 = *((_DWORD *)v50 + 3);
      v55 = (int *)(v50 + 16);
      *v48 = v51;
      v48[1] = v52;
      v48[2] = v53;
      v48[3] = v54;
      v56 = v48 + 4;
      v57 = *v55;
      v58 = v55[1];
      v59 = v55[2];
      v60 = v55[3];
      v61 = v55[4];
      *v56 = v57;
      v56[1] = v58;
      v56[2] = v59;
      v56[3] = v60;
      v56 += 4;
      *v56 = v61;
      sub_3CC5C((int)(v56 - 8), v77);
      return 12;
    }
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf(
      "%s : test pthread_create  PT2_show_status_func end, counter:%d\n",
      "Single_Board_PT2_Super_Software_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    snprintf(
      byte_658940,
      0x100u,
      "test pthread_create  PT2_show_status_func end, counter:%d",
      (unsigned __int8)byte_5FE894);
    sub_3CC5C((int)byte_658940, v77);
    byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 2] = 1;
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf("%s : test init_pic start\n", "Single_Board_PT2_Super_Software_Pattern_Test");
    strcpy(byte_658A40, "test init_pic start");
    sub_3CC5C((int)byte_658A40, v77);
    if ( *(_BYTE *)(dword_223680 + 89) && !sub_23588() )
    {
      byte_5FE775 = 0;
      sub_6E9D8(dword_21B3B0, 0);
      pthread_join(dword_5FE768, 0);
      return 1;
    }
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf("%s : test init_pic end\n", "Single_Board_PT2_Super_Software_Pattern_Test");
    strcpy(byte_658B40, "test init_pic end");
    sub_3CC5C((int)byte_658B40, v77);
    v4 = (pthread_attr_t *)*(unsigned __int8 *)(dword_223680 + 89);
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      byte_5FE77A = 1;
      v5 = pthread_create((pthread_t *)&dword_5FE770, 0, (void *(*)(void *))sub_24160, 0);
    }
    else
    {
      if ( !*(_BYTE *)(dword_223680 + 88) )
      {
        v45 = *(unsigned __int8 *)(dword_223680 + 90);
        if ( !*(_BYTE *)(dword_223680 + 90) )
        {
          sub_5C888(dword_21B3A4);
          v46 = sub_631A0();
          sub_6FBF4(v46);
          sub_1F650(v45, (const char *)(dword_223680 + 32));
          sub_1F650(1, "config error");
          sub_1F650(2, "only support");
          sub_1F650(3, "pic sensor");
          sub_1E938(v77, 0x30u);
          printf("%s ", v77);
          printf(
            "%s : Sensor_Info.Read_Temperature_From_Pic not enabled\n",
            "Single_Board_PT2_Super_Software_Pattern_Test");
          strcpy(byte_659540, "Sensor_Info.Read_Temperature_From_Pic not enabled");
          sub_3CC5C((int)byte_659540, v77);
          return 12;
        }
        goto LABEL_14;
      }
      byte_611FD4 = 1;
      v5 = pthread_create((pthread_t *)&dword_5FE770, v4, (void *(*)(void *))sub_2B524, v4);
    }
    if ( v5 )
    {
      sub_5C888(dword_21B3A4);
      v62 = sub_631A0();
      sub_6FBF4(v62);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Read PIC Temp");
      sub_1F650(2, "thread  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : Receive thread creat fail, Start again\n", "Single_Board_PT2_Super_Software_Pattern_Test");
      strcpy(byte_658C40, "Receive thread creat fail, Start again");
      sub_3CC5C((int)byte_658C40, v77);
      return 12;
    }
LABEL_14:
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf("%s : wait for reading temp from ctrl board.\n", "Single_Board_PT2_Super_Software_Pattern_Test");
    strcpy(byte_658D40, "wait for reading temp from ctrl board.");
    sub_3CC5C((int)byte_658D40, v77);
    while ( !byte_5FE779 )
      sleep(1u);
    sub_2B408();
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    v6 = sub_1F79C(
           (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
           (unsigned __int8)dword_227094);
    v7 = sub_2B3A8();
    v8 = v6;
    v9 = 301;
    printf("%s : env temp,min temp:%d,max temp:%d\n", "Single_Board_PT2_Super_Software_Pattern_Test", v8, v7);
    v10 = sub_1F79C(
            (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
            (unsigned __int8)dword_227094);
    v11 = sub_2B3A8();
    snprintf(byte_658E40, 0x100u, "env temp,min temp:%d,max temp:%d", v10, v11);
    sub_3CC5C((int)byte_658E40, v77);
    byte_5FE776 = 1;
    while ( 1 )
    {
      v16 = sub_2B3A8();
      v17 = sub_62120() ? 47 : 25;
      if ( v17 >= v16 )
        break;
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      v12 = sub_2B3A8();
      if ( sub_62120() )
        v13 = 47;
      else
        v13 = 25;
      printf("%s : wait temp down,max:%d,target:%d\n", "Single_Board_PT2_Super_Software_Pattern_Test", v12, v13);
      v14 = sub_2B3A8();
      if ( sub_62120() )
        v15 = 47;
      else
        v15 = 25;
      snprintf(byte_658F40, 0x100u, "wait temp down,max:%d,target:%d", v14, v15);
      sub_3CC5C((int)byte_658F40, v77);
      sleep(1u);
      if ( !--v9 )
      {
        sub_2146C("Cooldown", "Hashboard", "Failed");
        return 12;
      }
    }
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    v18 = sub_1F79C(
            (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
            (unsigned __int8)dword_227094);
    v19 = sub_2B3A8();
    printf("%s : cur env,min temp:%d,max temp:%d\n", "Single_Board_PT2_Super_Software_Pattern_Test", v18, v19);
    v20 = sub_1F79C(
            (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
            (unsigned __int8)dword_227094);
    v21 = sub_2B3A8();
    snprintf(byte_659040, 0x100u, "cur env,min temp:%d,max temp:%d", v20, v21);
    sub_3CC5C((int)byte_659040, v77);
    sub_6E9D8(dword_21B3B0, 100);
    if ( !sub_23E18(*(_DWORD *)(dword_223680 + 620)) )
    {
      sub_5C888(dword_21B3A4);
      v64 = sub_631A0();
      sub_6FBF4(v64);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "cool fail");
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : Can't cool down hashboard fail\n", "Single_Board_PT2_Super_Software_Pattern_Test");
      strcpy(byte_659140, "Can't cool down hashboard fail");
      sub_3CC5C((int)byte_659140, v77);
      return 12;
    }
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      v70 = sub_1F79C(
              (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264770],
              (unsigned __int8)dword_226084);
    }
    else if ( *(_BYTE *)(dword_223680 + 88) )
    {
      v70 = sub_1F79C(
              (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
              (unsigned __int8)dword_227094);
    }
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf("%s : ENV TEMP %d\n", "Single_Board_PT2_Super_Software_Pattern_Test", v70);
    snprintf(byte_659240, 0x100u, "ENV TEMP %d", v70);
    sub_3CC5C((int)byte_659240, v77);
    byte_5FE776 = 0;
    if ( v70 > 35 )
    {
      sub_5C888(dword_21B3A4);
      v63 = sub_631A0();
      sub_6FBF4(v63);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "temperature high");
      *(_DWORD *)s = 0;
      v74 = 0;
      v75 = 0;
      v76 = 0;
      sprintf(s, "Now %d C", v70);
      sub_1F650(2, s);
      sub_1F650(3, "cool ENV");
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : ENV temperature too high\n", "Single_Board_PT2_Super_Software_Pattern_Test");
      strcpy(byte_659340, "ENV temperature too high");
      sub_3CC5C((int)byte_659340, v77);
      return 12;
    }
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf("%s : env_temp:%d\n", "Single_Board_PT2_Super_Software_Pattern_Test", v70);
    snprintf(byte_659440, 0x100u, "env_temp:%d", v70);
    sub_3CC5C((int)byte_659440, v77);
    sub_6E9D8(dword_21B3B0, 30);
    sub_2146C("Power on", "waiting...", 0);
    sub_71AF4(dword_21B3A4);
    usleep(0x30D40u);
    if ( !sub_22D88(*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32]) )
    {
      sub_5C888(dword_21B3A4);
      sub_631A0();
      return 12;
    }
    usleep(0x30D40u);
    sub_71B24(dword_21B3A4);
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      if ( !sub_23A5C() )
      {
        byte_2334AC = 0;
        byte_611FD4 = 0;
        sub_5C888(dword_21B3A4);
        sub_631A0();
        return 1;
      }
    }
    else
    {
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : delay 700ms before check asic num\n", "Single_Board_PT2_Super_Software_Pattern_Test");
      strcpy(byte_659640, "delay 700ms before check asic num");
      sub_3CC5C((int)byte_659640, v77);
      usleep(0xAAE60u);
      sub_71AF4(dword_21B3A4);
      usleep(0x2710u);
      sub_71B24(dword_21B3A4);
      usleep(0x186A0u);
      sub_71AF4(dword_21B3A4);
      usleep(0x2710u);
      sub_71B24(dword_21B3A4);
      usleep(0x2710u);
    }
    sub_5F7C8();
    byte_5FE774 = 1;
    if ( pthread_create((pthread_t *)&dword_5FE764, 0, (void *(*)(void *))sub_60228, 0) )
    {
      sub_5C888(dword_21B3A4);
      v65 = sub_631A0();
      sub_6FBF4(v65);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Receive thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s :  Receive thread  creat fail, Start again\n", "Single_Board_PT2_Super_Software_Pattern_Test");
      strcpy(byte_659740, " Receive thread  creat fail, Start again");
      sub_3CC5C((int)byte_659740, v77);
      return 12;
    }
    usleep((__useconds_t)&loc_AAE60);
    sub_71AF4(dword_21B3A4);
    usleep(0x2710u);
    sub_71B24(dword_21B3A4);
    usleep(0x186A0u);
    sub_71AF4(dword_21B3A4);
    usleep(0x2710u);
    sub_71B24(dword_21B3A4);
    usleep(0x2710u);
    sub_778F0((unsigned __int8)dword_21B3A4, 0xFFFF);
    sub_6F42C(dword_21B3A4);
    usleep(0xC350u);
    sub_2B408();
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    if ( *(_DWORD *)(dword_223680 + 64) == dword_5FE780
      || (sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48)), *(_DWORD *)(dword_223680 + 64) == dword_5FE780) )
    {
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : First: find %d ASIC\n\n", "Single_Board_PT2_Super_Software_Pattern_Test", dword_5FE780);
      v22 = 0;
      snprintf(byte_659A40, 0x100u, "First: find %d ASIC\n", dword_5FE780);
      sub_3CC5C((int)byte_659A40, v77);
      sub_5F848();
      v23 = sub_5BBF8(*(_DWORD *)(dword_223680 + 16 * (unsigned __int8)byte_5FE894 + 348));
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf(
        "%s : Set chain frequency[+Freq_Flex] as %d,target freq:%d\n",
        "Single_Board_PT2_Super_Software_Pattern_Test",
        v23,
        *(_DWORD *)(dword_223680 + 16 * (unsigned __int8)byte_5FE894 + 348));
      snprintf(
        byte_659B40,
        0x100u,
        "Set chain frequency[+Freq_Flex] as %d,target freq:%d",
        v23,
        *(_DWORD *)(dword_223680 + 16 * (unsigned __int8)byte_5FE894 + 348));
      sub_3CC5C((int)byte_659B40, v77);
      sub_5FAAC(0x32u, v23);
      sub_5FC1C();
      usleep(0xF4240u);
      sub_77988((unsigned __int8)dword_21B3A4, 1, 0);
      byte_5FE777 = 1;
      sub_6E9D8(dword_21B3B0, 30);
      while ( 1 )
      {
        v26 = sub_2B3A8();
        v27 = sub_62120() ? 47 : 25;
        if ( v27 <= v26 )
          break;
        v28 = v22 == 10 * (v22 / 10);
        ++v22;
        if ( v28 )
        {
          sub_1E938(v77, 0x30u);
          printf("%s ", v77);
          v29 = sub_2B3A8();
          if ( sub_62120() )
            v30 = 47;
          else
            v30 = 25;
          printf("%s : wait temp,max:%d,target:%d\n", "Single_Board_PT2_Super_Software_Pattern_Test", v29, v30);
          v31 = sub_2B3A8();
          if ( sub_62120() )
            v32 = 47;
          else
            v32 = 25;
          snprintf(byte_659C40, 0x100u, "wait temp,max:%d,target:%d", v31, v32);
          sub_3CC5C((int)byte_659C40, v77);
        }
        v24 = sub_2B3A8();
        if ( sub_62120() )
          v25 = 42;
        else
          v25 = 20;
        if ( v25 <= v24 )
          sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 636));
        sleep(1u);
        if ( v22 == 301 )
        {
          sub_2146C("Heating", "Hashboard", "Failed");
          return 12;
        }
      }
      v33 = *(_DWORD *)(dword_223680 + 636);
      byte_5FE777 = 0;
      sub_6E9D8(dword_21B3B0, v33);
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf(
        "%s : set work fan speed %d\n",
        "Single_Board_PT2_Super_Software_Pattern_Test",
        *(_DWORD *)(dword_223680 + 636));
      snprintf(byte_659D40, 0x100u, "set work fan speed %d", *(_DWORD *)(dword_223680 + 636));
      sub_3CC5C((int)byte_659D40, v77);
      sub_2146C("Set Voltage", "waiting", 0);
      v34 = (const char *)(dword_223680 + 32);
      if ( !strcmp((const char *)(dword_223680 + 32), "NBT2006-36") )
      {
        if ( !sub_3C404(
                v34,
                (unsigned __int8)dword_21B3A4,
                *(_DWORD *)&byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 32],
                *(_DWORD *)&byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 28],
                5u) )
        {
          sub_5C888(dword_21B3A4);
          sub_631A0();
          sub_1E938(v77, 0x30u);
          printf("%s ", v77);
          printf("%s : set dac voltage step by step fail\n", "Single_Board_PT2_Super_Software_Pattern_Test");
          strcpy(byte_659E40, "set dac voltage step by step fail");
          sub_3CC5C((int)byte_659E40, v77);
          return 12;
        }
      }
      else
      {
        v35 = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 28];
        sub_1E938(v77, 0x30u);
        printf("%s ", v77);
        printf("%s : Target vol after compensate:%d\n", "Single_Board_PT2_Super_Software_Pattern_Test", v35);
        snprintf(byte_659F40, 0x100u, "Target vol after compensate:%d", v35);
        sub_3CC5C((int)byte_659F40, v77);
        if ( *(_BYTE *)(dword_223680 + 245) )
        {
          v36 = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32];
          v37 = sub_189090(v36 - v35, *(_DWORD *)(dword_223680 + 252));
          sub_231D4(v36, v35, v37);
        }
        else
        {
          sub_231D4(*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32], v35, 5);
        }
      }
      sub_2B408();
      sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
      if ( *(_DWORD *)(dword_223680 + 64) == dword_5FE780
        || (sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48)), *(_DWORD *)(dword_223680 + 64) == dword_5FE780) )
      {
        sub_1E938(v77, 0x30u);
        printf("%s ", v77);
        printf("%s : Second: find %d ASIC\n\n", "Single_Board_PT2_Super_Software_Pattern_Test", dword_5FE780);
        snprintf(byte_65A240, 0x100u, "Second: find %d ASIC\n", dword_5FE780);
        sub_3CC5C((int)byte_65A240, v77);
        byte_5FE778 = 1;
        printf(
          "temp before send pattern: %d\n",
          (char)byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264775]);
        if ( *(_BYTE *)(dword_223680 + 276) )
          v38 = pthread_create((pthread_t *)&dword_5FE760, 0, (void *(*)(void *))sub_67C08, 0);
        else
          v38 = pthread_create(
                  (pthread_t *)&dword_5FE760,
                  (const pthread_attr_t *)*(unsigned __int8 *)(dword_223680 + 276),
                  (void *(*)(void *))sub_5C618,
                  (void *)*(unsigned __int8 *)(dword_223680 + 276));
        if ( !v38 )
        {
          pthread_join(dword_5FE760, 0);
          sub_24C80(0, 14, 1, (const char *)(dword_223680 + 48));
          printf(
            "temp after check nonce: %d\n",
            (char)byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264775]);
          byte_5FE774 = 0;
          sub_1E938(v77, 0x30u);
          printf("%s ", v77);
          printf("%s : Stop receive thread\n", "Single_Board_PT2_Super_Software_Pattern_Test");
          strcpy(byte_65A440, "Stop receive thread");
          sub_3CC5C((int)byte_65A440, v77);
          pthread_join(dword_5FE764, 0);
          byte_611FD4 = 0;
          byte_5FE77A = 0;
          byte_2334AC = 0;
          pthread_join(dword_5FE770, 0);
          if ( *(_BYTE *)(dword_223680 + 89) )
            pthread_join(dword_5FE76C, 0);
          if ( byte_5FE78C )
          {
            if ( dword_226084 )
            {
              v39 = 264784 * (unsigned __int8)byte_5FE894;
              v40 = v39 + 264192;
              v41 = v71;
              v42 = &byte_2337B0[v39 + 264751 + dword_226084];
              v43 = &byte_2337B0[v40 + 559];
              do
              {
                v44 = (unsigned __int8)*++v43;
                v41 &= v44;
              }
              while ( v43 != v42 );
              v71 = v41;
            }
            if ( v71 )
            {
              sub_1E938(v77, 0x30u);
              printf("%s ", v77);
              printf("%s : All PIC sensor OK\n", "Single_Board_PT2_Super_Software_Pattern_Test");
              strcpy(byte_65A540, "All PIC sensor OK");
              sub_3CC5C((int)byte_65A540, v77);
              byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 3] = 1;
            }
          }
          else
          {
            sub_2BD14();
          }
          sub_5C888(dword_21B3A4);
          pthread_join(dword_5FE768, 0);
          if ( (unsigned __int8)byte_5FE894 >= (unsigned int)(dword_22B69C - 1) )
          {
            sub_29E88(&v72);
            v67 = sub_2A28C(v72);
            sub_1E938(v77, 0x30u);
            printf("%s ", v77);
            printf(
              "%s : All test done. Last test loop: gPattern_test_counter: %d\n\n",
              "Single_Board_PT2_Super_Software_Pattern_Test",
              (unsigned __int8)byte_5FE894);
            snprintf(
              byte_65A640,
              0x100u,
              "All test done. Last test loop: gPattern_test_counter: %d\n",
              (unsigned __int8)byte_5FE894);
            sub_3CC5C((int)byte_65A640, v77);
            return v67;
          }
          ++byte_5FE894;
          puts("\n\n");
          if ( (unsigned __int8)byte_5FE894 < (unsigned int)dword_22B69C )
            continue;
          return 0;
        }
        pthread_cancel(dword_5FE760);
        byte_5FE774 = 0;
        v48 = &unk_65A340;
        sub_5C888(dword_21B3A4);
        byte_2334AC = 0;
        byte_611FD4 = 0;
        byte_5FE775 = 0;
        byte_5FE77A = 0;
        v66 = sub_631A0();
        sub_6FBF4(v66);
        v50 = (const char *)&unk_1A2848;
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "Send  thread");
        sub_1F650(2, "Creat  fail");
        sub_1F650(3, aStartAg);
        sub_1E938(v77, 0x30u);
        printf("%s ", v77);
        printf("%s : Send thread creat fail, Start again\n", "Single_Board_PT2_Super_Software_Pattern_Test");
        goto LABEL_93;
      }
      byte_5FE774 = 0;
      sub_5C888(dword_21B3A4);
      v69 = sub_631A0();
      sub_6FBF4(v69);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      if ( *(_DWORD *)(dword_223680 + 64) >= (unsigned int)dword_5FE780 )
      {
        sub_60414();
        *(_DWORD *)s = 0;
        v74 = 0;
        v75 = 0;
        v76 = 0;
        sprintf(s, "%2d", dword_5FE780);
        sub_1F650(1, "Only find");
        sub_1F650(2, s);
        sub_1F650(3, "ASIC");
        sub_1E938(v77, 0x30u);
        printf("%s ", v77);
        printf("%s : Second Only find %d ASIC\n", "Single_Board_PT2_Super_Software_Pattern_Test", dword_5FE780);
        snprintf(byte_65A140, 0x100u, "Second Only find %d ASIC", dword_5FE780);
        sub_3CC5C((int)byte_65A140, v77);
      }
      else
      {
        sub_1F650(1, "get too much");
        sub_1F650(2, "error asic");
        sub_1F650(3, "address");
        sub_1E938(v77, 0x30u);
        printf("%s ", v77);
        printf(
          "%s : ERROR:error asic num outof %d !!!\n",
          "Single_Board_PT2_Super_Software_Pattern_Test",
          *(_DWORD *)(dword_223680 + 64));
        snprintf(byte_65A040, 0x100u, "ERROR:error asic num outof %d !!!", *(_DWORD *)(dword_223680 + 64));
        sub_3CC5C((int)byte_65A040, v77);
      }
    }
    else
    {
      sub_5C888(dword_21B3A4);
      v68 = sub_631A0();
      sub_6FBF4(v68);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      if ( *(_DWORD *)(dword_223680 + 64) >= (unsigned int)dword_5FE780 )
      {
        *(_DWORD *)s = 0;
        v74 = 0;
        v75 = 0;
        v76 = 0;
        sprintf(s, "%2d", dword_5FE780);
        sub_1F650(1, "Only find");
        sub_1F650(2, s);
        sub_1F650(3, "ASIC");
        sub_1E938(v77, 0x30u);
        printf("%s ", v77);
        printf("%s : First Only find %d ASIC\n", "Single_Board_PT2_Super_Software_Pattern_Test", dword_5FE780);
        snprintf(byte_659940, 0x100u, "First Only find %d ASIC", dword_5FE780);
        sub_3CC5C((int)byte_659940, v77);
        sub_60414();
      }
      else
      {
        sub_1F650(1, "get too much");
        sub_1F650(2, "error asic");
        sub_1F650(3, "address");
        sub_1E938(v77, 0x30u);
        printf("%s ", v77);
        printf(
          "%s : asic num outof %d !!!\n",
          "Single_Board_PT2_Super_Software_Pattern_Test",
          *(_DWORD *)(dword_223680 + 64));
        snprintf(byte_659840, 0x100u, "asic num outof %d !!!", *(_DWORD *)(dword_223680 + 64));
        sub_3CC5C((int)byte_659840, v77);
      }
    }
    break;
  }
  result = 2;
  if ( dword_5FE780 )
    return (dword_5FE780 << 8) | 3;
  return result;
}
