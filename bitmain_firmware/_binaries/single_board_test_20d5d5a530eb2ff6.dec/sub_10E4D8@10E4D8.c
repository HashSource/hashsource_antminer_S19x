int __fastcall sub_10E4D8(void ***a1, char *a2, int a3, char *a4, int a5)
{
  int result; // r0
  int v7; // r4
  void **v8; // r5

  result = sub_10E474(0, a2, a3, a4, a5);
  v7 = result;
  if ( result )
  {
    v8 = sub_10E184(a1, result);
    X509_ATTRIBUTE_free(v7);
    return (int)v8;
  }
  return result;
}
