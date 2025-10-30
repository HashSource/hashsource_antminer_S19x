int sub_1A6B68()
{
  int v0; // r0

  sub_533F8(
    "maintenance",
    11,
    (int)sub_1A5D88,
    (int)"Commands for use by GDB maintainers.\n"
         "Includes commands to dump specific internal GDB structures in\n"
         "a human readable form, to cause GDB to deliberately dump core, etc.",
    &dword_47478C,
    (int)"maintenance ",
    0,
    (int **)&dword_474744);
  sub_547B0((int)"mt", "maintenance", 11, 1);
  sub_533F8(
    "info",
    11,
    (int)sub_1A5D4C,
    (int)"Commands for showing internal info about the program being debugged.",
    &dword_474788,
    (int)"maintenance info ",
    0,
    (int **)&dword_47478C);
  sub_54724((int)"i", (unsigned __int8 *)"info", 11, 1, &dword_47478C);
  sub_53274(
    "sections",
    11,
    (int)sub_1A6444,
    (int)"List the BFD sections of the exec and core files. \n"
         "Arguments may be any combination of:\n"
         "\t[one or more section names]\n"
         "\tALLOC LOAD RELOC READONLY CODE DATA ROM CONSTRUCTOR\n"
         "\tHAS_CONTENTS NEVER_LOAD COFF_SHARED_LIBRARY IS_COMMON\n"
         "Sections matching any argument will be listed (no argument\n"
         "implies all sections).  In addition, the special argument\n"
         "\tALLOBJ\n"
         "lists all sections from all object files, including shared libraries.",
    (int **)&dword_474788);
  sub_533F8(
    "print",
    11,
    (int)sub_1A5D10,
    (int)"Maintenance command for printing GDB internal state.",
    &dword_474784,
    (int)"maintenance print ",
    0,
    (int **)&dword_47478C);
  sub_533F8(
    "set",
    11,
    (int)sub_1A5CD4,
    (int)"Set GDB internal variables used by the GDB maintainer.\n"
         "Configure variables internal to GDB that aid in GDB's maintenance",
    &dword_487A7C,
    (int)"maintenance set ",
    0,
    (int **)&dword_47478C);
  sub_533F8(
    "show",
    11,
    (int)sub_1A5DEC,
    (int)"Show GDB internal variables used by the GDB maintainer.\n"
         "Configure variables internal to GDB that aid in GDB's maintenance",
    &dword_487A84,
    (int)"maintenance show ",
    0,
    (int **)&dword_47478C);
  sub_53274(
    "dump-me",
    11,
    (int)sub_1A617C,
    (int)"Get fatal error; make debugger dump its core.\n"
         "GDB sets its handling of SIGQUIT back to SIG_DFL and then sends\n"
         "itself a SIGQUIT signal.",
    (int **)&dword_47478C);
  sub_53274(
    "internal-error",
    11,
    (int)sub_1A5910,
    (int)"Give GDB an internal error.\nCause GDB to behave as if an internal error was detected.",
    (int **)&dword_47478C);
  sub_53274(
    "internal-warning",
    11,
    (int)sub_1A5E2C,
    (int)"Give GDB an internal warning.\nCause GDB to behave as if an internal warning was reported.",
    (int **)&dword_47478C);
  sub_53274(
    "demangler-warning",
    11,
    (int)sub_1A5E04,
    (int)"Give GDB a demangler warning.\nCause GDB to behave as if a demangler warning was reported.",
    (int **)&dword_47478C);
  v0 = sub_53274(
         "demangle",
         11,
         (int)sub_1A56FC,
         (int)"This command has been moved to \"demangle\".",
         (int **)&dword_47478C);
  sub_532A8(v0, (int)"demangle");
  sub_533F8(
    "per-command",
    11,
    (int)sub_1A60D4,
    (int)"Per-command statistics settings.",
    &dword_487A90,
    (int)"set per-command ",
    1,
    (int **)&dword_487A7C);
  sub_533F8(
    "per-command",
    11,
    (int)sub_1A5DD4,
    (int)"Show per-command statistics settings.",
    &dword_487A80,
    (int)"show per-command ",
    0,
    (int **)&dword_487A84);
  sub_535B8(
    "time",
    11,
    (int)&dword_487A94,
    "Set whether to display per-command execution time.",
    "Show whether to display per-command execution time.",
    "If enabled, the execution time for each command will be\ndisplayed following the command's output.",
    0,
    0,
    (int **)&dword_487A90,
    (int **)&dword_487A80);
  sub_535B8(
    "space",
    11,
    (int)&dword_487A98,
    "Set whether to display per-command space usage.",
    "Show whether to display per-command space usage.",
    "If enabled, the space usage for each command will be\ndisplayed following the command's output.",
    0,
    0,
    (int **)&dword_487A90,
    (int **)&dword_487A80);
  sub_535B8(
    (char *)&aLineNumbersRec[32],
    11,
    (int)&dword_487A9C,
    "Set whether to display per-command symtab statistics.",
    "Show whether to display per-command symtab statistics.",
    "If enabled, the basic symtab statistics for each command will be\ndisplayed following the command's output.",
    0,
    0,
    (int **)&dword_487A90,
    (int **)&dword_487A80);
  sub_53274(
    "time",
    11,
    (int)sub_1A66E4,
    (int)"Set the display of time usage.\n"
         "If nonzero, will cause the execution time for each command to be\n"
         "displayed, following the command's output.",
    (int **)&dword_47478C);
  sub_53274(
    "space",
    11,
    (int)sub_1A6724,
    (int)"Set the display of space usage.\n"
         "If nonzero, will cause the execution space for each command to be\n"
         "displayed, following the command's output.",
    (int **)&dword_47478C);
  sub_53274(
    "type",
    11,
    (int)sub_256120,
    (int)"Print a type chain for a given symbol.\n"
         "For each node in a type chain, print the raw data for each member of\n"
         "the type structure, and the interpretation of the data.",
    (int **)&dword_474784);
  sub_53274("statistics", 11, (int)sub_1A5DC4, (int)"Print statistics about internal gdb state.", (int **)&dword_474784);
  sub_53274(
    "architecture",
    11,
    (int)sub_1A7190,
    (int)"Print the internal architecture configuration.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  sub_533F8(
    "check",
    11,
    (int)sub_1A5C98,
    (int)"Commands for checking internal gdb state.",
    &dword_474780,
    (int)"maintenance check ",
    0,
    (int **)&dword_47478C);
  sub_53274(
    "translate-address",
    11,
    (int)&loc_1A593C,
    (int)"Translate a section name and address to a symbol.",
    (int **)&dword_47478C);
  sub_53274(
    "deprecate",
    11,
    (int)sub_1A58DC,
    (int)"Deprecate a command.  Note that this is just in here so the \n"
         "testsuite can check the command deprecator. You probably shouldn't use this,\n"
         "rather you should use the C function deprecate_cmd().  If you decide you \n"
         "want to use it: maintenance deprecate 'commandname' \"replacement\". The \n"
         "replacement is optional.",
    (int **)&dword_47478C);
  sub_53274(
    "undeprecate",
    11,
    (int)sub_1A58A8,
    (int)"Undeprecate a command.  Note that this is just in here so the \n"
         "testsuite can check the command deprecator. You probably shouldn't use this,\n"
         "If you decide you want to use it: maintenance undeprecate 'commandname'",
    (int **)&dword_47478C);
  sub_53274(
    "selftest",
    11,
    (int)sub_1A56F0,
    (int)"Run gdb's unit tests.\n"
         "Usage: maintenance selftest [filter]\n"
         "This will run any unit tests that were built in to gdb.\n"
         "If a filter is given, only the tests with that value in their name will ran.",
    (int **)&dword_47478C);
  sub_53274("selftests", 11, (int)sub_1A6764, (int)"List the registered selftests.", (int **)&dword_474788);
  sub_53874(
    "watchdog",
    11,
    (int)&dword_487AA0,
    "Set watchdog timer.",
    "Show watchdog timer.",
    "When non-zero, this timeout is used instead of waiting forever for a target\n"
    "to finish a low-level step or continue operation.  If the specified amount\n"
    "of time passes without a response from the target, an error occurs.",
    0,
    (int)sub_1A56C8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  return sub_535B8(
           "profile",
           11,
           (int)&dword_487A88,
           "Set internal profiling.",
           "Show internal profiling.",
           "When enabled GDB is profiled.",
           (int)sub_1A606C,
           (int)sub_1A56B8,
           (int **)&dword_487A7C,
           (int **)&dword_487A84);
}
