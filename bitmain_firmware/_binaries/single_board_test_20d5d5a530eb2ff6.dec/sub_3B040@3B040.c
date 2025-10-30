int __fastcall sub_3B040(int a1, _WORD *a2, _DWORD *a3, _DWORD *a4)
{
  _BYTE *v5; // r4
  int result; // r0
  char v9[48]; // [sp+8h] [bp-134h] BYREF
  char dest[260]; // [sp+38h] [bp-104h] BYREF

  v5 = *(_BYTE **)(a1 + 300);
  if ( *a3 <= 0x61u )
  {
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : INPUT too short %u<%u\n", "edf_v5_region_1_encode", *a3, 98);
    snprintf(&byte_62DC68[15360], 0x100u, "INPUT too short %u<%u", *a3, 98);
    sub_3CC5C(&byte_62DC68[15360], dest);
    return -1;
  }
  else
  {
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : BOARD_CRC_DATA_LEN=%d\n", "edf_v5_region_1_encode", 97);
    snprintf(&byte_62DC68[15616], 0x100u, "BOARD_CRC_DATA_LEN=%d", 97);
    sub_3CC5C(&byte_62DC68[15616], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : BOARD_ENC_DATA_START=%d\n", "edf_v5_region_1_encode", 2);
    snprintf(&byte_62DC68[15872], 0x100u, "BOARD_ENC_DATA_START=%d", 2);
    sub_3CC5C(&byte_62DC68[15872], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : BOARD_ENC_DATA_LEN=%d\n", "edf_v5_region_1_encode", 96);
    snprintf(&byte_62DC68[16128], 0x100u, "BOARD_ENC_DATA_LEN=%d", 96);
    sub_3CC5C(&byte_62DC68[16128], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : PARAM_CRC_DATA_START=%d\n", "edf_v5_region_1_encode", 98);
    snprintf(&byte_62DC68[0x4000], 0x100u, "PARAM_CRC_DATA_START=%d", 98);
    sub_3CC5C(&byte_62DC68[0x4000], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : PARAM_CRC_DATA_LEN=%d\n", "edf_v5_region_1_encode", 15);
    snprintf(&byte_62DC68[16640], 0x100u, "PARAM_CRC_DATA_LEN=%d", 15);
    sub_3CC5C(&byte_62DC68[16640], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : PARAM_ENC_DATA_START=%d\n", "edf_v5_region_1_encode", 98);
    snprintf(&byte_62DC68[16896], 0x100u, "PARAM_ENC_DATA_START=%d", 98);
    sub_3CC5C(&byte_62DC68[16896], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : PARAM_ENC_DATA_LEN=%d\n", "edf_v5_region_1_encode", 16);
    snprintf(&byte_62DC68[17152], 0x100u, "PARAM_ENC_DATA_LEN=%d", 16);
    sub_3CC5C(&byte_62DC68[17152], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : SWEEP_CRC_DATA_START=%d\n", "edf_v5_region_1_encode", 114);
    snprintf(&byte_62DC68[17408], 0x100u, "SWEEP_CRC_DATA_START=%d", 114);
    sub_3CC5C(&byte_62DC68[17408], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : SWEEP_CRC_DATA_LEN=%d\n", "edf_v5_region_1_encode", 135);
    snprintf(&byte_62DC68[17664], 0x100u, "SWEEP_CRC_DATA_LEN=%d", 135);
    sub_3CC5C(&byte_62DC68[17664], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : SWEEP_ENC_DATA_START=%d\n", "edf_v5_region_1_encode", 114);
    snprintf(&byte_62DC68[17920], 0x100u, "SWEEP_ENC_DATA_START=%d", 114);
    sub_3CC5C(&byte_62DC68[17920], dest);
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : SWEEP_ENC_DATA_LEN=%d\n", "edf_v5_region_1_encode", 136);
    snprintf(&byte_62DC68[18176], 0x100u, "SWEEP_ENC_DATA_LEN=%d", 136);
    sub_3CC5C(&byte_62DC68[18176], dest);
    v5[97] = sub_2883C(v5, 776);
    memcpy(dest, v5 + 2, 0x60u);
    if ( sub_3836C((int)dest, 0x60u, (unsigned __int8)v5[1] >> 4, v5[1] & 0xF) )
    {
      *a2 = *(_WORD *)v5;
      memcpy(a2 + 1, dest, 0x60u);
      result = 0;
      *a3 = 98;
      *a4 = 0;
    }
    else
    {
      sub_1E938(v9, 0x30u);
      printf("%s ", v9);
      printf("%s : %s: data_enc error\n", "edf_v5_region_1_encode", "edf_v5_region_1_encode");
      snprintf(&byte_62DC68[18432], 0x100u, "%s: data_enc error", "edf_v5_region_1_encode");
      sub_3CC5C(&byte_62DC68[18432], v9);
      return -1;
    }
  }
  return result;
}
