int __fastcall sub_37564(int a1, _BYTE *a2, const char *a3, _BYTE *a4)
{
  bool v8; // zf
  int v9; // r1
  size_t v11; // r0
  char *v12; // r3
  int v13; // r1
  size_t v14; // r7
  char v15; // r2
  int v16; // t1
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  char v23; // r4
  const char *v24; // [sp+18h] [bp-13Ch]
  const char *v25; // [sp+1Ch] [bp-138h]
  char v26[48]; // [sp+20h] [bp-134h] BYREF
  _DWORD s[65]; // [sp+50h] [bp-104h] BYREF

  memset(s, 0, 0x100u);
  if ( !a1 )
    return -1;
  v8 = a3 == 0;
  if ( a3 )
    v8 = a2 == 0;
  v9 = v8;
  if ( a4 ? v9 : v9 | 1 )
    return -1;
  if ( !byte_629764 )
    return -2;
  sub_1E938(v26, 0x30u);
  printf("%s ", v26);
  printf("%s : scan_code_data::%s\n", "parse_scan_data", &byte_629764);
  snprintf(byte_629864, 0x100u, "scan_code_data::%s", &byte_629764);
  sub_3CC5C(byte_629864, v26);
  memset(s, 0, 0x100u);
  v11 = strlen(&byte_629764);
  v12 = &byte_629764;
  v13 = 0;
  v14 = 0;
  while ( v14++ < v11 )
  {
    v16 = (unsigned __int8)*v12++;
    v15 = v16;
    if ( (unsigned int)(v16 - 32) <= 0x5E )
      *((_BYTE *)s + v13++) = v15;
  }
  sub_1E938(v26, 0x30u);
  printf("%s ", v26);
  printf("%s : after check, scan_code_data::%s\n", "parse_scan_data", (const char *)s);
  snprintf(byte_629964, 0x100u, "after check, scan_code_data::%s", (const char *)s);
  sub_3CC5C(byte_629964, v26);
  if ( strchr((const char *)s, 32) )
  {
    v24 = a3 + 120;
    v25 = a3 + 136;
    *a4 = 1;
    _isoc99_sscanf(s, "%s %s %s %s %s %s %s %s", a3, a3 + 32, a3 + 48, a3 + 64, a3 + 80, a3 + 104, a3 + 120, a3 + 136);
    if ( sub_26A30((int)&dword_6E3318) )
    {
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : recv qrcode data::\n", "parse_scan_data");
      strcpy(byte_629B64, "recv qrcode data::");
      sub_3CC5C(byte_629B64, v26);
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : factory_job::[%s].\n", "parse_scan_data", a3);
      snprintf(byte_629C64, 0x100u, "factory_job::[%s].", a3);
      sub_3CC5C(byte_629C64, v26);
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : chip_die::[%s].\n", "parse_scan_data", a3 + 32);
      snprintf(&byte_629C64[256], 0x100u, "chip_die::[%s].", a3 + 32);
      sub_3CC5C(&byte_629C64[256], v26);
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : chip_marking::[%s].\n", "parse_scan_data", a3 + 48);
      snprintf(&byte_629C64[512], 0x100u, "chip_marking::[%s].", a3 + 48);
      sub_3CC5C(&byte_629C64[512], v26);
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : chip_bin::[%s].\n", "parse_scan_data", a3 + 64);
      snprintf(&byte_629C64[768], 0x100u, "chip_bin::[%s].", a3 + 64);
      sub_3CC5C(&byte_629C64[768], v26);
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : chip_ftversion::[%s].\n", "parse_scan_data", a3 + 80);
      snprintf(&byte_629C64[1024], 0x100u, "chip_ftversion::[%s].", a3 + 80);
      sub_3CC5C(&byte_629C64[1024], v26);
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : temp_sensor_type::[%s].\n", "parse_scan_data", a3 + 104);
      snprintf(&byte_629C64[1280], 0x100u, "temp_sensor_type::[%s].", a3 + 104);
      sub_3CC5C(&byte_629C64[1280], v26);
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : hashboard_ctrl_code::[%s].\n", "parse_scan_data", v24);
      snprintf(&byte_629C64[1536], 0x100u, "hashboard_ctrl_code::[%s].", v24);
      sub_3CC5C(&byte_629C64[1536], v26);
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : hashboard_index::[%s].\n", "parse_scan_data", v25);
      snprintf(&byte_629C64[1792], 0x100u, "hashboard_index::[%s].", v25);
      sub_3CC5C(&byte_629C64[1792], v26);
      return 0;
    }
    else
    {
      sub_6FBF4(0);
      sub_1F650(1, "sensor type");
      sub_1F650(2, "error");
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : sensor type error\n", "parse_scan_data");
      strcpy(byte_629A64, "sensor type error");
      sub_3CC5C(byte_629A64, v26);
      return -1;
    }
  }
  else if ( strlen((const char *)s) == 17 )
  {
    *a2 = 1;
    memset((void *)(a1 + 1), 0, 0x20u);
    v19 = s[0];
    v20 = s[1];
    v21 = s[2];
    v22 = s[3];
    *(_BYTE *)a1 = 17;
    v23 = s[4];
    *(_DWORD *)(a1 + 1) = v19;
    *(_DWORD *)(a1 + 13) = v22;
    *(_DWORD *)(a1 + 9) = v21;
    *(_DWORD *)(a1 + 5) = v20;
    *(_BYTE *)(a1 + 17) = v23;
    sub_1E938(v26, 0x30u);
    printf("%s ", v26);
    printf("%s : recv sn data::[%s]\n", "parse_scan_data", (const char *)(a1 + 1));
    snprintf(byte_62A464, 0x100u, "recv sn data::[%s]", (const char *)(a1 + 1));
    sub_3CC5C(byte_62A464, v26);
    return 0;
  }
  else
  {
    sub_1E938(v26, 0x30u);
    printf("%s ", v26);
    printf("%s : bad data format!!!drop it.\n", "parse_scan_data");
    strcpy(byte_62A564, "bad data format!!!drop it.");
    sub_3CC5C(byte_62A564, v26);
    return -3;
  }
}
