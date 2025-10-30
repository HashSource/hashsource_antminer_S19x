int __fastcall sub_EB338(int a1, int a2)
{
  size_t v2; // r2

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 == *(_DWORD *)(a2 + 12) )
    return j_memcmp(*(const void **)(a1 + 16), *(const void **)(a2 + 16), v2);
  else
    return v2 - *(_DWORD *)(a2 + 12);
}
