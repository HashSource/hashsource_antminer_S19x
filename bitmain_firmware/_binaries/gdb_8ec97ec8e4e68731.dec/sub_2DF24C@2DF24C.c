char *__fastcall sub_2DF24C(int a1, const char *a2, int a3)
{
  const char *v3; // r4
  size_t v6; // r7
  size_t v7; // r0
  char *v8; // r6

  v3 = ".rel";
  if ( a3 )
    v3 = ".rela";
  if ( !a2 )
    return 0;
  v6 = strlen(v3);
  v7 = strlen(a2);
  v8 = (char *)sub_2ACBF4(a1, v6 + v7 + 1);
  sprintf(v8, "%s%s", v3, a2);
  return v8;
}
