int __fastcall sub_2BC80(int result)
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
    goto LABEL_13;
  }
  v3 = result;
  v4 = "FOUND";
  if ( !*(_BYTE *)(result + 4) )
    v4 = "NOT FOUND";
  snprintf(
    s,
    0x800u,
    ">> core_id[%d], CORE_REG[0] = 0x%02X, Clock Delay Ctrl, %s\n",
    HIWORD(v2),
    (unsigned __int8)v2,
    v4);
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
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:6]  CCDLY_SEL", (unsigned __int8)v2 >> 6);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_11;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[5:4]  PWTH_SEL", (v2 >> 4) & 3);
  result = sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3]    HASH_CLKEN", (v2 >> 3) & 1);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[2]    MMEN", (v2 >> 2) & 1);
      result = sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[1]    Reserved", (v2 >> 1) & 1);
        result = sub_47EC8(3, s, 0);
LABEL_11:
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[0]    SWPF_MODE", v2 & 1);
        result = sub_47EC8(3, s, 0);
        v1 = dword_9E31C;
        goto LABEL_13;
      }
    }
  }
  return result;
}
