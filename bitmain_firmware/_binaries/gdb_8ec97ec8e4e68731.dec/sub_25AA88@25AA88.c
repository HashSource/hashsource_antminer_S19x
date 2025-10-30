int sub_25AA88()
{
  sub_5380C(
    "width",
    4,
    (int)&dword_48A9B8,
    "Set number of characters where GDB should wrap lines of its output.",
    "Show number of characters where GDB should wrap lines of its output.",
    "This affects where GDB wraps its output to fit the screen width.\n"
    "Setting this to \"unlimited\" or zero prevents GDB from wrapping its output.",
    (int)sub_2591D4,
    (int)sub_25A4B0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5380C(
    "height",
    4,
    (int)&dword_48A9B4,
    "Set number of lines in a page for GDB output pagination.",
    "Show number of lines in a page for GDB output pagination.",
    "This affects the number of lines after which GDB will pause\n"
    "its output and ask you whether to continue.\n"
    "Setting this to \"unlimited\" or zero causes GDB never pause during output.",
    (int)sub_2582FC,
    (int)sub_25A4A0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "pagination",
    4,
    (int)&dword_46DDEC,
    "Set state of GDB output pagination.",
    "Show state of GDB output pagination.",
    "When pagination is ON, GDB pauses at end of each screenful of\n"
    "its output and asks you whether to continue.\n"
    "Turning pagination off is an alternative to \"set height unlimited\".",
    0,
    (int)sub_25A490,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "sevenbit-strings",
    4,
    (int)&dword_48A9B0,
    "Set printing of 8-bit characters in strings as \\nnn.",
    "Show printing of 8-bit characters in strings as \\nnn.",
    0,
    0,
    (int)sub_25A480,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  return sub_535B8(
           "timestamp",
           11,
           (int)&dword_48A9D8,
           "Set timestamping of debugging messages.",
           "Show timestamping of debugging messages.",
           "When set, debugging messages will be marked with seconds and microseconds.",
           0,
           (int)sub_25A470,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
