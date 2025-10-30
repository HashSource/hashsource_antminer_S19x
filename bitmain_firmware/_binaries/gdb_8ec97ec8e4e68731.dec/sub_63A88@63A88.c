void __fastcall sub_63A88(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_63424("reverse-nexti", a2 + 1, a3 - 1);
  else
    sub_63424("nexti", a2, a3);
}
