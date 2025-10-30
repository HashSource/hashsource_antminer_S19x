int __fastcall sub_2915C(int result, unsigned int a2)
{
  _BOOL4 v2; // r3
  int v3; // r3
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r5
  __int16 v9; // r0
  int v10; // r0
  bool v11; // cc
  int v12; // r1
  __int16 v13; // r0
  int v14; // r0
  int v15; // r3
  char v16[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  if ( !v2 )
  {
    v5 = result;
    v6 = sub_73538();
    switch ( dword_B0F00 )
    {
      case 0:
        v7 = sub_265EC();
        break;
      case 1:
      case 2:
        v7 = sub_17674();
        break;
      case 3:
        v7 = sub_26DF8();
        break;
      default:
        v7 = 0;
        break;
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v16, 0x800u, "sensor num = %d\n", v7);
      sub_3AF5C(4, v16, 0, v15);
    }
    if ( dword_B413C == 1 )
    {
      v8 = 0;
    }
    else
    {
      v8 = 0;
      if ( dword_4B6CAC > 0 )
      {
        while ( 1 )
        {
          v11 = sub_17674() <= v8;
          v12 = (unsigned __int8)v8++;
          if ( v11 )
            break;
          v9 = sub_188E4(a2, v12);
          v10 = sub_74774(v9, (unsigned __int64)v9 >> 32);
          sub_739D4(v6, v10);
        }
        return sub_72C40(v5, "temp_chip", v6);
      }
    }
    while ( sub_265EC() > v8 )
    {
      v13 = sub_18828(a2, (unsigned __int8)v8++);
      v14 = sub_74774(v13, (unsigned __int64)v13 >> 32);
      sub_739D4(v6, v14);
    }
    return sub_72C40(v5, "temp_chip", v6);
  }
  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(v16, 0x800u, "%s: input bad param\n", "api_miner_chain_temp_chip");
    return sub_3AF5C(3, v16, 0, v3);
  }
  return result;
}
