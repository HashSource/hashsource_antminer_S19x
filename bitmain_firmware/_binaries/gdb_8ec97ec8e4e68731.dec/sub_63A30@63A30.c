void __fastcall sub_63A30(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_63424("reverse-next", a2 + 1, a3 - 1);
  else
    sub_63424("next", a2, a3);
}
