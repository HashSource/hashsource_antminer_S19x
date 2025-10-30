int __fastcall sub_29BE4(int result, unsigned int a2)
{
  _BOOL4 v2; // r3
  int v3; // r3
  int v4; // r4
  int v5; // r0
  int v6; // r0
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = result == 0;
  if ( a2 > 3 )
    v2 = 1;
  if ( v2 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(v7, 0x800u, "%s: input bad param\n", "api_miner_chain_hw");
      return sub_3B6AC(3, v7, 0, v3);
    }
  }
  else
  {
    v4 = result;
    v5 = sub_2717C(a2);
    v6 = sub_77C3C(v5, v5 >> 31);
    return sub_7611C(v4, "hw", v6);
  }
  return result;
}
