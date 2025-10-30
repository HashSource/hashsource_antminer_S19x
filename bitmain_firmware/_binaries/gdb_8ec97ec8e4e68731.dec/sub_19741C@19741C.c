size_t __fastcall sub_19741C(const char *a1)
{
  char **v1; // r4
  const char *v2; // r5
  char *v4; // t1
  size_t v5; // r0

  v1 = off_374070;
  v2 = "\"+\"";
  if ( "Oadd" )
  {
    do
    {
      v5 = strlen(v2);
      if ( !strncmp(a1, v2, v5) )
        return strlen(v2);
      v4 = v1[3];
      v1 += 3;
      v2 = v1[1];
    }
    while ( v4 );
  }
  if ( v2 )
    return strlen(v2);
  return 0;
}
