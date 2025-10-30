int sub_1C798C()
{
  int v0; // r0
  int v1; // r0

  dword_487CFC = -1;
  sub_1B96F8((int)&loc_1C6C28);
  sub_5398C("address", (int)sub_1C65E0, (int)"Describe where symbol SYM is stored.");
  sub_5398C(
    "symbol",
    (int)sub_1C6134,
    (int)"Describe what symbol is at location ADDR.\nOnly for symbols with fixed locations (global or static scope).");
  sub_539C0(
    "x",
    1,
    (int)sub_1C9150,
    (int)"Examine memory: x/FMT ADDRESS.\n"
         "ADDRESS is an expression for the memory address to examine.\n"
         "FMT is a repeat count followed by a format letter and a size letter.\n"
         "Format letters are o(octal), x(hex), d(decimal), u(unsigned decimal),\n"
         "  t(binary), f(float), a(address), i(instruction), c(char), s(string)\n"
         "  and z(hex, zero padded on the left).\n"
         "Size letters are b(byte), h(halfword), w(word), g(giant, 8 bytes).\n"
         "The specified number of objects of the specified size are printed\n"
         "according to the format.  If a negative number is specified, memory is\n"
         "examined backward from the address.\n"
         "\n"
         "Defaults for format and size letters are those previously used.\n"
         "Default count is 1.  Default address is following last thing printed\n"
         "with this command or \"print\".");
  sub_5398C("display", (int)sub_1C5B88, (int)"Expressions to display when program stops, with code numbers.");
  sub_53274(
    "undisplay",
    1,
    (int)sub_1C6E10,
    (int)"Cancel some expressions to be displayed when program stops.\n"
         "Arguments are the code numbers of the expressions to stop displaying.\n"
         "No argument means cancel all automatic-display expressions.\n"
         "\"delete display\" has the same effect as this command.\n"
         "Do \"info display\" to see current list of code numbers.",
    (int **)&dword_474744);
  sub_539C0(
    "display",
    1,
    (int)sub_1C8F4C,
    (int)"Print value of expression EXP each time the program stops.\n"
         "/FMT may be used before EXP as in the \"print\" command.\n"
         "/FMT \"i\" or \"s\" or including a size-letter is allowed,\n"
         "as in the \"x\" command, and then EXP is used to get the address to examine\n"
         "and examining is done as in the \"x\" command.\n"
         "\n"
         "With no argument, display all currently requested auto-display expressions.\n"
         "Use \"undisplay\" to cancel display requests previously made.");
  sub_53274(
    "display",
    1,
    (int)sub_1C6DC0,
    (int)"Enable some expressions to be displayed when program stops.\n"
         "Arguments are the code numbers of the expressions to resume displaying.\n"
         "No argument means enable all automatic-display expressions.\n"
         "Do \"info display\" to see current list of code numbers.",
    &dword_4747AC);
  sub_53274(
    "display",
    1,
    (int)sub_1C6DB8,
    (int)"Disable some expressions to be displayed when program stops.\n"
         "Arguments are the code numbers of the expressions to stop displaying.\n"
         "No argument means disable all automatic-display expressions.\n"
         "Do \"info display\" to see current list of code numbers.",
    &dword_4747A8);
  sub_53274(
    "display",
    1,
    (int)sub_1C6E10,
    (int)"Cancel some expressions to be displayed when program stops.\n"
         "Arguments are the code numbers of the expressions to stop displaying.\n"
         "No argument means cancel all automatic-display expressions.\n"
         "Do \"info display\" to see current list of code numbers.",
    &dword_4747A0);
  sub_539C0(
    "printf",
    1,
    (int)sub_1C99B8,
    (int)"printf \"printf format string\", arg1, arg2, arg3, ..., argn\n"
         "This is useful for formatted output in user-defined commands.");
  sub_539C0(
    "output",
    1,
    (int)sub_1C7780,
    (int)"Like \"print\" but don't put in value history and don't print newline.\n"
         "This is useful in user-defined commands.");
  sub_533F8(
    "set",
    1,
    (int)&loc_1C5A58,
    (int)"Evaluate expression EXP and assign result to variable VAR, using assignment\n"
         "syntax appropriate for the current language (VAR = EXP or VAR := EXP for\n"
         "example).  VAR may be a debugger \"convenience\" variable (names starting\n"
         "with $), a register (a few standard names starting with $), or an actual\n"
         "variable in the program being debugged.  EXP is any valid expression.\n"
         "Use \"set variable\" for variables with names identical to set subcommands.\n"
         "\n"
         "With a subcommand, this command modifies parts of the gdb environment.\n"
         "You can see these environment settings with the \"show\" command.",
    &dword_47475C,
    (int)"set ",
    1,
    (int **)&dword_474744);
  if ( dword_487A74 )
    sub_539C0(
      "assign",
      1,
      (int)&loc_1C5A58,
      (int)"Evaluate expression EXP and assign result to variable VAR, using assignment\n"
           "syntax appropriate for the current language (VAR = EXP or VAR := EXP for\n"
           "example).  VAR may be a debugger \"convenience\" variable (names starting\n"
           "with $), a register (a few standard names starting with $), or an actual\n"
           "variable in the program being debugged.  EXP is any valid expression.\n"
           "Use \"set variable\" for variables with names identical to set subcommands.\n"
           "\n"
           "With a subcommand, this command modifies parts of the gdb environment.\n"
           "You can see these environment settings with the \"show\" command.");
  v0 = sub_539C0(
         "call",
         1,
         (int)sub_1C7668,
         (int)"Call a function in the program.\n"
              "The argument is the function name and arguments, in the notation of the\n"
              "current working language.  The result is printed and saved in the value\n"
              "history, if it is not void.");
  sub_5324C(v0, (int)sub_F7418);
  sub_53274(
    "variable",
    1,
    (int)&loc_1C5A58,
    (int)"Evaluate expression EXP and assign result to variable VAR, using assignment\n"
         "syntax appropriate for the current language (VAR = EXP or VAR := EXP for\n"
         "example).  VAR may be a debugger \"convenience\" variable (names starting\n"
         "with $), a register (a few standard names starting with $), or an actual\n"
         "variable in the program being debugged.  EXP is any valid expression.\n"
         "This may usually be abbreviated to simply \"set\".",
    (int **)&dword_47475C);
  v1 = sub_539C0(
         "print",
         1,
         (int)sub_1C7660,
         (int)"Print value of expression EXP.\n"
              "Variables accessible are those of the lexical environment of the selected\n"
              "stack frame, plus all those whose scope is global or an entire file.\n"
              "\n"
              "$NUM gets previous value number NUM.  $ and $$ are the last two values.\n"
              "$$NUM refers to NUM'th value back from the last one.\n"
              "Names starting with $ refer to registers (with the values they would have\n"
              "if the program were to return to the stack frame now selected, restoring\n"
              "all registers saved by frames farther in) or else to debugger\n"
              "\"convenience\" variables (any such name not a known register).\n"
              "Use assignment expressions to give values to convenience variables.\n"
              "\n"
              "{TYPE}ADREXP refers to a datum of data type TYPE, located at address ADREXP.\n"
              "@ is a binary operator for treating consecutive data objects\n"
              "anywhere in memory as an array.  FOO@NUM gives an array whose first\n"
              "element is FOO, whose second element is stored in the space following\n"
              "where FOO is stored, etc.  FOO must be an expression whose value\n"
              "resides in memory.\n"
              "\n"
              "EXP may be preceded with /FMT, where FMT is a format letter\n"
              "but no count or size letter (see \"x\" command).");
  sub_5324C(v1, (int)sub_F7418);
  sub_547B0((int)"p", (unsigned __int8 *)"print", 1, 1);
  sub_547B0((int)"inspect", (unsigned __int8 *)"print", 1, 1);
  sub_5380C(
    "max-symbolic-offset",
    -1,
    (int)&dword_46DAA4,
    "Set the largest offset that will be printed in <symbol+1234> form.",
    "Show the largest offset that will be printed in <symbol+1234> form.",
    "Tell GDB to only display the symbolic form of an address if the\n"
    "offset between the closest earlier symbol and the address is less than\n"
    "the specified maximum offset.  The default is \"unlimited\", which tells GDB\n"
    "to always print the symbolic form of an address if any symbol precedes\n"
    "it.  Zero is equivalent to \"unlimited\".",
    0,
    (int)sub_1C552C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "symbol-filename",
    -1,
    (int)&dword_487CF4,
    "Set printing of source filename and line number with <symbol>.",
    "Show printing of source filename and line number with <symbol>.",
    0,
    0,
    (int)sub_1C551C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  return sub_539C0(
           "eval",
           -1,
           (int)sub_1C9914,
           (int)"Convert \"printf format string\", arg1, arg2, arg3, ..., argn to\na command line, and call it.");
}
