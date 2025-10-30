int __fastcall sub_1A03E4(const char ***a1, const char *a2, int a3, int a4, int a5)
{
  const char *v7; // r4
  int result; // r0

  v7 = **a1;
  result = strcmp(v7, a2);
  if ( !result )
    return sub_1A0288(v7, a3, a4, a5);
  return result;
}
