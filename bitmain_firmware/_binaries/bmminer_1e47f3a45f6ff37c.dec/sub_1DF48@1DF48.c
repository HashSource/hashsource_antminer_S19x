int __fastcall sub_1DF48(int a1)
{
  unsigned __int8 *v1; // r5
  unsigned __int8 v2; // r3
  int v3; // r1
  __int16 v4; // r2
  int v5; // r1
  unsigned __int8 v6; // r2
  _DWORD *v7; // r5
  int v8; // t1
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int result; // r0
  int v13; // r1
  int v14; // r3
  int v15; // r1
  int v16; // r2
  unsigned __int8 v17; // r3
  int v18; // r1
  int v19; // r2
  __int16 v20; // r12
  int v21; // r1
  __int16 v22; // r2
  unsigned int v23; // r8
  unsigned __int8 v24; // r3
  int v25; // r1
  unsigned __int8 v26; // r2
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r1
  int v32; // r2
  __int16 v33; // r12
  int v34; // r1
  __int16 v35; // r2
  unsigned __int8 v36; // r3
  int v37; // r1
  unsigned __int8 v38; // r12
  _DWORD v39[25]; // [sp+4h] [bp-868h] BYREF
  char s[2052]; // [sp+68h] [bp-804h] BYREF

  v1 = *(unsigned __int8 **)(a1 + 300);
  if ( (unsigned int)dword_B308C <= 3
    || (memset(s, 0, 0x800u),
        snprintf(s, 0x800u, "board_info_version = %d\n", *v1),
        sub_3C5B8(3, s, 0),
        (unsigned int)dword_B308C <= 3) )
  {
    memset(v39, 0, sizeof(v39));
    v2 = v1[22];
    LOWORD(v39[0]) = *((_WORD *)v1 + 10);
    BYTE2(v39[0]) = v2;
    goto LABEL_3;
  }
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "algorithm_and_key_version = 0x%x\n", v1[1]);
  sub_3C5B8(3, s, 0);
  memset(v39, 0, sizeof(v39));
  v14 = *(_DWORD *)(v1 + 14);
  v15 = *(_DWORD *)(v1 + 6);
  v16 = *(_DWORD *)(v1 + 10);
  v39[0] = *(_DWORD *)(v1 + 2);
  v39[1] = v15;
  v39[2] = v16;
  v39[3] = v14;
  LOWORD(v39[4]) = *((_WORD *)v1 + 9);
  if ( (unsigned int)dword_B308C <= 3 )
  {
    memset(v39, 0, sizeof(v39));
    v31 = *(_DWORD *)(v1 + 27);
    v32 = *(_DWORD *)(v1 + 31);
    v33 = *(_WORD *)(v1 + 35);
    v39[0] = *(_DWORD *)(v1 + 23);
    v39[1] = v31;
    v39[2] = v32;
    LOWORD(v39[3]) = v33;
LABEL_49:
    memset(v39, 0, sizeof(v39));
    v34 = *(_DWORD *)(v1 + 42);
    v35 = *((_WORD *)v1 + 23);
    v39[0] = *(_DWORD *)(v1 + 38);
    v39[1] = v34;
    LOWORD(v39[2]) = v35;
    goto LABEL_50;
  }
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "board_sn = %s\n", (const char *)v39);
  sub_3C5B8(3, s, 0);
  memset(v39, 0, sizeof(v39));
  v17 = v1[22];
  LOWORD(v39[0]) = *((_WORD *)v1 + 10);
  BYTE2(v39[0]) = v17;
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_3:
    memset(v39, 0, sizeof(v39));
    v3 = *(_DWORD *)(v1 + 42);
    v4 = *((_WORD *)v1 + 23);
    v39[0] = *(_DWORD *)(v1 + 38);
    v39[1] = v3;
    LOWORD(v39[2]) = v4;
    goto LABEL_4;
  }
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "chip_die = %s\n", (const char *)v39);
  sub_3C5B8(3, s, 0);
  memset(v39, 0, sizeof(v39));
  v18 = *(_DWORD *)(v1 + 27);
  v19 = *(_DWORD *)(v1 + 31);
  v20 = *(_WORD *)(v1 + 35);
  v39[0] = *(_DWORD *)(v1 + 23);
  v39[1] = v18;
  v39[2] = v19;
  LOWORD(v39[3]) = v20;
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_49;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "chip_marking = %s\n", (const char *)v39);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_49;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "chip_bin = %d\n", v1[37]);
  sub_3C5B8(3, s, 0);
  memset(v39, 0, sizeof(v39));
  v21 = *(_DWORD *)(v1 + 42);
  v22 = *((_WORD *)v1 + 23);
  v39[0] = *(_DWORD *)(v1 + 38);
  v39[1] = v21;
  LOWORD(v39[2]) = v22;
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_4;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "ft_version = %s\n", (const char *)v39);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "pcb_version = 0x%x\n", *((unsigned __int16 *)v1 + 24));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_50;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "bom_version = 0x%x\n", *((unsigned __int16 *)v1 + 25));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_21;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "asic_sensor_type = 0x%x\n", v1[52]);
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_4;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "asic_sensor_addr[0] = 0x%x\n", v1[53]);
    sub_3C5B8(3, s, 0);
  }
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_24;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "asic_sensor_addr[1] = 0x%x\n", v1[54]);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_50:
    memset(v39, 0, sizeof(v39));
    v36 = v1[61];
    LOWORD(v39[0]) = *(_WORD *)(v1 + 59);
    BYTE2(v39[0]) = v36;
    goto LABEL_51;
  }
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "asic_sensor_addr[2] = 0x%x\n", v1[55]);
  sub_3C5B8(3, s, 0);
LABEL_21:
  v23 = dword_B308C;
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_26;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "asic_sensor_addr[3] = 0x%x\n", v1[56]);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_4:
    memset(v39, 0, sizeof(v39));
    v5 = *(_DWORD *)(v1 + 66);
    v6 = v1[70];
    v39[0] = *(_DWORD *)(v1 + 62);
    v39[1] = v5;
    LOBYTE(v39[2]) = v6;
LABEL_5:
    memset(v39, 0, sizeof(v39));
    v8 = *(_DWORD *)(v1 + 71);
    v7 = v1 + 71;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v39[0] = v8;
    v39[1] = v9;
    v39[2] = v10;
    v39[3] = v11;
    result = v7[4];
    v13 = v7[5];
    v39[4] = result;
    v39[5] = v13;
    return result;
  }
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "pic_sensor_type = 0x%x\n", v1[57]);
  sub_3C5B8(3, s, 0);
LABEL_24:
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_4;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "pic_sensor_addr = 0x%x\n", v1[58]);
  sub_3C5B8(3, s, 0);
  v23 = dword_B308C;
LABEL_26:
  memset(v39, 0, sizeof(v39));
  v24 = v1[61];
  LOWORD(v39[0]) = *(_WORD *)(v1 + 59);
  BYTE2(v39[0]) = v24;
  if ( v23 <= 3 )
  {
LABEL_51:
    memset(v39, 0, sizeof(v39));
    v37 = *(_DWORD *)(v1 + 66);
    v38 = v1[70];
    v39[0] = *(_DWORD *)(v1 + 62);
    v39[1] = v37;
    LOBYTE(v39[2]) = v38;
    goto LABEL_5;
  }
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "chip_tech = %s\n", (const char *)v39);
  sub_3C5B8(3, s, 0);
  memset(v39, 0, sizeof(v39));
  v25 = *(_DWORD *)(v1 + 66);
  v26 = v1[70];
  v39[0] = *(_DWORD *)(v1 + 62);
  v39[1] = v25;
  LOBYTE(v39[2]) = v26;
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_5;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "board_name = %s\n", (const char *)v39);
  sub_3C5B8(3, s, 0);
  memset(v39, 0, sizeof(v39));
  v27 = *(_DWORD *)(v1 + 75);
  v28 = *(_DWORD *)(v1 + 79);
  v29 = *(_DWORD *)(v1 + 83);
  v39[0] = *(_DWORD *)(v1 + 71);
  v39[1] = v27;
  v39[2] = v28;
  v39[3] = v29;
  result = *(_DWORD *)(v1 + 87);
  v30 = *(_DWORD *)(v1 + 91);
  v39[4] = result;
  v39[5] = v30;
  if ( (unsigned int)dword_B308C <= 3 )
    return result;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "factory_job = %s\n", (const char *)v39);
  result = sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "board_info_crc = 0x%x\n", v1[97]);
    result = sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      return result;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "voltage = %d\n", *((unsigned __int16 *)v1 + 49));
    result = sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_37;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "frequency = %d\n", *((unsigned __int16 *)v1 + 50));
    result = sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      return result;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "nonce_rate = %d\n", *((unsigned __int16 *)v1 + 51));
    result = sub_3C5B8(3, s, 0);
  }
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_40;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "pcb_temp_in = %d\n", (char)v1[104]);
  result = sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
    return result;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "pcb_temp_out = %d\n", (char)v1[105]);
  result = sub_3C5B8(3, s, 0);
LABEL_37:
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_43;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "test_version = %d\n", v1[106]);
  result = sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
    return result;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "test_standard = %d\n", v1[107]);
  result = sub_3C5B8(3, s, 0);
LABEL_40:
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_46;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "param_info_crc = 0x%x\n", v1[113]);
  result = sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C <= 3 )
    return result;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "pt1_result = %d\n", v1[95]);
  result = sub_3C5B8(3, s, 0);
LABEL_43:
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "pt1_count = %d\n", v1[96]);
    result = sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C > 3 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "pt2_result = %d\n", v1[108]);
      result = sub_3C5B8(3, s, 0);
LABEL_46:
      if ( (unsigned int)dword_B308C > 3 )
      {
        memset(s, 0, 0x800u);
        snprintf(s, 0x800u, "pt2_count = %d\n", v1[109]);
        return sub_3C5B8(3, s, 0);
      }
    }
  }
  return result;
}
