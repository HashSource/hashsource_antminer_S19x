int sub_1630BC()
{
  dword_48776C = sub_323AE0(10, off_4714A0, off_47149C[0], 0, sub_93094, sub_161E18);
  sub_53274("bfds", 11, (int)sub_1622B0, (int)"List the BFDs that are currently open.", (int **)&dword_474788);
  sub_535B8(
    "bfd-sharing",
    -1,
    (int)&dword_46D4AC,
    "Set whether gdb will share bfds that appear to be the same file.",
    "Show whether gdb will share bfds that appear to be the same file.",
    "When enabled gdb will reuse existing bfds rather than reopening the\n"
    "same file.  To decide if two files are the same then gdb compares the\n"
    "filename, file size, file modification time, and file inode.",
    0,
    (int)sub_162144,
    (int **)&dword_487A7C,
    (int **)&dword_487A84);
  return sub_53934(
           "bfd-cache",
           11,
           (int)&dword_487778,
           "Set bfd cache debugging.",
           "Show bfd cache debugging.",
           "When non-zero, bfd cache specific debugging is enabled.",
           0,
           (int)sub_162134,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
