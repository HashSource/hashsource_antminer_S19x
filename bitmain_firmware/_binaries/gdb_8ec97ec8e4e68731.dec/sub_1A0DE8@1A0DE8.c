int sub_1A0DE8()
{
  sub_533F8(
    "macro",
    5,
    (int)sub_1A0930,
    (int)"Prefix for commands dealing with C preprocessor macros.",
    &dword_487A18,
    (int)"macro ",
    0,
    (int **)&dword_474744);
  sub_53274(
    "expand",
    -1,
    (int)sub_1A0844,
    (int)"Fully expand any C/C++ preprocessor macro invocations in EXPRESSION.\nShow the expanded expression.",
    (int **)&dword_487A18);
  sub_54724((int)"exp", "expand", -1, 1, &dword_487A18);
  sub_53274(
    "expand-once",
    -1,
    (int)sub_1A0758,
    (int)"Expand C/C++ preprocessor macro invocations appearing directly in EXPRESSION.\n"
         "Show the expanded expression.\n"
         "\n"
         "This command differs from `macro expand' in that it only expands macro\n"
         "invocations that appear directly in EXPRESSION; if expanding a macro\n"
         "introduces further macro invocations, those are left unexpanded.\n"
         "\n"
         "`macro expand-once' helps you see how a particular macro expands,\n"
         "whereas `macro expand' shows you how all the macros involved in an\n"
         "expression work together to yield a pre-processed expression.",
    (int **)&dword_487A18);
  sub_54724((int)"exp1", "expand-once", -1, 1, &dword_487A18);
  sub_5398C(
    "macro",
    (int)sub_1A0544,
    (int)"Show the definition of MACRO, and it's source location.\n"
         "Usage: info macro [-a|-all] [--] MACRO\n"
         "Options: \n"
         "  -a, --all    Output all definitions of MACRO in the current compilation unit.\n"
         "  --           Specify the end of arguments and the beginning of the MACRO.");
  sub_5398C(
    "macros",
    (int)sub_1A0424,
    (int)"Show the definitions of all macros at LINESPEC, or the current source location.\n"
         "Usage: info macros [LINESPEC]");
  sub_53274(
    "define",
    -1,
    (int)sub_1A0AF4,
    (int)"Define a new C/C++ preprocessor macro.\n"
         "The GDB command `macro define DEFINITION' is equivalent to placing a\n"
         "preprocessor directive of the form `#define DEFINITION' such that the\n"
         "definition is visible in all the inferior's source files.\n"
         "For example:\n"
         "  (gdb) macro define PI (3.1415926)\n"
         "  (gdb) macro define MIN(x,y) ((x) < (y) ? (x) : (y))",
    (int **)&dword_487A18);
  sub_53274(
    "undef",
    -1,
    (int)sub_1A0A6C,
    (int)"Remove the definition of the C/C++ preprocessor macro with the given name.",
    (int **)&dword_487A18);
  return sub_53274(
           "list",
           -1,
           (int)sub_1A0074,
           (int)"List all the macros defined using the `macro define' command.",
           (int **)&dword_487A18);
}
