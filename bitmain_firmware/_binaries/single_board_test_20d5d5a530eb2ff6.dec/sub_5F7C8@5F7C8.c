int sub_5F7C8()
{
  char v1[52]; // [sp+0h] [bp-34h] BYREF

  sub_78084((unsigned __int8)dword_21B3A4, 0);
  sub_778F0((unsigned __int8)dword_21B3A4, -1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : set TM to 0xffffffff\n", "set_asic_register_stage_1");
  strcpy(byte_64C43C, "set TM to 0xffffffff");
  sub_3CC5C((int)byte_64C43C, v1);
  sub_6F42C(dword_21B3A4);
  return usleep(0xC350u);
}
