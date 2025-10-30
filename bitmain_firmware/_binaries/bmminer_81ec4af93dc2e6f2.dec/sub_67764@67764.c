int sub_67764()
{
  char v2[8]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  v3 = 0;
  if ( dword_53153C || (v3 = sub_6731C(), v3 >= 0) )
  {
    v3 = sub_65660(dword_531538);
    if ( v3 > 0 )
      dword_531540 = v3;
    return v3;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
    sub_3AF5C(0, v2, 0, (int)v2);
    return v3;
  }
}
