unsigned int __fastcall sub_5B008(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // r4
  unsigned int v4; // r5

  if ( a2 <= a1 )
    return a2;
  v3 = a2;
  while ( 1 )
  {
    v4 = v3;
    if ( !isspace(*(unsigned __int8 *)--v3) )
      break;
    if ( v3 == a1 )
      return v3;
  }
  return v4;
}
