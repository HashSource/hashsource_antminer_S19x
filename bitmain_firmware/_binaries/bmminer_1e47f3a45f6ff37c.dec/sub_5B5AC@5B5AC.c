int __fastcall sub_5B5AC(unsigned int a1, char a2, int a3, unsigned int a4)
{
  char v10[16]; // [sp+1Ch] [bp-810h] BYREF
  unsigned __int8 v11; // [sp+81Fh] [bp-Dh] BYREF
  int v12; // [sp+820h] [bp-Ch]
  unsigned int i; // [sp+824h] [bp-8h]

  v12 = 0;
  i = 0;
  if ( a1 <= 0xF )
  {
    if ( dword_536298[2 * a1 + 1] || (v12 = sub_5B160(a1), v12 >= 0) )
    {
      for ( i = 0; i < a4; ++i )
      {
        v11 = i + a2;
        v12 = sub_6F188(dword_536298[2 * a1], &v11, 1, a3 + i, 1, 1);
        if ( v12 != 1 )
        {
          snprintf(v10, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v11);
          sub_3B6AC(0, v10, 0, (int)v10);
          return -2147483392;
        }
      }
      usleep(0x7A120u);
      return 0;
    }
    else
    {
      snprintf(v10, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      sub_3B6AC(0, v10, 0, (int)v10);
      return v12;
    }
  }
  else
  {
    snprintf(v10, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    sub_3B6AC(0, v10, 0, (int)v10);
    return -2147483391;
  }
}
