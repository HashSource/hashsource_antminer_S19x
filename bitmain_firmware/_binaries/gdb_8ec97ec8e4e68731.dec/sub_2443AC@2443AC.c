int __fastcall sub_2443AC(int a1)
{
  sub_25A418(a1, "GNU gdb %s%s\n", "(GDB) ", "8.1.1");
  sub_25A418(a1, "Copyright (C) 2018 Free Software Foundation, Inc.\n");
  sub_25A418(
    a1,
    "License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\n"
    "This is free software: you are free to change and redistribute it.\n"
    "There is NO WARRANTY, to the extent permitted by law.  Type \"show copying\"\n"
    "and \"show warranty\" for details.\n");
  sub_25A418(a1, "This GDB was configured as \"");
  if ( !strcmp("arm-buildroot-linux-gnueabihf", "arm-buildroot-linux-gnueabihf") )
    sub_25A418(a1, "%s", "arm-buildroot-linux-gnueabihf");
  else
    sub_25A418(a1, "--host=%s --target=%s", "arm-buildroot-linux-gnueabihf", "arm-buildroot-linux-gnueabihf");
  sub_25A418(a1, "\".\nType \"show configuration\" for configuration details.");
  sub_25A418(a1, "\nFor bug reporting instructions, please see:\n");
  sub_25A418(a1, "%s.\n", "<http://www.gnu.org/software/gdb/bugs/>");
  sub_25A418(
    a1,
    "Find the GDB manual and other documentation resources online at:\n"
    "<http://www.gnu.org/software/gdb/documentation/>.\n");
  sub_25A418(a1, "For help, type \"help\".\n");
  return sub_25A418(a1, "Type \"apropos word\" to search for commands related to \"word\".");
}
