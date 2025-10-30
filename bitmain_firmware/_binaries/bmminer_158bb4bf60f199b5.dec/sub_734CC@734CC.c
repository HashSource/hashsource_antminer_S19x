int sub_734CC()
{
  double v0; // d0
  unsigned int v1; // r1
  int v2; // r5
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_1B14B0 || (v2 = sub_72E2C(), v2 >= 0) )
  {
    v1 = (int)(765.411764 - v0 * 35.833333);
    if ( v1 > 0xFF )
      return -2147482879;
    else
      return sub_73100(dword_1B14AC, (unsigned __int8)v1);
  }
  else
  {
    snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    sub_47AB4(0, v4, 0);
  }
  return v2;
}
