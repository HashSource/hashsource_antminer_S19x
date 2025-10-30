void __fastcall sub_709E4(unsigned int a1)
{
  int v2; // r6
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_close", a1);
    nullsub_8();
  }
  else
  {
    v2 = 2 * a1;
    if ( dword_65E368[2 * a1] || dword_65E368[v2 + 1] )
    {
      sub_76698();
      dword_65E368[v2 + 1] = 0;
      dword_65E368[2 * a1] = 0;
    }
  }
}
