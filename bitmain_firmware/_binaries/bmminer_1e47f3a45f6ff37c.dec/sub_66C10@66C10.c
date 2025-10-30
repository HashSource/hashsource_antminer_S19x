int sub_66C10()
{
  char v2[8]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  dword_53634C = 0;
  v3 = sub_666FC();
  if ( v3 >= 0 )
  {
    v3 = dword_536350;
    return dword_536350;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "power_need_open");
    sub_3B6AC(0, v2, 0, (int)v2);
    return v3;
  }
}
