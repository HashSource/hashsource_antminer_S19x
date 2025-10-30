int __fastcall sub_3C25C(const char *a1, int a2)
{
  char v5[52]; // [sp+0h] [bp-34h] BYREF

  if ( !strcmp(a1, "NBT2006-36") )
    return sub_3BDC8(a2);
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : %s not use dac\n", "init_dac", a1);
  snprintf(&byte_633E68[256], 0x100u, "%s not use dac", a1);
  sub_3CC5C(&byte_633E68[256], v5);
  return 0;
}
