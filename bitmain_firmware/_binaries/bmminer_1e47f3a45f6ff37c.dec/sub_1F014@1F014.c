int __fastcall sub_1F014(int a1, _WORD *a2, int *a3, _DWORD *a4)
{
  int v4; // r5
  int v6; // r4
  _BYTE dest[256]; // [sp+8h] [bp-904h] BYREF
  char s[2052]; // [sp+108h] [bp-804h] BYREF

  v4 = *a3;
  v6 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)*a3 <= 0x61 )
  {
    if ( (unsigned int)dword_B308C > 2 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "INPUT too short %u<%u\n", v4, 98);
      sub_3C5B8(2, s, 0);
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "BOARD_CRC_DATA_LEN=%d\n", 97);
    sub_3C5B8(4, s, 0);
    if ( (unsigned int)dword_B308C > 4 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "BOARD_ENC_DATA_START=%d\n", 2);
      sub_3C5B8(4, s, 0);
      if ( (unsigned int)dword_B308C <= 4 )
        goto LABEL_6;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "BOARD_ENC_DATA_LEN=%d\n", 96);
      sub_3C5B8(4, s, 0);
      if ( (unsigned int)dword_B308C <= 4 )
        goto LABEL_6;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "PARAM_CRC_DATA_START=%d\n", 98);
      sub_3C5B8(4, s, 0);
      if ( (unsigned int)dword_B308C <= 4 )
        goto LABEL_6;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "PARAM_CRC_DATA_LEN=%d\n", 15);
      sub_3C5B8(4, s, 0);
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "PARAM_ENC_DATA_START=%d\n", 98);
      sub_3C5B8(4, s, 0);
      if ( (unsigned int)dword_B308C > 4 )
      {
        memset(s, 0, 0x800u);
        snprintf(s, 0x800u, "PARAM_ENC_DATA_LEN=%d\n", 16);
        sub_3C5B8(4, s, 0);
      }
    }
  }
LABEL_6:
  *(_BYTE *)(v6 + 97) = sub_3F1DC(v6, 776);
  memcpy(dest, (const void *)(v6 + 2), 0x60u);
  if ( sub_219F4(dest, 96, *(unsigned __int8 *)(v6 + 1) >> 4, *(_BYTE *)(v6 + 1) & 0xF) )
  {
    *a2 = *(_WORD *)v6;
    memcpy(a2 + 1, dest, 0x60u);
    *a3 = 98;
    *a4 = 0;
    return 0;
  }
  else
  {
    if ( (unsigned int)dword_B308C <= 2 )
      return -1;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%s: data_enc error\n", "edf_v4_region_1_encode");
    sub_3C5B8(2, s, 0);
    return -1;
  }
}
