void __noreturn sub_11B8C()
{
  fwrite(
    "Usage: i2cset [-f] [-y] [-m MASK] [-r] [-a] I2CBUS CHIP-ADDRESS DATA-ADDRESS [VALUE] ... [MODE]\n"
    "  I2CBUS is an integer or an I2C bus name\n"
    "  ADDRESS is an integer (0x03 - 0x77, or 0x00 - 0x7f if -a is given)\n"
    "  MODE is one of:\n"
    "    c (byte, no value)\n"
    "    b (byte data, default)\n"
    "    w (word data)\n"
    "    i (I2C block data)\n"
    "    s (SMBus block data)\n"
    "    Append p for SMBus PEC\n",
    1u,
    0x170u,
    (FILE *)stderr);
  exit(1);
}
