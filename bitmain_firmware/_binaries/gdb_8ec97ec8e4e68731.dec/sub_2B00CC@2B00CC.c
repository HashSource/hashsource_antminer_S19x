int __fastcall sub_2B00CC(int a1, FILE *a2, int a3, int a4)
{
  if ( !a4 )
    return fputs(*(const char **)(a3 + 4), a2);
  sub_302AEC();
  return fprintf(a2, " %-5s %s", **(const char ***)(a3 + 16), *(const char **)(a3 + 4));
}
