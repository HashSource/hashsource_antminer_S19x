void __noreturn sub_4BD28()
{
  __pid_t v0; // r0

  ptrace(PTRACE_TRACEME, 0, 0);
  v0 = getpid();
  kill(v0, 19);
  if ( fork() != -1 )
    exit(0);
  sub_258B04("fork");
}
