int sub_3C730()
{
  int result; // r0
  __pid_t v1; // r5
  int stat_loc; // [sp+4h] [bp-8h] BYREF

  result = ps_getpid_0(&dword_4878EC);
  v1 = result;
  if ( result )
  {
    ptrace(PTRACE_KILL, result, 0);
    waitpid(v1, &stat_loc, 0);
    return ((int (__fastcall *)(int, int, int))loc_230B18)(dword_4878EC, dword_4878F0, dword_4878F4);
  }
  return result;
}
