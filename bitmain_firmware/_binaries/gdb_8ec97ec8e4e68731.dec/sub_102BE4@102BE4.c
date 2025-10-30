FILE *__fastcall sub_102BE4(int a1)
{
  FILE *v2; // r0
  FILE *result; // r0

  v2 = *(FILE **)(a1 + 4);
  if ( v2 )
    fclose(v2);
  result = *(FILE **)(a1 + 8);
  if ( result )
    return (FILE *)fclose(result);
  return result;
}
