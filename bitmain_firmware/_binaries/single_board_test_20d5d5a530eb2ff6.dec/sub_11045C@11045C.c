char ***__fastcall sub_11045C(char ****a1, char **a2, int a3, int a4)
{
  char ***v8; // r4
  char ***v10; // r0
  int v11; // r2
  int v12; // r3

  if ( a1 && (v8 = *a1) != 0 )
  {
    if ( !sub_110404(*a1, a2, a3, a4) || !sub_11042C((int)v8, a3) )
      goto LABEL_4;
  }
  else
  {
    v10 = (char ***)sub_1155F0();
    v8 = v10;
    if ( !v10 )
    {
      sub_D0048(11, 109, 65, (int)"crypto/x509/x509_v3.c", 163);
      return 0;
    }
    if ( !sub_110404(v10, a2, v11, v12) )
    {
LABEL_14:
      if ( !a1 )
      {
LABEL_6:
        X509_EXTENSION_free(v8);
        return 0;
      }
LABEL_4:
      if ( *a1 == v8 )
        return 0;
      goto LABEL_6;
    }
    if ( !sub_11042C((int)v8, a3) )
    {
      if ( !a1 )
        goto LABEL_6;
      goto LABEL_4;
    }
  }
  if ( !sub_110444((_BOOL4)v8, a4) )
    goto LABEL_14;
  if ( !a1 || *a1 )
    return v8;
  *a1 = v8;
  return v8;
}
