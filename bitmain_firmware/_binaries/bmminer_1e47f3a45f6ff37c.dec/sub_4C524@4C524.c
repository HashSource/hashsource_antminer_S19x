int sub_4C524()
{
  int v0; // r4
  int result; // r0

  v0 = 0;
  while ( 1 )
  {
    if ( sub_26C0C(v0) )
    {
      result = sub_4C304(v0);
      if ( result == 1 )
        break;
    }
    if ( ++v0 == 4 )
      return 0;
  }
  return result;
}
