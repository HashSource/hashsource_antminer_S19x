int __fastcall sub_279A4(int result)
{
  unsigned int v1; // r3
  unsigned int v2; // r5
  char *v3; // r3
  int v4; // r6
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = dword_9E31C;
  v2 = *(_DWORD *)result;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( *(_BYTE *)(result + 4) )
      return result;
    goto LABEL_31;
  }
  v3 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v3 = "NOT FOUND";
  v4 = result;
  snprintf(s, 0x800u, ">> ASIC_REG[0x18] = 0x%08X, Misc Control, %s\n", v2, v3);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v4 + 4) )
  {
LABEL_31:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
    return result;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:28]  RTST_EN", v2 >> 28);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27:24]  BT8D_8_5", HIBYTE(v2) & 0xF);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23]     CORE_SWPS", (v2 >> 23) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[22]     CORE_SRST", (v2 >> 22) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[21]     SPAT_NOD", (v2 >> 21) & 1);
    result = sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_17;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[20]     RVS_K0", (v2 >> 20) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[19:18]  DSCLK_SEL", (v2 >> 18) & 3);
  result = sub_47EC8(3, s, 0);
LABEL_14:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_20;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[17]     TOPCLK_SEL", (v2 >> 17) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[16]     BCLK_SEL", HIWORD(v2) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_17:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_23;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15]     TVER_EN", (v2 >> 15) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[14]     RFS", (v2 >> 14) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_20:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_26;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[13]     INV_CLKO", (v2 >> 13) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[12:8]   BT8D_4_0", (v2 >> 8) & 0x1F);
  result = sub_47EC8(3, s, 0);
LABEL_23:
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_29:
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[1:0]    HASHRATE_TWS", v2 & 3);
    result = sub_47EC8(3, s, 0);
    v1 = dword_9E31C;
    goto LABEL_31;
  }
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7]      RET_WORK_ERR_FLAG", (v2 >> 7) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[6:4]    TFS", (v2 >> 4) & 7);
  result = sub_47EC8(3, s, 0);
LABEL_26:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3]      RI_DISA", (v2 >> 3) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[2]      FORCE_CORE_EN", (v2 >> 2) & 1);
      result = sub_47EC8(3, s, 0);
      goto LABEL_29;
    }
  }
  return result;
}
