int __fastcall sub_5A1C0(unsigned int a1)
{
  char v4[16]; // [sp+14h] [bp-810h] BYREF
  unsigned int v5; // [sp+814h] [bp-10h] BYREF
  __int16 v6; // [sp+818h] [bp-Ch]
  char v7; // [sp+81Ah] [bp-Ah]
  char v8; // [sp+81Bh] [bp-9h]
  int v9; // [sp+81Ch] [bp-8h]

  v9 = 0;
  if ( a1 <= 0xF )
  {
    if ( dword_531444[2 * a1] && dword_531444[2 * a1 + 1] )
    {
      return dword_531444[2 * a1];
    }
    else
    {
      v5 = a1;
      v6 = 0;
      v7 = 10;
      v8 = a1;
      v9 = sub_6A5F8(&v5);
      if ( v9 >= 0 )
      {
        dword_531444[2 * a1] = v9;
        dword_531444[2 * a1 + 1] = 1;
      }
      return v9;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_open", a1);
    sub_3AF5C(0, v4, 0, (int)v4);
    return -2147483391;
  }
}
