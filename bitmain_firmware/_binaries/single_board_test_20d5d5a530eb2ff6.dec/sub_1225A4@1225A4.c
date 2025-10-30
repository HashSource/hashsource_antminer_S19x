int __fastcall sub_1225A4(char *a1, int a2, void ***a3)
{
  int result; // r0
  void *v6; // r6
  int v7; // r4

  if ( !a2 )
    return 1;
  result = (int)sub_122434(0, a2);
  v6 = (void *)result;
  if ( result )
  {
    v7 = sub_121F9C(a1, (char *)result, a3);
    CRYPTO_free(v6);
    return v7;
  }
  return result;
}
