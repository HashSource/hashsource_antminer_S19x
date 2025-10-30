int sub_4BE98()
{
  __pid_t v0; // r0
  __pid_t v1; // r5
  int v2; // r0
  int result; // r0
  int v4; // r1
  int v5; // [sp+0h] [bp-10h] BYREF
  int stat_loc; // [sp+4h] [bp-Ch] BYREF
  __pid_t pid; // [sp+8h] [bp-8h] BYREF
  int v8; // [sp+Ch] [bp-4h] BYREF

  dword_46B098 = 0;
  v0 = fork();
  v1 = v0;
  if ( !v0 )
    sub_4BD28();
  if ( v0 == -1 )
    sub_258B04("fork");
  v2 = sub_4C380(v0, &v5, 0);
  if ( v2 == -1 )
    sub_258B04("waitpid");
  if ( v2 != v1 )
    sub_946E0("linux_check_ptrace_features: waitpid: unexpected result %d.", v2);
  if ( (unsigned __int8)v5 != 127 )
    sub_946E0("linux_check_ptrace_features: waitpid: unexpected status %d.", v5);
  if ( !ptrace(PTRACE_SETOPTIONS, v1, 0, 1) )
    dword_46B098 |= 1u;
  if ( !ptrace(PTRACE_SETOPTIONS, v1, 0, 2) )
  {
    if ( !ptrace(PTRACE_SETOPTIONS, v1, 0, 34) )
      dword_46B098 |= 0x20u;
    if ( ptrace(PTRACE_CONT, v1, 0) )
      sub_946B0("linux_test_for_tracefork: failed to resume child");
    v4 = sub_4C380(v1, &stat_loc, 0);
    if ( v1 == v4 && (unsigned __int8)stat_loc == 127 && stat_loc >> 16 == 1 )
    {
      pid = 0;
      if ( !ptrace(PTRACE_GETEVENTMSG, v1, 0, &pid) && pid )
      {
        dword_46B098 |= 0x1Eu;
        sub_4C380(pid, &v8, 0);
        if ( ptrace(PTRACE_KILL, pid, 0, 0) )
          sub_946B0("linux_test_for_tracefork: failed to kill second child");
        sub_4C380(pid, &stat_loc, 0);
      }
    }
    else
    {
      sub_946B0("linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)", v4, stat_loc);
    }
  }
  if ( !ptrace(PTRACE_SETOPTIONS, v1, 0, 0x100000) )
    dword_46B098 |= 0x100000u;
  do
  {
    if ( ptrace(PTRACE_KILL, v1, 0) )
      sub_946B0("linux_check_ptrace_features: failed to kill child");
    result = sub_4C380(v1, &v5, 0);
  }
  while ( (unsigned __int8)v5 == 127 );
  return result;
}
