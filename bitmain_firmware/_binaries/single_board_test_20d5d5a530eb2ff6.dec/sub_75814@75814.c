int __fastcall sub_75814(__int16 a1)
{
  int v2; // r5
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_65E464 )
    return sub_747BC(dword_65E460, a1);
  v2 = sub_74ABC();
  if ( v2 >= 0 )
    return sub_747BC(dword_65E460, a1);
  snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
  nullsub_8();
  return v2;
}
