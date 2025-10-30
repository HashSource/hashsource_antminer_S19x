int sub_10EFC()
{
  fwrite(
    "\n"
    "____________________________WARNING____________________________\n"
    "Erroneously writing to a system EEPROM (like DIMM SPD modules)\n"
    "can break your system.  It will NOT boot anymore so you'll not\n"
    "be able to fix it.\n"
    "\n"
    "Reading from 8bit EEPROMs (like that in your DIMM) without using\n"
    "the -8 switch can also UNEXPECTEDLY write to them, so be sure to\n"
    "use the -8 command param when required.\n"
    "\n"
    "Use -f to disable this warning message\n"
    "\n"
    "Press ENTER to continue or hit CTRL-C to exit\n"
    "\n",
    1u,
    0x1D5u,
    (FILE *)stderr);
  IO_getc((_IO_FILE *)stdin);
  return 1;
}
