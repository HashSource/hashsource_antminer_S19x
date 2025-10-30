int sub_55DB4()
{
  int result; // r0

  sub_533F8(
    "dump",
    1,
    (int)sub_5527C,
    (int)"Dump target code/data to a local file.",
    &dword_4747D0,
    (int)"dump ",
    0,
    (int **)&dword_474744);
  sub_533F8(
    "append",
    1,
    (int)sub_55240,
    (int)"Append target code/data to a local file.",
    &dword_4747D4,
    (int)"append ",
    0,
    (int **)&dword_474744);
  sub_552DC(
    "memory",
    (int)sub_55908,
    (int)"Write contents of memory to a raw binary file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory within the\n"
         "range [START .. STOP) to the specified FILE in raw target ordered bytes.");
  sub_552DC(
    "value",
    (int)sub_5569C,
    (int)"Write the value of an expression to a raw binary file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION to\n"
         "the specified FILE in raw target ordered bytes.");
  sub_533F8(
    "srec",
    -1,
    (int)sub_55204,
    (int)"Write target code/data to an srec file.",
    &dword_4747CC,
    (int)"dump srec ",
    0,
    (int **)&dword_4747D0);
  sub_533F8(
    "ihex",
    -1,
    (int)sub_551C8,
    (int)"Write target code/data to an intel hex file.",
    &dword_4747C8,
    (int)"dump ihex ",
    0,
    (int **)&dword_4747D0);
  sub_533F8(
    "verilog",
    -1,
    (int)sub_5518C,
    (int)"Write target code/data to a verilog hex file.",
    &dword_4747C4,
    (int)"dump verilog ",
    0,
    (int **)&dword_4747D0);
  sub_533F8(
    "tekhex",
    -1,
    (int)sub_55150,
    (int)"Write target code/data to a tekhex file.",
    &dword_4747C0,
    (int)"dump tekhex ",
    0,
    (int **)&dword_4747D0);
  sub_533F8(
    "binary",
    -1,
    (int)sub_55114,
    (int)"Write target code/data to a raw binary file.",
    &dword_4747BC,
    (int)"dump binary ",
    0,
    (int **)&dword_4747D0);
  sub_533F8(
    "binary",
    -1,
    (int)sub_550D8,
    (int)"Append target code/data to a raw binary file.",
    &dword_4747B8,
    (int)"append binary ",
    0,
    &dword_4747D4);
  sub_53274(
    "memory",
    -1,
    (int)sub_558F4,
    (int)"Write contents of memory to an srec file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory\n"
         "within the range [START .. STOP) to the specified FILE in srec format.",
    (int **)&dword_4747CC);
  sub_53274(
    "value",
    -1,
    (int)sub_55688,
    (int)"Write the value of an expression to an srec file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in srec format.",
    (int **)&dword_4747CC);
  sub_53274(
    "memory",
    -1,
    (int)sub_558E0,
    (int)"Write contents of memory to an ihex file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory within\n"
         "the range [START .. STOP) to the specified FILE in intel hex format.",
    (int **)&dword_4747C8);
  sub_53274(
    "value",
    -1,
    (int)sub_55674,
    (int)"Write the value of an expression to an ihex file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in intel hex format.",
    (int **)&dword_4747C8);
  sub_53274(
    "memory",
    -1,
    (int)sub_558CC,
    (int)"Write contents of memory to a verilog hex file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory within\n"
         "the range [START .. STOP) to the specified FILE in verilog hex format.",
    (int **)&dword_4747C4);
  sub_53274(
    "value",
    -1,
    (int)sub_55660,
    (int)"Write the value of an expression to a verilog hex file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in verilog hex format.",
    (int **)&dword_4747C4);
  sub_53274(
    "memory",
    -1,
    (int)sub_558B8,
    (int)"Write contents of memory to a tekhex file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory\n"
         "within the range [START .. STOP) to the specified FILE in tekhex format.",
    (int **)&dword_4747C0);
  sub_53274(
    "value",
    -1,
    (int)sub_5564C,
    (int)"Write the value of an expression to a tekhex file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in tekhex format.",
    (int **)&dword_4747C0);
  sub_53274(
    "memory",
    -1,
    (int)sub_558A4,
    (int)"Write contents of memory to a raw binary file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory\n"
         "within the range [START .. STOP) to the specified FILE in binary format.",
    (int **)&dword_4747BC);
  sub_53274(
    "value",
    -1,
    (int)sub_55638,
    (int)"Write the value of an expression to a raw binary file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in raw target ordered bytes.",
    (int **)&dword_4747BC);
  sub_53274(
    "memory",
    -1,
    (int)sub_55890,
    (int)"Append contents of memory to a raw binary file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory within the\n"
         "range [START .. STOP) to the specified FILE in raw target ordered bytes.",
    (int **)&dword_4747B8);
  sub_53274(
    "value",
    -1,
    (int)sub_55624,
    (int)"Append the value of an expression to a raw binary file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in raw target ordered bytes.",
    (int **)&dword_4747B8);
  result = sub_539C0(
             "restore",
             1,
             (int)sub_55914,
             (int)"Restore the contents of FILE to target memory.\n"
                  "Arguments are FILE OFFSET START END where all except FILE are optional.\n"
                  "OFFSET will be added to the base address of the file (default zero).\n"
                  "If START and END are given, only the file contents within that range\n"
                  "(file relative) will be restored to target memory.");
  *(_DWORD *)(result + 64) = 1010944;
  return result;
}
