int __fastcall sub_8E904(int a1, const void *a2, size_t a3)
{
  int n; // [sp+1Ch] [bp-10h]
  int v9; // [sp+20h] [bp-Ch]
  size_t v10; // [sp+24h] [bp-8h]

  v10 = *(_DWORD *)(a1 + 4) + a3;
  if ( v10 <= *(_DWORD *)(a1 + 8) )
    goto LABEL_7;
  v9 = sub_8DA1C(a1, *(_DWORD *)(a1 + 4) - *(_DWORD *)(a1 + 8) + a3);
  if ( v9 <= 0 )
  {
    if ( v9 < 0 )
    {
      sub_8CD10(2, "src/buf.c", 533, "zlog_buf_resize fail");
      return -1;
    }
    v10 = *(_DWORD *)(a1 + 4) + a3;
LABEL_7:
    memcpy(*(void **)(a1 + 4), a2, a3);
    *(_DWORD *)(a1 + 4) = v10;
    return 0;
  }
  sub_8CD10(2, "src/buf.c", 525, "conf limit to %ld, can't extend, so output", *(_DWORD *)(a1 + 20));
  n = *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4);
  memcpy(*(void **)(a1 + 4), a2, n);
  *(_DWORD *)(a1 + 4) += n;
  sub_8D980((_DWORD *)a1);
  return 1;
}
