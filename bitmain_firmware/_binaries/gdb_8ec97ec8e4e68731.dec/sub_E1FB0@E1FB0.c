int sub_E1FB0()
{
  sub_53274("btrace", 11, (int)sub_E0A48, (int)"Info about branch tracing data.", (int **)&dword_474788);
  sub_533F8(
    "btrace",
    11,
    (int)sub_E0A18,
    (int)"Branch tracing maintenance commands.",
    &dword_4788D8,
    (int)"maintenance btrace ",
    0,
    (int **)&dword_47478C);
  sub_533F8(
    "btrace",
    11,
    (int)sub_E09E8,
    (int)"Set branch tracing specific variables.",
    &dword_4788D4,
    (int)"maintenance set btrace ",
    0,
    (int **)&dword_487A7C);
  sub_533F8(
    "pt",
    11,
    (int)sub_E09B8,
    (int)"Set Intel Processor Trace specific variables.",
    &dword_4788D0,
    (int)"maintenance set btrace pt ",
    0,
    (int **)&dword_4788D4);
  sub_533F8(
    "btrace",
    11,
    (int)sub_E0988,
    (int)"Show branch tracing specific variables.",
    &dword_4788CC,
    (int)"maintenance show btrace ",
    0,
    (int **)&dword_487A84);
  sub_533F8(
    "pt",
    11,
    (int)sub_E0958,
    (int)"Show Intel Processor Trace specific variables.",
    &dword_4788C8,
    (int)"maintenance show btrace pt ",
    0,
    (int **)&dword_4788CC);
  sub_535B8(
    "skip-pad",
    11,
    (int)&unk_46C0BC,
    "Set whether PAD packets should be skipped in the btrace packet history.",
    "Show whether PAD packets should be skipped in the btrace packet history.",
    "When enabled, PAD packets are ignored in the btrace packet history.",
    0,
    (int)sub_E0948,
    (int **)&dword_4788D0,
    (int **)&dword_4788C8);
  sub_53274(
    "packet-history",
    11,
    (int)sub_E1060,
    (int)"Print the raw branch tracing data.\n"
         "With no argument, print ten more packets after the previous ten-line print.\n"
         "With '-' as argument print ten packets before a previous ten-line print.\n"
         "One argument specifies the starting packet of a ten-line print.\n"
         "Two arguments with comma between specify starting and ending packets to print.\n"
         "Preceded with '+'/'-' the second argument specifies the distance from the first.\n",
    (int **)&dword_4788D8);
  sub_53274(
    "clear-packet-history",
    11,
    (int)sub_E0830,
    (int)"Clears the branch tracing packet history.\n"
         "Discards the raw branch tracing data but not the execution history data.\n",
    (int **)&dword_4788D8);
  return sub_53274(
           "clear",
           11,
           (int)sub_E1538,
           (int)"Clears the branch tracing data.\n"
                "Discards the raw branch tracing data and the execution history data.\n"
                "The next 'record' command will fetch the branch tracing data anew.\n",
           (int **)&dword_4788D8);
}
