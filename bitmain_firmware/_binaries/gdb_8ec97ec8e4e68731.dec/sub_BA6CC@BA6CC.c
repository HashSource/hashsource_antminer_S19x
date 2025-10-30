int sub_BA6CC()
{
  int v0; // r0
  const char *v1; // r0
  char *v2; // r7
  char *v3; // r8
  int v4; // r0
  int v5; // r0

  dword_478234 = sub_1CD100(0, sub_B9750);
  sub_1B963C(766224);
  if ( dword_478238 )
  {
    if ( dword_47823C )
      goto LABEL_3;
  }
  else
  {
    sub_B98CC();
    if ( dword_47823C )
      goto LABEL_3;
  }
  sub_B9A9C();
LABEL_3:
  sub_535B8(
    "gdb-scripts",
    4,
    (int)&dword_46BC18,
    "Enable or disable auto-loading of canned sequences of commands scripts.",
    "Show whether auto-loading of canned sequences of commands scripts is enabled.",
    "If enabled, canned sequences of commands are loaded when the debugger reads\n"
    "an executable or shared library.\n"
    "This options has security implications for untrusted inferiors.",
    0,
    (int)sub_B9740,
    (int **)&dword_478238,
    (int **)&dword_47823C);
  if ( !dword_478240 )
    sub_B9B3C();
  sub_53274(
    "gdb-scripts",
    5,
    (int)sub_BB798,
    (int)"Print the list of automatically loaded sequences of commands.\nUsage: info auto-load gdb-scripts [REGEXP]",
    (int **)&dword_478240);
  if ( dword_478238 )
  {
    if ( dword_47823C )
      goto LABEL_7;
  }
  else
  {
    sub_B98CC();
    if ( dword_47823C )
      goto LABEL_7;
  }
  sub_B9A9C();
LABEL_7:
  sub_535B8(
    "local-gdbinit",
    4,
    (int)&dword_46BC1C,
    "Enable or disable auto-loading of .gdbinit script in current directory.",
    "Show whether auto-loading .gdbinit script in current directory is enabled.",
    "If enabled, canned sequences of commands are loaded when debugger starts\n"
    "from .gdbinit file in current directory.  Such files are deprecated,\n"
    "use a script associated with inferior executable file instead.\n"
    "This options has security implications for untrusted inferiors.",
    0,
    (int)sub_B9730,
    (int **)&dword_478238,
    (int **)&dword_47823C);
  if ( !dword_478240 )
    sub_B9B3C();
  sub_53274(
    "local-gdbinit",
    5,
    (int)sub_B8FF4,
    (int)"Print whether current directory .gdbinit file has been loaded.\nUsage: info auto-load local-gdbinit",
    (int **)&dword_478240);
  dword_47822C = sub_327254("$debugdir:$datadir/auto-load");
  v0 = ((int (__fastcall *)(int))loc_1577A4)(1);
  v1 = (const char *)sub_157950(v0);
  v2 = sub_93140("GDB scripts:    OBJFILE%s\n", v1);
  v3 = sub_93140(
         "Automatically loaded scripts are located in one of the directories listed\n"
         "by this option.\n"
         "\n"
         "Script names:\n"
         "%s%s%s\n"
         "This option is ignored for the kinds of scripts having 'set auto-load ... off'.\n"
         "Directories listed here need to be present also in the 'set auto-load safe-path'\n"
         "option.",
         v2,
         "",
         "");
  if ( dword_478238 )
  {
    if ( dword_47823C )
      goto LABEL_11;
  }
  else
  {
    sub_B98CC();
    if ( dword_47823C )
      goto LABEL_11;
  }
  sub_B9A9C();
LABEL_11:
  sub_5373C(
    "scripts-directory",
    4,
    (int)&dword_47822C,
    "Set the list of directories from which to load auto-loaded scripts.",
    "Show the list of directories from which to load auto-loaded scripts.",
    v3,
    (int)sub_B9134,
    (int)sub_B9720,
    (int **)&dword_478238,
    (int **)&dword_47823C);
  if ( v3 )
    free(v3);
  if ( v2 )
    free(v2);
  dword_478248 = sub_327254("$debugdir:$datadir/auto-load");
  ((void (*)(void))loc_B9CF8)();
  if ( !dword_478238 )
    sub_B98CC();
  if ( !dword_47823C )
    sub_B9A9C();
  sub_5373C(
    "safe-path",
    4,
    (int)&dword_478248,
    "Set the list of files and directories that are safe for auto-loading.",
    "Show the list of files and directories that are safe for auto-loading.",
    "Various files loaded automatically for the 'set auto-load ...' options must\n"
    "be located in one of the directories listed by this option.  Warning will be\n"
    "printed and file will not be used otherwise.\n"
    "You can mix both directory and filename entries.\n"
    "Setting this parameter to an empty list resets it to its default value.\n"
    "Setting this parameter to '/' (without the quotes) allows any file\n"
    "for the 'set auto-load ...' options.  Each path entry can be also shell\n"
    "wildcard pattern; '*' does not match directory separator.\n"
    "This option is ignored for the kinds of files having 'set auto-load ... off'.\n"
    "This options has security implications for untrusted inferiors.",
    (int)sub_B9FE8,
    (int)sub_B96CC,
    (int **)&dword_478238,
    (int **)&dword_47823C);
  sub_1BA494(&sub_B9FE4);
  v4 = sub_53274(
         "add-auto-load-safe-path",
         4,
         (int)sub_B9F84,
         (int)"Add entries to the list of directories from which it is safe to auto-load files.\n"
              "See the commands 'set auto-load safe-path' and 'show auto-load safe-path' to\n"
              "access the current full list setting.",
         (int **)&dword_474744);
  sub_5324C(v4, 1010944);
  v5 = sub_53274(
         "add-auto-load-scripts-directory",
         4,
         (int)sub_B9660,
         (int)"Add entries to the list of directories from which to load auto-loaded scripts.\n"
              "See the commands 'set auto-load scripts-directory' and\n"
              "'show auto-load scripts-directory' to access the current full list setting.",
         (int **)&dword_474744);
  sub_5324C(v5, 1010944);
  return sub_535B8(
           "auto-load",
           11,
           (int)&dword_478228,
           "Set auto-load verifications debugging.",
           "Show auto-load verifications debugging.",
           "When non-zero, debugging output for files of 'set auto-load ...'\nis displayed.",
           0,
           (int)sub_B96BC,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
