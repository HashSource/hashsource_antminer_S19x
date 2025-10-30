int __fastcall sub_E9EC0(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // r1
  unsigned __int8 *i; // r3

  if ( !a2 )
    return 0;
  if ( !*a1 )
    return *a1;
  v2 = &a1[a2];
  for ( i = a1 + 1; ; ++i )
  {
    if ( v2 == i )
      return v2 - a1;
    if ( !*i )
      break;
  }
  return i - a1;
}
