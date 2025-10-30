unsigned int __fastcall sub_3D9AC(int a1)
{
  int v2; // r0
  char v4[52]; // [sp+0h] [bp-34h] BYREF

  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : power down reset low\n", "pf_power_down");
  strcpy(byte_6354C8, "power down reset low");
  v2 = sub_3CC5C((int)byte_6354C8, v4);
  sub_6F490(v2);
  usleep(0x7530u);
  sub_71AF4(a1);
  return sleep(1u);
}
