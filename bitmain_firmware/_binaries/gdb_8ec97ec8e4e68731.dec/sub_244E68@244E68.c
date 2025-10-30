int *sub_244E68()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  void *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  if ( off_48A558 )
    off_48A558();
  sub_51EBC();
  v0 = sub_2329E8();
  v1 = sub_25AA88(v0);
  v2 = sub_259080(v1);
  sub_27EC04(v2);
  v3 = sub_1CD614();
  v4 = ((int (__fastcall *)(int))loc_1843BC)(v3);
  ((void (__fastcall *)(int))loc_B83DC)(v4);
  sub_5274C();
  sub_2445D4((int)"(gdb) ");
  off_48AD28 = sub_F673C;
  dword_48A548 = 1;
  off_48AD10 = sub_F65A0;
  dword_48A55C = 0;
  dword_48A550 = 0;
  v5 = sub_1939B0();
  sub_F55A8((int)v5);
  dword_48ACB4 = (int)sub_F5464();
  off_48AD24 = sub_F004C;
  off_470770 = "gdb";
  dword_48AAF4 = (int)getenv("TERM");
  sub_288C80("operate-and-get-next", sub_242B8C, 15);
  sub_53688(
    "prompt",
    4,
    (int)&dword_48A54C,
    "Set gdb's prompt",
    "Show gdb's prompt",
    0,
    0,
    (int)sub_242A44,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_539C0(
    "dont-repeat",
    4,
    (int)sub_242970,
    (int)"Don't repeat this command.\n"
         "Primarily used inside of user-defined commands that should not be repeated when\n"
         "hitting return.");
  sub_535B8(
    "editing",
    4,
    (int)&dword_4876A4,
    "Set editing of command lines as they are typed.",
    "Show editing of command lines as they are typed.",
    "Use \"on\" to enable the editing, and \"off\" to disable it.\n"
    "Without an argument, command line editing is enabled.  To edit, use\n"
    "EMACS-like or VI-like commands like control-P or ESC.",
    (int)sub_242B60,
    (int)sub_242A10,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "save",
    -1,
    (int)&dword_48A550,
    "Set saving of the history record on exit.",
    "Show saving of the history record on exit.",
    "Use \"on\" to enable the saving, and \"off\" to disable it.\nWithout an argument, saving is enabled.",
    0,
    (int)sub_242A00,
    (int **)&dword_474760,
    (int **)&dword_474764);
  sub_538CC(
    "size",
    -1,
    (int)&dword_46DCDC,
    "Set the size of the command history,",
    "Show the size of the command history,",
    "ie. the number of previous commands to keep a record of.\n"
    "If set to \"unlimited\", the number of commands kept in the history\n"
    "list is unlimited.  This defaults to the value of the environment\n"
    "variable \"GDBHISTSIZE\", or to 256 if this variable is not set.",
    (int)sub_242ED0,
    (int)sub_2429F0,
    (int **)&dword_474760,
    (int **)&dword_474764);
  sub_538CC(
    "remove-duplicates",
    -1,
    (int)&dword_48A528,
    "Set how far back in history to look for and remove duplicate entries.",
    "Show how far back in history to look for and remove duplicate entries.",
    "If set to a nonzero value N, GDB will look back at the last N history entries\n"
    "and remove the first history entry that is a duplicate of the most recent\n"
    "entry, each time a new history entry is added.\n"
    "If set to \"unlimited\", this lookbehind is unbounded.\n"
    "Only history entries added during this session are considered for removal.\n"
    "If set to 0, removal of duplicate history entries is disabled.\n"
    "By default this option is set to 0.",
    0,
    (int)sub_2429E0,
    (int **)&dword_474760,
    (int **)&dword_474764);
  sub_53620(
    "filename",
    -1,
    (int)&dword_48A4F4,
    "Set the filename in which to record the command history",
    "Show the filename in which to record the command history",
    "(the list of previous commands of which a record is kept).",
    (int)sub_242B18,
    (int)sub_2429D0,
    (int **)&dword_474760,
    (int **)&dword_474764);
  sub_535B8(
    "confirm",
    4,
    (int)&dword_46DCE4,
    "Set whether to confirm potentially dangerous operations.",
    "Show whether to confirm potentially dangerous operations.",
    0,
    0,
    (int)sub_2429C0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53874(
    "annotate",
    10,
    (int)&dword_48968C,
    "Set annotation_level.",
    "Show annotation_level.",
    "0 == normal;     1 == fullname (for use when running under emacs)\n"
    "2 == output annotated suitably for use by programs that control GDB.",
    0,
    (int)sub_2429B0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "exec-done-display",
    4,
    (int)&dword_4876A0,
    "Set notification of completion for asynchronous execution commands.",
    "Show notification of completion for asynchronous execution commands.",
    "Use \"on\" to enable the notification, and \"off\" to disable it.",
    0,
    (int)sub_2429A0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53620(
    "data-directory",
    11,
    (int)&dword_48A4F0,
    "Set GDB's data directory.",
    "Show GDB's data directory.",
    "When set, GDB uses the specified path to search for data files.",
    (int)sub_242AFC,
    (int)sub_242988,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53550(
    "interactive-mode",
    4,
    (int)&dword_46DCE0,
    "Set whether GDB's standard input is a terminal.",
    "Show whether GDB's standard input is a terminal.",
    "If on, GDB assumes that standard input is a terminal.  In practice, it\n"
    "means that GDB should wait for the user to answer queries associated to\n"
    "commands entered at the command prompt.  If off, GDB assumes that standard\n"
    "input is not a terminal, and uses the default answer to all queries.\n"
    "If auto (the default), determine which mode to use based on the standard\n"
    "input settings.",
    0,
    (int)sub_242F00,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  v6 = sub_53274(
         "new-ui",
         4,
         (int)sub_2431F8,
         (int)"Create a new UI.  It takes two arguments:\n"
              "The first argument is the name of the interpreter to run.\n"
              "The second argument is the terminal the UI runs on.\n",
         (int **)&dword_474744);
  v7 = sub_5324C(v6, 1642992);
  v8 = sub_27EB90(v7);
  sub_27E450(v8);
  sub_154604();
  sub_194204(2);
  dword_487A08 = (int)off_46D5A4[0];
  return sub_157A58();
}
