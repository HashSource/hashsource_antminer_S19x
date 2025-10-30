int sub_67D18()
{
  char v2[8]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  v3 = 0;
  if ( dword_53153C )
    return sub_646C4(dword_531538);
  v3 = sub_6731C();
  if ( v3 >= 0 )
    return sub_646C4(dword_531538);
  snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_fw_version");
  sub_3AF5C(0, v2, 0, (int)v2);
  return v3;
}
