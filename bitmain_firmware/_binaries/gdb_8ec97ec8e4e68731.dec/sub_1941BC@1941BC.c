int *__fastcall sub_1941BC(int *a1, char *s2)
{
  int *v2; // r4
  int *result; // r0
  int v5; // t1

  v2 = a1;
  result = (int *)*a1;
  if ( result )
  {
    while ( strcmp(*(const char **)(result[6] + 8), s2) )
    {
      v5 = v2[1];
      ++v2;
      result = (int *)v5;
      if ( !v5 )
        return result;
    }
    return v2;
  }
  return result;
}
