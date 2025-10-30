int sub_2153F0()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0

  sub_1B96F8((int)sub_2116C4);
  v0 = sub_53274(
         "symbol-file",
         3,
         (int)sub_213960,
         (int)"Load symbol table from executable file FILE.\n"
              "Usage: symbol-file [-readnow | -readnever] FILE\n"
              "The `file' command can also load symbol tables, as well as setting the file\n"
              "to execute.\n"
              "The '-readnow' option will cause GDB to read the entire symbol file\n"
              "immediately.  This makes the command slower, but may make future operations\n"
              "faster.\n"
              "The '-readnever' option will prevent GDB from reading the symbol file's\n"
              "symbolic debug information.",
         (int **)&dword_474744);
  sub_5324C(v0, (int)&loc_F6D00);
  v1 = sub_53274(
         "add-symbol-file",
         3,
         (int)sub_213B10,
         (int)"Load symbols from FILE, assuming FILE has been dynamically loaded.\n"
              "Usage: add-symbol-file FILE ADDR [-readnow | -readnever | -s SECT-NAME SECT-ADDR]...\n"
              "ADDR is the starting address of the file's text.\n"
              "Each '-s' argument provides a section name and address, and\n"
              "should be specified if the data and bss segments are not contiguous\n"
              "with the text.  SECT-NAME is a section name to be loaded at SECT-ADDR.\n"
              "The '-readnow' option will cause GDB to read the entire symbol file\n"
              "immediately.  This makes the command slower, but may make future operations\n"
              "faster.\n"
              "The '-readnever' option will prevent GDB from reading the symbol file's\n"
              "symbolic debug information.",
         (int **)&dword_474744);
  sub_5324C(v1, (int)&loc_F6D00);
  sub_53274(
    "remove-symbol-file",
    3,
    (int)sub_21404C,
    (int)"Remove a symbol file added via the add-symbol-file command.\n"
         "Usage: remove-symbol-file FILENAME\n"
         "       remove-symbol-file -a ADDRESS\n"
         "The file to remove can be identified by its filename or by an address\n"
         "that lies within the boundaries of this symbol file in memory.",
    (int **)&dword_474744);
  v2 = sub_53274(
         "load",
         3,
         (int)sub_215E2C,
         (int)"Dynamically load FILE into the running program, and record its symbols\n"
              "for access from GDB.\n"
              "Usage: load [FILE] [OFFSET]\n"
              "An optional load OFFSET may also be given as a literal address.\n"
              "When OFFSET is provided, FILE must also be provided.  FILE can be provided\n"
              "on its own.",
         (int **)&dword_474744);
  sub_5324C(v2, (int)&loc_F6D00);
  sub_533F8(
    "overlay",
    4,
    (int)sub_211688,
    (int)"Commands for debugging overlays.",
    &dword_4896B0,
    (int)"overlay ",
    0,
    (int **)&dword_474744);
  sub_547B0((int)"ovly", (unsigned __int8 *)"overlay", 8, 1);
  sub_547B0((int)"ov", (unsigned __int8 *)"overlay", 8, 1);
  sub_53274("map-overlay", 4, (int)sub_2117C4, (int)"Assert that an overlay section is mapped.", (int **)&dword_4896B0);
  sub_53274(
    "unmap-overlay",
    4,
    (int)sub_210CC8,
    (int)"Assert that an overlay section is unmapped.",
    (int **)&dword_4896B0);
  sub_53274("list-overlays", 4, (int)sub_214410, (int)"List mappings of overlay sections.", (int **)&dword_4896B0);
  sub_53274("manual", 4, (int)sub_21164C, (int)"Enable overlay debugging.", (int **)&dword_4896B0);
  sub_53274("off", 4, (int)sub_211610, (int)"Disable overlay debugging.", (int **)&dword_4896B0);
  sub_53274("auto", 4, (int)sub_2115D4, (int)"Enable automatic overlay debugging.", (int **)&dword_4896B0);
  sub_53274(
    "load-target",
    4,
    (int)sub_2115A0,
    (int)"Read the overlay mapping state from the target.",
    (int **)&dword_4896B0);
  sub_536E0(
    "extension-language",
    3,
    (int)&dword_4896E8,
    "Set mapping between filename extension and source language.",
    "Show mapping between filename extension and source language.",
    "Usage: set extension-language .foo bar",
    (int)sub_215F80,
    (int)sub_211514,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5398C("extensions", (int)sub_211524, (int)"All filename extensions associated with a source language.");
  sub_5373C(
    "debug-file-directory",
    4,
    (int)&dword_489698,
    "Set the directories where separate debug symbols are searched for.",
    "Show the directories where separate debug symbols are searched for.",
    "Separate debug symbols are first searched for in the same\n"
    "directory as the binary, then in the `.debug' subdirectory,\n"
    "and lastly at the path of the directory of the binary with\n"
    "each global debug-file-directory component prepended.",
    0,
    (int)sub_211504,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_534EC(
    "symbol-loading",
    -1,
    (int)off_46DB98,
    (int)off_46DB94,
    "Set printing of symbol loading messages.",
    "Show printing of symbol loading messages.",
    "off   == turn all messages off\n"
    "brief == print messages for the executable,\n"
    "         and brief messages for shared libraries\n"
    "full  == print messages for the executable,\n"
    "         and messages for each shared library.",
    0,
    0,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  return sub_535B8(
           "separate-debug-file",
           -1,
           (int)&dword_489694,
           "Set printing of separate debug info file search debug.",
           "Show printing of separate debug info file search debug.",
           "When on, GDB prints the searched locations while looking for separate debug info files.",
           0,
           0,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
