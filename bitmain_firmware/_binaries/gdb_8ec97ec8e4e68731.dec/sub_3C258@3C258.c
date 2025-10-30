int sub_3C258()
{
  ((void (__fastcall *)(char **))loc_1FDCA0)(&off_34E6EC);
  sub_533F8(
    "tcp",
    11,
    sub_3BEF4,
    "TCP protocol specific variables\nConfigure variables specific to remote TCP connections",
    &dword_471B9C,
    "set tcp ",
    0,
    &dword_47475C);
  sub_533F8(
    "tcp",
    11,
    sub_3BEC4,
    "TCP protocol specific variables\nConfigure variables specific to remote TCP connections",
    &dword_471B98,
    "show tcp ",
    0,
    &dword_47474C);
  sub_535B8(
    "auto-retry",
    10,
    &dword_46AF6C,
    "Set auto-retry on socket connect",
    "Show auto-retry on socket connect",
    0,
    0,
    0,
    &dword_471B9C,
    &dword_471B98);
  return sub_5380C(
           "connect-timeout",
           10,
           &dword_46AF68,
           "Set timeout limit in seconds for socket connection",
           "Show timeout limit in seconds for socket connection",
           "If set to \"unlimited\", GDB will keep attempting to establish a\n"
           "connection forever, unless interrupted with Ctrl-c.\n"
           "The default is 15 seconds.",
           0,
           0,
           &dword_471B9C,
           &dword_471B98);
}
