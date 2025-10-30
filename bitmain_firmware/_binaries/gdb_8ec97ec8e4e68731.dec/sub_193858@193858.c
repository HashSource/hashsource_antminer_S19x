int sub_193858()
{
  int result; // r0
  int v1; // r0
  int v2; // r0

  dword_4879E4 = sub_1A425C("/usr/lib/gdb", 1);
  sub_53934(
    "jit",
    11,
    (int)&dword_4879D8,
    "Set JIT debugging.",
    "Show JIT debugging.",
    "When non-zero, JIT debugging is enabled.",
    0,
    (int)sub_1922D8,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_1B9340(sub_1934E8);
  sub_1BA19C(1652356);
  sub_1B9C44(1647760);
  dword_4879D4 = sub_1B6AD8(0, sub_191F4C);
  dword_4879D0 = sub_1CD100(0, sub_191D88);
  dword_4879E0 = (int)sub_16EBB8(1646844);
  result = sub_163514();
  if ( result )
  {
    v1 = sub_539C0(
           "jit-reader-load",
           -1,
           (int)sub_1934F8,
           (int)"Load FILE as debug info reader and unwinder for JIT compiled code.\n"
                "Usage: jit-reader-load FILE\n"
                "Try to load file FILE as a debug info reader (and unwinder) for\n"
                "JIT compiled code.  The file is loaded from /usr/lib/gdb,\n"
                "relocated relative to the GDB executable if required.");
    sub_5324C(v1, 1010944);
    v2 = sub_539C0(
           "jit-reader-unload",
           -1,
           (int)sub_1936F8,
           (int)"Unload the currently loaded JIT debug info reader.\n"
                "Usage: jit-reader-unload\n"
                "\n"
                "Do \"help jit-reader-load\" for info on loading debug info readers.");
    return sub_5324C(v2, (int)nullsub_61);
  }
  return result;
}
