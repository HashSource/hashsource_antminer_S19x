int sub_1AEF30()
{
  sub_539C0(
    "mem",
    1,
    (int)sub_1AF580,
    (int)"Define attributes for memory region or reset memory region handling to\n"
         "target-based.\n"
         "Usage: mem auto\n"
         "       mem <lo addr> <hi addr> [<mode> <width> <cache>],\n"
         "where <mode>  may be rw (read/write), ro (read-only) or wo (write-only),\n"
         "      <width> may be 8, 16, 32, or 64, and\n"
         "      <cache> may be cache or nocache");
  sub_53274(
    "mem",
    1,
    (int)sub_1AF21C,
    (int)"Enable memory region.\n"
         "Arguments are the code numbers of the memory regions to enable.\n"
         "Usage: enable mem <code number>...\n"
         "Do \"info mem\" to see current list of code numbers.",
    &dword_4747AC);
  sub_53274(
    "mem",
    1,
    (int)sub_1AF140,
    (int)"Disable memory region.\n"
         "Arguments are the code numbers of the memory regions to disable.\n"
         "Usage: disable mem <code number>...\n"
         "Do \"info mem\" to see current list of code numbers.",
    &dword_4747A8);
  sub_53274(
    "mem",
    1,
    (int)sub_1AF2F8,
    (int)"Delete memory region.\n"
         "Arguments are the code numbers of the memory regions to delete.\n"
         "Usage: delete mem <code number>...\n"
         "Do \"info mem\" to see current list of code numbers.",
    &dword_4747A0);
  sub_5398C("mem", (int)sub_1AEA20, (int)"Memory region attributes");
  sub_533F8(
    "mem",
    1,
    (int)nullsub_63,
    (int)"Memory regions settings",
    &dword_487B2C,
    (int)"set mem ",
    0,
    (int **)&dword_47475C);
  sub_533F8(
    "mem",
    1,
    (int)nullsub_63,
    (int)"Memory regions settings",
    &dword_487B30,
    (int)"show mem  ",
    0,
    (int **)&dword_47474C);
  return sub_535B8(
           "inaccessible-by-default",
           -1,
           (int)&dword_46D9C0,
           "Set handling of unknown memory regions.",
           "Show handling of unknown memory regions.",
           "If on, and some memory map is defined, debugger will emit errors on\n"
           "accesses to memory not defined in the memory map. If off, accesses to all\n"
           "memory addresses will be allowed.",
           0,
           (int)sub_1AE984,
           &dword_487B2C,
           &dword_487B30);
}
