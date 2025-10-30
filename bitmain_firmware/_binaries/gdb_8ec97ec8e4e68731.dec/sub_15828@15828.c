int __fastcall sub_15828(int a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  int result; // r0
  int v4; // r3
  bool v5; // zf

  if ( !*(_DWORD *)(a1 + 20) )
    a1 = sub_94700(
           "linux-nat.c",
           1610,
           "%s: Assertion `%s' failed.",
           "int check_ptrace_stopped_lwp_gone(lwp_info*)",
           "lp->stopped");
  v1 = (_DWORD *)a1;
  v2 = sub_98F68();
  result = sub_4B9AC(v2);
  v5 = result == 0;
  if ( result )
  {
    result = 0;
  }
  else
  {
    v4 = 11;
    v1[11] = 0;
    v1[8] = 0;
  }
  if ( v5 )
  {
    v1[15] = v4;
    return 1;
  }
  return result;
}
