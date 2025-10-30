int sub_65C64()
{
  char v2[2048]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  v3 = 0;
  if ( dword_53634C || (v3 = sub_666FC(), v3 >= 0) )
  {
    if ( sub_6197C() )
    {
      v3 = sub_63C78(dword_536348);
      if ( v3 )
      {
        strcpy(v2, "can nont get power status\n");
        sub_3B6AC(0, v2, 0, (int)v2);
        return v3;
      }
    }
    else if ( sub_619F0() )
    {
      v3 = sub_64DD8(dword_536348);
    }
    else
    {
      v3 = sub_64B80(dword_536348);
    }
    if ( v3 == -2147482880 )
    {
      strcpy(v2, "can nont get power status\n");
      sub_3B6AC(0, v2, 0, (int)v2);
    }
    return v3;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_power_status");
    sub_3B6AC(0, v2, 0, (int)v2);
    return v3;
  }
}
