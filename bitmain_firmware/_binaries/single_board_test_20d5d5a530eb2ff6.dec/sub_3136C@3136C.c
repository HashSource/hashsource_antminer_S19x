int sub_3136C()
{
  _DWORD *v0; // r0
  int v1; // r6
  int *v3; // r0
  int *v4; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  const char *v7; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD *v12; // r7
  _DWORD *v13; // r4
  int v14; // r1
  int v15; // r2
  int v16; // r3
  char *v17; // r7
  const char *v18; // r0
  _DWORD *v19; // r0
  char *v20; // r7
  const char *v21; // r0
  _DWORD *v22; // r0
  char *v23; // r6
  const char *v24; // r0
  unsigned int v25; // r6
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r11
  char *v29; // r0
  char *v30; // r4
  int v31; // r3
  _DWORD *v32; // r0
  const char *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r9
  unsigned int v36; // r8
  _DWORD *v37; // r0
  _DWORD *v38; // r5
  _DWORD *v39; // r0
  int v40; // r3
  int v41; // r0
  int v42; // r0
  const char *v43; // r0
  int v44; // r0
  const char *v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  _DWORD *v49; // r0
  _DWORD *v50; // r5
  int v51; // r6
  unsigned int j; // r11
  _DWORD *v53; // r0
  int v54; // r0
  _DWORD *v55; // r0
  _DWORD *v56; // r8
  _DWORD *v57; // r0
  _DWORD *v58; // r7
  unsigned int v59; // r9
  _DWORD *v60; // r0
  _DWORD *v61; // r5
  _DWORD *v62; // r0
  int v63; // r2
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  _DWORD *v71; // r0
  _DWORD *v72; // r10
  unsigned int v73; // r9
  _DWORD *v74; // r0
  _DWORD *v75; // r7
  _DWORD *v76; // r0
  _DWORD *v77; // r5
  int v78; // r3
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  _DWORD *v88; // r0
  _DWORD *v89; // r5
  unsigned int v90; // r9
  _DWORD *v91; // r6
  char *v92; // r5
  _DWORD *v93; // r0
  _DWORD *v94; // r4
  char *v95; // r0
  int v96; // r1
  char *v97; // r11
  int v98; // r0
  int v99; // r0
  const char *v100; // r0
  _DWORD *v101; // r11
  char *v102; // r4
  _DWORD *v103; // r0
  unsigned int v104; // r10
  _DWORD *v105; // r0
  _DWORD *v106; // r5
  _DWORD *v107; // r0
  _DWORD *v108; // r7
  int v109; // r3
  int v110; // r0
  int v111; // r0
  int v112; // r0
  _DWORD *v113; // r0
  unsigned int v114; // r8
  _DWORD *v115; // r0
  _DWORD *v116; // r5
  char *v117; // r0
  char *v118; // r7
  int v119; // r3
  int v120; // r0
  const char *v121; // r0
  int v122; // r0
  const char *v123; // r0
  int v124; // r0
  const char *v125; // r0
  int v126; // r0
  const char *v127; // r0
  int v128; // r0
  _DWORD *v129; // r0
  _DWORD *v130; // r11
  unsigned int v131; // r9
  _DWORD *v132; // r0
  _DWORD *v133; // r10
  char *v134; // r0
  char *v135; // r5
  int v136; // r3
  int v137; // r0
  const char *v138; // r0
  int v139; // r0
  int v140; // r0
  int v141; // r0
  int v142; // r0
  int v143; // r0
  int v144; // r0
  _DWORD *v145; // r0
  _DWORD *v146; // r10
  char *v147; // r5
  int v148; // r4
  _DWORD *v149; // r0
  unsigned int i; // [sp+10h] [bp-16Ch]
  _DWORD *v151; // [sp+18h] [bp-164h]
  _DWORD *v152; // [sp+18h] [bp-164h]
  unsigned int v153; // [sp+18h] [bp-164h]
  _DWORD *v154; // [sp+24h] [bp-158h]
  _DWORD *v155; // [sp+28h] [bp-154h]
  char *v156; // [sp+44h] [bp-138h]
  char v157[48]; // [sp+4Ch] [bp-130h] BYREF
  char v158[256]; // [sp+7Ch] [bp-100h] BYREF

  sub_1E938(v158, 0x30u);
  printf("%s ", v158);
  printf("%s : begin\n", "parse_all_MES_system_config_information");
  strcpy((char *)&dword_61CD20, "begin");
  sub_3CC5C(&dword_61CD20, v158);
  v0 = (_DWORD *)sub_7AAA0(dword_61BC14, dword_61BC10 - 1, 0, v158);
  dword_61BD18 = (int)v0;
  if ( !v0 || *v0 )
  {
    v1 = 0;
    sub_1E938(v157, 0x30u);
    printf("%s ", v157);
    printf(
      "%s : The received MES system all config information is not in JSON format\n",
      "parse_all_MES_system_config_information");
    strcpy(byte_61CE20, "The received MES system all config information is not in JSON format");
    sub_3CC5C(byte_61CE20, v157);
    goto LABEL_4;
  }
  v3 = (int *)sub_7B2D0(v0, "result");
  v4 = v3;
  if ( !v3 || (v1 = *v3) != 0 )
  {
    sub_1E938(v157, 0x30u);
    printf("%s ", v157);
    printf(
      "%s : Can't find result in MES system paticular config information\n",
      "parse_all_MES_system_config_information");
    v1 = 0;
    strcpy(byte_61CF20, "Can't find result in MES system paticular config information");
    sub_3CC5C(byte_61CF20, v157);
    goto LABEL_4;
  }
  v5 = (_DWORD *)sub_7B2D0(v3, "version");
  if ( !v5 || *v5 != 2 )
  {
    v6 = &unk_61D020;
    sub_1E938(v157, 0x30u);
    v7 = "Can't find version in result";
    printf("%s ", v157);
    v1 = 0;
    printf("%s : Can't find version in result\n", "parse_all_MES_system_config_information");
LABEL_11:
    v8 = *(_DWORD *)v7;
    v9 = *((_DWORD *)v7 + 1);
    v10 = *((_DWORD *)v7 + 2);
    v11 = *((_DWORD *)v7 + 3);
    v12 = v7 + 16;
    *v6 = v8;
    v6[1] = v9;
    v6[2] = v10;
    v6[3] = v11;
    v13 = v6 + 4;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    *v13 = *v12;
    v13[1] = v14;
    v13[2] = v15;
    v13 += 3;
    *(_BYTE *)v13 = v16;
    sub_3CC5C(v13 - 7, v157);
    goto LABEL_4;
  }
  v17 = (char *)(dword_61CB1C + 28);
  v18 = (const char *)sub_7B4A8(v5);
  strcpy(v17, v18);
  v19 = (_DWORD *)sub_7B2D0(v4, "code");
  if ( !v19 || *v19 != 2 )
  {
    sub_1E938(v157, 0x30u);
    printf("%s ", v157);
    printf("%s : Can't find code in result\n", "parse_all_MES_system_config_information");
    v1 = 0;
    strcpy(byte_61D120, "Can't find code in result");
    sub_3CC5C(byte_61D120, v157);
    goto LABEL_4;
  }
  v20 = (char *)(dword_61CB1C + 52);
  v21 = (const char *)sub_7B4A8(v19);
  strcpy(v20, v21);
  if ( strcmp((const char *)(dword_61CB1C + 52), "000000") )
  {
    sub_1E938(v157, 0x30u);
    printf("%s ", v157);
    printf(
      "%s : Get all config information fail. code: %s\n",
      "parse_all_MES_system_config_information",
      (const char *)(dword_61CB1C + 52));
    snprintf(byte_61D220, 0x100u, "Get all config information fail. code: %s", (const char *)(dword_61CB1C + 52));
    sub_3CC5C(byte_61D220, v157);
    goto LABEL_4;
  }
  v22 = (_DWORD *)sub_7B2D0(v4, "msg");
  if ( !v22 || *v22 != 2 )
  {
    sub_1E938(v157, 0x30u);
    printf("%s ", v157);
    printf("%s : Can't find msg in result\n", "parse_all_MES_system_config_information");
    v1 = 0;
    strcpy(byte_61D320, "Can't find msg in result");
    sub_3CC5C(byte_61D320, v157);
    goto LABEL_4;
  }
  v23 = (char *)(dword_61CB1C + 76);
  v24 = (const char *)sub_7B4A8(v22);
  strcpy(v23, v24);
  if ( *(_BYTE *)(dword_61CB1C + 76) != 111
    || *(_BYTE *)(dword_61CB1C + 77) != 107
    || (v25 = *(unsigned __int8 *)(dword_61CB1C + 78), *(_BYTE *)(dword_61CB1C + 78)) )
  {
    v1 = 0;
    sub_1E938(v157, 0x30u);
    printf("%s ", v157);
    printf(
      "%s : Get all config information fail. msg: %s\n",
      "parse_all_MES_system_config_information",
      (const char *)(dword_61CB1C + 76));
    snprintf(byte_61D420, 0x100u, "Get all config information fail. msg: %s", (const char *)(dword_61CB1C + 76));
    sub_3CC5C(byte_61D420, v157);
    goto LABEL_4;
  }
  v26 = (_DWORD *)sub_7B2D0(v4, "configs");
  v154 = v26;
  if ( !v26 || *v26 != 1 )
  {
    v7 = "Can't find configs in result";
    sub_1E938(v157, 0x30u);
    v1 = 0;
    printf("%s ", v157);
    v6 = &unk_61D520;
    printf("%s : Can't find configs in result\n", "parse_all_MES_system_config_information");
    goto LABEL_11;
  }
  dword_61D620 = sub_7B3A0(v26);
  for ( i = v25; ; ++i )
  {
    if ( i >= dword_61D620 )
    {
      v1 = 1;
      goto LABEL_4;
    }
    v27 = (_DWORD *)sub_7B3B4(v154, i);
    v28 = v27;
    if ( !v27 || *v27 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't read out configs[%d] in result, error\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61D624, 0x100u, "Can't read out configs[%d] in result, error", i);
      sub_3CC5C(byte_61D624, v157);
      goto LABEL_4;
    }
    v29 = (char *)calloc(1u, 0x34u);
    v30 = v29;
    if ( !v29 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : malloc for configs[%d] in result fail\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61D724, 0x100u, "malloc for configs[%d] in result fail", i);
      sub_3CC5C(byte_61D724, v157);
      goto LABEL_4;
    }
    *((_DWORD *)v29 + 12) = 0;
    v31 = *(_DWORD *)(dword_61CB1C + 100);
    if ( v31 )
    {
      while ( *(_DWORD *)(v31 + 48) )
        v31 = *(_DWORD *)(v31 + 48);
      *(_DWORD *)(v31 + 48) = v29;
    }
    else
    {
      *(_DWORD *)(dword_61CB1C + 100) = v29;
      *((_DWORD *)v29 + 12) = 0;
    }
    v32 = (_DWORD *)sub_7B2D0(v28, "miner_type");
    if ( !v32 || *v32 != 2 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't find miner_type in configs[%d] in result\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61D824, 0x100u, "Can't find miner_type in configs[%d] in result", i);
      sub_3CC5C(byte_61D824, v157);
      goto LABEL_4;
    }
    v33 = (const char *)sub_7B4A8(v32);
    strcpy(v30, v33);
    v34 = (_DWORD *)sub_7B2D0(v28, "hw_info");
    if ( !v34 || *v34 != 1 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't find hw_info in configs[%d] in result\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61D924, 0x100u, "Can't find hw_info in configs[%d] in result", i);
      sub_3CC5C(byte_61D924, v157);
      goto LABEL_4;
    }
    v35 = v34;
    v36 = 0;
    dword_61DA24 = sub_7B3A0(v34);
    v151 = v28;
LABEL_42:
    if ( v36 < dword_61DA24 )
      break;
    v55 = (_DWORD *)sub_7B2D0(v151, "rule");
    v56 = v55;
    if ( !v55 || *v55 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't find rule configs[%d] in result\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61DE2C, 0x100u, "Can't find rule configs[%d] in result", i);
      sub_3CC5C(byte_61DE2C, v157);
      goto LABEL_4;
    }
    v57 = (_DWORD *)sub_7B2D0(v55, "pattern");
    v58 = v57;
    if ( !v57 || *v57 != 1 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't find pattern in configs[%d]->rule\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61DF2C, 0x100u, "Can't find pattern in configs[%d]->rule", i);
      sub_3CC5C(byte_61DF2C, v157);
      goto LABEL_4;
    }
    v59 = 0;
    dword_61E02C = sub_7B3A0(v57);
    while ( v59 < dword_61E02C )
    {
      v60 = (_DWORD *)sub_7B3B4(v58, v59);
      v61 = v60;
      if ( !v60 || *v60 )
      {
        sub_1E938(v157, 0x30u);
        v1 = 0;
        printf("%s ", v157);
        printf(
          "%s : Can't find pattern[%d] in configs[%d]->rule, error\n",
          "parse_all_MES_system_config_information",
          v59,
          i);
        snprintf(byte_61E030, 0x100u, "Can't find pattern[%d] in configs[%d]->rule, error", v59, i);
        sub_3CC5C(byte_61E030, v157);
        goto LABEL_4;
      }
      v62 = calloc(1u, 0x20u);
      v1 = (int)v62;
      if ( !v62 )
      {
        sub_1E938(v157, 0x30u);
        printf("%s ", v157);
        printf(
          "%s : malloc for configs[%d]->rule->pattern[%d] fail\n",
          "parse_all_MES_system_config_information",
          i,
          v59);
        snprintf(byte_61E130, 0x100u, "malloc for configs[%d]->rule->pattern[%d] fail", i, v59);
        sub_3CC5C(byte_61E130, v157);
        goto LABEL_4;
      }
      v63 = *((_DWORD *)v30 + 7);
      v62[7] = 0;
      if ( v63 )
      {
        while ( *(_DWORD *)(v63 + 28) )
          v63 = *(_DWORD *)(v63 + 28);
        *(_DWORD *)(v63 + 28) = v62;
      }
      else
      {
        *((_DWORD *)v30 + 7) = v62;
      }
      v64 = sub_7B2D0(v61, "id");
      ++v59;
      *(_DWORD *)v1 = sub_7B604(v64);
      v65 = sub_7B2D0(v61, "pattern_number");
      *(_DWORD *)(v1 + 4) = sub_7B604(v65);
      v66 = sub_7B2D0(v61, "invalid_core_num");
      *(_DWORD *)(v1 + 8) = sub_7B604(v66);
      v67 = sub_7B2D0(v61, "most_hw_num");
      *(_DWORD *)(v1 + 12) = sub_7B604(v67);
      v68 = sub_7B2D0(v61, "least_nonce_per_core");
      *(_DWORD *)(v1 + 16) = sub_7B604(v68);
      v69 = sub_7B2D0(v61, "nonce_rate");
      *(_DWORD *)(v1 + 20) = sub_7B604(v69);
      v70 = sub_7B2D0(v61, "midstate_number");
      *(_DWORD *)(v1 + 24) = sub_7B604(v70);
    }
    v71 = (_DWORD *)sub_7B2D0(v56, "asic_reg");
    v72 = v71;
    if ( !v71 || *v71 != 1 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't find asic_reg in configs[%d]->rule\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61E230, 0x100u, "Can't find asic_reg in configs[%d]->rule", i);
      sub_3CC5C(byte_61E230, v157);
      goto LABEL_4;
    }
    v73 = 0;
    dword_61E330 = sub_7B3A0(v71);
    while ( v73 < dword_61E330 )
    {
      v74 = (_DWORD *)sub_7B3B4(v72, v73);
      v75 = v74;
      if ( !v74 || *v74 )
      {
        sub_1E938(v157, 0x30u);
        v1 = 0;
        printf("%s ", v157);
        printf(
          "%s : Can't find asic_reg[%d] in configs[%d]->rule, error\n",
          "parse_all_MES_system_config_information",
          v73,
          i);
        snprintf(byte_61E334, 0x100u, "Can't find asic_reg[%d] in configs[%d]->rule, error", v73, i);
        sub_3CC5C(byte_61E334, v157);
        goto LABEL_4;
      }
      v76 = calloc(1u, 0x28u);
      v77 = v76;
      if ( !v76 )
      {
        v1 = 0;
        sub_1E938(v157, 0x30u);
        printf("%s ", v157);
        printf(
          "%s : malloc for configs[%d]->rule->asic_reg[%d] fail\n",
          "parse_all_MES_system_config_information",
          i,
          v73);
        snprintf(byte_61E434, 0x100u, "malloc for configs[%d]->rule->asic_reg[%d] fail", i, v73);
        sub_3CC5C(byte_61E434, v157);
        goto LABEL_4;
      }
      v78 = *((_DWORD *)v30 + 8);
      v76[9] = 0;
      if ( v78 )
      {
        while ( *(_DWORD *)(v78 + 36) )
          v78 = *(_DWORD *)(v78 + 36);
        *(_DWORD *)(v78 + 36) = v76;
      }
      else
      {
        *((_DWORD *)v30 + 8) = v76;
      }
      v79 = sub_7B2D0(v75, "id");
      ++v73;
      *v77 = sub_7B604(v79);
      v80 = sub_7B2D0(v75, "ccdly_sel");
      v77[1] = sub_7B604(v80);
      v81 = sub_7B2D0(v75, "pwth_sel");
      v77[2] = sub_7B604(v81);
      v82 = sub_7B2D0(v75, "swpf_mode");
      v77[3] = sub_7B604(v82);
      v83 = sub_7B2D0(v75, "pulse_mode");
      v77[4] = sub_7B604(v83);
      v84 = sub_7B2D0(v75, "clk_sel");
      v77[5] = sub_7B604(v84);
      v85 = sub_7B2D0(v75, "ro_relay_en");
      v77[6] = sub_7B604(v85);
      v86 = sub_7B2D0(v75, "co_relay_en");
      v77[7] = sub_7B604(v86);
      v87 = sub_7B2D0(v75, "diode_vdd_mux_sel");
      v77[8] = sub_7B604(v87);
    }
    v88 = (_DWORD *)sub_7B2D0(v56, "test_method");
    v89 = v88;
    if ( !v88 || *v88 != 1 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't find test_method in configs[%d]->rule\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61E534, 0x100u, "Can't find test_method in configs[%d]->rule", i);
      sub_3CC5C(byte_61E534, v157);
      goto LABEL_4;
    }
    v90 = 0;
    dword_61E634 = sub_7B3A0(v88);
    v91 = v89;
    v92 = v30;
    while ( v90 < dword_61E634 )
    {
      v93 = (_DWORD *)sub_7B3B4(v91, v90);
      v94 = v93;
      if ( !v93 || *v93 )
      {
        sub_1E938(v157, 0x30u);
        v1 = 0;
        printf("%s ", v157);
        printf(
          "%s : Can't find test_method[%d] in configs[%d]->rule, error\n",
          "parse_all_MES_system_config_information",
          v90,
          i);
        snprintf(byte_61E638, 0x100u, "Can't find test_method[%d] in configs[%d]->rule, error", v90, i);
        sub_3CC5C(byte_61E638, v157);
        goto LABEL_4;
      }
      v95 = (char *)calloc(1u, 0x20u);
      if ( !v95 )
      {
        v1 = 0;
        sub_1E938(v157, 0x30u);
        printf("%s ", v157);
        printf(
          "%s : malloc for configs[%d]->rule->test_method[%d] fail\n",
          "parse_all_MES_system_config_information",
          i,
          v90);
        snprintf(byte_61E738, 0x100u, "malloc for configs[%d]->rule->test_method[%d] fail", i, v90);
        sub_3CC5C(byte_61E738, v157);
        goto LABEL_4;
      }
      v96 = *((_DWORD *)v92 + 9);
      *((_DWORD *)v95 + 7) = 0;
      if ( v96 )
      {
        while ( *(_DWORD *)(v96 + 28) )
          v96 = *(_DWORD *)(v96 + 28);
        *(_DWORD *)(v96 + 28) = v95;
      }
      else
      {
        *((_DWORD *)v92 + 9) = v95;
      }
      v97 = v95;
      ++v90;
      v98 = sub_7B2D0(v94, "id");
      *(_DWORD *)v97 = sub_7B604(v98);
      v99 = sub_7B2D0(v94, "method");
      v100 = (const char *)sub_7B4A8(v99);
      strcpy(v97 + 4, v100);
    }
    v101 = v151;
    v102 = v92;
    v103 = (_DWORD *)sub_7B2D0(v56, "test_loop");
    v152 = v103;
    if ( !v103 || *v103 != 1 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't find test_loop in configs[%d]->rule\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61E838, 0x100u, "Can't find test_loop in configs[%d]->rule", i);
      sub_3CC5C(byte_61E838, v157);
      goto LABEL_4;
    }
    v104 = 0;
    dword_61E938 = sub_7B3A0(v103);
    while ( v104 < dword_61E938 )
    {
      v105 = (_DWORD *)sub_7B3B4(v152, v104);
      v106 = v105;
      if ( !v105 || *v105 )
      {
        sub_1E938(v157, 0x30u);
        v1 = 0;
        printf("%s ", v157);
        printf(
          "%s : Can't find test_loop[%d] in configs[%d]->rule, error\n",
          "parse_all_MES_system_config_information",
          v104,
          i);
        snprintf(byte_61E93C, 0x100u, "Can't find test_loop[%d] in configs[%d]->rule, error", v104, i);
        sub_3CC5C(byte_61E93C, v157);
        goto LABEL_4;
      }
      v107 = calloc(1u, 0x10u);
      v108 = v107;
      if ( !v107 )
      {
        v1 = 0;
        sub_1E938(v157, 0x30u);
        printf("%s ", v157);
        printf(
          "%s : malloc for configs[%d]->rule->test_loop[%d] fail\n",
          "parse_all_MES_system_config_information",
          i,
          v90);
        snprintf(byte_61EA3C, 0x100u, "malloc for configs[%d]->rule->test_loop[%d] fail", i, v90);
        sub_3CC5C(byte_61EA3C, v157);
        goto LABEL_4;
      }
      v109 = *((_DWORD *)v102 + 10);
      v107[3] = 0;
      if ( v109 )
      {
        while ( *(_DWORD *)(v109 + 12) )
          v109 = *(_DWORD *)(v109 + 12);
        *(_DWORD *)(v109 + 12) = v107;
      }
      else
      {
        *((_DWORD *)v102 + 10) = v107;
      }
      v110 = sub_7B2D0(v106, "id");
      ++v104;
      *v108 = sub_7B604(v110);
      v111 = sub_7B2D0(v106, "frequency");
      v108[1] = sub_7B604(v111);
      v112 = sub_7B2D0(v106, "voltage");
      v108[2] = sub_7B604(v112);
    }
    v113 = (_DWORD *)sub_7B2D0(v101, "test_config");
    v155 = v113;
    if ( !v113 || *v113 != 1 )
    {
      sub_1E938(v157, 0x30u);
      v1 = 0;
      printf("%s ", v157);
      printf("%s : Can't find test_config in configs[%d] in result\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61EB3C, 0x100u, "Can't find test_config in configs[%d] in result", i);
      sub_3CC5C(byte_61EB3C, v157);
      goto LABEL_4;
    }
    v114 = 0;
    dword_61EC3C = sub_7B3A0(v113);
    while ( v114 < dword_61EC3C )
    {
      v115 = (_DWORD *)sub_7B3B4(v155, v114);
      v116 = v115;
      if ( !v115 || *v115 )
      {
        sub_1E938(v157, 0x30u);
        v1 = 0;
        printf("%s ", v157);
        printf(
          "%s : Can't find test_config[%d] in configs[%d], error\n",
          "parse_all_MES_system_config_information",
          v114,
          i);
        snprintf(byte_61EC40, 0x100u, "Can't find test_config[%d] in configs[%d], error", v114, i);
        sub_3CC5C(byte_61EC40, v157);
        goto LABEL_4;
      }
      v117 = (char *)calloc(1u, 0x6Cu);
      v118 = v117;
      if ( !v117 )
      {
        v1 = 0;
        sub_1E938(v157, 0x30u);
        printf("%s ", v157);
        printf(
          "%s : malloc for configs[%d]->test_config[%d] fail\n",
          "parse_all_MES_system_config_information",
          i,
          v114);
        snprintf(byte_61ED40, 0x100u, "malloc for configs[%d]->test_config[%d] fail", i, v114);
        sub_3CC5C(byte_61ED40, v157);
        goto LABEL_4;
      }
      v119 = *((_DWORD *)v102 + 11);
      *((_DWORD *)v117 + 26) = 0;
      if ( v119 )
      {
        while ( *(_DWORD *)(v119 + 104) )
          v119 = *(_DWORD *)(v119 + 104);
        *(_DWORD *)(v119 + 104) = v117;
      }
      else
      {
        *((_DWORD *)v102 + 11) = v117;
      }
      v120 = sub_7B2D0(v116, "hardware_version");
      v121 = (const char *)sub_7B4A8(v120);
      strcpy(v118, v121);
      v122 = sub_7B2D0(v116, "bom_version");
      v123 = (const char *)sub_7B4A8(v122);
      strcpy(v118 + 24, v123);
      v124 = sub_7B2D0(v116, "chip_technology");
      v125 = (const char *)sub_7B4A8(v124);
      strcpy(v118 + 48, v125);
      v126 = sub_7B2D0(v116, "ft_vesrion");
      v127 = (const char *)sub_7B4A8(v126);
      strcpy(v118 + 72, v127);
      v128 = sub_7B2D0(v116, "bin");
      *((_DWORD *)v118 + 24) = sub_7B604(v128);
      v129 = (_DWORD *)sub_7B2D0(v116, "data");
      v130 = v129;
      if ( !v129 || *v129 != 1 )
      {
        sub_1E938(v157, 0x30u);
        v1 = 0;
        printf("%s ", v157);
        printf(
          "%s : Can't find data in configs[%d]->test_config[%d]\n",
          "parse_all_MES_system_config_information",
          i,
          v114);
        snprintf(byte_61EE40, 0x100u, "Can't find data in configs[%d]->test_config[%d]", i, v114);
        sub_3CC5C(byte_61EE40, v157);
        goto LABEL_4;
      }
      v131 = 0;
      dword_61EF40 = sub_7B3A0(v129);
      v156 = v102;
      while ( v131 < dword_61EF40 )
      {
        v132 = (_DWORD *)sub_7B3B4(v130, v131);
        v133 = v132;
        if ( !v132 || *v132 )
        {
          sub_1E938(v157, 0x30u);
          printf("%s ", v157);
          printf(
            "%s : Can't find data[%d] in configs[%d]->test_config[%d], error\n",
            "parse_all_MES_system_config_information",
            v131,
            i,
            v114);
          v1 = 0;
          snprintf(byte_61EF44, 0x100u, "Can't find data[%d] in configs[%d]->test_config[%d], error", v131, i, v114);
          sub_3CC5C(byte_61EF44, v157);
          goto LABEL_4;
        }
        v134 = (char *)calloc(1u, 0x74u);
        v135 = v134;
        if ( !v134 )
        {
          v1 = 0;
          sub_1E938(v157, 0x30u);
          printf("%s ", v157);
          printf(
            "%s : malloc for configs[%d]->test_loop[%d]->data[%d] fail\n",
            "parse_all_MES_system_config_information",
            i,
            v114,
            v131);
          snprintf(byte_61F044, 0x100u, "malloc for configs[%d]->test_loop[%d]->data[%d] fail", i, v114, v131);
          sub_3CC5C(byte_61F044, v157);
          goto LABEL_4;
        }
        v136 = *((_DWORD *)v118 + 25);
        *((_DWORD *)v134 + 28) = 0;
        if ( v136 )
        {
          while ( *(_DWORD *)(v136 + 112) )
            v136 = *(_DWORD *)(v136 + 112);
          *(_DWORD *)(v136 + 112) = v134;
        }
        else
        {
          *((_DWORD *)v118 + 25) = v134;
        }
        v137 = sub_7B2D0(v133, "version");
        v138 = (const char *)sub_7B4A8(v137);
        strcpy(v135, v138);
        v139 = sub_7B2D0(v133, "pattern_id");
        *((_DWORD *)v135 + 6) = sub_7B604(v139);
        v140 = sub_7B2D0(v133, "asic_reg_id");
        *((_DWORD *)v135 + 7) = sub_7B604(v140);
        v141 = sub_7B2D0(v133, "test_method_id");
        *((_DWORD *)v135 + 8) = sub_7B604(v141);
        v142 = sub_7B2D0(v133, "voltage_accuracy");
        *((_DWORD *)v135 + 9) = sub_7B604(v142);
        v143 = sub_7B2D0(v133, "fan_speed");
        *((_DWORD *)v135 + 10) = sub_7B604(v143);
        v144 = sub_7B2D0(v133, "pre_open_core_voltage");
        *((_DWORD *)v135 + 27) = sub_7B604(v144);
        v145 = (_DWORD *)sub_7B2D0(v133, "test_loop_id");
        v146 = v145;
        if ( !v145 || *v145 != 1 )
        {
          sub_1E938(v157, 0x30u);
          printf("%s ", v157);
          printf(
            "%s : Can't find test_loop_id in configs[%d]->test_config[%d]->data[%d]\n",
            "parse_all_MES_system_config_information",
            i,
            v114,
            v131);
          v1 = 0;
          snprintf(
            byte_61F144,
            0x100u,
            "Can't find test_loop_id in configs[%d]->test_config[%d]->data[%d]",
            i,
            v114,
            v131);
          sub_3CC5C(byte_61F144, v157);
          goto LABEL_4;
        }
        v153 = sub_7B3A0(v145);
        if ( v153 > 0xF )
        {
          v1 = 0;
          sub_1E938(v157, 0x30u);
          printf("%s ", v157);
          printf(
            "%s : Test_loop_id_array_size is %d, bigger than %d\n",
            "parse_all_MES_system_config_information",
            v153,
            15);
          snprintf(byte_61F244, 0x100u, "Test_loop_id_array_size is %d, bigger than %d", v153, 15);
          sub_3CC5C(byte_61F244, v157);
          goto LABEL_4;
        }
        v147 = v135 + 40;
        v148 = 0;
        *((_DWORD *)v147 + 16) = v153;
        while ( v148 != v153 )
        {
          v149 = (_DWORD *)sub_7B3B4(v146, v148);
          if ( !v149 || *v149 != 3 )
          {
            sub_1E938(v157, 0x30u);
            printf("%s ", v157);
            v1 = 0;
            printf(
              "%s : Can't find test_loop_id[%d] in configs[%d]->test_config[%d]->data[%d], error\n",
              "parse_all_MES_system_config_information",
              v148,
              i,
              v114,
              v131);
            snprintf(
              byte_61F344,
              0x100u,
              "Can't find test_loop_id[%d] in configs[%d]->test_config[%d]->data[%d], error",
              v148,
              i,
              v114,
              v131);
            sub_3CC5C(byte_61F344, v157);
            goto LABEL_4;
          }
          ++v148;
          *((_DWORD *)v147 + 1) = sub_7B604(v149);
          v147 += 4;
        }
        ++v131;
      }
      v102 = v156;
      ++v114;
    }
  }
  v37 = (_DWORD *)sub_7B3B4(v35, v36);
  v38 = v37;
  if ( !v37 || *v37 )
  {
    sub_1E938(v157, 0x30u);
    v1 = 0;
    printf("%s ", v157);
    printf(
      "%s : Can't read out hw_info_array[%d] in configs[%d], error\n",
      "parse_all_MES_system_config_information",
      v36,
      i);
    snprintf(byte_61DA28, 0x100u, "Can't read out hw_info_array[%d] in configs[%d], error", v36, i);
    sub_3CC5C(byte_61DA28, v157);
  }
  else
  {
    v39 = calloc(1u, 0x84u);
    v1 = (int)v39;
    if ( v39 )
    {
      v40 = *((_DWORD *)v30 + 6);
      v39[32] = 0;
      if ( v40 )
      {
        while ( *(_DWORD *)(v40 + 128) )
          v40 = *(_DWORD *)(v40 + 128);
        *(_DWORD *)(v40 + 128) = v39;
      }
      else
      {
        *((_DWORD *)v30 + 6) = v39;
      }
      v41 = sub_7B2D0(v38, "id");
      *(_DWORD *)v1 = sub_7B604(v41);
      v42 = sub_7B2D0(v38, "board_name");
      v43 = (const char *)sub_7B4A8(v42);
      strcpy((char *)(v1 + 4), v43);
      v44 = sub_7B2D0(v38, "asic_type");
      v45 = (const char *)sub_7B4A8(v44);
      strcpy((char *)(v1 + 28), v45);
      v46 = sub_7B2D0(v38, "asic_num");
      *(_DWORD *)(v1 + 52) = sub_7B604(v46);
      v47 = sub_7B2D0(v38, "voltage_domain");
      *(_DWORD *)(v1 + 56) = sub_7B604(v47);
      v48 = sub_7B2D0(v38, "asic_num_per_voltage_domain");
      *(_DWORD *)(v1 + 60) = sub_7B604(v48);
      v49 = (_DWORD *)sub_7B2D0(v38, "power_version");
      v50 = v49;
      if ( v49 && *v49 == 1 )
      {
        v51 = v1 + 60;
        dword_61DD28 = sub_7B3A0(v49);
        for ( j = 0; ; ++j )
        {
          if ( j >= dword_61DD28 )
          {
            ++v36;
            goto LABEL_42;
          }
          v53 = (_DWORD *)sub_7B3B4(v50, j);
          if ( !v53 || *v53 != 3 )
            break;
          v54 = sub_7B604(v53);
          *(_DWORD *)(v51 + 4) = v54;
          v51 += 4;
          byte_6E3308[j] = v54;
        }
        sub_1E938(v157, 0x30u);
        v1 = 0;
        printf("%s ", v157);
        printf(
          "%s : Can't find power_version_array[%d] in configs[%d]->hw_info[%d], error\n",
          "parse_all_MES_system_config_information",
          j,
          i,
          v36);
        snprintf(
          byte_61DD2C,
          0x100u,
          "Can't find power_version_array[%d] in configs[%d]->hw_info[%d], error",
          j,
          i,
          v36);
        sub_3CC5C(byte_61DD2C, v157);
      }
      else
      {
        sub_1E938(v157, 0x30u);
        v1 = 0;
        printf("%s ", v157);
        printf(
          "%s : Can't find power_version in configs[%d]->hw_info[%d]\n",
          "parse_all_MES_system_config_information",
          i,
          v36);
        snprintf(byte_61DC28, 0x100u, "Can't find power_version in configs[%d]->hw_info[%d]", i, v36);
        sub_3CC5C(byte_61DC28, v157);
      }
    }
    else
    {
      sub_1E938(v157, 0x30u);
      printf("%s ", v157);
      printf("%s : malloc for configs[%d] in result fail\n", "parse_all_MES_system_config_information", i);
      snprintf(byte_61DB28, 0x100u, "malloc for configs[%d] in result fail", i);
      sub_3CC5C(byte_61DB28, v157);
    }
  }
LABEL_4:
  sub_1E938(v157, 0x30u);
  printf("%s ", v157);
  printf("%s : done\n", "parse_all_MES_system_config_information");
  strcpy((char *)&dword_61F444, "done");
  sub_3CC5C(&dword_61F444, v157);
  return v1;
}
