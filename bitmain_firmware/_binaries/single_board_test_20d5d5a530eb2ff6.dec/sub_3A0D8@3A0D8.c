int __fastcall sub_3A0D8(int a1)
{
  unsigned __int8 *v1; // r5
  int v2; // r2
  int v3; // r1
  int v4; // r3
  unsigned __int8 v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r1
  unsigned __int8 v9; // r3
  const char *v10; // r8
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int v15; // r1
  int v16; // r4
  unsigned __int8 *v17; // r3
  bool v18; // nf
  unsigned int v19; // r3
  unsigned int v20; // r3
  char v22[48]; // [sp+0h] [bp-B0h] BYREF
  _DWORD s[32]; // [sp+30h] [bp-80h] BYREF

  v1 = *(unsigned __int8 **)(a1 + 300);
  sub_1E938((char *)s, 0x30u);
  printf("%s ", (const char *)s);
  printf("%s : board_info_version = %d\n", "edf_v5_dump_data", *v1);
  snprintf(&byte_62DC68[4352], 0x100u, "board_info_version = %d", *v1);
  sub_3CC5C(&byte_62DC68[4352], s);
  sub_1E938((char *)s, 0x30u);
  printf("%s ", (const char *)s);
  printf("%s : algorithm_and_key_version = 0x%x\n", "edf_v5_dump_data", v1[1]);
  snprintf(&byte_62DC68[4608], 0x100u, "algorithm_and_key_version = 0x%x", v1[1]);
  sub_3CC5C(&byte_62DC68[4608], s);
  memset(s, 0, sizeof(s));
  v2 = *(_DWORD *)(v1 + 10);
  v3 = *(_DWORD *)(v1 + 6);
  v4 = *(_DWORD *)(v1 + 14);
  s[0] = *(_DWORD *)(v1 + 2);
  s[1] = v3;
  s[2] = v2;
  s[3] = v4;
  LOWORD(s[4]) = *((_WORD *)v1 + 9);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : board_sn = %s\n", "edf_v5_dump_data", (const char *)s);
  snprintf(&byte_62DC68[4864], 0x100u, "board_sn = %s", (const char *)s);
  sub_3CC5C(&byte_62DC68[4864], v22);
  memset(s, 0, sizeof(s));
  v5 = v1[22];
  LOWORD(s[0]) = *((_WORD *)v1 + 10);
  BYTE2(s[0]) = v5;
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : chip_die = %s\n", "edf_v5_dump_data", (const char *)s);
  snprintf(&byte_62DC68[5120], 0x100u, "chip_die = %s", (const char *)s);
  sub_3CC5C(&byte_62DC68[5120], v22);
  memset(s, 0, sizeof(s));
  v6 = *(_DWORD *)(v1 + 27);
  v7 = *(_DWORD *)(v1 + 31);
  s[0] = *(_DWORD *)(v1 + 23);
  s[1] = v6;
  s[2] = v7;
  LOWORD(s[3]) = *(_WORD *)(v1 + 35);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : chip_marking = %s\n", "edf_v5_dump_data", (const char *)s);
  snprintf(&byte_62DC68[5376], 0x100u, "chip_marking = %s", (const char *)s);
  sub_3CC5C(&byte_62DC68[5376], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : chip_bin = %d\n", "edf_v5_dump_data", v1[37]);
  snprintf(&byte_62DC68[5632], 0x100u, "chip_bin = %d", v1[37]);
  sub_3CC5C(&byte_62DC68[5632], v22);
  memset(s, 0, sizeof(s));
  v8 = *(_DWORD *)(v1 + 42);
  s[0] = *(_DWORD *)(v1 + 38);
  s[1] = v8;
  LOWORD(s[2]) = *((_WORD *)v1 + 23);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : ft_version = %s\n", "edf_v5_dump_data", (const char *)s);
  snprintf(&byte_62DC68[5888], 0x100u, "ft_version = %s", (const char *)s);
  sub_3CC5C(&byte_62DC68[5888], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pcb_version = 0x%x\n", "edf_v5_dump_data", *((unsigned __int16 *)v1 + 24));
  snprintf(&byte_62DC68[6144], 0x100u, "pcb_version = 0x%x", *((unsigned __int16 *)v1 + 24));
  sub_3CC5C(&byte_62DC68[6144], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : bom_version = 0x%x\n", "edf_v5_dump_data", *((unsigned __int16 *)v1 + 25));
  snprintf(&byte_62DC68[6400], 0x100u, "bom_version = 0x%x", *((unsigned __int16 *)v1 + 25));
  sub_3CC5C(&byte_62DC68[6400], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : asic_sensor_type = 0x%x\n", "edf_v5_dump_data", v1[52]);
  snprintf(&byte_62DC68[6656], 0x100u, "asic_sensor_type = 0x%x", v1[52]);
  sub_3CC5C(&byte_62DC68[6656], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : asic_sensor_addr[0] = 0x%x\n", "edf_v5_dump_data", v1[53]);
  snprintf(&byte_62DC68[6912], 0x100u, "asic_sensor_addr[0] = 0x%x", v1[53]);
  sub_3CC5C(&byte_62DC68[6912], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : asic_sensor_addr[1] = 0x%x\n", "edf_v5_dump_data", v1[54]);
  snprintf(&byte_62DC68[7168], 0x100u, "asic_sensor_addr[1] = 0x%x", v1[54]);
  sub_3CC5C(&byte_62DC68[7168], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : asic_sensor_addr[2] = 0x%x\n", "edf_v5_dump_data", v1[55]);
  snprintf(&byte_62DC68[7424], 0x100u, "asic_sensor_addr[2] = 0x%x", v1[55]);
  sub_3CC5C(&byte_62DC68[7424], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : asic_sensor_addr[3] = 0x%x\n", "edf_v5_dump_data", v1[56]);
  snprintf(&byte_62DC68[7680], 0x100u, "asic_sensor_addr[3] = 0x%x", v1[56]);
  sub_3CC5C(&byte_62DC68[7680], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pic_sensor_type = 0x%x\n", "edf_v5_dump_data", v1[57]);
  snprintf(&byte_62DC68[7936], 0x100u, "pic_sensor_type = 0x%x", v1[57]);
  sub_3CC5C(&byte_62DC68[7936], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pic_sensor_addr = 0x%x\n", "edf_v5_dump_data", v1[58]);
  snprintf(&byte_62DC68[0x2000], 0x100u, "pic_sensor_addr = 0x%x", v1[58]);
  sub_3CC5C(&byte_62DC68[0x2000], v22);
  memset(s, 0, sizeof(s));
  v9 = v1[61];
  LOWORD(s[0]) = *(_WORD *)(v1 + 59);
  BYTE2(s[0]) = v9;
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : chip_tech = %s\n", "edf_v5_dump_data", (const char *)s);
  snprintf(&byte_62DC68[8448], 0x100u, "chip_tech = %s", (const char *)s);
  sub_3CC5C(&byte_62DC68[8448], v22);
  memset(s, 0, sizeof(s));
  v10 = (const char *)(v1 + 62);
  v11 = *(_DWORD *)(v1 + 66);
  s[0] = *(_DWORD *)(v1 + 62);
  s[1] = v11;
  LOBYTE(s[2]) = v1[70];
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : board_name = %s\n", "edf_v5_dump_data", (const char *)s);
  snprintf(&byte_62DC68[8704], 0x100u, "board_name = %s", (const char *)s);
  sub_3CC5C(&byte_62DC68[8704], v22);
  memset(s, 0, sizeof(s));
  v12 = *(_DWORD *)(v1 + 83);
  v13 = *(_DWORD *)(v1 + 79);
  v14 = *(_DWORD *)(v1 + 75);
  s[0] = *(_DWORD *)(v1 + 71);
  s[1] = v14;
  s[2] = v13;
  s[3] = v12;
  v15 = *(_DWORD *)(v1 + 91);
  s[4] = *(_DWORD *)(v1 + 87);
  s[5] = v15;
  v16 = 0;
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : factory_job = %s\n", "edf_v5_dump_data", (const char *)s);
  snprintf(&byte_62DC68[8960], 0x100u, "factory_job = %s", (const char *)s);
  sub_3CC5C(&byte_62DC68[8960], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : board_info_crc = 0x%x\n", "edf_v5_dump_data", v1[97]);
  snprintf(&byte_62DC68[9216], 0x100u, "board_info_crc = 0x%x", v1[97]);
  sub_3CC5C(&byte_62DC68[9216], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : voltage = %d\n", "edf_v5_dump_data", *((unsigned __int16 *)v1 + 49));
  snprintf(&byte_62DC68[9472], 0x100u, "voltage = %d", *((unsigned __int16 *)v1 + 49));
  sub_3CC5C(&byte_62DC68[9472], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : frequency = %d\n", "edf_v5_dump_data", *((unsigned __int16 *)v1 + 50));
  snprintf(&byte_62DC68[9728], 0x100u, "frequency = %d", *((unsigned __int16 *)v1 + 50));
  sub_3CC5C(&byte_62DC68[9728], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : nonce_rate = %d\n", "edf_v5_dump_data", *((unsigned __int16 *)v1 + 51));
  snprintf(&byte_62DC68[9984], 0x100u, "nonce_rate = %d", *((unsigned __int16 *)v1 + 51));
  sub_3CC5C(&byte_62DC68[9984], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pcb_temp_in = %d\n", "edf_v5_dump_data", (char)v1[104]);
  snprintf(&byte_62DC68[10240], 0x100u, "pcb_temp_in = %d", (char)v1[104]);
  sub_3CC5C(&byte_62DC68[10240], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pcb_temp_out = %d\n", "edf_v5_dump_data", (char)v1[105]);
  snprintf(&byte_62DC68[10496], 0x100u, "pcb_temp_out = %d", (char)v1[105]);
  sub_3CC5C(&byte_62DC68[10496], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : test_version = %d\n", "edf_v5_dump_data", v1[106]);
  snprintf(&byte_62DC68[10752], 0x100u, "test_version = %d", v1[106]);
  sub_3CC5C(&byte_62DC68[10752], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : test_standard = %d\n", "edf_v5_dump_data", v1[107]);
  snprintf(&byte_62DC68[11008], 0x100u, "test_standard = %d", v1[107]);
  sub_3CC5C(&byte_62DC68[11008], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : param_info_crc = 0x%x\n", "edf_v5_dump_data", v1[113]);
  snprintf(&byte_62DC68[11264], 0x100u, "param_info_crc = 0x%x", v1[113]);
  sub_3CC5C(&byte_62DC68[11264], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pt1_result = %d\n", "edf_v5_dump_data", v1[95]);
  snprintf(&byte_62DC68[11520], 0x100u, "pt1_result = %d", v1[95]);
  sub_3CC5C(&byte_62DC68[11520], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pt1_count = %d\n", "edf_v5_dump_data", v1[96]);
  snprintf(&byte_62DC68[11776], 0x100u, "pt1_count = %d", v1[96]);
  sub_3CC5C(&byte_62DC68[11776], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pt2_result = %d\n", "edf_v5_dump_data", v1[108]);
  snprintf(&byte_62DC68[12032], 0x100u, "pt2_result = %d", v1[108]);
  sub_3CC5C(&byte_62DC68[12032], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pt2_count = %d\n", "edf_v5_dump_data", v1[109]);
  snprintf(&byte_62DC68[12288], 0x100u, "pt2_count = %d", v1[109]);
  sub_3CC5C(&byte_62DC68[12288], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : sweep_hashrate = %d\n", "edf_v5_dump_data", *((unsigned __int16 *)v1 + 57));
  snprintf(&byte_62DC68[12544], 0x100u, "sweep_hashrate = %d", *((unsigned __int16 *)v1 + 57));
  sub_3CC5C(&byte_62DC68[12544], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : sweep_freq_base = %d\n", "edf_v5_dump_data", *((unsigned __int16 *)v1 + 58));
  snprintf(&byte_62DC68[12800], 0x100u, "sweep_freq_base = %d", *((unsigned __int16 *)v1 + 58));
  sub_3CC5C(&byte_62DC68[12800], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : sweep_freq_step = %d\n", "edf_v5_dump_data", v1[118]);
  snprintf(&byte_62DC68[13056], 0x100u, "sweep_freq_step = %d", v1[118]);
  sub_3CC5C(&byte_62DC68[13056], v22);
  memset(s, 0, sizeof(s));
  memcpy(s, v1 + 119, sizeof(s));
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : asic freq:\n", "edf_v5_dump_data");
  strcpy(&byte_62DC68[13312], "asic freq:");
  sub_3CC5C(&byte_62DC68[13312], v22);
  while ( 1 )
  {
    v17 = &v1[v16 >> 1];
    v18 = (v16++ & 1) != 0;
    v19 = v17[119];
    v20 = v18 ? v19 >> 4 : v19 & 0xF;
    printf("%d ", *((unsigned __int16 *)v1 + 58) + v1[118] * v20);
    if ( v16 == 128 )
      break;
    if ( v16 == 7 * (v16 / 7) )
      putchar(10);
  }
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : sweep_result = %d\n", "edf_v5_dump_data", v1[247]);
  snprintf(&byte_62DC68[13568], 0x100u, "sweep_result = %d", v1[247]);
  sub_3CC5C(&byte_62DC68[13568], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : normal_level = %d\n", "edf_v5_dump_data", v1[248]);
  snprintf(&byte_62DC68[13824], 0x100u, "normal_level = %d", v1[248]);
  sub_3CC5C(&byte_62DC68[13824], v22);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : board_name:%s\n", "edf_v5_dump_data", v10);
  snprintf(&byte_62DC68[14080], 0x100u, "board_name:%s", v10);
  return sub_3CC5C(&byte_62DC68[14080], v22);
}
