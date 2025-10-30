int sub_24D8D8()
{
  int v0; // r0

  sub_26CB90("_sdata", &unk_3EE370, 0);
  dword_48A8BC = -1;
  dword_48A8C0 = -1;
  sub_5398C("scope", (int)sub_2480D4, (int)"List the variables local to a scope");
  sub_5325C("tracepoints", 7, (int)"Tracing of program execution without stopping the program.", (int **)&dword_474744);
  sub_539C0("tdump", 7, (int)sub_24B450, (int)"Print everything collected at the current tracepoint.");
  v0 = sub_539C0(
         "tvariable",
         7,
         (int)&loc_2499C0,
         (int)"Define a trace state variable.\n"
              "Argument is a $-prefixed name, optionally followed\n"
              "by '=' and an expression that sets the initial value\n"
              "at the start of tracing.");
  sub_5324C(v0, (int)sub_F7418);
  sub_53274(
    "tvariable",
    7,
    (int)sub_248BE4,
    (int)"Delete one or more trace state variables.\n"
         "Arguments are the names of the variables to delete.\n"
         "If no arguments are supplied, delete all variables.",
    &dword_4747A0);
  sub_5398C("tvariables", (int)&sub_24A080, (int)"Status of trace state variables and their values.\n");
  sub_5398C("static-tracepoint-markers", (int)sub_248F1C, (int)"List target static tracepoints markers.\n");
  sub_533F8(
    "tfind",
    7,
    (int)sub_24BA94,
    (int)"Select a trace frame;\nNo argument means forward by one frame; '-' means backward by one frame.",
    algn_48A924,
    (int)"tfind ",
    1,
    (int **)&dword_474744);
  sub_53274(
    "outside",
    7,
    (int)sub_24BF28,
    (int)"Select a trace frame whose PC is outside the given range (exclusive).\nUsage: tfind outside addr1, addr2",
    (int **)algn_48A924);
  sub_53274(
    "range",
    7,
    (int)sub_24BE20,
    (int)"Select a trace frame whose PC is in the given range (inclusive).\nUsage: tfind range addr1,addr2",
    (int **)algn_48A924);
  sub_53274(
    "line",
    7,
    (int)sub_24BBB0,
    (int)"Select a trace frame by source line.\n"
         "Argument can be a line number (with optional source file),\n"
         "a function name, or '*' followed by an address.\n"
         "Default argument is 'the next source line that was traced'.",
    (int **)algn_48A924);
  sub_53274(
    "tracepoint",
    7,
    (int)sub_24BB14,
    (int)"Select a trace frame by tracepoint number.\nDefault is the tracepoint for the current trace frame.",
    (int **)algn_48A924);
  sub_53274(
    "pc",
    7,
    (int)sub_24BA98,
    (int)"Select a trace frame by PC.\nDefault is the current PC, or the PC of the current trace frame.",
    (int **)algn_48A924);
  sub_53274(
    "end",
    7,
    (int)sub_24BA88,
    (int)"De-select any trace frame and resume 'live' debugging.",
    (int **)algn_48A924);
  sub_54724((int)"none", (unsigned __int8 *)"end", 7, 0, (int *)algn_48A924);
  sub_53274("start", 7, (int)sub_24BA7C, (int)"Select the first trace frame in the trace buffer.", (int **)algn_48A924);
  sub_539C0("tstatus", 7, (int)sub_247B8C, (int)"Display the status of the current trace data collection.");
  sub_539C0(
    "tstop",
    7,
    (int)sub_24AE4C,
    (int)"Stop trace data collection.\n"
         "Usage: tstop [ <notes> ... ]\n"
         "Any arguments supplied are recorded with the trace as a stop reason and\n"
         "reported by tstatus (if the target supports trace notes).");
  sub_539C0(
    "tstart",
    7,
    (int)sub_24AC98,
    (int)"Start trace data collection.\n"
         "Usage: tstart [ <notes> ... ]\n"
         "Any arguments supplied are recorded with the trace as a note and\n"
         "reported by tstatus (if the target supports trace notes).");
  sub_539C0(
    "end",
    7,
    (int)sub_247904,
    (int)"Ends a list of commands or actions.\n"
         "Several GDB commands allow you to enter a list of commands or actions.\n"
         "Entering \"end\" on a line by itself is the normal way to terminate\n"
         "such a list.\n"
         "\n"
         "Note: the \"end\" command cannot be used at the gdb prompt.");
  sub_539C0(
    "while-stepping",
    7,
    (int)sub_247914,
    (int)"Specify single-stepping behavior at a tracepoint.\n"
         "Argument is number of instructions to trace in single-step mode\n"
         "following the tracepoint.  This command is normally followed by\n"
         "one or more \"collect\" commands, to specify what to collect\n"
         "while single-stepping.\n"
         "\n"
         "Note: this command can only be used in a tracepoint \"actions\" list.");
  sub_547B0((int)"ws", "while-stepping", 8, 0);
  sub_547B0((int)"stepping", "while-stepping", 8, 0);
  sub_539C0(
    "collect",
    7,
    (int)sub_248DD4,
    (int)"Specify one or more data items to be collected at a tracepoint.\n"
         "Accepts a comma-separated list of (one or more) expressions.  GDB will\n"
         "collect all data (variables, registers) referenced by that expression.\n"
         "Also accepts the following special arguments:\n"
         "    $regs   -- all registers.\n"
         "    $args   -- all function arguments.\n"
         "    $locals -- all variables local to the block/function scope.\n"
         "    $_sdata -- static tracepoint data (ignored for non-static tracepoints).\n"
         "Note: this command can only be used in a tracepoint \"actions\" list.");
  sub_539C0(
    "teval",
    7,
    (int)sub_248BD4,
    (int)"Specify one or more expressions to be evaluated at a tracepoint.\n"
         "Accepts a comma-separated list of (one or more) expressions.\n"
         "The result of each evaluation will be discarded.\n"
         "Note: this command can only be used in a tracepoint \"actions\" list.");
  sub_539C0(
    "actions",
    7,
    (int)sub_248000,
    (int)"Specify the actions to be taken at a tracepoint.\n"
         "Tracepoint actions may include collecting of specified data,\n"
         "single-stepping, or enabling/disabling other tracepoints,\n"
         "depending on target's capabilities.");
  dword_48A914 = sub_327254("");
  sub_53688(
    "default-collect",
    7,
    (int)&dword_48A914,
    "Set the list of expressions to collect by default",
    "Show the list of expressions to collect by default",
    0,
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "disconnected-tracing",
    -1,
    (int)&dword_48A8A8,
    "Set whether tracing continues after GDB disconnects.",
    "Show whether tracing continues after GDB disconnects.",
    "Use this to continue a tracing run even if GDB disconnects\n"
    "or detaches from the target.  You can reconnect later and look at\n"
    "trace data collected in the meantime.",
    (int)sub_2478A0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "circular-trace-buffer",
    -1,
    (int)&dword_48A8AC,
    "Set target's use of circular trace buffer.",
    "Show target's use of circular trace buffer.",
    "Use this to make the trace buffer into a circular buffer,\n"
    "which will discard traceframes (oldest first) instead of filling\n"
    "up and stopping the trace run.",
    (int)sub_2478C0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_538CC(
    "trace-buffer-size",
    -1,
    (int)&dword_46DCF0,
    "Set requested size of trace buffer.",
    "Show requested size of trace buffer.",
    "Use this to choose a size for the trace buffer.  Some targets\n"
    "may have fixed or limited buffer sizes.  Specifying \"unlimited\" or -1\n"
    "disables any attempt to set the buffer size and lets the target choose.",
    (int)sub_2478E0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53688(
    "trace-user",
    7,
    (int)&dword_48A8B8,
    "Set the user name to use for current and future trace runs",
    "Show the user name to use for current and future trace runs",
    0,
    (int)sub_2479E0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53688(
    "trace-notes",
    7,
    (int)&dword_48A8B4,
    "Set notes string to use for current and future trace runs",
    "Show the notes string to use for current and future trace runs",
    0,
    (int)sub_2479A0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  return sub_53688(
           "trace-stop-notes",
           7,
           (int)&dword_48A8B0,
           "Set notes string to use for future tstop commands",
           "Show the notes string to use for future tstop commands",
           0,
           (int)sub_247960,
           0,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
