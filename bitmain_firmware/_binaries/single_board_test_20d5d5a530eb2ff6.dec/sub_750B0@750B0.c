void sub_750B0()
{
  unsigned __int8 v0[4]; // [sp+8h] [bp-814h] BYREF
  __int16 v1; // [sp+Ch] [bp-810h]
  _DWORD v2[2]; // [sp+10h] [bp-80Ch] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( dword_65E464 || sub_74ABC() >= 0 )
  {
    v0[1] = -86;
    v0[0] = 85;
    v0[2] = 4;
    v0[3] = 4;
    v2[0] = 0;
    v2[1] = 0;
    v1 = 8;
    if ( sub_73B38(dword_65E460, v0, 6u, (unsigned __int8 *)v2, 8u) )
    {
      strcpy(s, "get sample N failed\n");
      nullsub_8();
      strcpy(s, "can nont get voltage\n");
      nullsub_8();
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_sample_voltage");
    nullsub_8();
  }
}
