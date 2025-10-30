int sub_278A00()
{
  int v0; // r0
  int result; // r0

  sub_533F8(
    "compile",
    10,
    (int)sub_278944,
    (int)"Command to compile source code and inject it into the inferior.",
    &dword_48AA60,
    (int)"compile ",
    1,
    (int **)&dword_474744);
  sub_547B0((int)"expression", "compile", 10, 0);
  sub_53274(
    "code",
    10,
    (int)sub_2787F4,
    (int)"Compile, inject, and execute code.\n"
         "\n"
         "Usage: compile code [-r|-raw] [--] [CODE]\n"
         "-r|-raw: Suppress automatic 'void _gdb_expr () { CODE }' wrapping.\n"
         "--: Do not parse any options beyond this delimiter.  All text to the\n"
         "    right will be treated as source code.\n"
         "\n"
         "The source code may be specified as a simple one line expression, e.g.:\n"
         "\n"
         "    compile code printf(\"Hello world\\n\");\n"
         "\n"
         "Alternatively, you can type a multiline expression by invoking\n"
         "this command with no argument.  GDB will then prompt for the\n"
         "expression interactively; type a line containing \"end\" to\n"
         "indicate the end of the expression.",
    &dword_48AA60);
  v0 = sub_53274(
         "file",
         10,
         (int)sub_2786B8,
         (int)"Evaluate a file containing source code.\n"
              "\n"
              "Usage: compile file [-r|-raw] [filename]\n"
              "-r|-raw: Suppress automatic 'void _gdb_expr () { CODE }' wrapping.",
         &dword_48AA60);
  sub_5324C(v0, (int)&loc_F6D00);
  sub_53274(
    "print",
    10,
    (int)sub_2785C4,
    (int)"Evaluate EXPR by using the compiler and print result.\n"
         "\n"
         "Usage: compile print[/FMT] [EXPR]\n"
         "\n"
         "The expression may be specified on the same line as the command, e.g.:\n"
         "\n"
         "    compile print i\n"
         "\n"
         "Alternatively, you can type a multiline expression by invoking\n"
         "this command with no argument.  GDB will then prompt for the\n"
         "expression interactively; type a line containing \"end\" to\n"
         "indicate the end of the expression.\n"
         "\n"
         "EXPR may be preceded with /FMT, where FMT is a format letter\n"
         "but no count or size letter (see \"x\" command).",
    &dword_48AA60);
  sub_535B8(
    "compile",
    11,
    (int)&dword_48AA50,
    "Set compile command debugging.",
    "Show compile command debugging.",
    "When on, compile command debugging is enabled.",
    0,
    (int)sub_2778E8,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_53688(
    "compile-args",
    4,
    (int)&dword_48AA4C,
    "Set compile command GCC command-line arguments",
    "Show compile command GCC command-line arguments",
    "Use options like -I (include file directory) or ABI settings.\n"
    "String quoting is parsed like in shell, for example:\n"
    "  -mno-align-double \"-I/dir with a space/include\"",
    (int)sub_277828,
    (int)sub_2778D8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  dword_48AA4C = sub_327254(
                   "-O0 -gdwarf-4 -fPIE -Wall  -Wno-implicit-function-declaration -Wno-unused-but-set-variable -Wno-unuse"
                   "d-variable -fno-stack-protector");
  sub_31DAD0(dword_48AA44);
  sub_2777C8(dword_48AA4C, &dword_48AA48, &dword_48AA44);
  sub_5373C(
    "compile-gcc",
    4,
    (int)&dword_48AA54,
    "Set compile command GCC driver filename",
    "Show compile command GCC driver filename",
    "It should be absolute filename of the gcc executable.\n"
    "If empty the default target triplet will be searched in $PATH.",
    0,
    (int)sub_2778C8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  result = sub_327254("");
  dword_48AA54 = result;
  return result;
}
