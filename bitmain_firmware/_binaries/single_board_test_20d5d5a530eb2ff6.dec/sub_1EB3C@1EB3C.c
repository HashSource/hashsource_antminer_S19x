int __fastcall sub_1EB3C(int a1)
{
  const char *v2; // r7
  char *v3; // r6
  double *v4; // r9
  const char *v5; // r3
  const char *v6; // r0
  const char *v7; // r3
  const char *v8; // r0
  const char *v9; // r3
  const char *v10; // r0
  const char *v11; // r3
  const char *v12; // r0
  const char *v13; // r3
  const char *v14; // r0
  const char *v15; // r3
  const char *v16; // r0
  const char *v17; // r3
  const char *v18; // r0
  const char *v19; // r3
  int v20; // r6
  char *v21; // r11
  _BYTE *v22; // r7
  const char *v24; // lr
  const char *v25; // r7
  int v26; // r5
  char *v27; // r11
  _BYTE *v28; // r6
  const char *v30; // lr
  const char *v31; // r6
  int v32; // r5
  char *v33; // r6
  char *v34; // r9
  int v35; // t1
  int v36; // r5
  char *v37; // r8
  char *v38; // r10
  int v39; // t1
  int v41; // [sp+0h] [bp-44h]
  int v42; // [sp+0h] [bp-44h]
  int v43; // [sp+0h] [bp-44h]
  char v44[52]; // [sp+10h] [bp-34h] BYREF

  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  v2 = "true";
  v3 = &byte_2333A8[(_DWORD)&loc_40A50 * a1];
  v4 = (double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1);
  if ( v3[1032] )
    v5 = "true";
  else
    v5 = "false";
  printf("%s : gHistory_Result[%d].asic_ok: %s\n", "print_history_result", a1, v5);
  if ( v3[1032] )
    v6 = "true";
  else
    v6 = "false";
  snprintf(byte_5FD260, 0x100u, "gHistory_Result[%d].asic_ok: %s", a1, v6);
  sub_3CC5C(byte_5FD260, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  if ( v3[1033] )
    v7 = "true";
  else
    v7 = "false";
  printf("%s : gHistory_Result[%d].nonce_rate_ok: %s\n", "print_history_result", a1, v7);
  if ( v3[1033] )
    v8 = "true";
  else
    v8 = "false";
  snprintf(byte_5FD360, 0x100u, "gHistory_Result[%d].nonce_rate_ok: %s", a1, v8);
  sub_3CC5C(byte_5FD360, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  if ( v3[1034] )
    v9 = "true";
  else
    v9 = "false";
  printf("%s : gHistory_Result[%d].eeprom_ok: %s\n", "print_history_result", a1, v9);
  if ( v3[1034] )
    v10 = "true";
  else
    v10 = "false";
  snprintf(byte_5FD460, 0x100u, "gHistory_Result[%d].eeprom_ok: %s", a1, v10);
  sub_3CC5C(byte_5FD460, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  if ( v3[1035] )
    v11 = "true";
  else
    v11 = "false";
  printf("%s : gHistory_Result[%d].pic_sensor_all_OK: %s\n", "print_history_result", a1, v11);
  if ( v3[1035] )
    v12 = "true";
  else
    v12 = "false";
  snprintf(byte_5FD560, 0x100u, "gHistory_Result[%d].pic_sensor_all_OK: %s", a1, v12);
  sub_3CC5C(byte_5FD560, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  if ( v3[1036] )
    v13 = "true";
  else
    v13 = "false";
  printf("%s : gHistory_Result[%d].asic_sensor_all_OK: %s\n", "print_history_result", a1, v13);
  if ( v3[1036] )
    v14 = "true";
  else
    v14 = "false";
  snprintf(byte_5FD660, 0x100u, "gHistory_Result[%d].asic_sensor_all_OK: %s", a1, v14);
  sub_3CC5C(byte_5FD660, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  if ( v3[1037] )
    v15 = "true";
  else
    v15 = "false";
  printf("%s : gHistory_Result[%d].ctrlborad_sensor_all_OK: %s\n", "print_history_result", a1, v15);
  if ( v3[1037] )
    v16 = "true";
  else
    v16 = "false";
  snprintf(byte_5FD760, 0x100u, "gHistory_Result[%d].ctrlborad_sensor_all_OK: %s", a1, v16);
  sub_3CC5C(byte_5FD760, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  if ( v3[1038] )
    v17 = "true";
  else
    v17 = "false";
  printf("%s : gHistory_Result[%d].apw_power_ok: %s\n", "print_history_result", a1, v17);
  if ( v3[1038] )
    v18 = "true";
  else
    v18 = "false";
  snprintf(byte_5FD860, 0x100u, "gHistory_Result[%d].apw_power_ok: %s", a1, v18);
  sub_3CC5C(byte_5FD860, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  if ( v3[1039] )
    v19 = "true";
  else
    v19 = "false";
  printf("%s : gHistory_Result[%d].pic_ok: %s\n", "print_history_result", a1, v19);
  if ( !v3[1039] )
    v2 = "false";
  snprintf(byte_5FD960, 0x100u, "gHistory_Result[%d].pic_ok: %s", a1, v2);
  sub_3CC5C(byte_5FD960, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  printf("%s : gHistory_Result[%d].nonce_rate: %f\n", "print_history_result", a1, v4[2]);
  snprintf(byte_5FDA60, 0x100u, "gHistory_Result[%d].nonce_rate: %f", a1, v4[2]);
  sub_3CC5C(byte_5FDA60, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  printf("%s : gHistory_Result[%d].level: %d\n", "print_history_result", a1, *((_DWORD *)v3 + 264));
  snprintf(byte_5FDB60, 0x100u, "gHistory_Result[%d].level: %d", a1, *((_DWORD *)v3 + 264));
  sub_3CC5C(byte_5FDB60, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  printf("%s : gHistory_Result[%d].voltage: %d\n", "print_history_result", a1, *((_DWORD *)v3 + 265));
  snprintf(byte_5FDC60, 0x100u, "gHistory_Result[%d].voltage: %d", a1, *((_DWORD *)v3 + 265));
  sub_3CC5C(byte_5FDC60, v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  printf("%s : gHistory_Result[%d].pre_open_core_voltage: %d\n", "print_history_result", a1, *((_DWORD *)v3 + 266));
  snprintf(&byte_5FDC60[256], 0x100u, "gHistory_Result[%d].pre_open_core_voltage: %d", a1, *((_DWORD *)v3 + 266));
  sub_3CC5C(&byte_5FDC60[256], v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  printf("%s : gHistory_Result[%d].frequence: %d\n", "print_history_result", a1, *((_DWORD *)v3 + 267));
  snprintf(&byte_5FDC60[512], 0x100u, "gHistory_Result[%d].frequence: %d", a1, *((_DWORD *)v3 + 267));
  sub_3CC5C(&byte_5FDC60[512], v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  printf("%s : gHistory_Result[%d].valid_nonce_num: %d\n", "print_history_result", a1, *((_DWORD *)v3 + 268));
  snprintf(&byte_5FDC60[768], 0x100u, "gHistory_Result[%d].valid_nonce_num: %d", a1, *((_DWORD *)v3 + 268));
  sub_3CC5C(&byte_5FDC60[768], v44);
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  printf("%s : gHistory_Result[%d].repeat_nonce_number: %d\n", "print_history_result", a1, *((_DWORD *)v3 + 269));
  v41 = *((_DWORD *)v3 + 269);
  v20 = 0;
  snprintf(&byte_5FDC60[1024], 0x100u, "gHistory_Result[%d].repeat_nonce_number: %d", a1, v41);
  sub_3CC5C(&byte_5FDC60[1024], v44);
  v21 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264752;
  do
  {
    sub_1E938(v44, 0x30u);
    v22 = v21;
    printf("%s ", v44);
    if ( *v21++ )
      v24 = "true";
    else
      v24 = "false";
    printf("%s : gHistory_Result[%d].pic_sensor_OK[%d]: %s\n", "print_history_result", a1, v20, v24);
    v42 = v20;
    if ( *v22 )
      v25 = "true";
    else
      v25 = "false";
    ++v20;
    snprintf(byte_5FE160, 0x100u, "gHistory_Result[%d].pic_sensor_OK[%d]: %s", a1, v42, v25);
    sub_3CC5C(byte_5FE160, v44);
  }
  while ( v20 != 4 );
  v26 = 0;
  v27 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264760;
  do
  {
    sub_1E938(v44, 0x30u);
    v28 = v27;
    printf("%s ", v44);
    if ( *v27++ )
      v30 = "true";
    else
      v30 = "false";
    printf("%s : gHistory_Result[%d].ctrlboard_sensor_OK[%d]: %s\n", "print_history_result", a1, v26, v30);
    v43 = v26;
    if ( *v28 )
      v31 = "true";
    else
      v31 = "false";
    ++v26;
    snprintf(byte_5FE260, 0x100u, "gHistory_Result[%d].ctrlboard_sensor_OK[%d]: %s", a1, v43, v31);
    sub_3CC5C(byte_5FE260, v44);
  }
  while ( v26 != 2 );
  v32 = 0;
  v33 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264770;
  do
  {
    sub_1E938(v44, 0x30u);
    printf("%s ", v44);
    v34 = v33;
    v35 = *v33++;
    printf("%s : gHistory_Result[%d].sensor_local_temperature_from_pic[%d]: %d\n", "print_history_result", a1, v32, v35);
    snprintf(byte_5FE360, 0x100u, "gHistory_Result[%d].sensor_local_temperature_from_pic[%d]: %d", a1, v32++, *v34);
    sub_3CC5C(byte_5FE360, v44);
  }
  while ( v32 != 4 );
  v36 = 0;
  v37 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264774;
  do
  {
    sub_1E938(v44, 0x30u);
    printf("%s ", v44);
    v38 = v37;
    v39 = *v37++;
    printf(
      "%s : gHistory_Result[%d].sensor_local_temperature_from_ctrlboard[%d]: %d\n",
      "print_history_result",
      a1,
      v36,
      v39);
    snprintf(
      byte_5FE460,
      0x100u,
      "gHistory_Result[%d].sensor_local_temperature_from_ctrlboard[%d]: %d",
      a1,
      v36++,
      *v38);
    sub_3CC5C(byte_5FE460, v44);
  }
  while ( v36 != 2 );
  sub_1E938(v44, 0x30u);
  printf("%s ", v44);
  printf(
    "%s : gHistory_Result[%d].test_standard: %d\n",
    "print_history_result",
    a1,
    (unsigned __int8)byte_2333A8[(_DWORD)&loc_40A50 * a1 + 265808]);
  snprintf(
    byte_5FE560,
    0x100u,
    "gHistory_Result[%d].test_standard: %d",
    a1,
    (unsigned __int8)byte_2333A8[(_DWORD)&loc_40A50 * a1 + 265808]);
  return sub_3CC5C(byte_5FE560, v44);
}
