int __fastcall sub_29FC8(int a1, int a2)
{
  int v3; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  v5 = 0;
  sub_1C55C(a2, &v5);
  v3 = sub_77C3C(v5, 0);
  return sub_7611C(a1, "eeprom_bin", v3);
}
