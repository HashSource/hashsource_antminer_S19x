const char *__fastcall sub_274340(char *s2)
{
  char **v1; // r4
  const char *result; // r0
  const char *v4; // t1

  v1 = a7;
  result = "btrace.dtd";
  if ( "btrace.dtd" )
  {
    while ( strcmp(result, s2) )
    {
      v4 = v1[2];
      v1 += 2;
      result = v4;
      if ( !v4 )
        return result;
    }
    return v1[1];
  }
  return result;
}
