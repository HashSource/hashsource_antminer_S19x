int __fastcall sub_28E88(int result, unsigned int a2)
{
  _BOOL4 v2; // r3
  int v3; // r3
  int v4; // r4
  int v5; // r0
  int v6; // r0
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  if ( v2 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(v7, 0x800u, "%s: input bad param\n", "api_miner_chain_asic_num");
      return sub_3AF5C(3, v7, 0, v3);
    }
  }
  else
  {
    v4 = result;
    v5 = sub_26AEC(a2);
    v6 = sub_74774(v5, v5 >> 31);
    return sub_72C40(v4, "asic_num", v6);
  }
  return result;
}
