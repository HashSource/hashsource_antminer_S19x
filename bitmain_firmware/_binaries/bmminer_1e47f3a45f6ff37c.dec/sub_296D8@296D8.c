int __fastcall sub_296D8(int result, unsigned int a2)
{
  _BOOL4 v2; // r3
  int v4; // r3
  int v5; // r7
  int v6; // r6
  int v7; // r0
  int v8; // r5
  __int16 v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  bool v13; // cc
  __int16 v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r3
  char v19[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = result == 0;
  if ( a2 > 3 )
    v2 = 1;
  if ( !v2 )
  {
    v5 = result;
    v6 = sub_76A14();
    switch ( dword_B3C70 )
    {
      case 0:
        v7 = sub_26AF4();
        break;
      case 1:
      case 2:
        v7 = sub_179C4();
        break;
      case 3:
        v7 = sub_27348();
        break;
      default:
        v7 = 0;
        break;
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(v19, 0x800u, "sensor num = %d\n", v7);
      sub_3B6AC(4, v19, 0, v18);
    }
    if ( dword_B6EB4 == 1 )
    {
      v8 = 0;
    }
    else
    {
      v8 = 0;
      if ( dword_533B38 > 0 )
      {
        while ( 1 )
        {
          v11 = sub_179C4();
          v12 = (unsigned __int8)v8;
          v13 = v8++ < v11;
          if ( !v13 )
            break;
          v9 = sub_18CD0(a2, v12);
          v10 = sub_77C3C(v9, (unsigned __int64)v9 >> 32);
          sub_76EA4(v6, v10);
        }
        return sub_7611C(v5, "temp_chip", v6);
      }
    }
    while ( 1 )
    {
      v16 = sub_26AF4();
      v17 = (unsigned __int8)v8;
      v13 = v8++ < v16;
      if ( !v13 )
        break;
      v14 = sub_18C14(a2, v17);
      v15 = sub_77C3C(v14, (unsigned __int64)v14 >> 32);
      sub_76EA4(v6, v15);
    }
    return sub_7611C(v5, "temp_chip", v6);
  }
  if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    snprintf(v19, 0x800u, "%s: input bad param\n", "api_miner_chain_temp_chip");
    return sub_3B6AC(3, v19, 0, v4);
  }
  return result;
}
