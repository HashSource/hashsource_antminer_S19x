int sub_69E78()
{
  sub_539C0(
    "python-interactive",
    10,
    (int)sub_69DF0,
    (int)"Start a Python interactive prompt.\n"
         "\n"
         "Python scripting is not supported in this copy of GDB.\n"
         "This command is only a placeholder.");
  sub_547B0((int)"pi", "python-interactive", 10, 1);
  sub_539C0(
    "python",
    10,
    (int)sub_69E74,
    (int)"Evaluate a Python command.\n"
         "\n"
         "Python scripting is not supported in this copy of GDB.\n"
         "This command is only a placeholder.");
  sub_547B0((int)"py", "python", 10, 1);
  sub_533F8(
    "python",
    -1,
    (int)sub_69DD8,
    (int)"Prefix command for python preference settings.",
    &dword_47489C,
    (int)"show python ",
    0,
    (int **)&dword_47474C);
  sub_533F8(
    "python",
    -1,
    (int)sub_69DA8,
    (int)"Prefix command for python preference settings.",
    &dword_474898,
    (int)"set python ",
    0,
    (int **)&dword_47475C);
  return sub_534EC(
           "print-stack",
           -1,
           (int)off_35C944,
           (int)off_46BA0C,
           "Set mode for Python stack dump on error.",
           "Show the mode of Python stack printing on error.",
           "none  == no stack or message will be printed.\n"
           "full == a message and a stack will be printed.\n"
           "message == an error message without a stack will be printed.",
           0,
           0,
           (int **)&dword_474898,
           (int **)&dword_47489C);
}
