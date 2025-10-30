char ***__fastcall sub_114004(char ****a1, char *a2, int a3, char *a4, size_t n)
{
  char **v9; // r0
  char **v10; // r4
  char ***v11; // r5
  int v12; // r1
  int v13; // r2
  int v14; // r3

  v9 = sub_EB03C(a2, 0);
  v10 = v9;
  if ( v9 )
  {
    v11 = sub_113F54(a1, v9, a3, a4, n);
    ASN1_OBJECT_free(v10, v12, v13, v14);
    return v11;
  }
  else
  {
    sub_D0048(11, 131, 119, (int)"crypto/x509/x509name.c", 252);
    sub_D1240(2, "name=", a2);
    return 0;
  }
}
