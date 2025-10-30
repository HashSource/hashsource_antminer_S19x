int __fastcall sub_70954(int a1)
{
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_open", a1);
  nullsub_8();
  return -2147483391;
}
