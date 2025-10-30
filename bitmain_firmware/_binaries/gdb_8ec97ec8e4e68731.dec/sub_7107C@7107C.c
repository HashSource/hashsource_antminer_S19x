int __fastcall sub_7107C(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r4
  int result; // r0
  char *v3; // r5
  int v4; // t1

  v1 = a1;
  result = *a1;
  v3 = nptr;
  if ( result )
  {
    do
    {
      if ( result != 95 )
        *v3++ = tolower(result);
      v4 = *++v1;
      result = v4;
    }
    while ( v4 );
  }
  *v3 = 0;
  return result;
}
