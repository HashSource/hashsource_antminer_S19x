int __fastcall sub_29D68(int result, unsigned int a2)
{
  _BOOL4 v2; // r3
  int v3; // r3
  int v4; // r4
  int v5; // r2
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = result == 0;
  if ( a2 > 3 )
    v2 = 1;
  if ( v2 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(v6, 0x800u, "%s: input bad param\n", "api_miner_chain_eeprom");
      return sub_3B6AC(3, v6, 0, v3);
    }
  }
  else
  {
    v4 = result;
    if ( sub_1CE00(a2) )
      v5 = sub_78090();
    else
      v5 = sub_780B0();
    return sub_7611C(v4, "eeprom", v5);
  }
  return result;
}
