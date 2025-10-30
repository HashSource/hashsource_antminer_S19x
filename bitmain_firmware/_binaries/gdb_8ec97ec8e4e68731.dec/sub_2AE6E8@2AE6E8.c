char **__fastcall sub_2AE6E8(int (*a1)(void))
{
  char ***v2; // r4
  char **v3; // t1

  v2 = off_470AA0;
  if ( !*off_470AA0 )
    return 0;
  while ( !a1() )
  {
    v3 = v2[1];
    ++v2;
    if ( !v3 )
      return 0;
  }
  return *v2;
}
