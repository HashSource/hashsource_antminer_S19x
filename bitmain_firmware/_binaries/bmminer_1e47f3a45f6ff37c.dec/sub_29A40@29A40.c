int __fastcall sub_29A40(int result, unsigned int a2)
{
  unsigned int v2; // r4
  int v3; // r3
  int v4; // r6
  int v5; // r5
  __int64 *v6; // r7
  __int64 v7; // t1
  __int64 v8; // r0
  int v9; // r0
  signed int v10; // r10
  signed int v11; // r9
  int v12; // r3
  __int64 v13; // r0
  int v14; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = result == 0;
  if ( a2 > 3 )
    v2 = 1;
  if ( v2 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_rate_array");
      return sub_3B6AC(3, s, 0, v3);
    }
  }
  else
  {
    v4 = result;
    v5 = sub_76A14();
    if ( (unsigned int)dword_B4018 > 0x17 )
    {
      v10 = dword_B4018 % 0x18u;
      v11 = dword_B4018 % 0x18u + 23;
      do
      {
        v12 = v10 % 24;
        ++v10;
        v13 = sub_8FE5C(dword_5BF9E0[48 * a2 + 2 * v12], dword_5BF9E0[48 * a2 + 1 + 2 * v12]);
        v14 = sub_77C3C(v13, HIDWORD(v13));
        sub_76EA4(v5, v14);
      }
      while ( v10 <= v11 );
    }
    else if ( dword_B4018 )
    {
      v6 = (__int64 *)&dword_5BF9E0[48 * a2];
      do
      {
        v7 = *v6++;
        ++v2;
        v8 = sub_8FE5C(v7, HIDWORD(v7));
        v9 = sub_77C3C(v8, HIDWORD(v8));
        sub_76EA4(v5, v9);
      }
      while ( v2 < dword_B4018 );
    }
    return sub_7611C(v4, "rate_array", v5);
  }
  return result;
}
