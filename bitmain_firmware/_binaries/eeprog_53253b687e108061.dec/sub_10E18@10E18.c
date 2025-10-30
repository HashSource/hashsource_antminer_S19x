void __fastcall __noreturn sub_10E18(int a1)
{
  fprintf(
    (FILE *)stderr,
    "%s\n[line %d]\n",
    "eeprog 0.7.5, a 24Cxx EEPROM reader/writer\n"
    "Copyright (c) 2003 by Stefano Barbato - All rights reserved.\n"
    "Usage: eeprog [-fqxdh] [-16|-8] [ -r addr[:count] | -w addr ]  /dev/i2c-N  i2c-address\n"
    "\n"
    "  Address modes:\n"
    "\t-8\t\tUse 8bit address mode for 24c0x...24C16 [default]\n"
    "\t-16\t\tUse 16bit address mode for 24c32...24C256\n"
    "  Actions:\n"
    "\t-r addr[:count]\tRead [count] (1 if omitted) bytes from [addr]\n"
    "\t\t\tand print them to the standard output\n"
    "\t-w addr\t\tWrite input (stdin) at address [addr] of the EEPROM\n"
    "\t-h\t\tPrint this help\n"
    "  Options:\n"
    "\t-x\t\tSet hex output mode\n"
    "\t-d\t\tDummy mode, display what *would* have been done\n"
    "\t-f\t\tDisable warnings and don't ask confirmation\n"
    "\t-q\t\tQuiet mode\n"
    "\n"
    "The following environment variables could be set instead of the command\n"
    "line arguments:\n"
    "\tEEPROG_DEV\t\tdevice name(/dev/i2c-N)\n"
    "\tEEPROG_I2C_ADDR\t\ti2c-address\n"
    "\n"
    "\tExamples\n"
    "\t1- read 64 bytes from the EEPROM at address 0x54 on bus 0 starting\n"
    "\t   at address 123 (decimal)\n"
    "\t\teeprog /dev/i2c-0 0x54 -r 123:64\n"
    "\t2- prints the hex codes of the first 32 bytes read from bus 1\n"
    "\t   at address 0x22\n"
    "\t\teeprog /dev/i2c-1 0x51 -x -r 0x22:0x20\n"
    "\t3- write the current timestamp at address 0x200 of the EEPROM on\n"
    "\t   bus 0 at address 0x33\n"
    "\t\tdate | eeprog /dev/i2c-0 0x33 -w 0x200\n",
    a1);
  exit(1);
}
