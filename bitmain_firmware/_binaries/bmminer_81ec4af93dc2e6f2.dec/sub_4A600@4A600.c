int sub_4A600()
{
  int v0; // r4
  int result; // r0

  v0 = 0;
  while ( 1 )
  {
    if ( sub_266F0(v0) )
    {
      result = sub_4A408(v0);
      if ( result == 1 )
        break;
    }
    if ( ++v0 == 4 )
      return 0;
  }
  return result;
}
