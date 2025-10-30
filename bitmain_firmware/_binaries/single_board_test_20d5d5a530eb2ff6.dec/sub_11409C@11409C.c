char ***__fastcall sub_11409C(char ****a1, unsigned int a2, int a3, char *a4, size_t n)
{
  char **v8; // r4
  char ***v9; // r5
  int v10; // r1
  int v11; // r2
  int v12; // r3

  v8 = sub_EAA20(a2);
  if ( v8 )
  {
    v9 = sub_113F54(a1, v8, a3, a4, n);
    ASN1_OBJECT_free(v8, v10, v11, v12);
    return v9;
  }
  else
  {
    sub_D0048(11, 114, 109, (int)"crypto/x509/x509name.c", 271);
    return 0;
  }
}
