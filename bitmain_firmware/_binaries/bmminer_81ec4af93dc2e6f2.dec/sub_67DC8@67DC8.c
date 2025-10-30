unsigned int sub_67DC8()
{
  double v0; // d0
  char v3[2048]; // [sp+4h] [bp-808h] BYREF
  int v4; // [sp+804h] [bp-8h]

  v4 = 0;
  if ( sub_62FF4() )
    return sub_638A8();
  if ( dword_53153C || (v4 = sub_6731C(), v4 >= 0) )
  {
    v4 = sub_64F80(dword_531538);
    if ( v4 >= 0 )
    {
      sub_68C08(v4);
      return (unsigned int)(v0 * 100.0);
    }
    else
    {
      strcpy(v3, "can nont get voltage\n");
      sub_3AF5C(0, v3, 0, (int)v3);
      return v4;
    }
  }
  else
  {
    snprintf(v3, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
    sub_3AF5C(0, v3, 0, (int)v3);
    return v4;
  }
}
