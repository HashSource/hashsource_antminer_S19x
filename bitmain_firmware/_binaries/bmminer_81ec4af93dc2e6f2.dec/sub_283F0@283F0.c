int __fastcall sub_283F0(int result)
{
  int v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = result;
  if ( result )
  {
    v2 = sub_3F36C(result);
    v3 = sub_74774(v2, 0);
    return sub_72C40(v1, "inited", v3);
  }
  else if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(v5, 0x800u, "%s: input bad json param\n", "api_miner_inited");
    return sub_3AF5C(3, v5, 0, v4);
  }
  return result;
}
