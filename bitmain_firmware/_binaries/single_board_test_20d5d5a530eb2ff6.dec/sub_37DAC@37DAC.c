int __fastcall sub_37DAC(int a1)
{
  int v1; // r3
  const char *v2; // r4
  char v4[56]; // [sp-38h] [bp-38h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 67);
  switch ( v1 )
  {
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
  }
  v2 = (const char *)(a1 + 64);
  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : Can't get chip bin number. chip_bin: %s\n", "get_chip_bin", v2);
  snprintf(byte_62A868, 0x100u, "Can't get chip bin number. chip_bin: %s", v2);
  sub_3CC5C(byte_62A868, v4);
  return 255;
}
