int __fastcall sub_2A9C4(int result, unsigned int *a2, unsigned int a3)
{
  unsigned int v3; // r2
  unsigned int *v4; // r2
  unsigned int v5; // t1

  v3 = a3 >> 2;
  if ( v3 )
  {
    v4 = &a2[v3];
    result -= 4;
    do
    {
      v5 = *a2++;
      *(_DWORD *)(result + 4) = bswap32(v5);
      result += 4;
    }
    while ( a2 != v4 );
  }
  return result;
}
