int __fastcall sub_3C018(const char *a1, int a2, double *a3)
{
  int v6; // r3
  bool v7; // cf
  int v8; // r4
  char v10[52]; // [sp+8h] [bp-34h] BYREF

  if ( !strcmp(a1, "NBT2006-36") )
  {
    if ( a2 >= 1024 )
    {
      sub_1E938(v10, 0x30u);
      printf("%s ", v10);
      printf("%s : N can't bigger than 1023\n", "convert_N_to_V");
      strcpy(&byte_633968[256], "N can't bigger than 1023");
      sub_3CC5C(&byte_633968[256], v10);
      return 0;
    }
    else
    {
      v6 = a2 + 1023;
      v7 = a2 < 0;
      v8 = a2 & ~(a2 >> 31);
      if ( v7 )
        v8 = v6;
      *a3 = 15.32 - (double)(v8 >> 10) * 4.69;
      sub_1E938(v10, 0x30u);
      printf("%s ", v10);
      printf("%s : %s dac voltage: %f\n", "convert_N_to_V", a1, *a3);
      snprintf(&byte_633968[512], 0x100u, "%s dac voltage: %f", a1, *a3);
      sub_3CC5C(&byte_633968[512], v10);
      return 1;
    }
  }
  else
  {
    sub_1E938(v10, 0x30u);
    printf("%s ", v10);
    printf("%s : Do not support %s\n", "convert_N_to_V", a1);
    snprintf(&byte_633968[768], 0x100u, "Do not support %s", a1);
    sub_3CC5C(&byte_633968[768], v10);
    return 0;
  }
}
