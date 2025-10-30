int sub_10E38()
{
  system("echo 0 >/sys/class/gpio/gpio941/value");
  return system("echo 0 >/sys/class/gpio/gpio942/value");
}
