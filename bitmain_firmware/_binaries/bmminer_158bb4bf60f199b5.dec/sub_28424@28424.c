int __fastcall sub_28424(int result)
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
    goto LABEL_25;
  }
  v3 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v3 = "NOT FOUND";
  v4 = result;
  snprintf(s, 0x800u, ">> ASIC_REG[0x58] = 0x%08X, Io Driver Strenght Configuration, %s\n", v2, v3);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v4 + 4) )
  {
LABEL_25:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
    return result;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:28]  Reserved", v2 >> 28);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27:24]  RF_DS", HIBYTE(v2) & 0xF);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23]     Reserved", (v2 >> 23) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[22:20]  TF_DS", (v2 >> 20) & 7);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[19]     Reserved", (v2 >> 19) & 1);
    result = sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_17;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[18:16]  R0_DS", HIWORD(v2) & 7);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15]     Reserved", (v2 >> 15) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_14:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_20;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[14:12]  CLKO_DS", (v2 >> 12) & 7);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[11]     Reserved", (v2 >> 11) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_17:
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_23:
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[2:0]    CO_DS", v2 & 7);
    result = sub_47EC8(3, s, 0);
    v1 = dword_9E31C;
    goto LABEL_25;
  }
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[10:8]   NRSTO_DS", (v2 >> 8) & 7);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7]      Reserved", (v2 >> 7) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_20:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[6:4]    BO_DS", (v2 >> 4) & 7);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3]      Reserved", (v2 >> 3) & 1);
      result = sub_47EC8(3, s, 0);
      goto LABEL_23;
    }
  }
  return result;
}
