regex_t *__fastcall sub_1636B8(regex_t *a1, const char *a2, int a3, const char *a4)
{
  int v6; // r0
  int v7; // r6
  size_t v9; // r0
  size_t v10; // r8
  char *v11; // r7

  v6 = regcomp(a1, a2, a3);
  v7 = v6;
  if ( v6 )
  {
    v9 = regerror(v6, a1, 0, 0);
    v10 = v9;
    if ( v9 )
      v11 = (char *)sub_9836C(v9);
    else
      v11 = 0;
    regerror(v7, a1, v11, v10);
    sub_946E0("%s: %s", a4, v11);
  }
  return a1;
}
