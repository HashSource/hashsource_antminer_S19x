_BYTE *__fastcall sub_15C34C(_BYTE *result, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  bool v6; // zf
  _BYTE *v7; // r1
  _BYTE *v10; // r1

  v6 = a3 == 0;
  v7 = &result[a2];
  if ( v6 )
  {
    v10 = v7 - 1;
    if ( result <= v10 )
    {
      --result;
      do
      {
        *v10-- = a5;
        a5 = (a5 >> 8) | (a6 << 24);
        a6 >>= 8;
      }
      while ( result != v10 );
    }
  }
  else if ( result < v7 )
  {
    do
    {
      *result++ = a5;
      a5 = (a5 >> 8) | (a6 << 24);
      a6 >>= 8;
    }
    while ( v7 != result );
  }
  return result;
}
