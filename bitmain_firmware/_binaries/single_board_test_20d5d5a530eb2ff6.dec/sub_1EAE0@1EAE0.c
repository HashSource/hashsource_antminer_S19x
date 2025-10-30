int __fastcall sub_1EAE0(int a1)
{
  char v3[52]; // [sp+0h] [bp-34h] BYREF

  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : Sensor position error. position = %d\n", "get_temperature_data_position_in_array", a1);
  snprintf(byte_2336B0, 0x100u, "Sensor position error. position = %d", a1);
  sub_3CC5C(byte_2336B0, v3);
  return 0;
}
