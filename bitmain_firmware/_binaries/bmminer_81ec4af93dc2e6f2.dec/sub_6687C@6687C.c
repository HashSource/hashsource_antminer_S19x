int sub_6687C()
{
  char v2[2048]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  v3 = 0;
  if ( dword_53153C || (v3 = sub_6731C(), v3 >= 0) )
  {
    if ( sub_62FF4() )
    {
      v3 = sub_64EF4(dword_531538);
      if ( v3 )
      {
        strcpy(v2, "can nont get power status\n");
        sub_3AF5C(0, v2, 0, (int)v2);
        return v3;
      }
    }
    else if ( sub_63068() )
    {
      v3 = sub_65CD8(dword_531538);
    }
    else
    {
      v3 = sub_65B08(dword_531538);
    }
    if ( v3 == -2147482880 )
    {
      strcpy(v2, "can nont get power status\n");
      sub_3AF5C(0, v2, 0, (int)v2);
    }
    return v3;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_power_status");
    sub_3AF5C(0, v2, 0, (int)v2);
    return v3;
  }
}
