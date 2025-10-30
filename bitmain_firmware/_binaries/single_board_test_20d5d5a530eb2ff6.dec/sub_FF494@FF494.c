int __fastcall sub_FF494(int *a1, char *src, size_t n)
{
  unsigned int v3; // r3
  size_t v4; // r4
  char *v6; // r6
  unsigned int v7; // r2
  bool v8; // cc
  int v9; // r3
  int v10; // r0
  size_t v11; // r7
  int *v13; // r7
  int v14; // r8
  int v15; // r2
  size_t v16; // r7

  if ( n )
  {
    v3 = a1[5];
    v4 = n;
    v6 = src;
    v7 = v3 + 8 * n;
    v8 = v3 > v7;
    v9 = a1[6];
    v10 = a1[23];
    a1[5] = v7;
    if ( v8 )
      ++v9;
    a1[6] = v9 + (v4 >> 29);
    if ( v10 )
    {
      v13 = a1 + 7;
      if ( v4 <= 0x3F && v4 + v10 <= 0x3F )
      {
        memcpy((char *)v13 + v10, src, v4);
        a1[23] += v4;
        return 1;
      }
      v14 = 64 - v10;
      memcpy((char *)v13 + v10, src, 64 - v10);
      v4 -= v14;
      sub_FE23C(a1, (int)(a1 + 7), 1);
      a1[23] = 0;
      memset(a1 + 7, 0, 0x40u);
      v11 = v4 >> 6;
      v6 += v14;
      if ( !(v4 >> 6) )
      {
        if ( v4 )
          goto LABEL_6;
        return 1;
      }
    }
    else
    {
      v11 = v4 >> 6;
      if ( !(v4 >> 6) )
      {
LABEL_6:
        a1[23] = v4;
        memcpy(a1 + 7, v6, v4);
        return 1;
      }
    }
    v15 = v11;
    v16 = v11 << 6;
    v4 -= v16;
    sub_FE23C(a1, (int)v6, v15);
    v6 += v16;
    if ( v4 )
      goto LABEL_6;
    return 1;
  }
  return 1;
}
