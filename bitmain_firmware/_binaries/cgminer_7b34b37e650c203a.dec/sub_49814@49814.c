char *__fastcall sub_49814(char *a1, char *s)
{
  bool v2; // zf

  v2 = s == 0;
  if ( s )
    v2 = a1 == 0;
  if ( !v2 )
    return sub_49770(a1, s);
  return a1;
}
