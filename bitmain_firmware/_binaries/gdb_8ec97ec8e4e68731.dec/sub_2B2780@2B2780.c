int __fastcall sub_2B2780(int a1, int a2, _DWORD *a3)
{
  int v3; // r12
  unsigned int v4; // r5
  int v5; // r3
  int i; // r3
  int v7; // r3
  unsigned int v8; // lr

  if ( a2 == -1 )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    v3 = 0;
    do
    {
      while ( !a1 )
      {
        v4 = 0;
        v5 = 0;
        if ( a2 < ++v3 )
          goto LABEL_15;
      }
      for ( i = 30; i != -2; i -= 2 )
      {
        if ( (a1 & (3 << i)) != 0 )
          break;
      }
      ++v3;
      v7 = (i - 6) & ~((i - 6) >> 31);
      v8 = a1 & (255 << v7);
      v4 = v8 >> v7;
      if ( v8 <= 0xFF )
        v5 = 0;
      else
        v5 = (32 - v7) >> 1;
      a1 &= ~v8;
      if ( v8 > 0xFF )
        v5 <<= 8;
    }
    while ( a2 >= v3 );
LABEL_15:
    *a3 = a1;
    return v5 | v4;
  }
}
