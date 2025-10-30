int sub_1DF884()
{
  dword_4886CC = (int)sub_16EBC0((int)sub_1DD1B0);
  sub_1B91C4(1957160);
  sub_1B9F38(1954088);
  sub_539C0("flushregs", 11, (int)sub_1DDD04, (int)"Force gdb to flush its register cache (maintainer command)");
  sub_53274(
    "registers",
    11,
    (int)sub_1DFE08,
    (int)"Print the internal register configuration.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  sub_53274(
    "raw-registers",
    11,
    (int)sub_1DFE00,
    (int)"Print the internal register configuration including raw values.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  sub_53274(
    "cooked-registers",
    11,
    (int)sub_1DFDF8,
    (int)"Print the internal register configuration including cooked values.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  sub_53274(
    "register-groups",
    11,
    (int)sub_1DFDF0,
    (int)"Print the internal register configuration including each register's group.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  return sub_53274(
           "remote-registers",
           11,
           (int)sub_1DFDE8,
           (int)"Print the internal register configuration including each register's\n"
                "remote register number and buffer offset in the g/G packets.\n"
                "Takes an optional file parameter.",
           (int **)&dword_474784);
}
