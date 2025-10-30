int __fastcall sub_19418(int result, int a2)
{
  const char *v2; // r3

  v2 = (const char *)result;
  if ( !result )
    v2 = "Deleting";
  if ( yydebug )
  {
    _fprintf_chk(stderr, 1, "%s ", v2);
    sub_19370(stderr, a2);
    return fputc(10, stderr);
  }
  return result;
}
