int sub_27B40()
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
      result = sub_79BE8((unsigned __int8)i, 0);
  }
  return result;
}
