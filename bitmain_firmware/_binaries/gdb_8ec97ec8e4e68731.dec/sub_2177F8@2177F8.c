int sub_2177F8()
{
  dword_4896EC = sub_1B6AD8(0, (int)sub_216788);
  return sub_535B8(
           "symfile",
           -1,
           (int)&dword_4896F0,
           "Set debugging of the symfile functions.",
           "Show debugging of the symfile functions.",
           "When enabled, all calls to the symfile functions are logged.",
           (int)sub_2176AC,
           (int)sub_216EC0,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
