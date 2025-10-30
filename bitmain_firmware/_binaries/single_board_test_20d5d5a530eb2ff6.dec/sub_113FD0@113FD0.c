char ***__fastcall sub_113FD0(int **a1, char **a2, int a3, char *a4, size_t n, int a6, int a7)
{
  char ***result; // r0
  char ***v9; // r4
  int **v10; // r5

  result = sub_113F54(0, a2, a3, a4, n);
  v9 = result;
  if ( result )
  {
    v10 = sub_113D6C(a1, (int)result, a6, a7);
    X509_NAME_ENTRY_free(v9);
    return (char ***)v10;
  }
  return result;
}
