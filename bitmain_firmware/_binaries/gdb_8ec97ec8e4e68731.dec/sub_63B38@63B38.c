void __fastcall sub_63B38(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_63424("reverse-stepi", a2 + 1, a3 - 1);
  else
    sub_63424("stepi", a2, a3);
}
