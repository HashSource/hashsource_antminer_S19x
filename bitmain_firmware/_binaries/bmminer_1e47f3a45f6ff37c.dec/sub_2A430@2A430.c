int __fastcall sub_2A430(int result)
{
  int v1; // r10
  int v2; // r8
  bool v3; // zf
  int v4; // r6
  int v5; // r4
  int v6; // r9
  int i; // r5
  int v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = result;
  if ( result )
  {
    v2 = sub_279E0();
    result = sub_279F4();
    v3 = v2 == 0;
    if ( v2 )
      v3 = result == 0;
    v4 = result;
    if ( v3 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "miner tpl is empty!!!");
        return sub_3B6AC(3, s, 0, *(_DWORD *)" empty!!!");
      }
    }
    else
    {
      v5 = 0;
      v6 = sub_76A14();
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "api_miner_asic_tpl r=%d,c=%d", v2, v4);
        sub_3B6AC(4, s, 0, v13);
      }
      if ( v2 > 0 )
      {
        for ( i = 0; i != v2; ++i )
        {
          v8 = sub_76A14();
          if ( v4 > 0 )
            v5 = 0;
          v9 = v8;
          if ( v4 > 0 )
          {
            do
            {
              v10 = sub_27A08(i, v5++);
              v11 = sub_77C3C(v10, v10 >> 31);
              sub_76EA4(v9, v11);
            }
            while ( v5 != v4 );
          }
          sub_76EA4(v6, v9);
        }
      }
      return sub_7611C(v1, "tpl", v6);
    }
  }
  else if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    snprintf(s, 0x800u, "%s: input bad json param\n", "api_miner_asic_tpl");
    return sub_3B6AC(3, s, 0, v12);
  }
  return result;
}
