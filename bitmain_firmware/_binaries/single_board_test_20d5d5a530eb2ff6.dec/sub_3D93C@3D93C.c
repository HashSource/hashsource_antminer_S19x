int __fastcall sub_3D93C(int a1)
{
  char v3[48]; // [sp+0h] [bp-30h] BYREF

  if ( sub_3D848() )
    return sub_3D8A0(a1);
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s :  init fpga failed\n\n", "pf_init");
  strcpy(byte_6353C8, " init fpga failed\n");
  sub_3CC5C((int)byte_6353C8, v3);
  return 0;
}
