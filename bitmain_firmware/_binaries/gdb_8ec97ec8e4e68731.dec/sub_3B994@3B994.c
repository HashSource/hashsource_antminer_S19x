int sub_3B994()
{
  ((void (__fastcall *)(char **))loc_1FDCA0)(&off_34E3D8);
  return sub_535B8(
           "remoteflow",
           -1,
           &dword_471B94,
           "Set use of hardware flow control for remote serial I/O.",
           "Show use of hardware flow control for remote serial I/O.",
           "Enable or disable hardware flow control (RTS/CTS) on the serial port\nwhen debugging using remote targets.",
           0,
           sub_3B498,
           &dword_47475C,
           &dword_47474C);
}
