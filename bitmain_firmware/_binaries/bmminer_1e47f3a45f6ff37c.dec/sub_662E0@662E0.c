int sub_662E0()
{
  char v2[8]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  v3 = 0;
  if ( dword_53634C || (v3 = sub_666FC(), v3 >= 0) )
  {
    if ( dword_536350 == 193 )
    {
      v3 = sub_657E8(dword_536348);
      if ( v3 == -2147482880 )
      {
        snprintf(v2, 0x800u, "can nont get power ret = 0x%x\n", -2147482880);
        sub_3B6AC(0, v2, 0, (int)v2);
        return -1;
      }
      else
      {
        return v3;
      }
    }
    else
    {
      return -1;
    }
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_miner_power");
    sub_3B6AC(0, v2, 0, (int)v2);
    return v3;
  }
}
