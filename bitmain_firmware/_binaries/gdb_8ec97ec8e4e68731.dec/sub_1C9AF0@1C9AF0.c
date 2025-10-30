int sub_1C9AF0()
{
  return sub_533F8(
           "probes",
           5,
           (int)sub_1CC0C0,
           (int)"Show available static probes.\n"
                "Usage: info probes [all|TYPE [ARGS]]\n"
                "TYPE specifies the type of the probe, and can be one of the following:\n"
                "  - stap\n"
                "If you specify TYPE, there may be additional arguments needed by the\n"
                "subcommand.\n"
                "If you do not specify any argument, or specify `all', then the command\n"
                "will show information about all types of probes.",
           &dword_487D0C,
           (int)"info probes ",
           0,
           (int **)&dword_474754);
}
