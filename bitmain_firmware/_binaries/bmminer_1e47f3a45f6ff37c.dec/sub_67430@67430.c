int __fastcall sub_67430(unsigned __int8 a1)
{
  char v4[8]; // [sp+Ch] [bp-808h] BYREF
  int v5; // [sp+80Ch] [bp-8h]

  v5 = 0;
  if ( dword_53634C )
    return sub_63F78(dword_536348, a1);
  v5 = sub_666FC();
  if ( v5 >= 0 )
    return sub_63F78(dword_536348, a1);
  snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
  sub_3B6AC(0, v4, 0, (int)v4);
  return v5;
}
