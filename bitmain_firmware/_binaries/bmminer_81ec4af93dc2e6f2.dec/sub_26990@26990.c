int __fastcall sub_26990(int result)
{
  int v1; // r4

  if ( !((dword_5BA924 <= result) | ((unsigned int)result >> 31)) )
  {
    v1 = result;
    if ( dword_5BA980 )
      return dword_5BA988 + 528 * v1;
    result = sub_24DB0(&dword_5BA920);
    if ( result >= 0 )
      return dword_5BA988 + 528 * v1;
  }
  return result;
}
