char ***__fastcall sub_1104F8(char ****a1, unsigned int a2, int a3, int a4)
{
  char **v7; // r5
  char ***result; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3

  v7 = sub_EAA20(a2);
  if ( v7 )
  {
    result = sub_11045C(a1, v7, a3, a4);
    if ( !result )
    {
      ASN1_OBJECT_free(v7, v9, v10, v11);
      return 0;
    }
  }
  else
  {
    sub_D0048(11, 108, 109, (int)"crypto/x509/x509_v3.c", 145);
    return 0;
  }
  return result;
}
