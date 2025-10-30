size_t __fastcall sub_10E6E0(int a1, int a2)
{
  size_t result; // r0
  size_t v5; // r3

  if ( (!*(_DWORD *)(a1 + 12) || *(_DWORD *)(a1 + 4)) && sub_115C40(a1, 0) < 0 )
    return -2;
  if ( !*(_DWORD *)(a2 + 12) || *(_DWORD *)(a2 + 4) )
  {
    if ( sub_115C40(a2, 0) < 0 )
      return -2;
    result = *(_DWORD *)(a1 + 16);
    v5 = result - *(_DWORD *)(a2 + 16);
    if ( !v5 )
      goto LABEL_6;
    return v5;
  }
  result = *(_DWORD *)(a1 + 16);
  v5 = result - *(_DWORD *)(a2 + 16);
  if ( v5 )
    return v5;
LABEL_6:
  if ( result )
    return j_memcmp(*(const void **)(a1 + 12), *(const void **)(a2 + 12), result);
  return result;
}
