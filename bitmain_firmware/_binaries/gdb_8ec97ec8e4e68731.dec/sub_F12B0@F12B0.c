int sub_F12B0()
{
  return sub_53934(
           "coff-pe-read",
           11,
           (int)&dword_4789A8,
           "Set coff PE read debugging.",
           "Show coff PE read debugging.",
           "When set, debugging messages for coff reading of exported symbols are displayed.",
           0,
           (int)sub_F031C,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
