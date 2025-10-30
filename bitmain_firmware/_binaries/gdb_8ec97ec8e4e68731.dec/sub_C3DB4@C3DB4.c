int sub_C3DB4()
{
  sub_D23D4();
  memcpy(&unk_47826C, off_46C04C, 0x48u);
  dword_478274 = (int)sub_C39AC;
  dword_478278 = (int)sub_C38B0;
  dword_47827C = (int)sub_C383C;
  dword_47828C = (int)sub_C3A64;
  dword_478290 = (int)sub_C3BEC;
  dword_478298 = (int)sub_C3B50;
  dword_47829C = (int)sub_C3AC0;
  dword_4782AC = (int)sub_C38A8;
  dword_478268 = (int)sub_93094(0x98u, 4u);
  return sub_D21C4(
           "signal",
           "Catch signals by their names and/or numbers.\n"
           "Usage: catch signal [[NAME|NUMBER] [NAME|NUMBER]...|all]\n"
           "Arguments say which signals to catch.  If no arguments\n"
           "are given, every \"normal\" signal will be caught.\n"
           "The argument \"all\" means to also catch signals used by GDB.\n"
           "Arguments, if given, should be one or more signal names\n"
           "(if your system supports that), or signal numbers.",
           sub_C3E84,
           sub_F7A54,
           0,
           1);
}
