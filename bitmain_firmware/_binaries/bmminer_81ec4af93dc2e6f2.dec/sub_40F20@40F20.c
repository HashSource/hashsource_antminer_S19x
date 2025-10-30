bool sub_40F20()
{
  return !strncmp(dest, "Antminer BHB56904", 0x11u)
      || !strncmp(dest, "Antminer BHB56905", 0x11u)
      || !strncmp(dest, "Antminer S19 Pro++", 0x12u)
      || strncmp(dest, "Antminer S19k Pro+", 0x12u) == 0;
}
