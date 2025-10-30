int sub_5274C()
{
  int v0; // r0
  int v1; // r0

  v0 = sub_93140(
         "Read commands from a file named FILE.\n"
         "\n"
         "Usage: source [-s] [-v] FILE\n"
         "-s: search for the script in the source search path,\n"
         "    even if FILE contains directories.\n"
         "-v: each command in FILE is echoed as it is executed.\n"
         "\n"
         "Note that the file \"%s\" is read automatically in this way\n"
         "when GDB is started.",
         ".gdbinit");
  v1 = sub_53274("source", 4, sub_52AAC, v0, &dword_474744);
  return sub_5324C(v1, 1010944);
}
