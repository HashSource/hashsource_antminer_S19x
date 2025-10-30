int sub_15A170()
{
  return sub_534EC(
           "target-file-system-kind",
           3,
           (int)off_3A84E4,
           (int)&off_46D4A4,
           "Set assumed file system kind for target reported file names",
           "Show assumed file system kind for target reported file names",
           "If `unix', target file names (e.g., loaded shared library file names)\n"
           "starting the forward slash (`/') character are considered absolute,\n"
           "and the directory separator character is the forward slash (`/').  If\n"
           "`dos-based', target file names starting with a drive letter followed\n"
           "by a colon (e.g., `c:'), are also considered absolute, and the\n"
           "backslash (`\\') is also considered a directory separator.  Set to\n"
           "`auto' (which is the default), to let GDB decide, based on its\n"
           "knowledge of the target operating system.",
           0,
           (int)sub_15A0A4,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
