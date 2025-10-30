int __fastcall sub_140C7C(int a1, char *s1, const char *a3)
{
  int v6; // r4

  if ( !strcmp(s1, "dsa_paramgen_bits") || !strcmp(s1, "dsa_paramgen_q_bits") )
  {
    strtol(a3, 0, 10);
    return sub_DB77C(a1, 116, 2);
  }
  else
  {
    v6 = strcmp(s1, "dsa_paramgen_md");
    if ( v6 )
      return -2;
    if ( sub_D99DC((int)a3) )
      return sub_DB77C(a1, 116, 2);
    sub_D0048(10, 104, 106, (int)"crypto/dsa/dsa_pmeth.c", 187);
    return v6;
  }
}
