int sub_189584()
{
  int v0; // r0
  void *v1; // r0
  _BYTE *v2; // r8
  _BYTE *v3; // r9
  int v4; // r10
  int v5; // r3
  int v6; // lr
  int v7; // r12
  int v8; // r0
  int v9; // r1

  dword_487974 = (int)sub_153270((int)sub_1851C0, 0);
  sub_5398C(
    "signals",
    (int)sub_1874CC,
    (int)"What debugger does when program gets various signals.\n"
         "Specify a signal as argument to print info on that signal only.");
  sub_54788((int)"handle", (unsigned __int8 *)"signals", 0);
  v0 = sub_539C0(
         "handle",
         0,
         (int)sub_186828,
         (int)"Specify how to handle signals.\n"
              "Usage: handle SIGNAL [ACTIONS]\n"
              "Args are signals and actions to apply to those signals.\n"
              "If no actions are specified, the current settings for the specified signals\n"
              "will be displayed instead.\n"
              "\n"
              "Symbolic signals (e.g. SIGSEGV) are recommended but numeric signals\n"
              "from 1-15 are allowed for compatibility with old versions of GDB.\n"
              "Numeric ranges may be specified with the form LOW-HIGH (e.g. 1-5).\n"
              "The special arg \"all\" is recognized to mean all signals except those\n"
              "used by the debugger, typically SIGTRAP and SIGINT.\n"
              "\n"
              "Recognized actions include \"stop\", \"nostop\", \"print\", \"noprint\",\n"
              "\"pass\", \"nopass\", \"ignore\", or \"noignore\".\n"
              "Stop means reenter debugger if this signal happens (implies print).\n"
              "Print means print a message if this signal happens.\n"
              "Pass means let program see this signal; otherwise program doesn't know.\n"
              "Ignore is a synonym for nopass and noignore is a synonym for pass.\n"
              "Pass and Stop may be combined.\n"
              "\n"
              "Multiple signals may be specified.  Signal numbers and signal names\n"
              "may be interspersed with actions, with the actions being performed for\n"
              "all signals cumulatively specified.");
  sub_5324C(v0, 1599356);
  if ( !dword_487A74 )
    dword_4879AC = sub_53274(
                     "stop",
                     10,
                     (int)nullsub_62,
                     (int)"There is no `stop' command, but you can set a hook on `stop'.\n"
                          "This allows you to set a list of commands to be run each time execution\n"
                          "of the program stops.",
                     (int **)&dword_474744);
  sub_53934(
    "infrun",
    11,
    (int)&dword_487930,
    "Set inferior debugging.",
    "Show inferior debugging.",
    "When non-zero, inferior specific debugging is enabled.",
    0,
    (int)sub_18538C,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_535B8(
    "displaced",
    11,
    (int)&dword_487978,
    "Set displaced stepping debugging.",
    "Show displaced stepping debugging.",
    "When non-zero, displaced stepping specific debugging is enabled.",
    0,
    (int)sub_18537C,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_535B8(
    "non-stop",
    -1,
    (int)&dword_48798C,
    "Set whether gdb controls the inferior in non-stop mode.",
    "Show whether gdb controls the inferior in non-stop mode.",
    "When debugging a multi-threaded program and this setting is\n"
    "off (the default, also called all-stop mode), when one thread stops\n"
    "(for a breakpoint, watchpoint, exception, or similar events), GDB stops\n"
    "all other threads in the program while you interact with the thread of\n"
    "interest.  When you continue or step a thread, you can allow the other\n"
    "threads to run, or have them remain stopped, but while you inspect any\n"
    "thread's state, all threads stop.\n"
    "\n"
    "In non-stop mode, when one thread stops, other threads can continue\n"
    "to run freely.  You'll be able to step each thread independently,\n"
    "leave it stopped or free to run as needed.",
    (int)sub_18712C,
    (int)sub_18536C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  dword_48797C = (int)sub_93028(0x98u);
  dword_487980 = (int)sub_93028(0x98u);
  dword_487948 = (int)sub_93028(0x98u);
  dword_487984 = (int)sub_93028(0x98u);
  v1 = sub_93028(0x98u);
  v2 = (_BYTE *)dword_48797C;
  v3 = (_BYTE *)dword_487980;
  v4 = dword_487948;
  v5 = dword_48797C - 1;
  dword_487988 = (int)v1;
  v6 = dword_48797C + 151;
  v7 = dword_487980 - 1;
  v8 = dword_487948 - 1;
  v9 = dword_487984 - 1;
  do
  {
    *(_BYTE *)++v5 = 1;
    *(_BYTE *)++v7 = 1;
    *(_BYTE *)++v8 = 1;
    *(_BYTE *)++v9 = 0;
  }
  while ( v5 != v6 );
  *(_BYTE *)(v4 + 5) = 0;
  *(_BYTE *)(v4 + 2) = 0;
  v2[14] = 0;
  v3[14] = 0;
  v2[26] = 0;
  v3[26] = 0;
  v2[27] = 0;
  v3[27] = 0;
  v2[20] = 0;
  v3[20] = 0;
  v2[23] = 0;
  v3[23] = 0;
  v2[33] = 0;
  v3[33] = 0;
  v2[16] = 0;
  v3[16] = 0;
  v2[28] = 0;
  v3[28] = 0;
  v2[44] = 0;
  v3[44] = 0;
  v2[37] = 0;
  v3[37] = 0;
  v2[36] = 0;
  v3[36] = 0;
  v2[76] = 0;
  v3[76] = 0;
  v2[151] = 0;
  v3[151] = 0;
  sub_1867A8();
  sub_53874(
    "stop-on-solib-events",
    4,
    (int)&dword_4879B4,
    "Set stopping for shared library events.",
    "Show stopping for shared library events.",
    "If nonzero, gdb will give control to the user when the dynamic linker\n"
    "notifies gdb of shared library events.  The most common event of interest\n"
    "to the user would be loading/unloading of a new library.",
    (int)sub_186778,
    (int)sub_18535C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_534EC(
    "follow-fork-mode",
    0,
    (int)off_3BBE34,
    (int)&off_46D588,
    "Set debugger response to a program call of fork or vfork.",
    "Show debugger response to a program call of fork or vfork.",
    "A fork or vfork creates a new process.  follow-fork-mode can be:\n"
    "  parent  - the original process is debugged after a fork\n"
    "  child   - the new process is debugged after a fork\n"
    "The unfollowed process will continue to run.\n"
    "By default, the debugger will follow the parent process.",
    0,
    (int)sub_18534C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_534EC(
    "follow-exec-mode",
    0,
    (int)off_3BBE40,
    (int)&off_46D59C,
    "Set debugger response to a program call of exec.",
    "Show debugger response to a program call of exec.",
    "An exec call replaces the program image of a process.\n"
    "\n"
    "follow-exec-mode can be:\n"
    "\n"
    "  new - the debugger creates a new inferior and rebinds the process\n"
    "to this new inferior.  The program the process was running before\n"
    "the exec call can be restarted afterwards by restarting the original\n"
    "inferior.\n"
    "\n"
    "  same - the debugger keeps the process bound to the same inferior.\n"
    "The new executable image replaces the previous executable loaded in\n"
    "the inferior.  Restarting the inferior after the exec call restarts\n"
    "the executable the process was running after the exec call.\n"
    "\n"
    "By default, the debugger will use the same inferior.",
    0,
    (int)sub_18533C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_534EC(
    "scheduler-locking",
    0,
    (int)&off_3BBE4C,
    (int)off_46D590,
    "Set mode for locking scheduler during execution.",
    "Show mode for locking scheduler during execution.",
    "off    == no locking (threads may preempt at any time)\n"
    "on     == full locking (no thread except the current thread may run)\n"
    "          This applies to both normal execution and replay mode.\n"
    "step   == scheduler locked during stepping commands (step, next, stepi, nexti).\n"
    "          In this mode, other threads may run during other commands.\n"
    "          This applies to both normal execution and replay mode.\n"
    "replay == scheduler locked in replay mode and unlocked during normal execution.",
    (int)sub_186F90,
    (int)sub_18532C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "schedule-multiple",
    0,
    (int)&dword_487970,
    "Set mode for resuming threads of all processes.",
    "Show mode for resuming threads of all processes.",
    "When on, execution commands (such as 'continue' or 'next') resume all\n"
    "threads of all processes.  When off (which is the default), execution\n"
    "commands only resume the threads of the current process.  The set of\n"
    "threads that are resumed is further refined by the scheduler-locking\n"
    "mode (see help set scheduler-locking).",
    0,
    (int)sub_18531C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "step-mode",
    0,
    (int)&dword_4879B8,
    "Set mode of the step operation.",
    "Show mode of the step operation.",
    "When set, doing a step over a function without debug line information\n"
    "will stop at the first instruction of that function. Otherwise, the\n"
    "function is skipped and the step command stops at a different source line.",
    0,
    (int)sub_18530C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53550(
    "displaced-stepping",
    0,
    (int)&dword_46D584,
    "Set debugger's willingness to use displaced stepping.",
    "Show debugger's willingness to use displaced stepping.",
    "If on, gdb will use displaced stepping to step over breakpoints if it is\n"
    "supported by the target architecture.  If off, gdb will not use displaced\n"
    "stepping to step over breakpoints, even if such is supported by the target\n"
    "architecture.  If auto (which is the default), gdb will use displaced stepping\n"
    "if the target architecture supports it and non-stop mode is active, but will not\n"
    "use it in all-stop mode (see help set non-stop).",
    0,
    (int)sub_186FCC,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_534EC(
    "exec-direction",
    0,
    (int)off_3BBE60,
    (int)&off_46D594,
    "Set direction of execution.\nOptions are 'forward' or 'reverse'.",
    "Show direction of execution (forward/reverse).",
    "Tells gdb whether to execute forward or backward.",
    (int)sub_1872DC,
    (int)sub_1852BC,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "detach-on-fork",
    0,
    (int)&dword_46D58C,
    "Set whether gdb will detach the child of a fork.",
    "Show whether gdb will detach the child of a fork.",
    "Tells gdb whether to detach the child of a fork.",
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "disable-randomization",
    4,
    (int)&dword_46D5A0,
    "Set disabling of debuggee's virtual address space randomization.",
    "Show disabling of debuggee's virtual address space randomization.",
    "When this mode is on (which is the default), randomization of the virtual\n"
    "address space is disabled.  Standalone programs run with the randomization\n"
    "enabled by default on some platforms.",
    (int)sub_186718,
    (int)sub_186734,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  qword_4878EC = qword_475848;
  dword_4878F4 = dword_475850;
  dword_487954[0] = dword_46BBCC;
  dword_487954[1] = dword_46BBD0;
  dword_487954[2] = dword_46BBD4;
  sub_1B9F38(1592352);
  sub_1B9930(sub_185BE0);
  sub_1B9870(sub_18749C);
  sub_1BA19C(1598436);
  sub_26CB90("_siginfo", &off_3BBE6C, 0);
  return sub_535B8(
           "observer",
           -1,
           (int)&dword_487990,
           "Set whether gdb controls the inferior in observer mode.",
           "Show whether gdb controls the inferior in observer mode.",
           "In observer mode, GDB can get data from the inferior, but not\n"
           "affect its execution.  Registers and memory may not be changed,\n"
           "breakpoints may not be set, and the program cannot be interrupted\n"
           "or signalled.",
           (int)sub_187168,
           (int)sub_1852AC,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
