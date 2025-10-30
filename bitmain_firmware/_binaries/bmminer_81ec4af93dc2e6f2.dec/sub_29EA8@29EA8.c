int __fastcall sub_29EA8(int result)
{
  _BOOL4 v1; // r4
  int v2; // r9
  int v3; // r8
  int v4; // r6
  int v5; // r3
  int v6; // r10
  int i; // r5
  int v8; // r7
  int j; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = result;
  if ( result )
  {
    v3 = sub_27464();
    result = sub_27478();
    if ( !v3 )
      v1 = 1;
    v4 = result;
    if ( v3 )
      v1 = result == 0;
    if ( v1 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "miner tpl is empty!!!");
        return sub_3AF5C(3, s, 0, *(_DWORD *)" empty!!!");
      }
    }
    else
    {
      v6 = sub_73538();
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "api_miner_asic_tpl r=%d,c=%d", v3, v4);
        sub_3AF5C(4, s, 0, v12);
      }
      if ( v3 > 0 )
      {
        for ( i = 0; i != v3; ++i )
        {
          v8 = sub_73538();
          if ( v4 > 0 )
          {
            for ( j = 0; j != v4; ++j )
            {
              v10 = sub_2748C(i, j);
              v11 = sub_74774(v10, v10 >> 31);
              sub_739D4(v8, v11);
            }
          }
          sub_739D4(v6, v8);
        }
      }
      return sub_72C40(v2, "tpl", v6);
    }
  }
  else if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(s, 0x800u, "%s: input bad json param\n", "api_miner_asic_tpl");
    return sub_3AF5C(3, s, 0, v5);
  }
  return result;
}
