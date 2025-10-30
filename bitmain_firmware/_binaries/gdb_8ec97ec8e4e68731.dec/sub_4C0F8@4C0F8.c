int __fastcall sub_4C0F8(int a1, int a2)
{
  int v4; // r3

  v4 = dword_46B098;
  if ( dword_46B098 == -1 )
  {
    sub_4BE98();
    v4 = dword_46B098;
  }
  return ptrace(PTRACE_SETOPTIONS, a1, 0, v4 & (a2 | 8));
}
