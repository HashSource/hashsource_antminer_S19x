int sub_1A617C()
{
  int result; // r0
  __pid_t v1; // r0

  result = sub_25A3E4("Should GDB dump core? ");
  if ( result )
  {
    signal(3, 0);
    v1 = getpid();
    return kill(v1, 3);
  }
  return result;
}
