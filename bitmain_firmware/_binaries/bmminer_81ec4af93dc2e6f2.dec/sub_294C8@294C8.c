int __fastcall sub_294C8(int result, unsigned int a2)
{
  unsigned int v2; // r6
  int v3; // r3
  int v4; // r8
  int v5; // r2
  int v6; // r5
  __int64 *v7; // r4
  __int64 v8; // t1
  __int64 v9; // r0
  int v10; // r0
  unsigned int v11; // r10
  unsigned int v12; // r9
  int v13; // r2
  unsigned int v14; // r3
  __int64 v15; // r0
  int v16; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  if ( v2 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_rate_array");
      return sub_3AF5C(3, s, 0, v3);
    }
  }
  else
  {
    v4 = result;
    v6 = sub_73538();
    if ( (unsigned int)dword_B12A8 > 0x17 )
    {
      v11 = dword_B12A8 % 0x18u;
      v12 = dword_B12A8 % 0x18u + 24;
      do
      {
        v13 = -1431655765 * v11;
        v14 = v11 % 0x18;
        ++v11;
        v15 = sub_8CAF4(dword_5BAB28[48 * a2 + 2 * v14], dword_5BAB28[48 * a2 + 1 + 2 * v14], v13);
        v16 = sub_74774(v15, HIDWORD(v15));
        sub_739D4(v6, v16);
      }
      while ( v12 != v11 );
    }
    else if ( dword_B12A8 )
    {
      v7 = (__int64 *)&dword_5BAB28[48 * a2];
      do
      {
        v8 = *v7++;
        ++v2;
        v9 = sub_8CAF4(v8, HIDWORD(v8), v5);
        v10 = sub_74774(v9, HIDWORD(v9));
        sub_739D4(v6, v10);
      }
      while ( v2 < dword_B12A8 );
    }
    return sub_72C40(v4, "rate_array", v6);
  }
  return result;
}
