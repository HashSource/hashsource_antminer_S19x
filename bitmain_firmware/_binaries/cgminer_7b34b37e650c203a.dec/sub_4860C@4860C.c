const char *__fastcall sub_4860C(const char *result)
{
  char *v1; // r4
  size_t v2; // r0

  if ( result )
  {
    v1 = (char *)result;
    v2 = strlen(result);
    return (const char *)sub_485C8(v1, v2);
  }
  return result;
}
