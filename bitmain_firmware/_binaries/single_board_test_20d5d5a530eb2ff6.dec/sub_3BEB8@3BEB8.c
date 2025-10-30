int __fastcall sub_3BEB8(const char *a1, _DWORD *a2)
{
  double v2; // d0
  char v6[48]; // [sp+8h] [bp-30h] BYREF

  if ( !strcmp(a1, "NBT2006-36") )
  {
    if ( v2 > 15.32 )
    {
      sub_1E938(v6, 0x30u);
      printf("%s ", v6);
      printf("%s : voltage can't bigger than 15.32v\n", "convert_V_to_N");
      strcpy(byte_633768, "voltage can't bigger than 15.32v");
      sub_3CC5C(byte_633768, v6);
      return 0;
    }
    else
    {
      *a2 = (unsigned int)((15.32 - v2) / 4.69000006 * 1024.0);
      sub_1E938(v6, 0x30u);
      printf("%s ", v6);
      printf("%s : %s dac voltage N: %d\n", "convert_V_to_N", a1, *a2);
      snprintf(byte_633868, 0x100u, "%s dac voltage N: %d", a1, *a2);
      sub_3CC5C(byte_633868, v6);
      return 1;
    }
  }
  else
  {
    sub_1E938(v6, 0x30u);
    printf("%s ", v6);
    printf("%s : Do not support %s\n", "convert_V_to_N", a1);
    snprintf(byte_633968, 0x100u, "Do not support %s", a1);
    sub_3CC5C(byte_633968, v6);
    return 0;
  }
}
