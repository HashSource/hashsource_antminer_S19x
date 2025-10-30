int __fastcall sub_29210(int result, unsigned int a2)
{
  _BOOL4 v2; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r0
  int v6; // r0
  _DWORD v7[4]; // [sp+0h] [bp-810h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = result == 0;
  if ( a2 > 3 )
    v2 = 1;
  memset(v7, 0, sizeof(v7));
  if ( v2 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_rate_ideal");
      return sub_3B6AC(3, s, 0, v3);
    }
  }
  else
  {
    v4 = result;
    v5 = sub_22A04(a2);
    snprintf((char *)v7, 0x10u, "%d", v5);
    v6 = sub_77728(v7);
    return sub_7611C(v4, "rate_ideal", v6);
  }
  return result;
}
