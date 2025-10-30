int sub_1606FC()
{
  obstack_begin(&stru_487728, 0, 0, (void *(*)(int))sub_93028, sub_15C3B0);
  dword_487720 = sub_323B2C(100, sub_15C444, sub_15D23C, 0);
  sub_1B91C4(sub_15D874);
  sub_533F8(
    "backtrace",
    11,
    (int)sub_15C414,
    (int)"Set backtrace specific variables.\nConfigure backtrace variables such as the backtrace limit",
    &dword_48771C,
    (int)"set backtrace ",
    0,
    (int **)&dword_47475C);
  sub_533F8(
    "backtrace",
    11,
    (int)sub_15C3FC,
    (int)"Show backtrace specific variables\nShow backtrace variables such as the backtrace limit",
    &dword_487718,
    (int)"show backtrace ",
    0,
    (int **)&dword_47474C);
  sub_535B8(
    "past-main",
    10,
    (int)&dword_48775C,
    "Set whether backtraces should continue past \"main\".",
    "Show whether backtraces should continue past \"main\".",
    "Normally the caller of \"main\" is not of interest, so GDB will terminate\n"
    "the backtrace at \"main\".  Set this variable if you need to see the rest\n"
    "of the stack trace.",
    0,
    (int)sub_15C3EC,
    (int **)&dword_48771C,
    (int **)&dword_487718);
  sub_535B8(
    "past-entry",
    10,
    (int)&dword_487760,
    "Set whether backtraces should continue past the entry point of a program.",
    "Show whether backtraces should continue past the entry point of a program.",
    "Normally there are no callers beyond the entry point of a program, so GDB\n"
    "will terminate the backtrace there.  Set this variable if you need to see\n"
    "the rest of the stack trace.",
    0,
    (int)sub_15C3DC,
    (int **)&dword_48771C,
    (int **)&dword_487718);
  sub_5380C(
    "limit",
    10,
    (int)&dword_46D4A8,
    "Set an upper bound on the number of backtrace levels.",
    "Show the upper bound on the number of backtrace levels.",
    "No more than the specified number of frames can be displayed or examined.\n"
    "Literal \"unlimited\" or zero means no limit.",
    0,
    (int)sub_15C3CC,
    (int **)&dword_48771C,
    (int **)&dword_487718);
  return sub_53934(
           "frame",
           11,
           (int)&dword_487724,
           "Set frame debugging.",
           "Show frame debugging.",
           "When non-zero, frame specific internal debugging is enabled.",
           0,
           (int)sub_15C3BC,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
