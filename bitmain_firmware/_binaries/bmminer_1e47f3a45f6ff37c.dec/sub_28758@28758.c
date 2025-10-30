int __fastcall sub_28758(int a1, int a2)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      sub_7A750((unsigned __int8)i);
      if ( a2 )
        result = sub_79D8C((unsigned __int8)i);
      else
        result = sub_79DE4((unsigned __int8)i);
    }
  }
  return result;
}
