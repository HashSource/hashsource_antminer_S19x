int sub_374DC()
{
  dword_471B90 = sub_16EBC0(sub_348B8);
  dword_471ACC = sub_183634(0, sub_33B94);
  sub_1BA19C(sub_33B5C);
  sub_1BA0E0(sub_33B5C);
  sub_535B8(
    "use-coredump-filter",
    3,
    &dword_46AF64,
    "Set whether gcore should consider /proc/PID/coredump_filter.",
    "Show whether gcore should consider /proc/PID/coredump_filter.",
    "Use this command to set whether gcore should consider the contents\n"
    "of /proc/PID/coredump_filter when generating the corefile.  For more information\n"
    "about this file, refer to the manpage of core(5).",
    0,
    sub_348A8,
    &dword_47475C,
    &dword_47474C);
  return sub_535B8(
           "dump-excluded-mappings",
           3,
           &dword_471B8C,
           "Set whether gcore should dump mappings marked with the VM_DONTDUMP flag.",
           "Show whether gcore should dump mappings marked with the VM_DONTDUMP flag.",
           "Use this command to set whether gcore should dump mappings marked with the\n"
           "VM_DONTDUMP flag (\"dd\" in /proc/PID/smaps) when generating the corefile.  For\n"
           "more information about this file, refer to the manpage of proc(5) and core(5).",
           0,
           sub_34898,
           &dword_47475C,
           &dword_47474C);
}
