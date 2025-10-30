int __fastcall sub_C7620(int a1, int a2, int a3, int a4)
{
  char *v4; // r4
  int v7; // r0
  char *v8; // r3

  v4 = off_46C048;
  if ( off_46C048 != "auto" )
    return sub_25A418(a1, "Breakpoint condition evaluation mode is %s.\n", a4);
  v7 = off_489B60();
  v8 = v4 - 16;
  if ( v7 )
    v8 = v4 - 8;
  return sub_25A418(a1, "Breakpoint condition evaluation mode is %s (currently %s).\n", a4, v8);
}
