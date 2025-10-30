int __fastcall sub_29350(int result, unsigned int a2)
{
  int v2; // r4
  int v3; // r3
  int v5; // r6
  int v6; // r7
  __int16 v7; // r0
  int v8; // r0
  __int16 v9; // r0
  int v10; // r0
  char v11[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  if ( v2 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(v11, 0x800u, "%s: input bad param\n", "api_miner_chain_temp_pcb");
      return sub_3AF5C(3, v11, 0, v3);
    }
  }
  else
  {
    v5 = result;
    v6 = sub_73538();
    if ( dword_B413C == 1 || dword_4B6CAC <= 0 )
    {
      while ( sub_265EC() > v2 )
      {
        v9 = sub_18828(a2, (unsigned __int8)v2++);
        v10 = sub_74774(v9, (unsigned __int64)v9 >> 32);
        sub_739D4(v6, v10);
      }
    }
    else
    {
      while ( sub_17674() > v2 )
      {
        if ( dword_B0F00 == 3 )
          v7 = sub_18898(a2, (unsigned __int8)v2);
        else
          v7 = sub_188E4(a2, (unsigned __int8)v2);
        ++v2;
        v8 = sub_74774(v7, (unsigned __int64)v7 >> 32);
        sub_739D4(v6, v8);
      }
    }
    return sub_72C40(v5, "temp_pcb", v6);
  }
  return result;
}
