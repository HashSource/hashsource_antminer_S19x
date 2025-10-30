size_t __fastcall sub_303E5C(int a1, void *dest, size_t n)
{
  size_t v3; // r3
  size_t v4; // r5
  int v8; // r3
  size_t v9; // r3

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 >= n )
    v4 = n;
  else
    v4 = *(_DWORD *)(a1 + 4);
  if ( !v4 )
    return 0;
  *(_DWORD *)(a1 + 4) = v3 - v4;
  memcpy(dest, *(const void **)a1, v4);
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 24);
  if ( v8 == 1 )
  {
    *(_DWORD *)(a1 + 48) = sub_30C0D0(*(_DWORD *)(a1 + 48), dest, v4);
  }
  else if ( v8 == 2 )
  {
    *(_DWORD *)(a1 + 48) = sub_30C694(*(_DWORD *)(a1 + 48), dest, v4);
  }
  v9 = *(_DWORD *)(a1 + 8) + v4;
  *(_DWORD *)a1 += v4;
  *(_DWORD *)(a1 + 8) = v9;
  return v4;
}
