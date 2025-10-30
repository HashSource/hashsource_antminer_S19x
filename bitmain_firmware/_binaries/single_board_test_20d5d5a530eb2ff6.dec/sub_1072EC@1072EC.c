int __fastcall sub_1072EC(int a1, char *s1, char *a3)
{
  int v6; // r4

  if ( strcmp(s1, "ec_paramgen_curve") )
  {
    if ( !strcmp(s1, "ec_param_enc") && (!strcmp(a3, "explicit") || !strcmp(a3, "named_curve")) )
      return sub_DB77C(a1, 408, 6);
    else
      return -2;
  }
  v6 = 0;
  if ( !sub_C5060(a3) && !sub_EAFD0((int)a3) && !sub_EAF68((int)a3) )
  {
    sub_D0048(53, 110, 108, (int)"crypto/sm2/sm2_pmeth.c", 241);
    return v6;
  }
  return sub_DB77C(a1, 408, 6);
}
