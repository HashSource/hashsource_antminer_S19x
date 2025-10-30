int __fastcall sub_67024(char a1)
{
  char v4[2048]; // [sp+Ch] [bp-808h] BYREF
  int v5; // [sp+80Ch] [bp-8h]

  v5 = 0;
  if ( dword_53153C || (v5 = sub_6731C(), v5 >= 0) )
  {
    if ( sub_62FF4() )
    {
      if ( a1 == 1 )
        v5 = sub_64DC4(dword_531538, 1);
      else
        v5 = sub_64DC4(dword_531538, 0);
    }
    else if ( a1 == 1 )
    {
      v5 = sub_658E8(dword_531538, 1u);
    }
    else
    {
      v5 = sub_658E8(dword_531538, 0);
    }
    if ( v5 < 0 )
    {
      strcpy(v4, "can nont set power watchdog\n");
      sub_3AF5C(0, v4, 0, (int)v4);
    }
    return v5;
  }
  else
  {
    snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_watchdog");
    sub_3AF5C(0, v4, 0, (int)v4);
    return v5;
  }
}
