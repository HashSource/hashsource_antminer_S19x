int __fastcall sub_29264(int result)
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
    goto LABEL_28;
  }
  v3 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v3 = "NOT FOUND";
  v4 = result;
  snprintf(s, 0x800u, ">> ASIC_REG[0x6C] = 0x%08X, Ldo Control, %s\n", v2, v3);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v4 + 4) )
  {
LABEL_28:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
    return result;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31]     FSW_CKEN", v2 >> 31);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[30:27]  Reserved", (v2 >> 27) & 0xF);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[26]     PD1", (v2 >> 26) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[25:24]  BIT_LDO_CURRENT1", HIBYTE(v2) & 3);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23]     PD_LIMIT1", (v2 >> 23) & 1);
    result = sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_17;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[22:20]  BIT_LDO_OUT1", (v2 >> 20) & 7);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[19]     PD_EFFP", (v2 >> 19) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_14:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_20;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[18:16]  Reserved", HIWORD(v2) & 7);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:12]  RES", (unsigned __int16)v2 >> 12);
  result = sub_47EC8(3, s, 0);
LABEL_17:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_23;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[11]     PD_BG", (v2 >> 11) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[10]     PD0", (v2 >> 10) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_20:
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_26:
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[2:0]    BIT_LDO_BG", v2 & 7);
    result = sub_47EC8(3, s, 0);
    v1 = dword_9E31C;
    goto LABEL_28;
  }
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[9:8]    BIT_LDO_CURRENT0", (v2 >> 8) & 3);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7]      PD_LIMIT0", (v2 >> 7) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_23:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[6:4]    BIT_LDO_OUT0", (v2 >> 4) & 7);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3]      PD_SCP", (v2 >> 3) & 1);
      result = sub_47EC8(3, s, 0);
      goto LABEL_26;
    }
  }
  return result;
}
