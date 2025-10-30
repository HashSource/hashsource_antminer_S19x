bool sub_49AFC()
{
  int v0; // r4
  _BOOL4 result; // r0

  v0 = 0;
  while ( 1 )
  {
    if ( sub_26C0C(v0) )
    {
      result = sub_49A38(v0);
      if ( !result )
        break;
    }
    if ( ++v0 == 4 )
      return 1;
  }
  return result;
}
