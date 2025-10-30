unsigned int sub_10FE4()
{
  unsigned int i; // [sp+4h] [bp-8h]

  for ( i = 0; i <= 2; ++i )
  {
    system("echo 1 >/sys/class/gpio/gpio942/value");
    usleep(0xC350u);
    system("echo 0 >/sys/class/gpio/gpio942/value");
    usleep(0xC350u);
  }
  return i;
}
