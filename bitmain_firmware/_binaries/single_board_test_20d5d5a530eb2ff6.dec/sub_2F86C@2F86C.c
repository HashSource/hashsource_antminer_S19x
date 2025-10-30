int __fastcall sub_2F86C(int a1)
{
  int v2; // r0
  unsigned int v3; // r7
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  unsigned int *v7; // r3
  unsigned int v8; // r7
  _DWORD *v9; // r0
  const char *v10; // r5
  _DWORD *v11; // r0
  _DWORD *v12; // r5
  unsigned int *v13; // r3
  unsigned int v14; // r7
  _DWORD *v15; // r0
  const char *v16; // r5
  _DWORD *v17; // r0
  const char *v18; // r5
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r8
  _DWORD *v26; // r0
  _DWORD *v27; // r5
  int v28; // r0
  int v29; // r0
  const char *v30; // r7
  _DWORD *v31; // r0
  _DWORD *v32; // r8
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r9
  unsigned __int8 v39; // r0
  int v40; // r1
  int v41; // r0
  int v42; // r0
  const char *v43; // r5
  int v44; // r0
  int v45; // r0
  const char *v46; // r7
  unsigned int *v47; // r3
  unsigned int v48; // r2
  unsigned int v49; // r2
  char s[12]; // [sp+8h] [bp-138h] BYREF
  char v51[48]; // [sp+14h] [bp-12Ch] BYREF
  char v52[252]; // [sp+44h] [bp-FCh] BYREF

  memset(s, 0, 10);
  memset((void *)" ", 0, 0xC8u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v15 = (_DWORD *)sub_7ABE0("/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini", 0, v52);
      v6 = v15;
      if ( !v15 || *v15 )
      {
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Can't read out %s file.\n",
          "prepare_MES_system_handshake_information",
          "/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini");
        snprintf(
          byte_61A110,
          0x100u,
          "Can't read out %s file.",
          "/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini");
        v2 = sub_3CC5C(byte_61A110, v51);
LABEL_10:
        if ( !v6 || v6[1] == -1 )
          goto LABEL_5;
        v7 = v6 + 1;
        __dmb(0xBu);
        do
        {
          v8 = __ldrex(v7);
          v3 = v8 - 1;
        }
        while ( __strex(v3, v7) );
        goto LABEL_14;
      }
      v18 = (const char *)sub_79414(v15, 0);
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf("%s : content: %s\n", "prepare_MES_system_handshake_information", v18);
      snprintf(byte_61A210, 0x100u, "content: %s", v18);
      sub_3CC5C(byte_61A210, v51);
      v19 = (_DWORD *)sub_7B2D0(v6, "params");
      if ( !v19 || *v19 )
      {
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Can't read out params in %s\n",
          "prepare_MES_system_handshake_information",
          "/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini");
        snprintf(
          byte_61A310,
          0x100u,
          "Can't read out params in %s",
          "/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini");
        v2 = sub_3CC5C(byte_61A310, v51);
        goto LABEL_23;
      }
      v22 = (_DWORD *)sub_7B2D0(v19, "config_ids");
      if ( !v22 || *v22 != 1 )
      {
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Can't read out config_ids in %s\n",
          "prepare_MES_system_handshake_information",
          "/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini");
        snprintf(
          byte_61A410,
          0x100u,
          "Can't read out config_ids in %s",
          "/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini");
        v2 = sub_3CC5C(byte_61A410, v51);
        goto LABEL_23;
      }
      v26 = (_DWORD *)sub_7B3B4(v22, 0);
      v27 = v26;
      if ( !v26 || *v26 )
      {
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Can't read out array_table in config_ids in %s\n",
          "prepare_MES_system_handshake_information",
          "/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini");
        snprintf(
          byte_61A510,
          0x100u,
          "Can't read out array_table in config_ids in %s",
          "/mnt/card/Config/MES_system/MES_system_get_particular_config_template.ini");
        v2 = sub_3CC5C(byte_61A510, v51);
        goto LABEL_23;
      }
      v33 = sub_7B2D0(v26, "miner_type");
      sub_7B548(v33, (char *)(dword_223680 + 16));
      v34 = sub_7B2D0(v27, "board_name");
      sub_7B548(v34, (char *)(dword_223680 + 32));
      v35 = sub_7B2D0(v27, "sn");
      sub_7B548(v35, src);
      memset(s, 48, 10);
      sub_1F6E4(dword_6E3390, 5, 2, (int)s);
      v36 = sub_7B2D0(v27, "chip_technology");
      sub_7B548(v36, s);
      v37 = sub_7B2D0(v27, "ft_version");
      sub_7B548(v37, haystack);
      v38 = sub_7B2D0(v27, "bin");
      v39 = sub_37DAC(&dword_6E3318);
      sub_7B61C(v38, v40, v39, 0);
      memset(s, 48, 10);
      sub_1F6E4(dword_6E3390, 0, 3, (int)s);
      v41 = sub_7B2D0(v27, "hardware_version");
      sub_7B548(v41, s);
      memset(s, 48, 10);
      sub_1F6E4(dword_6E3390, 3, 2, (int)s);
      v42 = sub_7B2D0(v27, "bom_version");
      sub_7B548(v42, s);
      v43 = (const char *)sub_79414(v6, 0);
      dword_61A00C = strlen(v43);
      memcpy((void *)" ", v43, dword_61A00C);
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf("%s : size: %d, content: %s\n", "prepare_MES_system_handshake_information", dword_61A00C, " ");
      snprintf(&byte_61A510[256], 0x100u, "size: %d, content: %s", dword_61A00C, " ");
      sub_3CC5C(&byte_61A510[256], v51);
    }
    else
    {
      if ( a1 != 2 )
      {
        sub_1E938(v52, 0x30u);
        printf("%s ", v52);
        printf(
          "%s : Do not support get information type %d from MES system\n",
          "prepare_MES_system_handshake_information",
          a1);
        snprintf(byte_61AD10, 0x100u, "Do not support get information type %d from MES system", a1);
        v2 = sub_3CC5C(byte_61AD10, v52);
LABEL_5:
        sub_6FBF4(v2);
        v3 = 0;
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "prepare MES");
        sub_1F650(2, "handshake infor");
        sub_1F650(3, "fail");
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf("%s : prepare MES system handshake information fail\n", "prepare_MES_system_handshake_information");
        strcpy(byte_61AE10, "prepare MES system handshake information fail");
        sub_3CC5C(byte_61AE10, v51);
        return v3;
      }
      v9 = (_DWORD *)sub_7ABE0("/mnt/card/Config/MES_system/MES_system_get_version_template.ini", 0, v52);
      v6 = v9;
      if ( !v9 || *v9 )
      {
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Can't read out %s file.\n",
          "prepare_MES_system_handshake_information",
          "/mnt/card/Config/MES_system/MES_system_get_version_template.ini");
        snprintf(
          byte_61A710,
          0x100u,
          "Can't read out %s file.",
          "/mnt/card/Config/MES_system/MES_system_get_version_template.ini");
        v2 = sub_3CC5C(byte_61A710, v51);
        goto LABEL_10;
      }
      v16 = (const char *)sub_79414(v9, 0);
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf("%s : content: %s\n", "prepare_MES_system_handshake_information", v16);
      snprintf(byte_61A810, 0x100u, "content: %s", v16);
      sub_3CC5C(byte_61A810, v51);
      v17 = (_DWORD *)sub_7B2D0(v6, "params");
      if ( !v17 || *v17 )
      {
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Can't read out params in %s\n",
          "prepare_MES_system_handshake_information",
          "/mnt/card/Config/MES_system/MES_system_get_version_template.ini");
        snprintf(
          byte_61A910,
          0x100u,
          "Can't read out params in %s",
          "/mnt/card/Config/MES_system/MES_system_get_version_template.ini");
        v2 = sub_3CC5C(byte_61A910, v51);
        goto LABEL_23;
      }
      v21 = (_DWORD *)sub_7B2D0(v17, "config_ids");
      if ( !v21 || *v21 != 1 )
      {
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Can't read out configIds in %s\n",
          "prepare_MES_system_handshake_information",
          "/mnt/card/Config/MES_system/MES_system_get_version_template.ini");
        snprintf(
          byte_61AA10,
          0x100u,
          "Can't read out configIds in %s",
          "/mnt/card/Config/MES_system/MES_system_get_version_template.ini");
        v2 = sub_3CC5C(byte_61AA10, v51);
        goto LABEL_23;
      }
      v24 = (_DWORD *)sub_7B3B4(v21, 0);
      v25 = v24;
      if ( !v24 || *v24 )
      {
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Can't read out array_table in configIds in %s\n",
          "prepare_MES_system_handshake_information",
          "/mnt/card/Config/MES_system/MES_system_get_version_template.ini");
        snprintf(
          byte_61AB10,
          0x100u,
          "Can't read out array_table in configIds in %s",
          "/mnt/card/Config/MES_system/MES_system_get_version_template.ini");
        v2 = sub_3CC5C(byte_61AB10, v51);
        goto LABEL_23;
      }
      v28 = sub_7B2D0(v24, "miner_type");
      sub_7B548(v28, (char *)(dword_223680 + 16));
      v29 = sub_7B2D0(v25, "board_name");
      sub_7B548(v29, (char *)(dword_223680 + 32));
      v30 = (const char *)sub_79414(v6, 0);
      dword_61A00C = strlen(v30);
      memcpy((void *)" ", v30, dword_61A00C);
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf("%s : size: %d, content: %s\n", "prepare_MES_system_handshake_information", dword_61A00C, " ");
      snprintf(&byte_61AB10[256], 0x100u, "size: %d, content: %s", dword_61A00C, " ");
      sub_3CC5C(&byte_61AB10[256], v51);
    }
LABEL_55:
    if ( v6[1] == -1 )
      return 1;
    v47 = v6 + 1;
    __dmb(0xBu);
    do
    {
      v48 = __ldrex(v47);
      v49 = v48 - 1;
    }
    while ( __strex(v49, v47) );
    v3 = 1;
    if ( v49 )
      return v3;
    goto LABEL_15;
  }
  v5 = (_DWORD *)sub_7ABE0("/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini", 0, v52);
  v6 = v5;
  if ( !v5 || *v5 )
  {
    sub_1E938(v51, 0x30u);
    printf("%s ", v51);
    printf(
      "%s : Can't read out %s file.\n",
      "prepare_MES_system_handshake_information",
      "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
    snprintf(
      byte_619A0C,
      0x100u,
      "Can't read out %s file.",
      "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
    v2 = sub_3CC5C(byte_619A0C, v51);
    goto LABEL_10;
  }
  v10 = (const char *)((int (*)(void))sub_79414)();
  sub_1E938(v51, 0x30u);
  printf("%s ", v51);
  printf("%s : content: %s\n", "prepare_MES_system_handshake_information", v10);
  snprintf(byte_619B0C, 0x100u, "content: %s", v10);
  sub_3CC5C(byte_619B0C, v51);
  v11 = (_DWORD *)sub_7B2D0(v6, "params");
  v12 = v11;
  if ( v11 && !*v11 )
  {
    v20 = (_DWORD *)sub_7B2D0(v11, "software_commit_id");
    if ( !v20 || *v20 != 2 )
    {
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf(
        "%s : Can't read out software_commit_id in %s\n",
        "prepare_MES_system_handshake_information",
        "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
      snprintf(
        byte_619D0C,
        0x100u,
        "Can't read out software_commit_id in %s",
        "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
      v2 = sub_3CC5C(byte_619D0C, v51);
      goto LABEL_23;
    }
    sub_7B548((int)v20, byte_6E32C0);
    v23 = (_DWORD *)sub_7B2D0(v12, "config_ids");
    if ( !v23 || *v23 != 1 )
    {
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf(
        "%s : Can't read out config_ids in %s\n",
        "prepare_MES_system_handshake_information",
        "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
      snprintf(
        byte_619E0C,
        0x100u,
        "Can't read out config_ids in %s",
        "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
      v2 = sub_3CC5C(byte_619E0C, v51);
      goto LABEL_23;
    }
    v31 = (_DWORD *)sub_7B3B4(v23, 0);
    v32 = v31;
    if ( !v31 || *v31 )
    {
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf(
        "%s : Can't read out array_table in config_ids in %s\n",
        "prepare_MES_system_handshake_information",
        "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
      snprintf(
        byte_619F0C,
        0x100u,
        "Can't read out array_table in config_ids in %s",
        "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
      v2 = sub_3CC5C(byte_619F0C, v51);
      goto LABEL_23;
    }
    v44 = sub_7B2D0(v31, "miner_type");
    sub_7B548(v44, (char *)(dword_223680 + 16));
    v45 = sub_7B2D0(v32, "board_name");
    sub_7B548(v45, (char *)(dword_223680 + 32));
    v46 = (const char *)sub_79414(v6, 0);
    dword_61A00C = strlen(v46);
    memcpy((void *)" ", v46, dword_61A00C);
    sub_1E938(v51, 0x30u);
    printf("%s ", v51);
    printf("%s : size: %d, content: %s\n", "prepare_MES_system_handshake_information", dword_61A00C, " ");
    snprintf(byte_61A010, 0x100u, "size: %d, content: %s", dword_61A00C, " ");
    sub_3CC5C(byte_61A010, v51);
    goto LABEL_55;
  }
  sub_1E938(v51, 0x30u);
  printf("%s ", v51);
  printf(
    "%s : Can't read out params in %s\n",
    "prepare_MES_system_handshake_information",
    "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
  snprintf(
    byte_619C0C,
    0x100u,
    "Can't read out params in %s",
    "/mnt/card/Config/MES_system/MES_system_get_all_config_template.ini");
  v2 = sub_3CC5C(byte_619C0C, v51);
LABEL_23:
  if ( v6[1] == -1 )
    goto LABEL_5;
  v13 = v6 + 1;
  __dmb(0xBu);
  do
  {
    v14 = __ldrex(v13);
    v3 = v14 - 1;
  }
  while ( __strex(v3, v13) );
LABEL_14:
  if ( v3 )
    goto LABEL_5;
LABEL_15:
  v2 = sub_7B714(v6);
  if ( !v3 )
    goto LABEL_5;
  return v3;
}
