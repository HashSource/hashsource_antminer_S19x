int __fastcall sub_1C5C8(int a1, const char *a2, const char *a3, int a4)
{
  int v7; // [sp+14h] [bp-8h]

  if ( !*(_DWORD *)(a1 + 12) && *(_BYTE *)(a1 + 4) != 1 )
    sub_1BC00((const char **)a1, a2, a3, a4);
  if ( !*(_DWORD *)(a1 + 12) )
    return 0;
  v7 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(v7 + 8);
  if ( *(_DWORD *)(a1 + 12) )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4) = 0;
  }
  else if ( *(_BYTE *)(a1 + 44) )
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 8);
  --*(_DWORD *)(a1 + 28);
  return v7;
}
