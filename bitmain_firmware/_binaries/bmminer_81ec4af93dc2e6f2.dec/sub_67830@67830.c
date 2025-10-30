int sub_67830()
{
  char v2[8]; // [sp+4h] [bp-808h] BYREF
  int v3; // [sp+804h] [bp-8h]

  dword_53153C = 0;
  v3 = sub_6731C();
  if ( v3 >= 0 )
  {
    v3 = dword_531540;
    return dword_531540;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "power_need_open");
    sub_3AF5C(0, v2, 0, (int)v2);
    return v3;
  }
}
