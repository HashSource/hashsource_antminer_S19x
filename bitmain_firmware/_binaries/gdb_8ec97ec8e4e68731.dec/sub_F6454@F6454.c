int sub_F6454()
{
  return sub_538CC(
           "max-completions",
           -1,
           (int)&dword_46D36C,
           "Set maximum number of completion candidates.",
           "Show maximum number of completion candidates.",
           "Use this to limit the number of candidates considered\n"
           "during completion.  Specifying \"unlimited\" or -1\n"
           "disables limiting.  Note that setting either no limit or\n"
           "a very large limit can make completion slow.",
           0,
           0,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
