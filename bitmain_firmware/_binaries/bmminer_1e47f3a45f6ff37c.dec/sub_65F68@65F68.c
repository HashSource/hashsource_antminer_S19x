__int64 sub_65F68()
{
  char v2[12]; // [sp+0h] [bp-80Ch] BYREF
  __int64 v3; // [sp+800h] [bp-Ch]

  v3 = 0;
  if ( dword_53634C || (v3 = sub_666FC(), v3 >= 0) )
  {
    if ( !sub_619F0() )
    {
      return -1;
    }
    else
    {
      v3 = sub_64214(dword_536348);
      if ( v3 == 2147484416LL )
      {
        snprintf(v2, 0x800u, "can nont clear power status; ret = 0x%x\n", -2147482880);
        sub_3B6AC(0, v2, 0, (int)v2);
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
    sub_3B6AC(0, v2, 0, (int)v2);
    return v3;
  }
}
