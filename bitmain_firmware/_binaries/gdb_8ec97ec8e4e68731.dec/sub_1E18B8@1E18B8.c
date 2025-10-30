int __fastcall sub_1E18B8(int a1)
{
  __int64 v2; // r0

  if ( off_46DB04 == "Ctrl-C" )
    return sub_25A418(
             a1,
             "Send the ASCII ETX character (Ctrl-c) to the remote target to interrupt the execution of the program.\n");
  if ( off_46DB04 == "BREAK" )
    return sub_25A418(a1, "send a break signal to the remote target to interrupt the execution of the program.\n");
  if ( off_46DB04 == "BREAK-g" )
    return sub_25A418(
             a1,
             "Send a break signal and 'g' a.k.a. Magic SysRq g to the remote target to interrupt the execution of Linux kernel.\n");
  v2 = sub_94700((int)"remote.c", 956, "Invalid value for interrupt_sequence_mode: %s.", off_46DB04);
  return sub_1E192C(v2, HIDWORD(v2));
}
