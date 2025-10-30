int sub_2321C()
{
  char v1[68]; // [sp+0h] [bp-44h] BYREF

  memset(v1, 0, 0x40u);
  sprintf(v1, "echo %d > %s", 0, "/sys/class/gpio/gpio941/value");
  system(v1);
  memset(v1, 0, 0x40u);
  sprintf(v1, "echo %d > %s", 0, "/sys/class/gpio/gpio942/value");
  return system(v1);
}
