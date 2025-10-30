int __fastcall sub_29F30(int a1, int a2)
{
  int v3; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  v5 = 0;
  sub_1C05C(a2, 2, &v5);
  v3 = sub_77C3C(v5, 0);
  return sub_7611C(a1, "eeprom_vol", v3);
}
