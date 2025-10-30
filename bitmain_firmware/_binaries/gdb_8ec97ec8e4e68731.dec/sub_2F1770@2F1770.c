bool __fastcall sub_2F1770(int a1, int a2)
{
  int v2; // r6
  size_t v6; // r2

  if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)(a2 + 4) )
    return 0;
  if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
    return 0;
  if ( *(unsigned __int16 *)(a1 + 8) != *(unsigned __int16 *)(a2 + 8) )
    return 0;
  v2 = strcmp((const char *)(a1 + 10), (const char *)(a2 + 10));
  if ( v2 )
    return 0;
  if ( (*(_BYTE *)(a1 + 10) != 101 || *(_BYTE *)(a1 + 11) != 104 || *(_BYTE *)(a1 + 12))
    && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32)
    && *(_DWORD *)(a1 + 36) == *(_DWORD *)(a2 + 36)
    && *(_DWORD *)(a1 + 40) == *(_DWORD *)(a2 + 40)
    && *(_DWORD *)(a1 + 44) == *(_DWORD *)(a2 + 44)
    && !memcmp((const void *)(a1 + 48), (const void *)(a2 + 48), 8u) )
  {
    if ( *(_DWORD *)(**(_DWORD **)(a1 + 56) + 60) == *(_DWORD *)(**(_DWORD **)(a2 + 56) + 60)
      && *(_DWORD *)(a1 + 60) == *(_DWORD *)(a2 + 60)
      && (v6 = *(unsigned __int8 *)(a1 + 63), v6 <= 0x32) )
    {
      return memcmp((const void *)(a1 + 65), (const void *)(a2 + 65), v6) == 0;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
