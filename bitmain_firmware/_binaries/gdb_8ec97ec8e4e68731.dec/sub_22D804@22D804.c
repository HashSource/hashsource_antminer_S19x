int __fastcall sub_22D804(int a1, int a2, int a3, int a4)
{
  bool v6; // zf
  char *v7; // r3

  if ( dword_46DBC4 != 2 )
    return sub_25A418(a1, "Whether the target is always in non-stop mode is %s.\n", a4);
  v6 = off_489B0C() == 0;
  v7 = "off";
  if ( !v6 )
    v7 = "on";
  return sub_25A418(a1, "Whether the target is always in non-stop mode is %s (currently %s).\n", a4, v7);
}
