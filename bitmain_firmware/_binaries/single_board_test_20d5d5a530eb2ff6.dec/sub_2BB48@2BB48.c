int sub_2BB48()
{
  int v0; // r2
  int result; // r0
  char *v2; // r3

  if ( !dword_227094 )
    return 0;
  v0 = 0;
  result = 0;
  v2 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264759;
  do
  {
    if ( *++v2 )
    {
      if ( result )
      {
        if ( result >= v2[14] )
          result = v2[14];
      }
      else
      {
        result = v2[14];
      }
    }
    ++v0;
  }
  while ( v0 != dword_227094 );
  return result;
}
