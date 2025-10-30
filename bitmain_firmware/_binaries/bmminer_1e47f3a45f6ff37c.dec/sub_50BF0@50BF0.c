unsigned __int8 *__fastcall sub_50BF0(unsigned int *a1, int *a2)
{
  unsigned __int8 *v4; // r0

  v4 = (unsigned __int8 *)sub_50858(a1, a2);
  if ( !v4 )
    return 0;
  while ( *v4 != 45 )
  {
    v4 = sub_50914((int)v4, a1, a2);
    if ( !v4 )
      return 0;
  }
  --*a2;
  return v4 + 1;
}
