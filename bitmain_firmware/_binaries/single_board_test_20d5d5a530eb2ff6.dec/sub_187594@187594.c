int __fastcall sub_187594(int a1, __int64 *src, size_t n)
{
  int v4; // r0
  __int64 *v6; // r6
  int v7; // r7
  size_t v8; // r2
  size_t v9; // r3
  __int64 *v10; // r1
  unsigned int v11; // r2

  v4 = *(_DWORD *)(a1 + 224);
  v6 = src;
  v7 = a1 + 96;
  v8 = 128 - v4;
  if ( 128 - v4 < n )
  {
    if ( v4 )
    {
      n -= v8;
      v6 = (__int64 *)((char *)src + v8);
      memcpy((void *)(v4 + v7), src, v8);
      sub_180498((__int64 *)a1, (__int64 *)(a1 + 96), 0x80u);
      *(_DWORD *)(a1 + 224) = 0;
      if ( n <= 0x80 )
      {
        v4 = 0;
        goto LABEL_8;
      }
    }
    else if ( n <= 0x80 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    v9 = n & 0x7F;
    v10 = v6;
    if ( (n & 0x7F) == 0 )
      v9 = 128;
    v11 = n - v9;
    n = v9;
    v6 = (__int64 *)((char *)v6 + v11);
    sub_180498((__int64 *)a1, v10, v11);
    v4 = *(_DWORD *)(a1 + 224);
  }
LABEL_8:
  memcpy((void *)(v4 + v7), v6, n);
  *(_DWORD *)(a1 + 224) += n;
  return 1;
}
