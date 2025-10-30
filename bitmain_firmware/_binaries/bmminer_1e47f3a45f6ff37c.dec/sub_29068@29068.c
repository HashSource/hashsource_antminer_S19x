int __fastcall sub_29068(int result)
{
  int v1; // r7
  int v2; // r5
  int v3; // r6
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r3
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = result;
  if ( result )
  {
    v2 = sub_76A14();
    v3 = sub_26C70();
    if ( v3 > 0 )
    {
      v4 = 0;
      do
      {
        v5 = v4++;
        v6 = sub_26DC0(v5);
        v7 = sub_77C3C(v6, v6 >> 31);
        sub_76EA4(v2, v7);
      }
      while ( v4 != v3 );
    }
    return sub_7611C(v1, "fan", v2);
  }
  else if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    snprintf(v9, 0x800u, "%s: input bad json param\n", "api_miner_fan_speed");
    return sub_3B6AC(3, v9, 0, v8);
  }
  return result;
}
