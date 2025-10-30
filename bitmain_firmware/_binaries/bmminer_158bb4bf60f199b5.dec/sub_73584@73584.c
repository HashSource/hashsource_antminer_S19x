int __fastcall sub_73584(__int16 a1)
{
  int v2; // r5
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_1B14B0 )
    return sub_73100(dword_1B14AC, a1);
  v2 = sub_72E2C();
  if ( v2 >= 0 )
    return sub_73100(dword_1B14AC, a1);
  snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
  sub_47AB4(0, v4, 0);
  return v2;
}
