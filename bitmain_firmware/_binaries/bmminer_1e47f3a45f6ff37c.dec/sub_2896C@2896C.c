int __fastcall sub_2896C(int result)
{
  int v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = result;
  if ( result )
  {
    v2 = sub_40F54(result);
    v3 = sub_77C3C(v2, 0);
    return sub_7611C(v1, "inited", v3);
  }
  else if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    snprintf(v5, 0x800u, "%s: input bad json param\n", "api_miner_inited");
    return sub_3B6AC(3, v5, 0, v4);
  }
  return result;
}
