int __fastcall sub_29A94(int a1, int a2)
{
  int v3; // r0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  memset(v5, 0, sizeof(v5));
  sub_1C730(a2, (char *)v5, 0x10u);
  v3 = sub_74258(v5);
  return sub_72C40(a1, "eeprom_ft", v3);
}
