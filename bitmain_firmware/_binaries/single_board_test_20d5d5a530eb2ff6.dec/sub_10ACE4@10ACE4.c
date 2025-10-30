char **__fastcall sub_10ACE4(char *s2)
{
  int v2; // r0

  if ( !s2 )
    return &off_21FBBC;
  v2 = strcmp(off_21FBBC, s2);
  if ( v2 )
  {
    if ( !strcmp(off_21FBC8, s2) )
    {
      v2 = 1;
    }
    else if ( !strcmp(off_21FBD4, s2) )
    {
      v2 = 2;
    }
    else if ( !strcmp(off_21FBE0, s2) )
    {
      v2 = 3;
    }
    else if ( !strcmp(off_21FBEC, s2) )
    {
      v2 = 4;
    }
    else if ( !strcmp(off_21FBF8, s2) )
    {
      v2 = 5;
    }
    else
    {
      if ( strcmp(off_21FC04, s2) )
        return 0;
      v2 = 6;
    }
  }
  return &(&off_21FBBC)[3 * v2];
}
