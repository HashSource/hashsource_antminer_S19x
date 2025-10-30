int __fastcall sub_29E38(int result, unsigned int a2)
{
  _BOOL4 v2; // r12
  int v3; // r3
  int v4; // r4
  int v5; // r0
  _DWORD v6[8]; // [sp+0h] [bp-820h] BYREF
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  v2 = result == 0;
  if ( a2 > 3 )
    v2 = 1;
  memset(v6, 0, sizeof(v6));
  if ( v2 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_sn");
      return sub_3B6AC(3, s, 0, v3);
    }
  }
  else
  {
    v4 = result;
    sub_1A2A8(a2, (char *)v6, 0x20u);
    v5 = sub_77728(v6);
    return sub_7611C(v4, "sn", v5);
  }
  return result;
}
