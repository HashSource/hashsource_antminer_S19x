const char *__fastcall sub_13FAC(const char *result)
{
  char *v1; // r4
  size_t v2; // r1

  v1 = (char *)result;
  if ( result )
  {
    v2 = strlen(result);
    return (const char *)sub_13D28(v1, v2, 0);
  }
  return result;
}
