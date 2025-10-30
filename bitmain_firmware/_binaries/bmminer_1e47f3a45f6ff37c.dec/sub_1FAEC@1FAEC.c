void *__fastcall sub_1FAEC(int a1)
{
  unsigned __int8 *v1; // r4
  unsigned __int8 v2; // r3
  int v3; // r1
  __int16 v4; // r2
  int v5; // r1
  unsigned __int8 v6; // r2
  _DWORD *v7; // r4
  int v8; // t1
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  void *result; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r2
  unsigned __int8 v17; // r3
  int v18; // r1
  int v19; // r2
  __int16 v20; // r12
  int v21; // r1
  __int16 v22; // r2
  unsigned int v23; // r7
  unsigned __int8 v24; // r3
  int v25; // r1
  unsigned __int8 v26; // r2
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  unsigned int v31; // r7
  int v32; // r1
  int v33; // r2
  __int16 v34; // r12
  int v35; // r1
  __int16 v36; // r2
  unsigned __int8 v37; // r3
  int v38; // r1
  unsigned __int8 v39; // r12
  _DWORD v40[32]; // [sp+0h] [bp-880h] BYREF
  char s[2048]; // [sp+80h] [bp-800h] BYREF

  v1 = *(unsigned __int8 **)(a1 + 300);
  if ( (unsigned int)dword_B308C <= 3
    || (memset(s, 0, sizeof(s)),
        snprintf(s, 0x800u, "board_info_version = %d\n", *v1),
        sub_3C5B8(3, s, 0),
        (unsigned int)dword_B308C <= 3) )
  {
    memset(v40, 0, sizeof(v40));
    v2 = v1[22];
    LOWORD(v40[0]) = *((_WORD *)v1 + 10);
    BYTE2(v40[0]) = v2;
    goto LABEL_3;
  }
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "algorithm_and_key_version = 0x%x\n", v1[1]);
  sub_3C5B8(3, s, 0);
  memset(v40, 0, sizeof(v40));
  v14 = *(_DWORD *)(v1 + 14);
  v15 = *(_DWORD *)(v1 + 6);
  v16 = *(_DWORD *)(v1 + 10);
  v40[0] = *(_DWORD *)(v1 + 2);
  v40[1] = v15;
  v40[2] = v16;
  v40[3] = v14;
  LOWORD(v40[4]) = *((_WORD *)v1 + 9);
  if ( (unsigned int)dword_B308C <= 3 )
  {
    memset(v40, 0, sizeof(v40));
    v32 = *(_DWORD *)(v1 + 27);
    v33 = *(_DWORD *)(v1 + 31);
    v34 = *(_WORD *)(v1 + 35);
    v40[0] = *(_DWORD *)(v1 + 23);
    v40[1] = v32;
    v40[2] = v33;
    LOWORD(v40[3]) = v34;
LABEL_54:
    memset(v40, 0, sizeof(v40));
    v35 = *(_DWORD *)(v1 + 42);
    v36 = *((_WORD *)v1 + 23);
    v40[0] = *(_DWORD *)(v1 + 38);
    v40[1] = v35;
    LOWORD(v40[2]) = v36;
    goto LABEL_55;
  }
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "board_sn = %s\n", (const char *)v40);
  sub_3C5B8(3, s, 0);
  memset(v40, 0, sizeof(v40));
  v17 = v1[22];
  LOWORD(v40[0]) = *((_WORD *)v1 + 10);
  BYTE2(v40[0]) = v17;
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_3:
    memset(v40, 0, sizeof(v40));
    v3 = *(_DWORD *)(v1 + 42);
    v4 = *((_WORD *)v1 + 23);
    v40[0] = *(_DWORD *)(v1 + 38);
    v40[1] = v3;
    LOWORD(v40[2]) = v4;
    goto LABEL_4;
  }
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "chip_die = %s\n", (const char *)v40);
  sub_3C5B8(3, s, 0);
  memset(v40, 0, sizeof(v40));
  v18 = *(_DWORD *)(v1 + 27);
  v19 = *(_DWORD *)(v1 + 31);
  v20 = *(_WORD *)(v1 + 35);
  v40[0] = *(_DWORD *)(v1 + 23);
  v40[1] = v18;
  v40[2] = v19;
  LOWORD(v40[3]) = v20;
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_54;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "chip_marking = %s\n", (const char *)v40);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_54;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "chip_bin = %d\n", v1[37]);
  sub_3C5B8(3, s, 0);
  memset(v40, 0, sizeof(v40));
  v21 = *(_DWORD *)(v1 + 42);
  v22 = *((_WORD *)v1 + 23);
  v40[0] = *(_DWORD *)(v1 + 38);
  v40[1] = v21;
  LOWORD(v40[2]) = v22;
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_4;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "ft_version = %s\n", (const char *)v40);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "pcb_version = 0x%x\n", *((unsigned __int16 *)v1 + 24));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_55;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "bom_version = 0x%x\n", *((unsigned __int16 *)v1 + 25));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_22;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "asic_sensor_type = 0x%x\n", v1[52]);
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_4;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "asic_sensor_addr[0] = 0x%x\n", v1[53]);
    sub_3C5B8(3, s, 0);
  }
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_25;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "asic_sensor_addr[1] = 0x%x\n", v1[54]);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_55:
    memset(v40, 0, sizeof(v40));
    v37 = v1[61];
    LOWORD(v40[0]) = *(_WORD *)(v1 + 59);
    BYTE2(v40[0]) = v37;
    goto LABEL_56;
  }
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "asic_sensor_addr[2] = 0x%x\n", v1[55]);
  sub_3C5B8(3, s, 0);
LABEL_22:
  v23 = dword_B308C;
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_27;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "asic_sensor_addr[3] = 0x%x\n", v1[56]);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_4:
    memset(v40, 0, sizeof(v40));
    v5 = *(_DWORD *)(v1 + 66);
    v6 = v1[70];
    v40[0] = *(_DWORD *)(v1 + 62);
    v40[1] = v5;
    LOBYTE(v40[2]) = v6;
LABEL_5:
    memset(v40, 0, sizeof(v40));
    v8 = *(_DWORD *)(v1 + 71);
    v7 = v1 + 71;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v40[0] = v8;
    v40[1] = v9;
    v40[2] = v10;
    v40[3] = v11;
    v12 = v7[5];
    v40[4] = v7[4];
    v40[5] = v12;
    return memset(v40, 0, sizeof(v40));
  }
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pic_sensor_type = 0x%x\n", v1[57]);
  sub_3C5B8(3, s, 0);
LABEL_25:
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_4;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pic_sensor_addr = 0x%x\n", v1[58]);
  sub_3C5B8(3, s, 0);
  v23 = dword_B308C;
LABEL_27:
  memset(v40, 0, sizeof(v40));
  v24 = v1[61];
  LOWORD(v40[0]) = *(_WORD *)(v1 + 59);
  BYTE2(v40[0]) = v24;
  if ( v23 <= 3 )
  {
LABEL_56:
    memset(v40, 0, sizeof(v40));
    v38 = *(_DWORD *)(v1 + 66);
    v39 = v1[70];
    v40[0] = *(_DWORD *)(v1 + 62);
    v40[1] = v38;
    LOBYTE(v40[2]) = v39;
    goto LABEL_5;
  }
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "chip_tech = %s\n", (const char *)v40);
  sub_3C5B8(3, s, 0);
  memset(v40, 0, sizeof(v40));
  v25 = *(_DWORD *)(v1 + 66);
  v26 = v1[70];
  v40[0] = *(_DWORD *)(v1 + 62);
  v40[1] = v25;
  LOBYTE(v40[2]) = v26;
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_5;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "board_name = %s\n", (const char *)v40);
  sub_3C5B8(3, s, 0);
  memset(v40, 0, sizeof(v40));
  v27 = *(_DWORD *)(v1 + 75);
  v28 = *(_DWORD *)(v1 + 79);
  v29 = *(_DWORD *)(v1 + 83);
  v40[0] = *(_DWORD *)(v1 + 71);
  v40[1] = v27;
  v40[2] = v28;
  v40[3] = v29;
  v30 = *(_DWORD *)(v1 + 91);
  v40[4] = *(_DWORD *)(v1 + 87);
  v40[5] = v30;
  if ( (unsigned int)dword_B308C <= 3 )
    return memset(v40, 0, sizeof(v40));
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "factory_job = %s\n", (const char *)v40);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "board_info_crc = 0x%x\n", v1[97]);
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      return memset(v40, 0, sizeof(v40));
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "voltage = %d\n", *((unsigned __int16 *)v1 + 49));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_38;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "frequency = %d\n", *((unsigned __int16 *)v1 + 50));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      return memset(v40, 0, sizeof(v40));
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "nonce_rate = %d\n", *((unsigned __int16 *)v1 + 51));
    sub_3C5B8(3, s, 0);
  }
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_41;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pcb_temp_in = %d\n", (char)v1[104]);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
    return memset(v40, 0, sizeof(v40));
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pcb_temp_out = %d\n", (char)v1[105]);
  sub_3C5B8(3, s, 0);
LABEL_38:
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_44:
    v31 = dword_B308C;
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_50;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "pt1_count = %d\n", v1[96]);
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C > 3 )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x800u, "pt2_result = %d\n", v1[108]);
      sub_3C5B8(3, s, 0);
      goto LABEL_47;
    }
    return memset(v40, 0, sizeof(v40));
  }
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "test_version = %d\n", v1[106]);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
    return memset(v40, 0, sizeof(v40));
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "test_standard = %d\n", v1[107]);
  sub_3C5B8(3, s, 0);
LABEL_41:
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "param_info_crc = 0x%x\n", v1[113]);
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      return memset(v40, 0, sizeof(v40));
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "pt1_result = %d\n", v1[95]);
    sub_3C5B8(3, s, 0);
    goto LABEL_44;
  }
LABEL_47:
  if ( (unsigned int)dword_B308C <= 3 )
    return memset(v40, 0, sizeof(v40));
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "pt2_count = %d\n", v1[109]);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
    return memset(v40, 0, sizeof(v40));
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "sweep_hashrate = %d\n", *((unsigned __int16 *)v1 + 57));
  sub_3C5B8(3, s, 0);
  v31 = dword_B308C;
LABEL_50:
  memset(v40, 0, sizeof(v40));
  result = memcpy(v40, v1 + 119, sizeof(v40));
  if ( v31 > 3 )
  {
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "sweep_result = %d\n", v1[247]);
    result = (void *)sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C > 3 )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x800u, "normal_level = %d\n", v1[248]);
      return (void *)sub_3C5B8(3, s, 0);
    }
  }
  return result;
}
