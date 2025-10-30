int __fastcall sub_2A234(int result)
{
  int v1; // r4
  int v2; // r0
  int v3; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = result;
  if ( result )
  {
    v2 = sub_77728(byte_B6BEC);
    return sub_7611C(v1, "real_miner_type", v2);
  }
  else if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    snprintf(v4, 0x800u, "%s: input bad json param\n", "api_miner_real_miner_type");
    return sub_3B6AC(3, v4, 0, v3);
  }
  return result;
}
