FILE *__fastcall sub_2464B4(int a1)
{
  void *v2; // r0
  FILE *result; // r0

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    free(v2);
  result = *(FILE **)(a1 + 4);
  if ( result )
    return (FILE *)fclose(result);
  return result;
}
