int sub_10A874()
{
  char **v0; // r3
  int i; // r0
  char *v2; // r7
  char **v3; // r4
  int v4; // r5
  char **v5; // r8
  const char *v6; // r7
  int v7; // r0
  char *v8; // r3

  v0 = &off_432D04;
  for ( i = 0; ; ++i )
  {
    v0 += 3;
    if ( !v0[1] )
      break;
  }
  v2 = (char *)sub_93094(i + 2, 4u);
  dword_4872B4 = (int)v2;
  v3 = &off_432D04;
  v4 = 0;
  while ( 1 )
  {
    v5 = v3;
    *(_DWORD *)&v2[v4] = sub_327254(*v3);
    v3 += 3;
    if ( !dword_4872B0 )
      break;
    v4 += 4;
    if ( !v5[4] )
      goto LABEL_11;
LABEL_6:
    v2 = (char *)dword_4872B4;
  }
  v6 = *(const char **)(dword_4872B4 + v4);
  v4 += 4;
  v7 = strcmp("auto", v6);
  v8 = v5[4];
  if ( !v7 )
    dword_4872B0 = (int)v6;
  if ( v8 )
    goto LABEL_6;
LABEL_11:
  sub_535B8(
    "demangle",
    4,
    (int)&dword_46D448,
    "Set demangling of encoded C++/ObjC names when displaying symbols.",
    "Show demangling of encoded C++/ObjC names when displaying symbols.",
    0,
    0,
    (int)sub_10A4A4,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "asm-demangle",
    4,
    (int)&dword_4872B8,
    "Set demangling of C++/ObjC names in disassembly listings.",
    "Show demangling of C++/ObjC names in disassembly listings.",
    0,
    0,
    (int)sub_10A494,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_534EC(
    "demangle-style",
    4,
    dword_4872B4,
    (int)&dword_4872B0,
    "Set the current C++ demangling style.",
    "Show the current C++ demangling style.",
    "Use `set demangle-style' without arguments for a list of demangling styles.",
    (int)sub_10A4B4,
    (int)sub_10A484,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  return sub_53274(
           "demangle",
           4,
           (int)&loc_10A55C,
           (int)"Demangle a mangled name.\n"
                "Usage: demangle [-l language] [--] name\n"
                "If LANGUAGE is not specified, NAME is demangled in the current language.",
           (int **)&dword_474744);
}
