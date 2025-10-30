int __fastcall sub_299FC(int a1, int a2)
{
  int v3; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  v5 = 0;
  sub_1A2CC(a2, 2, &v5);
  v3 = sub_74774(v5, 0);
  return sub_72C40(a1, "eeprom_freq", v3);
}
