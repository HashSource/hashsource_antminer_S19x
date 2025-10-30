int __fastcall sub_29CAC(int result)
{
  int v1; // r4
  int v2; // r0
  int v3; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = result;
  if ( result )
  {
    v2 = sub_74258(dest);
    return sub_72C40(v1, "real_miner_type", v2);
  }
  else if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(v4, 0x800u, "%s: input bad json param\n", "api_miner_real_miner_type");
    return sub_3AF5C(3, v4, 0, v3);
  }
  return result;
}
