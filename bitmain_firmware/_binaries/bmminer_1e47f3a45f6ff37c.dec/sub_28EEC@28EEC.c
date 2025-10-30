int __fastcall sub_28EEC(int result)
{
  int v1; // r4
  int v2; // r0
  int v3; // r3
  int v4; // [sp+4h] [bp-804h] BYREF
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = result;
  v4 = 0;
  if ( result )
  {
    strcpy((char *)&v4, "GH");
    v2 = sub_77728(&v4);
    return sub_7611C(v1, "rate_unit", v2);
  }
  else if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    snprintf(s, 0x800u, "%s: input bad json param\n", "api_miner_rate_unit");
    return sub_3B6AC(3, s, 0, v3);
  }
  return result;
}
