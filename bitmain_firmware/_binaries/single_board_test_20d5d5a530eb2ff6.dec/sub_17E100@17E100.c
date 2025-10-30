char **__fastcall sub_17E100(unsigned int a1, const char *a2, size_t a3, int a4, int a5, int a6, size_t *a7)
{
  char *v11; // r0
  int v12; // r1
  int v13; // r0
  char **result; // r0
  int v15; // r5

  v11 = sub_EAAB4(a1);
  v12 = sub_D99BC((int)v11);
  if ( v12 )
    v13 = -1;
  else
    v13 = a1;
  result = (char **)sub_162510(v13, v12, a2, a3, a4, a5, a6, a7);
  v15 = (int)result;
  if ( result )
  {
    result = (char **)sub_17E0C8(result);
    if ( !result )
    {
      sub_12EF2C(v15);
      return 0;
    }
  }
  return result;
}
