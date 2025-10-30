int __fastcall sub_74810(int a1, char *s)
{
  bool v2; // zf

  v2 = s == 0;
  if ( s )
    v2 = a1 == 0;
  if ( !v2 )
    return (int)sub_74778(a1, s);
  return a1;
}
