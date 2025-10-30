int __fastcall sub_8B700(int a1, const void *a2, unsigned int a3, int a4, int a5, unsigned int a6, unsigned int a7)
{
  int v12; // [sp+18h] [bp-14h]
  unsigned int n; // [sp+1Ch] [bp-10h]
  size_t na; // [sp+1Ch] [bp-10h]
  unsigned int v15; // [sp+20h] [bp-Ch]
  size_t v16; // [sp+20h] [bp-Ch]
  unsigned int v17; // [sp+24h] [bp-8h]
  unsigned int v18; // [sp+24h] [bp-8h]

  if ( !*(_DWORD *)a1 )
  {
    sub_89984(2, "src/buf.c", 562, "pre-use of zlog_buf_resize fail, so can't convert");
    return -1;
  }
  if ( a7 && a3 >= a7 )
    v15 = a7;
  else
    v15 = a3;
  if ( a6 && v15 < a6 )
  {
    v17 = a6;
    n = a6 - v15;
  }
  else
  {
    v17 = v15;
    n = 0;
  }
  if ( v17 > *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4) )
  {
    v12 = sub_8A68C(a1, v17 - (*(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4)));
    if ( v12 > 0 )
    {
      sub_89984(2, "src/buf.c", 592, "conf limit to %ld, can't extend, so output", *(_DWORD *)(a1 + 20));
      v18 = *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4);
      if ( a4 )
      {
        if ( v15 >= v18 )
        {
          v15 = *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4);
          na = 0;
        }
        else
        {
          na = v18 - v15;
        }
        if ( na )
          memset((void *)(*(_DWORD *)(a1 + 4) + v15), 32, na);
        memcpy(*(void **)(a1 + 4), a2, v15);
      }
      else
      {
        if ( n >= v18 )
        {
          n = *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4);
          v16 = 0;
        }
        else
        {
          v16 = v18 - n;
        }
        if ( n )
        {
          if ( a5 )
            memset(*(void **)(a1 + 4), 48, n);
          else
            memset(*(void **)(a1 + 4), 32, n);
        }
        memcpy((void *)(*(_DWORD *)(a1 + 4) + n), a2, v16);
      }
      *(_DWORD *)(a1 + 4) += v18;
      sub_8A5EC((_DWORD *)a1);
      return 1;
    }
    if ( v12 < 0 )
    {
      sub_89984(2, "src/buf.c", 624, "zlog_buf_resize fail");
      return -1;
    }
  }
  if ( a4 )
  {
    if ( n )
      memset((void *)(*(_DWORD *)(a1 + 4) + v15), 32, n);
    memcpy(*(void **)(a1 + 4), a2, v15);
  }
  else
  {
    if ( n )
    {
      if ( a5 )
        memset(*(void **)(a1 + 4), 48, n);
      else
        memset(*(void **)(a1 + 4), 32, n);
    }
    memcpy((void *)(*(_DWORD *)(a1 + 4) + n), a2, v15);
  }
  *(_DWORD *)(a1 + 4) += v17;
  return 0;
}
