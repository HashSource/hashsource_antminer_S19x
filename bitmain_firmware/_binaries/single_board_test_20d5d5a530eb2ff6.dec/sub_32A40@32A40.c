int __fastcall sub_32A40(int a1)
{
  char v3[48]; // [sp+0h] [bp-30h] BYREF

  if ( !a1 )
    return sub_3136C();
  if ( a1 != 1 )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf(
      "%s : Don't support parse this type config information. type = %d\n",
      "parse_MES_system_config_information",
      a1);
    snprintf(byte_61F544, 0x100u, "Don't support parse this type config information. type = %d", a1);
    sub_3CC5C(byte_61F544, v3);
  }
  return 0;
}
