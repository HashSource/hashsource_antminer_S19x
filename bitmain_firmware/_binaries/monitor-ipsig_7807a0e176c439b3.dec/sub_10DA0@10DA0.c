int __fastcall sub_10DA0(int a1)
{
  char v3[68]; // [sp+0h] [bp-44h] BYREF

  memset(v3, 0, 0x40u);
  sprintf(v3, "echo %d > /sys/class/gpio/gpio%d/value", a1, 941);
  system(v3);
  sprintf(v3, "echo %d > /sys/class/gpio/gpio%d/value", a1, 942);
  return system(v3);
}
