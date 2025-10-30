int __fastcall sub_8CB38(int a1, _DWORD *a2)
{
  int v3; // r1
  unsigned int i; // [sp+Ch] [bp-8h]

  if ( a2[4] )
    return a2[4];
  sub_8F7E4(*a2, *(_DWORD *)(a1 + 8));
  for ( i = v3 + 1; *(_DWORD *)(a1 + 8) > i; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i) )
      return *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i);
  }
  return 0;
}
