int __fastcall sub_27EE4(int result)
{
  unsigned int v1; // r3
  unsigned int v2; // r6
  char *v3; // r3
  int v4; // r5
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = dword_9E31C;
  v2 = *(_DWORD *)result;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( *(_BYTE *)(result + 4) )
      return result;
    goto LABEL_11;
  }
  v3 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v3 = "NOT FOUND";
  v4 = result;
  snprintf(s, 0x800u, ">> ASIC_REG[0x24] = 0x%08X, Top Process Monitor, %s\n", v2, v3);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v4 + 4) )
    goto LABEL_11;
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31]    START", v2 >> 31);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_11;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[30:26] Reserved", (v2 >> 26) & 0x1F);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[25:24] PM_SEL", HIBYTE(v2) & 3);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23:16] Reserved", BYTE2(v2));
      result = sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:0]  PM_COUNT", (unsigned __int16)v2);
        result = sub_47EC8(3, s, 0);
        v1 = dword_9E31C;
LABEL_11:
        if ( v1 > 3 )
        {
          strcpy(s, "\n");
          return sub_47EC8(3, s, 0);
        }
      }
    }
  }
  return result;
}
