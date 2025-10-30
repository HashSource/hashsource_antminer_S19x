int __fastcall sub_10E3F8(char ****a1, unsigned int a2, int a3, char *a4, int a5)
{
  char **v8; // r5
  int result; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3

  v8 = sub_EAA20(a2);
  if ( v8 )
  {
    result = sub_10E330(a1, v8, a3, a4, a5);
    if ( !result )
    {
      ASN1_OBJECT_free(v8, v10, v11, v12);
      return 0;
    }
  }
  else
  {
    sub_D0048(11, 136, 109, (int)"crypto/x509/x509_att.c", 177);
    return 0;
  }
  return result;
}
