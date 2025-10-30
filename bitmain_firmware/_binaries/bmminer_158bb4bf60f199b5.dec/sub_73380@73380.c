void sub_73380()
{
  int v0; // [sp+0h] [bp-810h] BYREF
  __int16 v1; // [sp+4h] [bp-80Ch]
  _DWORD v2[2]; // [sp+8h] [bp-808h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( dword_1B14B0 || sub_72E2C() >= 0 )
  {
    v2[1] = 0;
    v2[0] = 0;
    v0 = 50637397;
    v1 = 7;
    if ( sub_72E84(dword_1B14AC, (unsigned __int8 *)&v0, 6u, (unsigned __int8 *)v2) )
    {
      strcpy(s, "get AD conversion N failed\n");
      sub_47AB4(0, s, 0);
      strcpy(s, "can nont get voltage\n");
      sub_47AB4(0, s, 0);
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
    sub_47AB4(0, s, 0);
  }
}
