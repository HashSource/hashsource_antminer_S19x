int __fastcall sub_10E474(char ****a1, char *a2, int a3, char *a4, int a5)
{
  char **v9; // r0
  char **v10; // r4
  int v11; // r5
  int v12; // r1
  int v13; // r2
  int v14; // r3

  v9 = sub_EB03C(a2, 0);
  v10 = v9;
  if ( v9 )
  {
    v11 = sub_10E330(a1, v9, a3, a4, a5);
    ASN1_OBJECT_free(v10, v12, v13, v14);
    return v11;
  }
  else
  {
    sub_D0048(11, 140, 119, (int)"crypto/x509/x509_att.c", 227);
    sub_D1240(2, "name=", a2);
    return 0;
  }
}
