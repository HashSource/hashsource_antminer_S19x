int __fastcall sub_298C8(int result, unsigned int a2)
{
  int v2; // r4
  int v4; // r3
  int v5; // r7
  int v6; // r6
  __int16 v7; // r0
  int v8; // r0
  __int16 v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  char v14[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = a2 > 3 || result == 0;
  if ( v2 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(v14, 0x800u, "%s: input bad param\n", "api_miner_chain_temp_pcb");
      return sub_3B6AC(3, v14, 0, v4);
    }
  }
  else
  {
    v5 = result;
    v6 = sub_76A14();
    if ( dword_B6EB4 == 1 || dword_533B38 <= 0 )
    {
      while ( 1 )
      {
        v11 = sub_26AF4();
        v12 = (unsigned __int8)v2;
        if ( v2++ >= v11 )
          break;
        v9 = sub_18C14(a2, v12);
        v10 = sub_77C3C(v9, (unsigned __int64)v9 >> 32);
        sub_76EA4(v6, v10);
      }
    }
    else
    {
      while ( v2 < sub_179C4() )
      {
        if ( dword_B3C70 == 3 )
          v7 = sub_18C84(a2, (unsigned __int8)v2);
        else
          v7 = sub_18CD0(a2, (unsigned __int8)v2);
        ++v2;
        v8 = sub_77C3C(v7, (unsigned __int64)v7 >> 32);
        sub_76EA4(v6, v8);
      }
    }
    return sub_7611C(v5, "temp_pcb", v6);
  }
  return result;
}
