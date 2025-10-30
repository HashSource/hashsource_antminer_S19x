_DWORD *sub_220A40()
{
  int i; // r3

  for ( i = 0; i != 16; ++i )
    dword_4897FC[4 * i] = i;
  dword_489704 = sub_1CD100(0, (int)sub_219828);
  dword_489700 = sub_1CD100(0, (int)sub_2197F4);
  sub_5398C("variables", (int)sub_2225EC, (int)"All global and static variable names, or those matching REGEXP.");
  if ( dword_487A74 )
    sub_539C0("whereis", 5, (int)sub_2225EC, (int)"All global and static variable names, or those matching REGEXP.");
  sub_5398C("functions", (int)sub_2225E4, (int)"All function names, or those matching REGEXP.");
  sub_5398C("types", (int)&loc_2225DC, (int)"All type names, or those matching REGEXP.");
  sub_5398C("sources", (int)sub_21A274, (int)"Source files in the program.");
  sub_539C0("rbreak", 6, (int)sub_222060, (int)"Set a breakpoint for all functions matching REGEXP.");
  sub_534EC(
    "multiple-symbols",
    -1,
    (int)"\b;>",
    (int)&off_46DBB4,
    "Set the debugger behavior when more than one symbol are possible matches\nin an expression.",
    "Show how the debugger handles ambiguities in expressions.",
    "Valid values are \"ask\", \"all\", \"cancel\", and the default is \"all\".",
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "basenames-may-differ",
    10,
    (int)&dword_489708,
    "Set whether a source file may have multiple base names.",
    "Show whether a source file may have multiple base names.",
    "(A \"base name\" is the name of a file with the directory part removed.\n"
    "Example: The base name of \"/home/user/hello.c\" is \"hello.c\".)\n"
    "If set, GDB will canonicalize file names (e.g., expand symlinks)\n"
    "before comparing them.  Canonicalization is an expensive operation,\n"
    "but it allows the same file be known by more than one base name.\n"
    "If not set (the default), all source files are assumed to have just\n"
    "one base name, and gdb will do file name comparisons more efficiently.",
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53934(
    "symtab-create",
    -1,
    (int)&dword_48999C,
    "Set debugging of symbol table creation.",
    "Show debugging of symbol table creation.",
    "When enabled (non-zero), debugging messages are printed when building\n"
    "symbol tables.  A value of 1 (one) normally provides enough information.\n"
    "A value greater than 1 provides more verbose information.",
    0,
    0,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_53934(
    "symbol-lookup",
    -1,
    (int)&dword_48970C,
    "Set debugging of symbol lookup.",
    "Show debugging of symbol lookup.",
    "When enabled (non-zero), symbol lookups are logged.",
    0,
    0,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_53934(
    "symbol-cache-size",
    -1,
    (int)&dword_46DBB0,
    "Set the size of the symbol cache.",
    "Show the size of the symbol cache.",
    "The size of the symbol cache.\nIf zero then the symbol cache is disabled.",
    (int)sub_219ED4,
    0,
    (int **)&dword_487A7C,
    (int **)&dword_487A84);
  sub_53274(
    "symbol-cache",
    11,
    (int)sub_21B418,
    (int)"Dump the symbol cache for each program space.",
    (int **)&dword_474784);
  sub_53274(
    "symbol-cache-statistics",
    11,
    (int)sub_219CEC,
    (int)"Print symbol cache statistics for each program space.",
    (int **)&dword_474784);
  sub_53274(
    "flush-symbol-cache",
    11,
    (int)sub_219C7C,
    (int)"Flush the symbol cache for each program space.",
    (int **)&dword_47478C);
  sub_1B9280(2203736);
  sub_1B963C(2202732);
  return sub_1B96F8(2202724);
}
