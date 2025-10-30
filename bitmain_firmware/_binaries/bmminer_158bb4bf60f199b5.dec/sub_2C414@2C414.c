int __fastcall sub_2C414(int result)
{
  unsigned int v1; // r3
  const char *v2; // r2
  int v3; // r6
  int v4; // r5
  unsigned int v5; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = *(_DWORD *)result;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    v2 = "NOT FOUND";
    v3 = (unsigned __int8)v1;
    if ( *(_BYTE *)(result + 4) )
      v2 = "FOUND";
    v4 = result;
    snprintf(
      s,
      0x800u,
      ">> core_id[%d], CORE_REG[5] = 0x%02X, Hash Clock Control, %s\n",
      HIWORD(v1),
      (unsigned __int8)v1,
      v2);
    result = sub_47EC8(3, s, 0);
    v5 = dword_9E31C;
    if ( *(_BYTE *)(v4 + 4) )
    {
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:0]  CLOCK_CTRL", v3);
      result = sub_47EC8(3, s, 0);
      v5 = dword_9E31C;
    }
    if ( v5 > 3 )
    {
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
  }
  return result;
}
