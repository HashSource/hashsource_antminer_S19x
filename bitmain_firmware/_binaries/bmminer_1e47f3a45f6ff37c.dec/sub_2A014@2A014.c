int __fastcall sub_2A014(int a1, int a2)
{
  int v3; // r0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  memset(v5, 0, sizeof(v5));
  sub_1C608(a2, (char *)v5, 0x10u);
  v3 = sub_77728(v5);
  return sub_7611C(a1, "eeprom_ft", v3);
}
