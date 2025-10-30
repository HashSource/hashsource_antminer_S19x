void *__fastcall sub_782A0(int *a1, char *src, size_t n)
{
  char *v4; // r7
  unsigned int v6; // r2
  size_t v7; // r3
  int v8; // r10
  char *v9; // r9
  int v11; // r4
  size_t v12; // r3

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/sha1.c", 296, 2, "context != 0");
  v4 = src;
  if ( !src )
    sub_6ECC0((int)"./../lib/isc/sha1.c", 297, 2, "data != 0");
  v6 = a1[5];
  v7 = 8 * n + v6;
  v8 = (v6 >> 3) & 0x3F;
  a1[5] = v7;
  if ( __CFADD__(8 * n, v6) )
  {
    src = (char *)a1[6];
    v7 = (n >> 29) + 1;
  }
  v9 = (char *)a1 + v8 + 28;
  if ( __CFADD__(8 * n, v6) )
    a1[6] = (int)&src[v7];
  if ( n + v8 > 0x3F )
  {
    v11 = 64 - v8;
    v9 = (char *)(a1 + 7);
    memcpy((char *)a1 + v8 + 28, v4, 64 - v8);
    sub_76CA4(a1, (unsigned int *)a1 + 7);
    if ( n > 127 - v8 )
    {
      do
      {
        sub_76CA4(a1, (unsigned int *)&v4[v11]);
        v12 = v11 + 127;
        v11 += 64;
      }
      while ( n > v12 );
    }
    v4 += v11;
    n -= v11;
  }
  return memcpy(v9, v4, n);
}
