int __fastcall sub_2971C(int result, unsigned int a2)
{
  _BOOL4 v2; // r3
  int v3; // r3
  int v4; // r4
  int v5; // r0
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  if ( v2 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(v6, 0x800u, "%s: input bad param\n", "api_miner_chain_nonce");
      return sub_3AF5C(3, v6, 0, v3);
    }
  }
  else
  {
    v4 = result;
    v5 = sub_74774(dword_B42F8[a2], dword_B42F8[a2] >> 31);
    return sub_72C40(v4, "nonce", v5);
  }
  return result;
}
