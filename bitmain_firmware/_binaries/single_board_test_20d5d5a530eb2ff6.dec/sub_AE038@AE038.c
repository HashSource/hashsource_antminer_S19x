int __fastcall sub_AE038(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r3
  int v5; // r2
  int v7; // r2

  if ( a2 < 0 )
    return -1;
  v3 = 1;
  if ( a3 > 30 )
  {
    do
    {
      v7 = a3 >> 7;
      ++v3;
      if ( !v7 )
        break;
      a3 = v7 >> 7;
      ++v3;
    }
    while ( a3 );
  }
  if ( a1 == 2 )
  {
    v4 = v3 + 3;
  }
  else
  {
    v4 = v3 + 1;
    if ( a2 > 127 )
    {
      v5 = a2;
      do
      {
        v5 >>= 8;
        ++v4;
      }
      while ( v5 );
    }
  }
  if ( 0x7FFFFFFF - a2 <= v4 )
    return -1;
  else
    return v4 + a2;
}
