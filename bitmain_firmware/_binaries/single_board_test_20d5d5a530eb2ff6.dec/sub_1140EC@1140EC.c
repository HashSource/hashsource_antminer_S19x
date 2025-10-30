char ***__fastcall sub_1140EC(int **a1, unsigned int a2, int a3, char *a4, size_t a5, int a6, int a7)
{
  char ***result; // r0
  char ***v9; // r4
  int **v10; // r5

  result = sub_11409C(0, a2, a3, a4, a5);
  v9 = result;
  if ( result )
  {
    v10 = sub_113D6C(a1, (int)result, a6, a7);
    X509_NAME_ENTRY_free(v9);
    return (char ***)v10;
  }
  return result;
}
