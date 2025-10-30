int sub_670F8()
{
  char v2[8]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  v3 = 0;
  if ( dword_53634C )
    return sub_632F4(dword_536348);
  v3 = sub_666FC();
  if ( v3 >= 0 )
    return sub_632F4(dword_536348);
  snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_fw_version");
  sub_3B6AC(0, v2, 0, (int)v2);
  return v3;
}
