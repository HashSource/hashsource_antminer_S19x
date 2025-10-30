int sub_40A28()
{
  char v1[52]; // [sp+0h] [bp-34h] BYREF

  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : pt exit\n", "pt_exit");
  strcpy(byte_63BAD0, "pt exit");
  return sub_3CC5C((int)byte_63BAD0, v1);
}
