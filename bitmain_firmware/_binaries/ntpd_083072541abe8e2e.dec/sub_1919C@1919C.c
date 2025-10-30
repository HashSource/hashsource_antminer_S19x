const char *__fastcall sub_1919C(const char *result, int a2)
{
  if ( yydebug )
  {
    _fprintf_chk(stderr, 1, "%s ", result);
    sub_190F4(stderr, a2);
    return (const char *)fputc(10, stderr);
  }
  return result;
}
