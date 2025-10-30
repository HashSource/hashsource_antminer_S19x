int sub_10C23C()
{
  int v0; // r0

  v0 = sub_536E0(
         "disassembler-options",
         -1,
         (int)&dword_4872BC,
         "Set the disassembler options.\n"
         "Usage: set disassembler-options <option>[,<option>...]\n"
         "\n"
         "See: 'show disassembler-options' for valid option values.\n",
         "Show the disassembler options.",
         0,
         (int)sub_10C22C,
         (int)sub_10B8EC,
         (int **)&dword_47475C,
         (int **)&dword_47474C);
  return sub_5324C(v0, 1095832);
}
