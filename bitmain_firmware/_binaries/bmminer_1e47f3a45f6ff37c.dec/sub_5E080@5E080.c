int __fastcall sub_5E080(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r0
  char v8[4]; // [sp+18h] [bp-814h] BYREF
  int v9; // [sp+818h] [bp-14h] BYREF
  __int16 v10; // [sp+81Ch] [bp-10h]
  char v11; // [sp+81Fh] [bp-Dh]
  int v12; // [sp+820h] [bp-Ch]
  unsigned __int16 v13; // [sp+824h] [bp-8h]
  __int16 v14; // [sp+826h] [bp-6h]

  v11 = 4;
  v9 = 923052629;
  v12 = -1;
  v14 = 59;
  v10 = 15104;
  v13 = 6;
  v3 = sub_6F0DC(a1, &v9, 6);
  if ( v3 == v13 )
  {
    usleep(0x2710u);
    if ( sub_6F030(a1, a2, a3) == a3 )
    {
      if ( *a2 == 11 && a2[1] == 55 )
      {
        v13 = 0;
        v14 = 0;
        while ( v13 < a3 - 2 )
          v14 += a2[v13++];
        if ( HIBYTE(v14) == a2[a3 - 2] && (unsigned __int8)v14 == a2[a3 - 1] )
        {
          return a3;
        }
        else
        {
          snprintf(v8, 0x800u, "%s failed 2!\n", "_read_an_voltage");
          sub_3B6AC(0, v8, 0, (int)v8);
        }
      }
      else
      {
        snprintf(
          v8,
          0x800u,
          "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
          "_read_an_voltage",
          *a2,
          a2[1]);
        sub_3B6AC(0, v8, 0, (int)v8);
      }
    }
    else
    {
      snprintf(v8, 0x800u, "%s read iic err\n", "_read_an_voltage");
      sub_3B6AC(0, v8, 0, (int)v8);
    }
  }
  else
  {
    snprintf(v8, 0x800u, "%s write iic err\n", "_read_an_voltage");
    sub_3B6AC(0, v8, 0, (int)v8);
  }
  return v12;
}
