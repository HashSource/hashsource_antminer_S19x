int __fastcall sub_3C2CC(const char *a1, int a2)
{
  int v3; // r4
  int v6; // [sp+4h] [bp-34h] BYREF
  char v7[48]; // [sp+8h] [bp-30h] BYREF

  v3 = 0;
  v6 = 0;
  if ( strcmp(a1, "NBT2006-36") )
  {
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf("%s : %s not use dac\n", "set_dac_voltage", a1);
    snprintf(&byte_633E68[1024], 0x100u, "%s not use dac", a1);
    sub_3CC5C(&byte_633E68[1024], v7);
    return v3;
  }
  if ( sub_3BEB8(a1, &v6) )
  {
    v3 = sub_3C1E8(a1, a2, v6);
    if ( !v3 )
    {
      sub_1E938(v7, 0x30u);
      printf("%s ", v7);
      printf("%s : fail\n", "set_dac_voltage");
      strcpy(&byte_633E68[768], "fail");
      sub_3CC5C(&byte_633E68[768], v7);
    }
    return v3;
  }
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : fail\n", "set_dac_voltage");
  strcpy(&byte_633E68[512], "fail");
  sub_3CC5C(&byte_633E68[512], v7);
  return 0;
}
