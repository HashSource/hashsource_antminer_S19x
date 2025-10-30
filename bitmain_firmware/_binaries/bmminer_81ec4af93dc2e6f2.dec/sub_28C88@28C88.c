int __fastcall sub_28C88(int result, unsigned int a2)
{
  _BOOL4 v2; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r0
  int v6; // r0
  _DWORD v7[4]; // [sp+0h] [bp-810h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  memset(v7, 0, sizeof(v7));
  if ( v2 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_rate_ideal");
      return sub_3AF5C(3, s, 0, v3);
    }
  }
  else
  {
    v4 = result;
    v5 = sub_224CC(a2);
    snprintf((char *)v7, 0x10u, "%d", v5);
    v6 = sub_74258(v7);
    return sub_72C40(v4, "rate_ideal", v6);
  }
  return result;
}
