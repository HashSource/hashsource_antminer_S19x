int __fastcall sub_258300(unsigned __int8 **a1, unsigned __int8 **a2, unsigned __int8 *a3)
{
  unsigned __int8 *i; // r4
  int v7; // t1
  int result; // r0
  unsigned __int8 *v9; // r4
  int v10; // t1

  for ( i = *a1; ; *a1 = i )
  {
    v7 = *i++;
    result = isspace(v7);
    if ( !result )
      break;
  }
  v9 = *a2;
  if ( a3 > *a2 )
  {
    do
    {
      v10 = *v9++;
      result = isspace(v10);
      if ( !result )
        break;
      *a2 = v9;
    }
    while ( a3 != v9 );
  }
  return result;
}
