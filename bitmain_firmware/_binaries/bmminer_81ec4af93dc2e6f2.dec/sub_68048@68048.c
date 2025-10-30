int __fastcall sub_68048(unsigned __int8 a1)
{
  char v4[8]; // [sp+Ch] [bp-808h] BYREF
  int v5; // [sp+80Ch] [bp-8h]

  v5 = 0;
  if ( dword_53153C )
    return sub_6514C(dword_531538, a1);
  v5 = sub_6731C();
  if ( v5 >= 0 )
    return sub_6514C(dword_531538, a1);
  snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
  sub_3AF5C(0, v4, 0, (int)v4);
  return v5;
}
