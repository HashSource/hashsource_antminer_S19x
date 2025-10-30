int __fastcall sub_2B1D68(int a1, FILE *a2, int a3, int a4)
{
  const char *v6; // r6
  int result; // r0

  if ( !a4 )
    return fputs(*(const char **)(a3 + 4), a2);
  if ( a4 == 2 )
  {
    v6 = **(const char ***)(a3 + 16);
    sub_302AEC();
    return fprintf(a2, " %-5s %s", v6, *(const char **)(a3 + 4));
  }
  return result;
}
