int sub_D23EC()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0

  if ( !dword_4783C0 )
    sub_CA520();
  sub_1B9580(sub_C91E0);
  sub_1B96F8(sub_CACD8);
  sub_1BA314(sub_C76D0);
  dword_4787FC = sub_1B6AD8(0, sub_CB1C8);
  dword_478348 = 0;
  dword_478360 = 0;
  dword_478898 = 0;
  sub_539C0(
    "ignore",
    6,
    (int)sub_D17AC,
    (int)"Set ignore-count of breakpoint number N to COUNT.\nUsage is `ignore N COUNT'.");
  sub_539C0(
    "commands",
    6,
    (int)sub_D46D0,
    (int)"Set commands to be executed when the given breakpoints are hit.\n"
         "Give a space-separated breakpoint list as argument after \"commands\".\n"
         "A list element can be a breakpoint number (e.g. `5') or a range of numbers\n"
         "(e.g. `5-7').\n"
         "With no argument, the targeted breakpoint is the last one set.\n"
         "The commands themselves follow starting on the next line.\n"
         "Type a line containing \"end\" to indicate the end of them.\n"
         "Give \"silent\" as the first line to make the breakpoint silent;\n"
         "then no output is printed when it is hit, except what the commands print.");
  v0 = sub_539C0(
         "condition",
         6,
         (int)sub_DD084,
         (int)"Specify breakpoint number N to break only if COND is true.\n"
              "Usage is `condition N COND', where N is an integer and COND is an\n"
              "expression to be evaluated whenever breakpoint N is reached.");
  sub_5324C(v0, 823460);
  v1 = sub_539C0(
         "tbreak",
         6,
         (int)sub_DAB38,
         (int)"Set a temporary breakpoint.\n"
              "Like \"break\" except the breakpoint is only temporary,\n"
              "so it will be deleted when hit.  Equivalent to \"break\" followed\n"
              "by using \"enable delete\" on the breakpoint number.\n"
              "\n"
              "tbreak [PROBE_MODIFIER] [LOCATION] [thread THREADNUM] [if CONDITION]\n"
              "PROBE_MODIFIER shall be present if the command is to be placed in a\n"
              "probe point.  Accepted values are `-probe' (for a generic, automatically\n"
              "guessed probe type), `-probe-stap' (for a SystemTap probe) or \n"
              "`-probe-dtrace' (for a DTrace probe).\n"
              "LOCATION may be a linespec, address, or explicit location as described\n"
              "below.\n"
              "\n"
              "With no LOCATION, uses current execution address of the selected\n"
              "stack frame.  This is useful for breaking on return to a stack frame.\n"
              "\n"
              "THREADNUM is the number from \"info threads\".\n"
              "CONDITION is a boolean expression.\n"
              "\n"
              "Linespecs are colon-separated lists of location parameters, such as\n"
              "source filename, function name, label name, and line number.\n"
              "Example: To specify the start of a label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use\n"
              "\"factorial.c:fact:the_top\".\n"
              "\n"
              "Address locations begin with \"*\" and specify an exact address in the\n"
              "program.  Example: To specify the fourth byte past the start function\n"
              "\"main\", use \"*main + 4\".\n"
              "\n"
              "Explicit locations are similar to linespecs but use an option/argument\n"
              "syntax to specify location parameters.\n"
              "Example: To specify the start of the label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
              "-function fact -label the_top\".\n"
              "\n"
              "By default, a specified function is matched against the program's\n"
              "functions in all scopes.  For C++, this means in all namespaces and\n"
              "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
              "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
              "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
              "specified name as a complete fully-qualified name instead.\n"
              "\n"
              "Multiple breakpoints at one place are permitted, and useful if their\n"
              "conditions are different.\n"
              "\n"
              "Do \"help breakpoints\" for info on other commands dealing with breakpoints.");
  sub_5324C(v1, (int)sub_F7428);
  v2 = sub_539C0(
         "hbreak",
         6,
         (int)sub_DAC8C,
         (int)"Set a hardware assisted breakpoint.\n"
              "Like \"break\" except the breakpoint requires hardware support,\n"
              "some target hardware may not have this support.\n"
              "\n"
              "hbreak [PROBE_MODIFIER] [LOCATION] [thread THREADNUM] [if CONDITION]\n"
              "PROBE_MODIFIER shall be present if the command is to be placed in a\n"
              "probe point.  Accepted values are `-probe' (for a generic, automatically\n"
              "guessed probe type), `-probe-stap' (for a SystemTap probe) or \n"
              "`-probe-dtrace' (for a DTrace probe).\n"
              "LOCATION may be a linespec, address, or explicit location as described\n"
              "below.\n"
              "\n"
              "With no LOCATION, uses current execution address of the selected\n"
              "stack frame.  This is useful for breaking on return to a stack frame.\n"
              "\n"
              "THREADNUM is the number from \"info threads\".\n"
              "CONDITION is a boolean expression.\n"
              "\n"
              "Linespecs are colon-separated lists of location parameters, such as\n"
              "source filename, function name, label name, and line number.\n"
              "Example: To specify the start of a label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use\n"
              "\"factorial.c:fact:the_top\".\n"
              "\n"
              "Address locations begin with \"*\" and specify an exact address in the\n"
              "program.  Example: To specify the fourth byte past the start function\n"
              "\"main\", use \"*main + 4\".\n"
              "\n"
              "Explicit locations are similar to linespecs but use an option/argument\n"
              "syntax to specify location parameters.\n"
              "Example: To specify the start of the label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
              "-function fact -label the_top\".\n"
              "\n"
              "By default, a specified function is matched against the program's\n"
              "functions in all scopes.  For C++, this means in all namespaces and\n"
              "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
              "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
              "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
              "specified name as a complete fully-qualified name instead.\n"
              "\n"
              "Multiple breakpoints at one place are permitted, and useful if their\n"
              "conditions are different.\n"
              "\n"
              "Do \"help breakpoints\" for info on other commands dealing with breakpoints.");
  sub_5324C(v2, (int)sub_F7428);
  v3 = sub_539C0(
         "thbreak",
         6,
         (int)sub_DAC80,
         (int)"Set a temporary hardware assisted breakpoint.\n"
              "Like \"hbreak\" except the breakpoint is only temporary,\n"
              "so it will be deleted when hit.\n"
              "\n"
              "thbreak [PROBE_MODIFIER] [LOCATION] [thread THREADNUM] [if CONDITION]\n"
              "PROBE_MODIFIER shall be present if the command is to be placed in a\n"
              "probe point.  Accepted values are `-probe' (for a generic, automatically\n"
              "guessed probe type), `-probe-stap' (for a SystemTap probe) or \n"
              "`-probe-dtrace' (for a DTrace probe).\n"
              "LOCATION may be a linespec, address, or explicit location as described\n"
              "below.\n"
              "\n"
              "With no LOCATION, uses current execution address of the selected\n"
              "stack frame.  This is useful for breaking on return to a stack frame.\n"
              "\n"
              "THREADNUM is the number from \"info threads\".\n"
              "CONDITION is a boolean expression.\n"
              "\n"
              "Linespecs are colon-separated lists of location parameters, such as\n"
              "source filename, function name, label name, and line number.\n"
              "Example: To specify the start of a label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use\n"
              "\"factorial.c:fact:the_top\".\n"
              "\n"
              "Address locations begin with \"*\" and specify an exact address in the\n"
              "program.  Example: To specify the fourth byte past the start function\n"
              "\"main\", use \"*main + 4\".\n"
              "\n"
              "Explicit locations are similar to linespecs but use an option/argument\n"
              "syntax to specify location parameters.\n"
              "Example: To specify the start of the label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
              "-function fact -label the_top\".\n"
              "\n"
              "By default, a specified function is matched against the program's\n"
              "functions in all scopes.  For C++, this means in all namespaces and\n"
              "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
              "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
              "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
              "specified name as a complete fully-qualified name instead.\n"
              "\n"
              "Multiple breakpoints at one place are permitted, and useful if their\n"
              "conditions are different.\n"
              "\n"
              "Do \"help breakpoints\" for info on other commands dealing with breakpoints.");
  sub_5324C(v3, (int)sub_F7428);
  sub_533F8(
    "enable",
    6,
    (int)sub_DD06C,
    (int)"Enable some breakpoints.\n"
         "Give breakpoint numbers (separated by spaces) as arguments.\n"
         "With no subcommand, breakpoints are enabled until you command otherwise.\n"
         "This is used to cancel the effect of the \"disable\" command.\n"
         "With a subcommand you can enable temporarily.",
    &dword_4747AC,
    (int)"enable ",
    1,
    (int **)&dword_474744);
  sub_547B0((int)"en", "enable", 6, 1);
  sub_533F8(
    "breakpoints",
    6,
    (int)sub_DD06C,
    (int)"Enable some breakpoints.\n"
         "Give breakpoint numbers (separated by spaces) as arguments.\n"
         "This is used to cancel the effect of the \"disable\" command.\n"
         "May be abbreviated to simply \"enable\".\n",
    &dword_4788A4,
    (int)"enable breakpoints ",
    1,
    &dword_4747AC);
  sub_53274(
    "once",
    -1,
    (int)sub_CACAC,
    (int)"Enable breakpoints for one hit.  Give breakpoint numbers.\n"
         "If a breakpoint is hit while enabled in this fashion, it becomes disabled.",
    &dword_4788A4);
  sub_53274(
    "delete",
    -1,
    (int)sub_CAC80,
    (int)"Enable breakpoints and delete when hit.  Give breakpoint numbers.\n"
         "If a breakpoint is hit while enabled in this fashion, it is deleted.",
    &dword_4788A4);
  sub_53274(
    "count",
    -1,
    (int)sub_CAC1C,
    (int)"Enable breakpoints for COUNT hits.  Give count and then breakpoint numbers.\n"
         "If a breakpoint is hit while enabled in this fashion,\n"
         "the count is decremented; when it reaches zero, the breakpoint is disabled.",
    &dword_4788A4);
  sub_53274(
    "delete",
    -1,
    (int)sub_CAC80,
    (int)"Enable breakpoints and delete when hit.  Give breakpoint numbers.\n"
         "If a breakpoint is hit while enabled in this fashion, it is deleted.",
    &dword_4747AC);
  sub_53274(
    "once",
    -1,
    (int)sub_CACAC,
    (int)"Enable breakpoints for one hit.  Give breakpoint numbers.\n"
         "If a breakpoint is hit while enabled in this fashion, it becomes disabled.",
    &dword_4747AC);
  sub_53274(
    "count",
    -1,
    (int)sub_CAC1C,
    (int)"Enable breakpoints for COUNT hits.  Give count and then breakpoint numbers.\n"
         "If a breakpoint is hit while enabled in this fashion,\n"
         "the count is decremented; when it reaches zero, the breakpoint is disabled.",
    &dword_4747AC);
  sub_533F8(
    "disable",
    6,
    (int)sub_DD064,
    (int)"Disable some breakpoints.\n"
         "Arguments are breakpoint numbers with spaces in between.\n"
         "To disable all breakpoints, give no argument.\n"
         "A disabled breakpoint is not forgotten, but has no effect until re-enabled.",
    &dword_4747A8,
    (int)"disable ",
    1,
    (int **)&dword_474744);
  sub_547B0((int)"dis", "disable", 6, 1);
  sub_547B0((int)"disa", "disable", 6, 1);
  sub_53274(
    "breakpoints",
    8,
    (int)sub_DD064,
    (int)"Disable some breakpoints.\n"
         "Arguments are breakpoint numbers with spaces in between.\n"
         "To disable all breakpoints, give no argument.\n"
         "A disabled breakpoint is not forgotten, but has no effect until re-enabled.\n"
         "This command may be abbreviated \"disable\".",
    &dword_4747A8);
  sub_533F8(
    "delete",
    6,
    (int)sub_DC24C,
    (int)"Delete some breakpoints or auto-display expressions.\n"
         "Arguments are breakpoint numbers with spaces in between.\n"
         "To delete all breakpoints, give no argument.\n"
         "\n"
         "Also a prefix command for deletion of other GDB objects.\n"
         "The \"unset\" command is also an alias for \"delete\".",
    &dword_4747A0,
    (int)"delete ",
    1,
    (int **)&dword_474744);
  sub_547B0((int)"d", (unsigned __int8 *)"delete", 6, 1);
  sub_547B0((int)"del", (unsigned __int8 *)"delete", 6, 1);
  sub_53274(
    "breakpoints",
    8,
    (int)sub_DC24C,
    (int)"Delete some breakpoints or auto-display expressions.\n"
         "Arguments are breakpoint numbers with spaces in between.\n"
         "To delete all breakpoints, give no argument.\n"
         "This command may be abbreviated \"delete\".",
    &dword_4747A0);
  sub_539C0(
    "clear",
    6,
    (int)sub_DBD5C,
    (int)"Clear breakpoint at specified location.\n"
         "Argument may be a linespec, explicit, or address location as described below.\n"
         "\n"
         "With no argument, clears all breakpoints in the line that the selected frame\n"
         "is executing in.\n"
         "\n"
         "Linespecs are colon-separated lists of location parameters, such as\n"
         "source filename, function name, label name, and line number.\n"
         "Example: To specify the start of a label named \"the_top\" in the\n"
         "function \"fact\" in the file \"factorial.c\", use\n"
         "\"factorial.c:fact:the_top\".\n"
         "\n"
         "Address locations begin with \"*\" and specify an exact address in the\n"
         "program.  Example: To specify the fourth byte past the start function\n"
         "\"main\", use \"*main + 4\".\n"
         "\n"
         "Explicit locations are similar to linespecs but use an option/argument\n"
         "syntax to specify location parameters.\n"
         "Example: To specify the start of the label named \"the_top\" in the\n"
         "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
         "-function fact -label the_top\".\n"
         "\n"
         "By default, a specified function is matched against the program's\n"
         "functions in all scopes.  For C++, this means in all namespaces and\n"
         "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
         "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
         "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
         "specified name as a complete fully-qualified name instead.\n"
         "\n"
         "See also the \"delete\" command which clears breakpoints by number.");
  sub_547B0((int)"cl", "clear", 6, 1);
  v4 = sub_539C0(
         "break",
         6,
         (int)sub_DAB2C,
         (int)"Set breakpoint at specified location.\n"
              "break [PROBE_MODIFIER] [LOCATION] [thread THREADNUM] [if CONDITION]\n"
              "PROBE_MODIFIER shall be present if the command is to be placed in a\n"
              "probe point.  Accepted values are `-probe' (for a generic, automatically\n"
              "guessed probe type), `-probe-stap' (for a SystemTap probe) or \n"
              "`-probe-dtrace' (for a DTrace probe).\n"
              "LOCATION may be a linespec, address, or explicit location as described\n"
              "below.\n"
              "\n"
              "With no LOCATION, uses current execution address of the selected\n"
              "stack frame.  This is useful for breaking on return to a stack frame.\n"
              "\n"
              "THREADNUM is the number from \"info threads\".\n"
              "CONDITION is a boolean expression.\n"
              "\n"
              "Linespecs are colon-separated lists of location parameters, such as\n"
              "source filename, function name, label name, and line number.\n"
              "Example: To specify the start of a label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use\n"
              "\"factorial.c:fact:the_top\".\n"
              "\n"
              "Address locations begin with \"*\" and specify an exact address in the\n"
              "program.  Example: To specify the fourth byte past the start function\n"
              "\"main\", use \"*main + 4\".\n"
              "\n"
              "Explicit locations are similar to linespecs but use an option/argument\n"
              "syntax to specify location parameters.\n"
              "Example: To specify the start of the label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
              "-function fact -label the_top\".\n"
              "\n"
              "By default, a specified function is matched against the program's\n"
              "functions in all scopes.  For C++, this means in all namespaces and\n"
              "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
              "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
              "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
              "specified name as a complete fully-qualified name instead.\n"
              "\n"
              "Multiple breakpoints at one place are permitted, and useful if their\n"
              "conditions are different.\n"
              "\n"
              "Do \"help breakpoints\" for info on other commands dealing with breakpoints.");
  sub_5324C(v4, (int)sub_F7428);
  sub_547B0((int)"b", "break", 0, 1);
  sub_547B0((int)"br", "break", 0, 1);
  sub_547B0((int)"bre", "break", 0, 1);
  sub_547B0((int)"brea", "break", 0, 1);
  if ( dword_487A74 )
  {
    sub_5348C(
      "stop",
      6,
      (int)sub_C6DE8,
      (int)"Break in function/address or break at a line in the current file.",
      (int)&dword_4747A4,
      (int)"stop ",
      1,
      (int **)&dword_474744);
    sub_53274("in", 6, (int)sub_DABE4, (int)"Break in function or address.", &dword_4747A4);
    sub_53274("at", 6, (int)sub_DAB44, (int)"Break at a line in the current file.", &dword_4747A4);
    sub_539C0(
      "status",
      5,
      (int)sub_D5D90,
      (int)"Status of user-settable breakpoints, or breakpoint number NUMBER.\n"
           "The \"Type\" column indicates one of:\n"
           "\tbreakpoint     - normal breakpoint\n"
           "\twatchpoint     - watchpoint\n"
           "The \"Disp\" column contains one of \"keep\", \"del\", or \"dis\" to indicate\n"
           "the disposition of the breakpoint after it gets hit.  \"dis\" means that the\n"
           "breakpoint will be disabled.  The \"Address\" and \"What\" columns indicate the\n"
           "address and file/line number respectively.\n"
           "\n"
           "Convenience variable \"$_\" and default examine address for \"x\"\n"
           "are set to the address of the last breakpoint listed unless the command\n"
           "is prefixed with \"server \".\n"
           "\n"
           "Convenience variable \"$bpnum\" contains the number of the last\n"
           "breakpoint set.");
  }
  sub_5398C(
    "breakpoints",
    (int)sub_D5D90,
    (int)"Status of specified breakpoints (all user-settable breakpoints if no argument).\n"
         "The \"Type\" column indicates one of:\n"
         "\tbreakpoint     - normal breakpoint\n"
         "\twatchpoint     - watchpoint\n"
         "The \"Disp\" column contains one of \"keep\", \"del\", or \"dis\" to indicate\n"
         "the disposition of the breakpoint after it gets hit.  \"dis\" means that the\n"
         "breakpoint will be disabled.  The \"Address\" and \"What\" columns indicate the\n"
         "address and file/line number respectively.\n"
         "\n"
         "Convenience variable \"$_\" and default examine address for \"x\"\n"
         "are set to the address of the last breakpoint listed unless the command\n"
         "is prefixed with \"server \".\n"
         "\n"
         "Convenience variable \"$bpnum\" contains the number of the last\n"
         "breakpoint set.");
  sub_54788((int)"b", (unsigned __int8 *)"breakpoints", 1);
  sub_53274(
    "breakpoints",
    11,
    (int)sub_D5D78,
    (int)"Status of all breakpoints, or breakpoint number NUMBER.\n"
         "The \"Type\" column indicates one of:\n"
         "\tbreakpoint     - normal breakpoint\n"
         "\twatchpoint     - watchpoint\n"
         "\tlongjmp        - internal breakpoint used to step through longjmp()\n"
         "\tlongjmp resume - internal breakpoint at the target of longjmp()\n"
         "\tuntil          - internal breakpoint used by the \"until\" command\n"
         "\tfinish         - internal breakpoint used by the \"finish\" command\n"
         "The \"Disp\" column contains one of \"keep\", \"del\", or \"dis\" to indicate\n"
         "the disposition of the breakpoint after it gets hit.  \"dis\" means that the\n"
         "breakpoint will be disabled.  The \"Address\" and \"What\" columns indicate the\n"
         "address and file/line number respectively.\n"
         "\n"
         "Convenience variable \"$_\" and default examine address for \"x\"\n"
         "are set to the address of the last breakpoint listed unless the command\n"
         "is prefixed with \"server \".\n"
         "\n"
         "Convenience variable \"$bpnum\" contains the number of the last\n"
         "breakpoint set.",
    (int **)&dword_474788);
  sub_533F8(
    "catch",
    6,
    (int)sub_C6E3C,
    (int)"Set catchpoints to catch events.",
    &dword_47889C,
    (int)"catch ",
    0,
    (int **)&dword_474744);
  sub_533F8(
    "tcatch",
    6,
    (int)sub_CC0F8,
    (int)"Set temporary catchpoints to catch events.",
    &dword_4788A0,
    (int)"tcatch ",
    0,
    (int **)&dword_474744);
  sub_D21C4("fork", (int)"Catch calls to fork.", (int)sub_DA194, 0, 2, 0);
  sub_D21C4("vfork", (int)"Catch calls to vfork.", (int)sub_DA194, 0, 3, 1);
  sub_D21C4("exec", (int)"Catch calls to exec.", (int)sub_D9F1C, 0, 0, 1);
  sub_D21C4(
    "load",
    (int)"Catch loads of shared libraries.\n"
         "Usage: catch load [REGEX]\n"
         "If REGEX is given, only stop for libraries matching the regular expression.",
    (int)sub_D9308,
    0,
    0,
    1);
  sub_D21C4(
    "unload",
    (int)"Catch unloads of shared libraries.\n"
         "Usage: catch unload [REGEX]\n"
         "If REGEX is given, only stop for libraries matching the regular expression.",
    (int)sub_D92D8,
    0,
    0,
    1);
  v5 = sub_539C0(
         "watch",
         6,
         (int)sub_D9F14,
         (int)"Set a watchpoint for an expression.\n"
              "Usage: watch [-l|-location] EXPRESSION\n"
              "A watchpoint stops execution of your program whenever the value of\n"
              "an expression changes.\n"
              "If -l or -location is given, this evaluates EXPRESSION and watches\n"
              "the memory to which it refers.");
  sub_5324C(v5, (int)sub_F7418);
  v6 = sub_539C0(
         "rwatch",
         6,
         (int)sub_D9F0C,
         (int)"Set a read watchpoint for an expression.\n"
              "Usage: rwatch [-l|-location] EXPRESSION\n"
              "A watchpoint stops execution of your program whenever the value of\n"
              "an expression is read.\n"
              "If -l or -location is given, this evaluates EXPRESSION and watches\n"
              "the memory to which it refers.");
  sub_5324C(v6, (int)sub_F7418);
  v7 = sub_539C0(
         "awatch",
         6,
         (int)sub_D9F04,
         (int)"Set a watchpoint for an expression.\n"
              "Usage: awatch [-l|-location] EXPRESSION\n"
              "A watchpoint stops execution of your program whenever the value of\n"
              "an expression is either read or written.\n"
              "If -l or -location is given, this evaluates EXPRESSION and watches\n"
              "the memory to which it refers.");
  sub_5324C(v7, (int)sub_F7418);
  sub_5398C("watchpoints", (int)sub_D5D14, (int)"Status of specified watchpoints (all watchpoints if no argument).");
  sub_53874(
    "can-use-hw-watchpoints",
    4,
    (int)&dword_478370,
    "Set debugger's willingness to use watchpoint hardware.",
    "Show debugger's willingness to use watchpoint hardware.",
    "If zero, gdb will not use hardware for new watchpoints, even if\n"
    "such is available.  (However, any hardware watchpoints that were\n"
    "created before setting this to nonzero, will continue to use watchpoint\n"
    "hardware.)",
    0,
    (int)sub_C76C0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  dword_478370 = 1;
  v8 = sub_539C0(
         "trace",
         6,
         (int)sub_DAFD0,
         (int)"Set a tracepoint at specified location.\n"
              "\n"
              "trace [PROBE_MODIFIER] [LOCATION] [thread THREADNUM] [if CONDITION]\n"
              "PROBE_MODIFIER shall be present if the command is to be placed in a\n"
              "probe point.  Accepted values are `-probe' (for a generic, automatically\n"
              "guessed probe type), `-probe-stap' (for a SystemTap probe) or \n"
              "`-probe-dtrace' (for a DTrace probe).\n"
              "LOCATION may be a linespec, address, or explicit location as described\n"
              "below.\n"
              "\n"
              "With no LOCATION, uses current execution address of the selected\n"
              "stack frame.  This is useful for breaking on return to a stack frame.\n"
              "\n"
              "THREADNUM is the number from \"info threads\".\n"
              "CONDITION is a boolean expression.\n"
              "\n"
              "Linespecs are colon-separated lists of location parameters, such as\n"
              "source filename, function name, label name, and line number.\n"
              "Example: To specify the start of a label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use\n"
              "\"factorial.c:fact:the_top\".\n"
              "\n"
              "Address locations begin with \"*\" and specify an exact address in the\n"
              "program.  Example: To specify the fourth byte past the start function\n"
              "\"main\", use \"*main + 4\".\n"
              "\n"
              "Explicit locations are similar to linespecs but use an option/argument\n"
              "syntax to specify location parameters.\n"
              "Example: To specify the start of the label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
              "-function fact -label the_top\".\n"
              "\n"
              "By default, a specified function is matched against the program's\n"
              "functions in all scopes.  For C++, this means in all namespaces and\n"
              "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
              "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
              "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
              "specified name as a complete fully-qualified name instead.\n"
              "\n"
              "Multiple breakpoints at one place are permitted, and useful if their\n"
              "conditions are different.\n"
              "\n"
              "Do \"help breakpoints\" for info on other commands dealing with breakpoints.\n"
              "Do \"help tracepoints\" for info on other tracepoint commands.");
  sub_5324C(v8, (int)sub_F7428);
  sub_547B0((int)"tp", (unsigned __int8 *)"trace", 8, 0);
  sub_547B0((int)"tr", (unsigned __int8 *)"trace", 8, 1);
  sub_547B0((int)"tra", (unsigned __int8 *)"trace", 8, 1);
  sub_547B0((int)"trac", (unsigned __int8 *)"trace", 8, 1);
  v9 = sub_539C0(
         "ftrace",
         6,
         (int)sub_DAF14,
         (int)"Set a fast tracepoint at specified location.\n"
              "\n"
              "ftrace [PROBE_MODIFIER] [LOCATION] [thread THREADNUM] [if CONDITION]\n"
              "PROBE_MODIFIER shall be present if the command is to be placed in a\n"
              "probe point.  Accepted values are `-probe' (for a generic, automatically\n"
              "guessed probe type), `-probe-stap' (for a SystemTap probe) or \n"
              "`-probe-dtrace' (for a DTrace probe).\n"
              "LOCATION may be a linespec, address, or explicit location as described\n"
              "below.\n"
              "\n"
              "With no LOCATION, uses current execution address of the selected\n"
              "stack frame.  This is useful for breaking on return to a stack frame.\n"
              "\n"
              "THREADNUM is the number from \"info threads\".\n"
              "CONDITION is a boolean expression.\n"
              "\n"
              "Linespecs are colon-separated lists of location parameters, such as\n"
              "source filename, function name, label name, and line number.\n"
              "Example: To specify the start of a label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use\n"
              "\"factorial.c:fact:the_top\".\n"
              "\n"
              "Address locations begin with \"*\" and specify an exact address in the\n"
              "program.  Example: To specify the fourth byte past the start function\n"
              "\"main\", use \"*main + 4\".\n"
              "\n"
              "Explicit locations are similar to linespecs but use an option/argument\n"
              "syntax to specify location parameters.\n"
              "Example: To specify the start of the label named \"the_top\" in the\n"
              "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
              "-function fact -label the_top\".\n"
              "\n"
              "By default, a specified function is matched against the program's\n"
              "functions in all scopes.  For C++, this means in all namespaces and\n"
              "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
              "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
              "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
              "specified name as a complete fully-qualified name instead.\n"
              "\n"
              "Multiple breakpoints at one place are permitted, and useful if their\n"
              "conditions are different.\n"
              "\n"
              "Do \"help breakpoints\" for info on other commands dealing with breakpoints.\n"
              "Do \"help tracepoints\" for info on other tracepoint commands.");
  sub_5324C(v9, (int)sub_F7428);
  v10 = sub_539C0(
          "strace",
          6,
          (int)sub_DAD90,
          (int)"Set a static tracepoint at location or marker.\n"
               "\n"
               "strace [LOCATION] [if CONDITION]\n"
               "LOCATION may be a linespec, explicit, or address location (described below) \n"
               "or -m MARKER_ID.\n"
               "\n"
               "If a marker id is specified, probe the marker with that name.  With\n"
               "no LOCATION, uses current execution address of the selected stack frame.\n"
               "Static tracepoints accept an extra collect action -- ``collect $_sdata''.\n"
               "This collects arbitrary user data passed in the probe point call to the\n"
               "tracing library.  You can inspect it when analyzing the trace buffer,\n"
               "by printing the $_sdata variable like any other convenience variable.\n"
               "\n"
               "CONDITION is a boolean expression.\n"
               "\n"
               "Linespecs are colon-separated lists of location parameters, such as\n"
               "source filename, function name, label name, and line number.\n"
               "Example: To specify the start of a label named \"the_top\" in the\n"
               "function \"fact\" in the file \"factorial.c\", use\n"
               "\"factorial.c:fact:the_top\".\n"
               "\n"
               "Address locations begin with \"*\" and specify an exact address in the\n"
               "program.  Example: To specify the fourth byte past the start function\n"
               "\"main\", use \"*main + 4\".\n"
               "\n"
               "Explicit locations are similar to linespecs but use an option/argument\n"
               "syntax to specify location parameters.\n"
               "Example: To specify the start of the label named \"the_top\" in the\n"
               "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
               "-function fact -label the_top\".\n"
               "\n"
               "By default, a specified function is matched against the program's\n"
               "functions in all scopes.  For C++, this means in all namespaces and\n"
               "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
               "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
               "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
               "specified name as a complete fully-qualified name instead.\n"
               "\n"
               "Multiple tracepoints at one place are permitted, and useful if their\n"
               "conditions are different.\n"
               "\n"
               "Do \"help breakpoints\" for info on other commands dealing with breakpoints.\n"
               "Do \"help tracepoints\" for info on other tracepoint commands.");
  sub_5324C(v10, (int)sub_F7428);
  sub_5398C(
    "tracepoints",
    (int)sub_D5CA0,
    (int)"Status of specified tracepoints (all tracepoints if no argument).\n"
         "Convenience variable \"$tpnum\" contains the number of the\n"
         "last tracepoint set.");
  sub_54788((int)"tp", (unsigned __int8 *)"tracepoints", 1);
  sub_53274(
    "tracepoints",
    7,
    (int)sub_DBC70,
    (int)"Delete specified tracepoints.\n"
         "Arguments are tracepoint numbers, separated by spaces.\n"
         "No argument means delete all tracepoints.",
    &dword_4747A0);
  sub_54724((int)"tr", (unsigned __int8 *)"tracepoints", 7, 1, (int *)&dword_4747A0);
  v11 = sub_53274(
          "tracepoints",
          7,
          (int)sub_DD07C,
          (int)"Disable specified tracepoints.\n"
               "Arguments are tracepoint numbers, separated by spaces.\n"
               "No argument means disable all tracepoints.",
          &dword_4747A8);
  sub_532A8(v11, (int)"disable");
  v12 = sub_53274(
          "tracepoints",
          7,
          (int)sub_DD074,
          (int)"Enable specified tracepoints.\n"
               "Arguments are tracepoint numbers, separated by spaces.\n"
               "No argument means enable all tracepoints.",
          &dword_4747AC);
  sub_532A8(v12, (int)"enable");
  sub_539C0(
    "passcount",
    7,
    (int)sub_D1AEC,
    (int)"Set the passcount for a tracepoint.\n"
         "The trace will end when the tracepoint has been passed 'count' times.\n"
         "Usage: passcount COUNT TPNUM, where TPNUM may also be \"all\";\n"
         "if TPNUM is omitted, passcount refers to the last tracepoint defined.");
  sub_533F8(
    "save",
    6,
    (int)sub_C8ED0,
    (int)"Save breakpoint definitions as a script.",
    &dword_478364,
    (int)"save ",
    0,
    (int **)&dword_474744);
  v13 = sub_53274(
          "breakpoints",
          6,
          (int)sub_DF5D8,
          (int)"Save current breakpoint definitions as a script.\n"
               "This includes all types of breakpoints (breakpoints, watchpoints,\n"
               "catchpoints, tracepoints).  Use the 'source' command in another debug\n"
               "session to restore them.",
          (int **)&dword_478364);
  sub_5324C(v13, 1010944);
  v14 = sub_53274(
          "tracepoints",
          7,
          (int)sub_DF5CC,
          (int)"Save current tracepoint definitions as a script.\n"
               "Use the 'source' command in another debug session to restore them.",
          (int **)&dword_478364);
  sub_5324C(v14, (int)&loc_F6D00);
  v15 = sub_547B0((int)"save-tracepoints", "save tracepoints", 7, 0);
  sub_532A8(v15, (int)"save tracepoints");
  sub_533F8(
    "breakpoint",
    11,
    (int)nullsub_49,
    (int)"Breakpoint specific settings\n"
         "Configure various breakpoint-specific variables such as\n"
         "pending breakpoint behavior",
    &dword_4788A8,
    (int)"set breakpoint ",
    0,
    (int **)&dword_47475C);
  sub_533F8(
    "breakpoint",
    11,
    (int)nullsub_50,
    (int)"Breakpoint specific settings\n"
         "Configure various breakpoint-specific variables such as\n"
         "pending breakpoint behavior",
    &dword_4788AC,
    (int)"show breakpoint ",
    0,
    (int **)&dword_47474C);
  sub_53550(
    "pending",
    -1,
    (int)&dword_4788B0,
    "Set debugger's behavior regarding pending breakpoints.",
    "Show debugger's behavior regarding pending breakpoints.",
    "If on, an unrecognized breakpoint location will cause gdb to create a\n"
    "pending breakpoint.  If off, an unrecognized breakpoint location results in\n"
    "an error.  If auto, an unrecognized breakpoint location results in a\n"
    "user-query to see if a pending breakpoint should be created.",
    0,
    (int)sub_C76B0,
    &dword_4788A8,
    &dword_4788AC);
  dword_4788B0 = 2;
  sub_535B8(
    "auto-hw",
    -1,
    (int)&dword_4788B4,
    "Set automatic usage of hardware breakpoints.",
    "Show automatic usage of hardware breakpoints.",
    "If set, the debugger will automatically use hardware breakpoints for\n"
    "breakpoints set with \"break\" but falling in read-only memory.  If not set,\n"
    "a warning will be emitted for such breakpoints.",
    0,
    (int)sub_C76A0,
    &dword_4788A8,
    &dword_4788AC);
  sub_535B8(
    "always-inserted",
    4,
    (int)&dword_478850,
    "Set mode for inserting breakpoints.",
    "Show mode for inserting breakpoints.",
    "When this mode is on, breakpoints are inserted immediately as soon as\n"
    "they're created, kept inserted even when execution stops, and removed\n"
    "only when the user deletes them.  When this mode is off (the default),\n"
    "breakpoints are inserted only when execution continues, and removed\n"
    "when execution stops.",
    0,
    (int)sub_C7690,
    &dword_4788A8,
    &dword_4788AC);
  sub_534EC(
    "condition-evaluation",
    6,
    (int)off_37E6D0,
    (int)&off_46C09C,
    "Set mode of breakpoint condition evaluation.",
    "Show mode of breakpoint condition evaluation.",
    "When this is set to \"host\", breakpoint conditions will be\n"
    "evaluated on the host's side by GDB.  When it is set to \"target\",\n"
    "breakpoint conditions will be downloaded to the target (if the target\n"
    "supports such feature) and conditions will be evaluated on the target's side.\n"
    "If this is set to \"auto\" (default), this will be automatically set to\n"
    "\"target\" if it supports condition evaluation, otherwise it will\n"
    "be set to \"gdb\"",
    (int)sub_DCB38,
    (int)sub_C7620,
    &dword_4788A8,
    &dword_4788AC);
  sub_539C0(
    "break-range",
    6,
    (int)sub_DD470,
    (int)"Set a breakpoint for an address range.\n"
         "break-range START-LOCATION, END-LOCATION\n"
         "where START-LOCATION and END-LOCATION can be one of the following:\n"
         "  LINENUM, for that line in the current file,\n"
         "  FILE:LINENUM, for that line in that file,\n"
         "  +OFFSET, for that number of lines after the current line\n"
         "           or the start of the range\n"
         "  FUNCTION, for the first line in that function,\n"
         "  FILE:FUNCTION, to distinguish among like-named static functions.\n"
         "  *ADDRESS, for the instruction at that address.\n"
         "\n"
         "The breakpoint will stop execution of the inferior whenever it executes\n"
         "an instruction at any address within the [START-LOCATION, END-LOCATION]\n"
         "range (including START-LOCATION and END-LOCATION).");
  v16 = sub_539C0(
          "dprintf",
          6,
          (int)sub_DAC98,
          (int)"Set a dynamic printf at specified location.\n"
               "dprintf location,format string,arg1,arg2,...\n"
               "location may be a linespec, explicit, or address location.\n"
               "\n"
               "Linespecs are colon-separated lists of location parameters, such as\n"
               "source filename, function name, label name, and line number.\n"
               "Example: To specify the start of a label named \"the_top\" in the\n"
               "function \"fact\" in the file \"factorial.c\", use\n"
               "\"factorial.c:fact:the_top\".\n"
               "\n"
               "Address locations begin with \"*\" and specify an exact address in the\n"
               "program.  Example: To specify the fourth byte past the start function\n"
               "\"main\", use \"*main + 4\".\n"
               "\n"
               "Explicit locations are similar to linespecs but use an option/argument\n"
               "syntax to specify location parameters.\n"
               "Example: To specify the start of the label named \"the_top\" in the\n"
               "function \"fact\" in the file \"factorial.c\", use \"-source factorial.c\n"
               "-function fact -label the_top\".\n"
               "\n"
               "By default, a specified function is matched against the program's\n"
               "functions in all scopes.  For C++, this means in all namespaces and\n"
               "classes.  For Ada, this means in all packages.  E.g., in C++,\n"
               "\"func()\" matches \"A::func()\", \"A::B::func()\", etc.  The\n"
               "\"-qualified\" flag overrides this behavior, making GDB interpret the\n"
               "specified name as a complete fully-qualified name instead.\n");
  sub_5324C(v16, (int)sub_F7428);
  sub_534EC(
    "dprintf-style",
    4,
    (int)off_37E6E0,
    (int)&off_46C094,
    "Set the style of usage for dynamic printf.",
    "Show the style of usage for dynamic printf.",
    "This setting chooses how GDB will do a dynamic printf.\n"
    "If the value is \"gdb\", then the printing is done by GDB to its own\n"
    "console, as with the \"printf\" command.\n"
    "If the value is \"call\", the print is done by calling a function in your\n"
    "program; by default printf(), but you can choose a different function or\n"
    "output stream by setting dprintf-function and dprintf-channel.",
    (int)sub_DE838,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  dword_4788B8 = sub_327254("printf");
  sub_53688(
    "dprintf-function",
    4,
    (int)&dword_4788B8,
    "Set the function to use for dynamic printf",
    "Show the function to use for dynamic printf",
    0,
    (int)sub_DE838,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  dword_4788BC = sub_327254("");
  sub_53688(
    "dprintf-channel",
    4,
    (int)&dword_4788BC,
    "Set the channel to use for dynamic printf",
    "Show the channel to use for dynamic printf",
    0,
    (int)sub_DE838,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "disconnected-dprintf",
    -1,
    (int)&unk_46C0A0,
    "Set whether dprintf continues after GDB disconnects.",
    "Show whether dprintf continues after GDB disconnects.",
    "Use this to let dprintf commands continue to hit and produce output\n"
    "even if GDB disconnects or detaches from the target.",
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_539C0(
    "agent-printf",
    1,
    (int)sub_C6E2C,
    (int)"agent-printf \"printf format string\", arg1, arg2, arg3, ..., argn\n"
         "(target agent only) This is useful for formatted output in user-defined commands.");
  dword_4788B4 = 1;
  sub_1B9AC8(sub_C7938);
  return sub_1B9870(817536);
}
