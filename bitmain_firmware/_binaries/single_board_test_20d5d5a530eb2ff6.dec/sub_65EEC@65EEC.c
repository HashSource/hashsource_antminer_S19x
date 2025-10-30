int __fastcall sub_65EEC(int a1)
{
  int v1; // r0
  int v2; // r5
  int v3; // r0
  int result; // r0
  int *v5; // r11
  int v6; // r0
  int v7; // r0
  pthread_attr_t *v8; // r3
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r2
  int v13; // r5
  int v14; // r7
  int v15; // r0
  int v16; // r7
  int v17; // r3
  int v18; // r7
  int v19; // r1
  int v20; // r7
  int v21; // r3
  int v22; // r7
  int v23; // r0
  int v24; // r5
  unsigned int v25; // r5
  int v26; // r1
  unsigned int v27; // r5
  int v28; // r5
  int v29; // r11
  int v30; // r2
  int v31; // r0
  int v32; // r0
  int v33; // r11
  int v34; // r3
  int v35; // r11
  int v36; // r1
  int v37; // r11
  int v38; // r2
  int v39; // r5
  int v40; // r3
  int v41; // r5
  int v42; // r1
  int v43; // r1
  const char *v44; // r5
  int v45; // r5
  pthread_t *v46; // r3
  unsigned int v47; // r3
  int v48; // r5
  int v49; // r0
  int v50; // r5
  int v51; // r6
  unsigned __int8 v52; // r0
  int v53; // r0
  int v54; // r5
  int v55; // r0
  int v56; // r6
  int v57; // r0
  int v58; // r6
  int v59; // r0
  int v60; // r0
  int v61; // r6
  char *v62; // r5
  int v63; // r0
  const char *v64; // r4
  int v65; // r0
  int v66; // r1
  int v67; // r2
  int v68; // r3
  int *v69; // r4
  _DWORD *v70; // r5
  int v71; // r0
  int v72; // r1
  int v73; // r2
  int v74; // r3
  int v75; // r4
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r7
  int v83; // r0
  int v84; // r0
  int v85; // r3
  int v86; // [sp+18h] [bp-8Ch]
  int *v87; // [sp+28h] [bp-7Ch]
  unsigned __int8 v88; // [sp+3Fh] [bp-65h] BYREF
  char s[16]; // [sp+40h] [bp-64h] BYREF
  char v90[16]; // [sp+50h] [bp-54h] BYREF
  char v91[4]; // [sp+60h] [bp-44h] BYREF
  int v92; // [sp+64h] [bp-40h]
  int v93; // [sp+68h] [bp-3Ch]
  int v94; // [sp+6Ch] [bp-38h]
  char v95[52]; // [sp+70h] [bp-34h] BYREF

  byte_5FE894 = 0;
  v88 = 0;
  sub_6FBF4(a1);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  v1 = sub_1F650(1, "waiting...");
  sub_6F490(v1);
  v2 = sub_22B14();
  sub_1E938(v95, 0x30u);
  printf("%s ", v95);
  printf("%s : first sensor check res:%d\n", "Single_Board_PT2_Software_Pattern_Test", v2);
  snprintf(byte_655640, 0x100u, "first sensor check res:%d", v2);
  sub_3CC5C((int)byte_655640, v95);
  if ( !v2 )
  {
    v3 = sub_2146C("Sensor Check", "Err", 0);
    sub_6F490(v3);
    return 12;
  }
  sub_1E938(v95, 0x30u);
  printf("%s ", v95);
  printf("%s : Freq_Flex:%d\n", "Single_Board_PT2_Software_Pattern_Test", *(_DWORD *)(dword_223680 + 644));
  snprintf(byte_655740, 0x100u, "Freq_Flex:%d", *(_DWORD *)(dword_223680 + 644));
  sub_3CC5C((int)byte_655740, v95);
  if ( *(_BYTE *)(dword_223680 + 276) )
    sub_65E98();
  v5 = &dword_21B3A4;
  sub_5C888(dword_21B3A4);
  sub_71AF4(dword_21B3A4);
  sleep(1u);
  if ( dword_22B69C <= (unsigned int)(unsigned __int8)byte_5FE894 )
    return 0;
  v86 = 0xFFFF;
  while ( 1 )
  {
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf(
      "%s : Start %s, gPattern_test_counter = %d\n",
      "Single_Board_PT2_Software_Pattern_Test",
      "Single_Board_PT2_Software_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    snprintf(
      byte_655840,
      0x100u,
      "Start %s, gPattern_test_counter = %d",
      "Single_Board_PT2_Software_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    sub_3CC5C((int)byte_655840, v95);
    if ( !sub_5EC4C() )
      return 12;
    v6 = sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 632));
    sub_6FBF4(v6);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Context init");
    sub_1F650(2, "waiting...");
    sub_5C888(*v5);
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : Set fan speed as %d\n", "Single_Board_PT2_Software_Pattern_Test", *(_DWORD *)(dword_223680 + 632));
    snprintf(byte_655940, 0x100u, "Set fan speed as %d", *(_DWORD *)(dword_223680 + 632));
    sub_3CC5C((int)byte_655940, v95);
    sub_1F408();
    if ( !sub_20CBC() )
    {
      sub_6E9D8(dword_21B3B0, 0);
      return 12;
    }
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : Set Chain %d baud: %d\n", "Single_Board_PT2_Software_Pattern_Test", *v5, 26);
    snprintf(byte_655A40, 0x100u, "Set Chain %d baud: %d", *v5, 26);
    sub_3CC5C((int)byte_655A40, v95);
    sub_71D60(*v5, 26);
    sub_787F0(*(unsigned __int8 *)v5);
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : test reset_register_cache_value_to_default end\n", "Single_Board_PT2_Software_Pattern_Test");
    strcpy(byte_655B40, "test reset_register_cache_value_to_default end");
    sub_3CC5C((int)byte_655B40, v95);
    sub_71AF4(*v5);
    sleep(1u);
    byte_5FE775 = 1;
    v7 = pthread_create((pthread_t *)&dword_5FE768, 0, (void *(*)(void *))sub_21CAC, 0);
    if ( v7 )
    {
      v61 = v7;
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf("%s : start thread PT2_show_status_func failed %d\n", "Single_Board_PT2_Software_Pattern_Test", v61);
      snprintf(byte_655C40, 0x100u, "start thread PT2_show_status_func failed %d", v61);
      sub_3CC5C((int)byte_655C40, v95);
      sub_631A0();
      v62 = &byte_655C40[256];
      v63 = sub_6E9D8(dword_21B3B0, 0);
      sub_6FBF4(v63);
      v64 = "Show thread creat fail, Start again";
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Show thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf("%s : Show thread creat fail, Start again\n", "Single_Board_PT2_Software_Pattern_Test");
LABEL_118:
      v65 = *(_DWORD *)v64;
      v66 = *((_DWORD *)v64 + 1);
      v67 = *((_DWORD *)v64 + 2);
      v68 = *((_DWORD *)v64 + 3);
      v69 = (int *)(v64 + 16);
      *(_DWORD *)v62 = v65;
      *((_DWORD *)v62 + 1) = v66;
      *((_DWORD *)v62 + 2) = v67;
      *((_DWORD *)v62 + 3) = v68;
      v70 = v62 + 16;
      v71 = *v69;
      v72 = v69[1];
      v73 = v69[2];
      v74 = v69[3];
      v75 = v69[4];
      *v70 = v71;
      v70[1] = v72;
      v70[2] = v73;
      v70[3] = v74;
      v70 += 4;
      *v70 = v75;
      sub_3CC5C((int)(v70 - 8), v95);
      return 12;
    }
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf(
      "%s : test pthread_create  PT2_show_status_func end, counter:%d\n",
      "Single_Board_PT2_Software_Pattern_Test",
      (unsigned __int8)byte_5FE894);
    snprintf(
      byte_655E40,
      0x100u,
      "test pthread_create  PT2_show_status_func end, counter:%d",
      (unsigned __int8)byte_5FE894);
    sub_3CC5C((int)byte_655E40, v95);
    byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 2] = 1;
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : test init_pic start\n", "Single_Board_PT2_Software_Pattern_Test");
    strcpy(byte_655F40, "test init_pic start");
    sub_3CC5C((int)byte_655F40, v95);
    if ( *(_BYTE *)(dword_223680 + 89) && !sub_23588() )
    {
      byte_5FE775 = 0;
      sub_6E9D8(dword_21B3B0, 0);
      pthread_join(dword_5FE768, 0);
      return 1;
    }
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : test init_pic end\n", "Single_Board_PT2_Software_Pattern_Test");
    strcpy(byte_656040, "test init_pic end");
    sub_3CC5C((int)byte_656040, v95);
    v8 = (pthread_attr_t *)*(unsigned __int8 *)(dword_223680 + 89);
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      byte_5FE77A = 1;
      v9 = pthread_create((pthread_t *)&dword_5FE770, 0, (void *(*)(void *))sub_24160, 0);
    }
    else
    {
      if ( !*(_BYTE *)(dword_223680 + 88) )
      {
        v54 = *(unsigned __int8 *)(dword_223680 + 90);
        if ( !*(_BYTE *)(dword_223680 + 90) )
        {
          sub_5C888(*v5);
          v55 = sub_631A0();
          sub_6FBF4(v55);
          sub_1F650(v54, (const char *)(dword_223680 + 32));
          sub_1F650(1, "config error");
          sub_1F650(2, "only support");
          sub_1F650(3, "pic sensor");
          sub_1E938(v95, 0x30u);
          printf("%s ", v95);
          printf("%s : Sensor_Info.Read_Temperature_From_Pic not enabled\n", "Single_Board_PT2_Software_Pattern_Test");
          strcpy(byte_656A40, "Sensor_Info.Read_Temperature_From_Pic not enabled");
          sub_3CC5C((int)byte_656A40, v95);
          return 12;
        }
        goto LABEL_16;
      }
      byte_611FD4 = 1;
      v9 = pthread_create((pthread_t *)&dword_5FE770, v8, (void *(*)(void *))sub_2B524, v8);
    }
    if ( v9 )
    {
      sub_5C888(*v5);
      v76 = sub_631A0();
      sub_6FBF4(v76);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Read PIC Temp");
      sub_1F650(2, "thread  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf("%s : Receive thread creat fail, Start again\n", "Single_Board_PT2_Software_Pattern_Test");
      strcpy(byte_656140, "Receive thread creat fail, Start again");
      sub_3CC5C((int)byte_656140, v95);
      return 12;
    }
LABEL_16:
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : wait for reading temp from ctrl board.\n", "Single_Board_PT2_Software_Pattern_Test");
    strcpy(byte_656240, "wait for reading temp from ctrl board.");
    sub_3CC5C((int)byte_656240, v95);
    while ( !byte_5FE779 )
      sleep(1u);
    sub_2B408();
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    v10 = sub_1F79C(
            (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
            (unsigned __int8)dword_227094);
    v11 = sub_2B3A8();
    v12 = v10;
    v13 = 301;
    printf("%s : env temp,min temp:%d,max temp:%d\n", "Single_Board_PT2_Software_Pattern_Test", v12, v11);
    v14 = sub_1F79C(
            (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
            (unsigned __int8)dword_227094);
    v15 = sub_2B3A8();
    snprintf(byte_656340, 0x100u, "env temp,min temp:%d,max temp:%d", v14, v15);
    sub_3CC5C((int)byte_656340, v95);
    byte_5FE776 = 1;
    sub_6E9D8(dword_21B3B0, 100);
    while ( 1 )
    {
      v20 = sub_2B3A8();
      v21 = sub_62120() ? 47 : 25;
      if ( v21 >= v20 )
        break;
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      v16 = sub_2B3A8();
      if ( sub_62120() )
        v17 = 47;
      else
        v17 = 25;
      printf("%s : wait temp down,max:%d,target:%d\n", "Single_Board_PT2_Software_Pattern_Test", v16, v17);
      v18 = sub_2B3A8();
      if ( sub_62120() )
        v19 = 47;
      else
        v19 = 25;
      snprintf(byte_656440, 0x100u, "wait temp down,max:%d,target:%d", v18, v19);
      sub_3CC5C((int)byte_656440, v95);
      sleep(1u);
      if ( !--v13 )
      {
        sub_2146C("Cooldown", "Hashboard", "Failed");
        return 12;
      }
    }
    if ( v86 == 0xFFFF )
    {
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      v56 = sub_1F79C(
              (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
              (unsigned __int8)dword_227094);
      v57 = sub_2B3A8();
      printf("%s : cur env,min temp:%d,max temp:%d\n", "Single_Board_PT2_Software_Pattern_Test", v56, v57);
      v58 = sub_1F79C(
              (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
              (unsigned __int8)dword_227094);
      v59 = sub_2B3A8();
      snprintf(byte_656540, 0x100u, "cur env,min temp:%d,max temp:%d", v58, v59);
      sub_3CC5C((int)byte_656540, v95);
      sub_6E9D8(dword_21B3B0, 100);
      if ( !sub_23E18(*(_DWORD *)(dword_223680 + 620)) )
      {
        sub_5C888(*v5);
        v81 = sub_631A0();
        sub_6FBF4(v81);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "cool fail");
        sub_1E938(v95, 0x30u);
        printf("%s ", v95);
        printf("%s : Can't cool down hashboard fail\n", "Single_Board_PT2_Software_Pattern_Test");
        strcpy(byte_656640, "Can't cool down hashboard fail");
        sub_3CC5C((int)byte_656640, v95);
        return 12;
      }
      if ( *(_BYTE *)(dword_223680 + 89) )
      {
        v86 = sub_1F79C(
                (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264770],
                (unsigned __int8)dword_226084);
      }
      else
      {
        if ( !*(_BYTE *)(dword_223680 + 88) )
        {
          sub_1E938(v95, 0x30u);
          printf("%s ", v95);
          printf("%s : ENV TEMP %d\n", "Single_Board_PT2_Software_Pattern_Test", 0xFFFF);
          snprintf(byte_656740, 0x100u, "ENV TEMP %d", 0xFFFF);
          sub_3CC5C((int)byte_656740, v95);
          byte_5FE776 = 0;
LABEL_112:
          sub_5C888(*v5);
          v60 = sub_631A0();
          sub_6FBF4(v60);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "temperature high");
          v92 = 0;
          *(_DWORD *)v91 = 0;
          v93 = 0;
          v94 = 0;
          sprintf(v91, "Now %d C", v86);
          sub_1F650(2, v91);
          sub_1F650(3, "cool ENV");
          sub_1E938(v95, 0x30u);
          printf("%s ", v95);
          printf("%s : ENV temperature too high\n", "Single_Board_PT2_Software_Pattern_Test");
          strcpy(byte_656840, "ENV temperature too high");
          sub_3CC5C((int)byte_656840, v95);
          return 12;
        }
        v86 = sub_1F79C(
                (int)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264774],
                (unsigned __int8)dword_227094);
      }
    }
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : ENV TEMP %d\n", "Single_Board_PT2_Software_Pattern_Test", v86);
    snprintf(byte_656740, 0x100u, "ENV TEMP %d", v86);
    sub_3CC5C((int)byte_656740, v95);
    byte_5FE776 = 0;
    if ( v86 > 35 )
      goto LABEL_112;
    dword_6E3300 = sub_6216C();
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : gVol_comp:%d,env_temp:%d\n", "Single_Board_PT2_Software_Pattern_Test", dword_6E3300, v86);
    snprintf(byte_656940, 0x100u, "gVol_comp:%d,env_temp:%d", dword_6E3300, v86);
    sub_3CC5C((int)byte_656940, v95);
    sub_6E9D8(dword_21B3B0, 100);
    sub_2146C("Power on", "waiting...", 0);
    sub_71AF4(*v5);
    usleep(0x493E0u);
    if ( !sub_22D88(0x514u) )
      sub_2B420("power err");
    sub_71B24(*v5);
    usleep(0x186A0u);
    sub_71AF4(*v5);
    usleep(0x2710u);
    sub_71B24(*v5);
    usleep(0x186A0u);
    sub_71AF4(*v5);
    usleep(0x2710u);
    sub_71B24(*v5);
    usleep(0x1388u);
    if ( !sub_231D4(1300, *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32], 5) )
      sub_2B420("power err");
    usleep(0x30D40u);
    if ( *(_BYTE *)(dword_223680 + 89) && !sub_23A5C() )
    {
      v80 = *v5;
      byte_2334AC = 0;
      byte_611FD4 = 0;
      sub_5C888(v80);
      sub_631A0();
      return 1;
    }
    sub_5F7C8();
    byte_5FE774 = 1;
    v22 = pthread_create((pthread_t *)&dword_5FE764, 0, (void *(*)(void *))sub_60228, 0);
    v23 = *v5;
    if ( v22 )
    {
      sub_5C888(v23);
      v77 = sub_631A0();
      sub_6FBF4(v77);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Receive thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf("%s :  Receive thread  creat fail, Start again,ret:%d\n", "Single_Board_PT2_Software_Pattern_Test", v22);
      snprintf(byte_656B40, 0x100u, " Receive thread  creat fail, Start again,ret:%d", v22);
      sub_3CC5C((int)byte_656B40, v95);
      return 12;
    }
    sub_71AF4(v23);
    usleep(0x2710u);
    sub_71B24(*v5);
    usleep(0x186A0u);
    sub_778F0(*(unsigned __int8 *)v5, 0xFFFF);
    sub_6F42C(*v5);
    usleep(0xC350u);
    sub_2B408();
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    v24 = dword_5FE780;
    if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 || byte_5FE78C )
    {
      sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
      if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
      {
        sub_60414();
        sub_1E938(v95, 0x30u);
        printf("%s ", v95);
        printf(
          "%s : total %d asics,only find %d\n",
          "Single_Board_PT2_Software_Pattern_Test",
          *(_DWORD *)(dword_223680 + 64),
          dword_5FE780);
        snprintf(byte_656C40, 0x100u, "total %d asics,only find %d", *(_DWORD *)(dword_223680 + 64), dword_5FE780);
        sub_3CC5C((int)byte_656C40, v95);
        sub_1E938(v95, 0x30u);
        printf("%s ", v95);
        printf("%s : gFind_dummy_data:%d\n", "Single_Board_PT2_Software_Pattern_Test", (unsigned __int8)byte_5FE78C);
        snprintf(byte_656D40, 0x100u, "gFind_dummy_data:%d", (unsigned __int8)byte_5FE78C);
        sub_3CC5C((int)byte_656D40, v95);
        sub_5C888(*v5);
        sub_631A0();
        if ( *(_DWORD *)(dword_223680 + 64) >= (unsigned int)dword_5FE780 )
        {
          v92 = 0;
          *(_DWORD *)v91 = 0;
          v93 = 0;
          v94 = 0;
          sprintf(v91, "%2d", v24);
          sub_2146C("Only find", v91, "ASIC");
          sub_1E938(v95, 0x30u);
          printf("%s ", v95);
          printf("%s : First Only find %d ASIC\n", "Single_Board_PT2_Software_Pattern_Test", v24);
          snprintf(byte_656F40, 0x100u, "First Only find %d ASIC", v24);
          sub_3CC5C((int)byte_656F40, v95);
        }
        else
        {
          sub_2146C("get too much", "error asic", "address");
          sub_1E938(v95, 0x30u);
          printf("%s ", v95);
          printf(
            "%s : asic num outof %d !!!\n",
            "Single_Board_PT2_Software_Pattern_Test",
            *(_DWORD *)(dword_223680 + 64));
          snprintf(byte_656E40, 0x100u, "asic num outof %d !!!", *(_DWORD *)(dword_223680 + 64));
          sub_3CC5C((int)byte_656E40, v95);
        }
        goto LABEL_69;
      }
    }
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : First: find %d ASIC\n\n", "Single_Board_PT2_Software_Pattern_Test", v24);
    snprintf(byte_657040, 0x100u, "First: find %d ASIC\n", v24);
    sub_3CC5C((int)byte_657040, v95);
    sub_5F848();
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : interval %d, total ASIC num %d\n", "do_core_reset", dword_6084C8, *(_DWORD *)(dword_223680 + 64));
    snprintf(byte_657140, 0x100u, "interval %d, total ASIC num %d", dword_6084C8, *(_DWORD *)(dword_223680 + 64));
    sub_3CC5C((int)byte_657140, v95);
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : ccdly pwth %d %d\n", "do_core_reset", *(_DWORD *)(dword_223680 + 584), *(_DWORD *)(dword_223680 + 588));
    v25 = 0;
    snprintf(byte_657240, 0x100u, "ccdly pwth %d %d", *(_DWORD *)(dword_223680 + 584), *(_DWORD *)(dword_223680 + 588));
    sub_3CC5C((int)byte_657240, v95);
    if ( *(_DWORD *)(dword_223680 + 64) )
    {
      do
      {
        sub_7809C(*(unsigned __int8 *)v5, dword_6084C8 * v25);
        usleep(0x2710u);
        sub_784E0(*(unsigned __int8 *)v5, dword_6084C8 * v25, *(unsigned __int8 *)(dword_223680 + 596), 0);
        usleep(0x2710u);
        sub_784F4(
          *(unsigned __int8 *)v5,
          dword_6084C8 * v25,
          *(unsigned __int8 *)(dword_223680 + 588),
          *(unsigned __int8 *)(dword_223680 + 584),
          0);
        v26 = dword_6084C8 * v25++;
        sub_7811C(*(unsigned __int8 *)v5, v26);
        usleep(0x2710u);
      }
      while ( *(_DWORD *)(dword_223680 + 64) > v25 );
    }
    usleep((__useconds_t)&loc_F423E + 2);
    v27 = sub_5BBF8(*(_DWORD *)(dword_223680 + 16 * (unsigned __int8)byte_5FE894 + 348));
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf(
      "%s : Set chain frequency[+Freq_Flex] as %d,target freq:%d\n",
      "Single_Board_PT2_Software_Pattern_Test",
      v27,
      *(_DWORD *)(dword_223680 + 16 * (unsigned __int8)byte_5FE894 + 348));
    snprintf(
      byte_657340,
      0x100u,
      "Set chain frequency[+Freq_Flex] as %d,target freq:%d",
      v27,
      *(_DWORD *)(dword_223680 + 16 * (unsigned __int8)byte_5FE894 + 348));
    sub_3CC5C((int)byte_657340, v95);
    sub_5FAAC(0x32u, v27);
    sub_5FC1C();
    usleep((__useconds_t)&loc_F423E + 2);
    v28 = 301;
    byte_5FE777 = 1;
    sub_6E9D8(dword_21B3B0, 30);
    v87 = v5;
    do
    {
      while ( 1 )
      {
        v29 = sub_2B3A8();
        if ( sub_62120() )
          v30 = 47;
        else
          v30 = 25;
        if ( v30 <= v29 )
        {
          v5 = v87;
          goto LABEL_72;
        }
        v31 = sub_2B3A8();
        snprintf(s, 0x10u, "Max:%d", v31);
        v32 = sub_2BB48();
        snprintf(v90, 0x10u, "Min:%d", v32);
        sub_2146C("temp", s, v90);
        sub_1E938(v95, 0x30u);
        printf("%s ", v95);
        v33 = sub_2B3A8();
        v34 = sub_62120() ? 47 : 25;
        printf("%s : wait temp,max:%d,target:%d\n", "Single_Board_PT2_Software_Pattern_Test", v33, v34);
        v35 = sub_2B3A8();
        v36 = sub_62120() ? 47 : 25;
        snprintf(byte_657440, 0x100u, "wait temp,max:%d,target:%d", v35, v36);
        sub_3CC5C((int)byte_657440, v95);
        v37 = sub_2B3A8();
        v38 = sub_62120() ? 42 : 20;
        if ( v38 <= v37 )
          break;
        sleep(1u);
        if ( !--v28 )
          goto LABEL_58;
      }
      sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 636));
      sleep(1u);
      --v28;
    }
    while ( v28 );
LABEL_58:
    v5 = v87;
    if ( sub_2B3A8() <= 49 )
    {
      byte_5FE77A = v28;
      byte_2334AC = v28;
      byte_611FD4 = v28;
      byte_5FE775 = v28;
      sub_631A0();
      sub_5C888(*v87);
      v84 = sub_2B3A8();
      snprintf(v91, 0x10u, "Max %d", v84);
      if ( sub_62120() )
        v85 = 47;
      else
        v85 = 25;
      snprintf(v95, 0x10u, "Need %d ~ %d", 50, v85);
      sub_2146C("Heating Board", v91, v95);
      return 12;
    }
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    v39 = sub_2B3A8();
    v40 = sub_62120() ? 47 : 25;
    printf("%s : warning test max temp:%d,target:%d\n", "Single_Board_PT2_Software_Pattern_Test", v39, v40);
    v41 = sub_2B3A8();
    v42 = sub_62120() ? 47 : 25;
    snprintf(byte_657540, 0x100u, "warning test max temp:%d,target:%d", v41, v42);
    sub_3CC5C((int)byte_657540, v95);
LABEL_72:
    v43 = *(_DWORD *)(dword_223680 + 636);
    byte_5FE777 = 0;
    sub_6E9D8(dword_21B3B0, v43);
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : set work fan speed %d\n", "Single_Board_PT2_Software_Pattern_Test", *(_DWORD *)(dword_223680 + 636));
    snprintf(byte_657640, 0x100u, "set work fan speed %d", *(_DWORD *)(dword_223680 + 636));
    sub_3CC5C((int)byte_657640, v95);
    sub_2146C("Set Voltage", "waiting", 0);
    v44 = (const char *)(dword_223680 + 32);
    if ( !strcmp((const char *)(dword_223680 + 32), "NBT2006-36") )
    {
      if ( !sub_3C404(
              v44,
              *(unsigned __int8 *)v5,
              *(_DWORD *)&byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 32],
              *(_DWORD *)&byte_2337B0[264784 * (unsigned __int8)byte_5FE894 + 28],
              5u) )
      {
        sub_5C888(*v5);
        sub_631A0();
        sub_1E938(v95, 0x30u);
        printf("%s ", v95);
        printf("%s : set dac voltage step by step fail\n", "Single_Board_PT2_Software_Pattern_Test");
        strcpy(byte_657740, "set dac voltage step by step fail");
        sub_3CC5C((int)byte_657740, v95);
        return 12;
      }
    }
    else
    {
      v50 = dword_6E3300 + *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 28];
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf("%s : Target vol after compensate:%d\n", "Single_Board_PT2_Software_Pattern_Test", v50);
      snprintf(byte_657840, 0x100u, "Target vol after compensate:%d", v50);
      sub_3CC5C((int)byte_657840, v95);
      if ( *(_BYTE *)(dword_223680 + 245) )
      {
        v51 = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32];
        v52 = sub_189090(v51 - v50, *(_DWORD *)(dword_223680 + 252));
        v53 = sub_231D4(v51, v50, v52);
      }
      else
      {
        v53 = sub_231D4(*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32], v50, 5);
      }
      if ( !v53 )
        sub_2B420("power err");
    }
    sub_2B408();
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    v24 = dword_5FE780;
    if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 || byte_5FE78C )
    {
      sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
      if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
        break;
    }
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : Second: find %d ASIC\n\n", "Single_Board_PT2_Software_Pattern_Test", v24);
    snprintf(byte_657D40, 0x100u, "Second: find %d ASIC\n", v24);
    sub_3CC5C((int)byte_657D40, v95);
    byte_5FE778 = 1;
    if ( *(_DWORD *)(dword_223680 + 272) == 4 )
    {
      v45 = pthread_create((pthread_t *)&dword_5FE760, 0, (void *(*)(void *))sub_5BC70, 0);
    }
    else if ( *(_BYTE *)(dword_223680 + 276) )
    {
      v45 = pthread_create((pthread_t *)&dword_5FE760, 0, (void *(*)(void *))sub_67C08, 0);
    }
    else
    {
      v45 = pthread_create(
              (pthread_t *)&dword_5FE760,
              (const pthread_attr_t *)*(unsigned __int8 *)(dword_223680 + 276),
              (void *(*)(void *))sub_5BFB8,
              (void *)*(unsigned __int8 *)(dword_223680 + 276));
    }
    LOWORD(v46) = (unsigned __int16)&dword_5FE760;
    if ( v45 )
    {
      HIWORD(v46) = (unsigned int)&dword_5FE760 >> 16;
      pthread_cancel(*v46);
      v78 = *v5;
      byte_5FE774 = 0;
      sub_5C888(v78);
      byte_2334AC = 0;
      byte_611FD4 = 0;
      byte_5FE775 = 0;
      byte_5FE77A = 0;
      v79 = sub_631A0();
      sub_6FBF4(v79);
      v64 = (const char *)&unk_1A2848;
      v62 = (char *)&unk_657E40;
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Send  thread");
      sub_1F650(2, "Creat  fail");
      sub_1F650(3, aStartAg);
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf("%s : Send thread creat fail, Start again\n", "Single_Board_PT2_Software_Pattern_Test");
      goto LABEL_118;
    }
    HIWORD(v46) = (unsigned int)&dword_5FE760 >> 16;
    pthread_join(*v46, 0);
    pthread_join(dword_5FE764, 0);
    sub_5C888(*v5);
    sub_631A0();
    if ( !byte_5FE78C )
      sub_26F24();
    putchar(10);
    v47 = (unsigned __int8)byte_5FE894;
    if ( byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894]
      && byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1] )
    {
      putchar(10);
      puts("<<--Log Anchor Start-->><<--Log Anchor ok-->>");
      printf("%d\n", *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 24]);
      printf("%d\n", *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 28]);
      printf("%d\n", *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 36]);
      puts("<<--Log Anchor End-->>");
      v47 = (unsigned __int8)byte_5FE894;
    }
    else if ( (unsigned __int8)byte_5FE894 >= (unsigned int)(dword_22B69C - 1) )
    {
      putchar(10);
      puts("<<--Log Anchor Start-->><<--Log Anchor Err-->>");
      printf("%d\n", 255);
      puts("<<--Log Anchor End-->>");
      v47 = (unsigned __int8)byte_5FE894;
    }
    if ( !byte_2337B0[264784 * v47 + 264776] )
    {
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf(
        "%s : All base PT2 test done. STRICT_STANDARD: gPattern_test_counter: %d\n\n",
        "Single_Board_PT2_Software_Pattern_Test",
        (unsigned __int8)byte_5FE894);
      snprintf(
        byte_657F40,
        0x100u,
        "All base PT2 test done. STRICT_STANDARD: gPattern_test_counter: %d\n",
        (unsigned __int8)byte_5FE894);
      sub_3CC5C((int)byte_657F40, v95);
      return sub_2A28C((unsigned __int8)byte_5FE894);
    }
    if ( v47 >= dword_22B69C - 1 )
    {
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf(
        "%s : All base PT2 test done. Last test loop: gPattern_test_counter: %d\n\n",
        "Single_Board_PT2_Software_Pattern_Test",
        (unsigned __int8)byte_5FE894);
      snprintf(
        byte_658040,
        0x100u,
        "All base PT2 test done. Last test loop: gPattern_test_counter: %d\n",
        (unsigned __int8)byte_5FE894);
      sub_3CC5C((int)byte_658040, v95);
      sub_29E88(&v88);
      return sub_2A28C(v88);
    }
    v48 = 9;
    byte_5FE894 = v47 + 1;
    puts("prepare next test...\n\n");
    sub_6E9D8(dword_21B3B0, 100);
    do
    {
      sleep(0xAu);
      --v48;
    }
    while ( v48 );
    if ( (unsigned __int8)byte_5FE894 >= (unsigned int)dword_22B69C )
      return 0;
  }
  if ( *(_BYTE *)(dword_223680 + 642) )
  {
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : second start find_bad_ri_asic\n", "Single_Board_PT2_Software_Pattern_Test");
    strcpy(byte_657940, "second start find_bad_ri_asic");
    sub_3CC5C((int)byte_657940, v95);
    v82 = sub_5FDE4();
    v83 = *v5;
    byte_5FE774 = 0;
    sub_5C888(v83);
    sub_631A0();
    if ( v82 != -1 )
    {
      *(_DWORD *)v91 = 0;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      sprintf(v91, "%2d", v82);
      sub_2146C("Bad asic", "index(from 0)", v91);
      sub_1E938(v95, 0x30u);
      printf("%s ", v95);
      printf("%s : Bad asic index(from 0) %d\n", "Single_Board_PT2_Software_Pattern_Test", v82);
      snprintf(byte_657A40, 0x100u, "Bad asic index(from 0) %d", v82);
      sub_3CC5C((int)byte_657A40, v95);
      goto LABEL_69;
    }
  }
  else
  {
    v49 = *v5;
    byte_5FE774 = 0;
    sub_5C888(v49);
    sub_631A0();
  }
  if ( *(_DWORD *)(dword_223680 + 64) >= (unsigned int)dword_5FE780 )
  {
    v92 = 0;
    *(_DWORD *)v91 = 0;
    v93 = 0;
    v94 = 0;
    sprintf(v91, "%2d", v24);
    sub_2146C("Only find", v91, "ASIC");
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf("%s : Second Only find %d ASIC\n", "Single_Board_PT2_Software_Pattern_Test", v24);
    snprintf(byte_657C40, 0x100u, "Second Only find %d ASIC", v24);
    sub_3CC5C((int)byte_657C40, v95);
  }
  else
  {
    sub_2146C("get too much", "error asic", "address");
    sub_1E938(v95, 0x30u);
    printf("%s ", v95);
    printf(
      "%s : ERROR:error asic num outof %d !!!\n",
      "Single_Board_PT2_Software_Pattern_Test",
      *(_DWORD *)(dword_223680 + 64));
    snprintf(byte_657B40, 0x100u, "ERROR:error asic num outof %d !!!", *(_DWORD *)(dword_223680 + 64));
    sub_3CC5C((int)byte_657B40, v95);
  }
LABEL_69:
  result = 2;
  if ( v24 )
    return (v24 << 8) | 3;
  return result;
}
