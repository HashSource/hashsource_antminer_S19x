int sub_757C8()
{
  int v0; // r5
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_65E464 )
    return sub_744D8(dword_65E460);
  v0 = sub_74ABC();
  if ( v0 >= 0 )
    return sub_744D8(dword_65E460);
  snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_fw_version");
  nullsub_8();
  return v0;
}
