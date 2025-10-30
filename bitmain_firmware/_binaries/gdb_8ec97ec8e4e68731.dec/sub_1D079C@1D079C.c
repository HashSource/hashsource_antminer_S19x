int sub_1D079C()
{
  sub_53274(
    "psymbols",
    11,
    (int)sub_1D2350,
    (int)"Print dump of current partial symbol definitions.\n"
         "Usage: mt print psymbols [-objfile objfile] [-pc address] [--] [outfile]\n"
         "       mt print psymbols [-objfile objfile] [-source source] [--] [outfile]\n"
         "Entries in the partial symbol table are dumped to file OUTFILE,\n"
         "or the terminal if OUTFILE is unspecified.\n"
         "If ADDRESS is provided, dump only the file for that address.\n"
         "If SOURCE is provided, dump only that file's symbols.\n"
         "If OBJFILE is provided, dump only that file's minimal symbols.",
    (int **)&dword_474784);
  sub_53274(
    "psymtabs",
    11,
    (int)sub_1D1BC0,
    (int)"List the partial symbol tables for all object files.\n"
         "This does not include information about individual partial symbols,\n"
         "just the symbol table structures themselves.",
    (int **)&dword_474788);
  return sub_53274(
           "check-psymtabs",
           11,
           (int)sub_1D1860,
           (int)"Check consistency of currently expanded psymtabs versus symtabs.",
           (int **)&dword_47478C);
}
