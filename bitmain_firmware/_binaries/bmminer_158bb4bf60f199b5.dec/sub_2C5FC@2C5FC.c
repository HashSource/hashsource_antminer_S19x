int __fastcall sub_2C5FC(int result)
{
  unsigned int v1; // r2
  unsigned int v2; // r3
  int v3; // r5
  const char *v4; // r2
  unsigned int v5; // r6
  unsigned int v6; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = dword_9E31C;
  v2 = *(_DWORD *)result;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( *(_BYTE *)(result + 4) )
      return result;
    goto LABEL_13;
  }
  v3 = result;
  v4 = "FOUND";
  v5 = (unsigned __int16)v2;
  v6 = HIWORD(v2);
  if ( !*(_BYTE *)(result + 4) )
    v4 = "NOT FOUND";
  snprintf(s, 0x800u, ">> core_id[%d], CORE_REG[7] = 0x%02X, Clock Select Ctrl, %s\n", v6, v5, v4);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v3 + 4) )
  {
LABEL_13:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
    return result;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:8]  Reserved", v5 >> 8);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_11;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7]     SWPF_MODE", (v5 >> 7) & 1);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[6:5]   Reserved", (v5 >> 5) & 3);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[4]     PULSE_MODE", (v5 >> 4) & 1);
      result = sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3:2]   Reserved", (v5 >> 2) & 3);
        result = sub_47EC8(3, s, 0);
LABEL_11:
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[1:0]   CLOCK_CNT", v5 & 3);
        result = sub_47EC8(3, s, 0);
        v1 = dword_9E31C;
        goto LABEL_13;
      }
    }
  }
  return result;
}
