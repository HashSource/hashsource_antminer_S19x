int sub_1D474()
{
  const char *v0; // r2
  const char *v1; // r3
  const char *v2; // r2
  const char *v3; // r3
  const char *v4; // r2
  const char *v5; // r3
  int *v6; // r6
  unsigned int v7; // r5
  unsigned __int8 *v8; // r11
  int v9; // t1
  unsigned int v10; // r3
  int *v11; // r7
  unsigned int v12; // r5
  unsigned __int8 *v13; // r11
  int v14; // t1
  unsigned int v15; // r3
  __int16 *v16; // r7
  unsigned int v17; // r5
  unsigned __int8 *v18; // r11
  int v19; // t1
  unsigned int v20; // r3
  const char *v21; // r2
  const char *v22; // r3
  const char *v23; // r2
  const char *v24; // r3
  const char *v25; // r2
  const char *v26; // r3
  const char *v27; // r2
  const char *v28; // r3
  const char *v29; // r2
  const char *v30; // r3
  const char *v31; // r2
  const char *v32; // r3
  unsigned int v33; // r5
  int v34; // r10
  unsigned int v35; // r3
  const char *v36; // r2
  const char *v37; // r3
  const char *v38; // r2
  const char *v39; // r3
  const char *v40; // r2
  const char *v41; // r3
  char v43[52]; // [sp+8h] [bp-34h] BYREF

  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf("%s :  \n", "print_local_config_after_parse_MES_system_information");
  word_22F7A0 = 32;
  sub_3CC5C(&word_22F7A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Test_Process : %s\n",
    "print_local_config_after_parse_MES_system_information",
    (const char *)dword_223680);
  snprintf(byte_22F8A0, 0x100u, "Test_Process : %s", (const char *)dword_223680);
  sub_3CC5C(byte_22F8A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Miner_Type : %s\n",
    "print_local_config_after_parse_MES_system_information",
    (const char *)(dword_223680 + 16));
  snprintf(&byte_22F8A0[256], 0x100u, "Miner_Type : %s", (const char *)(dword_223680 + 16));
  sub_3CC5C(&byte_22F8A0[256], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Board_Name : %s\n",
    "print_local_config_after_parse_MES_system_information",
    (const char *)(dword_223680 + 32));
  snprintf(&byte_22F8A0[512], 0x100u, "Board_Name : %s", (const char *)(dword_223680 + 32));
  sub_3CC5C(&byte_22F8A0[512], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Asic_Type : %s\n",
    "print_local_config_after_parse_MES_system_information",
    (const char *)(dword_223680 + 48));
  snprintf(&byte_22F8A0[768], 0x100u, "Asic_Type : %s", (const char *)(dword_223680 + 48));
  sub_3CC5C(&byte_22F8A0[768], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Asic_Num : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 64));
  snprintf(&byte_22F8A0[1024], 0x100u, "Asic_Num : %d", *(_DWORD *)(dword_223680 + 64));
  sub_3CC5C(&byte_22F8A0[1024], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Voltage_Domain : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 80));
  snprintf(&byte_22F8A0[1280], 0x100u, "Voltage_Domain : %d", *(_DWORD *)(dword_223680 + 80));
  sub_3CC5C(&byte_22F8A0[1280], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Asic_Num_Per_Voltage_Domain : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 84));
  snprintf(&byte_22F8A0[1536], 0x100u, "Asic_Num_Per_Voltage_Domain : %d", *(_DWORD *)(dword_223680 + 84));
  sub_3CC5C(&byte_22F8A0[1536], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 89) )
    v0 = "true";
  else
    v0 = "false";
  printf("%s : Read_Temperature_From_Pic : %s\n", "print_local_config_after_parse_MES_system_information", v0);
  if ( *(_BYTE *)(dword_223680 + 89) )
    v1 = "true";
  else
    v1 = "false";
  snprintf(&byte_22F8A0[1792], 0x100u, "Read_Temperature_From_Pic : %s", v1);
  sub_3CC5C(&byte_22F8A0[1792], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 90) )
    v2 = "true";
  else
    v2 = "false";
  printf("%s : Read_Temperature_From_Asic : %s\n", "print_local_config_after_parse_MES_system_information", v2);
  if ( *(_BYTE *)(dword_223680 + 90) )
    v3 = "true";
  else
    v3 = "false";
  snprintf(&byte_22F8A0[2048], 0x100u, "Read_Temperature_From_Asic : %s", v3);
  sub_3CC5C(&byte_22F8A0[2048], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 88) )
    v4 = "true";
  else
    v4 = "false";
  printf("%s : Read_Temperature_From_CtrlBoard : %s\n", "print_local_config_after_parse_MES_system_information", v4);
  if ( *(_BYTE *)(dword_223680 + 88) )
    v5 = "true";
  else
    v5 = "false";
  snprintf(byte_2301A0, 0x100u, "Read_Temperature_From_CtrlBoard : %s", v5);
  sub_3CC5C(byte_2301A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Pic_Sensor_Model : %s\n",
    "print_local_config_after_parse_MES_system_information",
    (const char *)(dword_223680 + 92));
  snprintf(byte_2302A0, 0x100u, "Pic_Sensor_Model : %s", (const char *)(dword_223680 + 92));
  sub_3CC5C(byte_2302A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf("%s : gPic_sensor_num : %d\n", "print_local_config_after_parse_MES_system_information", dword_226084);
  snprintf(byte_2303A0, 0x100u, "gPic_sensor_num : %d", dword_226084);
  sub_3CC5C(byte_2303A0, v43);
  if ( dword_226084 )
  {
    v6 = &dword_226288;
    v7 = 0;
    do
    {
      sub_1E938(v43, 48);
      printf("%s ", v43);
      v8 = (unsigned __int8 *)v6;
      v9 = *(unsigned __int8 *)v6;
      v6 = (int *)((char *)v6 + 1);
      printf(
        "%s : gPic_sensor_low_3_bits_addr[%d] : %d\n",
        "print_local_config_after_parse_MES_system_information",
        v7,
        v9);
      v10 = v7++;
      snprintf(byte_2306A0, 0x100u, "gPic_sensor_low_3_bits_addr[%d] : %d", v10, *v8);
      sub_3CC5C(byte_2306A0, v43);
    }
    while ( dword_226084 > v7 );
  }
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Asic_Sensor_Model : %s\n",
    "print_local_config_after_parse_MES_system_information",
    (const char *)(dword_223680 + 124));
  snprintf(byte_2304A0, 0x100u, "Asic_Sensor_Model : %s", (const char *)(dword_223680 + 124));
  sub_3CC5C(byte_2304A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf("%s : gAsic_sensor_num : %d\n", "print_local_config_after_parse_MES_system_information", dword_22688C);
  snprintf(byte_2305A0, 0x100u, "gAsic_sensor_num : %d", dword_22688C);
  sub_3CC5C(byte_2305A0, v43);
  if ( dword_22688C )
  {
    v11 = &dword_226A90;
    v12 = 0;
    do
    {
      sub_1E938(v43, 48);
      printf("%s ", v43);
      v13 = (unsigned __int8 *)v11;
      v14 = *(unsigned __int8 *)v11;
      v11 = (int *)((char *)v11 + 1);
      printf("%s : gAsic_sensor_addr[%d] : %d\n", "print_local_config_after_parse_MES_system_information", v12, v14);
      v15 = v12++;
      snprintf(byte_2309A0, 0x100u, "gAsic_sensor_addr[%d] : %d", v15, *v13);
      sub_3CC5C(byte_2309A0, v43);
    }
    while ( dword_22688C > v12 );
  }
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : CtrlBoard_Sensor_Model : %s\n",
    "print_local_config_after_parse_MES_system_information",
    (const char *)(dword_223680 + 156));
  snprintf(byte_2307A0, 0x100u, "CtrlBoard_Sensor_Model : %s", (const char *)(dword_223680 + 156));
  sub_3CC5C(byte_2307A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf("%s : gCtrlBoard_sensor_num : %d\n", "print_local_config_after_parse_MES_system_information", dword_227094);
  snprintf(byte_2308A0, 0x100u, "gCtrlBoard_sensor_num : %d", dword_227094);
  sub_3CC5C(byte_2308A0, v43);
  if ( dword_227094 )
  {
    v16 = &word_227298;
    v17 = 0;
    do
    {
      sub_1E938(v43, 48);
      printf("%s ", v43);
      v18 = (unsigned __int8 *)v16;
      v19 = *(unsigned __int8 *)v16;
      v16 = (__int16 *)((char *)v16 + 1);
      printf(
        "%s : gCtrlBoard_sensor_low_3_bits_addr[%d] : %d\n",
        "print_local_config_after_parse_MES_system_information",
        v17,
        v19);
      v20 = v17++;
      snprintf(byte_230AA0, 0x100u, "gCtrlBoard_sensor_low_3_bits_addr[%d] : %d", v20, *v18);
      sub_3CC5C(byte_230AA0, v43);
    }
    while ( dword_227094 > v17 );
  }
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 260) )
    v21 = "true";
  else
    v21 = "false";
  printf("%s : Factory_Mode : %s\n", "print_local_config_after_parse_MES_system_information", v21);
  if ( *(_BYTE *)(dword_223680 + 260) )
    v22 = "true";
  else
    v22 = "false";
  snprintf(byte_230BA0, 0x100u, "Factory_Mode : %s", v22);
  sub_3CC5C(byte_230BA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 261) )
    v23 = "true";
  else
    v23 = "false";
  printf("%s : Bypass_Scan_Code_Gun : %s\n", "print_local_config_after_parse_MES_system_information", v23);
  if ( *(_BYTE *)(dword_223680 + 261) )
    v24 = "true";
  else
    v24 = "false";
  snprintf(byte_230CA0, 0x100u, "Bypass_Scan_Code_Gun : %s", v24);
  sub_3CC5C(byte_230CA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Max_PT1_Board_Poweron_Time : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 264));
  snprintf(byte_230DA0, 0x100u, "Max_PT1_Board_Poweron_Time : %d", *(_DWORD *)(dword_223680 + 264));
  sub_3CC5C(byte_230DA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 268) )
    v25 = "true";
  else
    v25 = "false";
  printf("%s : Software_Pattern : %s\n", "print_local_config_after_parse_MES_system_information", v25);
  if ( *(_BYTE *)(dword_223680 + 268) )
    v26 = "true";
  else
    v26 = "false";
  snprintf(byte_230EA0, 0x100u, "Software_Pattern : %s", v26);
  sub_3CC5C(byte_230EA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 269) )
    v27 = "true";
  else
    v27 = "false";
  printf("%s : Super_Software_Pattern : %s\n", "print_local_config_after_parse_MES_system_information", v27);
  if ( *(_BYTE *)(dword_223680 + 269) )
    v28 = "true";
  else
    v28 = "false";
  snprintf(byte_230FA0, 0x100u, "Super_Software_Pattern : %s", v28);
  sub_3CC5C(byte_230FA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 270) )
    v29 = "true";
  else
    v29 = "false";
  printf("%s : Hardware_Pattern : %s\n", "print_local_config_after_parse_MES_system_information", v29);
  if ( *(_BYTE *)(dword_223680 + 270) )
    v30 = "true";
  else
    v30 = "false";
  snprintf(byte_2310A0, 0x100u, "Hardware_Pattern : %s", v30);
  sub_3CC5C(byte_2310A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 271) )
    v31 = "true";
  else
    v31 = "false";
  printf("%s : Autogen_Pattern : %s\n", "print_local_config_after_parse_MES_system_information", v31);
  if ( *(_BYTE *)(dword_223680 + 271) )
    v32 = "true";
  else
    v32 = "false";
  snprintf(byte_2311A0, 0x100u, "Autogen_Pattern : %s", v32);
  sub_3CC5C(byte_2311A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Midstate_Number : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 272));
  snprintf(byte_2312A0, 0x100u, "Midstate_Number : %d", *(_DWORD *)(dword_223680 + 272));
  sub_3CC5C(byte_2312A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Pattern_Number : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 312));
  snprintf(byte_2313A0, 0x100u, "Pattern_Number : %d", *(_DWORD *)(dword_223680 + 312));
  sub_3CC5C(byte_2313A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Invalid_Core_Number : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 316));
  snprintf(byte_2314A0, 0x100u, "Invalid_Core_Number : %d", *(_DWORD *)(dword_223680 + 316));
  sub_3CC5C(byte_2314A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Least_Nonce_Per_Core : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 320));
  snprintf(byte_2315A0, 0x100u, "Least_Nonce_Per_Core : %d", *(_DWORD *)(dword_223680 + 320));
  sub_3CC5C(byte_2315A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Asic_Nonce_Rate : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 332));
  snprintf(byte_2316A0, 0x100u, "Asic_Nonce_Rate : %d", *(_DWORD *)(dword_223680 + 332));
  sub_3CC5C(byte_2316A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Nonce_Rate : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 324));
  snprintf(byte_2317A0, 0x100u, "Nonce_Rate : %d", *(_DWORD *)(dword_223680 + 324));
  sub_3CC5C(byte_2317A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Most_HW_Num : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 328));
  snprintf(byte_2318A0, 0x100u, "Most_HW_Num : %d", *(_DWORD *)(dword_223680 + 328));
  sub_3CC5C(byte_2318A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : In local config file, gTest_loop : %d\n",
    "print_local_config_after_parse_MES_system_information",
    dword_22B69C);
  snprintf(byte_2319A0, 0x100u, "In local config file, gTest_loop : %d", dword_22B69C);
  sub_3CC5C(byte_2319A0, v43);
  if ( dword_22B69C )
  {
    v33 = 0;
    do
    {
      sub_1E938(v43, 48);
      printf("%s ", v43);
      printf(
        "%s : Test_Loop[%d]->Level : %d\n",
        "print_local_config_after_parse_MES_system_information",
        v33,
        *(_DWORD *)(dword_223680 + 16 * v33 + 336));
      snprintf(byte_2327A0, 0x100u, "Test_Loop[%d]->Level : %d", v33, *(_DWORD *)(dword_223680 + 16 * v33 + 336));
      sub_3CC5C(byte_2327A0, v43);
      sub_1E938(v43, 48);
      printf("%s ", v43);
      printf(
        "%s : Test_Loop[%d]->Pre_Open_Core_Voltage : %d\n",
        "print_local_config_after_parse_MES_system_information",
        v33,
        *(_DWORD *)(dword_223680 + 16 * v33 + 340));
      v34 = 16 * (v33 + 21);
      snprintf(
        byte_2328A0,
        0x100u,
        "Test_Loop[%d]->Pre_Open_Core_Voltage : %d",
        v33,
        *(_DWORD *)(dword_223680 + 16 * v33 + 340));
      sub_3CC5C(byte_2328A0, v43);
      sub_1E938(v43, 48);
      printf("%s ", v43);
      printf(
        "%s : Test_Loop[%d]->Voltage : %d\n",
        "print_local_config_after_parse_MES_system_information",
        v33,
        *(_DWORD *)(dword_223680 + v34 + 8));
      snprintf(byte_2329A0, 0x100u, "Test_Loop[%d]->Voltage : %d", v33, *(_DWORD *)(dword_223680 + v34 + 8));
      sub_3CC5C(byte_2329A0, v43);
      sub_1E938(v43, 48);
      printf("%s ", v43);
      printf(
        "%s : Test_Loop[%d]->Frequence : %d\n",
        "print_local_config_after_parse_MES_system_information",
        v33,
        *(_DWORD *)(dword_223680 + v34 + 12));
      v35 = v33++;
      snprintf(byte_232AA0, 0x100u, "Test_Loop[%d]->Frequence : %d", v35, *(_DWORD *)(v34 + dword_223680 + 12));
      sub_3CC5C(byte_232AA0, v43);
    }
    while ( dword_22B69C > v33 );
  }
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Baudrate : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 576));
  snprintf(byte_231AA0, 0x100u, "Baudrate : %d", *(_DWORD *)(dword_223680 + 576));
  sub_3CC5C(byte_231AA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Timeout : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 580));
  snprintf(byte_231BA0, 0x100u, "Timeout : %d", *(_DWORD *)(dword_223680 + 580));
  sub_3CC5C(byte_231BA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : CCdly_Sel : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 584));
  snprintf(byte_231CA0, 0x100u, "CCdly_Sel : %d", *(_DWORD *)(dword_223680 + 584));
  sub_3CC5C(byte_231CA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Pwth_Sel : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 588));
  snprintf(byte_231DA0, 0x100u, "Pwth_Sel : %d", *(_DWORD *)(dword_223680 + 588));
  sub_3CC5C(byte_231DA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Swpf_Mode : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 592));
  snprintf(byte_231EA0, 0x100u, "Swpf_Mode : %d", *(_DWORD *)(dword_223680 + 592));
  sub_3CC5C(byte_231EA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Pulse_Mode : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 596));
  snprintf(byte_231FA0, 0x100u, "Pulse_Mode : %d", *(_DWORD *)(dword_223680 + 596));
  sub_3CC5C(byte_231FA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Clk_Sel : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 600));
  snprintf(byte_2320A0, 0x100u, "Clk_Sel : %d", *(_DWORD *)(dword_223680 + 600));
  sub_3CC5C(byte_2320A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : RO_Relay_En : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 604));
  snprintf(byte_2321A0, 0x100u, "RO_Relay_En : %d", *(_DWORD *)(dword_223680 + 604));
  sub_3CC5C(byte_2321A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : CO_Relay_En : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 608));
  snprintf(byte_2322A0, 0x100u, "CO_Relay_En : %d", *(_DWORD *)(dword_223680 + 608));
  sub_3CC5C(byte_2322A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Diode_Vdd_Mux_Sel : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 612));
  snprintf(byte_2323A0, 0x100u, "Diode_Vdd_Mux_Sel : %d", *(_DWORD *)(dword_223680 + 612));
  sub_3CC5C(byte_2323A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Start_Temp_Gap_Pic : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 616));
  snprintf(byte_2324A0, 0x100u, "Start_Temp_Gap_Pic : %d", *(_DWORD *)(dword_223680 + 616));
  sub_3CC5C(byte_2324A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Time_For_Cooling_Hashboard : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 624));
  snprintf(byte_2325A0, 0x100u, "Time_For_Cooling_Hashboard : %d", *(_DWORD *)(dword_223680 + 624));
  sub_3CC5C(byte_2325A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Fan_Speed : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 632));
  snprintf(byte_2326A0, 0x100u, "Fan_Speed : %d", *(_DWORD *)(dword_223680 + 632));
  sub_3CC5C(byte_2326A0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 640) )
    v36 = "true";
  else
    v36 = "false";
  printf("%s : Display_result_Voltage_Domain : %s\n", "print_local_config_after_parse_MES_system_information", v36);
  if ( *(_BYTE *)(dword_223680 + 640) )
    v37 = "true";
  else
    v37 = "false";
  snprintf(byte_232BA0, 0x100u, "Display_result_Voltage_Domain : %s", v37);
  sub_3CC5C(byte_232BA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 641) )
    v38 = "true";
  else
    v38 = "false";
  printf("%s : Display_result_Every_Core : %s\n", "print_local_config_after_parse_MES_system_information", v38);
  if ( *(_BYTE *)(dword_223680 + 641) )
    v39 = "true";
  else
    v39 = "false";
  snprintf(byte_232CA0, 0x100u, "Display_result_Every_Core : %s", v39);
  sub_3CC5C(byte_232CA0, v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Test_Config_Data_Version : %s\n",
    "print_local_config_after_parse_MES_system_information",
    (const char *)(dword_223680 + 648));
  snprintf(&byte_232CA0[256], 0x100u, "Test_Config_Data_Version : %s", (const char *)(dword_223680 + 648));
  sub_3CC5C(&byte_232CA0[256], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Voltage_Accuracy : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 664));
  snprintf(&byte_232CA0[512], 0x100u, "Voltage_Accuracy : %d", *(_DWORD *)(dword_223680 + 664));
  sub_3CC5C(&byte_232CA0[512], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf(
    "%s : Close_Power_Delay : %d\n",
    "print_local_config_after_parse_MES_system_information",
    *(_DWORD *)(dword_223680 + 668));
  snprintf(&byte_232CA0[768], 0x100u, "Close_Power_Delay : %d", *(_DWORD *)(dword_223680 + 668));
  sub_3CC5C(&byte_232CA0[768], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  if ( *(_BYTE *)(dword_223680 + 672) )
    v40 = "true";
  else
    v40 = "false";
  printf("%s : Clear_EEPROM_Data : %s\n", "print_local_config_after_parse_MES_system_information", v40);
  if ( *(_BYTE *)(dword_223680 + 672) )
    v41 = "true";
  else
    v41 = "false";
  snprintf(&byte_232CA0[1024], 0x100u, "Clear_EEPROM_Data : %s", v41);
  sub_3CC5C(&byte_232CA0[1024], v43);
  sub_1E938(v43, 48);
  printf("%s ", v43);
  printf("%s :  \n", "print_local_config_after_parse_MES_system_information");
  word_2331A0 = 32;
  return sub_3CC5C(&word_2331A0, v43);
}
