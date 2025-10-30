int __fastcall sub_295C0(int result, unsigned int a2)
{
  int v3; // r4
  int v4; // r3
  int v5; // r8
  int v6; // r7
  __int16 v7; // r0
  int v8; // r0
  char v9[2048]; // [sp+0h] [bp-800h] BYREF

  v3 = result == 0;
  if ( a2 > 3 )
    v3 = 1;
  if ( v3 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(v9, 0x800u, "%s: input bad param\n", "api_miner_chain_temp_pic");
      return sub_3B6AC(3, v9, 0, v4);
    }
  }
  else
  {
    v5 = result;
    v6 = sub_76A14();
    while ( v3 < sub_179C4() )
    {
      if ( dword_B3C70 == 3 )
        v7 = sub_18BD4(a2, (unsigned __int8)v3);
      else
        v7 = sub_18CD0(a2, (unsigned __int8)v3);
      ++v3;
      v8 = sub_77C3C(v7, (unsigned __int64)v7 >> 32);
      sub_76EA4(v6, v8);
    }
    return sub_7611C(v5, "temp_pic", v6);
  }
  return result;
}
