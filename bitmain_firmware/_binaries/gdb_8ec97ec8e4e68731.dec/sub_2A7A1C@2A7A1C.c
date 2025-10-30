int __fastcall sub_2A7A1C(int a1)
{
  int v2; // r3

  if ( (*(_BYTE *)(a1 + 40) & 7) != 1 )
    return 0;
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
  if ( v2 == 3 )
    return *(_DWORD *)(*(_DWORD *)(a1 + 160) + 28);
  if ( v2 != 5 )
    return 0;
  return *(_DWORD *)(*(_DWORD *)(a1 + 160) + 528);
}
