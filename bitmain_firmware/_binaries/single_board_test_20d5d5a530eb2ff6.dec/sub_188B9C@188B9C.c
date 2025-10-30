int __fastcall sub_188B9C(int *a1, int *src, size_t n)
{
  int v4; // r0
  int *v6; // r6
  int *v7; // r7
  size_t v8; // r2
  size_t v9; // r3
  int *v10; // r1
  unsigned int v11; // r2

  v4 = a1[28];
  v6 = src;
  v7 = a1 + 12;
  v8 = 64 - v4;
  if ( 64 - v4 < n )
  {
    if ( v4 )
    {
      n -= v8;
      v6 = (int *)((char *)src + v8);
      memcpy((char *)v7 + v4, src, v8);
      sub_187680(a1, a1 + 12, 0x40u);
      a1[28] = 0;
      if ( n <= 0x40 )
      {
        v4 = 0;
        goto LABEL_8;
      }
    }
    else if ( n <= 0x40 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    v9 = n & 0x3F;
    v10 = v6;
    if ( (n & 0x3F) == 0 )
      v9 = 64;
    v11 = n - v9;
    n = v9;
    v6 = (int *)((char *)v6 + v11);
    sub_187680(a1, v10, v11);
    v4 = a1[28];
  }
LABEL_8:
  memcpy((char *)v7 + v4, v6, n);
  a1[28] += n;
  return 1;
}
