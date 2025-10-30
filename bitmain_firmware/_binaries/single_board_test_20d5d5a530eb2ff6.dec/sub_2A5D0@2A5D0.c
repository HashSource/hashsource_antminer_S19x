int __fastcall sub_2A5D0(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r4
  char v8[48]; // [sp+8h] [bp-30h] BYREF

  v5 = sub_189090(a2, a1);
  v6 = sub_189090(v5, a3) + 1;
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : hardware sweep timeout = %d, freq = %d\n", "calculate_hardware_sweep_timeout", v6, a1);
  snprintf(byte_6104D4, 0x100u, "hardware sweep timeout = %d, freq = %d", v6, a1);
  sub_3CC5C(byte_6104D4, v8);
  return v6;
}
