bool sub_47B84()
{
  int v0; // r4
  _BOOL4 result; // r0

  v0 = 0;
  while ( 1 )
  {
    if ( sub_266F0(v0) )
    {
      result = sub_47AD4(v0);
      if ( !result )
        break;
    }
    if ( ++v0 == 4 )
      return 1;
  }
  return result;
}
