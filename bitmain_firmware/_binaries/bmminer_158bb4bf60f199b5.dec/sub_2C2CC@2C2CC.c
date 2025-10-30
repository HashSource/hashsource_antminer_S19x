int __fastcall sub_2C2CC(int result)
{
  unsigned int v1; // r3
  unsigned int v2; // r6
  int v3; // r5
  char *v4; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = dword_9E31C;
  v2 = *(_DWORD *)result;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( *(_BYTE *)(result + 4) )
      return result;
    goto LABEL_8;
  }
  v3 = result;
  v4 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v4 = "NOT FOUND";
  snprintf(s, 0x800u, ">> core_id[%d], CORE_REG[4] = 0x%04X, Core Enable, %s\n", HIWORD(v2), (unsigned __int16)v2, v4);
  result = sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*(_BYTE *)(v3 + 4) )
  {
LABEL_8:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
    return result;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:8]  Reserved", BYTE1(v2));
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:0]   CORE_EN_I", (unsigned __int8)v2);
      result = sub_47EC8(3, s, 0);
      v1 = dword_9E31C;
      goto LABEL_8;
    }
  }
  return result;
}
