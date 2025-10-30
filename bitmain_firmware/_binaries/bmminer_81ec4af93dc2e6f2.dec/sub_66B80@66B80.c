__int64 sub_66B80()
{
  char v2[12]; // [sp+0h] [bp-80Ch] BYREF
  __int64 v3; // [sp+800h] [bp-Ch]

  v3 = 0;
  if ( dword_53153C || (v3 = sub_6731C(), v3 >= 0) )
  {
    if ( !sub_63068() )
    {
      return -1;
    }
    else
    {
      v3 = sub_65364(dword_531538);
      if ( v3 == 2147484416LL )
      {
        snprintf(v2, 0x800u, "can nont clear power status; ret = 0x%x\n", -2147482880);
        sub_3AF5C(0, v2, 0, (int)v2);
        return -1;
      }
      else
      {
        return v3;
      }
    }
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_clear_power_status");
    sub_3AF5C(0, v2, 0, (int)v2);
    return v3;
  }
}
