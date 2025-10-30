int sub_218E58()
{
  dword_4896F8 = stdout;
  dword_4896F4 = stdin;
  dword_4896FC = stderr;
  sub_53274(
    "symbols",
    11,
    (int)sub_2193DC,
    (int)"Print dump of current symbol definitions.\n"
         "Usage: mt print symbols [-pc address] [--] [outfile]\n"
         "       mt print symbols [-objfile objfile] [-source source] [--] [outfile]\n"
         "Entries in the full symbol table are dumped to file OUTFILE,\n"
         "or the terminal if OUTFILE is unspecified.\n"
         "If ADDRESS is provided, dump only the file for that address.\n"
         "If SOURCE is provided, dump only that file's symbols.\n"
         "If OBJFILE is provided, dump only that file's minimal symbols.",
    (int **)&dword_474784);
  sub_53274(
    "msymbols",
    11,
    (int)sub_218FB4,
    (int)"Print dump of current minimal symbol definitions.\n"
         "Usage: mt print msymbols [-objfile objfile] [--] [outfile]\n"
         "Entries in the minimal symbol table are dumped to file OUTFILE,\n"
         "or the terminal if OUTFILE is unspecified.\n"
         "If OBJFILE is provided, dump only that file's minimal symbols.",
    (int **)&dword_474784);
  sub_53274(
    "objfiles",
    11,
    (int)sub_217D94,
    (int)"Print dump of current object file definitions.\n"
         "With an argument REGEXP, list the object files with matching names.",
    (int **)&dword_474784);
  sub_53274(
    "symtabs",
    11,
    (int)sub_217B14,
    (int)"List the full symbol tables for all object files.\n"
         "This does not include information about individual symbols, blocks, or\n"
         "linetables --- just the symbol table structures themselves.\n"
         "With an argument REGEXP, list the symbol tables with matching names.",
    (int **)&dword_474788);
  sub_53274(
    "line-table",
    11,
    (int)sub_2188E8,
    (int)"List the contents of all line tables, from all symbol tables.\n"
         "With an argument REGEXP, list just the line tables for the symbol\n"
         "tables with matching names.",
    (int **)&dword_474788);
  sub_53274(
    "check-symtabs",
    11,
    (int)sub_2179D4,
    (int)"Check consistency of currently expanded symtabs.",
    (int **)&dword_47478C);
  return sub_53274(
           "expand-symtabs",
           11,
           (int)sub_217888,
           (int)"Expand symbol tables.\nWith an argument REGEXP, only expand the symbol tables with matching names.",
           (int **)&dword_47478C);
}
