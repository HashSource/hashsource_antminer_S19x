void __fastcall sub_63AE0(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_63424("reverse-step", a2 + 1, a3 - 1);
  else
    sub_63424("step", a2, a3);
}
