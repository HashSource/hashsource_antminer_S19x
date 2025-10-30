int sub_202114()
{
  dword_4893A0 = (int)sub_16EBB8((int)sub_200554);
  sub_1B96F8(2098668);
  sub_539C0("sharedlibrary", 3, (int)sub_2018C4, (int)"Load shared object library symbols for files matching REGEXP.");
  sub_5398C("sharedlibrary", (int)sub_201058, (int)"Status of loaded shared object libraries.");
  sub_54788((int)"dll", "sharedlibrary", 1);
  sub_539C0("nosharedlibrary", 3, (int)sub_201A40, (int)"Unload all shared object library symbols.");
  sub_535B8(
    "auto-solib-add",
    4,
    (int)&dword_46DBA8,
    "Set autoloading of shared library symbols.",
    "Show autoloading of shared library symbols.",
    "If \"on\", symbols from all shared object libraries will be loaded\n"
    "automatically when the inferior begins execution, when the dynamic linker\n"
    "informs gdb that a new library has been loaded, or when attaching to the\n"
    "inferior.  Otherwise, symbols must be loaded manually, using `sharedlibrary'.",
    0,
    (int)sub_200544,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5373C(
    "sysroot",
    4,
    (int)&dword_487A40,
    "Set an alternate system root.",
    "Show the current system root.",
    "The system root is used to load absolute shared library symbol files.\n"
    "For other (relative) files, you can add directories using\n"
    "`set solib-search-path'.",
    (int)sub_201D78,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_54724((int)"solib-absolute-prefix", "sysroot", 4, 0, &dword_47475C);
  sub_54724((int)"solib-absolute-prefix", "sysroot", 4, 0, &dword_47474C);
  return sub_5373C(
           "solib-search-path",
           4,
           (int)&dword_4893A4,
           "Set the search path for loading non-absolute shared library symbol files.",
           "Show the search path for loading non-absolute shared library symbol files.",
           "This takes precedence over the environment variables PATH and LD_LIBRARY_PATH.",
           (int)sub_201A80,
           (int)sub_200534,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
