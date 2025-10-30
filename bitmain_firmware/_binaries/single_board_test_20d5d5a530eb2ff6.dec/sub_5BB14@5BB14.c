unsigned int __fastcall sub_5BB14(int a1, int a2, size_t a3)
{
  bool v3; // zf
  int v7; // r7
  size_t v8; // r6
  size_t v9; // r4
  char *v10; // r3
  unsigned int v11; // r8

  v3 = a2 == 0;
  if ( a2 )
    v3 = a1 == 0;
  if ( v3 )
    return -1;
  if ( !a3 )
    return a3;
  v7 = a2;
  v8 = a3;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a1 + 12);
    v10 = (char *)v7;
    if ( v9 >= v8 )
      v9 = v8;
    v7 += v9;
    v11 = sub_57E70(*(_DWORD *)a1, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), v10, v9, 0);
    if ( sub_57568(v11) )
    {
      *(_DWORD *)(a1 + 20) = v11;
      return v11;
    }
    if ( v11 != fwrite(*(const void **)(a1 + 8), 1u, v11, *(FILE **)(a1 + 4)) )
      break;
    v8 -= v9;
    if ( !v8 )
      return a3;
  }
  *(_DWORD *)(a1 + 20) = -1;
  return -1;
}
