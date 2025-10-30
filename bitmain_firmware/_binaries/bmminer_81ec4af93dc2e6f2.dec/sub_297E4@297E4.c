int __fastcall sub_297E4(int result, unsigned int a2)
{
  _BOOL4 v2; // r3
  int v3; // r3
  int v4; // r4
  int v5; // r2
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  if ( v2 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(v6, 0x800u, "%s: input bad param\n", "api_miner_chain_eeprom");
      return sub_3AF5C(3, v6, 0, v3);
    }
  }
  else
  {
    v4 = result;
    if ( sub_1CF38(a2) )
      v5 = sub_74C1C();
    else
      v5 = sub_74C3C();
    return sub_72C40(v4, "eeprom", v5);
  }
  return result;
}
