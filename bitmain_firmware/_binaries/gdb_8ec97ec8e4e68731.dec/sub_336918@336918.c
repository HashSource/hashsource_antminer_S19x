unsigned __int8 *__fastcall sub_336918(unsigned __int8 *result, int a2)
{
  unsigned int v2; // r12
  int v3; // r1
  int v4; // r3

  v2 = ((a2 ^ 0x40u) >> 6) & 1;
  v3 = 0;
LABEL_2:
  while ( 2 )
  {
    v4 = *result;
    if ( !*result )
      return (unsigned __int8 *)v4;
    while ( !(v4 == 92 ? v2 : 0) )
    {
      if ( v4 == 125 )
      {
        if ( v3-- == 0 )
          return result;
      }
      else
      {
        if ( v4 != 44 )
        {
          ++result;
          if ( v4 == 123 )
            ++v3;
          goto LABEL_2;
        }
        if ( !v3 )
          return result;
      }
      v4 = *++result;
      if ( !*result )
        return (unsigned __int8 *)v4;
    }
    if ( result[1] )
    {
      result += 2;
      continue;
    }
    return (unsigned __int8 *)result[1];
  }
}
