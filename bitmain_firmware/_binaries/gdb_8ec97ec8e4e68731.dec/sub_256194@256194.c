int sub_256194()
{
  int v0; // r0
  int v1; // r0

  v0 = sub_539C0(
         "ptype",
         1,
         (int)sub_255B5C,
         (int)"Print definition of type TYPE.\n"
              "Usage: ptype[/FLAGS] TYPE | EXPRESSION\n"
              "Argument may be any type (for example a type name defined by typedef,\n"
              "or \"struct STRUCT-TAG\" or \"class CLASS-NAME\" or \"union UNION-TAG\"\n"
              "or \"enum ENUM-TAG\") or an expression.\n"
              "The selected stack frame's lexical context is used to look up the name.\n"
              "Contrary to \"whatis\", \"ptype\" always unrolls any typedefs.\n"
              "\n"
              "Available FLAGS are:\n"
              "  /r    print in \"raw\" form; do not substitute typedefs\n"
              "  /m    do not print methods defined in a class\n"
              "  /M    print methods defined in a class\n"
              "  /t    do not print typedefs defined in a class\n"
              "  /T    print typedefs defined in a class\n"
              "  /o    print offsets and sizes of fields in a struct (like pahole)\n");
  sub_5324C(v0, (int)sub_F7418);
  v1 = sub_539C0(
         "whatis",
         1,
         (int)sub_255B54,
         (int)"Print data type of expression EXP.\nOnly one level of typedefs is unrolled.  See also \"ptype\".");
  sub_5324C(v1, (int)sub_F7418);
  sub_533F8(
    "type",
    -1,
    (int)sub_255330,
    (int)"Generic command for showing type-printing settings.",
    &dword_48A99C,
    (int)"show print type ",
    0,
    (int **)&dword_474778);
  sub_533F8(
    "type",
    -1,
    (int)sub_2552F4,
    (int)"Generic command for setting how types print.",
    &dword_48A9A0,
    (int)"show print type ",
    0,
    (int **)&dword_47477C);
  sub_535B8(
    "methods",
    -1,
    (int)&dword_46DD3C,
    "Set printing of methods defined in classes.",
    "Show printing of methods defined in classes.",
    0,
    (int)sub_2551E4,
    (int)sub_2552E4,
    &dword_48A9A0,
    (int **)&dword_48A99C);
  sub_535B8(
    "typedefs",
    -1,
    (int)&dword_46DD40,
    "Set printing of typedefs defined in classes.",
    "Show printing of typedefs defined in classes.",
    0,
    (int)sub_255200,
    (int)sub_2552D4,
    &dword_48A9A0,
    (int **)&dword_48A99C);
  return sub_538CC(
           "nested-type-limit",
           -1,
           (int)&dword_48A998,
           "Set the number of recursive nested type definitions to print (\"unlimited\" or -1 to show all).",
           "Show the number of recursive nested type definitions to print.",
           0,
           (int)sub_25521C,
           (int)sub_2552AC,
           &dword_48A9A0,
           (int **)&dword_48A99C);
}
