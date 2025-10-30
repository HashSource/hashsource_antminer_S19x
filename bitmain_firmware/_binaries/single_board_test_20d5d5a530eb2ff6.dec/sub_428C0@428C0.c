int sub_428C0()
{
  char v1[52]; // [sp+0h] [bp-34h] BYREF

  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : stop threads enter\n", "stop_threads");
  strcpy(byte_63EDD8, "stop threads enter");
  sub_3CC5C((int)byte_63EDD8, v1);
  byte_6377CC = 0;
  dword_705344 = 0;
  dword_705340 = 0;
  if ( dword_6E3460 )
    pthread_cancel(dword_6E3460);
  sleep(5u);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : stop threads end\n", "stop_threads");
  strcpy(byte_63EED8, "stop threads end");
  return sub_3CC5C((int)byte_63EED8, v1);
}
