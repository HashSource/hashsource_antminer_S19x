int __fastcall sub_6A508(int a1, const char **a2, const char ***a3)
{
  const char *v4; // r5
  int result; // r0

  v4 = *a2;
  result = strcmp(*a2, ".stab");
  if ( result )
  {
    result = strcmp(v4, ".mdebug");
    if ( !result )
      a3[1] = a2;
  }
  else
  {
    *a3 = a2;
  }
  return result;
}
