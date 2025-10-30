int __fastcall ps_get_thread_area(int a1, int a2, int a3, int *a4)
{
  int result; // r0
  int v7; // r2
  bool v8; // zf

  result = ptrace(PTRACE_GETFPXREGS|PTRACE_POKETEXT, a2, 0);
  v8 = result == 0;
  if ( result )
    result = 1;
  else
    v7 = *a4;
  if ( v8 )
    *a4 = v7 - a3;
  return result;
}
