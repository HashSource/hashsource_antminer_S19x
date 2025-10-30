void *__fastcall sub_33B5C(int a1)
{
  void *result; // r0

  result = (void *)sub_183680(a1, dword_471ACC);
  if ( result )
  {
    free(result);
    return (void *)sub_183678(a1, dword_471ACC, 0);
  }
  return result;
}
