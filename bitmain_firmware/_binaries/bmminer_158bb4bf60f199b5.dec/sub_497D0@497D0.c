char *__fastcall sub_497D0(char *a1)
{
  char **v2; // r3
  char *result; // r0

  if ( !a1 )
    return "http:";
  v2 = &off_81D74;
  result = "http0:";
  while ( 1 )
  {
    v2 += 2;
    if ( v2[1] == a1 )
      break;
    result = v2[2];
    if ( !result )
      return "invalid";
  }
  return result;
}
