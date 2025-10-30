int __fastcall sub_186FCC(int a1, int a2, int a3, int a4)
{
  const char *v4; // r1
  int v5; // r2
  int v7; // r5

  if ( dword_46D584 == 2 )
  {
    v7 = a1;
    sub_232950(a1);
    v4 = "Debugger's willingness to use displaced stepping to step over breakpoints is %s (currently %s).\n";
    v5 = a4;
    a1 = v7;
  }
  else
  {
    v4 = "Debugger's willingness to use displaced stepping to step over breakpoints is %s.\n";
    v5 = a4;
  }
  return sub_25A418(a1, v4, v5);
}
