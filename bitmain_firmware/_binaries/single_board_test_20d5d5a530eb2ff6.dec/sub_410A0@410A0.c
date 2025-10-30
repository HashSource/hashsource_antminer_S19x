int sub_410A0()
{
  char v1[52]; // [sp+0h] [bp-34h] BYREF

  sub_78084(*(unsigned __int8 *)dword_705300, 0);
  sub_778F0(*(unsigned __int8 *)dword_705300, -1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : set TM to 0xffffffff\n", "set_register_stage_1");
  strcpy(byte_63C2D0, "set TM to 0xffffffff");
  sub_3CC5C((int)byte_63C2D0, v1);
  sub_6F42C(*(_DWORD *)dword_705300);
  return usleep(0xC350u);
}
