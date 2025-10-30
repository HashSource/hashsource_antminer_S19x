char ***__fastcall sub_113F54(char ****a1, char **a2, int a3, char *a4, size_t n)
{
  char ***v9; // r4
  char ***v11; // r0
  int v12; // r2
  int v13; // r3

  if ( a1 )
  {
    v9 = *a1;
    if ( *a1 )
    {
      if ( sub_113E78(*a1, a2, a3, (int)a4) && sub_113EC0((int)v9, a3, a4, n) )
        goto LABEL_8;
LABEL_4:
      if ( *a1 == v9 )
        return 0;
LABEL_5:
      X509_NAME_ENTRY_free(v9);
      return 0;
    }
  }
  v11 = (char ***)sub_115798();
  v9 = v11;
  if ( !v11 )
    return 0;
  if ( !sub_113E78(v11, a2, v12, v13) || !sub_113EC0((int)v9, a3, a4, n) )
  {
    if ( !a1 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( !a1 )
    return v9;
LABEL_8:
  if ( *a1 )
    return v9;
  *a1 = v9;
  return v9;
}
