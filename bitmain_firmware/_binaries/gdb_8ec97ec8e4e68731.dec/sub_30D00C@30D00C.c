int __fastcall sub_30D00C(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r2
  int v2; // r12
  int v3; // r12
  int v4; // r3
  int v5; // r1

  v1 = *a1;
  v2 = **a1;
  if ( (word_438898[v2] & 4) != 0 )
  {
    v3 = v2 - 48;
    v4 = 0;
    do
    {
      *a1 = ++v1;
      v5 = *v1;
      v4 = v3 + 10 * v4;
      v3 = v5 - 48;
      if ( (word_438898[v5] & 4) == 0 )
        return v4 | (v4 >> 31);
    }
    while ( v4 <= (int)((-2147483601 - v5) / 0xAu) );
    do
      *a1 = ++v1;
    while ( (word_438898[*v1] & 4) != 0 );
  }
  return -1;
}
