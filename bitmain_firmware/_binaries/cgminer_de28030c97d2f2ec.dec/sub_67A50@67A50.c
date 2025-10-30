bool __fastcall sub_67A50(int a1, int a2)
{
  return *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12)
      && !memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), *(_DWORD *)(a1 + 12));
}
