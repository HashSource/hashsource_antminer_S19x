int __fastcall sub_20A28(int a1, _WORD *a2, int *a3, _DWORD *a4)
{
  int v4; // r5
  int v9; // r5
  _BYTE dest[256]; // [sp+8h] [bp-904h] BYREF
  char s[2052]; // [sp+108h] [bp-804h] BYREF

  v4 = *a3;
  if ( (unsigned int)*a3 <= 0x61 )
  {
    if ( (unsigned int)off_AFC24 > 2 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "INPUT too short %u<%u\n", v4, 98);
      sub_3BE28(2, s, 0);
    }
    return -1;
  }
  v9 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)off_AFC24 > 4 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "BOARD_CRC_DATA_LEN=%d\n", 97);
    sub_3BE28(4, s, 0);
    if ( (unsigned int)off_AFC24 > 4 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "BOARD_ENC_DATA_START=%d\n", 2);
      sub_3BE28(4, s, 0);
      if ( (unsigned int)off_AFC24 <= 4 )
        goto LABEL_6;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "BOARD_ENC_DATA_LEN=%d\n", 96);
      sub_3BE28(4, s, 0);
      if ( (unsigned int)off_AFC24 <= 4 )
        goto LABEL_17;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "PARAM_CRC_DATA_START=%d\n", 98);
      sub_3BE28(4, s, 0);
      if ( (unsigned int)off_AFC24 <= 4 )
        goto LABEL_6;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "PARAM_CRC_DATA_LEN=%d\n", 15);
      sub_3BE28(4, s, 0);
    }
    if ( (unsigned int)off_AFC24 <= 4 )
    {
LABEL_20:
      if ( (unsigned int)off_AFC24 > 4 )
      {
        memset(s, 0, 0x800u);
        snprintf(s, 0x800u, "SWEEP_ENC_DATA_START=%d\n", 114);
        sub_3BE28(4, s, 0);
        if ( (unsigned int)off_AFC24 > 4 )
        {
          memset(s, 0, 0x800u);
          snprintf(s, 0x800u, "SWEEP_ENC_DATA_LEN=%d\n", 136);
          sub_3BE28(4, s, 0);
        }
      }
      goto LABEL_6;
    }
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "PARAM_ENC_DATA_START=%d\n", 98);
    sub_3BE28(4, s, 0);
    if ( (unsigned int)off_AFC24 <= 4 )
      goto LABEL_6;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "PARAM_ENC_DATA_LEN=%d\n", 16);
    sub_3BE28(4, s, 0);
LABEL_17:
    if ( (unsigned int)off_AFC24 <= 4 )
      goto LABEL_6;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "SWEEP_CRC_DATA_START=%d\n", 114);
    sub_3BE28(4, s, 0);
    if ( (unsigned int)off_AFC24 <= 4 )
      goto LABEL_6;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "SWEEP_CRC_DATA_LEN=%d\n", 135);
    sub_3BE28(4, s, 0);
    goto LABEL_20;
  }
LABEL_6:
  *(_BYTE *)(v9 + 97) = sub_3EAEC(v9, 776);
  memcpy(dest, (const void *)(v9 + 2), 0x60u);
  if ( sub_214E4(dest, 96, *(unsigned __int8 *)(v9 + 1) >> 4, *(_BYTE *)(v9 + 1) & 0xF) )
  {
    *a2 = *(_WORD *)v9;
    memcpy(a2 + 1, dest, 0x60u);
    *a3 = 98;
    *a4 = 0;
    return 0;
  }
  else
  {
    if ( (unsigned int)off_AFC24 <= 2 )
      return -1;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%s: data_enc error\n", "edf_v5_region_1_encode");
    sub_3BE28(2, s, 0);
    return -1;
  }
}
