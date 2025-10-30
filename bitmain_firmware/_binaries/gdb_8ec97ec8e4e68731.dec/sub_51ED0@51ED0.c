int sub_51ED0()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0

  sub_5325C(
    "internals",
    11,
    "Maintenance commands.\n"
    "Some gdb commands are provided just for use by gdb maintainers.\n"
    "These commands are subject to frequent change, and may not be as\n"
    "well documented as user commands.",
    &dword_474744);
  sub_5325C("obscure", 10, "Obscure features.", &dword_474744);
  sub_5325C("aliases", 8, "Aliases of other commands.", &dword_474744);
  sub_5325C(
    "user-defined",
    14,
    "User-defined commands.\n"
    "The commands in this class are those defined by the user.\n"
    "Use the \"define\" command to define a command.",
    &dword_474744);
  sub_5325C("support", 4, "Support facilities.", &dword_474744);
  if ( !dword_487A74 )
    sub_5325C("status", 5, "Status inquiries.", &dword_474744);
  sub_5325C("files", 3, "Specifying and examining files.", &dword_474744);
  sub_5325C("breakpoints", 6, "Making program stop at certain points.", &dword_474744);
  sub_5325C("data", 1, "Examining data.", &dword_474744);
  sub_5325C(
    "stack",
    2,
    "Examining the stack.\n"
    "The stack is made up of stack frames.  Gdb assigns numbers to stack frames\n"
    "counting from zero for the innermost (currently executing) frame.\n"
    "\n"
    "At any time gdb identifies one frame as the \"selected\" frame.\n"
    "Variable lookups are done with respect to the selected frame.\n"
    "When the program being debugged stops, gdb selects the innermost frame.\n"
    "The commands below can be used to select other frames by number or address.",
    &dword_474744);
  sub_5325C("running", 0, "Running the program.", &dword_474744);
  sub_539C0("pwd", 3, sub_4F050, "Print working directory.  This is used for your program as well.");
  v0 = sub_53274(
         "cd",
         3,
         &loc_4F0F4,
         "Set working directory to DIR for debugger.\n"
         "The debugger's current working directory specifies where scripts and other\n"
         "files that can be loaded by GDB are located.\n"
         "In order to change the inferior's current working directory, the recommended\n"
         "way is to use the \"set cwd\" command.",
         &dword_474744);
  sub_5324C(v0, 1010944);
  sub_539C0(
    "echo",
    4,
    sub_4F9DC,
    "Print a constant string.  Give string as argument.\n"
    "C escape sequences may be used in the argument.\n"
    "No newline is added at the end of the argument;\n"
    "use \"\\n\" if you want a newline to be printed.\n"
    "Since leading and trailing whitespace are ignored in command arguments,\n"
    "if you want to print some you must use \"\\\" before leading whitespace\n"
    "to be printed or after trailing whitespace.");
  sub_534EC(
    "script-extension",
    4,
    off_353C58,
    &off_46B134,
    "Set mode for script filename extension recognition.",
    "Show mode for script filename extension recognition.",
    "off  == no filename extension recognition (all sourced files are GDB scripts)\n"
    "soft == evaluate script according to filename extension, fallback to GDB script\n"
    "strict == evaluate script according to filename extension, error if not supported",
    0,
    sub_4F438,
    &dword_47475C,
    &dword_47474C);
  sub_539C0(
    "quit",
    4,
    sub_4EFCC,
    "Exit gdb.\n"
    "Usage: quit [EXPR]\n"
    "The optional expression EXPR, if present, is evaluated and the result\n"
    "used as GDB's exit code.  The default is zero.");
  v1 = sub_539C0("help", 4, sub_4F9C0, "Print list of commands.");
  sub_5324C(v1, 1002364);
  sub_547B0("q", "quit", 4, 1);
  sub_547B0("h", "help", 4, 1);
  sub_535B8(
    "verbose",
    4,
    &dword_48A514,
    "Set verbosity.",
    "Show verbosity.",
    0,
    &loc_244C78,
    sub_4F404,
    &dword_47475C,
    &dword_47474C);
  sub_533F8(
    "history",
    4,
    sub_244C20,
    "Generic command for setting command history parameters.",
    &dword_474760,
    "set history ",
    0,
    &dword_47475C);
  sub_533F8(
    "history",
    4,
    sub_244C60,
    "Generic command for showing command history parameters.",
    &dword_474764,
    "show history ",
    0,
    &dword_47474C);
  sub_535B8(
    "expansion",
    -1,
    &dword_48A55C,
    "Set history expansion on command input.",
    "Show history expansion on command input.",
    "Without an argument, history expansion is enabled.",
    0,
    sub_4F3F4,
    &dword_474760,
    &dword_474764);
  sub_533F8(
    "info",
    5,
    sub_4F950,
    "Generic command for showing things about the program being debugged.",
    &dword_474754,
    "info ",
    0,
    &dword_474744);
  sub_547B0("i", "info", 5, 1);
  sub_547B0("inf", "info", 5, 1);
  sub_539C0("complete", 10, sub_4FF8C, "List the completions for the rest of the line as a command.");
  sub_533F8(
    "show",
    5,
    sub_4F8FC,
    "Generic command for showing things about the debugger.",
    &dword_47474C,
    "show ",
    0,
    &dword_474744);
  sub_5398C("set", sub_4F8FC, "Show all GDB settings.");
  sub_53274(
    "commands",
    16,
    sub_244ACC,
    "Show the history of commands you typed.\n"
    "You can supply a command number to start with, or a `+' to start after\n"
    "the previous command number shown.",
    &dword_47474C);
  sub_53274("version", 16, sub_4F9A0, "Show what version of GDB this is.", &dword_47474C);
  sub_53274("configuration", 16, sub_4F98C, "Show how GDB was configured at build time.", &dword_47474C);
  sub_53874(
    "remote",
    -1,
    &dword_48A590,
    "Set debugging of remote protocol.",
    "Show debugging of remote protocol.",
    "When enabled, each packet sent or received with the remote target\nis displayed.",
    0,
    sub_4F3E4,
    &dword_474750,
    &dword_474748);
  sub_538CC(
    "remotetimeout",
    -1,
    &dword_46DCE8,
    "Set timeout limit to wait for target to respond.",
    "Show timeout limit to wait for target to respond.",
    "This value is used to set the time limit for gdb to wait for a response\nfrom the target.",
    0,
    sub_4F3D4,
    &dword_47475C,
    &dword_47474C);
  sub_533F8(
    "debug",
    -1,
    sub_4F914,
    "Generic command for setting gdb debugging flags",
    &dword_474750,
    "set debug ",
    0,
    &dword_47475C);
  sub_533F8(
    "debug",
    -1,
    sub_4F8E4,
    "Generic command for showing gdb debugging flags",
    &dword_474748,
    "show debug ",
    0,
    &dword_47474C);
  v2 = sub_539C0(
         "shell",
         4,
         sub_4FC38,
         "Execute the rest of the line as a shell command.\nWith no arguments, run an inferior shell.");
  sub_5324C(v2, 1010944);
  *(_DWORD *)(sub_539C0(
                "edit",
                3,
                sub_51BCC,
                "Edit specified file or function.\n"
                "With no argument, edits file containing most recent line listed.\n"
                "Editing targets can be specified in these ways:\n"
                "  FILE:LINENUM, to edit at that line in that file,\n"
                "  FUNCTION, to edit at the beginning of that function,\n"
                "  FILE:FUNCTION, to distinguish among like-named static functions.\n"
                "  *ADDRESS, to edit at the line containing that address.\n"
                "Uses EDITOR environment variable contents as editor (or ex as default).")
            + 64) = sub_F7428;
  sub_539C0(
    "list",
    3,
    sub_51360,
    "List specified function or line.\n"
    "With no argument, lists ten more lines after or around previous listing.\n"
    "\"list -\" lists the ten lines before a previous ten-line listing.\n"
    "One argument specifies a line, and ten lines are listed around that line.\n"
    "Two arguments with comma between specify starting and ending lines to list.\n"
    "Lines can be specified in these ways:\n"
    "  LINENUM, to list around that line in current file,\n"
    "  FILE:LINENUM, to list around that line in that file,\n"
    "  FUNCTION, to list around beginning of that function,\n"
    "  FILE:FUNCTION, to distinguish among like-named static functions.\n"
    "  *ADDRESS, to list around the line containing that address.\n"
    "With two args, if one is empty, it stands for ten lines away from\n"
    "the other arg.\n"
    "\n"
    "By default, when a single location is given, display ten lines.\n"
    "This can be changed using \"set listsize\", and the current value\n"
    "can be shown using \"show listsize\".");
  sub_547B0("l", "list", 3, 1);
  if ( dword_487A74 )
    sub_547B0("file", "list", 3, 1);
  v3 = sub_539C0(
         "disassemble",
         1,
         sub_4F56C,
         "Disassemble a specified section of memory.\n"
         "Default is the function surrounding the pc of the selected frame.\n"
         "\n"
         "With a /m modifier, source lines are included (if available).\n"
         "This view is \"source centric\": the output is in source line order,\n"
         "regardless of any optimization that is present.  Only the main source file\n"
         "is displayed, not those of, e.g., any inlined functions.\n"
         "This modifier hasn't proved useful in practice and is deprecated\n"
         "in favor of /s.\n"
         "\n"
         "With a /s modifier, source lines are included (if available).\n"
         "This differs from /m in two important respects:\n"
         "- the output is still in pc address order, and\n"
         "- file names and contents for all relevant source files are displayed.\n"
         "\n"
         "With a /r modifier, raw instructions in hex are included.\n"
         "\n"
         "With a single argument, the function surrounding that address is dumped.\n"
         "Two arguments (separated by a comma) are taken as a range of memory to dump,\n"
         "  in the form of \"start,end\", or \"start,+length\".\n"
         "\n"
         "Note that the address is interpreted as an expression, not as a location\n"
         "like in the \"break\" command.\n"
         "So, for example, if you want to disassemble function bar in file foo.c\n"
         "you must type \"disassemble 'foo.c'::bar\" and not \"disassemble foo.c:bar\".");
  sub_5324C(v3, sub_F7428);
  sub_547B0("!", "shell", 4, 0);
  v4 = sub_539C0("make", 4, sub_503CC, "Run the ``make'' program using the rest of the line as arguments.");
  sub_5324C(v4, 1010944);
  sub_53274(
    "user",
    -1,
    sub_4FA74,
    "Show definitions of non-python/scheme user defined commands.\n"
    "Argument is the name of the user defined command.\n"
    "With no argument, show definitions of all user defined commands.",
    &dword_47474C);
  sub_539C0("apropos", 4, sub_4F448, "Search for commands matching a REGEXP");
  sub_5380C(
    "max-user-call-depth",
    -1,
    &dword_474758,
    "Set the max call depth for non-python/scheme user-defined commands.",
    "Show the max call depth for non-python/scheme user-defined commands.",
    0,
    0,
    sub_4F3C4,
    &dword_47475C,
    &dword_47474C);
  sub_535B8(
    "trace-commands",
    -1,
    &dword_474768,
    "Set tracing of GDB CLI commands.",
    "Show state of GDB CLI command tracing.",
    "When 'on', each command is displayed as it is executed.",
    0,
    0,
    &dword_47475C,
    &dword_47474C);
  return sub_539C0(
           "alias",
           4,
           sub_50638,
           "Define a new command that is an alias of an existing command.\n"
           "Usage: alias [-a] [--] ALIAS = COMMAND\n"
           "ALIAS is the name of the alias command to create.\n"
           "COMMAND is the command being aliased to.\n"
           "If \"-a\" is specified, the command is an abbreviation,\n"
           "and will not appear in help command list output.\n"
           "\n"
           "Examples:\n"
           "Make \"spe\" an alias of \"set print elements\":\n"
           "  alias spe = set print elements\n"
           "Make \"elms\" an alias of \"elements\" in the \"set print\" command:\n"
           "  alias -a set print elms = set print elements");
}
