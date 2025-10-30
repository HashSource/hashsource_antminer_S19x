int __fastcall sub_AE280(int a1, int a2)
{
  size_t v2; // r2
  int result; // r0

  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
    return *(_DWORD *)a1 - *(_DWORD *)a2;
  if ( !v2 )
    return *(_DWORD *)(a1 + 4) - *(_DWORD *)(a2 + 4);
  result = memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v2);
  if ( !result )
    return *(_DWORD *)(a1 + 4) - *(_DWORD *)(a2 + 4);
  return result;
}
