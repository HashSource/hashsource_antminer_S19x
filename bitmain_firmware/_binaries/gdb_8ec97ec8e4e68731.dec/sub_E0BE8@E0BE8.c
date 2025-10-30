char *__fastcall sub_E0BE8(int a1, int a2)
{
  if ( a2 )
  {
    if ( !dword_46D448 )
      return *(char **)a2;
    a1 = a2;
    return (char *)sub_21B3C4(a1);
  }
  if ( !a1 )
    return "<unknown>";
  if ( dword_46D448 )
    return (char *)sub_21B3C4(a1);
  return *(char **)a1;
}
