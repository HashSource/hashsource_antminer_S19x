void sub_65B38()
{
  char v0[2048]; // [sp+4h] [bp-808h] BYREF
  int v1; // [sp+804h] [bp-8h]

  v1 = 0;
  if ( dword_53634C || (v1 = sub_666FC(), v1 >= 0) )
  {
    v1 = sub_64674(dword_536348);
    if ( v1 >= 0 )
    {
      sub_65A40();
    }
    else
    {
      strcpy(v0, "can nont get voltage\n");
      sub_3B6AC(0, v0, 0, (int)v0);
    }
  }
  else
  {
    snprintf(v0, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_sample_voltage");
    sub_3B6AC(0, v0, 0, (int)v0);
  }
}
