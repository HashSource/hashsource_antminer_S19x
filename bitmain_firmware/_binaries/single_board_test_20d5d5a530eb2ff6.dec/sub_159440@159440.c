int __fastcall sub_159440(int a1, char *s1, char *a3)
{
  int v7; // r4

  if ( strcmp(s1, "ec_paramgen_curve") )
  {
    if ( !strcmp(s1, "ec_param_enc") )
    {
      if ( !strcmp(a3, "explicit") || !strcmp(a3, "named_curve") )
        return sub_DB77C(a1, 408, 6);
    }
    else
    {
      v7 = strcmp(s1, "ecdh_kdf_md");
      if ( !v7 )
      {
        if ( sub_D99DC((int)a3) )
          return sub_DB77C(a1, 408, 1024);
        sub_D0048(16, 198, 151, (int)"crypto/ec/ec_pmeth.c", 381);
        return v7;
      }
      if ( !strcmp(s1, "ecdh_cofactor_mode") )
      {
        strtol(a3, 0, 10);
        return sub_DB77C(a1, 408, 1024);
      }
    }
    return -2;
  }
  if ( sub_C5060(a3) || sub_EAFD0((int)a3) || sub_EAF68((int)a3) )
    return sub_DB77C(a1, 408, 6);
  sub_D0048(16, 198, 141, (int)"crypto/ec/ec_pmeth.c", 365);
  return 0;
}
