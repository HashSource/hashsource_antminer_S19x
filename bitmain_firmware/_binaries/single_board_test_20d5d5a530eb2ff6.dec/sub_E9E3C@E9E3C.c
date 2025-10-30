char *__fastcall sub_E9E3C(char *result)
{
  const char *v1; // r6
  size_t v2; // r0
  char *v3; // r4

  if ( result )
  {
    v1 = result;
    v2 = strlen(result);
    result = (char *)CRYPTO_malloc((void *)(v2 + 1));
    v3 = result;
    if ( result )
    {
      strcpy(result, v1);
      return v3;
    }
  }
  return result;
}
