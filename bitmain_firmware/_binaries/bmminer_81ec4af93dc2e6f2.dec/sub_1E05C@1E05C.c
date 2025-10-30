_DWORD *__fastcall sub_1E05C(_DWORD *result)
{
  unsigned __int8 *v1; // r5
  int v2; // r3
  int v3; // r1
  int v4; // r2
  unsigned __int8 v5; // r3
  int v6; // r1
  int v7; // r2
  __int16 v8; // r12
  int v9; // r1
  __int16 v10; // r2
  void *v11; // r6
  unsigned __int8 v12; // r3
  int v13; // r1
  unsigned __int8 v14; // r2
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  _DWORD v19[25]; // [sp+4h] [bp-864h] BYREF
  char s[2048]; // [sp+68h] [bp-800h] BYREF

  v1 = (unsigned __int8 *)result[75];
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "board_info_version = %d\n", *v1);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "algorithm_and_key_version = 0x%x\n", v1[1]);
  sub_3BE28(3, s, 0);
  memset(v19, 0, sizeof(v19));
  result = *(_DWORD **)(v1 + 2);
  v2 = *(_DWORD *)(v1 + 14);
  v3 = *(_DWORD *)(v1 + 6);
  v4 = *(_DWORD *)(v1 + 10);
  v19[0] = result;
  v19[1] = v3;
  v19[2] = v4;
  v19[3] = v2;
  LOWORD(v19[4]) = *((_WORD *)v1 + 9);
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "board_sn = %s\n", (const char *)v19);
  sub_3BE28(3, s, 0);
  result = memset(v19, 0, sizeof(v19));
  v5 = v1[22];
  LOWORD(v19[0]) = *((_WORD *)v1 + 10);
  BYTE2(v19[0]) = v5;
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "chip_die = %s\n", (const char *)v19);
  sub_3BE28(3, s, 0);
  memset(v19, 0, sizeof(v19));
  result = *(_DWORD **)(v1 + 23);
  v6 = *(_DWORD *)(v1 + 27);
  v7 = *(_DWORD *)(v1 + 31);
  v8 = *(_WORD *)(v1 + 35);
  v19[0] = result;
  v19[1] = v6;
  v19[2] = v7;
  LOWORD(v19[3]) = v8;
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "chip_marking = %s\n", (const char *)v19);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "chip_bin = %d\n", v1[37]);
  sub_3BE28(3, s, 0);
  memset(v19, 0, sizeof(v19));
  result = *(_DWORD **)(v1 + 38);
  v9 = *(_DWORD *)(v1 + 42);
  v10 = *((_WORD *)v1 + 23);
  v19[0] = result;
  v19[1] = v9;
  LOWORD(v19[2]) = v10;
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "ft_version = %s\n", (const char *)v19);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "pcb_version = 0x%x\n", *((unsigned __int16 *)v1 + 24));
    result = (_DWORD *)sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return result;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "bom_version = 0x%x\n", *((unsigned __int16 *)v1 + 25));
    sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_17;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "asic_sensor_type = 0x%x\n", v1[52]);
    result = (_DWORD *)sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return result;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "asic_sensor_addr[0] = 0x%x\n", v1[53]);
    result = (_DWORD *)sub_3BE28(3, s, 0);
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    goto LABEL_20;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "asic_sensor_addr[1] = 0x%x\n", v1[54]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "asic_sensor_addr[2] = 0x%x\n", v1[55]);
  sub_3BE28(3, s, 0);
LABEL_17:
  v11 = off_AFC24;
  if ( (unsigned int)off_AFC24 <= 3 )
    goto LABEL_22;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "asic_sensor_addr[3] = 0x%x\n", v1[56]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pic_sensor_type = 0x%x\n", v1[57]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
LABEL_20:
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pic_sensor_addr = 0x%x\n", v1[58]);
  sub_3BE28(3, s, 0);
  v11 = off_AFC24;
LABEL_22:
  result = memset(v19, 0, sizeof(v19));
  v12 = v1[61];
  LOWORD(v19[0]) = *(_WORD *)(v1 + 59);
  BYTE2(v19[0]) = v12;
  if ( (unsigned int)v11 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "chip_tech = %s\n", (const char *)v19);
  sub_3BE28(3, s, 0);
  memset(v19, 0, sizeof(v19));
  result = *(_DWORD **)(v1 + 62);
  v13 = *(_DWORD *)(v1 + 66);
  v14 = v1[70];
  v19[0] = result;
  v19[1] = v13;
  LOBYTE(v19[2]) = v14;
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "board_name = %s\n", (const char *)v19);
  sub_3BE28(3, s, 0);
  memset(v19, 0, sizeof(v19));
  v15 = *(_DWORD *)(v1 + 75);
  v16 = *(_DWORD *)(v1 + 79);
  v17 = *(_DWORD *)(v1 + 83);
  v19[0] = *(_DWORD *)(v1 + 71);
  v19[1] = v15;
  v19[2] = v16;
  v19[3] = v17;
  result = *(_DWORD **)(v1 + 87);
  v18 = *(_DWORD *)(v1 + 91);
  v19[4] = result;
  v19[5] = v18;
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "factory_job = %s\n", (const char *)v19);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "board_info_crc = 0x%x\n", v1[97]);
    result = (_DWORD *)sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return result;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "voltage = %d\n", *((unsigned __int16 *)v1 + 49));
    result = (_DWORD *)sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_33;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "frequency = %d\n", *((unsigned __int16 *)v1 + 50));
    result = (_DWORD *)sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return result;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "nonce_rate = %d\n", *((unsigned __int16 *)v1 + 51));
    result = (_DWORD *)sub_3BE28(3, s, 0);
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    goto LABEL_36;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pcb_temp_in = %d\n", (char)v1[104]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pcb_temp_out = %d\n", (char)v1[105]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
LABEL_33:
  if ( (unsigned int)off_AFC24 <= 3 )
    goto LABEL_39;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "test_version = %d\n", v1[106]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "test_standard = %d\n", v1[107]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
LABEL_36:
  if ( (unsigned int)off_AFC24 <= 3 )
    goto LABEL_42;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "param_info_crc = 0x%x\n", v1[113]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 <= 3 )
    return result;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pt1_result = %d\n", v1[95]);
  result = (_DWORD *)sub_3BE28(3, s, 0);
LABEL_39:
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "pt1_count = %d\n", v1[96]);
    result = (_DWORD *)sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x800u, "pt2_result = %d\n", v1[108]);
      result = (_DWORD *)sub_3BE28(3, s, 0);
LABEL_42:
      if ( (unsigned int)off_AFC24 > 3 )
      {
        memset(s, 0, sizeof(s));
        snprintf(s, 0x800u, "pt2_count = %d\n", v1[109]);
        return (_DWORD *)sub_3BE28(3, s, 0);
      }
    }
  }
  return result;
}
