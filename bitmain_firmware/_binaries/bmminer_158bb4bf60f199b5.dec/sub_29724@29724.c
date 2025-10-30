int __fastcall sub_29724(int result)
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
    goto LABEL_29;
  }
  v3 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v3 = "NOT FOUND";
  v4 = result;
  snprintf(s, 0x800u, ">> ASIC_REG[0x90] = 0x%08X, Frequency Sweep Control1, %s\n", v2, v3);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v4 + 4) )
  {
LABEL_29:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
    return result;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:30]  Reserved", v2 >> 30);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[29]     CORE_CLK_CFG_DIS", (v2 >> 29) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[28]     EN_OR_MATCH_NONCES", (v2 >> 28) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27]     INC_DISABLE", (v2 >> 27) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[26:24]  SWEEP_STATE", HIBYTE(v2) & 7);
    result = sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_17;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23:16]  SWEEP_ST_ADDR", BYTE2(v2));
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:14]  SN_FLTR", (unsigned __int16)v2 >> 14);
  result = sub_47EC8(3, s, 0);
LABEL_14:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_20;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[13]     ALL_CORE_CLK_SEL_CHANGE_ST", (v2 >> 13) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[12]     SWEEP_FAIL_LOCK_EN", (v2 >> 12) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_17:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_23;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[11]     SWEEP_RESET", (v2 >> 11) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[10:8]   CURR_PAT_ADDR", (v2 >> 8) & 7);
  result = sub_47EC8(3, s, 0);
LABEL_20:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_26;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7]      SWP_ONE_PAT_DONE", (v2 >> 7) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[6:4]    SWP_PAT_ADDR", (v2 >> 4) & 7);
  result = sub_47EC8(3, s, 0);
LABEL_23:
  v1 = dword_9E31C;
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_29;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3]      SWP_DONE_ALL", (v2 >> 3) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[2]      SWP_ONGOING", (v2 >> 2) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_26:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[1]      SWP_TRIG", (v2 >> 1) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[0]      SWP_EN", v2 & 1);
      result = sub_47EC8(3, s, 0);
      v1 = dword_9E31C;
      goto LABEL_29;
    }
  }
  return result;
}
