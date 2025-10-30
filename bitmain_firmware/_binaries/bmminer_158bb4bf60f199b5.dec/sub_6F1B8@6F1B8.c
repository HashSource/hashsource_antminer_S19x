void __fastcall sub_6F1B8(unsigned int a1)
{
  int v2; // r6
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_close", a1);
    sub_47AB4(0, s, 0);
  }
  else
  {
    v2 = 2 * a1;
    if ( dword_1B13B8[2 * a1] || dword_1B13B8[v2 + 1] )
    {
      sub_73804();
      dword_1B13B8[v2 + 1] = 0;
      dword_1B13B8[2 * a1] = 0;
    }
  }
}
