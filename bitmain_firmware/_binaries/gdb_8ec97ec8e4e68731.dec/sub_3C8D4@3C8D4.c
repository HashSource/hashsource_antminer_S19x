int __fastcall sub_3C8D4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r6
  enum __ptrace_request v7; // r4
  int *v8; // r5
  int v9; // r0
  int result; // r0
  int v11; // [sp+4h] [bp-1Ch] BYREF
  int v12; // [sp+8h] [bp-18h]
  int v13; // [sp+Ch] [bp-14h]
  _DWORD v14[3]; // [sp+14h] [bp-Ch] BYREF

  v11 = a2;
  v12 = a3;
  v13 = a4;
  if ( sub_98F78(&dword_46BBCC, &v11) )
  {
    v6 = ps_getpid_0(&dword_4878EC);
  }
  else
  {
    v14[0] = v11;
    v14[1] = v12;
    v14[2] = v13;
    v6 = sub_98F68(v14);
    if ( !v6 )
      v6 = ps_getpid_0(v14);
  }
  if ( sub_C4C8C() > 0 )
    v7 = PTRACE_SYSCALL;
  else
    v7 = PTRACE_CONT;
  if ( a5 )
    v7 = PTRACE_SINGLESTEP;
  v8 = _errno_location();
  *v8 = 0;
  v9 = sub_99CCC(a6);
  result = ptrace(v7, v6, 1, v9);
  if ( *v8 )
    sub_258B04("ptrace");
  return result;
}
