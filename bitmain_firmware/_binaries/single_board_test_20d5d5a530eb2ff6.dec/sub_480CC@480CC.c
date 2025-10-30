int sub_480CC()
{
  char v1[48]; // [sp+0h] [bp-30h] BYREF

  if ( !off_705598(&dword_6470E4) )
    return sub_47FFC();
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : sweep failed\n", "sweep_doing");
  strcpy(byte_6475F0, "sweep failed");
  sub_3CC5C((int)byte_6475F0, v1);
  return -1;
}
