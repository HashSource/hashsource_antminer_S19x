int __fastcall sub_42D0C(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r3
  int v3; // t1
  unsigned int v5; // r3
  bool v6; // cc
  unsigned __int8 *i; // r2
  unsigned int v8; // r12
  bool v9; // cc

  if ( a2 == a1 )
    return 0;
  if ( (unsigned int)*(a2 - 1) - 33 > 0x5E )
  {
    v2 = a2 - 1;
    do
    {
      a2 = v2;
      if ( a1 == v2 )
        return 0;
      v3 = *--v2;
    }
    while ( (unsigned int)(v3 - 33) > 0x5E );
  }
  v5 = *a1;
  v6 = v5 > 9;
  if ( v5 != 9 )
    v6 = v5 - 32 > 0x5F;
  if ( v6 )
    return 0;
  for ( i = a1 + 1; a2 != i; ++i )
  {
    v8 = *i;
    v9 = v8 > 9;
    if ( v8 != 9 )
      v9 = v8 - 32 > 0x5F;
    if ( v9 )
      return i - a1;
  }
  return a2 - a1;
}
