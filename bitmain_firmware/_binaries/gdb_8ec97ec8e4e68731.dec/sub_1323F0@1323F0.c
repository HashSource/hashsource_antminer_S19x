int sub_1323F0()
{
  int v0; // r0
  int result; // r0

  dword_4872F0 = sub_1B6AD8(0, sub_11D994);
  sub_533F8(
    "dwarf",
    11,
    (int)sub_11DFCC,
    (int)"Set DWARF specific variables.\nConfigure DWARF variables such as the cache size",
    &dword_4872EC,
    (int)"maintenance set dwarf ",
    0,
    (int **)&dword_487A7C);
  sub_533F8(
    "dwarf",
    11,
    (int)sub_11DFB4,
    (int)"Show DWARF specific variables\nShow DWARF variables such as the cache size",
    &dword_4872E8,
    (int)"maintenance show dwarf ",
    0,
    (int **)&dword_487A84);
  sub_53874(
    "max-cache-age",
    10,
    (int)&dword_46D450,
    "Set the upper bound on the age of cached DWARF compilation units.",
    "Show the upper bound on the age of cached DWARF compilation units.",
    "A higher limit means that cached compilation units will be stored\n"
    "in memory longer, and more total memory will be used.  Zero disables\n"
    "caching, which can slow down startup.",
    0,
    (int)sub_11DFA4,
    (int **)&dword_4872EC,
    (int **)&dword_4872E8);
  sub_535B8(
    "always-disassemble",
    10,
    (int)&dword_487314,
    "Set whether `info address' always disassembles DWARF expressions.",
    "Show whether `info address' always disassembles DWARF expressions.",
    "When enabled, DWARF expressions are always printed in an assembly-like\n"
    "syntax.  When disabled, expressions will be printed in a more\n"
    "conversational style, when possible.",
    0,
    (int)sub_11DF94,
    (int **)&dword_4872EC,
    (int **)&dword_4872E8);
  sub_53934(
    "dwarf-read",
    -1,
    (int)&dword_4872F4,
    "Set debugging of the DWARF reader.",
    "Show debugging of the DWARF reader.",
    "When enabled (non-zero), debugging messages are printed during DWARF\n"
    "reading and symtab expansion.  A value of 1 (one) provides basic\n"
    "information.  A value greater than 1 provides more verbose information.",
    0,
    0,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_53934(
    "dwarf-die",
    -1,
    (int)&dword_487310,
    "Set debugging of the DWARF DIE reader.",
    "Show debugging of the DWARF DIE reader.",
    "When enabled (non-zero), DIEs are dumped after they are read in.\nThe value is the maximum depth to print.",
    0,
    0,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_53934(
    "dwarf-line",
    -1,
    (int)&dword_4872E4,
    "Set debugging of the dwarf line reader.",
    "Show debugging of the dwarf line reader.",
    "When enabled (non-zero), line number entries are dumped as they are read in.\n"
    "A value of 1 (one) provides basic information.\n"
    "A value greater than 1 provides more verbose information.",
    0,
    0,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_535B8(
    "check-physname",
    -1,
    (int)&dword_487318,
    "Set cross-checking of \"physname\" code against demangler.",
    "Show cross-checking of \"physname\" code against demangler.",
    "When enabled, GDB's internal \"physname\" code is checked against\nthe demangler.",
    0,
    (int)sub_11DF84,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_535B8(
    "use-deprecated-index-sections",
    -1,
    (int)&dword_48731C,
    "Set whether to use deprecated gdb_index sections.",
    "Show whether to use deprecated gdb_index sections.",
    "When enabled, deprecated .gdb_index sections are used anyway.\n"
    "Normally they are ignored either because of a missing feature or\n"
    "performance issue.\n"
    "Warning: This option must be enabled before gdb reads the file.",
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  v0 = sub_53274(
         "gdb-index",
         3,
         (int)&loc_14033C,
         (int)"Save a gdb-index file.\n"
              "Usage: save gdb-index [-dwarf-5] DIRECTORY\n"
              "\n"
              "No options create one file with .gdb-index extension for pre-DWARF-5\n"
              "compatible .gdb_index section.  With -dwarf-5 creates two files with\n"
              "extension .debug_names and .debug_str for DWARF-5 .debug_names section.",
         (int **)&dword_478364);
  sub_5324C(v0, 1010944);
  dword_48730C = ((int (__fastcall *)(int, void *))loc_2204E4)(14, &unk_39D940);
  dword_487304 = ((int (__fastcall *)(int, int (**)()))loc_2204E4)(14, off_39D924);
  dword_487308 = ((int (__fastcall *)(int, int (**)()))loc_220684)(10, &off_39D964);
  result = ((int (__fastcall *)(int, int (**)()))loc_220684)(10, &off_39D95C);
  dword_487300 = result;
  return result;
}
