int __fastcall sub_8AF08(int a1, __int64 a2, unsigned int a3)
{
  bool v5; // cc
  char v6; // r2
  __int64 v8; // [sp+8h] [bp-4Ch]
  int v10; // [sp+2Ch] [bp-28h] BYREF
  size_t v11; // [sp+30h] [bp-24h]
  int v12; // [sp+34h] [bp-20h]
  unsigned int v13; // [sp+38h] [bp-1Ch]
  size_t v14; // [sp+3Ch] [bp-18h]
  size_t n; // [sp+40h] [bp-14h]
  size_t v16; // [sp+44h] [bp-10h]
  size_t v17; // [sp+48h] [bp-Ch]
  void *src; // [sp+4Ch] [bp-8h]

  v8 = a2;
  if ( !*(_DWORD *)a1 )
  {
    sub_89984(2, "src/buf.c", 342, "pre-use of zlog_buf_resize fail, so can't convert");
    return -1;
  }
  src = &v10;
  v5 = HIDWORD(a2) != 0;
  if ( !HIDWORD(a2) )
    v5 = 0;
  if ( v5 )
  {
    do
    {
      sub_8CAB8(v8, HIDWORD(v8), 10, 0);
      src = (char *)src - 1;
      *(_BYTE *)src = v6 + 48;
      v8 = sub_8CAB8(v8, HIDWORD(v8), 10, 0);
    }
    while ( v8 );
  }
  else
  {
    v13 = a2;
    do
    {
      src = (char *)src - 1;
      *(_BYTE *)src = v13 % 0xA + 48;
      v13 /= 0xAu;
    }
    while ( v13 );
  }
  v16 = (char *)&v10 - (_BYTE *)src;
  if ( (char *)&v10 - (_BYTE *)src >= a3 )
  {
    n = 0;
    v14 = v16;
  }
  else
  {
    n = a3 - v16;
    v14 = a3;
  }
  v17 = *(_DWORD *)(a1 + 4) + v14;
  if ( v17 > *(_DWORD *)(a1 + 8) )
  {
    v12 = sub_8A68C(a1, v14 - (*(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4)));
    if ( v12 > 0 )
    {
      sub_89984(2, "src/buf.c", 393, "conf limit to %ld, can't extend, so output", *(_DWORD *)(a1 + 20));
      v11 = *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4);
      if ( v11 > n )
      {
        v16 = v11 - n;
      }
      else
      {
        n = v11;
        v16 = 0;
      }
      if ( n )
        memset(*(void **)(a1 + 4), 48, n);
      memcpy((void *)(*(_DWORD *)(a1 + 4) + n), src, v16);
      *(_DWORD *)(a1 + 4) += v11;
      sub_8A5EC((_DWORD *)a1);
      return 1;
    }
    if ( v12 < 0 )
    {
      sub_89984(2, "src/buf.c", 409, "zlog_buf_resize fail");
      return -1;
    }
    v17 = *(_DWORD *)(a1 + 4) + v14;
  }
  if ( n )
    memset(*(void **)(a1 + 4), 48, n);
  memcpy((void *)(*(_DWORD *)(a1 + 4) + n), src, v16);
  *(_DWORD *)(a1 + 4) = v17;
  return 0;
}
