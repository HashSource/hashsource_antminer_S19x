unsigned int __fastcall sub_440EC(int a1)
{
  char v3[52]; // [sp+0h] [bp-34h] BYREF

  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : online mode retry test\n", "online_mode_retry_test");
  strcpy(byte_641AD8, "online mode retry test");
  sub_3CC5C((int)byte_641AD8, v3);
  sub_428C0();
  sub_40D18(a1);
  dword_705348 = 0;
  return sleep(0xAu);
}
