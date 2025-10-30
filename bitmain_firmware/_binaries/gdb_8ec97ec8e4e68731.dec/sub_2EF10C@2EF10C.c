int __fastcall sub_2EF10C(unsigned int a1, int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r2
  unsigned int v5; // r3

  if ( a1 > 0x7F )
  {
    v3 = 1;
    do
    {
      a1 >>= 7;
      ++v3;
    }
    while ( a1 > 0x7F );
    v2 = v3;
  }
  else
  {
    v2 = 1;
  }
  v4 = *(_DWORD *)a2 & 1;
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    if ( v5 > 0x7F )
    {
      do
      {
        v5 >>= 7;
        ++v4;
      }
      while ( v5 > 0x7F );
    }
    else
    {
      v4 = 1;
    }
    v2 += v4;
  }
  if ( (*(_DWORD *)a2 & 2) != 0 )
    v2 += 1 + strlen(*(const char **)(a2 + 8));
  return v2;
}
