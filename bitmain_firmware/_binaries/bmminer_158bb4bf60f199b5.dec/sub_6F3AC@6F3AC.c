int __fastcall sub_6F3AC(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  int v8; // r8
  int v9; // r0
  int v10; // r9
  unsigned __int8 v12; // [sp+Fh] [bp-801h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    v10 = -2147483391;
    sub_47AB4(0, s, 0);
    return v10;
  }
  if ( !dword_1B13B8[2 * a1 + 1] )
  {
    v10 = sub_6F13C(a1);
    if ( v10 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      sub_47AB4(0, s, 0);
      return v10;
    }
  }
  if ( a4 )
  {
    v8 = a3 + a4;
    while ( 1 )
    {
      v9 = dword_1B13B8[2 * a1];
      ++a3;
      v12 = a2++;
      if ( sub_73984(v9, &v12) != 1 )
        break;
      if ( v8 == a3 )
        goto LABEL_10;
    }
    v10 = -2147483392;
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v12);
    sub_47AB4(0, s, 0);
    return v10;
  }
LABEL_10:
  usleep((__useconds_t)"d asic, will power off hash board %d\n");
  return 0;
}
