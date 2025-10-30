bool __fastcall sub_113E78(char ***a1, char **a2, int a3, int a4)
{
  bool v4; // zf
  char **v7; // r3

  v4 = a2 == 0;
  if ( a2 )
    v4 = a1 == 0;
  if ( v4 )
  {
    sub_D0048(11, 115, 67, (int)"crypto/x509/x509name.c", 310);
    return 0;
  }
  else
  {
    ASN1_OBJECT_free(*a1, a2, a3, a4);
    v7 = sub_EB288(a2);
    *a1 = v7;
    return v7 != 0;
  }
}
