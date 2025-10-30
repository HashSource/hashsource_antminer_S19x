int __fastcall sub_22A2C(int a1)
{
  unsigned int v2; // r4
  int v3; // r3
  char v5[48]; // [sp+8h] [bp-30h] BYREF

  if ( !dword_61DD28 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    printf(
      "%s : APW_power_version[%d]: %d, and we want to find apw_power_version: %d, \n",
      "find_APW_power_version",
      v2,
      byte_6E3308[v2],
      a1);
    snprintf(
      byte_6046C4,
      0x100u,
      "APW_power_version[%d]: %d, and we want to find apw_power_version: %d, ",
      v2,
      byte_6E3308[v2],
      a1);
    sub_3CC5C(byte_6046C4, v5);
    v3 = byte_6E3308[v2];
    v2 = (unsigned __int8)(v2 + 1);
    if ( a1 == v3 )
      break;
    if ( v2 >= dword_61DD28 )
      return 0;
  }
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : Find APW power version. It is %d\n", "find_APW_power_version", a1);
  snprintf(byte_6047C4, 0x100u, "Find APW power version. It is %d", a1);
  sub_3CC5C(byte_6047C4, v5);
  return 1;
}
