char *__fastcall sub_7FA64(const char *a1)
{
  char *result; // r0
  size_t v3; // r0

  result = _strdup(a1);
  if ( !result )
  {
    v3 = strlen(a1);
    fprintf(stderr, off_B9468, v3);
    sub_7E2B8(1);
  }
  return result;
}
