int __fastcall sub_242F00(int a1, int a2, int a3, int a4)
{
  int v4; // r2
  char *v6; // r3
  int v7; // r0

  if ( dword_46DCE0 != 2 )
    return sub_25A418(a1, "Debugger's interactive mode is %s.\n", a4);
  v4 = a4;
  if ( dword_487A50 )
  {
    v6 = "off";
  }
  else
  {
    v7 = sub_242EE0(dword_487668);
    v6 = "off";
    if ( v7 )
      v6 = "on";
  }
  return sub_25A418(a1, "Debugger's interactive mode is %s (currently %s).\n", v4, v6);
}
