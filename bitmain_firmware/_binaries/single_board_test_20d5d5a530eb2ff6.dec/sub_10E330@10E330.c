int __fastcall sub_10E330(char ****a1, char **a2, int a3, char *a4, int a5)
{
  int v9; // r4
  char ***v11; // r0
  int v12; // r2
  int v13; // r3

  if ( !a1 || (v9 = (int)*a1) == 0 )
  {
    v11 = (char ***)sub_114DC4();
    v9 = (int)v11;
    if ( !v11 )
    {
      sub_D0048(11, 137, 65, (int)"crypto/x509/x509_att.c", 196);
      return 0;
    }
    if ( sub_10E20C(v11, a2, v12, v13) && sub_10E234(v9, a3, a4, a5) )
    {
      if ( !a1 )
        return v9;
      goto LABEL_8;
    }
    if ( !a1 )
    {
LABEL_6:
      X509_ATTRIBUTE_free(v9);
      return 0;
    }
LABEL_4:
    if ( *a1 == (char ***)v9 )
      return 0;
    goto LABEL_6;
  }
  if ( !sub_10E20C(*a1, a2, a3, (int)a4) || !sub_10E234(v9, a3, a4, a5) )
    goto LABEL_4;
LABEL_8:
  if ( *a1 )
    return v9;
  *a1 = (char ***)v9;
  return v9;
}
