int __fastcall sub_29C24(int result)
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
    goto LABEL_26;
  }
  v3 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v3 = "NOT FOUND";
  v4 = result;
  snprintf(s, 0x800u, ">> ASIC_REG[0xB0] = 0x%08X, Clock Overlap Counter, %s\n", v2, v3);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v4 + 4) )
  {
LABEL_26:
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
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[29]     C0_SEL", (v2 >> 29) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[28]     ENTIN", (v2 >> 28) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27:26]  VRTSEl", HIBYTE(v2) & 3);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[25:24]  Reserved", (v2 >> 21) & 7);
    result = sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_17;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23:21]  VREFSEL", (v2 >> 20) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[20]     DIFF", (v2 >> 19) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_14:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_20;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[19]     EN", (v2 >> 18) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[18]     INSEL", HIWORD(v2) & 3);
  result = sub_47EC8(3, s, 0);
LABEL_17:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_23;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[17:16]  RSVD1", (unsigned __int16)v2 >> 6);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:5]   SCONT", (v2 >> 5) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_20:
  v1 = dword_9E31C;
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_26;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[4]      STAT", (v2 >> 4) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3]      SWEN", (v2 >> 3) & 1);
  result = sub_47EC8(3, s, 0);
LABEL_23:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[2]      DRDY", (v2 >> 2) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[1:0]    MT", v2 & 3);
      result = sub_47EC8(3, s, 0);
      v1 = dword_9E31C;
      goto LABEL_26;
    }
  }
  return result;
}
