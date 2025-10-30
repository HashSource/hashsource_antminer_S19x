int __fastcall sub_41AC4(float *a1)
{
  float v1; // s0
  int v4; // [sp+14h] [bp-40h]
  char v5[52]; // [sp+20h] [bp-34h] BYREF

  sub_40E64(0);
  usleep((__useconds_t)&unk_3D0900);
  sub_787A8(*(unsigned __int8 *)dword_705300, 0, 0);
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf(
    "%s : Set Pll0: userdivider0 = 0x%02x, userdivider1 = 0x%02x, userdivider2 = 0x%02x, userdivider3 = 0x%02x\n",
    "set_register_stage_3",
    0,
    0,
    0,
    0);
  snprintf(
    byte_63D0D4,
    0x100u,
    "Set Pll0: userdivider0 = 0x%02x, userdivider1 = 0x%02x, userdivider2 = 0x%02x, userdivider3 = 0x%02x",
    0,
    0,
    0,
    0);
  sub_3CC5C((int)byte_63D0D4, v5);
  usleep(0x2710u);
  v4 = *(unsigned __int8 *)dword_705300;
  sub_3DFBC(a1, *(_DWORD *)(dword_705300 + 4));
  sub_3DDA8(v4, 0, 0x32u, (unsigned int)v1, dword_63D1D4);
  sub_417F4(a1, *(_DWORD *)(dword_705300 + 4));
  sub_778F0(*(unsigned __int8 *)dword_705300, 127);
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : Set TM as 0x%08x\n", "set_register_stage_3", 127);
  snprintf(byte_63D1D8, 0x100u, "Set TM as 0x%08x", 127);
  sub_3CC5C((int)byte_63D1D8, v5);
  sub_6F42C(*(_DWORD *)dword_705300);
  sub_711D0(*(_DWORD *)(dword_705300 + 84));
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : Set timeout by using config value: %d\n", "set_register_stage_3", *(_DWORD *)(dword_705300 + 84));
  snprintf(&byte_63D1D8[256], 0x100u, "Set timeout by using config value: %d", *(_DWORD *)(dword_705300 + 84));
  return sub_3CC5C((int)&byte_63D1D8[256], v5);
}
