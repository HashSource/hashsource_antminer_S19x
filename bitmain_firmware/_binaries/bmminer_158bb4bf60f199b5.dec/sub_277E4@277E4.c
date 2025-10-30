int __fastcall sub_277E4(int result)
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
    goto LABEL_10;
  }
  v3 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v3 = "NOT FOUND";
  v4 = result;
  snprintf(s, 0x800u, ">> ASIC_REG[0x14] = 0x%08X, Ticket Mask, %s\n", v2, v3);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v4 + 4) )
  {
LABEL_10:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
    return result;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:24]  TM3", HIBYTE(v2));
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23:16]  TM2", BYTE2(v2));
      result = sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:8]   TM1", BYTE1(v2));
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:0]    TM0", (unsigned __int8)v2);
          result = sub_47EC8(3, s, 0);
          v1 = dword_9E31C;
          goto LABEL_10;
        }
      }
    }
  }
  return result;
}
