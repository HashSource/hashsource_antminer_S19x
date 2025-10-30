int sub_56EF4()
{
  int result; // r0

  sub_533F8(
    "logging",
    4,
    (int)sub_56CE8,
    (int)"Set logging options",
    &dword_474800,
    (int)"set logging ",
    0,
    (int **)&dword_47475C);
  sub_533F8(
    "logging",
    4,
    (int)sub_56CF4,
    (int)"Show logging options",
    &dword_474804,
    (int)"show logging ",
    0,
    (int **)&dword_47474C);
  sub_535B8(
    "overwrite",
    4,
    (int)&dword_4747F8,
    "Set whether logging overwrites or appends to the log file.",
    "Show whether logging overwrites or appends to the log file.",
    "If set, logging overrides the log file.",
    (int)sub_56CC4,
    (int)sub_56CB4,
    &dword_474800,
    &dword_474804);
  sub_535B8(
    "redirect",
    4,
    (int)&dword_4747FC,
    "Set the logging output mode.",
    "Show the logging output mode.",
    "If redirect is off, output will go to both the screen and the log file.\n"
    "If redirect is on, output will go only to the log file.",
    (int)sub_56CE4,
    (int)sub_56CA4,
    &dword_474800,
    &dword_474804);
  sub_53620(
    "file",
    4,
    (int)&dword_4747F0,
    "Set the current logfile.",
    "Show the current logfile.",
    "The logfile is used when directing GDB's output.",
    0,
    (int)sub_56C94,
    &dword_474800,
    &dword_474804);
  sub_53274("on", 4, (int)sub_56AC0, (int)"Enable logging.", &dword_474800);
  sub_53274("off", 4, (int)sub_56D98, (int)"Disable logging.", &dword_474800);
  result = sub_327254("gdb.txt");
  dword_4747F0 = result;
  return result;
}
