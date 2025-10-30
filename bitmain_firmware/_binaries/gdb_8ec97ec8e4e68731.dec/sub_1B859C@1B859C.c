const char *__fastcall sub_1B859C(int a1, const char *a2)
{
  const char *result; // r0

  result = (const char *)((int (*)(void))loc_1B7C78)();
  if ( result )
  {
    result = **(const char ***)result;
    if ( result )
      return (const char *)(strcmp(result, a2) == 0);
  }
  return result;
}
