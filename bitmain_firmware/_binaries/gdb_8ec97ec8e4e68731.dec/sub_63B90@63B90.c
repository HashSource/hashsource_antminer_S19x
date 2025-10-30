void __fastcall sub_63B90(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_63424("reverse-finish", a2 + 1, a3 - 1);
  else
    sub_63424("finish", a2, a3);
}
