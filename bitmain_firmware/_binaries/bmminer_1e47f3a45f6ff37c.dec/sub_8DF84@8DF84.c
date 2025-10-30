int __fastcall sub_8DF84(int a1, unsigned int a2, unsigned int a3)
{
  char v7; // [sp+23h] [bp-21h] BYREF
  size_t v8; // [sp+24h] [bp-20h]
  int v9; // [sp+28h] [bp-1Ch]
  size_t v10; // [sp+2Ch] [bp-18h]
  size_t n; // [sp+30h] [bp-14h]
  size_t v12; // [sp+34h] [bp-10h]
  size_t v13; // [sp+38h] [bp-Ch]
  void *src; // [sp+3Ch] [bp-8h]

  if ( !*(_DWORD *)a1 )
  {
    sub_8CD10(2, "src/buf.c", 276, "pre-use of zlog_buf_resize fail, so can't convert");
    return -1;
  }
  src = &v7;
  do
  {
    src = (char *)src - 1;
    *(_BYTE *)src = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  v12 = &v7 - (_BYTE *)src;
  if ( a3 <= &v7 - (_BYTE *)src )
  {
    n = 0;
    v10 = v12;
  }
  else
  {
    n = a3 - v12;
    v10 = a3;
  }
  v13 = *(_DWORD *)(a1 + 4) + v10;
  if ( v13 > *(_DWORD *)(a1 + 8) )
  {
    v9 = sub_8DA1C(a1, *(_DWORD *)(a1 + 4) - *(_DWORD *)(a1 + 8) + v10);
    if ( v9 > 0 )
    {
      sub_8CD10(2, "src/buf.c", 302, "conf limit to %ld, can't extend, so output", *(_DWORD *)(a1 + 20));
      v8 = *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4);
      if ( v8 > n )
      {
        v12 = v8 - n;
      }
      else
      {
        n = v8;
        v12 = 0;
      }
      if ( n )
        memset(*(void **)(a1 + 4), 48, n);
      memcpy((void *)(*(_DWORD *)(a1 + 4) + n), src, v12);
      *(_DWORD *)(a1 + 4) += v8;
      sub_8D980((_DWORD *)a1);
      return 1;
    }
    if ( v9 < 0 )
    {
      sub_8CD10(2, "src/buf.c", 318, "zlog_buf_resize fail");
      return -1;
    }
    v13 = *(_DWORD *)(a1 + 4) + v10;
  }
  if ( n )
    memset(*(void **)(a1 + 4), 48, n);
  memcpy((void *)(*(_DWORD *)(a1 + 4) + n), src, v12);
  *(_DWORD *)(a1 + 4) = v13;
  return 0;
}
