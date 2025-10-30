int sub_1FE254()
{
  sub_533F8(
    "serial",
    11,
    (int)sub_1FDC18,
    (int)"Set default serial/parallel port configuration.",
    &dword_489384,
    (int)"set serial ",
    0,
    (int **)&dword_47475C);
  sub_533F8(
    "serial",
    11,
    (int)sub_1FDC00,
    (int)"Show default serial/parallel port configuration.",
    &dword_489380,
    (int)"show serial ",
    0,
    (int **)&dword_47474C);
  sub_53874(
    "baud",
    -1,
    (int)&dword_46DB60,
    "Set baud rate for remote serial I/O.",
    "Show baud rate for remote serial I/O.",
    "This value is used to set the speed of the serial port when debugging\nusing remote targets.",
    0,
    (int)sub_1FDBF0,
    (int **)&dword_489384,
    (int **)&dword_489380);
  sub_534EC(
    "parity",
    -1,
    (int)off_3DBA24,
    (int)off_46DB58,
    "Set parity for remote serial I/O",
    "Show parity for remote serial I/O",
    0,
    (int)sub_1FD630,
    0,
    (int **)&dword_489384,
    (int **)&dword_489380);
  sub_53620(
    "remotelogfile",
    -1,
    (int)&dword_48937C,
    "Set filename for remote session recording.",
    "Show filename for remote session recording.",
    "This file is used to record the remote session for future playback\nby gdbserver.",
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_534EC(
    "remotelogbase",
    -1,
    (int)&unk_3DBA34,
    (int)&off_46DB5C,
    "Set numerical base for remote session logging",
    "Show numerical base for remote session logging",
    0,
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  return sub_53934(
           "serial",
           11,
           (int)&dword_489388,
           "Set serial debugging.",
           "Show serial debugging.",
           "When non-zero, serial port debugging is enabled.",
           0,
           0,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
