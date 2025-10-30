int __fastcall sub_897AC(int a1, _DWORD *a2)
{
  int v3; // r1
  unsigned int i; // [sp+Ch] [bp-8h]

  if ( a2[4] )
    return a2[4];
  sub_8C474(*a2, *(_DWORD *)(a1 + 8));
  for ( i = v3 + 1; i < *(_DWORD *)(a1 + 8); ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i) )
      return *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i);
  }
  return 0;
}
