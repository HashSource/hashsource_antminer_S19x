const char *__fastcall sub_8D4E4(const char *result, int a2)
{
  if ( dword_4751C0 )
  {
    sub_1C4D40(stderr, "%s ", result);
    sub_8D490(stderr, a2);
    return (const char *)sub_1C4D40(stderr, (const char *)&word_356638);
  }
  return result;
}
