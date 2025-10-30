bool sub_42B0C()
{
  return !strncmp(byte_B6BEC, "Antminer BHB56904", 0x11u)
      || !strncmp(byte_B6BEC, "Antminer BHB56905", 0x11u)
      || !strncmp(byte_B6BEC, "Antminer S19 Pro++", 0x12u)
      || strncmp(byte_B6BEC, "Antminer S19k Pro+", 0x12u) == 0;
}
