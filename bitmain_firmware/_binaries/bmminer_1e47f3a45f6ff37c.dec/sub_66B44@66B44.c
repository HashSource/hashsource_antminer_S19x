int sub_66B44()
{
  char v2[8]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  v3 = 0;
  if ( dword_53634C || (v3 = sub_666FC(), v3 >= 0) )
  {
    v3 = sub_645C0(dword_536348);
    if ( v3 > 0 )
      dword_536350 = v3;
    return v3;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
    sub_3B6AC(0, v2, 0, (int)v2);
    return v3;
  }
}
