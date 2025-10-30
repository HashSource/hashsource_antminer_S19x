int sub_10E60()
{
  system("echo 1 >/sys/class/gpio/gpio941/value");
  return system("echo 1 >/sys/class/gpio/gpio942/value");
}
