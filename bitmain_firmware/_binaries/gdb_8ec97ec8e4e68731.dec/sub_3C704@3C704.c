int sub_3C704()
{
  int result; // r0

  result = ptrace(PTRACE_TRACEME, 0, 0);
  if ( result < 0 )
    sub_3D5C8("ptrace");
  return result;
}
