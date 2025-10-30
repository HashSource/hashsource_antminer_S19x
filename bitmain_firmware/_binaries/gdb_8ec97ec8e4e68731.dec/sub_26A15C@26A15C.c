int sub_26A15C()
{
  sub_533F8(
    "print",
    -1,
    (int)sub_2663B8,
    (int)"Generic command for setting how things print.",
    &dword_47477C,
    (int)"set print ",
    0,
    (int **)&dword_47475C);
  sub_54724((int)"p", (unsigned __int8 *)"print", -1, 1, &dword_47475C);
  sub_54724((int)"pr", (unsigned __int8 *)"print", -1, 1, &dword_47475C);
  sub_533F8(
    "print",
    -1,
    (int)sub_266364,
    (int)"Generic command for showing print settings.",
    &dword_474778,
    (int)"show print ",
    0,
    (int **)&dword_47474C);
  sub_54724((int)"p", (unsigned __int8 *)"print", -1, 1, &dword_47474C);
  sub_54724((int)"pr", (unsigned __int8 *)"print", -1, 1, &dword_47474C);
  sub_533F8(
    "raw",
    -1,
    (int)sub_26637C,
    (int)"Generic command for setting what things to print in \"raw\" mode.",
    &dword_48A9FC,
    (int)"set print raw ",
    0,
    (int **)&dword_47477C);
  sub_533F8(
    "raw",
    -1,
    (int)sub_26634C,
    (int)"Generic command for showing \"print raw\" settings.",
    &dword_48A9F8,
    (int)"show print raw ",
    0,
    (int **)&dword_474778);
  sub_5380C(
    "elements",
    -1,
    (int)&unk_46DE78,
    "Set limit on string chars or array elements to print.",
    "Show limit on string chars or array elements to print.",
    "\"set print elements unlimited\" causes there to be no limit.",
    0,
    (int)sub_265DAC,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "null-stop",
    -1,
    (int)&unk_46DE88,
    "Set printing of char arrays to stop at first null char.",
    "Show printing of char arrays to stop at first null char.",
    0,
    0,
    (int)sub_265D9C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_5380C(
    "repeats",
    -1,
    (int)&unk_46DE7C,
    "Set threshold for repeated print elements.",
    "Show threshold for repeated print elements.",
    "\"set print repeats unlimited\" causes all elements to be individually printed.",
    0,
    (int)sub_265D8C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "pretty",
    4,
    (int)&unk_46DE64,
    "Set pretty formatting of structures.",
    "Show pretty formatting of structures.",
    0,
    0,
    (int)sub_265D7C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "union",
    4,
    (int)&unk_46DE6C,
    "Set printing of unions interior to structures.",
    "Show printing of unions interior to structures.",
    0,
    0,
    (int)sub_265D6C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "array",
    4,
    (int)&unk_46DE60,
    "Set pretty formatting of arrays.",
    "Show pretty formatting of arrays.",
    0,
    0,
    (int)sub_265D5C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "address",
    4,
    (int)&unk_46DE70,
    "Set printing of addresses.",
    "Show printing of addresses.",
    0,
    0,
    (int)sub_265D4C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "symbol",
    4,
    (int)&unk_46DEA4,
    "Set printing of symbol names when printing pointers.",
    "Show printing of symbol names when printing pointers.",
    0,
    0,
    (int)sub_265D3C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_53934(
    "input-radix",
    4,
    (int)&dword_46DEAC,
    "Set default input radix for entering numbers.",
    "Show default input radix for entering numbers.",
    0,
    (int)sub_2665A0,
    (int)sub_265D2C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53934(
    "output-radix",
    4,
    (int)&dword_46DEA8,
    "Set default output radix for printing of values.",
    "Show default output radix for printing of values.",
    0,
    (int)sub_2664F8,
    (int)sub_265D1C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53274(
    "radix",
    4,
    (int)sub_26650C,
    (int)"Set default input and output number radices.\n"
         "Use 'set input-radix' or 'set output-radix' to independently set each.\n"
         "Without an argument, sets both radices back to the default value of 10.",
    (int **)&dword_47475C);
  sub_53274(
    "radix",
    4,
    (int)sub_2663F4,
    (int)"Show the default input and output number radices.\n"
         "Use 'show input-radix' or 'show output-radix' to independently show each.",
    (int **)&dword_47474C);
  return sub_535B8(
           "array-indexes",
           4,
           (int)&unk_46DE8C,
           "Set printing of array indexes.",
           "Show printing of array indexes",
           0,
           0,
           (int)sub_265D0C,
           (int **)&dword_47477C,
           (int **)&dword_474778);
}
