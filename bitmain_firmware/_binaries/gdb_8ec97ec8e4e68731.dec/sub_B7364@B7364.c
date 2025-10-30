int sub_B7364()
{
  sub_1B963C(sub_B7340);
  return sub_534EC(
           "agent",
           0,
           (int)off_46BC00,
           (int)off_46BBFC,
           "Set debugger's willingness to use agent as a helper.",
           "Show debugger's willingness to use agent as a helper.",
           "If on, GDB will delegate some of the debugging operations to the\n"
           "agent, if the target supports it.  This will speed up those\n"
           "operations that are supported by the agent.\n"
           "If off, GDB will not use agent, even if such is supported by the\n"
           "target.",
           (int)sub_B72EC,
           (int)sub_B7330,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
