int __fastcall sub_304148(int a1)
{
  int v2; // r6
  int result; // r0
  size_t v4; // r4
  size_t v5; // r3
  int v6; // r2
  bool v7; // zf
  size_t v8; // r1

  v2 = *(_DWORD *)(a1 + 28);
  result = sub_30B408(v2);
  v4 = *(_DWORD *)(v2 + 20);
  if ( v4 >= *(_DWORD *)(a1 + 16) )
    v4 = *(_DWORD *)(a1 + 16);
  if ( v4 )
  {
    memcpy(*(void **)(a1 + 12), *(const void **)(v2 + 16), v4);
    v5 = *(_DWORD *)(v2 + 20) - v4;
    v6 = *(_DWORD *)(a1 + 16);
    v7 = *(_DWORD *)(v2 + 20) == v4;
    result = *(_DWORD *)(v2 + 16) + v4;
    v8 = *(_DWORD *)(a1 + 20) + v4;
    *(_DWORD *)(a1 + 12) += v4;
    *(_DWORD *)(v2 + 16) = result;
    *(_DWORD *)(a1 + 20) = v8;
    *(_DWORD *)(a1 + 16) = v6 - v4;
    *(_DWORD *)(v2 + 20) = v5;
    if ( v7 )
      *(_DWORD *)(v2 + 16) = *(_DWORD *)(v2 + 8);
  }
  return result;
}
