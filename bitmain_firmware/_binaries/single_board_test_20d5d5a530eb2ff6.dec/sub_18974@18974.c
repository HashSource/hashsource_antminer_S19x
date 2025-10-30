int __fastcall sub_18974(const char *a1)
{
  char *v2; // r0
  char *v3; // r5
  int v4; // r4
  unsigned int *v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r2
  _DWORD *v9; // r0
  char *v10; // r4
  const char *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r8
  _DWORD *v14; // r0
  char *v15; // r4
  const char *v16; // r0
  _DWORD *v17; // r0
  char *v18; // r4
  const char *v19; // r0
  _DWORD *v20; // r0
  char *v21; // r4
  const char *v22; // r0
  _DWORD *v23; // r0
  int v24; // r4
  _DWORD *v25; // r0
  int v26; // r4
  _DWORD *v27; // r0
  int v28; // r4
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r10
  int v36; // r4
  _DWORD *v37; // r0
  const char *v38; // r2
  const char *v39; // r3
  _DWORD *v40; // r0
  const char *v41; // r2
  const char *v42; // r3
  _DWORD *v43; // r0
  int *v44; // r0
  int *v45; // r11
  const char *v46; // r2
  const char *v47; // r3
  _DWORD *v48; // r0
  const char *v49; // r0
  const char *v50; // r2
  const char *v51; // r3
  int v52; // r4
  int v53; // r4
  const char *v54; // r2
  const char *v55; // r3
  _DWORD *v56; // r0
  int *v57; // r5
  unsigned __int8 *v58; // r4
  int v59; // r11
  _DWORD *v60; // r0
  int v61; // t1
  int *v62; // r0
  int *v63; // r9
  _DWORD *v64; // r0
  char *v65; // r11
  const char *v66; // r0
  _DWORD *v67; // r0
  int *v68; // r5
  unsigned __int8 *v69; // r4
  int v70; // r11
  _DWORD *v71; // r0
  int v72; // t1
  int *v73; // r0
  int *v74; // r11
  _DWORD *v75; // r0
  const char *v76; // r0
  _DWORD *v77; // r0
  _DWORD *v78; // r11
  unsigned int v79; // r10
  char *v80; // r4
  _DWORD *v81; // r0
  int v82; // t1
  int v83; // r3
  char *v84; // r0
  unsigned __int8 *v85; // r4
  int v86; // r9
  _DWORD *v87; // r0
  int v88; // t1
  char *v89; // r0
  char *v90; // r4
  _DWORD *v91; // r0
  const char *v92; // r2
  const char *v93; // r3
  _DWORD *v94; // r0
  const char *v95; // r2
  const char *v96; // r3
  _DWORD *v97; // r0
  _DWORD *v98; // r0
  _DWORD *v99; // r0
  _DWORD *v100; // r0
  _DWORD *v101; // r10
  int v102; // r8
  const char *v103; // r2
  const char *v104; // r3
  int v105; // r8
  _DWORD *v106; // r0
  const char *v107; // r2
  const char *v108; // r3
  _DWORD *v109; // r0
  _DWORD *v110; // r0
  const char *v111; // r2
  const char *v112; // r3
  const char *v113; // r2
  const char *v114; // r3
  _DWORD *v115; // r0
  const char *v116; // r2
  const char *v117; // r3
  _DWORD *v118; // r0
  int v119; // r11
  _DWORD *v120; // r0
  int v121; // r0
  const char *v122; // r9
  _DWORD *v123; // r8
  const char *v124; // r2
  const char *v125; // r3
  _DWORD *v126; // r0
  const char *v127; // r2
  const char *v128; // r3
  _DWORD *v129; // r0
  const char *v130; // r2
  const char *v131; // r3
  _DWORD *v132; // r0
  const char *v133; // r2
  const char *v134; // r3
  _DWORD *v135; // r0
  int v136; // r9
  _DWORD *v137; // r0
  const char *v138; // r2
  const char *v139; // r3
  _DWORD *v140; // r0
  int v141; // r11
  _DWORD *v142; // r0
  int v143; // r11
  _DWORD *v144; // r0
  const char *v145; // r2
  const char *v146; // r3
  _DWORD *v147; // r0
  int v148; // r9
  _DWORD *v149; // r0
  int v150; // r8
  _DWORD *v151; // r0
  _DWORD *v152; // r9
  _DWORD *v153; // r0
  int v154; // r8
  _DWORD *v155; // r0
  int v156; // r10
  _DWORD *v157; // r0
  int v158; // r10
  _DWORD *v159; // r0
  int v160; // r10
  _DWORD *v161; // r0
  int v162; // r10
  _DWORD *v163; // r0
  int v164; // r10
  char *v165; // r0
  unsigned int v166; // r11
  _DWORD *v167; // r0
  _DWORD *v168; // r10
  _DWORD *v169; // r0
  int v170; // r4
  int v171; // r9
  _DWORD *v172; // r0
  int v173; // r4
  _DWORD *v174; // r0
  int v175; // r9
  _DWORD *v176; // r0
  int v177; // r10
  int v178; // r9
  _DWORD *v179; // r0
  _DWORD *v180; // r8
  _DWORD *v181; // r0
  int v182; // r9
  _DWORD *v183; // r0
  int v184; // r8
  _DWORD *v185; // r0
  _DWORD *v186; // r8
  _DWORD *v187; // r0
  int v188; // r9
  _DWORD *v189; // r0
  int v190; // r9
  _DWORD *v191; // r0
  int v192; // r9
  _DWORD *v193; // r0
  int v194; // r9
  _DWORD *v195; // r0
  int v196; // r9
  _DWORD *v197; // r0
  int v198; // r9
  _DWORD *v199; // r0
  int v200; // r9
  _DWORD *v201; // r0
  int v202; // r8
  _DWORD *v203; // r0
  _DWORD *v204; // r8
  _DWORD *v205; // r0
  int v206; // r9
  _DWORD *v207; // r0
  int v208; // r9
  _DWORD *v209; // r0
  int v210; // r9
  _DWORD *v211; // r0
  _DWORD *v212; // r0
  _DWORD *v213; // r8
  int v214; // r8
  _DWORD *v215; // r0
  int v216; // r9
  _DWORD *v217; // r0
  _DWORD *v218; // r0
  _DWORD *v219; // r10
  int v220; // r8
  _DWORD *v221; // r0
  const char *v222; // r2
  const char *v223; // r3
  _DWORD *v224; // r0
  const char *v225; // r2
  const char *v226; // r3
  _DWORD *v227; // r0
  char *v228; // r8
  const char *v229; // r0
  _DWORD *v230; // r0
  int v231; // r4
  _DWORD *v232; // r0
  _DWORD *v233; // r4
  _DWORD *v234; // r0
  int v235; // r8
  _DWORD *v236; // r0
  const char *v237; // r2
  const char *v238; // r3
  _DWORD *v239; // r0
  const char *v240; // r2
  const char *v241; // r3
  char *dest; // [sp+Ch] [bp-148h]
  char *desta; // [sp+Ch] [bp-148h]
  char *v244; // [sp+10h] [bp-144h]
  char *v245; // [sp+10h] [bp-144h]
  char *v246; // [sp+10h] [bp-144h]
  _DWORD *v247; // [sp+14h] [bp-140h]
  _DWORD *v248; // [sp+14h] [bp-140h]
  unsigned __int8 *v249; // [sp+14h] [bp-140h]
  char *format; // [sp+18h] [bp-13Ch]
  int v251; // [sp+1Ch] [bp-138h]
  char v252[48]; // [sp+24h] [bp-130h] BYREF
  char v253[256]; // [sp+54h] [bp-100h] BYREF

  v2 = (char *)sub_7ABE0(a1, 0, v253);
  v3 = v2;
  if ( !v2 )
  {
    sub_1E938(v252, 48);
    printf("%s ", v252);
    printf("%s : Can't read out local config file : %s\n", "parse_local_config_file", a1);
    snprintf(byte_22F6A0, 0x100u, "Can't read out local config file : %s", a1);
    sub_3CC5C(byte_22F6A0, v252);
    return 0;
  }
  if ( *(_DWORD *)v2 )
  {
    sub_1E938(v252, 48);
    v4 = 0;
    printf("%s ", v252);
    printf("%s : Can't read out local config file : %s\n", "parse_local_config_file", a1);
    snprintf(byte_22F6A0, 0x100u, "Can't read out local config file : %s", a1);
    sub_3CC5C(byte_22F6A0, v252);
  }
  else
  {
    v9 = (_DWORD *)((int (*)(void))sub_7B2D0)();
    if ( v9 && *v9 == 2 )
    {
      v10 = (char *)dword_223680;
      v11 = (const char *)sub_7B4A8();
      strcpy(v10, v11);
      sub_1E938(v252, 48);
      printf("%s ", v252);
      printf("%s : Test_Process : %s\n", "parse_local_config_file", (const char *)dword_223680);
      snprintf(&byte_223984[256], 0x100u, "Test_Process : %s", (const char *)dword_223680);
      sub_3CC5C(&byte_223984[256], v252);
      v12 = (_DWORD *)sub_7B2D0(v3, "Hash_Board");
      v13 = v12;
      if ( v12 && !*v12 )
      {
        v14 = (_DWORD *)sub_7B2D0(v12, "Miner_Type");
        if ( v14 && *v14 == 2 )
        {
          v15 = (char *)(dword_223680 + 16);
          v16 = (const char *)sub_7B4A8();
          strcpy(v15, v16);
          sub_1E938(v252, 48);
          printf("%s ", v252);
          printf("%s : Miner_Type : %s\n", "parse_local_config_file", (const char *)(dword_223680 + 16));
          snprintf(&byte_223C84[256], 0x100u, "Miner_Type : %s", (const char *)(dword_223680 + 16));
          sub_3CC5C(&byte_223C84[256], v252);
          v17 = (_DWORD *)sub_7B2D0(v13, "Board_Name");
          if ( v17 && *v17 == 2 )
          {
            v18 = (char *)(dword_223680 + 32);
            v19 = (const char *)sub_7B4A8();
            strcpy(v18, v19);
            sub_1E938(v252, 48);
            printf("%s ", v252);
            printf("%s : Board_Name : %s\n", "parse_local_config_file", (const char *)(dword_223680 + 32));
            snprintf(byte_223F84, 0x100u, "Board_Name : %s", (const char *)(dword_223680 + 32));
            sub_3CC5C(byte_223F84, v252);
            v20 = (_DWORD *)sub_7B2D0(v13, "Asic_Type");
            if ( v20 && *v20 == 2 )
            {
              v21 = (char *)(dword_223680 + 48);
              v22 = (const char *)sub_7B4A8();
              strcpy(v21, v22);
              sub_1E938(v252, 48);
              printf("%s ", v252);
              printf("%s : Asic_Type : %s\n", "parse_local_config_file", (const char *)(dword_223680 + 48));
              snprintf(byte_224184, 0x100u, "Asic_Type : %s", (const char *)(dword_223680 + 48));
              sub_3CC5C(byte_224184, v252);
              v23 = (_DWORD *)sub_7B2D0(v13, "Asic_Num");
              if ( v23 && *v23 == 3 )
              {
                v24 = dword_223680;
                *(_DWORD *)(v24 + 64) = sub_7B604();
                sub_1E938(v252, 48);
                printf("%s ", v252);
                printf("%s : Asic_Num : %d\n", "parse_local_config_file", *(_DWORD *)(dword_223680 + 64));
                snprintf(byte_224384, 0x100u, "Asic_Num : %d", *(_DWORD *)(dword_223680 + 64));
                sub_3CC5C(byte_224384, v252);
                v25 = (_DWORD *)sub_7B2D0(v13, "Voltage_Domain");
                if ( v25 && *v25 == 3 )
                {
                  v26 = dword_223680;
                  *(_DWORD *)(v26 + 80) = sub_7B604();
                  sub_1E938(v252, 48);
                  printf("%s ", v252);
                  printf("%s : Voltage_Domain : %d\n", "parse_local_config_file", *(_DWORD *)(dword_223680 + 80));
                  snprintf(byte_224584, 0x100u, "Voltage_Domain : %d", *(_DWORD *)(dword_223680 + 80));
                  sub_3CC5C(byte_224584, v252);
                  v27 = (_DWORD *)sub_7B2D0(v13, "Asic_Num_Per_Voltage_Domain");
                  if ( v27 && *v27 == 3 )
                  {
                    v28 = dword_223680;
                    *(_DWORD *)(v28 + 84) = sub_7B604();
                    sub_1E938(v252, 48);
                    printf("%s ", v252);
                    printf(
                      "%s : Asic_Num_Per_Voltage_Domain : %d\n",
                      "parse_local_config_file",
                      *(_DWORD *)(dword_223680 + 84));
                    snprintf(byte_224784, 0x100u, "Asic_Num_Per_Voltage_Domain : %d", *(_DWORD *)(dword_223680 + 84));
                    sub_3CC5C(byte_224784, v252);
                    v29 = (_DWORD *)sub_7B2D0(v13, "Has_Pic");
                    if ( v29 && (unsigned int)(*v29 - 5) <= 1 )
                    {
                      *(_BYTE *)(dword_223680 + 244) = *v29 == 5;
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      if ( *(_BYTE *)(dword_223680 + 244) )
                        v50 = "true";
                      else
                        v50 = "false";
                      printf("%s : Has_Pic : %s\n", "parse_local_config_file", v50);
                      if ( *(_BYTE *)(dword_223680 + 244) )
                        v51 = "true";
                      else
                        v51 = "false";
                      snprintf(byte_224984, 0x100u, "Has_Pic : %s", v51);
                      sub_3CC5C(byte_224984, v252);
                    }
                    else
                    {
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf(
                        "%s : Can't read out Has_Pic in %s,will set default value\n",
                        "parse_local_config_file",
                        a1);
                      snprintf(byte_224884, 0x100u, "Can't read out Has_Pic in %s,will set default value", a1);
                      sub_3CC5C(byte_224884, v252);
                      *(_BYTE *)(dword_223680 + 244) = 1;
                    }
                    v30 = (_DWORD *)sub_7B2D0(v13, "Smooth_Voltage");
                    if ( v30 && (unsigned int)(*v30 - 5) <= 1 )
                    {
                      *(_BYTE *)(dword_223680 + 245) = *v30 == 5;
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      if ( *(_BYTE *)(dword_223680 + 245) )
                        v54 = "true";
                      else
                        v54 = "false";
                      printf("%s : Smooth_Voltage : %s\n", "parse_local_config_file", v54);
                      if ( *(_BYTE *)(dword_223680 + 245) )
                        v55 = "true";
                      else
                        v55 = "false";
                      snprintf(byte_224B84, 0x100u, "Smooth_Voltage : %s", v55);
                      sub_3CC5C(byte_224B84, v252);
                    }
                    else
                    {
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf(
                        "%s : Can't read out Smooth_Voltage in %s,will set default value\n",
                        "parse_local_config_file",
                        a1);
                      snprintf(byte_224A84, 0x100u, "Can't read out Smooth_Voltage in %s,will set default value", a1);
                      sub_3CC5C(byte_224A84, v252);
                      *(_BYTE *)(dword_223680 + 245) = 0;
                    }
                    v31 = (_DWORD *)sub_7B2D0(v13, "Inc_Freq_Delay");
                    if ( v31 && *v31 == 3 )
                    {
                      v52 = dword_223680;
                      *(_DWORD *)(v52 + 248) = sub_7B604();
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf("%s : Inc_Freq_Delay : %d\n", "parse_local_config_file", *(_DWORD *)(dword_223680 + 248));
                      snprintf(byte_224E84, 0x100u, "Inc_Freq_Delay : %d", *(_DWORD *)(dword_223680 + 248));
                      sub_3CC5C(byte_224E84, v252);
                    }
                    else
                    {
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf(
                        "%s : Can't read out Inc_Freq_Delay in %s,will set default value\n",
                        "parse_local_config_file",
                        a1);
                      snprintf(byte_224C84, 0x100u, "Can't read out Inc_Freq_Delay in %s,will set default value", a1);
                      sub_3CC5C(byte_224C84, v252);
                      *(_DWORD *)(dword_223680 + 248) = 400;
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf("%s : Inc_Freq_Delay : %d\n", "parse_local_config_file", *(_DWORD *)(dword_223680 + 248));
                      snprintf(byte_224D84, 0x100u, "Inc_Freq_Delay : %d", *(_DWORD *)(dword_223680 + 248));
                      sub_3CC5C(byte_224D84, v252);
                    }
                    v32 = (_DWORD *)sub_7B2D0(v13, "Voltage_Adjust_Step");
                    if ( v32 && *v32 == 3 )
                    {
                      v53 = dword_223680;
                      *(_DWORD *)(v53 + 252) = sub_7B604();
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf(
                        "%s : Voltage_Adjust_Step : %d\n",
                        "parse_local_config_file",
                        *(_DWORD *)(dword_223680 + 252));
                      snprintf(byte_225184, 0x100u, "Voltage_Adjust_Step : %d", *(_DWORD *)(dword_223680 + 252));
                      sub_3CC5C(byte_225184, v252);
                    }
                    else
                    {
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf(
                        "%s : Can't read out Voltage_Adjust_Step in %s,will set default value\n",
                        "parse_local_config_file",
                        a1);
                      snprintf(
                        byte_224F84,
                        0x100u,
                        "Can't read out Voltage_Adjust_Step in %s,will set default value",
                        a1);
                      sub_3CC5C(byte_224F84, v252);
                      *(_DWORD *)(dword_223680 + 252) = 5;
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf(
                        "%s : Voltage_Adjust_Step : %d\n",
                        "parse_local_config_file",
                        *(_DWORD *)(dword_223680 + 252));
                      snprintf(byte_225084, 0x100u, "Voltage_Adjust_Step : %d", *(_DWORD *)(dword_223680 + 252));
                      sub_3CC5C(byte_225084, v252);
                    }
                    v33 = (_DWORD *)sub_7B2D0(v13, "Wait_Board_Temp");
                    if ( v33 && *v33 == 3 )
                    {
                      v36 = dword_223680;
                      *(_DWORD *)(v36 + 256) = sub_7B604();
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf("%s : Wait_Board_Temp : %d\n", "parse_local_config_file", *(_DWORD *)(dword_223680 + 256));
                      snprintf(byte_225484, 0x100u, "Wait_Board_Temp : %d", *(_DWORD *)(dword_223680 + 256));
                      sub_3CC5C(byte_225484, v252);
                    }
                    else
                    {
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf(
                        "%s : Can't read out Wait_Board_Temp in %s,will set default value\n",
                        "parse_local_config_file",
                        a1);
                      snprintf(byte_225284, 0x100u, "Can't read out Wait_Board_Temp in %s,will set default value", a1);
                      sub_3CC5C(byte_225284, v252);
                      *(_DWORD *)(dword_223680 + 256) = 0;
                      sub_1E938(v252, 48);
                      printf("%s ", v252);
                      printf("%s : Wait_Board_Temp : %d\n", "parse_local_config_file", *(_DWORD *)(dword_223680 + 256));
                      snprintf(byte_225384, 0x100u, "Wait_Board_Temp : %d", *(_DWORD *)(dword_223680 + 256));
                      sub_3CC5C(byte_225384, v252);
                    }
                    v34 = (_DWORD *)sub_7B2D0(v13, "Sensor_Info");
                    v35 = v34;
                    if ( v34 && !*v34 )
                    {
                      v37 = (_DWORD *)sub_7B2D0(v34, "Read_Temperature_From_Pic");
                      if ( v37 && (unsigned int)(*v37 - 5) <= 1 )
                      {
                        *(_BYTE *)(dword_223680 + 89) = *v37 == 5;
                        sub_1E938(v252, 48);
                        printf("%s ", v252);
                        if ( *(_BYTE *)(dword_223680 + 89) )
                          v38 = "true";
                        else
                          v38 = "false";
                        printf("%s : Read_Temperature_From_Pic : %s\n", "parse_local_config_file", v38);
                        if ( *(_BYTE *)(dword_223680 + 89) )
                          v39 = "true";
                        else
                          v39 = "false";
                        snprintf(byte_225784, 0x100u, "Read_Temperature_From_Pic : %s", v39);
                        sub_3CC5C(byte_225784, v252);
                        v40 = (_DWORD *)sub_7B2D0(v35, "Read_Temperature_From_Asic");
                        if ( v40 && (unsigned int)(*v40 - 5) <= 1 )
                        {
                          *(_BYTE *)(dword_223680 + 90) = *v40 == 5;
                          sub_1E938(v252, 48);
                          printf("%s ", v252);
                          if ( *(_BYTE *)(dword_223680 + 90) )
                            v41 = "true";
                          else
                            v41 = "false";
                          printf("%s : Read_Temperature_From_Asic : %s\n", "parse_local_config_file", v41);
                          if ( *(_BYTE *)(dword_223680 + 90) )
                            v42 = "true";
                          else
                            v42 = "false";
                          snprintf(byte_225984, 0x100u, "Read_Temperature_From_Asic : %s", v42);
                          sub_3CC5C(byte_225984, v252);
                          v43 = (_DWORD *)sub_7B2D0(v35, "Read_Temperature_From_CtrlBoard");
                          if ( v43 && (unsigned int)(*v43 - 5) <= 1 )
                          {
                            *(_BYTE *)(dword_223680 + 88) = *v43 == 5;
                            sub_1E938(v252, 48);
                            printf("%s ", v252);
                            if ( *(_BYTE *)(dword_223680 + 88) )
                              v46 = "true";
                            else
                              v46 = "false";
                            printf("%s : Read_Temperature_From_CtrlBoard : %s\n", "parse_local_config_file", v46);
                            if ( *(_BYTE *)(dword_223680 + 88) )
                              v47 = "true";
                            else
                              v47 = "false";
                            snprintf(byte_225B84, 0x100u, "Read_Temperature_From_CtrlBoard : %s", v47);
                            sub_3CC5C(byte_225B84, v252);
                          }
                          else
                          {
                            sub_1E938(v252, 48);
                            printf("%s ", v252);
                            printf(
                              "%s : Can't read out Read_Temperature_From_CtrlBoard in %s,will set default value\n",
                              "parse_local_config_file",
                              a1);
                            snprintf(
                              byte_225A84,
                              0x100u,
                              "Can't read out Read_Temperature_From_CtrlBoard in %s,will set default value",
                              a1);
                            sub_3CC5C(byte_225A84, v252);
                            *(_BYTE *)(dword_223680 + 88) = 0;
                          }
                          v44 = (int *)sub_7B2D0(v35, "Pic_Sensor");
                          v45 = v44;
                          if ( v44 && (v4 = *v44) == 0 )
                          {
                            v48 = (_DWORD *)sub_7B2D0(v44, "Pic_Sensor_Model");
                            if ( v48 && *v48 == 2 )
                            {
                              dest = (char *)(dword_223680 + 92);
                              v49 = (const char *)sub_7B4A8();
                              strcpy(dest, v49);
                              sub_1E938(v252, 48);
                              printf("%s ", v252);
                              printf(
                                "%s : Pic_Sensor_Model : %s\n",
                                "parse_local_config_file",
                                (const char *)(dword_223680 + 92));
                              snprintf(
                                &byte_225D84[256],
                                0x100u,
                                "Pic_Sensor_Model : %s",
                                (const char *)(dword_223680 + 92));
                              sub_3CC5C(&byte_225D84[256], v252);
                              if ( !sub_2064C(dword_223680 + 92) )
                                return 0;
                              v56 = (_DWORD *)sub_7B2D0(v45, "Pic_Sensor_Addr");
                              v247 = v56;
                              if ( !v56 || *v56 != 1 )
                              {
                                sub_1E938(v252, 48);
                                v4 = 0;
                                printf("%s ", v252);
                                printf("%s : Can't read out Pic_Sensor_Addr in %s\n", "parse_local_config_file", a1);
                                snprintf(byte_225F84, 0x100u, "Can't read out Pic_Sensor_Addr in %s", a1);
                                sub_3CC5C(byte_225F84, v252);
                                goto LABEL_4;
                              }
                              dword_226084 = sub_7B3A0();
                              if ( (unsigned int)dword_226084 > 4 )
                              {
                                sub_1E938(v252, 48);
                                printf("%s ", v252);
                                printf(
                                  "%s : There are %d pic sensors in local config file, but LOCAL_CONFIG_MAX_PIC_SENSOR_NUM is %d\n",
                                  "parse_local_config_file",
                                  dword_226084,
                                  4);
                                snprintf(
                                  byte_226088,
                                  0x100u,
                                  "There are %d pic sensors in local config file, but LOCAL_CONFIG_MAX_PIC_SENSOR_NUM is %d",
                                  dword_226084,
                                  4);
                                sub_3CC5C(byte_226088, v252);
                                goto LABEL_4;
                              }
                              sub_1E938(v252, 48);
                              printf("%s ", v252);
                              printf("%s : gPic_sensor_num : %d\n", "parse_local_config_file", dword_226084);
                              snprintf(&byte_226088[256], 0x100u, "gPic_sensor_num : %d", dword_226084);
                              sub_3CC5C(&byte_226088[256], v252);
                              v244 = v3;
                              v57 = &dword_226288;
                              dword_226288 = 0;
                              while ( 1 )
                              {
                                v58 = (unsigned __int8 *)v57;
                                v59 = (char *)v57 - (char *)&dword_226288;
                                if ( dword_226084 <= (unsigned int)((char *)v57 - (char *)&dword_226288) )
                                  break;
                                v60 = (_DWORD *)sub_7B3B4(v247, (char *)v57 - (char *)&dword_226288);
                                if ( !v60 || *v60 != 3 )
                                {
                                  v3 = v244;
                                  v4 = 0;
                                  sub_1E938(v252, 48);
                                  printf("%s ", v252);
                                  printf("%s : Can't find Pic_Sensor_Addr_array[%d]\n", "parse_local_config_file", v59);
                                  snprintf(byte_22628C, 0x100u, "Can't find Pic_Sensor_Addr_array[%d]", v59);
                                  sub_3CC5C(byte_22628C, v252);
                                  goto LABEL_4;
                                }
                                *(_BYTE *)v57 = sub_7B604();
                                sub_1E938(v252, 48);
                                printf("%s ", v252);
                                v61 = *(unsigned __int8 *)v57;
                                v57 = (int *)((char *)v57 + 1);
                                printf(
                                  "%s : gPic_sensor_low_3_bits_addr[%d] : %d\n",
                                  "parse_local_config_file",
                                  v59,
                                  v61);
                                snprintf(byte_22638C, 0x100u, "gPic_sensor_low_3_bits_addr[%d] : %d", v59, *v58);
                                sub_3CC5C(byte_22638C, v252);
                              }
                              v3 = v244;
                              v62 = (int *)sub_7B2D0(v35, "Asic_Sensor");
                              v63 = v62;
                              if ( !v62 || (v4 = *v62) != 0 )
                              {
                                sub_1E938(v252, 48);
                                v4 = 0;
                                printf("%s ", v252);
                                printf("%s : Can't read out Asic_Sensor in %s\n", "parse_local_config_file", a1);
                                snprintf(byte_22648C, 0x100u, "Can't read out Asic_Sensor in %s", a1);
                                sub_3CC5C(byte_22648C, v252);
                                goto LABEL_4;
                              }
                              v64 = (_DWORD *)sub_7B2D0(v62, "Asic_Sensor_Model");
                              if ( !v64 || *v64 != 2 )
                              {
                                sub_1E938(v252, 48);
                                v4 = 0;
                                printf("%s ", v252);
                                printf("%s : Can't read out Asic_Sensor_Model in %s\n", "parse_local_config_file", a1);
                                snprintf(byte_22658C, 0x100u, "Can't read out Asic_Sensor_Model in %s", a1);
                                sub_3CC5C(byte_22658C, v252);
                                goto LABEL_4;
                              }
                              v65 = (char *)(dword_223680 + 124);
                              v66 = (const char *)sub_7B4A8();
                              strcpy(v65, v66);
                              sub_1E938(v252, 48);
                              printf("%s ", v252);
                              printf(
                                "%s : Asic_Sensor_Model : %s\n",
                                "parse_local_config_file",
                                (const char *)(dword_223680 + 124));
                              snprintf(
                                byte_22668C,
                                0x100u,
                                "Asic_Sensor_Model : %s",
                                (const char *)(dword_223680 + 124));
                              sub_3CC5C(byte_22668C, v252);
                              if ( !sub_20530(dword_223680 + 124) )
                                return 0;
                              v67 = (_DWORD *)sub_7B2D0(v63, "Asic_Sensor_Addr");
                              v248 = v67;
                              if ( !v67 || *v67 != 1 )
                              {
                                sub_1E938(v252, 48);
                                v4 = 0;
                                printf("%s ", v252);
                                printf("%s : Can't read out Asic_Sensor_Addr in %s\n", "parse_local_config_file", a1);
                                snprintf(byte_22678C, 0x100u, "Can't read out Asic_Sensor_Addr in %s", a1);
                                sub_3CC5C(byte_22678C, v252);
                                goto LABEL_4;
                              }
                              dword_22688C = sub_7B3A0();
                              if ( (unsigned int)dword_22688C > 4 )
                              {
                                sub_1E938(v252, 48);
                                printf("%s ", v252);
                                printf(
                                  "%s : There are %d asic sensors in local config file, but LOCAL_CONFIG_MAX_ASIC_SENSOR_NUM is %d\n",
                                  "parse_local_config_file",
                                  dword_22688C,
                                  4);
                                snprintf(
                                  byte_226890,
                                  0x100u,
                                  "There are %d asic sensors in local config file, but LOCAL_CONFIG_MAX_ASIC_SENSOR_NUM is %d",
                                  dword_22688C,
                                  4);
                                sub_3CC5C(byte_226890, v252);
                                goto LABEL_4;
                              }
                              sub_1E938(v252, 48);
                              printf("%s ", v252);
                              printf("%s : gAsic_sensor_num : %d\n", "parse_local_config_file", dword_22688C);
                              snprintf(byte_226990, 0x100u, "gAsic_sensor_num : %d", dword_22688C);
                              sub_3CC5C(byte_226990, v252);
                              v68 = &dword_226A90;
                              dword_226A90 = 0;
                              while ( 1 )
                              {
                                v69 = (unsigned __int8 *)v68;
                                v70 = (char *)v68 - (char *)&dword_226A90;
                                if ( dword_22688C <= (unsigned int)((char *)v68 - (char *)&dword_226A90) )
                                  break;
                                v71 = (_DWORD *)sub_7B3B4(v248, (char *)v68 - (char *)&dword_226A90);
                                if ( !v71 || *v71 != 3 )
                                {
                                  v3 = v244;
                                  v4 = 0;
                                  sub_1E938(v252, 48);
                                  printf("%s ", v252);
                                  printf("%s : Can't find Asic_Sensor_Addr_array[%d]\n", "parse_local_config_file", v70);
                                  snprintf(byte_226A94, 0x100u, "Can't find Asic_Sensor_Addr_array[%d]", v70);
                                  sub_3CC5C(byte_226A94, v252);
                                  goto LABEL_4;
                                }
                                *(_BYTE *)v68 = sub_7B604();
                                sub_1E938(v252, 48);
                                printf("%s ", v252);
                                v72 = *(unsigned __int8 *)v68;
                                v68 = (int *)((char *)v68 + 1);
                                printf("%s : gAsic_sensor_addr[%d] : %d\n", "parse_local_config_file", v70, v72);
                                snprintf(byte_226B94, 0x100u, "gAsic_sensor_addr[%d] : %d", v70, *v69);
                                sub_3CC5C(byte_226B94, v252);
                              }
                              v3 = v244;
                              v73 = (int *)sub_7B2D0(v35, "CtrlBoard_Sensor");
                              v74 = v73;
                              if ( !v73 || (v4 = *v73) != 0 )
                              {
                                sub_1E938(v252, 48);
                                v4 = 0;
                                printf("%s ", v252);
                                printf("%s : Can't read out CtrlBoard_Sensor in %s\n", "parse_local_config_file", a1);
                                snprintf(byte_226C94, 0x100u, "Can't read out CtrlBoard_Sensor in %s", a1);
                                sub_3CC5C(byte_226C94, v252);
                                goto LABEL_4;
                              }
                              v75 = (_DWORD *)sub_7B2D0(v73, "CtrlBoard_Sensor_Model");
                              if ( !v75 || *v75 != 2 )
                              {
                                sub_1E938(v252, 48);
                                v4 = 0;
                                printf("%s ", v252);
                                printf(
                                  "%s : Can't read out CtrlBoard_Sensor_Model in %s\n",
                                  "parse_local_config_file",
                                  a1);
                                snprintf(byte_226D94, 0x100u, "Can't read out CtrlBoard_Sensor_Model in %s", a1);
                                sub_3CC5C(byte_226D94, v252);
                                goto LABEL_4;
                              }
                              desta = (char *)(dword_223680 + 156);
                              v76 = (const char *)sub_7B4A8();
                              strcpy(desta, v76);
                              sub_1E938(v252, 48);
                              printf("%s ", v252);
                              printf(
                                "%s : CtrlBoard_Sensor_Model : %s\n",
                                "parse_local_config_file",
                                (const char *)(dword_223680 + 156));
                              snprintf(
                                byte_226E94,
                                0x100u,
                                "CtrlBoard_Sensor_Model : %s",
                                (const char *)(dword_223680 + 156));
                              sub_3CC5C(byte_226E94, v252);
                              if ( !sub_207C4(dword_223680 + 156) )
                                return 0;
                              v77 = (_DWORD *)sub_7B2D0(v74, "CtrlBoard_Sensor_Addr");
                              v78 = v77;
                              if ( v77 && *v77 == 1 )
                              {
                                dword_227094 = sub_7B3A0();
                                if ( (unsigned int)dword_227094 > 2 )
                                {
                                  sub_1E938(v252, 48);
                                  printf("%s ", v252);
                                  printf(
                                    "%s : There are %d ctrlboard sensors in local config file, but LOCAL_CONFIG_MAX_CTRLB"
                                    "OARD_SENSOR_NUM is %d\n",
                                    "parse_local_config_file",
                                    dword_227094,
                                    2);
                                  snprintf(
                                    byte_227098,
                                    0x100u,
                                    "There are %d ctrlboard sensors in local config file, but LOCAL_CONFIG_MAX_CTRLBOARD_"
                                    "SENSOR_NUM is %d",
                                    dword_227094,
                                    2);
                                  sub_3CC5C(byte_227098, v252);
                                }
                                else
                                {
                                  sub_1E938(v252, 48);
                                  v79 = 0;
                                  printf("%s ", v252);
                                  printf("%s : gCtrlBoard_sensor_num : %d\n", "parse_local_config_file", dword_227094);
                                  snprintf(byte_227198, 0x100u, "gCtrlBoard_sensor_num : %d", dword_227094);
                                  sub_3CC5C(byte_227198, v252);
                                  word_227298 = 0;
                                  v80 = &byte_227198[255];
                                  while ( v79 < dword_227094 )
                                  {
                                    v81 = (_DWORD *)sub_7B3B4(v78, v79);
                                    if ( !v81 || *v81 != 3 )
                                    {
                                      sub_1E938(v252, 48);
                                      v4 = 0;
                                      printf("%s ", v252);
                                      printf(
                                        "%s : Can't find CtrlBoard_Sensor_Addr_array[%d]\n",
                                        "parse_local_config_file",
                                        v79);
                                      snprintf(byte_22729C, 0x100u, "Can't find CtrlBoard_Sensor_Addr_array[%d]", v79);
                                      sub_3CC5C(byte_22729C, v252);
                                      goto LABEL_4;
                                    }
                                    v80[1] = sub_7B604();
                                    sub_1E938(v252, 48);
                                    printf("%s ", v252);
                                    printf(
                                      "%s : gCtrlBoard_sensor_low_3_bits_addr[%d] : %d\n",
                                      "parse_local_config_file",
                                      v79,
                                      (unsigned __int8)v80[1]);
                                    snprintf(
                                      byte_22739C,
                                      0x100u,
                                      "gCtrlBoard_sensor_low_3_bits_addr[%d] : %d",
                                      v79,
                                      (unsigned __int8)v80[1]);
                                    sub_3CC5C(byte_22739C, v252);
                                    v82 = (unsigned __int8)*++v80;
                                    v83 = dword_223680 + 4 * v79++;
                                    *(_DWORD *)(v83 + 172) = v82;
                                  }
                                  v84 = (char *)sub_7B2D0(v13, "Power_Version");
                                  v245 = v84;
                                  if ( !v84 || *(_DWORD *)v84 != 1 )
                                  {
                                    sub_1E938(v252, 48);
                                    v4 = 0;
                                    printf("%s ", v252);
                                    printf("%s : Can't read out Power_Version in %s\n", "parse_local_config_file", a1);
                                    snprintf(byte_22749C, 0x100u, "Can't read out Power_Version in %s", a1);
                                    sub_3CC5C(byte_22749C, v252);
                                    goto LABEL_4;
                                  }
                                  dword_61DD28 = sub_7B3A0();
                                  if ( (unsigned int)dword_61DD28 > 0x10 )
                                  {
                                    sub_1E938(v252, 48);
                                    v4 = 0;
                                    printf("%s ", v252);
                                    printf(
                                      "%s : There are %d power version in local config file, but LOCAL_CONFIG_MAX_SUPPORT"
                                      "_POWER_TYPE is %d\n",
                                      "parse_local_config_file",
                                      dword_61DD28,
                                      16);
                                    snprintf(
                                      byte_22759C,
                                      0x100u,
                                      "There are %d power version in local config file, but LOCAL_CONFIG_MAX_SUPPORT_POWER_TYPE is %d",
                                      dword_61DD28,
                                      16);
                                    sub_3CC5C(byte_22759C, v252);
                                  }
                                  else
                                  {
                                    sub_1E938(v252, 48);
                                    printf("%s ", v252);
                                    printf(
                                      "%s : Can support %d apw power type\n",
                                      "parse_local_config_file",
                                      dword_61DD28);
                                    snprintf(byte_22769C, 0x100u, "Can support %d apw power type", dword_61DD28);
                                    v85 = (unsigned __int8 *)&unk_6E3308;
                                    sub_3CC5C(byte_22769C, v252);
                                    while ( 1 )
                                    {
                                      v86 = v85 - (unsigned __int8 *)&unk_6E3308;
                                      v249 = v85;
                                      if ( dword_61DD28 <= (unsigned int)(v85 - (unsigned __int8 *)&unk_6E3308) )
                                        break;
                                      v87 = (_DWORD *)sub_7B3B4(v245, v85 - (unsigned __int8 *)&unk_6E3308);
                                      if ( !v87 || *v87 != 3 )
                                      {
                                        sub_1E938(v252, 48);
                                        v4 = 0;
                                        printf("%s ", v252);
                                        printf("%s : Can't find Power_Version[%d]\n", "parse_local_config_file", v86);
                                        snprintf(byte_22779C, 0x100u, "Can't find Power_Version[%d]", v86);
                                        sub_3CC5C(byte_22779C, v252);
                                        goto LABEL_4;
                                      }
                                      *v85 = sub_7B604();
                                      sub_1E938(v252, 48);
                                      printf("%s ", v252);
                                      v88 = *v85++;
                                      printf("%s : APW_power_version[%d] = %d\n", "parse_local_config_file", v86, v88);
                                      snprintf(byte_22789C, 0x100u, "APW_power_version[%d] = %d", v86, *v249);
                                      sub_3CC5C(byte_22789C, v252);
                                    }
                                    v89 = (char *)sub_7B2D0(v3, "Test_Info");
                                    v90 = v89;
                                    if ( !v89 || *(_DWORD *)v89 )
                                    {
                                      sub_1E938(v252, 48);
                                      v4 = 0;
                                      printf("%s ", v252);
                                      printf("%s : Can't read out Test_Info in %s\n", "parse_local_config_file", a1);
                                      snprintf(byte_22799C, 0x100u, "Can't read out Test_Info in %s", a1);
                                      sub_3CC5C(byte_22799C, v252);
                                      goto LABEL_4;
                                    }
                                    v91 = (_DWORD *)sub_7B2D0(v89, "Factory_Mode");
                                    if ( v91 && (unsigned int)(*v91 - 5) <= 1 )
                                    {
                                      *(_BYTE *)(dword_223680 + 260) = *v91 == 5;
                                      sub_1E938(v252, 48);
                                      printf("%s ", v252);
                                      if ( *(_BYTE *)(dword_223680 + 260) )
                                        v92 = "true";
                                      else
                                        v92 = "false";
                                      printf("%s : Factory_Mode : %s\n", "parse_local_config_file", v92);
                                      if ( *(_BYTE *)(dword_223680 + 260) )
                                        v93 = "true";
                                      else
                                        v93 = "false";
                                      snprintf(byte_227B9C, 0x100u, "Factory_Mode : %s", v93);
                                      sub_3CC5C(byte_227B9C, v252);
                                      v94 = (_DWORD *)sub_7B2D0(v90, "Bypass_Scan_Code_Gun");
                                      if ( v94 && (unsigned int)(*v94 - 5) <= 1 )
                                      {
                                        *(_BYTE *)(dword_223680 + 261) = *v94 == 5;
                                        sub_1E938(v252, 48);
                                        printf("%s ", v252);
                                        if ( *(_BYTE *)(dword_223680 + 261) )
                                          v95 = "true";
                                        else
                                          v95 = "false";
                                        printf("%s : Bypass_Scan_Code_Gun : %s\n", "parse_local_config_file", v95);
                                        if ( *(_BYTE *)(dword_223680 + 261) )
                                          v96 = "true";
                                        else
                                          v96 = "false";
                                        snprintf(byte_227D9C, 0x100u, "Bypass_Scan_Code_Gun : %s", v96);
                                        sub_3CC5C(byte_227D9C, v252);
                                        if ( sub_7B2D0(v90, "Freq_Flex") )
                                        {
                                          v97 = (_DWORD *)sub_7B2D0(v90, "Freq_Flex");
                                          if ( !v97 || *v97 != 3 )
                                          {
                                            sub_1E938(v252, 48);
                                            v4 = 0;
                                            printf("%s ", v252);
                                            printf(
                                              "%s : Can't read out Freq_Flex in %s\n",
                                              "parse_local_config_file",
                                              a1);
                                            snprintf(byte_227E9C, 0x100u, "Can't read out Freq_Flex in %s", a1);
                                            sub_3CC5C(byte_227E9C, v252);
                                            goto LABEL_4;
                                          }
                                          v102 = dword_223680;
                                          *(_DWORD *)(v102 + 644) = sub_7B604();
                                          sub_1E938(v252, 48);
                                          printf("%s ", v252);
                                          printf(
                                            "%s : Freq_Flex : %d\n",
                                            "parse_local_config_file",
                                            *(_DWORD *)(dword_223680 + 644));
                                          snprintf(
                                            byte_227F9C,
                                            0x100u,
                                            "Freq_Flex : %d",
                                            *(_DWORD *)(dword_223680 + 644));
                                          sub_3CC5C(byte_227F9C, v252);
                                        }
                                        else
                                        {
                                          *(_DWORD *)(dword_223680 + 644) = 0;
                                          sub_1E938(v252, 48);
                                          printf("%s ", v252);
                                          printf("%s : Can't read out Freq_Flex,set it 0\n", "parse_local_config_file");
                                          strcpy(byte_22809C, "Can't read out Freq_Flex,set it 0");
                                          sub_3CC5C(byte_22809C, v252);
                                        }
                                        if ( sub_7B2D0(v90, "Find_Stupid_Asic") )
                                        {
                                          v98 = (_DWORD *)sub_7B2D0(v90, "Find_Stupid_Asic");
                                          if ( !v98 || (unsigned int)(*v98 - 5) > 1 )
                                          {
                                            sub_1E938(v252, 48);
                                            v4 = 0;
                                            printf("%s ", v252);
                                            printf(
                                              "%s : Can't read out Find_Stupid_Asic in %s\n",
                                              "parse_local_config_file",
                                              a1);
                                            snprintf(byte_22819C, 0x100u, "Can't read out Find_Stupid_Asic in %s", a1);
                                            sub_3CC5C(byte_22819C, v252);
                                            goto LABEL_4;
                                          }
                                          *(_BYTE *)(dword_223680 + 642) = *v98 == 5;
                                          sub_1E938(v252, 48);
                                          printf("%s ", v252);
                                          if ( *(_BYTE *)(dword_223680 + 642) )
                                            v103 = "true";
                                          else
                                            v103 = "false";
                                          printf("%s : Find_Stupid_Asic : %s\n", "parse_local_config_file", v103);
                                          if ( *(_BYTE *)(dword_223680 + 642) )
                                            v104 = "true";
                                          else
                                            v104 = "false";
                                          snprintf(byte_22829C, 0x100u, "Find_Stupid_Asic : %s", v104);
                                          sub_3CC5C(byte_22829C, v252);
                                        }
                                        else
                                        {
                                          *(_BYTE *)(dword_223680 + 642) = 1;
                                          sub_1E938(v252, 48);
                                          printf("%s ", v252);
                                          printf(
                                            "%s : Can't read out Find_Stupid_Asic,set it true def\n",
                                            "parse_local_config_file");
                                          strcpy(byte_22839C, "Can't read out Find_Stupid_Asic,set it true def");
                                          sub_3CC5C(byte_22839C, v252);
                                        }
                                        if ( sub_7B2D0(v90, "Max_PT1_Board_Poweron_Time") )
                                        {
                                          v99 = (_DWORD *)sub_7B2D0(v90, "Max_PT1_Board_Poweron_Time");
                                          if ( !v99 || *v99 != 3 )
                                          {
                                            sub_1E938(v252, 48);
                                            v4 = 0;
                                            printf("%s ", v252);
                                            printf(
                                              "%s : Can't read out Max_PT1_Board_Poweron_Time in %s\n",
                                              "parse_local_config_file",
                                              a1);
                                            snprintf(
                                              byte_22849C,
                                              0x100u,
                                              "Can't read out Max_PT1_Board_Poweron_Time in %s",
                                              a1);
                                            sub_3CC5C(byte_22849C, v252);
                                            goto LABEL_4;
                                          }
                                          v105 = dword_223680;
                                          *(_DWORD *)(v105 + 264) = sub_7B604();
                                          sub_1E938(v252, 48);
                                          printf("%s ", v252);
                                          printf(
                                            "%s : Max_PT1_Board_Poweron_Time : %d\n",
                                            "parse_local_config_file",
                                            *(_DWORD *)(dword_223680 + 264));
                                          snprintf(
                                            byte_22859C,
                                            0x100u,
                                            "Max_PT1_Board_Poweron_Time : %d",
                                            *(_DWORD *)(dword_223680 + 264));
                                          sub_3CC5C(byte_22859C, v252);
                                        }
                                        else
                                        {
                                          *(_DWORD *)(dword_223680 + 264) = 5;
                                        }
                                        v100 = (_DWORD *)sub_7B2D0(v90, "Test_Method");
                                        v101 = v100;
                                        if ( v100 && !*v100 )
                                        {
                                          v106 = (_DWORD *)sub_7B2D0(v100, "Software_Pattern");
                                          if ( v106 && (unsigned int)(*v106 - 5) <= 1 )
                                          {
                                            *(_BYTE *)(dword_223680 + 268) = *v106 == 5;
                                            sub_1E938(v252, 48);
                                            printf("%s ", v252);
                                            if ( *(_BYTE *)(dword_223680 + 268) )
                                              v107 = "true";
                                            else
                                              v107 = "false";
                                            printf("%s : Software_Pattern : %s\n", "parse_local_config_file", v107);
                                            if ( *(_BYTE *)(dword_223680 + 268) )
                                              v108 = "true";
                                            else
                                              v108 = "false";
                                            snprintf(byte_22889C, 0x100u, "Software_Pattern : %s", v108);
                                            sub_3CC5C(byte_22889C, v252);
                                            v109 = (_DWORD *)sub_7B2D0(v101, "Super_Software_Pattern");
                                            if ( v109 && (unsigned int)(*v109 - 5) <= 1 )
                                            {
                                              *(_BYTE *)(dword_223680 + 269) = *v109 == 5;
                                              sub_1E938(v252, 48);
                                              printf("%s ", v252);
                                              if ( *(_BYTE *)(dword_223680 + 269) )
                                                v111 = "true";
                                              else
                                                v111 = "false";
                                              printf(
                                                "%s : Super_Software_Pattern : %s\n",
                                                "parse_local_config_file",
                                                v111);
                                              if ( *(_BYTE *)(dword_223680 + 269) )
                                                v112 = "true";
                                              else
                                                v112 = "false";
                                              snprintf(byte_228A9C, 0x100u, "Super_Software_Pattern : %s", v112);
                                              sub_3CC5C(byte_228A9C, v252);
                                            }
                                            else
                                            {
                                              sub_1E938(v252, 48);
                                              printf("%s ", v252);
                                              printf(
                                                "%s : Can't read out Super_Software_Pattern in %s,will set default value\n",
                                                "parse_local_config_file",
                                                a1);
                                              snprintf(
                                                byte_22899C,
                                                0x100u,
                                                "Can't read out Super_Software_Pattern in %s,will set default value",
                                                a1);
                                              sub_3CC5C(byte_22899C, v252);
                                              *(_BYTE *)(dword_223680 + 269) = 0;
                                            }
                                            v110 = (_DWORD *)sub_7B2D0(v101, "Hardware_Pattern");
                                            if ( v110 && (unsigned int)(*v110 - 5) <= 1 )
                                            {
                                              *(_BYTE *)(dword_223680 + 270) = *v110 == 5;
                                              sub_1E938(v252, 48);
                                              printf("%s ", v252);
                                              if ( *(_BYTE *)(dword_223680 + 270) )
                                                v113 = "true";
                                              else
                                                v113 = "false";
                                              printf("%s : Hardware_Pattern : %s\n", "parse_local_config_file", v113);
                                              if ( *(_BYTE *)(dword_223680 + 270) )
                                                v114 = "true";
                                              else
                                                v114 = "false";
                                              snprintf(byte_228C9C, 0x100u, "Hardware_Pattern : %s", v114);
                                              sub_3CC5C(byte_228C9C, v252);
                                              v115 = (_DWORD *)sub_7B2D0(v101, "Autogen_Pattern");
                                              if ( v115 && (unsigned int)(*v115 - 5) <= 1 )
                                              {
                                                *(_BYTE *)(dword_223680 + 271) = *v115 == 5;
                                                sub_1E938(v252, 48);
                                                printf("%s ", v252);
                                                if ( *(_BYTE *)(dword_223680 + 271) )
                                                  v116 = "true";
                                                else
                                                  v116 = "false";
                                                printf("%s : Autogen_Pattern : %s\n", "parse_local_config_file", v116);
                                                if ( *(_BYTE *)(dword_223680 + 271) )
                                                  v117 = "true";
                                                else
                                                  v117 = "false";
                                                snprintf(byte_228E9C, 0x100u, "Autogen_Pattern : %s", v117);
                                                sub_3CC5C(byte_228E9C, v252);
                                                v118 = (_DWORD *)sub_7B2D0(v101, "Midstate_Number");
                                                if ( v118 && *v118 == 3 )
                                                {
                                                  v119 = dword_223680;
                                                  *(_DWORD *)(v119 + 272) = sub_7B604();
                                                  sub_1E938(v252, 48);
                                                  printf("%s ", v252);
                                                  printf(
                                                    "%s : Midstate_Number : %d\n",
                                                    "parse_local_config_file",
                                                    *(_DWORD *)(dword_223680 + 272));
                                                  snprintf(
                                                    byte_22909C,
                                                    0x100u,
                                                    "Midstate_Number : %d",
                                                    *(_DWORD *)(dword_223680 + 272));
                                                  sub_3CC5C(byte_22909C, v252);
                                                  v120 = (_DWORD *)sub_7B2D0(v101, "Capture_Pattern");
                                                  if ( v120 && (unsigned int)(*v120 - 5) <= 1 )
                                                  {
                                                    *(_BYTE *)(dword_223680 + 276) = *v120 == 5;
                                                    sub_1E938(v252, 48);
                                                    printf("%s ", v252);
                                                    if ( *(_BYTE *)(dword_223680 + 276) )
                                                      v124 = "true";
                                                    else
                                                      v124 = "false";
                                                    printf(
                                                      "%s : Capture_Pattern : %s\n",
                                                      "parse_local_config_file",
                                                      v124);
                                                    if ( *(_BYTE *)(dword_223680 + 276) )
                                                      v125 = "true";
                                                    else
                                                      v125 = "false";
                                                    snprintf(byte_22929C, 0x100u, "Capture_Pattern : %s", v125);
                                                    sub_3CC5C(byte_22929C, v252);
                                                  }
                                                  else
                                                  {
                                                    sub_1E938(v252, 48);
                                                    printf("%s ", v252);
                                                    printf(
                                                      "%s : Can't read out Capture_Pattern in %s,will set default value\n",
                                                      "parse_local_config_file",
                                                      a1);
                                                    snprintf(
                                                      byte_22919C,
                                                      0x100u,
                                                      "Can't read out Capture_Pattern in %s,will set default value",
                                                      a1);
                                                    sub_3CC5C(byte_22919C, v252);
                                                    *(_BYTE *)(dword_223680 + 276) = 0;
                                                  }
                                                  v121 = sub_7B2D0(v90, "Sweep_Cfg");
                                                  v122 = (const char *)dword_223680;
                                                  v123 = (_DWORD *)v121;
                                                  if ( (!strncmp((const char *)dword_223680, "SWEEP", 5u)
                                                     || !strncmp(v122, "PT3", 3u))
                                                    && (!v123 || *v123) )
                                                  {
                                                    sub_1E938(v252, 48);
                                                    printf("%s ", v252);
                                                    printf(
                                                      "%s : SWEEP Process but no Sweep_Cfg info\n",
                                                      "parse_local_config_file");
                                                    v4 = 0;
                                                    strcpy(byte_22939C, "SWEEP Process but no Sweep_Cfg info");
                                                    sub_3CC5C(byte_22939C, v252);
                                                  }
                                                  else
                                                  {
                                                    v126 = (_DWORD *)sub_7B2D0(v123, "Force_Reset_Power_Mode");
                                                    if ( v126 && (unsigned int)(*v126 - 5) <= 1 )
                                                    {
                                                      *(_DWORD *)(dword_223680 + 280) = *v126 == 5;
                                                      sub_1E938(v252, 48);
                                                      printf("%s ", v252);
                                                      if ( *(_DWORD *)(dword_223680 + 280) )
                                                        v127 = "true";
                                                      else
                                                        v127 = "false";
                                                      printf(
                                                        "%s : Force_Reset_Power_Mode : %s\n",
                                                        "parse_local_config_file",
                                                        v127);
                                                      if ( *(_DWORD *)(dword_223680 + 280) )
                                                        v128 = "true";
                                                      else
                                                        v128 = "false";
                                                      snprintf(byte_22959C, 0x100u, "Force_Reset_Power_Mode : %s", v128);
                                                      sub_3CC5C(byte_22959C, v252);
                                                      v129 = (_DWORD *)sub_7B2D0(v123, "Force_PT2_Before_Sweep");
                                                      if ( v129 && (unsigned int)(*v129 - 5) <= 1 )
                                                      {
                                                        *(_BYTE *)(dword_223680 + 285) = *v129 == 5;
                                                        sub_1E938(v252, 48);
                                                        printf("%s ", v252);
                                                        if ( *(_BYTE *)(dword_223680 + 285) )
                                                          v130 = "true";
                                                        else
                                                          v130 = "false";
                                                        printf(
                                                          "%s : Force_PT2_Before_Sweep : %s\n",
                                                          "parse_local_config_file",
                                                          v130);
                                                        if ( *(_BYTE *)(dword_223680 + 285) )
                                                          v131 = "true";
                                                        else
                                                          v131 = "false";
                                                        snprintf(
                                                          byte_22979C,
                                                          0x100u,
                                                          "Force_PT2_Before_Sweep : %s",
                                                          v131);
                                                        sub_3CC5C(byte_22979C, v252);
                                                        v132 = (_DWORD *)sub_7B2D0(v123, "Data_Reuse_Mode");
                                                        if ( v132 && (unsigned int)(*v132 - 5) <= 1 )
                                                        {
                                                          *(_BYTE *)(dword_223680 + 284) = *v132 == 5;
                                                          sub_1E938(v252, 48);
                                                          printf("%s ", v252);
                                                          if ( *(_BYTE *)(dword_223680 + 284) )
                                                            v133 = "true";
                                                          else
                                                            v133 = "false";
                                                          printf(
                                                            "%s : Data_Reuse_Mode : %s\n",
                                                            "parse_local_config_file",
                                                            v133);
                                                          if ( *(_BYTE *)(dword_223680 + 284) )
                                                            v134 = "true";
                                                          else
                                                            v134 = "false";
                                                          snprintf(byte_22999C, 0x100u, "Data_Reuse_Mode : %s", v134);
                                                          sub_3CC5C(byte_22999C, v252);
                                                          v135 = (_DWORD *)sub_7B2D0(v123, "Freq_Float_Percent");
                                                          if ( v135 && *v135 == 3 )
                                                          {
                                                            v136 = dword_223680;
                                                            *(_DWORD *)(v136 + 288) = sub_7B604();
                                                            sub_1E938(v252, 48);
                                                            printf("%s ", v252);
                                                            printf(
                                                              "%s : Freq_Float_Percent : %d\n",
                                                              "parse_local_config_file",
                                                              *(_DWORD *)(dword_223680 + 288));
                                                            snprintf(
                                                              byte_229B9C,
                                                              0x100u,
                                                              "Freq_Float_Percent : %d",
                                                              *(_DWORD *)(dword_223680 + 288));
                                                            sub_3CC5C(byte_229B9C, v252);
                                                            v137 = (_DWORD *)sub_7B2D0(v123, "Force_Reset_Freq_Range");
                                                            if ( v137 && (unsigned int)(*v137 - 5) <= 1 )
                                                            {
                                                              *(_BYTE *)(dword_223680 + 293) = *v137 == 5;
                                                              sub_1E938(v252, 48);
                                                              printf("%s ", v252);
                                                              if ( *(_BYTE *)(dword_223680 + 293) )
                                                                v138 = "true";
                                                              else
                                                                v138 = "false";
                                                              printf(
                                                                "%s : Force_Reset_Freq_Range : %s\n",
                                                                "parse_local_config_file",
                                                                v138);
                                                              if ( *(_BYTE *)(dword_223680 + 293) )
                                                                v139 = "true";
                                                              else
                                                                v139 = "false";
                                                              snprintf(
                                                                byte_229D9C,
                                                                0x100u,
                                                                "Force_Reset_Freq_Range : %s",
                                                                v139);
                                                              sub_3CC5C(byte_229D9C, v252);
                                                              v140 = (_DWORD *)sub_7B2D0(v123, "Sweep_Min_Freq");
                                                              if ( v140 && *v140 == 3 )
                                                              {
                                                                v141 = dword_223680;
                                                                *(_DWORD *)(v141 + 296) = sub_7B604();
                                                                sub_1E938(v252, 48);
                                                                printf("%s ", v252);
                                                                printf(
                                                                  "%s : Sweep_Min_Freq : %d\n",
                                                                  "parse_local_config_file",
                                                                  *(_DWORD *)(dword_223680 + 296));
                                                                snprintf(
                                                                  byte_229F9C,
                                                                  0x100u,
                                                                  "Sweep_Min_Freq : %d",
                                                                  *(_DWORD *)(dword_223680 + 296));
                                                                sub_3CC5C(byte_229F9C, v252);
                                                                v142 = (_DWORD *)sub_7B2D0(v123, "Sweep_Max_Freq");
                                                                if ( v142 && *v142 == 3 )
                                                                {
                                                                  v143 = dword_223680;
                                                                  *(_DWORD *)(v143 + 300) = sub_7B604();
                                                                  sub_1E938(v252, 48);
                                                                  printf("%s ", v252);
                                                                  printf(
                                                                    "%s : Sweep_Max_Freq : %d\n",
                                                                    "parse_local_config_file",
                                                                    *(_DWORD *)(dword_223680 + 300));
                                                                  snprintf(
                                                                    byte_22A19C,
                                                                    0x100u,
                                                                    "Sweep_Max_Freq : %d",
                                                                    *(_DWORD *)(dword_223680 + 300));
                                                                  sub_3CC5C(byte_22A19C, v252);
                                                                  v144 = (_DWORD *)sub_7B2D0(
                                                                                     v123,
                                                                                     "Force_Local_Cfg_Level");
                                                                  if ( v144 && (unsigned int)(*v144 - 5) <= 1 )
                                                                  {
                                                                    *(_BYTE *)(dword_223680 + 292) = *v144 == 5;
                                                                    sub_1E938(v252, 48);
                                                                    printf("%s ", v252);
                                                                    if ( *(_BYTE *)(dword_223680 + 292) )
                                                                      v145 = "true";
                                                                    else
                                                                      v145 = "false";
                                                                    printf(
                                                                      "%s : Force_Local_Cfg_Level : %s\n",
                                                                      "parse_local_config_file",
                                                                      v145);
                                                                    if ( *(_BYTE *)(dword_223680 + 292) )
                                                                      v146 = "true";
                                                                    else
                                                                      v146 = "false";
                                                                    snprintf(
                                                                      byte_22A39C,
                                                                      0x100u,
                                                                      "Force_Local_Cfg_Level : %s",
                                                                      v146);
                                                                    sub_3CC5C(byte_22A39C, v252);
                                                                    v147 = (_DWORD *)sub_7B2D0(v123, "Sweep_Vol_Diff");
                                                                    if ( v147 && *v147 == 3 )
                                                                    {
                                                                      v148 = dword_223680;
                                                                      *(_DWORD *)(v148 + 304) = sub_7B604();
                                                                      sub_1E938(v252, 48);
                                                                      printf("%s ", v252);
                                                                      printf(
                                                                        "%s : Sweep_Vol_Diff : %d\n",
                                                                        "parse_local_config_file",
                                                                        *(_DWORD *)(dword_223680 + 304));
                                                                      snprintf(
                                                                        byte_22A59C,
                                                                        0x100u,
                                                                        "Sweep_Vol_Diff : %d",
                                                                        *(_DWORD *)(dword_223680 + 304));
                                                                      sub_3CC5C(byte_22A59C, v252);
                                                                      v149 = (_DWORD *)sub_7B2D0(
                                                                                         v123,
                                                                                         "Sweep_Freq_Diff");
                                                                      if ( v149 && *v149 == 3 )
                                                                      {
                                                                        v150 = dword_223680;
                                                                        *(_DWORD *)(v150 + 308) = sub_7B604();
                                                                        sub_1E938(v252, 48);
                                                                        printf("%s ", v252);
                                                                        printf(
                                                                          "%s : Sweep_Freq_Diff : %d\n",
                                                                          "parse_local_config_file",
                                                                          *(_DWORD *)(dword_223680 + 308));
                                                                        snprintf(
                                                                          byte_22A79C,
                                                                          0x100u,
                                                                          "Sweep_Freq_Diff : %d",
                                                                          *(_DWORD *)(dword_223680 + 308));
                                                                        sub_3CC5C(byte_22A79C, v252);
                                                                        v151 = (_DWORD *)sub_7B2D0(v90, "Test_Standard");
                                                                        v152 = v151;
                                                                        if ( v151 && !*v151 )
                                                                        {
                                                                          v153 = (_DWORD *)sub_7B2D0(
                                                                                             v151,
                                                                                             "Pattern_Number");
                                                                          if ( v153 && *v153 == 3 )
                                                                          {
                                                                            v154 = dword_223680;
                                                                            *(_DWORD *)(v154 + 312) = sub_7B604();
                                                                            sub_1E938(v252, 48);
                                                                            printf("%s ", v252);
                                                                            printf(
                                                                              "%s : Pattern_Number : %d\n",
                                                                              "parse_local_config_file",
                                                                              *(_DWORD *)(dword_223680 + 312));
                                                                            snprintf(
                                                                              byte_22AA9C,
                                                                              0x100u,
                                                                              "Pattern_Number : %d",
                                                                              *(_DWORD *)(dword_223680 + 312));
                                                                            sub_3CC5C(byte_22AA9C, v252);
                                                                            v155 = (_DWORD *)sub_7B2D0(
                                                                                               v152,
                                                                                               "Invalid_Core_Number");
                                                                            if ( v155 && *v155 == 3 )
                                                                            {
                                                                              v156 = dword_223680;
                                                                              *(_DWORD *)(v156 + 316) = sub_7B604();
                                                                              sub_1E938(v252, 48);
                                                                              printf("%s ", v252);
                                                                              printf(
                                                                                "%s : Invalid_Core_Number : %d\n",
                                                                                "parse_local_config_file",
                                                                                *(_DWORD *)(dword_223680 + 316));
                                                                              snprintf(
                                                                                &byte_22AB9C[256],
                                                                                0x100u,
                                                                                "Invalid_Core_Number : %d",
                                                                                *(_DWORD *)(dword_223680 + 316));
                                                                              sub_3CC5C(&byte_22AB9C[256], v252);
                                                                              v157 = (_DWORD *)sub_7B2D0(
                                                                                                 v152,
                                                                                                 "Least_Nonce_Per_Core");
                                                                              if ( v157 && *v157 == 3 )
                                                                              {
                                                                                v158 = dword_223680;
                                                                                *(_DWORD *)(v158 + 320) = sub_7B604();
                                                                                sub_1E938(v252, 48);
                                                                                printf("%s ", v252);
                                                                                printf(
                                                                                  "%s : Least_Nonce_Per_Core : %d\n",
                                                                                  "parse_local_config_file",
                                                                                  *(_DWORD *)(dword_223680 + 320));
                                                                                snprintf(
                                                                                  &byte_22AD9C[256],
                                                                                  0x100u,
                                                                                  "Least_Nonce_Per_Core : %d",
                                                                                  *(_DWORD *)(dword_223680 + 320));
                                                                                sub_3CC5C(&byte_22AD9C[256], v252);
                                                                                v159 = (_DWORD *)sub_7B2D0(
                                                                                                   v152,
                                                                                                   "Nonce_Rate");
                                                                                if ( v159 && *v159 == 3 )
                                                                                {
                                                                                  v160 = dword_223680;
                                                                                  *(_DWORD *)(v160 + 324) = sub_7B604();
                                                                                  sub_1E938(v252, 48);
                                                                                  printf("%s ", v252);
                                                                                  printf(
                                                                                    "%s : Nonce_Rate : %d\n",
                                                                                    "parse_local_config_file",
                                                                                    *(_DWORD *)(dword_223680 + 324));
                                                                                  snprintf(
                                                                                    byte_22B09C,
                                                                                    0x100u,
                                                                                    "Nonce_Rate : %d",
                                                                                    *(_DWORD *)(dword_223680 + 324));
                                                                                  sub_3CC5C(byte_22B09C, v252);
                                                                                  v161 = (_DWORD *)sub_7B2D0(
                                                                                                     v152,
                                                                                                     "Most_HW_Num");
                                                                                  if ( v161 && *v161 == 3 )
                                                                                  {
                                                                                    v162 = dword_223680;
                                                                                    *(_DWORD *)(v162 + 328) = sub_7B604();
                                                                                    sub_1E938(v252, 48);
                                                                                    printf("%s ", v252);
                                                                                    printf(
                                                                                      "%s : Most_HW_Num : %d\n",
                                                                                      "parse_local_config_file",
                                                                                      *(_DWORD *)(dword_223680 + 328));
                                                                                    snprintf(
                                                                                      byte_22B29C,
                                                                                      0x100u,
                                                                                      "Most_HW_Num : %d",
                                                                                      *(_DWORD *)(dword_223680 + 328));
                                                                                    sub_3CC5C(byte_22B29C, v252);
                                                                                    v163 = (_DWORD *)sub_7B2D0(v152, "Asic_Nonce_Rate");
                                                                                    if ( v163 && *v163 == 3 )
                                                                                    {
                                                                                      v164 = dword_223680;
                                                                                      *(_DWORD *)(v164 + 332) = sub_7B604();
                                                                                      sub_1E938(v252, 48);
                                                                                      printf("%s ", v252);
                                                                                      printf(
                                                                                        "%s : Asic_Nonce_Rate : %d\n",
                                                                                        "parse_local_config_file",
                                                                                        *(_DWORD *)(dword_223680 + 332));
                                                                                      snprintf(
                                                                                        byte_22B49C,
                                                                                        0x100u,
                                                                                        "Asic_Nonce_Rate : %d",
                                                                                        *(_DWORD *)(dword_223680 + 332));
                                                                                      sub_3CC5C(byte_22B49C, v252);
                                                                                      v165 = (char *)sub_7B2D0(v152, "Test_Loop");
                                                                                      v246 = v165;
                                                                                      if ( v165 && *(_DWORD *)v165 == 1 )
                                                                                      {
                                                                                        dword_22B69C = sub_7B3A0();
                                                                                        if ( (unsigned int)dword_22B69C > 0xF )
                                                                                        {
                                                                                          sub_1E938(v252, 48);
                                                                                          v4 = 0;
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : There are %d test loop "
                                                                                            "in local config file, but LO"
                                                                                            "CAL_CONFIG_MAX_TEST_LOOP_NUM is %d\n",
                                                                                            "parse_local_config_file",
                                                                                            dword_22B69C,
                                                                                            15);
                                                                                          snprintf(
                                                                                            byte_22B6A0,
                                                                                            0x100u,
                                                                                            "There are %d test loop in lo"
                                                                                            "cal config file, but LOCAL_C"
                                                                                            "ONFIG_MAX_TEST_LOOP_NUM is %d",
                                                                                            dword_22B69C,
                                                                                            15);
                                                                                          sub_3CC5C(byte_22B6A0, v252);
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : In local config file, g"
                                                                                            "Test_loop : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            dword_22B69C);
                                                                                          v166 = 0;
                                                                                          snprintf(
                                                                                            byte_22B7A0,
                                                                                            0x100u,
                                                                                            "In local config file, gTest_loop : %d",
                                                                                            dword_22B69C);
                                                                                          sub_3CC5C(byte_22B7A0, v252);
                                                                                          format = v90;
                                                                                          while ( v166 < dword_22B69C )
                                                                                          {
                                                                                            v167 = (_DWORD *)sub_7B3B4(v246, v166);
                                                                                            v168 = v167;
                                                                                            if ( !v167 || *v167 )
                                                                                            {
                                                                                              sub_1E938(v252, 48);
                                                                                              v4 = 0;
                                                                                              printf("%s ", v252);
                                                                                              printf(
                                                                                                "%s : Can't find Test_Loop_array[%d]\n",
                                                                                                "parse_local_config_file",
                                                                                                v166);
                                                                                              snprintf(
                                                                                                byte_22B8A0,
                                                                                                0x100u,
                                                                                                "Can't find Test_Loop_array[%d]",
                                                                                                v166);
                                                                                              sub_3CC5C(
                                                                                                byte_22B8A0,
                                                                                                v252);
                                                                                              goto LABEL_4;
                                                                                            }
                                                                                            v169 = (_DWORD *)sub_7B2D0(v167, "Level");
                                                                                            if ( !v169 || *v169 != 3 )
                                                                                            {
                                                                                              sub_1E938(v252, 48);
                                                                                              v4 = 0;
                                                                                              printf("%s ", v252);
                                                                                              printf(
                                                                                                "%s : Can't read out Level in %s\n",
                                                                                                "parse_local_config_file",
                                                                                                a1);
                                                                                              snprintf(
                                                                                                byte_22B9A0,
                                                                                                0x100u,
                                                                                                "Can't read out Level in %s",
                                                                                                a1);
                                                                                              sub_3CC5C(
                                                                                                byte_22B9A0,
                                                                                                v252);
                                                                                              goto LABEL_4;
                                                                                            }
                                                                                            v170 = dword_223680;
                                                                                            v171 = 16 * v166;
                                                                                            *(_DWORD *)(v170 + 16 * v166 + 336) = sub_7B604();
                                                                                            sub_1E938(v252, 48);
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Level : %d\n",
                                                                                              "parse_local_config_file",
                                                                                              *(_DWORD *)(dword_223680 + 16 * v166 + 336));
                                                                                            snprintf(
                                                                                              byte_22BAA0,
                                                                                              0x100u,
                                                                                              "Level : %d",
                                                                                              *(_DWORD *)(dword_223680 + 16 * v166 + 336));
                                                                                            sub_3CC5C(byte_22BAA0, v252);
                                                                                            v172 = (_DWORD *)sub_7B2D0(v168, "Pre_Open_Core_Voltage");
                                                                                            if ( !v172 || *v172 != 3 )
                                                                                            {
                                                                                              sub_1E938(v252, 48);
                                                                                              v4 = 0;
                                                                                              printf("%s ", v252);
                                                                                              printf(
                                                                                                "%s : Can't read out Pre_"
                                                                                                "Open_Core_Voltage in %s\n",
                                                                                                "parse_local_config_file",
                                                                                                a1);
                                                                                              snprintf(
                                                                                                byte_22BBA0,
                                                                                                0x100u,
                                                                                                "Can't read out Pre_Open_"
                                                                                                "Core_Voltage in %s",
                                                                                                a1);
                                                                                              sub_3CC5C(
                                                                                                byte_22BBA0,
                                                                                                v252);
                                                                                              goto LABEL_4;
                                                                                            }
                                                                                            v173 = dword_223680;
                                                                                            *(_DWORD *)(v173 + v171 + 340) = sub_7B604();
                                                                                            sub_1E938(v252, 48);
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Pre_Open_Core_Voltage : %d\n",
                                                                                              "parse_local_config_file",
                                                                                              *(_DWORD *)(dword_223680 + v171 + 340));
                                                                                            snprintf(
                                                                                              byte_22BCA0,
                                                                                              0x100u,
                                                                                              "Pre_Open_Core_Voltage : %d",
                                                                                              *(_DWORD *)(v171 + dword_223680 + 340));
                                                                                            sub_3CC5C(byte_22BCA0, v252);
                                                                                            v174 = (_DWORD *)sub_7B2D0(v168, "Voltage");
                                                                                            if ( !v174 || *v174 != 3 )
                                                                                            {
                                                                                              sub_1E938(v252, 48);
                                                                                              v4 = 0;
                                                                                              printf("%s ", v252);
                                                                                              printf(
                                                                                                "%s : Can't read out Voltage in %s\n",
                                                                                                "parse_local_config_file",
                                                                                                a1);
                                                                                              snprintf(
                                                                                                byte_22BDA0,
                                                                                                0x100u,
                                                                                                "Can't read out Voltage in %s",
                                                                                                a1);
                                                                                              sub_3CC5C(
                                                                                                byte_22BDA0,
                                                                                                v252);
                                                                                              goto LABEL_4;
                                                                                            }
                                                                                            v175 = 16 * (v166 + 21);
                                                                                            v251 = dword_223680;
                                                                                            *(_DWORD *)(v251 + v175 + 8) = sub_7B604();
                                                                                            sub_1E938(v252, 48);
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Voltage : %d\n",
                                                                                              "parse_local_config_file",
                                                                                              *(_DWORD *)(dword_223680 + v175 + 8));
                                                                                            snprintf(
                                                                                              byte_22BEA0,
                                                                                              0x100u,
                                                                                              "Voltage : %d",
                                                                                              *(_DWORD *)(v175 + dword_223680 + 8));
                                                                                            sub_3CC5C(byte_22BEA0, v252);
                                                                                            v176 = (_DWORD *)sub_7B2D0(v168, "Frequence");
                                                                                            if ( !v176 || *v176 != 3 )
                                                                                            {
                                                                                              sub_1E938(v252, 48);
                                                                                              v4 = 0;
                                                                                              printf("%s ", v252);
                                                                                              printf(
                                                                                                "%s : Can't read out Frequence in %s\n",
                                                                                                "parse_local_config_file",
                                                                                                a1);
                                                                                              snprintf(
                                                                                                byte_22BFA0,
                                                                                                0x100u,
                                                                                                "Can't read out Frequence in %s",
                                                                                                a1);
                                                                                              sub_3CC5C(
                                                                                                byte_22BFA0,
                                                                                                v252);
                                                                                              goto LABEL_4;
                                                                                            }
                                                                                            v177 = dword_223680;
                                                                                            v178 = 16 * (v166 + 21);
                                                                                            ++v166;
                                                                                            *(_DWORD *)(v177 + v178 + 12) = sub_7B604();
                                                                                            sub_1E938(v252, 48);
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Frequence : %d\n",
                                                                                              "parse_local_config_file",
                                                                                              *(_DWORD *)(dword_223680 + v178 + 12));
                                                                                            snprintf(
                                                                                              byte_22C0A0,
                                                                                              0x100u,
                                                                                              "Frequence : %d",
                                                                                              *(_DWORD *)(v178 + dword_223680 + 12));
                                                                                            sub_3CC5C(byte_22C0A0, v252);
                                                                                          }
                                                                                          v179 = (_DWORD *)sub_7B2D0(format, "Test_Speed");
                                                                                          v180 = v179;
                                                                                          if ( !v179 || *v179 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Test_Speed in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22C1A0,
                                                                                              0x100u,
                                                                                              "Can't read out Test_Speed in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22C1A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v181 = (_DWORD *)sub_7B2D0(v179, "Baudrate");
                                                                                          if ( !v181 || *v181 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Baudrate in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22C2A0,
                                                                                              0x100u,
                                                                                              "Can't read out Baudrate in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22C2A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v182 = dword_223680;
                                                                                          *(_DWORD *)(v182 + 576) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Baudrate : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 576));
                                                                                          snprintf(
                                                                                            byte_22C3A0,
                                                                                            0x100u,
                                                                                            "Baudrate : %d",
                                                                                            *(_DWORD *)(dword_223680 + 576));
                                                                                          sub_3CC5C(byte_22C3A0, v252);
                                                                                          v183 = (_DWORD *)sub_7B2D0(v180, "Timeout");
                                                                                          if ( !v183 || *v183 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Timeout in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22C4A0,
                                                                                              0x100u,
                                                                                              "Can't read out Timeout in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22C4A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v184 = dword_223680;
                                                                                          *(_DWORD *)(v184 + 580) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Timeout : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 580));
                                                                                          snprintf(
                                                                                            byte_22C5A0,
                                                                                            0x100u,
                                                                                            "Timeout : %d",
                                                                                            *(_DWORD *)(dword_223680 + 580));
                                                                                          sub_3CC5C(byte_22C5A0, v252);
                                                                                          v185 = (_DWORD *)sub_7B2D0(format, "Asic_Register");
                                                                                          v186 = v185;
                                                                                          if ( !v185 || *v185 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Asic_Register in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22C6A0,
                                                                                              0x100u,
                                                                                              "Can't read out Asic_Register in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22C6A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v187 = (_DWORD *)sub_7B2D0(v185, "CCdly_Sel");
                                                                                          if ( !v187 || *v187 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out CCdly_Sel in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22C7A0,
                                                                                              0x100u,
                                                                                              "Can't read out CCdly_Sel in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22C7A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v188 = dword_223680;
                                                                                          *(_DWORD *)(v188 + 584) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : CCdly_Sel : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 584));
                                                                                          snprintf(
                                                                                            byte_22C8A0,
                                                                                            0x100u,
                                                                                            "CCdly_Sel : %d",
                                                                                            *(_DWORD *)(dword_223680 + 584));
                                                                                          sub_3CC5C(byte_22C8A0, v252);
                                                                                          v189 = (_DWORD *)sub_7B2D0(v186, "Pwth_Sel");
                                                                                          if ( !v189 || *v189 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Pwth_Sel in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22C9A0,
                                                                                              0x100u,
                                                                                              "Can't read out Pwth_Sel in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22C9A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v190 = dword_223680;
                                                                                          *(_DWORD *)(v190 + 588) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Pwth_Sel : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 588));
                                                                                          snprintf(
                                                                                            byte_22CAA0,
                                                                                            0x100u,
                                                                                            "Pwth_Sel : %d",
                                                                                            *(_DWORD *)(dword_223680 + 588));
                                                                                          sub_3CC5C(byte_22CAA0, v252);
                                                                                          v191 = (_DWORD *)sub_7B2D0(v186, "Swpf_Mode");
                                                                                          if ( !v191 || *v191 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Swpf_Mode in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22CBA0,
                                                                                              0x100u,
                                                                                              "Can't read out Swpf_Mode in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22CBA0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v192 = dword_223680;
                                                                                          *(_DWORD *)(v192 + 592) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Swpf_Mode : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 592));
                                                                                          snprintf(
                                                                                            byte_22CCA0,
                                                                                            0x100u,
                                                                                            "Swpf_Mode : %d",
                                                                                            *(_DWORD *)(dword_223680 + 592));
                                                                                          sub_3CC5C(byte_22CCA0, v252);
                                                                                          v193 = (_DWORD *)sub_7B2D0(v186, "Pulse_Mode");
                                                                                          if ( !v193 || *v193 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Pulse_Mode in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22CDA0,
                                                                                              0x100u,
                                                                                              "Can't read out Pulse_Mode in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22CDA0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v194 = dword_223680;
                                                                                          *(_DWORD *)(v194 + 596) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Pulse_Mode : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 596));
                                                                                          snprintf(
                                                                                            byte_22CEA0,
                                                                                            0x100u,
                                                                                            "Pulse_Mode : %d",
                                                                                            *(_DWORD *)(dword_223680 + 596));
                                                                                          sub_3CC5C(byte_22CEA0, v252);
                                                                                          v195 = (_DWORD *)sub_7B2D0(v186, "Clk_Sel");
                                                                                          if ( !v195 || *v195 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Clk_Sel in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22CFA0,
                                                                                              0x100u,
                                                                                              "Can't read out Clk_Sel in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22CFA0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v196 = dword_223680;
                                                                                          *(_DWORD *)(v196 + 600) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Clk_Sel : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 600));
                                                                                          snprintf(
                                                                                            byte_22D0A0,
                                                                                            0x100u,
                                                                                            "Clk_Sel : %d",
                                                                                            *(_DWORD *)(dword_223680 + 600));
                                                                                          sub_3CC5C(byte_22D0A0, v252);
                                                                                          v197 = (_DWORD *)sub_7B2D0(v186, "RO_Relay_En");
                                                                                          if ( !v197 || *v197 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out RO_Relay_En in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22D1A0,
                                                                                              0x100u,
                                                                                              "Can't read out RO_Relay_En in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22D1A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v198 = dword_223680;
                                                                                          *(_DWORD *)(v198 + 604) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : RO_Relay_En : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 604));
                                                                                          snprintf(
                                                                                            byte_22D2A0,
                                                                                            0x100u,
                                                                                            "RO_Relay_En : %d",
                                                                                            *(_DWORD *)(dword_223680 + 604));
                                                                                          sub_3CC5C(byte_22D2A0, v252);
                                                                                          v199 = (_DWORD *)sub_7B2D0(v186, "CO_Relay_En");
                                                                                          if ( !v199 || *v199 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out CO_Relay_En in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22D3A0,
                                                                                              0x100u,
                                                                                              "Can't read out CO_Relay_En in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22D3A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v200 = dword_223680;
                                                                                          *(_DWORD *)(v200 + 608) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : CO_Relay_En : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 608));
                                                                                          snprintf(
                                                                                            byte_22D4A0,
                                                                                            0x100u,
                                                                                            "CO_Relay_En : %d",
                                                                                            *(_DWORD *)(dword_223680 + 608));
                                                                                          sub_3CC5C(byte_22D4A0, v252);
                                                                                          v201 = (_DWORD *)sub_7B2D0(v186, "Diode_Vdd_Mux_Sel");
                                                                                          if ( !v201 || *v201 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Diode_"
                                                                                              "Vdd_Mux_Sel in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22D5A0,
                                                                                              0x100u,
                                                                                              "Can't read out Diode_Vdd_Mux_Sel in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22D5A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v202 = dword_223680;
                                                                                          *(_DWORD *)(v202 + 612) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Diode_Vdd_Mux_Sel : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 612));
                                                                                          snprintf(
                                                                                            byte_22D6A0,
                                                                                            0x100u,
                                                                                            "Diode_Vdd_Mux_Sel : %d",
                                                                                            *(_DWORD *)(dword_223680 + 612));
                                                                                          sub_3CC5C(byte_22D6A0, v252);
                                                                                          v203 = (_DWORD *)sub_7B2D0(format, "Temperature");
                                                                                          v204 = v203;
                                                                                          if ( !v203 || *v203 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Temperature in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22D7A0,
                                                                                              0x100u,
                                                                                              "Can't read out Temperature in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22D7A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v205 = (_DWORD *)sub_7B2D0(v203, "Start_Temp_Gap_Pic");
                                                                                          if ( !v205 || *v205 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Start_"
                                                                                              "Temp_Gap_Pic in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22D8A0,
                                                                                              0x100u,
                                                                                              "Can't read out Start_Temp_Gap_Pic in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22D8A0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v206 = dword_223680;
                                                                                          *(_DWORD *)(v206 + 616) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Start_Temp_Gap_Pic : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 616));
                                                                                          snprintf(
                                                                                            byte_22D9A0,
                                                                                            0x100u,
                                                                                            "Start_Temp_Gap_Pic : %d",
                                                                                            *(_DWORD *)(dword_223680 + 616));
                                                                                          sub_3CC5C(byte_22D9A0, v252);
                                                                                          v207 = (_DWORD *)sub_7B2D0(v204, "Max_Wait_Cooling_Down_Time");
                                                                                          if ( !v207 || *v207 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Max_Wa"
                                                                                              "it_Cooling_Down_Time in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22DAA0,
                                                                                              0x100u,
                                                                                              "Can't read out Max_Wait_Co"
                                                                                              "oling_Down_Time in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22DAA0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v208 = dword_223680;
                                                                                          *(_DWORD *)(v208 + 620) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Max_Wait_Cooling_Down_Time : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 620));
                                                                                          snprintf(
                                                                                            byte_22DBA0,
                                                                                            0x100u,
                                                                                            "Max_Wait_Cooling_Down_Time : %d",
                                                                                            *(_DWORD *)(dword_223680 + 620));
                                                                                          sub_3CC5C(byte_22DBA0, v252);
                                                                                          v209 = (_DWORD *)sub_7B2D0(v204, "Time_For_Cooling_Hashboard");
                                                                                          if ( !v209 || *v209 != 3 )
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Time_F"
                                                                                              "or_Cooling_Hashboard in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22DCA0,
                                                                                              0x100u,
                                                                                              "Can't read out Time_For_Co"
                                                                                              "oling_Hashboard in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22DCA0, v252);
                                                                                            goto LABEL_4;
                                                                                          }
                                                                                          v210 = dword_223680;
                                                                                          *(_DWORD *)(v210 + 624) = sub_7B604();
                                                                                          sub_1E938(v252, 48);
                                                                                          printf("%s ", v252);
                                                                                          printf(
                                                                                            "%s : Time_For_Cooling_Hashboard : %d\n",
                                                                                            "parse_local_config_file",
                                                                                            *(_DWORD *)(dword_223680 + 624));
                                                                                          snprintf(
                                                                                            byte_22DDA0,
                                                                                            0x100u,
                                                                                            "Time_For_Cooling_Hashboard : %d",
                                                                                            *(_DWORD *)(dword_223680 + 624));
                                                                                          sub_3CC5C(byte_22DDA0, v252);
                                                                                          if ( sub_7B2D0(
                                                                                                 v204,
                                                                                                 "Max_Board_Temp") )
                                                                                          {
                                                                                            v211 = (_DWORD *)sub_7B2D0(v204, "Max_Board_Temp");
                                                                                            if ( !v211 || *v211 != 3 )
                                                                                            {
                                                                                              sub_1E938(v252, 48);
                                                                                              v4 = 0;
                                                                                              printf("%s ", v252);
                                                                                              printf(
                                                                                                "%s : Can't read out Max_"
                                                                                                "Board_Temp in %s\n",
                                                                                                "parse_local_config_file",
                                                                                                a1);
                                                                                              snprintf(
                                                                                                byte_22DEA0,
                                                                                                0x100u,
                                                                                                "Can't read out Max_Board_Temp in %s",
                                                                                                a1);
                                                                                              sub_3CC5C(
                                                                                                byte_22DEA0,
                                                                                                v252);
                                                                                              goto LABEL_4;
                                                                                            }
                                                                                            v214 = dword_223680;
                                                                                            *(_DWORD *)(v214 + 628) = sub_7B604();
                                                                                            sub_1E938(v252, 48);
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Max_Board_Temp : %d\n",
                                                                                              "parse_local_config_file",
                                                                                              *(_DWORD *)(dword_223680 + 628));
                                                                                            snprintf(
                                                                                              byte_22DFA0,
                                                                                              0x100u,
                                                                                              "Max_Board_Temp : %d",
                                                                                              *(_DWORD *)(dword_223680 + 628));
                                                                                            sub_3CC5C(byte_22DFA0, v252);
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *(_DWORD *)(dword_223680 + 628) = 70;
                                                                                          }
                                                                                          v212 = (_DWORD *)sub_7B2D0(format, "Fan");
                                                                                          v213 = v212;
                                                                                          if ( v212 && !*v212 )
                                                                                          {
                                                                                            v215 = (_DWORD *)sub_7B2D0(v212, "Fan_Speed");
                                                                                            if ( v215 && *v215 == 3 )
                                                                                            {
                                                                                              v216 = dword_223680;
                                                                                              *(_DWORD *)(v216 + 632) = sub_7B604();
                                                                                              sub_1E938(v252, 48);
                                                                                              printf("%s ", v252);
                                                                                              printf(
                                                                                                "%s : Fan_Speed : %d\n",
                                                                                                "parse_local_config_file",
                                                                                                *(_DWORD *)(dword_223680 + 632));
                                                                                              snprintf(
                                                                                                byte_22E2A0,
                                                                                                0x100u,
                                                                                                "Fan_Speed : %d",
                                                                                                *(_DWORD *)(dword_223680 + 632));
                                                                                              sub_3CC5C(
                                                                                                byte_22E2A0,
                                                                                                v252);
                                                                                              v217 = (_DWORD *)sub_7B2D0(v213, "Work_Fan_Speed");
                                                                                              if ( v217 && *v217 == 3 )
                                                                                              {
                                                                                                v220 = dword_223680;
                                                                                                *(_DWORD *)(v220 + 636) = sub_7B604();
                                                                                                sub_1E938(v252, 48);
                                                                                                printf("%s ", v252);
                                                                                                printf(
                                                                                                  "%s : Work_Fan_Speed : %d\n",
                                                                                                  "parse_local_config_file",
                                                                                                  *(_DWORD *)(dword_223680 + 636));
                                                                                                snprintf(
                                                                                                  byte_22E5A0,
                                                                                                  0x100u,
                                                                                                  "Work_Fan_Speed : %d",
                                                                                                  *(_DWORD *)(dword_223680 + 636));
                                                                                                sub_3CC5C(
                                                                                                  byte_22E5A0,
                                                                                                  v252);
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                sub_1E938(v252, 48);
                                                                                                printf("%s ", v252);
                                                                                                printf(
                                                                                                  "%s : Can't read out Wo"
                                                                                                  "rk_Fan_Speed in %s,wil"
                                                                                                  "l set default value\n",
                                                                                                  "parse_local_config_file",
                                                                                                  a1);
                                                                                                snprintf(
                                                                                                  byte_22E3A0,
                                                                                                  0x100u,
                                                                                                  "Can't read out Work_Fa"
                                                                                                  "n_Speed in %s,will set default value",
                                                                                                  a1);
                                                                                                sub_3CC5C(
                                                                                                  byte_22E3A0,
                                                                                                  v252);
                                                                                                *(_DWORD *)(dword_223680 + 636) = 100;
                                                                                                sub_1E938(v252, 48);
                                                                                                printf("%s ", v252);
                                                                                                printf(
                                                                                                  "%s : Work_Fan_Speed : %d\n",
                                                                                                  "parse_local_config_file",
                                                                                                  *(_DWORD *)(dword_223680 + 636));
                                                                                                snprintf(
                                                                                                  byte_22E4A0,
                                                                                                  0x100u,
                                                                                                  "Work_Fan_Speed : %d",
                                                                                                  *(_DWORD *)(dword_223680 + 636));
                                                                                                sub_3CC5C(
                                                                                                  byte_22E4A0,
                                                                                                  v252);
                                                                                              }
                                                                                              v218 = (_DWORD *)sub_7B2D0(format, "Display");
                                                                                              v219 = v218;
                                                                                              if ( v218 && !*v218 )
                                                                                              {
                                                                                                v221 = (_DWORD *)sub_7B2D0(v218, "Display_result_Voltage_Domain");
                                                                                                if ( v221 && (unsigned int)(*v221 - 5) <= 1 )
                                                                                                {
                                                                                                  *(_BYTE *)(dword_223680 + 640) = *v221 == 5;
                                                                                                  sub_1E938(v252, 48);
                                                                                                  printf("%s ", v252);
                                                                                                  if ( *(_BYTE *)(dword_223680 + 640) )
                                                                                                    v222 = "true";
                                                                                                  else
                                                                                                    v222 = "false";
                                                                                                  printf(
                                                                                                    "%s : Display_result_Voltage_Domain : %s\n",
                                                                                                    "parse_local_config_file",
                                                                                                    v222);
                                                                                                  if ( *(_BYTE *)(dword_223680 + 640) )
                                                                                                    v223 = "true";
                                                                                                  else
                                                                                                    v223 = "false";
                                                                                                  snprintf(
                                                                                                    byte_22E8A0,
                                                                                                    0x100u,
                                                                                                    "Display_result_Voltage_Domain : %s",
                                                                                                    v223);
                                                                                                  sub_3CC5C(
                                                                                                    byte_22E8A0,
                                                                                                    v252);
                                                                                                  v224 = (_DWORD *)sub_7B2D0(v219, "Display_result_Every_Core");
                                                                                                  if ( v224 && (unsigned int)(*v224 - 5) <= 1 )
                                                                                                  {
                                                                                                    *(_BYTE *)(dword_223680 + 641) = *v224 == 5;
                                                                                                    sub_1E938(v252, 48);
                                                                                                    printf("%s ", v252);
                                                                                                    if ( *(_BYTE *)(dword_223680 + 641) )
                                                                                                      v225 = "true";
                                                                                                    else
                                                                                                      v225 = "false";
                                                                                                    printf("%s : Display_result_Every_Core : %s\n", "parse_local_config_file", v225);
                                                                                                    if ( *(_BYTE *)(dword_223680 + 641) )
                                                                                                      v226 = "true";
                                                                                                    else
                                                                                                      v226 = "false";
                                                                                                    snprintf(byte_22EAA0, 0x100u, "Display_result_Every_Core : %s", v226);
                                                                                                    sub_3CC5C(byte_22EAA0, v252);
                                                                                                    v227 = (_DWORD *)sub_7B2D0(format, "Test_Config_Data_Version");
                                                                                                    if ( v227 && *v227 == 2 )
                                                                                                    {
                                                                                                      v228 = (char *)(dword_223680 + 648);
                                                                                                      v229 = (const char *)sub_7B4A8();
                                                                                                      strcpy(v228, v229);
                                                                                                      sub_1E938(v252, 48);
                                                                                                      printf("%s ", v252);
                                                                                                      printf("%s : Test_Config_Data_Version : %s\n", "parse_local_config_file", (const char *)(dword_223680 + 648));
                                                                                                      snprintf(byte_22ECA0, 0x100u, "Test_Config_Data_Version : %s", (const char *)(dword_223680 + 648));
                                                                                                      sub_3CC5C(byte_22ECA0, v252);
                                                                                                      v230 = (_DWORD *)sub_7B2D0(format, "Voltage_Accuracy");
                                                                                                      if ( v230 && *v230 == 3 )
                                                                                                      {
                                                                                                        v231 = dword_223680;
                                                                                                        *(_DWORD *)(v231 + 664) = sub_7B604();
                                                                                                        sub_1E938(v252, 48);
                                                                                                        printf("%s ", v252);
                                                                                                        printf("%s : Voltage_Accuracy : %d\n", "parse_local_config_file", *(_DWORD *)(dword_223680 + 664));
                                                                                                        snprintf(byte_22EEA0, 0x100u, "Voltage_Accuracy : %d", *(_DWORD *)(dword_223680 + 664));
                                                                                                        sub_3CC5C(byte_22EEA0, v252);
                                                                                                        v232 = (_DWORD *)sub_7B2D0(v3, "Repair_Mode");
                                                                                                        v233 = v232;
                                                                                                        if ( v232 && !*v232 )
                                                                                                        {
                                                                                                          v234 = (_DWORD *)sub_7B2D0(v232, "Close_Power_Delay");
                                                                                                          if ( v234 && *v234 == 3 )
                                                                                                          {
                                                                                                            v235 = dword_223680;
                                                                                                            *(_DWORD *)(v235 + 668) = sub_7B604();
                                                                                                            sub_1E938(v252, 48);
                                                                                                            printf("%s ", v252);
                                                                                                            printf("%s : Close_Power_Delay : %d\n", "parse_local_config_file", *(_DWORD *)(dword_223680 + 668));
                                                                                                            snprintf(byte_22F1A0, 0x100u, "Close_Power_Delay : %d", *(_DWORD *)(dword_223680 + 668));
                                                                                                            sub_3CC5C(byte_22F1A0, v252);
                                                                                                            v236 = (_DWORD *)sub_7B2D0(v233, "Clear_EEPROM_Data");
                                                                                                            if ( v236 && (unsigned int)(*v236 - 5) <= 1 )
                                                                                                            {
                                                                                                              *(_BYTE *)(dword_223680 + 672) = *v236 == 5;
                                                                                                              sub_1E938(v252, 48);
                                                                                                              printf("%s ", v252);
                                                                                                              if ( *(_BYTE *)(dword_223680 + 672) )
                                                                                                                v237 = "true";
                                                                                                              else
                                                                                                                v237 = "false";
                                                                                                              printf("%s : Clear_EEPROM_Data : %s\n", "parse_local_config_file", v237);
                                                                                                              if ( *(_BYTE *)(dword_223680 + 672) )
                                                                                                                v238 = "true";
                                                                                                              else
                                                                                                                v238 = "false";
                                                                                                              snprintf(byte_22F3A0, 0x100u, "Clear_EEPROM_Data : %s", v238);
                                                                                                              sub_3CC5C(byte_22F3A0, v252);
                                                                                                              v239 = (_DWORD *)sub_7B2D0(v233, "Enable_Repair");
                                                                                                              if ( v239 && (unsigned int)(*v239 - 5) <= 1 )
                                                                                                              {
                                                                                                                *(_BYTE *)(dword_223680 + 673) = *v239 == 5;
                                                                                                                v4 = 1;
                                                                                                                sub_1E938(v252, 48);
                                                                                                                printf("%s ", v252);
                                                                                                                if ( *(_BYTE *)(dword_223680 + 673) )
                                                                                                                  v240 = "true";
                                                                                                                else
                                                                                                                  v240 = "false";
                                                                                                                printf("%s : Enable_Repair : %s\n", "parse_local_config_file", v240);
                                                                                                                if ( *(_BYTE *)(dword_223680 + 673) )
                                                                                                                  v241 = "true";
                                                                                                                else
                                                                                                                  v241 = "false";
                                                                                                                snprintf(byte_22F5A0, 0x100u, "Enable_Repair : %s", v241);
                                                                                                                sub_3CC5C(byte_22F5A0, v252);
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                sub_1E938(v252, 48);
                                                                                                                v4 = 1;
                                                                                                                printf("%s ", v252);
                                                                                                                printf("%s : Can't read out Enable_Repair in %s,will set default value\n", "parse_local_config_file", a1);
                                                                                                                snprintf(byte_22F4A0, 0x100u, "Can't read out Enable_Repair in %s,will set default value", a1);
                                                                                                                sub_3CC5C(byte_22F4A0, v252);
                                                                                                                *(_BYTE *)(dword_223680 + 673) = 0;
                                                                                                              }
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                              sub_1E938(v252, 48);
                                                                                                              v4 = 0;
                                                                                                              printf("%s ", v252);
                                                                                                              printf("%s : Can't read out Clear_EEPROM_Data in %s\n", "parse_local_config_file", a1);
                                                                                                              snprintf(byte_22F2A0, 0x100u, "Can't read out Clear_EEPROM_Data in %s", a1);
                                                                                                              sub_3CC5C(byte_22F2A0, v252);
                                                                                                            }
                                                                                                          }
                                                                                                          else
                                                                                                          {
                                                                                                            sub_1E938(v252, 48);
                                                                                                            v4 = 0;
                                                                                                            printf("%s ", v252);
                                                                                                            printf("%s : Can't read out Close_Power_Delay in %s\n", "parse_local_config_file", a1);
                                                                                                            snprintf(byte_22F0A0, 0x100u, "Can't read out Close_Power_Delay in %s", a1);
                                                                                                            sub_3CC5C(byte_22F0A0, v252);
                                                                                                          }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          sub_1E938(v252, 48);
                                                                                                          v4 = 0;
                                                                                                          printf("%s ", v252);
                                                                                                          printf("%s : Can't read out Repair_Mode in %s\n", "parse_local_config_file", a1);
                                                                                                          snprintf(byte_22EFA0, 0x100u, "Can't read out Repair_Mode in %s", a1);
                                                                                                          sub_3CC5C(byte_22EFA0, v252);
                                                                                                        }
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        sub_1E938(v252, 48);
                                                                                                        v4 = 0;
                                                                                                        printf("%s ", v252);
                                                                                                        printf("%s : Can't read out Voltage_Accuracy in %s\n", "parse_local_config_file", a1);
                                                                                                        snprintf(byte_22EDA0, 0x100u, "Can't read out Voltage_Accuracy in %s", a1);
                                                                                                        sub_3CC5C(byte_22EDA0, v252);
                                                                                                      }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      sub_1E938(v252, 48);
                                                                                                      v4 = 0;
                                                                                                      printf("%s ", v252);
                                                                                                      printf("%s : Can't read out Test_Config_Data_Version in %s\n", "parse_local_config_file", a1);
                                                                                                      snprintf(byte_22EBA0, 0x100u, "Can't read out Test_Config_Data_Version in %s", a1);
                                                                                                      sub_3CC5C(byte_22EBA0, v252);
                                                                                                    }
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    sub_1E938(v252, 48);
                                                                                                    v4 = 0;
                                                                                                    printf("%s ", v252);
                                                                                                    printf("%s : Can't read out Display_result_Every_Core in %s\n", "parse_local_config_file", a1);
                                                                                                    snprintf(byte_22E9A0, 0x100u, "Can't read out Display_result_Every_Core in %s", a1);
                                                                                                    sub_3CC5C(byte_22E9A0, v252);
                                                                                                  }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  sub_1E938(v252, 48);
                                                                                                  v4 = 0;
                                                                                                  printf("%s ", v252);
                                                                                                  printf(
                                                                                                    "%s : Can't read out Display_result_Voltage_Domain in %s\n",
                                                                                                    "parse_local_config_file",
                                                                                                    a1);
                                                                                                  snprintf(
                                                                                                    byte_22E7A0,
                                                                                                    0x100u,
                                                                                                    "Can't read out Display_result_Voltage_Domain in %s",
                                                                                                    a1);
                                                                                                  sub_3CC5C(
                                                                                                    byte_22E7A0,
                                                                                                    v252);
                                                                                                }
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                sub_1E938(v252, 48);
                                                                                                v4 = 0;
                                                                                                printf("%s ", v252);
                                                                                                printf(
                                                                                                  "%s : Can't read out Display in %s\n",
                                                                                                  "parse_local_config_file",
                                                                                                  a1);
                                                                                                snprintf(
                                                                                                  byte_22E6A0,
                                                                                                  0x100u,
                                                                                                  "Can't read out Display in %s",
                                                                                                  a1);
                                                                                                sub_3CC5C(
                                                                                                  byte_22E6A0,
                                                                                                  v252);
                                                                                              }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              sub_1E938(v252, 48);
                                                                                              v4 = 0;
                                                                                              printf("%s ", v252);
                                                                                              printf(
                                                                                                "%s : Can't read out Fan_Speed in %s\n",
                                                                                                "parse_local_config_file",
                                                                                                a1);
                                                                                              snprintf(
                                                                                                byte_22E1A0,
                                                                                                0x100u,
                                                                                                "Can't read out Fan_Speed in %s",
                                                                                                a1);
                                                                                              sub_3CC5C(
                                                                                                byte_22E1A0,
                                                                                                v252);
                                                                                            }
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            sub_1E938(v252, 48);
                                                                                            v4 = 0;
                                                                                            printf("%s ", v252);
                                                                                            printf(
                                                                                              "%s : Can't read out Fan in %s\n",
                                                                                              "parse_local_config_file",
                                                                                              a1);
                                                                                            snprintf(
                                                                                              byte_22E0A0,
                                                                                              0x100u,
                                                                                              "Can't read out Fan in %s",
                                                                                              a1);
                                                                                            sub_3CC5C(byte_22E0A0, v252);
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        sub_1E938(v252, 48);
                                                                                        v4 = 0;
                                                                                        printf("%s ", v252);
                                                                                        printf(
                                                                                          "%s : Can't read out Test_Loop in %s\n",
                                                                                          "parse_local_config_file",
                                                                                          a1);
                                                                                        snprintf(
                                                                                          byte_22B59C,
                                                                                          0x100u,
                                                                                          "Can't read out Test_Loop in %s",
                                                                                          a1);
                                                                                        sub_3CC5C(byte_22B59C, v252);
                                                                                      }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      sub_1E938(v252, 48);
                                                                                      v4 = 0;
                                                                                      printf("%s ", v252);
                                                                                      printf(
                                                                                        "%s : Can't read out Asic_Nonce_Rate in %s\n",
                                                                                        "parse_local_config_file",
                                                                                        a1);
                                                                                      snprintf(
                                                                                        byte_22B39C,
                                                                                        0x100u,
                                                                                        "Can't read out Asic_Nonce_Rate in %s",
                                                                                        a1);
                                                                                      sub_3CC5C(byte_22B39C, v252);
                                                                                    }
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    sub_1E938(v252, 48);
                                                                                    v4 = 0;
                                                                                    printf("%s ", v252);
                                                                                    printf(
                                                                                      "%s : Can't read out Most_HW_Num in %s\n",
                                                                                      "parse_local_config_file",
                                                                                      a1);
                                                                                    snprintf(
                                                                                      byte_22B19C,
                                                                                      0x100u,
                                                                                      "Can't read out Most_HW_Num in %s",
                                                                                      a1);
                                                                                    sub_3CC5C(byte_22B19C, v252);
                                                                                  }
                                                                                }
                                                                                else
                                                                                {
                                                                                  sub_1E938(v252, 48);
                                                                                  v4 = 0;
                                                                                  printf("%s ", v252);
                                                                                  printf(
                                                                                    "%s : Can't read out Nonce_Rate in %s\n",
                                                                                    "parse_local_config_file",
                                                                                    a1);
                                                                                  snprintf(
                                                                                    byte_22AF9C,
                                                                                    0x100u,
                                                                                    "Can't read out Nonce_Rate in %s",
                                                                                    a1);
                                                                                  sub_3CC5C(byte_22AF9C, v252);
                                                                                }
                                                                              }
                                                                              else
                                                                              {
                                                                                sub_1E938(v252, 48);
                                                                                v4 = 0;
                                                                                printf("%s ", v252);
                                                                                printf(
                                                                                  "%s : Can't read out Least_Nonce_Per_Core in %s\n",
                                                                                  "parse_local_config_file",
                                                                                  a1);
                                                                                snprintf(
                                                                                  byte_22AD9C,
                                                                                  0x100u,
                                                                                  "Can't read out Least_Nonce_Per_Core in %s",
                                                                                  a1);
                                                                                sub_3CC5C(byte_22AD9C, v252);
                                                                              }
                                                                            }
                                                                            else
                                                                            {
                                                                              sub_1E938(v252, 48);
                                                                              v4 = 0;
                                                                              printf("%s ", v252);
                                                                              printf(
                                                                                "%s : Can't read out Invalid_Core_Number in %s\n",
                                                                                "parse_local_config_file",
                                                                                a1);
                                                                              snprintf(
                                                                                byte_22AB9C,
                                                                                0x100u,
                                                                                "Can't read out Invalid_Core_Number in %s",
                                                                                a1);
                                                                              sub_3CC5C(byte_22AB9C, v252);
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            sub_1E938(v252, 48);
                                                                            v4 = 0;
                                                                            printf("%s ", v252);
                                                                            printf(
                                                                              "%s : Can't read out Pattern_Number in %s\n",
                                                                              "parse_local_config_file",
                                                                              a1);
                                                                            snprintf(
                                                                              byte_22A99C,
                                                                              0x100u,
                                                                              "Can't read out Pattern_Number in %s",
                                                                              a1);
                                                                            sub_3CC5C(byte_22A99C, v252);
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          sub_1E938(v252, 48);
                                                                          v4 = 0;
                                                                          printf("%s ", v252);
                                                                          printf(
                                                                            "%s : Can't read out Test_Standard in %s\n",
                                                                            "parse_local_config_file",
                                                                            a1);
                                                                          snprintf(
                                                                            byte_22A89C,
                                                                            0x100u,
                                                                            "Can't read out Test_Standard in %s",
                                                                            a1);
                                                                          sub_3CC5C(byte_22A89C, v252);
                                                                        }
                                                                      }
                                                                      else
                                                                      {
                                                                        sub_1E938(v252, 48);
                                                                        v4 = 0;
                                                                        printf("%s ", v252);
                                                                        printf(
                                                                          "%s : Can't read out Sweep_Freq_Diff in %s\n",
                                                                          "parse_local_config_file",
                                                                          a1);
                                                                        snprintf(
                                                                          byte_22A69C,
                                                                          0x100u,
                                                                          "Can't read out Sweep_Freq_Diff in %s",
                                                                          a1);
                                                                        sub_3CC5C(byte_22A69C, v252);
                                                                      }
                                                                    }
                                                                    else
                                                                    {
                                                                      sub_1E938(v252, 48);
                                                                      v4 = 0;
                                                                      printf("%s ", v252);
                                                                      printf(
                                                                        "%s : Can't read out Sweep_Vol_Diff in %s\n",
                                                                        "parse_local_config_file",
                                                                        a1);
                                                                      snprintf(
                                                                        byte_22A49C,
                                                                        0x100u,
                                                                        "Can't read out Sweep_Vol_Diff in %s",
                                                                        a1);
                                                                      sub_3CC5C(byte_22A49C, v252);
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    sub_1E938(v252, 48);
                                                                    v4 = 0;
                                                                    printf("%s ", v252);
                                                                    printf(
                                                                      "%s : Can't read out Force_Local_Cfg_Level in %s\n",
                                                                      "parse_local_config_file",
                                                                      a1);
                                                                    snprintf(
                                                                      byte_22A29C,
                                                                      0x100u,
                                                                      "Can't read out Force_Local_Cfg_Level in %s",
                                                                      a1);
                                                                    sub_3CC5C(byte_22A29C, v252);
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  sub_1E938(v252, 48);
                                                                  v4 = 0;
                                                                  printf("%s ", v252);
                                                                  printf(
                                                                    "%s : Can't read out Sweep_Max_Freq in %s\n",
                                                                    "parse_local_config_file",
                                                                    a1);
                                                                  snprintf(
                                                                    byte_22A09C,
                                                                    0x100u,
                                                                    "Can't read out Sweep_Max_Freq in %s",
                                                                    a1);
                                                                  sub_3CC5C(byte_22A09C, v252);
                                                                }
                                                              }
                                                              else
                                                              {
                                                                sub_1E938(v252, 48);
                                                                v4 = 0;
                                                                printf("%s ", v252);
                                                                printf(
                                                                  "%s : Can't read out Sweep_Min_Freq in %s\n",
                                                                  "parse_local_config_file",
                                                                  a1);
                                                                snprintf(
                                                                  byte_229E9C,
                                                                  0x100u,
                                                                  "Can't read out Sweep_Min_Freq in %s",
                                                                  a1);
                                                                sub_3CC5C(byte_229E9C, v252);
                                                              }
                                                            }
                                                            else
                                                            {
                                                              sub_1E938(v252, 48);
                                                              v4 = 0;
                                                              printf("%s ", v252);
                                                              printf(
                                                                "%s : Can't read out Force_Reset_Freq_Range in %s\n",
                                                                "parse_local_config_file",
                                                                a1);
                                                              snprintf(
                                                                byte_229C9C,
                                                                0x100u,
                                                                "Can't read out Force_Reset_Freq_Range in %s",
                                                                a1);
                                                              sub_3CC5C(byte_229C9C, v252);
                                                            }
                                                          }
                                                          else
                                                          {
                                                            sub_1E938(v252, 48);
                                                            v4 = 0;
                                                            printf("%s ", v252);
                                                            printf(
                                                              "%s : Can't read out Freq_Float_Percent in %s\n",
                                                              "parse_local_config_file",
                                                              a1);
                                                            snprintf(
                                                              byte_229A9C,
                                                              0x100u,
                                                              "Can't read out Freq_Float_Percent in %s",
                                                              a1);
                                                            sub_3CC5C(byte_229A9C, v252);
                                                          }
                                                        }
                                                        else
                                                        {
                                                          sub_1E938(v252, 48);
                                                          v4 = 0;
                                                          printf("%s ", v252);
                                                          printf(
                                                            "%s : Can't read out Data_Reuse_Mode in %s\n",
                                                            "parse_local_config_file",
                                                            a1);
                                                          snprintf(
                                                            byte_22989C,
                                                            0x100u,
                                                            "Can't read out Data_Reuse_Mode in %s",
                                                            a1);
                                                          sub_3CC5C(byte_22989C, v252);
                                                        }
                                                      }
                                                      else
                                                      {
                                                        sub_1E938(v252, 48);
                                                        v4 = 0;
                                                        printf("%s ", v252);
                                                        printf(
                                                          "%s : Can't read out Force_PT2_Before_Sweep in %s\n",
                                                          "parse_local_config_file",
                                                          a1);
                                                        snprintf(
                                                          byte_22969C,
                                                          0x100u,
                                                          "Can't read out Force_PT2_Before_Sweep in %s",
                                                          a1);
                                                        sub_3CC5C(byte_22969C, v252);
                                                      }
                                                    }
                                                    else
                                                    {
                                                      sub_1E938(v252, 48);
                                                      v4 = 0;
                                                      printf("%s ", v252);
                                                      printf(
                                                        "%s : Can't read out Force_Reset_Power_Mode in %s\n",
                                                        "parse_local_config_file",
                                                        a1);
                                                      snprintf(
                                                        byte_22949C,
                                                        0x100u,
                                                        "Can't read out Force_Reset_Power_Mode in %s",
                                                        a1);
                                                      sub_3CC5C(byte_22949C, v252);
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  sub_1E938(v252, 48);
                                                  v4 = 0;
                                                  printf("%s ", v252);
                                                  printf(
                                                    "%s : Can't read out Midstate_Number in %s\n",
                                                    "parse_local_config_file",
                                                    a1);
                                                  snprintf(
                                                    byte_228F9C,
                                                    0x100u,
                                                    "Can't read out Midstate_Number in %s",
                                                    a1);
                                                  sub_3CC5C(byte_228F9C, v252);
                                                }
                                              }
                                              else
                                              {
                                                sub_1E938(v252, 48);
                                                v4 = 0;
                                                printf("%s ", v252);
                                                printf(
                                                  "%s : Can't read out Autogen_Pattern in %s\n",
                                                  "parse_local_config_file",
                                                  a1);
                                                snprintf(
                                                  byte_228D9C,
                                                  0x100u,
                                                  "Can't read out Autogen_Pattern in %s",
                                                  a1);
                                                sub_3CC5C(byte_228D9C, v252);
                                              }
                                            }
                                            else
                                            {
                                              sub_1E938(v252, 48);
                                              v4 = 0;
                                              printf("%s ", v252);
                                              printf(
                                                "%s : Can't read out Hardware_Pattern in %s\n",
                                                "parse_local_config_file",
                                                a1);
                                              snprintf(byte_228B9C, 0x100u, "Can't read out Hardware_Pattern in %s", a1);
                                              sub_3CC5C(byte_228B9C, v252);
                                            }
                                          }
                                          else
                                          {
                                            sub_1E938(v252, 48);
                                            v4 = 0;
                                            printf("%s ", v252);
                                            printf(
                                              "%s : Can't read out Software_Pattern in %s\n",
                                              "parse_local_config_file",
                                              a1);
                                            snprintf(byte_22879C, 0x100u, "Can't read out Software_Pattern in %s", a1);
                                            sub_3CC5C(byte_22879C, v252);
                                          }
                                        }
                                        else
                                        {
                                          sub_1E938(v252, 48);
                                          v4 = 0;
                                          printf("%s ", v252);
                                          printf(
                                            "%s : Can't read out Test_Method in %s\n",
                                            "parse_local_config_file",
                                            a1);
                                          snprintf(byte_22869C, 0x100u, "Can't read out Test_Method in %s", a1);
                                          sub_3CC5C(byte_22869C, v252);
                                        }
                                        goto LABEL_4;
                                      }
                                      sub_1E938(v252, 48);
                                      v4 = 0;
                                      printf("%s ", v252);
                                      printf(
                                        "%s : Can't read out Bypass_Scan_Code_Gun in %s\n",
                                        "parse_local_config_file",
                                        a1);
                                      snprintf(byte_227C9C, 0x100u, "Can't read out Bypass_Scan_Code_Gun in %s", a1);
                                      sub_3CC5C(byte_227C9C, v252);
                                    }
                                    else
                                    {
                                      sub_1E938(v252, 48);
                                      v4 = 0;
                                      printf("%s ", v252);
                                      printf("%s : Can't read out Factory_Mode in %s\n", "parse_local_config_file", a1);
                                      snprintf(byte_227A9C, 0x100u, "Can't read out Factory_Mode in %s", a1);
                                      sub_3CC5C(byte_227A9C, v252);
                                    }
                                  }
                                }
                              }
                              else
                              {
                                sub_1E938(v252, 48);
                                v4 = 0;
                                printf("%s ", v252);
                                printf(
                                  "%s : Can't read out CtrlBoard_Sensor_Addr in %s\n",
                                  "parse_local_config_file",
                                  a1);
                                snprintf(byte_226F94, 0x100u, "Can't read out CtrlBoard_Sensor_Addr in %s", a1);
                                sub_3CC5C(byte_226F94, v252);
                              }
                            }
                            else
                            {
                              sub_1E938(v252, 48);
                              v4 = 0;
                              printf("%s ", v252);
                              printf("%s : Can't read out Pic_Sensor_Model in %s\n", "parse_local_config_file", a1);
                              snprintf(byte_225D84, 0x100u, "Can't read out Pic_Sensor_Model in %s", a1);
                              sub_3CC5C(byte_225D84, v252);
                            }
                          }
                          else
                          {
                            sub_1E938(v252, 48);
                            v4 = 0;
                            printf("%s ", v252);
                            printf("%s : Can't read out Pic_Sensor in %s\n", "parse_local_config_file", a1);
                            snprintf(byte_225C84, 0x100u, "Can't read out Pic_Sensor in %s", a1);
                            sub_3CC5C(byte_225C84, v252);
                          }
                        }
                        else
                        {
                          sub_1E938(v252, 48);
                          v4 = 0;
                          printf("%s ", v252);
                          printf(
                            "%s : Can't read out Read_Temperature_From_Asic in %s\n",
                            "parse_local_config_file",
                            a1);
                          snprintf(byte_225884, 0x100u, "Can't read out Read_Temperature_From_Asic in %s", a1);
                          sub_3CC5C(byte_225884, v252);
                        }
                      }
                      else
                      {
                        sub_1E938(v252, 48);
                        v4 = 0;
                        printf("%s ", v252);
                        printf("%s : Can't read out Read_Temperature_From_Pic in %s\n", "parse_local_config_file", a1);
                        snprintf(byte_225684, 0x100u, "Can't read out Read_Temperature_From_Pic in %s", a1);
                        sub_3CC5C(byte_225684, v252);
                      }
                    }
                    else
                    {
                      sub_1E938(v252, 48);
                      v4 = 0;
                      printf("%s ", v252);
                      printf("%s : Can't read out Sensor_Info in %s\n", "parse_local_config_file", a1);
                      snprintf(byte_225584, 0x100u, "Can't read out Sensor_Info in %s", a1);
                      sub_3CC5C(byte_225584, v252);
                    }
                  }
                  else
                  {
                    sub_1E938(v252, 48);
                    v4 = 0;
                    printf("%s ", v252);
                    printf("%s : Can't read out Asic_Num_Per_Voltage_Domain in %s\n", "parse_local_config_file", a1);
                    snprintf(byte_224684, 0x100u, "Can't read out Asic_Num_Per_Voltage_Domain in %s", a1);
                    sub_3CC5C(byte_224684, v252);
                  }
                }
                else
                {
                  sub_1E938(v252, 48);
                  v4 = 0;
                  printf("%s ", v252);
                  printf("%s : Can't read out Voltage_Domain in %s\n", "parse_local_config_file", a1);
                  snprintf(byte_224484, 0x100u, "Can't read out Voltage_Domain in %s", a1);
                  sub_3CC5C(byte_224484, v252);
                }
              }
              else
              {
                sub_1E938(v252, 48);
                v4 = 0;
                printf("%s ", v252);
                printf("%s : Can't read out Asic_Num in %s\n", "parse_local_config_file", a1);
                snprintf(byte_224284, 0x100u, "Can't read out Asic_Num in %s", a1);
                sub_3CC5C(byte_224284, v252);
              }
            }
            else
            {
              sub_1E938(v252, 48);
              v4 = 0;
              printf("%s ", v252);
              printf("%s : Can't read out Asic_Type in %s\n", "parse_local_config_file", a1);
              snprintf(byte_224084, 0x100u, "Can't read out Asic_Type in %s", a1);
              sub_3CC5C(byte_224084, v252);
            }
          }
          else
          {
            sub_1E938(v252, 48);
            v4 = 0;
            printf("%s ", v252);
            printf("%s : Can't read out Board_Name in %s\n", "parse_local_config_file", a1);
            snprintf(byte_223E84, 0x100u, "Can't read out Board_Name in %s", a1);
            sub_3CC5C(byte_223E84, v252);
          }
        }
        else
        {
          sub_1E938(v252, 48);
          v4 = 0;
          printf("%s ", v252);
          printf("%s : Can't read out Miner_Type in %s\n", "parse_local_config_file", a1);
          snprintf(byte_223C84, 0x100u, "Can't read out Miner_Type in %s", a1);
          sub_3CC5C(byte_223C84, v252);
        }
      }
      else
      {
        sub_1E938(v252, 48);
        v4 = 0;
        printf("%s ", v252);
        printf("%s : Can't read out Hash_Board in %s\n", "parse_local_config_file", a1);
        snprintf(byte_223B84, 0x100u, "Can't read out Hash_Board in %s", a1);
        sub_3CC5C(byte_223B84, v252);
      }
    }
    else
    {
      sub_1E938(v252, 48);
      v4 = 0;
      printf("%s ", v252);
      printf("%s : Can't read out Test_Process in %s\n", "parse_local_config_file", a1);
      snprintf(byte_223984, 0x100u, "Can't read out Test_Process in %s", a1);
      sub_3CC5C(byte_223984, v252);
    }
  }
LABEL_4:
  if ( *((_DWORD *)v3 + 1) == -1 )
    return v4;
  v5 = (unsigned int *)(v3 + 4);
  __dmb(0xBu);
  do
  {
    v6 = __ldrex(v5);
    v7 = v6 - 1;
  }
  while ( __strex(v7, v5) );
  if ( v7 )
    return v4;
  sub_7B714(v3);
  return v4;
}
