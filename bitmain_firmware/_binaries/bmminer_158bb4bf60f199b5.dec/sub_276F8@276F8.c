int __fastcall sub_276F8(int result)
{
  int v1; // r6
  const char *v2; // r3
  int v3; // r5
  unsigned int v4; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = *(_DWORD *)result;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    v2 = "NOT FOUND";
    if ( *(_BYTE *)(result + 4) )
      v2 = "FOUND";
    v3 = result;
    snprintf(s, 0x800u, ">> ASIC_REG[0x10] = 0x%08X, Hash Counting Number, %s\n", v1, v2);
    result = sub_47EC8(3, s, 0);
    v4 = dword_9E31C;
    if ( *(_BYTE *)(v3 + 4) )
    {
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:0]  HCN", v1);
      result = sub_47EC8(3, s, 0);
      v4 = dword_9E31C;
    }
    if ( v4 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
  }
  return result;
}
