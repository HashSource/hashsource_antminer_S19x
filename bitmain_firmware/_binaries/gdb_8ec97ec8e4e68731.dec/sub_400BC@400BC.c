int sub_400BC()
{
  int v0; // r0

  if ( off_489A98() )
  {
    v0 = ps_getpid_0(&dword_4878EC);
    if ( !sub_4D208(v0, 3) )
      sub_946B0(
        "Target and debugger are in different PID namespaces; thread lists and other data are likely unreliable.  Connect"
        " to gdbserver inside the container.");
  }
  return sub_3FD14();
}
