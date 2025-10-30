int sub_C4CC8()
{
  __int64 v0; // r2

  sub_D23D4();
  memcpy(&unk_4782B4, off_46C04C, 0x48u);
  dword_4782BC = (int)sub_C4A74;
  dword_4782C0 = (int)sub_C4998;
  dword_4782C4 = (int)sub_C43C8;
  LODWORD(v0) = sub_C4544;
  HIDWORD(v0) = sub_C44A0;
  *(_QWORD *)&dword_4782E0 = v0;
  dword_4782D4 = (int)sub_C47AC;
  dword_4782D8 = (int)sub_C4618;
  sub_1BA19C(sub_C4978);
  dword_4782FC = sub_183634(0, sub_C4474);
  return sub_D21C4(
           "syscall",
           "Catch system calls by their names, groups and/or numbers.\n"
           "Arguments say which system calls to catch.  If no arguments are given,\n"
           "every system call will be caught.  Arguments, if given, should be one\n"
           "or more system call names (if your system supports that), system call\n"
           "groups or system call numbers.",
           sub_C4D98,
           sub_C5194,
           0,
           1);
}
