int sub_46D3C()
{
  int result; // r0

  sub_53934(
    "lin-lwp",
    11,
    &dword_47202C,
    "Set debugging of GNU/Linux lwp module.",
    "Show debugging of GNU/Linux lwp module.",
    "Enables printf debugging output.",
    0,
    sub_41738,
    &dword_474750,
    &dword_474748);
  sub_535B8(
    "linux-namespaces",
    11,
    &dword_473724,
    "Set debugging of GNU/Linux namespaces module.",
    "Show debugging of GNU/Linux namespaces module.",
    "Enables printf debugging output.",
    0,
    0,
    &dword_474750,
    &dword_474748);
  sigprocmask(2, 0, &stru_472500);
  dword_472580 = (int)sub_416C4;
  sigemptyset(&stru_472584);
  dword_472604 = 0x10000000;
  sigaction(17, (const struct sigaction *)&dword_472580, 0);
  sigprocmask(2, 0, &stru_472198);
  sigdelset(&stru_472198, 17);
  sigemptyset(&set);
  result = sub_323B2C(100, sub_41748, sub_40C54, 0);
  dword_472134 = result;
  return result;
}
