int sub_2055E4()
{
  int v0; // r5

  dword_4893EC = 0;
  sub_203548();
  re_set_syntax(0xB06u);
  v0 = sub_53274(
         "directory",
         3,
         (int)sub_203A5C,
         (int)"Add directory DIR to beginning of search path for source files.\n"
              "Forget cached info on source file locations and line positions.\n"
              "DIR can also be $cwd for the current working directory, or $cdir for the\n"
              "directory in which the source file was compiled into object code.\n"
              "With no argument, reset the search path to $cdir:$cwd, the default.",
         (int **)&dword_474744);
  if ( dword_487A74 )
    sub_547B0((int)"use", (unsigned __int8 *)"directory", 3, 0);
  sub_5324C(v0, (int)&loc_F6D00);
  sub_5373C(
    "directories",
    3,
    (int)&dword_4893F4,
    "Set the search path for finding source files.",
    "Show the search path for finding source files.",
    "$cwd in the path means the current working directory.\n"
    "$cdir in the path means the compilation directory of the source file.\n"
    "GDB ensures the search path always ends with $cdir:$cwd by\n"
    "appending these directories if necessary.\n"
    "Setting the value to an empty string sets it to $cdir:$cwd, the default.",
    (int)sub_203A20,
    (int)sub_203030,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5398C("source", (int)sub_202CC8, (int)"Information about the current source file.");
  sub_5398C(
    "line",
    (int)sub_20504C,
    (int)"Core addresses of the code for a source line.\n"
         "Line can be specified as\n"
         "  LINENUM, to list around that line in current file,\n"
         "  FILE:LINENUM, to list around that line in that file,\n"
         "  FUNCTION, to list around beginning of that function,\n"
         "  FILE:FUNCTION, to distinguish among like-named static functions.\n"
         "Default is to describe the last source line that was listed.\n"
         "\n"
         "This sets the default address for \"x\" to the line's first instruction\n"
         "so that \"x/i\" suffices to start examining the machine code.\n"
         "The address is also stored as the value of \"$_\".");
  sub_539C0(
    "forward-search",
    3,
    (int)&loc_204CF4,
    (int)"Search for regular expression (see regex(3)) from last line listed.\n"
         "The matching line number is also stored as the value of \"$_\".");
  sub_547B0((int)"search", "forward-search", 3, 0);
  sub_547B0((int)"fo", "forward-search", 3, 1);
  sub_539C0(
    "reverse-search",
    3,
    (int)&loc_204A9C,
    (int)"Search backward for regular expression (see regex(3)) from last line listed.\n"
         "The matching line number is also stored as the value of \"$_\".");
  sub_547B0((int)"rev", "reverse-search", 3, 1);
  sub_537A4(
    "listsize",
    4,
    (int)&dword_46DB64,
    "Set number of source lines gdb will list by default.",
    "Show number of source lines gdb will list by default.",
    "Use this to choose how many source lines the \"list\" displays (unless\n"
    "the \"list\" argument explicitly specifies some other number).\n"
    "A value of \"unlimited\", or zero, means there's no limit.",
    0,
    (int)sub_202CB8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53274(
    "substitute-path",
    3,
    (int)sub_205444,
    (int)"Usage: set substitute-path FROM TO\n"
         "Add a substitution rule replacing FROM into TO in source file names.\n"
         "If a substitution rule was previously set for FROM, the old rule\n"
         "is replaced by the new one.",
    (int **)&dword_47475C);
  sub_53274(
    "substitute-path",
    3,
    (int)sub_203434,
    (int)"Usage: unset substitute-path [FROM]\n"
         "Delete the rule for substituting FROM in source file names.  If FROM\n"
         "is not specified, all substituting rules are deleted.\n"
         "If the debugger cannot find a rule for FROM, it will display a warning.",
    (int **)&dword_474794);
  sub_53274(
    "substitute-path",
    3,
    (int)sub_202E40,
    (int)"Usage: show substitute-path [FROM]\n"
         "Print the rule for substituting FROM in source file names. If FROM\n"
         "is not specified, print all substitution rules.",
    (int **)&dword_47474C);
  return sub_534EC(
           "filename-display",
           3,
           (int)off_3DD8C0,
           (int)&off_46DB68,
           "Set how to display filenames.",
           "Show how to display filenames.",
           "filename-display can be:\n"
           "  basename - display only basename of a filename\n"
           "  relative - display a filename relative to the compilation directory\n"
           "  absolute - display an absolute filename\n"
           "By default, relative filenames are displayed.",
           0,
           (int)sub_202CA8,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
