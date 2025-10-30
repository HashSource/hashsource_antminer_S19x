int __fastcall sub_3C1E8(const char *a1, int a2, unsigned __int16 a3)
{
  char v7[48]; // [sp+0h] [bp-30h] BYREF

  if ( !strcmp(a1, "NBT2006-36") )
    return sub_3C170(a2, a3);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : %s not use dac\n", "set_voltage_by_N", a1);
  snprintf(byte_633E68, 0x100u, "%s not use dac", a1);
  sub_3CC5C(byte_633E68, v7);
  return 0;
}
